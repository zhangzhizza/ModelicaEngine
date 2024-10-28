# Author: Zhiang Zhang
# First create: 2024-05-01
import os
import shutil
import time
import copy
import socket
import threading
import traceback

import pandas as pd
import numpy as np

from abc import ABC, abstractmethod
from queue import Queue
from colorlog import ColoredFormatter
from OMPython import ModelicaSystem

from .EngineUtils.Logger import Logger
from .EngineUtils.FileUtils import set_mo_params

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

class OMEngineAbstract(ABC):

	def __init__(self, mo_name:str, mo_path:str, library_paths:list, 
				set_params_dict:dict={}, log_level = 'INFO', multiprocesses = 1,
				working_dir:str = None, inplace_set = False, additional_cmds: str = None):
		self._logger = Logger().getLogger('{}-{}'.format(self.engine_type, mo_name),
                                        log_level, LOG_FMT)
		self._mo_path = os.path.abspath(mo_path).replace('\\', '/')
		# set model parameters before compilation
		if len(set_params_dict) > 0:
			mo_file_name = os.path.splitext(os.path.basename(self._mo_path))[0]
			if working_dir is None:
				working_dir = os.path.dirname(self._mo_path)
			if not inplace_set:
				new_mo_path = working_dir + '/' \
						+ f'{mo_file_name}_set{time.time()}.mo'
				shutil.copyfile(self._mo_path, new_mo_path)
				self._mo_path = new_mo_path
			else:
				new_mo_path = self._mo_path
			set_mo_params(self._mo_path, set_params_dict)
			self._logger.info(f'Model parameter set before compilation, '\
								f'set parameter: {set_params_dict}, '\
								f'new Modelica file is at {new_mo_path}')
		self._library_paths = library_paths
		self._log_level = log_level
		self._cwd = os.getcwd()
		self._mo_name = mo_name
		self._logger.info(f'Preparing engine workers ({multiprocesses} in total)...')
		self._multiprocesses = multiprocesses
		self._engine_workers = Queue(maxsize=multiprocesses)
		self._sim_counter = 0
		self._additional_cmds = additional_cmds
		threads = []
		for i in range(multiprocesses):
			thread_i = threading.Thread(target=self._add_worker_to_list, 
											args=(i, ))
			threads.append(thread_i)
			thread_i.start()
			time.sleep(0.2)
		
		for thread in threads:
			thread.join()
		time.sleep(0.5)

	def set_params_get_new_mo_file(self, set_params_dict:dict, new_mo_path:str):
		shutil.copyfile(self._mo_path, new_mo_path)
		set_mo_params(new_mo_path, set_params_dict)
		self._logger.info(f'A new Modelica file with parameters {set_params_dict} is written in {new_mo_path}')

	def set_params_recompile(self, set_params_dict:dict):
		set_done = False
		print_done = False
		done_count = 0
		self._logger.info('Performing set_params_recompile... ')
		threads = []
		while done_count < self._multiprocesses:
			available_worker = self._find_available_worker(request_id = 'set_params_recompile')
			self._logger.info(f'Performing set_params_recompile for worker {available_worker.worker_name}... ')
			thread_i = threading.Thread(target=self._set_params_recompile_helper,
										args=(available_worker, set_params_dict, ))
			threads.append(thread_i)
			thread_i.start()
			time.sleep(0.2)
			done_count += 1
			print(done_count)
		for thread in threads:
			thread.join()
		self._logger.info('set_params_recompile completed!')

	def _set_params_recompile_helper(self, worker, set_params_dict:dict):
		worker.set_params_recompile(set_params_dict=set_params_dict)
		self._engine_workers.put(worker)

	def get_params(self, param_names:list) -> dict:
		available_worker = self._find_available_worker(request_id = 'get_params')
		param_vals = available_worker.get_params(param_names)
		self._engine_workers.put(available_worker)
		return param_vals

	def _add_worker_to_list(self, worker_id):
		library_paths = []
		for path in self._library_paths:
			path = path.replace('\\', '/')
			library_paths.append(path)
		this_worker = EngineWorker(self._mo_name, 
									self._mo_path, 
									library_paths = library_paths,
									log_level=self._log_level, 
									worker_id = worker_id,
									additional_cmds = self._additional_cmds)
		self._engine_workers.put(this_worker)

	def _find_available_worker(self, request_id):
		self._logger.info(f'Looking for a available worker for the request {request_id} ... ')
		available_worker = self._engine_workers.get()
		self._logger.info(f'Worker {available_worker.worker_name} is available for the request {request_id}.')
		return available_worker

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

	def __init__(self, mo_name:str, mo_path:str, library_paths:list, 
						log_level:str = 'INFO', worker_id:int = 0,
						additional_cmds: str = None):
		self._mo_path = mo_path
		self._mo_full_path = os.path.abspath(mo_path)
		self._mo_name = mo_name
		self._worker_name = '{}Worker-{}'.format(self._mo_name, worker_id)
		self._logger = Logger().getLogger(self._worker_name, log_level, LOG_FMT)
		self._mo_full_path = self._mo_full_path.replace('\\', '/')
		library_paths = [] if library_paths is None else library_paths
		library_paths.append(mo_path)
		try:
			self._om = ModelicaSystem(fileName = None, # Here must be None when given library paths, a bug of OMPython 
										modelName = self._mo_name, 
										lmodel = library_paths,
										commandLineOptions = additional_cmds)
			self._is_busy = False
			self._logger.info('Worker started successfully!')
		except Exception as e:
			self._logger.error(f'Exception occurred: {e}, {traceback.print_exc()}')

	def set_params_recompile(self, set_params_dict:dict):
		set_params_list = []
		for param in set_params_dict:
			set_params_list.append(f'{param}={set_params_dict[param]}')
		self._logger.info(f'setParameters input list is {set_params_list}')
		self._om.setParameters(set_params_list)
		self._om.buildModel()
		self._logger.info(f'Recompilation completed!')

	def get_params(self, param_names:list) -> dict:
		param_vals = self._om.getParameters(param_names)
		return param_vals

	def _set_simulation_options(self, set_params_dict:dict, start_time:int, 
								final_time:int, step_time:int, method:str='dassl', 
								rtol:float=1e-6, ):
		# step1: set the simulation parameters
		set_params_list = []
		for param in set_params_dict:
			set_params_list.append(f'{param}={set_params_dict[param]}')
		self._logger.info(f'setParameters input list is {set_params_list}')
		self._om.setParameters(set_params_list)
		# step2: confirm the parameters are set
		for param in set_params_dict:
			to_set_val = set_params_dict[param]
			self._logger.info(f'Checking {param}...')
			mo_val = float(self._om.getParameters([param])[0])
			if abs(mo_val - to_set_val) > 1e-4:
				self._logger.warning(f'{param} is not set! It should be {to_set_val},'\
									 f'but it is {mo_val} in the model!')
		# step3: set simulation options
		self._om.setSimulationOptions([f"startTime={start_time}",f"stopTime={final_time}",
                         			f"stepSize={step_time}", f'tolerance={rtol}',
                         			f'solver={method}'])
		self._logger.info(f'Simulation options:{self._om.getSimulationOptions()}')


	def _get_simulation_results(self, result_filter:list, res_step_time:int, step_time:int,
									res_path:str):

		result_filter = copy.deepcopy(result_filter)
		if 'time' not in result_filter:
			result_filter.append('time')
		# try multiple times because sometime the results are not ready so soon
		read_res_done = False
		read_res_trials = 0
		res_df = None
		while read_res_done is False and read_res_trials <= 5:
			try:
				res = self._om.getSolutions(result_filter)
				res = np.array(res).T
				res_df = pd.DataFrame(res)
				read_res_done = True
			except:
				read_res_trials += 1
				self._logger.warning('Cannot find the simulation result file '\
								f'after trying for {read_res_trials} times, will retry...')
				time.sleep(0.2)

		if read_res_done is False:
			self._logger.error('Cannot find the simulation result file '\
								f'after trying for {read_res_trials - 1} times!')
			raise RuntimeError('Cannot find the simulation result file '\
								f'after trying for {read_res_trials - 1} times!')
		else:
			res_df.columns = result_filter
			res_df = res_df.set_index(res_df['time'])
			res_df = res_df[~res_df.index.duplicated(keep='first')]
			res_df.index = pd.TimedeltaIndex(res_df.index, unit='S')
			if res_step_time is None:
				res_df = res_df.resample(f'{step_time}S').mean()
			else:
				res_df = res_df.resample(f'{res_step_time}S').mean()
			# step6: write the results
			if res_path is not None:
				res_df.to_csv(res_path)
			return res_df
			

	def simulate(self, set_params_dict:dict, start_time:int, 
				final_time:int, step_time:int, result_filter:list, 
				method:str='dassl', rtol:float=1e-6, res_path:str=None,
				res_step_time:int = None, simflag:str = '', timeout = None):
		self._is_busy = True
		# step1: set simulation parameters and options
		self._set_simulation_options(set_params_dict = set_params_dict, start_time = start_time, 
								final_time = final_time, step_time = step_time, method = method, 
								rtol = rtol)
		# step4: run simulation
		try:
			if len(simflag) == 0:
				self._om.simulate(verbose = False, timeout = timeout)
			else:
				self._om.simulate(simflags = simflag, verbose = False, timeout = timeout)
			# step5: collect results
			res_df = self._get_simulation_results(result_filter = result_filter, 
									res_step_time = res_step_time, step_time = step_time,
									res_path = res_path)
			self._logger.info(f'Simulation completed!')
		except Exception as e:
			self._logger.error(f'Simulation failed! Exception: {e}')
			res_df = None
		self._is_busy = False
		return res_df

	def simulate_interactive(self, port:int, set_params_dict:dict, start_time:int, 
							final_time:int, step_time:int, result_filter:list, 
							method:str='dassl', rtol:float=1e-6, res_path:str=None,
							res_step_time:int = None, simflag:str = ''):
		# step1: set simulation parameters and options
		self._set_simulation_options(set_params_dict = set_params_dict, start_time = start_time, 
								final_time = final_time, step_time = step_time, method = method, 
								rtol = rtol)
		is_port_available = self._is_port_available(port)
		if not is_port_available:
			self._logger.error(f'Port {port} is not available for interactive simulation')
			raise ValueError(f'Port {port} is not available for interactive simulation')
		self._om.simulate(simflags = f'-embeddedServer=opc-ua -embeddedServerPort={port} {simflag}')
		# step5: collect results
		res_df = self._get_simulation_results(result_filter = result_filter, 
									res_step_time = res_step_time, step_time = step_time,
									res_path = res_path)
		self._is_busy = False
		self._logger.info(f'Interactive simulation completed!')
		return res_df

	def _is_port_available(self, port):
		s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
		try:
			s.bind(('localhost', port))
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
