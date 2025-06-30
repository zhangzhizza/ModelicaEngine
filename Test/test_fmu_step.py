import random

import pandas as pd
import numpy as np
from ModelicaEngine.FMUCSEngine import FMUCSEngine

engine = FMUCSEngine(
    fmu_path="./nb_hydr_static_v6.fmu",
    working_dir="fmu_test",
    sim_st_time=0,
    sim_ed_time=3600,
    log_level="DEBUG",
)
engine.reset(
    input_names=["u"],
    output_names=["chw_ret_m.m_flow"],
    sim_step_size=0.1,
    comm_step_multiplier=600,
)

is_terminal = False
while not is_terminal:
    u = max(0.5, random.random())
    is_terminal, states = engine.step([u])

engine.reset(
    input_names=["u"],
    output_names=["chw_ret_m.m_flow"],
    sim_step_size=0.1,
    comm_step_multiplier=600,
)
is_terminal = False
while not is_terminal:
    u = max(0.5, random.random())
    is_terminal, states = engine.step([u])
