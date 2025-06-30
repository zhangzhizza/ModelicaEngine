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

inputs = pd.DataFrame(
    {"time": [0, 1000, 2000, 3000, 4000], "u": [0.4, 0.5, 0.4, 0.3, 0.2]}
)
print(inputs.values)
print(inputs.columns)

inputs_array = np.array([(0, 100), (10, 10000)], dtype=[("a", "f4"), ("b", "f4")])
print(inputs_array)

res = engine.simulate(
    step_size=0.001,
    inputs=inputs,  # start_values = {'chr_flow_nom': 300},
    outputs=["chw_ret_m.m_flow"],
)
print(res)
