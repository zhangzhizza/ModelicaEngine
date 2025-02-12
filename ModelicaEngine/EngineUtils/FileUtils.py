# Author: Zhiang Zhang
# First create: 2022-06-16
import os
import re
import DyMat
import traceback

import numpy as np

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
	with open(mo_file_path, "r") as mo_file_r:
		mo_content = mo_file_r.read()
	set_params_done = {}
	set_params_index_content = {} # remember the target lines and updated contents
	mo_content_ls = mo_content.split('\n')
	##########################################################
	#### read through all lines ##############################
	for i in range(len(mo_content_ls)):
		content_i = mo_content_ls[i]
		for param in set_params_dict:
			# trying to locate the staring and ending index of number
			# e.g. "parameter Real Hall2_FhumwNominal = 0.001 "Nominal water mass flow rate the humidifier";"
			# the number 0.001 is the target to be changed
			pattern_end_number = f'parameter.*{param}\\s?(=|\\[.*?\\]\\s?=)\\s*(.*?)(?=\\s*")' #f'parameter.*{param}\\s*=\\s*([\\d.]+)'#f'parameter.*{param}.*=.*([+-]?(?=\\.\\d|\\d)(?:\\d+)?(?:\\.?\\d*))(?:[Ee]([+-]?\\d+))?'
			pattern_end_string = f'parameter.*String.*{param}.*=.*".*?"' #f'parameter.*String.*{param}.*=.*[\'\"]'
			pattern_start = f'parameter.*{param}\\s?(=|\\[.*?\\]\\s?=)' #f'parameter.*{param}\\s?='
			match_end_number = re.search(pattern_end_number, content_i)
			match_end_string = re.search(pattern_end_string, content_i)
			match_start = re.search(pattern_start, content_i)
			is_parameter_string = False
			if re.search(r'\bparameter\s+(\w+)', content_i):
				parameter_type = re.search(r'\bparameter\s+(\w+)', content_i).group(1)
				if parameter_type == "String":
					is_parameter_string = True
			if match_start:
				if is_parameter_string:
					match_end = match_end_string
				else:
					match_end = match_end_number					
				new_content_i = list(content_i)
				new_content_i[match_start.end(): match_end.end()] = str(set_params_dict[param])
				new_content_i = ''.join(new_content_i)
				set_params_index_content[i] = new_content_i
				set_params_done[param] = True
	# change the found lines
	for set_line_i in set_params_index_content:
		mo_content_ls[set_line_i] = set_params_index_content[set_line_i]
	not_done_ls = []
	for param in set_params_dict:
		if param not in set_params_done:
			not_done_ls.append(param)
	if len(not_done_ls)>0:
		not_done_ls_str = ','.join(not_done_ls)
		raise ValueError(f'Parameters {not_done_ls_str} cannot be found!')
	mo_content = '\n'.join(mo_content_ls)
	with open(mo_file_path, "w") as mo_file_w:
		mo_file_w.write(mo_content)