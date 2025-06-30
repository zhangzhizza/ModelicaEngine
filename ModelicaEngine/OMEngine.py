# Author: Zhiang Zhang
# First create: 2024-01-24
import os
import time
import random
import traceback
import asyncio
import threading

from asyncua import Client

from .OMEngineAbstract import OMEngineAbstract


class Engine(OMEngineAbstract):

    def simulate(
        self,
        set_params_dict: dict,
        start_time: int,
        final_time: int,
        step_time: int,
        result_filter: list,
        method: str = "dassl",
        rtol: float = 1e-6,
        res_path: str = None,
        res_step_time: int = None,
        simflag: str = "",
        timeout: int = None,
        verbose=False,
    ):
        time.sleep(random.random())
        this_request_id = self._sim_counter  # time.time()
        self._sim_counter += 1
        self._logger.info(f"Recieved a simulation request, id:{this_request_id}...")
        available_worker = self._find_available_worker(this_request_id)
        if res_path is not None:
            res_path_full = (
                res_path
                if os.path.isabs(res_path)
                else f"{self._cwd}{os.sep}{res_path}"
            )
        else:
            res_path_full = None
        res_df = available_worker.simulate(
            set_params_dict=set_params_dict,
            start_time=start_time,
            final_time=final_time,
            step_time=step_time,
            result_filter=result_filter,
            method=method,
            rtol=rtol,
            res_path=res_path_full,
            res_step_time=res_step_time,
            simflag=simflag,
            timeout=timeout,
            verbose=verbose,
        )
        time.sleep(0.1)
        # Put worker back to the queue
        self._engine_workers.put(available_worker)
        self._logger.info(f"Simulation request {this_request_id} is completed!")
        return res_df

    @property
    def engine_type(self):
        return "OMEngine"


class InteractiveEngine(OMEngineAbstract):

    def __init__(
        self,
        mo_name: str,
        mo_path: str,
        library_paths: list,
        set_params_dict: dict = {},
        port: int = 4802,
        start_time: int = 0,
        final_time: int = 3600,
        step_time: int = 1,
        u_names: list = [],
        result_filter: list = [],
        method: str = "dassl",
        rtol: float = 1e-6,
        res_path: str = None,
        res_step_time: int = 60,
        log_level="INFO",
        working_dir: str = None,
    ):
        super().__init__(
            mo_name=mo_name,
            mo_path=mo_path,
            library_paths=library_paths,
            set_params_dict=set_params_dict,
            log_level=log_level,
            multiprocesses=1,
            compiling_model="OnetimeDuplicate",
            working_dir=working_dir,
            inplace_set=False,
            om_envs={},
            additional_cmds=None,
        )

        self._port = port
        self._start_time = start_time
        self._final_time = final_time
        self._step_time = step_time
        self._method = method
        self._rtol = rtol
        self._u_names = u_names
        self._result_filter = result_filter
        self._res_path = res_path
        self._res_step_time = res_step_time
        self._opcua_u_paths = None
        self._opcua_y_paths = None
        self._opcua_step_path = None
        self._opcua_time_path = None
        self._opcua_terminate_path = None
        self._is_reset = False
        self._om_opcua_client = None
        self._sim_executor_stopper = None
        self._sim_executor = None
        self._engine_worker = None
        self._opc_client = None

    async def _get_opc_object_path_str(self, path_of_nodes):
        str_path = []
        for node_i in path_of_nodes:
            browse_name = await node_i.read_browse_name()
            str_path.append(browse_name.to_string())
        return str_path

    async def _get_omi_opc_pathsNclient(self):
        url = f"opc.tcp://localhost:{self._port}"
        self._logger.info(f"OpenModelica OPC-UA address: {url}")
        client = Client(url=url)
        await asyncio.wait_for(client.connect(), timeout=50)
        self._logger.info(f"An OPC-UA client is established {client}")
        children = await client.nodes.root.get_children()
        objects_root = children[0]
        objects = await objects_root.get_children()
        uname_path_dict = {}
        yname_path_dict = {}
        step_path = None
        time_path = None
        terminate_path = None

        for i in range(len(objects)):
            obj_name = await objects[i].read_browse_name()
            obj_name_val = obj_name.Name
            obj_path = await objects[i].get_path()
            if obj_name_val in self._u_names:
                uname_path_dict[obj_name_val] = await self._get_opc_object_path_str(
                    obj_path
                )
            if obj_name_val in self._result_filter:
                yname_path_dict[obj_name_val] = await self._get_opc_object_path_str(
                    obj_path
                )
            if obj_name_val == "OpenModelica.step":
                step_path = await self._get_opc_object_path_str(obj_path)
            if obj_name_val == "time":
                time_path = await self._get_opc_object_path_str(obj_path)
            if obj_name_val == "OpenModelica.terminate":
                terminate_path = await self._get_opc_object_path_str(obj_path)
        u_paths = []
        y_paths = []
        for uname in self._u_names:
            u_paths.append(uname_path_dict[uname])
        for yname in self._result_filter:
            y_paths.append(yname_path_dict[yname])
        self._logger.info(f"OPC-UA control variable paths: {u_paths}")
        self._logger.info(f"OPC-UA output variable paths: {y_paths}")
        self._logger.info(f"OPC-UA 'step' path: {step_path}")
        self._logger.info(f"OPC-UA 'time' path: {time_path}")
        self._logger.info(f"OPC-UA 'terminate' path: {terminate_path}")

        return u_paths, y_paths, step_path, time_path, terminate_path, client

    async def reset(self):
        await self._end_simulation()
        self._logger.info(f"Resetting simulation...")
        self._engine_worker = self._find_available_worker(request_id=1)
        self._sim_executor_stopper = threading.Event()
        self._sim_executor = threading.Thread(
            target=self._engine_worker.simulate_interactive,
            kwargs={
                "port": self._port,
                "set_params_dict": {},
                "start_time": self._start_time,
                "final_time": self._final_time,
                "step_time": self._step_time,
                "result_filter": self._result_filter,
                "method": self._method,
                "rtol": self._rtol,
                "res_path": self._res_path,
                "res_step_time": self._res_step_time,
                "simflag": "",
            },
        )
        self._sim_executor.daemon = True
        self._sim_executor.start()
        time.sleep(
            5
        )  # wait for the OPC server to be established TO-DO: automatically check whether the server is ready
        self._logger.info(
            f"Interactive OpenModelica simulation OPC-UA server is running now"
        )
        try:
            (
                self._opcua_u_paths,
                self._opcua_y_paths,
                self._opcua_step_path,
                self._opcua_time_path,
                self._opcua_terminate_path,
                self._opc_client,
            ) = await self._get_omi_opc_pathsNclient()
        except Exception as e:
            self._logger.error(f"{e}\n{traceback.print_exc()}")
        self._is_reset = True
        self._logger.info(f"An OPC-UA client is also running {self._opc_client}")

    async def _end_simulation(self):
        if self._opc_client is not None:
            # Terminate the simulation if not
            while True:
                try:
                    # terminate_obj = await self._client.nodes.root.get_child(self._opcua_terminate_path[1:])
                    # await terminate_obj.set_value(True)
                    # NOTE: don't know why, have to send another step in order to terminate the simulation
                    step_obj = await self._opc_client.nodes.root.get_child(
                        self._opcua_step_path[1:]
                    )
                    await step_obj.set_value(True)
                except:
                    break
            # Disconnect with the OPC server
            await self._opc_client.disconnect()
            self._opc_client = None
        if self._engine_worker is not None:
            self._engine_workers.put(self._engine_worker)
        if self._sim_executor_stopper is not None and self._sim_executor is not None:
            self._sim_executor_stopper.set()
            self._sim_executor.join()
            self._logger.info("The simulation threading has been stopped")
        self._opcua_u_paths = None
        self._opcua_y_paths = None
        self._opcua_step_path = None
        self._opcua_time_path = None
        self._opcua_terminate_path = None
        self._is_reset = False
        self._sim_executor_stopper = None
        self._sim_executor = None
        self._engine_worker = None

    async def step(self, u: list):
        self._logger.info(f"Step: u:{u}")
        if self._is_reset is False:
            raise RuntimeError("The simulation is not setted yet, run reset() first!")
        try:
            states, sim_time = await self._step(u)
            if sim_time >= self._final_time:
                is_terminal = True
                await self._end_simulation()
            else:
                is_terminal = False
            self._logger.info(
                f"Step: states: {states}, is_terminal: {is_terminal}, sim_time: {sim_time}"
            )
        except Exception as e:
            self._logger.error(f"{e}\n{traceback.print_exc()}")
        return states, is_terminal, sim_time

    async def _step(self, u: list):
        # 1. Set simulation values using OPC-UA
        for u_i in range(len(u)):
            opcua_u_object = await self._opc_client.nodes.root.get_child(
                self._opcua_u_paths[u_i][1:]
            )
            await opcua_u_object.set_value(float(u[u_i]))
        # 2. Set step to True
        sim_time_object = await self._opc_client.nodes.root.get_child(
            self._opcua_time_path[1:]
        )
        time_bf_step = await sim_time_object.get_value()
        step_obj = await self._opc_client.nodes.root.get_child(
            self._opcua_step_path[1:]
        )
        await step_obj.set_value(True)
        # 3. Read the outputs
        is_step_finished = False
        while is_step_finished is False:
            cur_time = await sim_time_object.get_value()
            if cur_time > time_bf_step:
                is_step_finished = True
        states = []
        for opcua_y_path in self._opcua_y_paths:
            state_i_object = await self._opc_client.nodes.root.get_child(
                opcua_y_path[1:]
            )
            state_i = await state_i_object.get_value()
            states.append(state_i)
        # 4. Read the current simulation time
        sim_time = await sim_time_object.get_value()
        return states, sim_time

    @property
    def engine_type(self):
        return "OMEngine_IA"
