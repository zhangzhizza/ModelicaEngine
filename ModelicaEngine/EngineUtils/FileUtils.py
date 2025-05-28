# Author: Zhiang Zhang
# First create: 2022-06-16
import os
import re
import DyMat
import traceback

import numpy as np

from modelica_builder.model import Model


def read_mat_file(mat_file_path, output_names, 
					start_sim_time, end_sim_time, 
					sim_time_step):
	try:
		data = DyMat.DyMatFile(mat_file_path)
		time_array = data.mat['data_2'][0] # 'time' is at the 0 index position
		res = [time_array]
		for output_name in output_names:
			output_i = data.data(output_name)
			res.append(output_i)
		res = np.array(res)
		return res
	except Exception as e:
		tb = traceback.format_exc()
		raise ValueError(tb) from e

def find_files_in_dir(dir_name, file_ext = '.mo'):
	"""
	Find all .mo files in a directory
	"""
	items = os.listdir(dir_name)
	ext_len = len(file_ext)
	file_list = []
	for item in items:
		full_path = dir_name + os.sep + item
		if os.path.isdir(full_path):
			file_list.extend(find_files_in_dir(full_path))
		else:
			if full_path[-ext_len: ].lower() == file_ext:
				file_list.append(full_path)
	return file_list


def set_mo_params(mo_file_path, set_params_dict):
	model_obj = Model(mo_file_path)
	set_params_done = {}
	set_params_index_content = {} # remember the target lines and updated contents
	##########################################################
	#### read through all lines ##############################
	for param in set_params_dict:
		param_possible_types = ['Real', 'String', 'Boolean']
		for param_possible_type in param_possible_types:
			get_val = model_obj.get_parameter_value(param_possible_type, param)
			if get_val is not None:
				if param_possible_type == 'Real':
					new_value = str(set_params_dict[param])
				elif param_possible_type == 'Boolean':
					raw_value = set_params_dict[param]
					if type(raw_value) is bool:
						if raw_value is True:
							new_value = 'true'
						else:
							new_value = 'false'
					else:
						if raw_value.lower() == 'true':
							new_value = 'true'
						elif raw_value.lower() == 'false':
							new_value = 'false'
						else:
							raise ValueError(f'Parameter {param} type is Boolean, '\
											 f'but its value is invalid, should be '\
											 f'either a Boolean value or String value '\
											 f'"true" or "false"')
				elif param_possible_type == 'String':
					raw_value = set_params_dict[param].strip('"')
					new_value = f'\"{raw_value}\"'
				break
		if get_val is None:
			set_params_done[param] = False
		else:
			model_obj.update_parameter(type_=param_possible_type,
										identifier=param,
										new_value=new_value)
			set_params_done[param] = True
	not_done_ls = []
	for param in set_params_dict:
		if param not in set_params_done:
			not_done_ls.append(param)
	if len(not_done_ls)>0:
		not_done_ls_str = ','.join(not_done_ls)
		raise ValueError(f'Parameters {not_done_ls_str} cannot be found!')
	model_obj.save_as(mo_file_path)