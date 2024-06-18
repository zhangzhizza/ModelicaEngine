import pandas as pd
import numpy as np
from ModelicaEngine.FMUCSEngine import FMUCSEngine

df = pd.read_csv('RoomWithMAUnDCCnFFUSAL.csv')
df['time'] = pd.to_datetime(df['time'])
df = df.set_index('time')


def main(u, sim_ed_time, sim_step_time, dynamic_step_size_retry, 
			step_size_decay_factor, do_fmi_logging = False, config = None):

	"""
	u: pd.DataFrame
		The index is time index, and it has only one column
	"""

	engine = FMUCSEngine(fmu_path = './RoomWithMAUnDCCnFFUSAL.fmu', 
							working_dir = 'fmu_test', sim_st_time = 0, 
                			sim_ed_time = sim_ed_time, log_level = 'DEBUG')
	for row_i in range(len(u)):
		this_input = {}
		for col in u.columns:
			this_input[f'{col}.k'] = u.iloc[row_i][col]

		print(this_input)

		res_i = engine.simulate(step_size = sim_step_time, 
								dynamic_step_size_retry = dynamic_step_size_retry,
								step_size_lower_thres = 1e-4,
								step_size_decay_factor = step_size_decay_factor,
								inputs = None, relative_tolerance = 1e-5, start_values = this_input, 
                outputs = ['DemandSideSystem.QmauHtg', 'DemandSideSystem.QmauPreClg', 
                			'DemandSideSystem.QmauClg', 'DemandSideSystem.QdccClg',
                			'DemandSideSystem.QclgTotal', 'DemandSideSystem.roomWithMAUnDCCnFFU.MAUSixPipeSingleFan.sen_chw_out_t.T',
                			'DemandSideSystem.roomWithMAUnDCCnFFU.FmauCw', 'DemandSideSystem.roomWithMAUnDCCnFFU.TmauCwOut',
                			'DemandSideSystem.from_degC.y', 'DemandSideSystem.add4.y',
                			'DemandSideSystem.roomWithMAUnDCCnFFU.MAUSixPipeSingleFan.sen_air_sup_t.T',
                			'DemandSideSystem.roomWithMAUnDCCnFFU.MAUSixPipeSingleFan.sen_air_m.m_flow',
                			'DemandSideSystem.roomWithMAUnDCCnFFU.MAUSixPipeSingleFan.sen_hw_out_t.T',
                			'DemandSideSystem.roomWithMAUnDCCnFFU.MAUSixPipeSingleFan.sen_hw_in_t.T',
                			'DemandSideSystem.roomWithMAUnDCCnFFU.MAUSixPipeSingleFan.sen_chw_out_t.T',
                			'DemandSideSystem.roomWithMAUnDCCnFFU.MAUSixPipeSingleFan.sen_chw_in_t.T'],
                do_fmi_logging = do_fmi_logging
                )
		#print(res_i)# 只用仿真后的最后一行的结果
		res_i.to_csv(f'out{row_i}.csv')

main(df, sim_ed_time = 9600, sim_step_time = 0.1, dynamic_step_size_retry = True, step_size_decay_factor = 2)
                