import pandas as pd
import numpy as np
from ModelicaEngine.FMUCSEngine import FMUCSEngine


def main(u, config = None):

	"""
	u: pd.DataFrame
		The index is time index, and it has only one column
	"""
	delta_seconds = (u.index[1] - u.index[0]).total_seconds()

	engine = FMUCSEngine(fmu_path = './nb_hydr_static_v6.fmu', 
							working_dir = 'fmu_test', sim_st_time = 0, 
                			sim_ed_time = delta_seconds, log_level = 'DEBUG')
	for row_i in len(u):
		u_val_i = u.iloc[row_i]
		inputs_i = pd.DataFrame({'time': [0, delta_seconds],
					   			'u': [u_val_i, u_val_i]})
		print(inputs_i.values)
		print(inputs_i.columns)

		engine.simulate(step_size = 1, inputs = inputs_i, #start_values = {'chr_flow_nom': 300}, 
                outputs = ['chw_ret_m.m_flow'])