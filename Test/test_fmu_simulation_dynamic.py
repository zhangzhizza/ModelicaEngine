import pandas as pd
import numpy as np
from ModelicaEngine.FMUCSEngine import FMUCSEngine

df = pd.read_csv('RoomWithMAUnDCCnFFUSAL.csv')
df['time'] = pd.to_datetime(df['time'])
df = df.set_index('time')
df = df.iloc[0:3]
print(df)


def main(u, sim_ed_time, sim_step_time, dynamic_step_size_retry, 
			step_size_decay_factor, do_fmi_logging = False, 
			refresh_fmu_interval = 1800, config = None):

	"""
	u: pd.DataFrame
		The index is time index, and it has only one column
	"""

	engine = FMUCSEngine(fmu_path = './RoomWithMAUnDCCnFFUSAL.fmu', 
							working_dir = 'fmu_test', sim_st_time = 0, 
                			sim_ed_time = sim_ed_time, log_level = 'DEBUG')
	inputs_array = []
	time = 0
	for row_i in range(len(u)):
		if row_i == 0:
			input_array_i = [time]
		else:
			time = time + (u.index[row_i] - u.index[row_i - 1]).total_seconds()
			input_array_i = [time]
		input_array_i.extend(u.iloc[row_i, :].values.tolist())
		inputs_array.append(input_array_i)
	input_df_columns = ['time']
	input_df_columns.extend([f'{col_i}.k' for col_i in u.columns])
	print(inputs_array)
	input_df = pd.DataFrame(inputs_array, columns = input_df_columns)
	print(input_df)
	res = engine.simulate_dynamic(step_size = sim_step_time,
                        	inputs = input_df,
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
                        	relative_tolerance = 1e-4, 
                        	do_fmi_logging = do_fmi_logging,
                        	dynamic_step_size_retry = dynamic_step_size_retry,
                        	step_size_lower_thres = 1e-4,
                        	step_size_decay_factor = step_size_decay_factor,
                        	refresh_fmu_interval = refresh_fmu_interval)
		
	res.to_csv(f'out_simulate_dynamic.csv')

main(df, sim_ed_time = 3*3600, sim_step_time = 0.05, 
			dynamic_step_size_retry = True, step_size_decay_factor = 2,
			do_fmi_logging = True, refresh_fmu_interval = 10000000)