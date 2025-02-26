from ModelicaEngine.OMEngine import InteractiveEngine

async def main():

	library_paths = ['C:/Users/Zhiang Zhang/OneDrive/research/product/ModelicaPlatform/Modelica 3.2.3/package.mo',
					'C:/Users/Zhiang Zhang/OneDrive/research/product/ModelicaPlatform/Buildings 8.1.3/package.mo',
					'C:/Users/Zhiang Zhang/OneDrive/research/product/ModelicaPlatform/HVAC/package.mo',
					'C:/Users/Zhiang Zhang/OneDrive/research/2023_schaeffler/nanjing/mo/Model/PerData/package.mo']
	model = InteractiveEngine(mo_name = 'Hall2ThermalResponse', 
						mo_path = './mo/Hall2ThermalResponse.mo', 
						library_paths = library_paths,
						log_level = 'INFO', 
						port = 4802, 
						start_time = 0, final_time = 36000, step_time = 60, 
						u_names = ['x_Tdb'],
						result_filter = ['Hall2.TroomAir', 'Hall2.RHroomAir'], 
						method = 'dassl', rtol = 1e-6, 
						res_path = 'omi_engine_res.csv', 
						res_step_time = 60,
						working_dir = './test_omi_engine')

	await model.reset()
	is_terminal = False
	u = 2
	while not is_terminal:
		state, is_terminal, sim_time = await model.step([u])
		print('..................................')

import asyncio

asyncio.run(main())
