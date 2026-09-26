# Author: Zhiang Zhang
# First create: 2024-05-01
import os
import glob
import hashlib
import shutil
import time
import copy
import socket
import threading
import subprocess
import traceback

import pandas as pd
import numpy as np

from abc import ABC, abstractmethod
from queue import Empty, Queue
from colorlog import ColoredFormatter
from OMPython import ModelicaSystem
from modelica_builder.model import Model

from .EngineUtils.Logger import Logger
from .EngineUtils.FileUtils import set_mo_params, read_mat_file

LOG_FMT = ColoredFormatter(
    "%(log_color)s [%(asctime)s] %(name)s %(levelname)-3s%(reset)s %(message)s",
    datefmt=None,
    reset=True,
    log_colors={
        "DEBUG": "cyan",
        "INFO": "green",
        "WARNING": "yellow",
        "ERROR": "red",
        "CRITICAL": "red,bg_white",
    },
    secondary_log_colors={},
    style="%",
)


class OMEngineAbstract(ABC):

    def __init__(
        self,
        mo_name: str,
        mo_path: str,
        library_paths: list,
        set_params_dict: dict = {},
        log_level="INFO",
        multiprocesses=1,
        compiling_model="OMSequential",
        working_dir: str = None,
        inplace_set=False,
        om_envs: dict = {},
        additional_cmds: str = None,
        compiled_exe_dir: str = None,
        worker_get_timeout: float | None = 7200,
    ):
        """
        Args:
        ----------
        compiling_model: str
                Choises from "OMSequential", "OMParallel", "OnetimeDuplicate".
                For "OMSequential", different workers will be complied using OpenModelica sequentially;
                For "OMParallel" (deprecated): not thread-safe; falls back to OMSequential.
                Prefer "OnetimeDuplicate": compile once, then copy the executable for each worker.
        worker_get_timeout: float | None
                Seconds to wait for a free worker from the pool. None waits forever.
                Default 7200s (2h) so lost workers surface as TimeoutError instead of hanging.
        """
        self._logger = Logger().getLogger(
            "{}-{}".format(self.engine_type, mo_name), log_level, LOG_FMT
        )
        self._mo_path = os.path.abspath(mo_path).replace("\\", "/")
        if working_dir is None:
            working_dir = os.path.dirname(self._mo_path)
        working_dir = (
            os.path.abspath(working_dir)
            if not os.path.isabs(working_dir)
            else working_dir
        )
        working_dir = working_dir.replace("\\", "/")
        # set model parameters before compilation
        if len(set_params_dict) > 0:
            mo_file_name = os.path.splitext(os.path.basename(self._mo_path))[0]
            if not inplace_set:
                new_mo_path = working_dir + "/" + f"{mo_file_name}_set{time.time()}.mo"
                shutil.copyfile(self._mo_path, new_mo_path)
                self._mo_path = new_mo_path
            else:
                new_mo_path = self._mo_path
                self._logger.info(
                    f"Model parameter set before compilation, "
                    f"set parameter: {set_params_dict}, "
                    f"new Modelica file is at {new_mo_path}"
                )
            try:
                set_mo_params(self._mo_path, set_params_dict)
            except ValueError as ve:
                self._logger.warning(
                    f"Model parameter set before compilation, "
                    f"an exception happened {ve}, but still continued..."
                    f"set parameter: {set_params_dict}, "
                    f"new Modelica file is at {new_mo_path}"
                )
            except Exception as e:
                self._logger.error(f"Model parameter set before compilation error!")
                traceback.print_exc()
                raise
        self._working_dir = working_dir
        self._logger.info(f"Working directory is {self._working_dir}")
        self._library_paths = library_paths
        self._log_level = log_level
        self._cwd = os.getcwd()
        self._mo_name = mo_name
        self._logger.info(
            f"Preparing engine workers ({multiprocesses} in total), "
            f"compiling_model: {compiling_model}..."
        )
        self._multiprocesses = multiprocesses
        self._engine_workers = Queue(maxsize=multiprocesses)
        self._sim_counter = 0
        self._sim_counter_lock = threading.Lock()
        self._worker_get_timeout = worker_get_timeout
        self._om_envs = om_envs
        self._additional_cmds = additional_cmds
        self._logger.info(
            f"Worker queue get timeout: {self._worker_get_timeout} s "
            f"(None means wait forever)"
        )
        if compiled_exe_dir is None:
            if compiling_model.lower() == "omparallel":
                threads = []
                for i in range(multiprocesses):
                    thread_i = threading.Thread(
                        target=self._add_worker_to_list, args=(i,)
                    )
                    threads.append(thread_i)
                    thread_i.start()
                    time.sleep(0.2)

                for thread in threads:
                    thread.join()
                time.sleep(0.5)
            elif compiling_model.lower() == "omsequential":
                for i in range(multiprocesses):
                    self._logger.info(f"Creating engine worker {i}...")
                    self._add_worker_to_list(i)
            elif compiling_model.lower() == "onetimeduplicate":
                om_exe_dir = self._compile_om(
                    self._library_paths,
                    self._mo_path,
                    self._mo_name,
                    self._additional_cmds,
                )
                for i in range(multiprocesses):
                    self._logger.info(
                        f"Creating engine worker {i} by using the compiled executable..."
                    )
                    self._add_worker_to_list(i, om_exe_dir=om_exe_dir)
                self._logger.info(
                    f"Clear the temporary compiled executable directory {om_exe_dir}..."
                )
                try:
                    shutil.rmtree(om_exe_dir)
                except Exception as e:
                    self._logger.warning(
                        f"Exception occurred when clearing the temporary compiled executable directory {om_exe_dir}: {e}, {
                            traceback.print_exc()}"
                    )
            else:
                raise ValueError(
                    f"Unknown compiling_model={compiling_model!r}. "
                    f"Use OMSequential or OnetimeDuplicate (OMParallel is deprecated)."
                )
        else:
            for i in range(multiprocesses):
                self._logger.info(
                    f"Creating engine worker {i} by using the pre-compiled executable at {compiled_exe_dir}..."
                )
                self._add_worker_to_list(i, om_exe_dir=compiled_exe_dir)

    def get_mo_real_param_val(self, param_type: str, param_name: str):
        model = Model(self._mo_path)
        param_val = model.get_parameter_value(type_=param_type, identifier=param_name)
        return param_val

    def set_params_get_new_mo_file(self, set_params_dict: dict, new_mo_path: str):
        shutil.copyfile(self._mo_path, new_mo_path)
        try:
            set_mo_params(new_mo_path, set_params_dict)
            self._logger.info(
                f"A new Modelica file with parameters {set_params_dict} is written in {new_mo_path}"
            )
        except ValueError as ve:
            self._logger.warning(
                f"During model parameter set, an exception happened {ve}, but still continued..."
                f"A new Modelica file with parameters {set_params_dict} is written in {new_mo_path}"
            )
        except Exception as e:
            self._logger.error(f"Model parameter set error!")
            traceback.print_exc()
            raise

    def set_params_recompile(self, set_params_dict: dict):
        set_done = False
        print_done = False
        done_count = 0
        self._logger.info("Performing set_params_recompile... ")
        threads = []
        while done_count < self._multiprocesses:
            available_worker = self._find_available_worker(
                request_id="set_params_recompile"
            )
            self._logger.info(
                f"Performing set_params_recompile for worker {
                    available_worker.worker_name}... "
            )
            thread_i = threading.Thread(
                target=self._set_params_recompile_helper,
                args=(
                    available_worker,
                    set_params_dict,
                ),
            )
            threads.append(thread_i)
            thread_i.start()
            time.sleep(0.2)
            done_count += 1
        for thread in threads:
            thread.join()
        self._logger.info("set_params_recompile completed!")

    def _set_params_recompile_helper(self, worker, set_params_dict: dict):
        try:
            worker.set_params_recompile(set_params_dict=set_params_dict)
        finally:
            self._engine_workers.put(worker)

    def get_params(self, param_names: list) -> dict:
        available_worker = self._find_available_worker(request_id="get_params")
        try:
            return available_worker.get_params(param_names)
        finally:
            self._engine_workers.put(available_worker)

    def _add_worker_to_list(self, worker_id, om_exe_dir=None):
        library_paths = []
        for path in self._library_paths:
            path = path.replace("\\", "/")
            library_paths.append(path)
        this_worker = EngineWorker(
            self._mo_name,
            self._mo_path,
            library_paths=library_paths,
            log_level=self._log_level,
            worker_id=worker_id,
            root_working_dir=self._working_dir,
            om_envs=self._om_envs,
            additional_cmds=self._additional_cmds,
            om_exe_dir=om_exe_dir,
        )
        self._engine_workers.put(this_worker)

    def _find_available_worker(self, request_id):
        self._logger.info(
            f"Looking for a available worker for the request {request_id} ... "
        )
        try:
            available_worker = self._engine_workers.get(
                timeout=self._worker_get_timeout
            )
        except Empty as e:
            raise TimeoutError(
                f"Timed out after {self._worker_get_timeout}s waiting for a free "
                f"OM worker (request {request_id}). Possible causes: all workers "
                f"busy longer than timeout, or workers lost without being returned."
            ) from e
        self._logger.info(
            f"Worker {
                available_worker.worker_name} is available for the request {request_id}."
        )
        return available_worker

    def next_sim_request_id(self) -> int:
        """Thread-safe simulation request id."""
        with self._sim_counter_lock:
            request_id = self._sim_counter
            self._sim_counter += 1
            return request_id

    @property
    def num_workers(self) -> int:
        return self._multiprocesses

    def _compile_om(self, library_paths, mo_path, mo_name, additional_cmds):
        library_paths_in_use = []
        library_paths = [] if library_paths is None else library_paths
        for path in library_paths:
            path = path.replace("\\", "/")
            library_paths_in_use.append(path)
        library_paths_in_use.append(mo_path)
        try:
            self._logger.info(
                f"Compiling the model's executable, mo_name: {mo_name}, "
                f"lmodel: {library_paths_in_use}, additional_cmds: {additional_cmds}"
            )
            om = ModelicaSystem(
                fileName=None,  # Here must be None when given library paths, a bug of OMPython
                modelName=mo_name,
                lmodel=library_paths_in_use,
                commandLineOptions=additional_cmds,
            )
            om_dir = om.getWorkDirectory()
        except Exception as e:
            self._logger.error(
                f"Exception occurred: {e}, {
                    traceback.print_exc()}"
            )
        return om_dir

    @property
    def mo_name(self):
        return self._mo_name

    @property
    def mo_path(self):
        return self._mo_path

    @property
    @abstractmethod
    def engine_type(self):
        pass


class EngineWorker(object):

    def __init__(
        self,
        mo_name: str,
        mo_path: str,
        library_paths: list,
        root_working_dir: str,
        log_level: str = "INFO",
        worker_id: int = 0,
        om_envs: dict = {},
        additional_cmds: str = None,
        om_exe_dir: str = None,
    ):
        """
        Args:
        ----------
        om_exe_dir: str
                A precompiled OpenModelica executable directory. If given, this pre-compiled exe
                will be used for simulation; else (None), OpenModelica will be called to compile
                an executable using the given Modelica model file.
        """
        self._envs = om_envs
        self._mo_path = mo_path
        self._mo_full_path = os.path.abspath(mo_path)
        self._mo_name = mo_name
        self._worker_name = "{}Worker-{}".format(self._mo_name, worker_id)
        self._worker_working_dir = f"{root_working_dir}/{self._worker_name}"
        os.makedirs(self._worker_working_dir, exist_ok=True)
        self._logger = Logger().getLogger(self._worker_name, log_level, LOG_FMT)
        self._mo_full_path = self._mo_full_path.replace("\\", "/")
        self._mo_res_path = None
        if om_exe_dir is None:
            library_paths = [] if library_paths is None else library_paths
            library_paths.append(mo_path)
            try:
                self._use_given_exe = False
                self._logger.info("Compiling the model's executable...")
                self._om = ModelicaSystem(
                    fileName=None,  # Here must be None when given library paths, a bug of OMPython
                    modelName=self._mo_name,
                    lmodel=library_paths,
                    commandLineOptions=additional_cmds,
                )
                self._is_busy = False
                om_dir = self._om.getWorkDirectory()
                if os.path.exists(self._worker_working_dir):
                    shutil.rmtree(self._worker_working_dir)
                shutil.copytree(om_dir, self._worker_working_dir, dirs_exist_ok=True)
                self._om_working_dir = self._worker_working_dir
                self._logger.info(
                    f"Worker started successfully! Worker's working directory is {
                        self._worker_working_dir}"
                )
            except Exception as e:
                self._logger.error(
                    f"Exception occurred: {e}, {
                        traceback.print_exc()}"
                )
        else:
            self._use_given_exe = True
            self._logger.info(
                f"Copying the given model executable to {
                    self._worker_working_dir}..."
            )
            if os.path.exists(self._worker_working_dir) and os.listdir(
                self._worker_working_dir
            ):
                self._logger.warning(
                    f"Will delete {
                        self._worker_working_dir} because it is not empty!"
                )
                try:
                    shutil.rmtree(self._worker_working_dir)
                except Exception as e:
                    self._logger.warning(
                        f"Exception occurred when deleting the worker working directory {self._worker_working_dir}: {e}, {
                            traceback.print_exc()}"
                    )
            shutil.copytree(om_exe_dir, self._worker_working_dir, dirs_exist_ok=True)
            self._is_busy = False
            self._om_working_dir = self._worker_working_dir
            self._logger.info("Worker started successfully!")
        # Rename the executable file
        org_cmd_exe_name = os.path.basename(
            glob.glob(f"{self._om_working_dir}/*.exe")[0]
        )
        new_cmd_exe_name = f"{self._worker_name}.exe"
        ord_cmd_exe_path = f"{self._om_working_dir}/{org_cmd_exe_name}"
        new_cmd_exe_path = f"{self._om_working_dir}/{new_cmd_exe_name}"
        if not os.path.exists(new_cmd_exe_path):
            os.rename(ord_cmd_exe_path, new_cmd_exe_path)

        override_path = f"{self._om_working_dir}/{self._mo_name}_override.txt"
        override_path = override_path.replace("\\", "/")
        self._override_path = override_path
        cmd_exe_path = f"{self._om_working_dir}/{self._worker_name}.exe"
        cmd_exe_path = cmd_exe_path.replace("\\", "/")
        self._cmd_exe_path = cmd_exe_path
        self._mo_res_path = f"{self._om_working_dir}/{self._mo_name}_res.mat"

    def set_params_recompile(self, set_params_dict: dict):
        if not self._use_given_exe:
            set_params_list = []
            for param in set_params_dict:
                set_params_list.append(f"{param}={set_params_dict[param]}")
            self._logger.info(f"setParameters input list is {set_params_list}")
            self._om.setParameters(set_params_list)
            self._om.buildModel()
            om_dir = self._om.getWorkDirectory()
            shutil.copytree(om_dir, self._worker_working_dir, dirs_exist_ok=True)
            self._om_working_dir = self._worker_working_dir
            self._logger.info(f"Recompilation completed!")
        else:
            raise RuntimeError(
                "set_params_recompile is currently not available when using the given executable!"
            )

    def get_params(self, param_names: list) -> dict:
        if not self._use_given_exe:
            param_vals = self._om.getParameters(param_names)
            return param_vals
        else:
            raise RuntimeError(
                "get_params is currently not available when using the given executable!"
            )

    def _set_simulation_options_legacy(
        self,
        set_params_dict: dict,
        start_time: int,
        final_time: int,
        step_time: int,
        method: str = "dassl",
        rtol: float = 1e-6,
    ):
        # step1: set the simulation parameters
        set_params_list = []
        for param in set_params_dict:
            set_params_list.append(f"{param}={set_params_dict[param]}")
        self._logger.info(f"setParameters input list is {set_params_list}")
        self._om.setParameters(set_params_list)
        # step2: confirm the parameters are set
        for param in set_params_dict:
            to_set_val = set_params_dict[param]
            self._logger.info(f"Checking {param}...")
            mo_val = float(self._om.getParameters([param])[0])
            if abs(mo_val - to_set_val) > 1e-4:
                self._logger.warning(
                    f"{param} is not set! It should be {to_set_val},"
                    f"but it is {mo_val} in the model!"
                )
        # step3: set simulation options
        self._om.setSimulationOptions(
            [
                f"startTime={start_time}",
                f"stopTime={final_time}",
                f"stepSize={step_time}",
                f"tolerance={rtol}",
                f"solver={method}",
            ]
        )
        self._logger.info(
            f"Simulation options:{
                self._om.getSimulationOptions()}"
        )

    def _set_simulation_options(
        self,
        set_params_dict: dict,
        start_time: int,
        final_time: int,
        step_time: int,
        method: str = "dassl",
        rtol: float = 1e-6,
    ):
        override_dict = set_params_dict.copy()
        override_dict["startTime"] = start_time
        override_dict["stopTime"] = final_time
        override_dict["stepSize"] = step_time
        override_dict["tolerance"] = rtol
        override_dict["solver"] = method
        file = open(self._override_path, "w")
        for key, value in override_dict.items():
            name = key + "=" + str(value) + "\n"
            file.write(name)
        file.close()

    def _get_simulation_results(
        self,
        start_sim_time: float,
        end_time_time: float,
        result_filter: list,
        res_step_time: int,
        step_time: int,
        res_path: str,
        read_res_method: str = "mat",
    ):

        result_filter = copy.deepcopy(result_filter)
        # try multiple times because sometime the results are not ready so soon
        read_res_done = False
        read_res_trials = 0
        res_df = None
        read_res_exception = None
        while read_res_done is False and read_res_trials <= 5:
            try:
                if read_res_method == "mat":
                    res = read_mat_file(
                        mat_file_path=self._mo_res_path,
                        output_names=result_filter,
                        start_sim_time=start_sim_time,
                        end_sim_time=end_time_time,
                        sim_time_step=step_time,
                    )
                elif read_res_method == "ompython":
                    if self._use_given_exe:
                        raise RuntimeError(
                            "read_res_method cannot be ompython when using the given executable!"
                        )
                    if "time" not in result_filter:
                        result_filter.insert(0, "time")
                    res = self._om.getSolutions(result_filter)
                res = np.array(res).T
                res_df = pd.DataFrame(res)
                res_df = res_df.astype(float)
                read_res_done = True
            except Exception as e:
                read_res_exception = e
                read_res_trials += 1
                self._logger.warning(
                    "Cannot find the simulation result file "
                    f"after trying for {read_res_trials} times, will retry..."
                )
                time.sleep(0.2)

        if read_res_done is False:
            self._logger.error(
                "Cannot find the simulation result file "
                f"after trying for {
                    read_res_trials - 1} times!"
            )
            raise RuntimeError(
                "Cannot find the simulation result file "
                f"after trying for {read_res_trials - 1} times!"
                f"{read_res_exception}"
            )
        else:
            if "time" not in result_filter:
                result_filter.insert(0, "time")
            res_df.columns = result_filter
            res_df = res_df.set_index(res_df["time"])
            res_df = res_df[~res_df.index.duplicated(keep="first")]
            res_df.index = pd.TimedeltaIndex(res_df.index, unit="S")
            if res_step_time is None:
                res_df = res_df.resample(f"{step_time}S").mean()
            else:
                res_df = res_df.resample(f"{res_step_time}S").mean()
            # step6: write the results
            if res_path is not None:
                res_df.to_csv(res_path)
            return res_df

    def _clear_stale_result_mat(self):
        """Remove previous result mat so a failed run cannot reuse old outputs."""
        if not self._mo_res_path or not os.path.exists(self._mo_res_path):
            return
        try:
            os.remove(self._mo_res_path)
            self._logger.info(f"Cleared stale result file: {self._mo_res_path}")
        except Exception as e:
            self._logger.warning(
                f"Could not clear stale result file {self._mo_res_path}: {e}"
            )

    def simulate_helper(self, verbose, timeout, simflags=""):
        """Run the OM executable. Returns True only on clean success (returncode 0)."""

        if "OPENMODELICAHOME" in self._envs:
            omhome = self._envs["OPENMODELICAHOME"]
        else:
            omhome = os.path.join(os.environ["OPENMODELICAHOME"])

        dll_paths = (
            os.path.join(omhome, "bin").replace("\\", "/")
            + os.pathsep
            + os.path.join(omhome, "lib/omc").replace("\\", "/")
            + os.pathsep
            + os.path.join(omhome, "lib/omc/cpp").replace("\\", "/")
            + os.pathsep
            + os.path.join(omhome, "lib/omc/omsicpp").replace("\\", "/")
        )
        sim_env = os.environ.copy()
        sim_env["PATH"] = dll_paths + os.pathsep + sim_env["PATH"]
        # Create command
        cmd_exe_path = rf'"{self._cmd_exe_path}"'
        override_path = rf'"{self._override_path}"'
        cmd = f"{cmd_exe_path} -overrideFile={override_path} -lv=LOG_STDOUT {simflags}"
        self._logger.info(f"Simulation executable cmd: {cmd}")
        if not verbose:
            p = subprocess.Popen(
                cmd,
                env=sim_env,
                cwd=self._om_working_dir,
                stdout=subprocess.DEVNULL,
                stderr=subprocess.STDOUT,
            )
        else:
            p = subprocess.Popen(cmd, env=sim_env, cwd=self._om_working_dir)
        timed_out = False
        try:
            p.wait(timeout=timeout)
            p.terminate()
        except BaseException:
            timed_out = True
            self._logger.warning("Process timed out!")
            p.terminate()
            time.sleep(2)
            if p.poll() is None:  # Process still hasn't terminated
                self._logger.warning("Force-killing the process...")
                p.kill()
                time.sleep(2)  # Give it a moment to be killed
                if p.poll() is None:  # If it's still running
                    self._logger.warning("Force-killing the process continued...")
                    subprocess.run(["taskkill", "/F", "/T", "/PID", str(p.pid)])
        rc = p.returncode
        self._logger.info(f"Simulation process return code: {rc}")
        if timed_out:
            self._logger.error("Simulation failed: process timed out")
            return False
        if rc != 0:
            self._logger.error(f"Simulation failed: non-zero return code {rc}")
            return False
        return True

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
        timeout=None,
        verbose=False,
    ):
        self._is_busy = True
        # step1: set simulation parameters and options
        self._set_simulation_options(
            set_params_dict=set_params_dict,
            start_time=start_time,
            final_time=final_time,
            step_time=step_time,
            method=method,
            rtol=rtol,
        )
        # Avoid reading a previous worker result if this run fails.
        self._clear_stale_result_mat()
        # step4: run simulation
        try:
            if len(simflag) == 0:
                sim_ok = self.simulate_helper(verbose=verbose, timeout=timeout)
            else:
                sim_ok = self.simulate_helper(
                    verbose=verbose, timeout=timeout, simflags=simflag
                )
            if not sim_ok:
                raise RuntimeError(
                    f"Simulation executable failed for worker {self._worker_name}"
                )
            if not os.path.exists(self._mo_res_path):
                raise RuntimeError(
                    f"Simulation reported success but result file missing: "
                    f"{self._mo_res_path}"
                )

            self._logger.info(
                f"Simulation completed, collecting results from {
                    self._mo_res_path}..."
            )
            # step5: collect results
            res_df = self._get_simulation_results(
                start_sim_time=start_time,
                end_time_time=final_time,
                result_filter=result_filter,
                res_step_time=res_step_time,
                step_time=step_time,
                res_path=res_path,
            )
            self._logger.info(f"Simulation results collected!")
        except Exception as e:
            self._logger.error(f"Simulation failed! Exception: {e}")
            res_df = None
        self._is_busy = False
        return res_df

    def simulate_interactive(
        self,
        port: int,
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
        verbose: bool = True,
    ):
        # step1: set simulation parameters and options
        self._set_simulation_options(
            set_params_dict=set_params_dict,
            start_time=start_time,
            final_time=final_time,
            step_time=step_time,
            method=method,
            rtol=rtol,
        )
        is_port_available = self._is_port_available(port)
        if not is_port_available:
            self._logger.error(
                f"Port {port} is not available for interactive simulation"
            )
            raise ValueError(f"Port {port} is not available for interactive simulation")
        self._clear_stale_result_mat()
        sim_ok = self.simulate_helper(
            verbose=verbose,
            timeout=None,
            simflags=f"-embeddedServer=opc-ua -embeddedServerPort={port} {simflag}",
        )
        if not sim_ok:
            self._is_busy = False
            raise RuntimeError(
                f"Interactive simulation executable failed for worker {self._worker_name}"
            )
        # step5: collect results
        res_df = self._get_simulation_results(
            start_sim_time=start_time,
            end_time_time=final_time,
            result_filter=result_filter,
            res_step_time=res_step_time,
            step_time=step_time,
            res_path=res_path,
        )

        self._is_busy = False
        self._logger.info(f"Interactive simulation completed!")
        return res_df

    def _is_port_available(self, port):
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        try:
            s.bind(("localhost", port))
            return True
        except OSError:
            return False
        finally:
            s.close()

    @property
    def is_busy(self):
        return self._is_busy

    @property
    def worker_name(self):
        return self._worker_name
