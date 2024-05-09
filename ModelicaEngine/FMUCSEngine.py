# Author: Zhiang Zhang
# First create: 2024-04-04

import shutil
import os
import platform
import zipfile
import time
import traceback

import pandas as pd
import numpy as np

from colorlog import ColoredFormatter
from fmpy import read_model_description, extract, simulate_fmu
from fmpy.fmi2 import FMU2Slave
from fmpy.util import plot_result, download_test_file
from fmpy.fmi1 import FMICallException

from .EngineUtils.Logger import Logger

THIS_DIR = os.path.dirname(os.path.realpath(__file__))
LOG_FMT = ColoredFormatter(
    "%(log_color)s [%(asctime)s] %(name)s %(levelname)-3s%(reset)s %(message)s",
    datefmt=None,
    reset=True,
    log_colors={
        'DEBUG': 'cyan',
        'INFO': 'green',
        'WARNING': 'yellow',
        'ERROR': 'red',
        'CRITICAL': 'red,bg_white',
    },
    secondary_log_colors={},
    style='%')


class FMUCSEngine(object):

    def __init__(self, fmu_path:str, working_dir:str = '.', sim_st_time:int = 0, 
                sim_ed_time:int = 3600, log_level:str = 'INFO'):
        self._fmu_name = os.path.splitext(os.path.basename(fmu_path))[0]
        self._logger = Logger().getLogger('FMUCSEngine-{}'\
                                        .format(self._fmu_name),
                                        log_level, LOG_FMT)
        if not os.path.exists(working_dir):
            os.makedirs(working_dir)
        self._working_dir = os.path.abspath(working_dir)
        self._logger.info(f'Start... working directory: {self._working_dir}')
        shutil.copy(fmu_path, self._working_dir)
        self._fmu_path = f'{self._working_dir}{os.sep}{self._fmu_name}.fmu'
        self._sim_st_time = sim_st_time
        self._sim_ed_time = sim_ed_time
        self._model_description = read_model_description(self._fmu_path)
        self._is_step_init = False
        self._cur_step_time = sim_st_time
        self._vr_inputs = None
        self._vr_outputs = None
        self._fmu = None
        self._sim_step_size = None
        self._comm_step_multiplier = None
        if platform.system() == 'Windows':
            self._fmu_path = self._check_n_fix_fmu_win(self._fmu_path, self._working_dir, self._logger)


    def _check_n_fix_fmu_win(self, fmu_path, working_dir, logger = None):
        """
        There is a bug in OpenModelica that when it exports fmu, libwinpthread-1.dll is not
        included. So a separate dll file needs to be included in the fmu. It applies to Windows
        system. 
        """
        logger.info(f'Checking the completeness of the fmu...')
        # Extract the fmu file
        fmu_unzipped_dir = f'{working_dir}{os.sep}fmu_temp'
        if not os.path.exists(fmu_unzipped_dir):
            os.makedirs(fmu_unzipped_dir)
        with zipfile.ZipFile(fmu_path, 'r') as zip_ref:
            zip_ref.extractall(fmu_unzipped_dir)
        # Check if the dll exists
        fmu_dirs = os.listdir(f'{fmu_unzipped_dir}{os.sep}binaries')
        logger.debug(f'Contents in {fmu_path}: {fmu_dirs}')
        if 'win64' in fmu_dirs:
            lib_dir = f'{fmu_unzipped_dir}{os.sep}binaries{os.sep}win64'
            libwinp_dll_path = f'{THIS_DIR}{os.sep}Resources{os.sep}'\
                        f'FMUCSEngine{os.sep}lib{os.sep}win64{os.sep}libwinpthread-1.dll'
            cvode_dll_path = f'{THIS_DIR}{os.sep}Resources{os.sep}'\
                        f'FMUCSEngine{os.sep}lib{os.sep}win64{os.sep}libsundials_cvode.dll'
            to_checked_files = [f'{lib_dir}{os.sep}libwinpthread-1.dll',
                            f'{lib_dir}{os.sep}libsundials_cvode.dll']
            to_copied_files = [libwinp_dll_path, cvode_dll_path]
        elif 'win32' in fmu_dirs:
            lib_dir = f'{fmu_unzipped_dir}{os.sep}binaries{os.sep}win32'
            libwinp_dll_path = f'{THIS_DIR}{os.sep}Resources{os.sep}'\
                        f'FMUCSEngine{os.sep}lib{os.sep}win32{os.sep}libwinpthread-1.dll'
            # TO-DO: add win32 bit cvode dll
            to_checked_files = [f'{lib_dir}{os.sep}libwinpthread-1.dll',
                            f'{lib_dir}{os.sep}libsundials_cvode.dll']
            to_copied_files = [libwinp_dll_path, cvode_dll_path]
        elif 'linux64' in fmu_dirs:
            lib_dir = f'{fmu_unzipped_dir}{os.sep}binaries{os.sep}linux64'
            cvode_so_path = f'{THIS_DIR}{os.sep}Resources{os.sep}'\
                        f'FMUCSEngine{os.sep}lib{os.sep}linux64{os.sep}libsundials_cvode.so.5'
            nvecserial_so_path = f'{THIS_DIR}{os.sep}Resources{os.sep}'\
                        f'FMUCSEngine{os.sep}lib{os.sep}linux64{os.sep}libsundials_nvecserial.so.5'
            to_checked_files = [f'{lib_dir}{os.sep}libsundials_cvode.so.5',
                            f'{lib_dir}{os.sep}libsundials_nvecserial.so.5']
            to_copied_files = [cvode_so_path, nvecserial_so_path]

        logger.debug(f'lib_dir:{lib_dir}')
        
        for file_i in range(len(to_checked_files)):
            to_checked_file = to_checked_files[file_i]
            to_copied_file = to_copied_files[file_i]
            if not os.path.exists(to_checked_file):
                shutil.copy(to_copied_file, lib_dir)
                if logger is not None:
                    logger.info(f'{to_copied_file.split(os.sep)[-1]} is copied into {lib_dir}')
            else:
                logger.debug(f'{to_checked_file} is existing')
        # Zip the fmu again
        zipped_path = shutil.make_archive(fmu_path, 'zip', fmu_unzipped_dir)
        new_fmu_path = fmu_path.split('.fmu')[0] + '_libfixed.fmu'
        shutil.move(zipped_path, new_fmu_path)
        logger.info(f'New fmu is moved to {new_fmu_path}')
        shutil.rmtree(fmu_unzipped_dir)
        return new_fmu_path

    def reset(self, input_names: list, output_names: list, tolerance = 1e-4,
                    sim_step_size:float=0.1, comm_step_multiplier: int = 1):
        """
        Args:
        ----------
        input_names: list
            Input names as a list of string
        output_names: list
            Output names as a list of string
        sim_step_size: float
            Simulation step size in second (the step size used when calling doStep in FMU). 
            This value should be small to ensure simulation stability.
        comm_step_multiplier: int
            The number of simulation steps to return one result when calling self.step
        """
        self._logger.info('Step initialization starts...')
        # Collect the value references
        vrs = {}
        for variable in self._model_description.modelVariables:
            vrs[variable.name] = variable.valueReference

        # Get the value references for the variables we want to get/set
        self._vr_inputs = [vrs[input_name] for input_name in input_names]
        self._logger.info(f'vr_inputs: {self._vr_inputs}')
        self._vr_outputs = [vrs[output_name] for output_name in output_names]
        self._logger.info(f'vr_outputs: {self._vr_outputs}')

        # Initialize a FMU2Slave
        self._unzipdir = extract(self._fmu_path)
        instance_name = f'{self._fmu_name}_{time.time()}'
        self._logger.info(f'FMU2Slave instance name: {instance_name}')
        fmu = FMU2Slave(guid=self._model_description.guid,
                    unzipDirectory=self._unzipdir,
                    modelIdentifier=self._model_description.coSimulation.modelIdentifier,
                    instanceName='instance1')
        fmu.instantiate()
        fmu.setupExperiment(startTime = self._sim_st_time, 
                            tolerance = tolerance, 
                            stopTime = self._sim_ed_time)
        fmu.enterInitializationMode()
        fmu.exitInitializationMode()
        self._fmu = fmu
        self._cur_step_time = self._sim_st_time
        self._is_step_init = True
        self._sim_step_size = sim_step_size
        self._comm_step_multiplier = comm_step_multiplier
        self._logger.info('Step initialization completed!')

    def step(self, inputs: list):
        self._logger.info(f'Step starts...inputs:{inputs}')
        if self._is_step_init is False:
            raise RuntimeError('The simulator is not initialized yet, run reset first!')
        if self._a_is_geq_b(self._cur_step_time, self._sim_ed_time):
            raise RuntimeError('This simulation episode has reached to an end, run reset first!')
        self._fmu.setReal(self._vr_inputs, inputs)
        sim_n = 1
        while sim_n <= self._comm_step_multiplier and not self._a_is_geq_b(self._cur_step_time, self._sim_ed_time):
            # perform one step
            self._fmu.doStep(currentCommunicationPoint=self._cur_step_time, 
                            communicationStepSize=self._sim_step_size)
            self._cur_step_time += self._sim_step_size
            sim_n += 1
        outputs = self._fmu.getReal(self._vr_outputs)
        if not self._a_is_geq_b(self._cur_step_time, self._sim_ed_time):
            is_terminal = False
        else:
            is_terminal = True
        self._logger.info(f'Step completed, outputs:{outputs}, '\
                    f'current simulation time: {self._cur_step_time}, '\
                    f'is_terminal: {is_terminal}')
        if is_terminal:
            self.stop_env()
        return is_terminal, outputs

    def stop_env(self):
        if self._is_step_init is False:
            raise RuntimeError('The simulator is not initialized yet, run reset first!')
        self._fmu.terminate()
        self._fmu.freeInstance()
        shutil.rmtree(self._unzipdir, ignore_errors=True)
        self._is_step_init = False
        self._cur_step_time = self._sim_st_time
        self._vr_inputs = None
        self._vr_outputs = None
        self._fmu = None
        self._sim_step_size = None
        self._comm_step_multiplier = None

    def simulate_dynamic(self, step_size:float = 60,
                        inputs:pd.DataFrame = None,
                        outputs:list = [], 
                        relative_tolerance = 1e-4, 
                        do_fmi_logging = False,
                        dynamic_step_size_retry:bool = False,
                        step_size_lower_thres:float = 1e-4,
                        step_size_decay_factor:int = 5,
                        refresh_fmu_interval = 3600):
        self._logger.info('Start simulation (dynamic)...')
        ### Initialize a FMU2Slave
        # Collect the value references
        vrs = {}
        for variable in self._model_description.modelVariables:
            vrs[variable.name] = variable.valueReference
        # Get the value references for the variables we want to get/set
        vr_inputs = []
        for input_name in inputs.columns:
            if input_name != 'time':
                vr = vrs.get(input_name)
                if vr is None:
                    self._logger.warning(f'{input_name} does not exist in this FMU!')
                vr_inputs.append(vr)
        vr_outputs = []
        for output_name in outputs:
            vr = vrs.get(output_name)
            if vr is None:
                self._logger.warning(f'{output_name} does not exist in this FMU!')
            vr_outputs.append(vr)
        

        # Run simulation by iteratively calling do step
        if dynamic_step_size_retry is False: 
            effective_step_size = step_size
            sim_res = self._simulate_dynamic(inputs, effective_step_size, 
                                                vr_inputs, vr_outputs, 
                                                relative_tolerance, 
                                                do_fmi_logging,
                                                refresh_fmu_interval = refresh_fmu_interval)
        else:
            # Dynamically retry smaller step size until reaching the step size lower threshold
            step_size_this = step_size
            sim_res = None
            while True:
                if step_size_this < step_size_lower_thres:
                    break
                else:
                    try:
                        self._logger.info(f'Try simulating with step size {step_size_this}')
                        sim_res = self._simulate_dynamic(inputs, step_size_this, 
                                                        vr_inputs, vr_outputs, 
                                                        relative_tolerance, 
                                                        do_fmi_logging,
                                                        refresh_fmu_interval = refresh_fmu_interval)
                        self._logger.info(f'Simulation successful with step size {step_size_this}')
                        break
                    except Exception as e:
                        traceback.print_exc()
                        self._logger.warning(f'Simulation with step size {step_size_this} failed, continue trying...')
                        step_size_this = step_size_this/step_size_decay_factor
            if sim_res is None:
                raise RuntimeError(f'Simulation failed after trying all simulation time steps!'\
                                    f' Consider reduce the step_size_lower_thres (currently {step_size_lower_thres})')
        self._logger.info(f'Simulation (dynamic) completed, simulation results: {sim_res}')
        output_columns = ['time']
        output_columns.extend(outputs)
        output_df = pd.DataFrame(np.array(sim_res), columns = output_columns)
        self._logger.info(f'Simulation (dynamic) results: {output_df}')
        return output_df

    def _get_fmu(self, fmu_path, fmu_name, guid, modelIdentifier, do_fmi_logging, 
                        sim_start_time, sim_end_time, relative_tolerance,  
                        fmu_state = None, given_fmu = None):
        unzipdir = extract(fmu_path)
        instance_name = f'{fmu_name}_{time.time()}'
        fmu = FMU2Slave(guid=guid,
                    unzipDirectory=unzipdir,
                    modelIdentifier=modelIdentifier,
                    instanceName='instance1',
                    fmiCallLogger=lambda s: print('[FMI] ' + s) if do_fmi_logging else None,
                    )
        fmu.instantiate()
        if fmu_state is None:
            fmu.setupExperiment(startTime = sim_start_time, 
                            tolerance = relative_tolerance, 
                            stopTime = sim_end_time)
            fmu.enterInitializationMode()
            fmu.exitInitializationMode()
        else:
            if not self._model_description.coSimulation.canGetAndSetFMUstate:
                raise Exception("The FMU does not support get/set FMU state.")
            fmu.setFMUState(fmu_state)
        self._logger.info(f'A FMU2Slave {instance_name} is created')
        return fmu, unzipdir

    def _simulate_dynamic(self, inputs, effective_step_size, 
                                vr_inputs, vr_outputs, 
                                relative_tolerance, 
                                do_fmi_logging,
                                refresh_fmu_interval = 600):
        fmu, unzipdir = self._get_fmu(
                            fmu_path = self._fmu_path, fmu_name = self._fmu_name, 
                            guid = self._model_description.guid, 
                            modelIdentifier = self._model_description.coSimulation.modelIdentifier,
                            do_fmi_logging = do_fmi_logging,
                            sim_start_time = self._sim_st_time, 
                            sim_end_time = self._sim_ed_time, 
                            relative_tolerance = relative_tolerance)
        sim_t = self._sim_st_time
        sim_t_in_use = sim_t# The sim_t used in doStep
        sample_cur_i = 0
        sample_cur_i_time = inputs.iloc[sample_cur_i]['time']
        
        outputs_list = []
        noSetFMUStatePriorToCurrentPoint = True
        while not self._a_is_geq_b(sim_t, self._sim_ed_time):
            # If the current simulation time is near the sample time, then do set
            if abs(sim_t - sample_cur_i_time) < 1:
                sample_i_input = inputs.iloc[sample_cur_i].drop('time')
                fmu.setReal(vr_inputs, sample_i_input)
                output_this = fmu.getReal(vr_outputs)
                output_this_list = [sim_t]
                output_this_list.extend(output_this)
                outputs_list.append(output_this_list)
                self._logger.info(f'Current simulation time {sim_t}, inputs at {sample_cur_i_time} are set, '\
                                f'inputs: {sample_i_input}, outputs at {sample_cur_i_time} are {output_this_list}')
                sample_cur_i += 1
                if sample_cur_i < len(inputs):
                    sample_cur_i_time = inputs.iloc[sample_cur_i]['time']
                else:
                    sample_cur_i_time = np.inf
            if sim_t + effective_step_size <= self._sim_ed_time:
                comm_step_size = effective_step_size
            else:
                comm_step_size = self._sim_ed_time - sim_t
            fmu.doStep(currentCommunicationPoint=sim_t_in_use, 
                communicationStepSize=comm_step_size,
                noSetFMUStatePriorToCurrentPoint=noSetFMUStatePriorToCurrentPoint)
            sim_t += effective_step_size
            sim_t_in_use += effective_step_size
            # There is a memory leakage bug in FMU, so when the simulation time reaches
            # refresh_fmu_interval, a new fmu needs to be started
            if sim_t_in_use >= refresh_fmu_interval:
                self._logger.info(f'Simulation time reaches {refresh_fmu_interval}s (refresh_fmu_interval), creating a new fmu...')
                fmu.terminate()
                fmu.freeInstance()
                cur_fmu_state = fmu.getFMUstate()
                self._logger.debug(cur_fmu_state)
                self._logger.debug(isinstance(cur_fmu_state, bytes))
                shutil.rmtree(unzipdir, ignore_errors=True)
                fmu, unzipdir = self._get_fmu(
                            fmu_path = self._fmu_path, fmu_name = self._fmu_name, 
                            guid = self._model_description.guid, 
                            modelIdentifier = self._model_description.coSimulation.modelIdentifier,
                            do_fmi_logging = do_fmi_logging,
                            sim_start_time = self._sim_st_time, 
                            sim_end_time = self._sim_ed_time, 
                            relative_tolerance = relative_tolerance,
                            fmu_state = cur_fmu_state)
                noSetFMUStatePriorToCurrentPoint = False
                sim_t_in_use = 0
        fmu.terminate()
        fmu.freeInstance()
        shutil.rmtree(unzipdir, ignore_errors=True)
        return outputs_list

    def simulate(self, step_size:float = 60,
                inputs:pd.DataFrame = None,
                outputs:list = [], start_values: dict = {}, 
                relative_tolerance = 1e-4, do_fmi_logging = False,
                dynamic_step_size_retry:bool = False,
                step_size_lower_thres:float = 1e-4,
                step_size_decay_factor:int = 5):
        """
        Simulate the fmu from the start to the end time, non-interactive.

        Args:
        ----------
        step_size: int
            Simulation step size
        inputs: pd.DataFrame
            Input dataframe, must contain a 'time' column in seconds, and each column
            represents the input name in the FMU model
        outputs: list
            Output names
        start_values: dict
            Start values of simulation, {'varaible_name': variable_value}
        """
        time_st = time.time()
        self._logger.info('Start simulation...')
        # Process inputs
        if inputs is not None:
            print(inputs.values)
            inputs = np.array([tuple(row_i) for row_i in inputs.values], dtype=[(name, float) 
                                                    for name in inputs.columns])
        else:
            inputs = None
        self._logger.debug(f'Simulation inputs: {inputs}')
        # Process parameters to be set
        vrs = {}
        for variable in self._model_description.modelVariables:
            vrs[variable.name] = variable.valueReference

        if dynamic_step_size_retry is False:
            result = simulate_fmu(
                filename = self._fmu_path,
                validate = False,
                start_time = self._sim_st_time,
                stop_time = self._sim_ed_time,
                step_size = step_size,
                output_interval = step_size,
                record_events = True,
                start_values = start_values,
                input = inputs,
                output=outputs,
                fmi_call_logger= lambda s: print('[FMI] ' + s) if do_fmi_logging else None,
                relative_tolerance = relative_tolerance)
        else:
            # Dynamically retry smaller step size until reaching the step size lower threshold
            step_size_this = step_size
            result = None
            while True:
                if step_size_this < step_size_lower_thres:
                    break
                else:
                    try:
                        self._logger.info(f'Try simulating with step size {step_size_this}')
                        result = simulate_fmu(
                            filename = self._fmu_path,
                            validate = False,
                            start_time = self._sim_st_time,
                            stop_time = self._sim_ed_time,
                            step_size = step_size_this,
                            output_interval = step_size_this,
                            record_events = True,
                            start_values = start_values,
                            input = inputs,
                            output=outputs,
                            fmi_call_logger= lambda s: print('[FMI] ' + s) if do_fmi_logging else None,
                            relative_tolerance = relative_tolerance)
                        self._logger.info(f'Simulation successful with step size {step_size_this}')
                        break
                    except:
                        self._logger.warning(f'Simulation with step size {step_size_this} failed, continue trying...')
                        step_size_this = step_size_this/step_size_decay_factor
            if result is None:
                raise RuntimeError(f'Simulation failed after trying all simulation time steps!'\
                                    f' Consider reduce the step_size_lower_thres (currently {step_size_lower_thres})')


        result_col_names = ['time']
        result_col_names.extend(outputs)
        result = pd.DataFrame(result, columns = result_col_names)
        time_ed = time.time()
        time_duration = time_ed - time_st
        self._logger.info(f'Simulation time duration: {time_duration}s')
        self._logger.info(f'Simulation results: \n{result}')
        return result

    def _a_is_geq_b(self, a, b):
        if (a - b) > -1e-4:
            return True
        else:
            return False

    @property
    def sim_st_time(self):
        return self._sim_st_time
        
    @property
    def sim_ed_time(self):
        return self._sim_ed_time

    @property
    def cur_step_time(self):
        return self._cur_step_time
    