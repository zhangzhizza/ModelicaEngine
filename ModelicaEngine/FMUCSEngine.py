# Author: Zhiang Zhang
# First create: 2024-04-04

import shutil
import os
import platform
import zipfile
import time

import pandas as pd
import numpy as np

from colorlog import ColoredFormatter
from fmpy import read_model_description, extract, simulate_fmu
from fmpy.fmi2 import FMU2Slave
from fmpy.util import plot_result, download_test_file

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
            dll_path = f'{THIS_DIR}{os.sep}Resources{os.sep}'\
                        f'FMUCSEngine{os.sep}lib{os.sep}64bit{os.sep}libwinpthread-1.dll'
        elif 'win32' in fmu_dirs:
            lib_dir = f'{fmu_unzipped_dir}{os.sep}binaries{os.sep}win32'
            dll_path = f'{THIS_DIR}{os.sep}Resources{os.sep}'\
                        f'FMUCSEngine{os.sep}lib{os.sep}32bit{os.sep}libwinpthread-1.dll'
        if not os.path.exists(f'{lib_dir}{os.sep}libwinpthread-1.dll'):
            shutil.copy(dll_path, lib_dir)
            if logger is not None:
                logger.info(f'A libwinpthread-1.dll is copied into {lib_dir}')
        # Zip the fmu again
        zipped_path = shutil.make_archive(fmu_path, 'zip', fmu_unzipped_dir)
        new_fmu_path = fmu_path.split('.fmu')[0] + '_dllfixed.fmu'
        shutil.move(zipped_path, new_fmu_path)
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
        if self._a_is_leq_b(self._cur_step_time, self._sim_ed_time):
            raise RuntimeError('This simulation episode has reached to an end, run reset first!')
        self._fmu.setReal(self._vr_inputs, inputs)
        sim_n = 1
        while sim_n <= self._comm_step_multiplier and not self._a_is_leq_b(self._cur_step_time, self._sim_ed_time):
            # perform one step
            self._fmu.doStep(currentCommunicationPoint=self._cur_step_time, 
                            communicationStepSize=self._sim_step_size)
            self._cur_step_time += self._sim_step_size
            sim_n += 1
        outputs = self._fmu.getReal(self._vr_outputs)
        if not self._a_is_leq_b(self._cur_step_time, self._sim_ed_time):
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


    def simulate(self, step_size:int = 60, inputs:pd.DataFrame = None,
                outputs:list = [], start_values: dict = {}):
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
        self._logger.info('Start simulation...')
        # Process inputs
        if inputs is not None:
            print(inputs.values)
            inputs = np.array([tuple(row_i) for row_i in inputs.values], dtype=[(name, float) 
                                                    for name in inputs.columns])
        else:
            inputs = []
        self._logger.debug(f'Simulation inputs: {inputs}')
        # Process parameters to be set
        vrs = {}
        for variable in self._model_description.modelVariables:
            vrs[variable.name] = variable.valueReference

        
        
        result = simulate_fmu(
            filename = self._fmu_path,
            validate = False,
            start_time = self._sim_st_time,
            stop_time = self._sim_ed_time,
            solver = 'CVode',
            step_size = step_size,
            output_interval = step_size,
            record_events = True,
            start_values = start_values,
            input = inputs,
            output=outputs,
            fmi_call_logger=lambda s: print('[FMI] ' + s))
        result_col_names = ['time']
        result_col_names.extend(outputs)
        result = pd.DataFrame(result, columns = result_col_names)
        self._logger.info(f'Simulation results: \n{result}')
        return result

    def _a_is_leq_b(self, a, b):
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
    