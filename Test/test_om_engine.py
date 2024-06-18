from ModelicaEngine.OMEngine import Engine

max_workers = 1
library_paths = ['C:/Users/Zhiang Zhang/Documents/Dymola/Library/Buildings 8.1.3/package.mo',
				'C:/Users/Zhiang Zhang/OneDrive - The University of Nottingham Ningbo China/research/dieteng_dc/product_rd/ModelicaPlatform/HVAC/package.mo',
				'C:/Users/Zhiang Zhang/OneDrive - The University of Nottingham Ningbo China/research/2023_schaeffler/nanjing/mo/Model/PerData/package.mo']
model = Engine(mo_name = 'Hall2ThermalResponse', 
					mo_path = './mo/Hall2ThermalResponse.mo', 
					set_params_dict = {'Mode':'\"Calibration\"'},
					library_paths = library_paths,
					log_level = 'INFO', 
					multiprocesses = max_workers)
model.simulate(set_params_dict = {}, start_time = 0, 
				final_time = 240, step_time = 60, 
				result_filter = ['Hall2.TroomAir'], 
				method ='dassl')