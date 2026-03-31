# Author: Zhiang Zhang
# First create: 2022-06-16
import os
import re
import DyMat
import traceback

import numpy as np

from modelica_builder.model import Model


def read_mat_file(
    mat_file_path, output_names, start_sim_time, end_sim_time, sim_time_step
):
    try:
        data = DyMat.DyMatFile(mat_file_path)
        time_array = data.mat["data_2"][0]  # 'time' is at the 0 index position
        res = [time_array]
        for output_name in output_names:
            output_i = data.data(output_name)
            res.append(output_i)
        print('............res:......', res)
        res = np.array(res)
        return res
    except Exception as e:
        tb = traceback.format_exc()
        raise ValueError(tb) from e


def find_files_in_dir(dir_name, file_ext=".mo"):
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
            if full_path[-ext_len:].lower() == file_ext:
                file_list.append(full_path)
    return file_list


def set_mo_params(mo_file_path, set_params_dict):
    print("set_params_dict:", set_params_dict)
    print('mo_file_path:', mo_file_path)
    model_obj = Model(mo_file_path)
    print('model_obj:', model_obj)
    ##########################################################
    #### read through all lines ##############################
    for param in set_params_dict:
        set_val = set_params_dict[param]
        print("param:", param)
        print("val:", set_val)
        if type(set_val) is dict:
            param_possible_type = set_val["type"]
            new_value = set_val["value"]
        else:
            param_possible_types = [
                "Real",
                "String",
                "Boolean",
                "Integer",
                "Modelica.SIunits.MassFlowRate",
                "Modelica.SIunits.Pressure",
                "Modelica.SIunits.ThermodynamicTemperature",
                "Modelica.SIunits.EnergyFlowRate",
                "Modelica.SIunits.Power"
            ]
            for param_possible_type in param_possible_types:
                get_val = None
                try:
                    get_val = model_obj.get_parameter_value(param_possible_type, param)
                except Exception as e:
                    print(
                        f"WARNING! The parameter {param_possible_type} {param} cannot be parsed! e: {e}"
                    )
                    get_val = 'has_value' # TO-DO: cannot parse due to a bug in modelica_builder
                print("param_possible_type:", param_possible_type, "get_val:", get_val)
                if get_val is not None:
                    if param_possible_type == "Real":
                        new_value = str(set_val)
                    elif param_possible_type == "Boolean":
                        raw_value = set_val
                        if type(raw_value) is bool:
                            if raw_value is True:
                                new_value = "true"
                            else:
                                new_value = "false"
                        else:
                            if raw_value.lower() == "true":
                                new_value = "true"
                            elif raw_value.lower() == "false":
                                new_value = "false"
                            else:
                                raise ValueError(
                                    f"Parameter {param} type is Boolean, "
                                    f"but its value is invalid, should be "
                                    f"either a Boolean value or String value "
                                    f'"true" or "false"'
                                )
                    elif param_possible_type == "String":
                        raw_value = set_val.strip('"')
                        new_value = f'"{raw_value}"'
                    else:
                        new_value = str(set_val)
                    break
        print("param:", param, "param_possible_type", param_possible_type, "new_value", new_value)
        if "PerData" in param_possible_type:
            model_obj.remove_component(identifier=param)
            model_obj.add_parameter(
                type_=param_possible_type,
                identifier=param)
        else:
            model_obj.update_parameter(
                type_=param_possible_type, identifier=param, new_value=new_value
            )
    model_obj.save_as(mo_file_path)
