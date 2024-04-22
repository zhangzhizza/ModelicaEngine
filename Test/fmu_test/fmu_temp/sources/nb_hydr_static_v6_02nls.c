/* Non Linear Systems */
#include "nb_hydr_static_v6_model.h"
#include "nb_hydr_static_v6_12jac.h"
#include "simulation/jacobian_util.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 95
type: SIMPLE_ASSIGN
chwp_2.vol.steBal.m_flowInv = if noEvent(chiller_2.m_flow > 5.74453122e-05) or noEvent(chiller_2.m_flow < -5.74453122e-05) then 1.0 / chiller_2.m_flow else if noEvent(chiller_2.m_flow < 2.87226561e-05) and noEvent(chiller_2.m_flow > -2.87226561e-05) then 303033618.607859 * chiller_2.m_flow else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(chiller_2.m_flow, 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27)
*/
void nb_hydr_static_v6_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = Greater((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),5.74453122e-05);
  tmp1 = Less((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),-5.74453122e-05);
  tmp4 = (modelica_boolean)(tmp0 || tmp1);
  if(tmp4)
  {
    tmp5 = DIVISION_SIM(1.0,(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),"chiller_2.m_flow",equationIndexes);
  }
  else
  {
    tmp2 = Less((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),2.87226561e-05);
    tmp3 = Greater((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),-2.87226561e-05);
    tmp5 = ((tmp2 && tmp3)?(303033618.607859) * ((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)):omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27));
  }
  (data->localData[0]->realVars[252] /* chwp_2.vol.steBal.m_flowInv variable */) = tmp5;
  TRACE_POP
}
/*
equation index: 96
type: SIMPLE_ASSIGN
chiller_2.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(chiller_2.m_flow, chiller_2.k, chiller_2.m_flow_turbulent), 200000.0 * chiller_2.m_flow / chiller_2.m_flow_nominal_pos)
*/
void nb_hydr_static_v6_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[172] /* chiller_2.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), (data->simulationInfo->realParameter[93] /* chiller_2.k PARAM */), (data->simulationInfo->realParameter[97] /* chiller_2.m_flow_turbulent PARAM */)), DIVISION_SIM((200000.0) * ((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)),(data->simulationInfo->realParameter[95] /* chiller_2.m_flow_nominal_pos PARAM */),"chiller_2.m_flow_nominal_pos",equationIndexes));
  TRACE_POP
}
/*
equation index: 97
type: SIMPLE_ASSIGN
chwp_2.VMachine_flow = 0.001004433569776996 * chiller_2.m_flow
*/
void nb_hydr_static_v6_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */) = (0.001004433569776996) * ((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */));
  TRACE_POP
}
/*
equation index: 98
type: SIMPLE_ASSIGN
chwp_2.dpMachine = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(chwp_2.VMachine_flow, chwp_2.filter.y, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]})), chwp_2.filter.y * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(0.577, 1.0, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]})) + (chwp_2.VMachine_flow - 0.577) * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 + chwp_2.eff.delta) * 0.577, 1.0, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]})) - Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 - chwp_2.eff.delta) * 0.577, 1.0, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]}))) / (1.154 * chwp_2.eff.delta))) - chwp_2.VMachine_flow * chwp_2.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  real_array tmp0;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp1;
  real_array tmp2;
  real_array tmp3;
  real_array tmp4;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp5;
  real_array tmp6;
  real_array tmp7;
  real_array tmp8;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp9;
  real_array tmp10;
  real_array tmp11;
  real_array tmp12;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp13;
  real_array tmp14;
  real_array tmp15;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[765] /* chwp_2.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp2, 19, (modelica_real)(data->simulationInfo->realParameter[624] /* chwp_2.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp3, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[644] /* chwp_2.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[645] /* chwp_2.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[646] /* chwp_2.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[647] /* chwp_2.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[648] /* chwp_2.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[649] /* chwp_2.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[650] /* chwp_2.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[651] /* chwp_2.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[652] /* chwp_2.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[653] /* chwp_2.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[654] /* chwp_2.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[655] /* chwp_2.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[656] /* chwp_2.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[657] /* chwp_2.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[658] /* chwp_2.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[659] /* chwp_2.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[660] /* chwp_2.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[661] /* chwp_2.eff.pCur3.dp[19] PARAM */));
  tmp1._n = ((modelica_integer) 19);
  tmp1._V_flow = tmp2;
  tmp1._dp = tmp3;
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[765] /* chwp_2.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp6, 19, (modelica_real)(data->simulationInfo->realParameter[624] /* chwp_2.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp7, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[644] /* chwp_2.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[645] /* chwp_2.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[646] /* chwp_2.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[647] /* chwp_2.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[648] /* chwp_2.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[649] /* chwp_2.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[650] /* chwp_2.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[651] /* chwp_2.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[652] /* chwp_2.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[653] /* chwp_2.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[654] /* chwp_2.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[655] /* chwp_2.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[656] /* chwp_2.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[657] /* chwp_2.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[658] /* chwp_2.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[659] /* chwp_2.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[660] /* chwp_2.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[661] /* chwp_2.eff.pCur3.dp[19] PARAM */));
  tmp5._n = ((modelica_integer) 19);
  tmp5._V_flow = tmp6;
  tmp5._dp = tmp7;
  real_array_create(&tmp8, ((modelica_real*)&((&data->simulationInfo->realParameter[765] /* chwp_2.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp10, 19, (modelica_real)(data->simulationInfo->realParameter[624] /* chwp_2.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp11, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[644] /* chwp_2.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[645] /* chwp_2.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[646] /* chwp_2.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[647] /* chwp_2.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[648] /* chwp_2.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[649] /* chwp_2.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[650] /* chwp_2.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[651] /* chwp_2.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[652] /* chwp_2.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[653] /* chwp_2.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[654] /* chwp_2.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[655] /* chwp_2.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[656] /* chwp_2.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[657] /* chwp_2.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[658] /* chwp_2.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[659] /* chwp_2.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[660] /* chwp_2.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[661] /* chwp_2.eff.pCur3.dp[19] PARAM */));
  tmp9._n = ((modelica_integer) 19);
  tmp9._V_flow = tmp10;
  tmp9._dp = tmp11;
  real_array_create(&tmp12, ((modelica_real*)&((&data->simulationInfo->realParameter[765] /* chwp_2.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp14, 19, (modelica_real)(data->simulationInfo->realParameter[624] /* chwp_2.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp15, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[644] /* chwp_2.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[645] /* chwp_2.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[646] /* chwp_2.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[647] /* chwp_2.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[648] /* chwp_2.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[649] /* chwp_2.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[650] /* chwp_2.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[651] /* chwp_2.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[652] /* chwp_2.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[653] /* chwp_2.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[654] /* chwp_2.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[655] /* chwp_2.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[656] /* chwp_2.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[657] /* chwp_2.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[658] /* chwp_2.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[659] /* chwp_2.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[660] /* chwp_2.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[661] /* chwp_2.eff.pCur3.dp[19] PARAM */));
  tmp13._n = ((modelica_integer) 19);
  tmp13._V_flow = tmp14;
  tmp13._dp = tmp15;
  (data->localData[0]->realVars[226] /* chwp_2.dpMachine variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */), (data->localData[0]->realVars[231] /* chwp_2.filter.y variable */), tmp0, 909154.9295774648, 0.5770020020020019, tmp1), ((data->localData[0]->realVars[231] /* chwp_2.filter.y variable */)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, 0.577, 1.0, tmp4, 909154.9295774648, 0.5770020020020019, tmp5) + DIVISION_SIM(((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */) - 0.577) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 + (data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */)) * (0.577), 1.0, tmp8, 909154.9295774648, 0.5770020020020019, tmp9) - omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 - (data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */)) * (0.577), 1.0, tmp12, 909154.9295774648, 0.5770020020020019, tmp13)),(1.154) * ((data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */)),"1.154 * chwp_2.eff.delta",equationIndexes))) - (((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */)) * ((data->simulationInfo->realParameter[552] /* chwp_2.eff.kRes PARAM */)));
  TRACE_POP
}
/*
equation index: 99
type: SIMPLE_ASSIGN
chwp_2.P = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_2.eff.per.power, chwp_2.VMachine_flow, chwp_2.filter.y, chwp_2.eff.powDer, chwp_2.eff.delta), chwp_2.VMachine_flow / 0.577 * Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_2.eff.per.power, 0.577, 1.0, chwp_2.eff.powDer, chwp_2.eff.delta))
*/
void nb_hydr_static_v6_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  real_array tmp0;
  real_array tmp1;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp2;
  real_array tmp3;
  real_array tmp4;
  real_array tmp5;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp6;
  real_array tmp7;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[676] /* chwp_2.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[668] /* chwp_2.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp2, tmp0, tmp1);
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[722] /* chwp_2.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[676] /* chwp_2.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp5, ((modelica_real*)&((&data->simulationInfo->realParameter[668] /* chwp_2.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp6, tmp4, tmp5);
  real_array_create(&tmp7, ((modelica_real*)&((&data->simulationInfo->realParameter[722] /* chwp_2.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  (data->localData[0]->realVars[222] /* chwp_2.P variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp2, (data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */), (data->localData[0]->realVars[231] /* chwp_2.filter.y variable */), tmp3, (data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */)), (DIVISION_SIM((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */),0.577,"0.577",equationIndexes)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp6, 0.577, 1.0, tmp7, (data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */))));
  TRACE_POP
}
/*
equation index: 100
type: SIMPLE_ASSIGN
chwp_2.heaDis.WHyd = chwp_2.dpMachine * chwp_2.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */) = ((data->localData[0]->realVars[226] /* chwp_2.dpMachine variable */)) * ((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */));
  TRACE_POP
}
/*
equation index: 101
type: SIMPLE_ASSIGN
chwp_2.heaDis.QThe_flow = (if chwp_2.per.motorCooledByFluid then chwp_2.P else chwp_2.heaDis.WHyd) - chwp_2.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[232] /* chwp_2.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[127] /* chwp_2.per.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[222] /* chwp_2.P variable */):(data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */)) - (data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 102
type: SIMPLE_ASSIGN
chwp_2.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(chwp_2.VMachine_flow) + -0.001154004004004004 > 0.0005770020020020019) then chwp_2.heaDis.QThe_flow else if noEvent(abs(chwp_2.VMachine_flow) + -0.001154004004004004 < -0.0005770020020020019) then 0.0 else 0.25 * (2.0 - 1733.096239753654 * abs(chwp_2.VMachine_flow)) * ((1733.096239753654 * abs(chwp_2.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * chwp_2.heaDis.QThe_flow + 0.5 * chwp_2.heaDis.QThe_flow), 0.0)
*/
void nb_hydr_static_v6_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater(fabs((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */)) + -0.001154004004004004,0.0005770020020020019);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (data->localData[0]->realVars[232] /* chwp_2.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp1 = Less(fabs((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */)) + -0.001154004004004004,-0.0005770020020020019);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = 0.0;
    }
    else
    {
      tmp2 = (1733.096239753654) * (fabs((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */))) + -2.0;
      tmp4 = (0.25) * (((2.0 - ((1733.096239753654) * (fabs((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */))))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[232] /* chwp_2.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[232] /* chwp_2.heaDis.QThe_flow variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[223] /* chwp_2.PToMed.u1 variable */) = homotopy(tmp6, 0.0);
  TRACE_POP
}
/*
equation index: 103
type: SIMPLE_ASSIGN
chwp_2.prePow.Q_flow = chwp_2.PToMed.u1 + chwp_2.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->realVars[238] /* chwp_2.prePow.Q_flow variable */) = (data->localData[0]->realVars[223] /* chwp_2.PToMed.u1 variable */) + (data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 104
type: SIMPLE_ASSIGN
checkvalve_2.port_a.p = ret_p.k + chwp_2.dpMachine
*/
void nb_hydr_static_v6_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[226] /* chwp_2.dpMachine variable */);
  TRACE_POP
}
/*
equation index: 105
type: SIMPLE_ASSIGN
chwp_3.vol.steBal.m_flowInv = if noEvent(chiller_3.m_flow > 5.74453122e-05) or noEvent(chiller_3.m_flow < -5.74453122e-05) then 1.0 / chiller_3.m_flow else if noEvent(chiller_3.m_flow < 2.87226561e-05) and noEvent(chiller_3.m_flow > -2.87226561e-05) then 303033618.607859 * chiller_3.m_flow else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(chiller_3.m_flow, 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27)
*/
void nb_hydr_static_v6_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = Greater((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),5.74453122e-05);
  tmp1 = Less((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),-5.74453122e-05);
  tmp4 = (modelica_boolean)(tmp0 || tmp1);
  if(tmp4)
  {
    tmp5 = DIVISION_SIM(1.0,(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),"chiller_3.m_flow",equationIndexes);
  }
  else
  {
    tmp2 = Less((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),2.87226561e-05);
    tmp3 = Greater((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),-2.87226561e-05);
    tmp5 = ((tmp2 && tmp3)?(303033618.607859) * ((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)):omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27));
  }
  (data->localData[0]->realVars[283] /* chwp_3.vol.steBal.m_flowInv variable */) = tmp5;
  TRACE_POP
}
/*
equation index: 106
type: SIMPLE_ASSIGN
chiller_3.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(chiller_3.m_flow, chiller_3.k, chiller_3.m_flow_turbulent), 200000.0 * chiller_3.m_flow / chiller_3.m_flow_nominal_pos)
*/
void nb_hydr_static_v6_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->realVars[174] /* chiller_3.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), (data->simulationInfo->realParameter[107] /* chiller_3.k PARAM */), (data->simulationInfo->realParameter[111] /* chiller_3.m_flow_turbulent PARAM */)), DIVISION_SIM((200000.0) * ((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)),(data->simulationInfo->realParameter[109] /* chiller_3.m_flow_nominal_pos PARAM */),"chiller_3.m_flow_nominal_pos",equationIndexes));
  TRACE_POP
}
/*
equation index: 107
type: SIMPLE_ASSIGN
chwp_3.VMachine_flow = 0.001004433569776996 * chiller_3.m_flow
*/
void nb_hydr_static_v6_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */) = (0.001004433569776996) * ((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */));
  TRACE_POP
}
/*
equation index: 108
type: SIMPLE_ASSIGN
chwp_3.dpMachine = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(chwp_3.VMachine_flow, chwp_3.filter.y, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]})), chwp_3.filter.y * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(0.577, 1.0, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]})) + (chwp_3.VMachine_flow - 0.577) * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 + chwp_3.eff.delta) * 0.577, 1.0, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]})) - Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 - chwp_3.eff.delta) * 0.577, 1.0, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]}))) / (1.154 * chwp_3.eff.delta))) - chwp_3.VMachine_flow * chwp_3.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  real_array tmp0;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp1;
  real_array tmp2;
  real_array tmp3;
  real_array tmp4;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp5;
  real_array tmp6;
  real_array tmp7;
  real_array tmp8;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp9;
  real_array tmp10;
  real_array tmp11;
  real_array tmp12;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp13;
  real_array tmp14;
  real_array tmp15;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[1148] /* chwp_3.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp2, 19, (modelica_real)(data->simulationInfo->realParameter[1007] /* chwp_3.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp3, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1027] /* chwp_3.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1028] /* chwp_3.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1029] /* chwp_3.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1030] /* chwp_3.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1031] /* chwp_3.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1032] /* chwp_3.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1033] /* chwp_3.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1034] /* chwp_3.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1035] /* chwp_3.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1036] /* chwp_3.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1037] /* chwp_3.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1038] /* chwp_3.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1039] /* chwp_3.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1040] /* chwp_3.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1041] /* chwp_3.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1042] /* chwp_3.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1043] /* chwp_3.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1044] /* chwp_3.eff.pCur3.dp[19] PARAM */));
  tmp1._n = ((modelica_integer) 19);
  tmp1._V_flow = tmp2;
  tmp1._dp = tmp3;
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[1148] /* chwp_3.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp6, 19, (modelica_real)(data->simulationInfo->realParameter[1007] /* chwp_3.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp7, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1027] /* chwp_3.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1028] /* chwp_3.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1029] /* chwp_3.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1030] /* chwp_3.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1031] /* chwp_3.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1032] /* chwp_3.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1033] /* chwp_3.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1034] /* chwp_3.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1035] /* chwp_3.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1036] /* chwp_3.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1037] /* chwp_3.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1038] /* chwp_3.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1039] /* chwp_3.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1040] /* chwp_3.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1041] /* chwp_3.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1042] /* chwp_3.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1043] /* chwp_3.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1044] /* chwp_3.eff.pCur3.dp[19] PARAM */));
  tmp5._n = ((modelica_integer) 19);
  tmp5._V_flow = tmp6;
  tmp5._dp = tmp7;
  real_array_create(&tmp8, ((modelica_real*)&((&data->simulationInfo->realParameter[1148] /* chwp_3.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp10, 19, (modelica_real)(data->simulationInfo->realParameter[1007] /* chwp_3.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp11, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1027] /* chwp_3.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1028] /* chwp_3.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1029] /* chwp_3.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1030] /* chwp_3.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1031] /* chwp_3.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1032] /* chwp_3.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1033] /* chwp_3.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1034] /* chwp_3.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1035] /* chwp_3.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1036] /* chwp_3.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1037] /* chwp_3.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1038] /* chwp_3.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1039] /* chwp_3.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1040] /* chwp_3.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1041] /* chwp_3.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1042] /* chwp_3.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1043] /* chwp_3.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1044] /* chwp_3.eff.pCur3.dp[19] PARAM */));
  tmp9._n = ((modelica_integer) 19);
  tmp9._V_flow = tmp10;
  tmp9._dp = tmp11;
  real_array_create(&tmp12, ((modelica_real*)&((&data->simulationInfo->realParameter[1148] /* chwp_3.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp14, 19, (modelica_real)(data->simulationInfo->realParameter[1007] /* chwp_3.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp15, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1027] /* chwp_3.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1028] /* chwp_3.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1029] /* chwp_3.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1030] /* chwp_3.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1031] /* chwp_3.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1032] /* chwp_3.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1033] /* chwp_3.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1034] /* chwp_3.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1035] /* chwp_3.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1036] /* chwp_3.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1037] /* chwp_3.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1038] /* chwp_3.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1039] /* chwp_3.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1040] /* chwp_3.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1041] /* chwp_3.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1042] /* chwp_3.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1043] /* chwp_3.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1044] /* chwp_3.eff.pCur3.dp[19] PARAM */));
  tmp13._n = ((modelica_integer) 19);
  tmp13._V_flow = tmp14;
  tmp13._dp = tmp15;
  (data->localData[0]->realVars[257] /* chwp_3.dpMachine variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */), (data->localData[0]->realVars[262] /* chwp_3.filter.y variable */), tmp0, 909154.9295774648, 0.5770020020020019, tmp1), ((data->localData[0]->realVars[262] /* chwp_3.filter.y variable */)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, 0.577, 1.0, tmp4, 909154.9295774648, 0.5770020020020019, tmp5) + DIVISION_SIM(((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */) - 0.577) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 + (data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */)) * (0.577), 1.0, tmp8, 909154.9295774648, 0.5770020020020019, tmp9) - omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 - (data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */)) * (0.577), 1.0, tmp12, 909154.9295774648, 0.5770020020020019, tmp13)),(1.154) * ((data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */)),"1.154 * chwp_3.eff.delta",equationIndexes))) - (((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */)) * ((data->simulationInfo->realParameter[935] /* chwp_3.eff.kRes PARAM */)));
  TRACE_POP
}
/*
equation index: 109
type: SIMPLE_ASSIGN
chwp_3.P = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_3.eff.per.power, chwp_3.VMachine_flow, chwp_3.filter.y, chwp_3.eff.powDer, chwp_3.eff.delta), chwp_3.VMachine_flow / 0.577 * Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_3.eff.per.power, 0.577, 1.0, chwp_3.eff.powDer, chwp_3.eff.delta))
*/
void nb_hydr_static_v6_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  real_array tmp0;
  real_array tmp1;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp2;
  real_array tmp3;
  real_array tmp4;
  real_array tmp5;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp6;
  real_array tmp7;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[1059] /* chwp_3.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[1051] /* chwp_3.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp2, tmp0, tmp1);
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[1105] /* chwp_3.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[1059] /* chwp_3.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp5, ((modelica_real*)&((&data->simulationInfo->realParameter[1051] /* chwp_3.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp6, tmp4, tmp5);
  real_array_create(&tmp7, ((modelica_real*)&((&data->simulationInfo->realParameter[1105] /* chwp_3.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  (data->localData[0]->realVars[253] /* chwp_3.P variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp2, (data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */), (data->localData[0]->realVars[262] /* chwp_3.filter.y variable */), tmp3, (data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */)), (DIVISION_SIM((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */),0.577,"0.577",equationIndexes)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp6, 0.577, 1.0, tmp7, (data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */))));
  TRACE_POP
}
/*
equation index: 110
type: SIMPLE_ASSIGN
chwp_3.heaDis.WHyd = chwp_3.dpMachine * chwp_3.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  (data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */) = ((data->localData[0]->realVars[257] /* chwp_3.dpMachine variable */)) * ((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */));
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
chwp_3.heaDis.QThe_flow = (if chwp_3.per.motorCooledByFluid then chwp_3.P else chwp_3.heaDis.WHyd) - chwp_3.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[263] /* chwp_3.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[164] /* chwp_3.per.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[253] /* chwp_3.P variable */):(data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */)) - (data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 112
type: SIMPLE_ASSIGN
chwp_3.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(chwp_3.VMachine_flow) + -0.001154004004004004 > 0.0005770020020020019) then chwp_3.heaDis.QThe_flow else if noEvent(abs(chwp_3.VMachine_flow) + -0.001154004004004004 < -0.0005770020020020019) then 0.0 else 0.25 * (2.0 - 1733.096239753654 * abs(chwp_3.VMachine_flow)) * ((1733.096239753654 * abs(chwp_3.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * chwp_3.heaDis.QThe_flow + 0.5 * chwp_3.heaDis.QThe_flow), 0.0)
*/
void nb_hydr_static_v6_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater(fabs((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */)) + -0.001154004004004004,0.0005770020020020019);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (data->localData[0]->realVars[263] /* chwp_3.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp1 = Less(fabs((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */)) + -0.001154004004004004,-0.0005770020020020019);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = 0.0;
    }
    else
    {
      tmp2 = (1733.096239753654) * (fabs((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */))) + -2.0;
      tmp4 = (0.25) * (((2.0 - ((1733.096239753654) * (fabs((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */))))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[263] /* chwp_3.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[263] /* chwp_3.heaDis.QThe_flow variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[254] /* chwp_3.PToMed.u1 variable */) = homotopy(tmp6, 0.0);
  TRACE_POP
}
/*
equation index: 113
type: SIMPLE_ASSIGN
chwp_3.prePow.Q_flow = chwp_3.PToMed.u1 + chwp_3.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->realVars[269] /* chwp_3.prePow.Q_flow variable */) = (data->localData[0]->realVars[254] /* chwp_3.PToMed.u1 variable */) + (data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 114
type: SIMPLE_ASSIGN
checkvalve_3.port_a.p = ret_p.k + chwp_3.dpMachine
*/
void nb_hydr_static_v6_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[257] /* chwp_3.dpMachine variable */);
  TRACE_POP
}
/*
equation index: 115
type: SIMPLE_ASSIGN
chwp_4.vol.steBal.m_flowInv = if noEvent(chiller_4.m_flow > 5.74453122e-05) or noEvent(chiller_4.m_flow < -5.74453122e-05) then 1.0 / chiller_4.m_flow else if noEvent(chiller_4.m_flow < 2.87226561e-05) and noEvent(chiller_4.m_flow > -2.87226561e-05) then 303033618.607859 * chiller_4.m_flow else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(chiller_4.m_flow, 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27)
*/
void nb_hydr_static_v6_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = Greater((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),5.74453122e-05);
  tmp1 = Less((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),-5.74453122e-05);
  tmp4 = (modelica_boolean)(tmp0 || tmp1);
  if(tmp4)
  {
    tmp5 = DIVISION_SIM(1.0,(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),"chiller_4.m_flow",equationIndexes);
  }
  else
  {
    tmp2 = Less((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),2.87226561e-05);
    tmp3 = Greater((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),-2.87226561e-05);
    tmp5 = ((tmp2 && tmp3)?(303033618.607859) * ((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)):omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27));
  }
  (data->localData[0]->realVars[314] /* chwp_4.vol.steBal.m_flowInv variable */) = tmp5;
  TRACE_POP
}
/*
equation index: 116
type: SIMPLE_ASSIGN
chiller_4.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(chiller_4.m_flow, chiller_4.k, chiller_4.m_flow_turbulent), 200000.0 * chiller_4.m_flow / chiller_4.m_flow_nominal_pos)
*/
void nb_hydr_static_v6_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->realVars[176] /* chiller_4.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), (data->simulationInfo->realParameter[121] /* chiller_4.k PARAM */), (data->simulationInfo->realParameter[125] /* chiller_4.m_flow_turbulent PARAM */)), DIVISION_SIM((200000.0) * ((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)),(data->simulationInfo->realParameter[123] /* chiller_4.m_flow_nominal_pos PARAM */),"chiller_4.m_flow_nominal_pos",equationIndexes));
  TRACE_POP
}
/*
equation index: 117
type: SIMPLE_ASSIGN
jun_6.port_2.m_flow = (-chiller_4.m_flow) - chiller_3.m_flow
*/
void nb_hydr_static_v6_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */) = (-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)) - (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */);
  TRACE_POP
}
/*
equation index: 118
type: SIMPLE_ASSIGN
jun_2.port_1.m_flow = chiller_2.m_flow - jun_6.port_2.m_flow
*/
void nb_hydr_static_v6_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */) = (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */) - (data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */);
  TRACE_POP
}
/*
equation index: 119
type: SIMPLE_ASSIGN
jun_5.port_2.m_flow = jun_6.port_2.m_flow - chiller_2.m_flow
*/
void nb_hydr_static_v6_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */) = (data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */) - (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */);
  TRACE_POP
}
/*
equation index: 120
type: SIMPLE_ASSIGN
chwp_4.VMachine_flow = 0.001004433569776996 * chiller_4.m_flow
*/
void nb_hydr_static_v6_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  (data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */) = (0.001004433569776996) * ((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */));
  TRACE_POP
}
/*
equation index: 121
type: SIMPLE_ASSIGN
chwp_4.dpMachine = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(chwp_4.VMachine_flow, chwp_4.filter.y, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]})), chwp_4.filter.y * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(0.577, 1.0, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]})) + (chwp_4.VMachine_flow - 0.577) * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 + chwp_4.eff.delta) * 0.577, 1.0, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]})) - Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 - chwp_4.eff.delta) * 0.577, 1.0, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]}))) / (1.154 * chwp_4.eff.delta))) - chwp_4.VMachine_flow * chwp_4.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  real_array tmp0;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp1;
  real_array tmp2;
  real_array tmp3;
  real_array tmp4;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp5;
  real_array tmp6;
  real_array tmp7;
  real_array tmp8;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp9;
  real_array tmp10;
  real_array tmp11;
  real_array tmp12;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp13;
  real_array tmp14;
  real_array tmp15;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[1531] /* chwp_4.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp2, 19, (modelica_real)(data->simulationInfo->realParameter[1390] /* chwp_4.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp3, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1410] /* chwp_4.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1411] /* chwp_4.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1412] /* chwp_4.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1413] /* chwp_4.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1414] /* chwp_4.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1415] /* chwp_4.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1416] /* chwp_4.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1417] /* chwp_4.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1418] /* chwp_4.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1419] /* chwp_4.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1420] /* chwp_4.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1421] /* chwp_4.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1422] /* chwp_4.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1423] /* chwp_4.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1424] /* chwp_4.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1425] /* chwp_4.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1426] /* chwp_4.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1427] /* chwp_4.eff.pCur3.dp[19] PARAM */));
  tmp1._n = ((modelica_integer) 19);
  tmp1._V_flow = tmp2;
  tmp1._dp = tmp3;
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[1531] /* chwp_4.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp6, 19, (modelica_real)(data->simulationInfo->realParameter[1390] /* chwp_4.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp7, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1410] /* chwp_4.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1411] /* chwp_4.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1412] /* chwp_4.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1413] /* chwp_4.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1414] /* chwp_4.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1415] /* chwp_4.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1416] /* chwp_4.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1417] /* chwp_4.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1418] /* chwp_4.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1419] /* chwp_4.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1420] /* chwp_4.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1421] /* chwp_4.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1422] /* chwp_4.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1423] /* chwp_4.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1424] /* chwp_4.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1425] /* chwp_4.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1426] /* chwp_4.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1427] /* chwp_4.eff.pCur3.dp[19] PARAM */));
  tmp5._n = ((modelica_integer) 19);
  tmp5._V_flow = tmp6;
  tmp5._dp = tmp7;
  real_array_create(&tmp8, ((modelica_real*)&((&data->simulationInfo->realParameter[1531] /* chwp_4.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp10, 19, (modelica_real)(data->simulationInfo->realParameter[1390] /* chwp_4.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp11, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1410] /* chwp_4.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1411] /* chwp_4.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1412] /* chwp_4.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1413] /* chwp_4.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1414] /* chwp_4.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1415] /* chwp_4.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1416] /* chwp_4.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1417] /* chwp_4.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1418] /* chwp_4.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1419] /* chwp_4.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1420] /* chwp_4.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1421] /* chwp_4.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1422] /* chwp_4.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1423] /* chwp_4.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1424] /* chwp_4.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1425] /* chwp_4.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1426] /* chwp_4.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1427] /* chwp_4.eff.pCur3.dp[19] PARAM */));
  tmp9._n = ((modelica_integer) 19);
  tmp9._V_flow = tmp10;
  tmp9._dp = tmp11;
  real_array_create(&tmp12, ((modelica_real*)&((&data->simulationInfo->realParameter[1531] /* chwp_4.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp14, 19, (modelica_real)(data->simulationInfo->realParameter[1390] /* chwp_4.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp15, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1410] /* chwp_4.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1411] /* chwp_4.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1412] /* chwp_4.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1413] /* chwp_4.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1414] /* chwp_4.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1415] /* chwp_4.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1416] /* chwp_4.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1417] /* chwp_4.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1418] /* chwp_4.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1419] /* chwp_4.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1420] /* chwp_4.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1421] /* chwp_4.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1422] /* chwp_4.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1423] /* chwp_4.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1424] /* chwp_4.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1425] /* chwp_4.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1426] /* chwp_4.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1427] /* chwp_4.eff.pCur3.dp[19] PARAM */));
  tmp13._n = ((modelica_integer) 19);
  tmp13._V_flow = tmp14;
  tmp13._dp = tmp15;
  (data->localData[0]->realVars[288] /* chwp_4.dpMachine variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */), (data->localData[0]->realVars[293] /* chwp_4.filter.y variable */), tmp0, 909154.9295774648, 0.5770020020020019, tmp1), ((data->localData[0]->realVars[293] /* chwp_4.filter.y variable */)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, 0.577, 1.0, tmp4, 909154.9295774648, 0.5770020020020019, tmp5) + DIVISION_SIM(((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */) - 0.577) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 + (data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */)) * (0.577), 1.0, tmp8, 909154.9295774648, 0.5770020020020019, tmp9) - omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 - (data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */)) * (0.577), 1.0, tmp12, 909154.9295774648, 0.5770020020020019, tmp13)),(1.154) * ((data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */)),"1.154 * chwp_4.eff.delta",equationIndexes))) - (((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */)) * ((data->simulationInfo->realParameter[1318] /* chwp_4.eff.kRes PARAM */)));
  TRACE_POP
}
/*
equation index: 122
type: SIMPLE_ASSIGN
chwp_4.P = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_4.eff.per.power, chwp_4.VMachine_flow, chwp_4.filter.y, chwp_4.eff.powDer, chwp_4.eff.delta), chwp_4.VMachine_flow / 0.577 * Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_4.eff.per.power, 0.577, 1.0, chwp_4.eff.powDer, chwp_4.eff.delta))
*/
void nb_hydr_static_v6_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  real_array tmp0;
  real_array tmp1;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp2;
  real_array tmp3;
  real_array tmp4;
  real_array tmp5;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp6;
  real_array tmp7;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[1442] /* chwp_4.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[1434] /* chwp_4.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp2, tmp0, tmp1);
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[1488] /* chwp_4.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[1442] /* chwp_4.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp5, ((modelica_real*)&((&data->simulationInfo->realParameter[1434] /* chwp_4.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp6, tmp4, tmp5);
  real_array_create(&tmp7, ((modelica_real*)&((&data->simulationInfo->realParameter[1488] /* chwp_4.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  (data->localData[0]->realVars[284] /* chwp_4.P variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp2, (data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */), (data->localData[0]->realVars[293] /* chwp_4.filter.y variable */), tmp3, (data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */)), (DIVISION_SIM((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */),0.577,"0.577",equationIndexes)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp6, 0.577, 1.0, tmp7, (data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */))));
  TRACE_POP
}
/*
equation index: 123
type: SIMPLE_ASSIGN
chwp_4.heaDis.WHyd = chwp_4.dpMachine * chwp_4.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  (data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */) = ((data->localData[0]->realVars[288] /* chwp_4.dpMachine variable */)) * ((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */));
  TRACE_POP
}
/*
equation index: 124
type: SIMPLE_ASSIGN
chwp_4.heaDis.QThe_flow = (if chwp_4.per.motorCooledByFluid then chwp_4.P else chwp_4.heaDis.WHyd) - chwp_4.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->realVars[294] /* chwp_4.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[201] /* chwp_4.per.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[284] /* chwp_4.P variable */):(data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */)) - (data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 125
type: SIMPLE_ASSIGN
chwp_4.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(chwp_4.VMachine_flow) + -0.001154004004004004 > 0.0005770020020020019) then chwp_4.heaDis.QThe_flow else if noEvent(abs(chwp_4.VMachine_flow) + -0.001154004004004004 < -0.0005770020020020019) then 0.0 else 0.25 * (2.0 - 1733.096239753654 * abs(chwp_4.VMachine_flow)) * ((1733.096239753654 * abs(chwp_4.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * chwp_4.heaDis.QThe_flow + 0.5 * chwp_4.heaDis.QThe_flow), 0.0)
*/
void nb_hydr_static_v6_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater(fabs((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */)) + -0.001154004004004004,0.0005770020020020019);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (data->localData[0]->realVars[294] /* chwp_4.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp1 = Less(fabs((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */)) + -0.001154004004004004,-0.0005770020020020019);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = 0.0;
    }
    else
    {
      tmp2 = (1733.096239753654) * (fabs((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */))) + -2.0;
      tmp4 = (0.25) * (((2.0 - ((1733.096239753654) * (fabs((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */))))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[294] /* chwp_4.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[294] /* chwp_4.heaDis.QThe_flow variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[285] /* chwp_4.PToMed.u1 variable */) = homotopy(tmp6, 0.0);
  TRACE_POP
}
/*
equation index: 126
type: SIMPLE_ASSIGN
chwp_4.prePow.Q_flow = chwp_4.PToMed.u1 + chwp_4.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  (data->localData[0]->realVars[300] /* chwp_4.prePow.Q_flow variable */) = (data->localData[0]->realVars[285] /* chwp_4.PToMed.u1 variable */) + (data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 127
type: SIMPLE_ASSIGN
checkvalve_4.port_a.p = ret_p.k + chwp_4.dpMachine
*/
void nb_hydr_static_v6_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[288] /* chwp_4.dpMachine variable */);
  TRACE_POP
}
/*
equation index: 128
type: SIMPLE_ASSIGN
chwp_1.vol.steBal.m_flowInv = if noEvent(chiller_1.m_flow > 5.74453122e-05) or noEvent(chiller_1.m_flow < -5.74453122e-05) then 1.0 / chiller_1.m_flow else if noEvent(chiller_1.m_flow < 2.87226561e-05) and noEvent(chiller_1.m_flow > -2.87226561e-05) then 303033618.607859 * chiller_1.m_flow else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(chiller_1.m_flow, 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27)
*/
void nb_hydr_static_v6_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = Greater((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),5.74453122e-05);
  tmp1 = Less((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),-5.74453122e-05);
  tmp4 = (modelica_boolean)(tmp0 || tmp1);
  if(tmp4)
  {
    tmp5 = DIVISION_SIM(1.0,(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),"chiller_1.m_flow",equationIndexes);
  }
  else
  {
    tmp2 = Less((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),2.87226561e-05);
    tmp3 = Greater((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),-2.87226561e-05);
    tmp5 = ((tmp2 && tmp3)?(303033618.607859) * ((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)):omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27));
  }
  (data->localData[0]->realVars[221] /* chwp_1.vol.steBal.m_flowInv variable */) = tmp5;
  TRACE_POP
}
/*
equation index: 129
type: SIMPLE_ASSIGN
chiller_1.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(chiller_1.m_flow, chiller_1.k, chiller_1.m_flow_turbulent), 200000.0 * chiller_1.m_flow / chiller_1.m_flow_nominal_pos)
*/
void nb_hydr_static_v6_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  (data->localData[0]->realVars[170] /* chiller_1.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), (data->simulationInfo->realParameter[79] /* chiller_1.k PARAM */), (data->simulationInfo->realParameter[83] /* chiller_1.m_flow_turbulent PARAM */)), DIVISION_SIM((200000.0) * ((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)),(data->simulationInfo->realParameter[81] /* chiller_1.m_flow_nominal_pos PARAM */),"chiller_1.m_flow_nominal_pos",equationIndexes));
  TRACE_POP
}
/*
equation index: 130
type: SIMPLE_ASSIGN
terminal_resist.m_flow = chiller_1.m_flow - jun_5.port_2.m_flow
*/
void nb_hydr_static_v6_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  (data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */) = (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */) - (data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */);
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
terminal_resist.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(terminal_resist.m_flow, terminal_resist.k, terminal_resist.m_flow_turbulent), terminal_resist.dp_nominal_pos * terminal_resist.m_flow / terminal_resist.m_flow_nominal_pos)
*/
void nb_hydr_static_v6_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  (data->localData[0]->realVars[344] /* terminal_resist.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */), (data->localData[0]->realVars[347] /* terminal_resist.k variable */), (data->simulationInfo->realParameter[1782] /* terminal_resist.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[1763] /* terminal_resist.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */)),(data->simulationInfo->realParameter[1780] /* terminal_resist.m_flow_nominal_pos PARAM */),"terminal_resist.m_flow_nominal_pos",equationIndexes));
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
chwp_1.VMachine_flow = 0.001004433569776996 * chiller_1.m_flow
*/
void nb_hydr_static_v6_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  (data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */) = (0.001004433569776996) * ((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */));
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
chwp_1.dpMachine = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(chwp_1.VMachine_flow, chwp_1.filter.y, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]})), chwp_1.filter.y * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(0.577, 1.0, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]})) + (chwp_1.VMachine_flow - 0.577) * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 + chwp_1.eff.delta) * 0.577, 1.0, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]})) - Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 - chwp_1.eff.delta) * 0.577, 1.0, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]}))) / (1.154 * chwp_1.eff.delta))) - chwp_1.VMachine_flow * chwp_1.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  real_array tmp0;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp1;
  real_array tmp2;
  real_array tmp3;
  real_array tmp4;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp5;
  real_array tmp6;
  real_array tmp7;
  real_array tmp8;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp9;
  real_array tmp10;
  real_array tmp11;
  real_array tmp12;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp13;
  real_array tmp14;
  real_array tmp15;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[384] /* chwp_1.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp2, 19, (modelica_real)(data->simulationInfo->realParameter[243] /* chwp_1.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp3, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[263] /* chwp_1.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[264] /* chwp_1.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[265] /* chwp_1.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[266] /* chwp_1.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[267] /* chwp_1.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[268] /* chwp_1.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[269] /* chwp_1.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[270] /* chwp_1.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[271] /* chwp_1.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[272] /* chwp_1.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[273] /* chwp_1.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[274] /* chwp_1.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[275] /* chwp_1.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[276] /* chwp_1.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[277] /* chwp_1.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[278] /* chwp_1.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[279] /* chwp_1.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[280] /* chwp_1.eff.pCur3.dp[19] PARAM */));
  tmp1._n = ((modelica_integer) 19);
  tmp1._V_flow = tmp2;
  tmp1._dp = tmp3;
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[384] /* chwp_1.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp6, 19, (modelica_real)(data->simulationInfo->realParameter[243] /* chwp_1.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp7, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[263] /* chwp_1.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[264] /* chwp_1.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[265] /* chwp_1.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[266] /* chwp_1.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[267] /* chwp_1.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[268] /* chwp_1.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[269] /* chwp_1.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[270] /* chwp_1.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[271] /* chwp_1.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[272] /* chwp_1.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[273] /* chwp_1.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[274] /* chwp_1.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[275] /* chwp_1.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[276] /* chwp_1.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[277] /* chwp_1.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[278] /* chwp_1.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[279] /* chwp_1.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[280] /* chwp_1.eff.pCur3.dp[19] PARAM */));
  tmp5._n = ((modelica_integer) 19);
  tmp5._V_flow = tmp6;
  tmp5._dp = tmp7;
  real_array_create(&tmp8, ((modelica_real*)&((&data->simulationInfo->realParameter[384] /* chwp_1.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp10, 19, (modelica_real)(data->simulationInfo->realParameter[243] /* chwp_1.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp11, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[263] /* chwp_1.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[264] /* chwp_1.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[265] /* chwp_1.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[266] /* chwp_1.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[267] /* chwp_1.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[268] /* chwp_1.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[269] /* chwp_1.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[270] /* chwp_1.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[271] /* chwp_1.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[272] /* chwp_1.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[273] /* chwp_1.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[274] /* chwp_1.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[275] /* chwp_1.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[276] /* chwp_1.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[277] /* chwp_1.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[278] /* chwp_1.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[279] /* chwp_1.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[280] /* chwp_1.eff.pCur3.dp[19] PARAM */));
  tmp9._n = ((modelica_integer) 19);
  tmp9._V_flow = tmp10;
  tmp9._dp = tmp11;
  real_array_create(&tmp12, ((modelica_real*)&((&data->simulationInfo->realParameter[384] /* chwp_1.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp14, 19, (modelica_real)(data->simulationInfo->realParameter[243] /* chwp_1.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp15, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[263] /* chwp_1.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[264] /* chwp_1.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[265] /* chwp_1.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[266] /* chwp_1.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[267] /* chwp_1.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[268] /* chwp_1.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[269] /* chwp_1.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[270] /* chwp_1.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[271] /* chwp_1.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[272] /* chwp_1.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[273] /* chwp_1.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[274] /* chwp_1.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[275] /* chwp_1.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[276] /* chwp_1.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[277] /* chwp_1.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[278] /* chwp_1.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[279] /* chwp_1.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[280] /* chwp_1.eff.pCur3.dp[19] PARAM */));
  tmp13._n = ((modelica_integer) 19);
  tmp13._V_flow = tmp14;
  tmp13._dp = tmp15;
  (data->localData[0]->realVars[195] /* chwp_1.dpMachine variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */), (data->localData[0]->realVars[200] /* chwp_1.filter.y variable */), tmp0, 909154.9295774648, 0.5770020020020019, tmp1), ((data->localData[0]->realVars[200] /* chwp_1.filter.y variable */)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, 0.577, 1.0, tmp4, 909154.9295774648, 0.5770020020020019, tmp5) + DIVISION_SIM(((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */) - 0.577) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 + (data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */)) * (0.577), 1.0, tmp8, 909154.9295774648, 0.5770020020020019, tmp9) - omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 - (data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */)) * (0.577), 1.0, tmp12, 909154.9295774648, 0.5770020020020019, tmp13)),(1.154) * ((data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */)),"1.154 * chwp_1.eff.delta",equationIndexes))) - (((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */)) * ((data->simulationInfo->realParameter[171] /* chwp_1.eff.kRes PARAM */)));
  TRACE_POP
}
/*
equation index: 134
type: SIMPLE_ASSIGN
chwp_1.P = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_1.eff.per.power, chwp_1.VMachine_flow, chwp_1.filter.y, chwp_1.eff.powDer, chwp_1.eff.delta), chwp_1.VMachine_flow / 0.577 * Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_1.eff.per.power, 0.577, 1.0, chwp_1.eff.powDer, chwp_1.eff.delta))
*/
void nb_hydr_static_v6_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  real_array tmp0;
  real_array tmp1;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp2;
  real_array tmp3;
  real_array tmp4;
  real_array tmp5;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp6;
  real_array tmp7;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[295] /* chwp_1.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[287] /* chwp_1.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp2, tmp0, tmp1);
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[341] /* chwp_1.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[295] /* chwp_1.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp5, ((modelica_real*)&((&data->simulationInfo->realParameter[287] /* chwp_1.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp6, tmp4, tmp5);
  real_array_create(&tmp7, ((modelica_real*)&((&data->simulationInfo->realParameter[341] /* chwp_1.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  (data->localData[0]->realVars[191] /* chwp_1.P variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp2, (data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */), (data->localData[0]->realVars[200] /* chwp_1.filter.y variable */), tmp3, (data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */)), (DIVISION_SIM((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */),0.577,"0.577",equationIndexes)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp6, 0.577, 1.0, tmp7, (data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */))));
  TRACE_POP
}
/*
equation index: 135
type: SIMPLE_ASSIGN
chwp_1.heaDis.WHyd = chwp_1.dpMachine * chwp_1.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  (data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */) = ((data->localData[0]->realVars[195] /* chwp_1.dpMachine variable */)) * ((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */));
  TRACE_POP
}
/*
equation index: 136
type: SIMPLE_ASSIGN
chwp_1.heaDis.QThe_flow = (if chwp_1.per.motorCooledByFluid then chwp_1.P else chwp_1.heaDis.WHyd) - chwp_1.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  (data->localData[0]->realVars[201] /* chwp_1.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[90] /* chwp_1.per.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[191] /* chwp_1.P variable */):(data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */)) - (data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 137
type: SIMPLE_ASSIGN
chwp_1.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(chwp_1.VMachine_flow) + -0.001154004004004004 > 0.0005770020020020019) then chwp_1.heaDis.QThe_flow else if noEvent(abs(chwp_1.VMachine_flow) + -0.001154004004004004 < -0.0005770020020020019) then 0.0 else 0.25 * (2.0 - 1733.096239753654 * abs(chwp_1.VMachine_flow)) * ((1733.096239753654 * abs(chwp_1.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * chwp_1.heaDis.QThe_flow + 0.5 * chwp_1.heaDis.QThe_flow), 0.0)
*/
void nb_hydr_static_v6_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater(fabs((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */)) + -0.001154004004004004,0.0005770020020020019);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (data->localData[0]->realVars[201] /* chwp_1.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp1 = Less(fabs((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */)) + -0.001154004004004004,-0.0005770020020020019);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = 0.0;
    }
    else
    {
      tmp2 = (1733.096239753654) * (fabs((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */))) + -2.0;
      tmp4 = (0.25) * (((2.0 - ((1733.096239753654) * (fabs((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */))))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[201] /* chwp_1.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[201] /* chwp_1.heaDis.QThe_flow variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[192] /* chwp_1.PToMed.u1 variable */) = homotopy(tmp6, 0.0);
  TRACE_POP
}
/*
equation index: 138
type: SIMPLE_ASSIGN
chwp_1.prePow.Q_flow = chwp_1.PToMed.u1 + chwp_1.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  (data->localData[0]->realVars[207] /* chwp_1.prePow.Q_flow variable */) = (data->localData[0]->realVars[192] /* chwp_1.PToMed.u1 variable */) + (data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 139
type: SIMPLE_ASSIGN
checkvalve_1.port_a.p = ret_p.k + chwp_1.dpMachine
*/
void nb_hydr_static_v6_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[195] /* chwp_1.dpMachine variable */);
  TRACE_POP
}
/*
equation index: 140
type: SIMPLE_ASSIGN
chw_sup_P.p = ret_p.k + terminal_resist.dp
*/
void nb_hydr_static_v6_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[344] /* terminal_resist.dp variable */);
  TRACE_POP
}
/*
equation index: 141
type: SIMPLE_ASSIGN
checkvalve_2.port_b.p = chw_sup_P.p + chiller_2.dp
*/
void nb_hydr_static_v6_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  (data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */) = (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) + (data->localData[0]->realVars[172] /* chiller_2.dp variable */);
  TRACE_POP
}
/*
equation index: 142
type: SIMPLE_ASSIGN
checkvalve_2.dp = checkvalve_2.port_a.p - checkvalve_2.port_b.p
*/
void nb_hydr_static_v6_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  (data->localData[0]->realVars[135] /* checkvalve_2.dp variable */) = (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */) - (data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */);
  TRACE_POP
}
/*
equation index: 143
type: SIMPLE_ASSIGN
checkvalve_1.port_b.p = chw_sup_P.p + chiller_1.dp
*/
void nb_hydr_static_v6_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  (data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */) = (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) + (data->localData[0]->realVars[170] /* chiller_1.dp variable */);
  TRACE_POP
}
/*
equation index: 144
type: SIMPLE_ASSIGN
checkvalve_1.dp = checkvalve_1.port_a.p - checkvalve_1.port_b.p
*/
void nb_hydr_static_v6_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[123] /* checkvalve_1.dp variable */) = (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */) - (data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */);
  TRACE_POP
}
/*
equation index: 145
type: SIMPLE_ASSIGN
checkvalve_3.port_b.p = chw_sup_P.p + chiller_3.dp
*/
void nb_hydr_static_v6_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */) = (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) + (data->localData[0]->realVars[174] /* chiller_3.dp variable */);
  TRACE_POP
}
/*
equation index: 146
type: SIMPLE_ASSIGN
checkvalve_3.dp = checkvalve_3.port_a.p - checkvalve_3.port_b.p
*/
void nb_hydr_static_v6_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  (data->localData[0]->realVars[147] /* checkvalve_3.dp variable */) = (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */) - (data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */);
  TRACE_POP
}
/*
equation index: 147
type: SIMPLE_ASSIGN
checkvalve_4.port_b.p = chw_sup_P.p + chiller_4.dp
*/
void nb_hydr_static_v6_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  (data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */) = (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) + (data->localData[0]->realVars[176] /* chiller_4.dp variable */);
  TRACE_POP
}
/*
equation index: 148
type: SIMPLE_ASSIGN
checkvalve_4.dp = checkvalve_4.port_a.p - checkvalve_4.port_b.p
*/
void nb_hydr_static_v6_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  (data->localData[0]->realVars[159] /* checkvalve_4.dp variable */) = (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */) - (data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */);
  TRACE_POP
}
/*
equation index: 149
type: SIMPLE_ASSIGN
jun_3.port_2.h_outflow = checkvalve_4.port_b.h_outflow - chwp_4.prePow.Q_flow * chwp_4.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  (data->localData[0]->realVars[335] /* jun_3.port_2.h_outflow variable */) = (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */) - (((data->localData[0]->realVars[300] /* chwp_4.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[314] /* chwp_4.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 150
type: SIMPLE_ASSIGN
checkvalve_4.state_a.T = 273.15 + 0.0002390057361376673 * checkvalve_4.port_b.h_outflow
*/
void nb_hydr_static_v6_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  (data->localData[0]->realVars[168] /* checkvalve_4.state_a.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */));
  TRACE_POP
}
/*
equation index: 151
type: SIMPLE_ASSIGN
jun_6.port_2.h_outflow = (max(chiller_3.m_flow, 1e-07) * checkvalve_3.port_b.h_outflow + max(chiller_4.m_flow, 1e-07) * checkvalve_4.port_b.h_outflow) / (max(chiller_3.m_flow, 1e-07) + max(chiller_4.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  (data->localData[0]->realVars[341] /* jun_6.port_2.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */)) + (fmax((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */)),fmax((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),1e-07) + fmax((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),1e-07),"max(chiller_3.m_flow, 1e-07) + max(chiller_4.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 152
type: SIMPLE_ASSIGN
jun_3.port_3.h_outflow = checkvalve_3.port_b.h_outflow - chwp_3.prePow.Q_flow * chwp_3.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  (data->localData[0]->realVars[336] /* jun_3.port_3.h_outflow variable */) = (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */) - (((data->localData[0]->realVars[269] /* chwp_3.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[283] /* chwp_3.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 153
type: SIMPLE_ASSIGN
checkvalve_3.state_a.T = 273.15 + 0.0002390057361376673 * checkvalve_3.port_b.h_outflow
*/
void nb_hydr_static_v6_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  (data->localData[0]->realVars[156] /* checkvalve_3.state_a.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */));
  TRACE_POP
}
/*
equation index: 154
type: SIMPLE_ASSIGN
jun_5.port_2.h_outflow = (max(chiller_2.m_flow, 1e-07) * checkvalve_2.port_b.h_outflow + max(-jun_6.port_2.m_flow, 1e-07) * jun_6.port_2.h_outflow) / (max(chiller_2.m_flow, 1e-07) + max(-jun_6.port_2.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  (data->localData[0]->realVars[339] /* jun_5.port_2.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[341] /* jun_6.port_2.h_outflow variable */)),fmax((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),1e-07) + fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07),"max(chiller_2.m_flow, 1e-07) + max(-jun_6.port_2.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 155
type: SIMPLE_ASSIGN
checkvalve_1.port_a.h_outflow = (max(-terminal_resist.m_flow, 1e-07) * chw_sup.ports[2].h_outflow + max(-jun_5.port_2.m_flow, 1e-07) * jun_5.port_2.h_outflow) / (max(-terminal_resist.m_flow, 1e-07) + max(-jun_5.port_2.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  (data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[184] /* chw_sup.ports[2].h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[339] /* jun_5.port_2.h_outflow variable */)),fmax((-(data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */)),1e-07) + fmax((-(data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */)),1e-07),"max(-terminal_resist.m_flow, 1e-07) + max(-jun_5.port_2.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 156
type: SIMPLE_ASSIGN
chwp_1.port_a.h_outflow = checkvalve_1.port_a.h_outflow - chwp_1.prePow.Q_flow * chwp_1.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  (data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */) = (data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */) - (((data->localData[0]->realVars[207] /* chwp_1.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[221] /* chwp_1.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 157
type: SIMPLE_ASSIGN
jun_1.port_2.h_outflow = (max(-chiller_1.m_flow, 1e-07) * chwp_1.port_a.h_outflow + max(terminal_resist.m_flow, 1e-07) * chw_ret.ports[1].h_outflow) / (max(-chiller_1.m_flow, 1e-07) + max(terminal_resist.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  (data->localData[0]->realVars[328] /* jun_1.port_2.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[179] /* chw_ret.ports[1].h_outflow variable */)),fmax((-(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)),1e-07) + fmax((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */),1e-07),"max(-chiller_1.m_flow, 1e-07) + max(terminal_resist.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 158
type: SIMPLE_ASSIGN
jun_2.port_3.h_outflow = checkvalve_2.port_b.h_outflow - chwp_2.prePow.Q_flow * chwp_2.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  (data->localData[0]->realVars[333] /* jun_2.port_3.h_outflow variable */) = (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */) - (((data->localData[0]->realVars[238] /* chwp_2.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[252] /* chwp_2.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 159
type: SIMPLE_ASSIGN
checkvalve_2.state_a.T = 273.15 + 0.0002390057361376673 * checkvalve_2.port_b.h_outflow
*/
void nb_hydr_static_v6_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  (data->localData[0]->realVars[144] /* checkvalve_2.state_a.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */));
  TRACE_POP
}
/*
equation index: 160
type: SIMPLE_ASSIGN
jun_4.port_1.h_outflow = (max(-terminal_resist.m_flow, 1e-07) * chw_sup.ports[2].h_outflow + max(chiller_1.m_flow, 1e-07) * checkvalve_1.port_b.h_outflow) / (max(-terminal_resist.m_flow, 1e-07) + max(chiller_1.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  (data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[184] /* chw_sup.ports[2].h_outflow variable */)) + (fmax((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */)),fmax((-(data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */)),1e-07) + fmax((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),1e-07),"max(-terminal_resist.m_flow, 1e-07) + max(chiller_1.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 161
type: SIMPLE_ASSIGN
checkvalve_2.port_a.h_outflow = (max(jun_5.port_2.m_flow, 1e-07) * jun_4.port_1.h_outflow + max(-jun_6.port_2.m_flow, 1e-07) * jun_6.port_2.h_outflow) / (max(jun_5.port_2.m_flow, 1e-07) + max(-jun_6.port_2.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[341] /* jun_6.port_2.h_outflow variable */)),fmax((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */),1e-07) + fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07),"max(jun_5.port_2.m_flow, 1e-07) + max(-jun_6.port_2.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 162
type: SIMPLE_ASSIGN
jun_5.port_1.h_outflow = (max(jun_5.port_2.m_flow, 1e-07) * jun_4.port_1.h_outflow + max(chiller_2.m_flow, 1e-07) * checkvalve_2.port_b.h_outflow) / (max(jun_5.port_2.m_flow, 1e-07) + max(chiller_2.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  (data->localData[0]->realVars[338] /* jun_5.port_1.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */)) + (fmax((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */)),fmax((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */),1e-07) + fmax((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),1e-07),"max(jun_5.port_2.m_flow, 1e-07) + max(chiller_2.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 163
type: SIMPLE_ASSIGN
checkvalve_3.port_a.h_outflow = (max(jun_6.port_2.m_flow, 1e-07) * jun_5.port_1.h_outflow + max(chiller_4.m_flow, 1e-07) * checkvalve_4.port_b.h_outflow) / (max(jun_6.port_2.m_flow, 1e-07) + max(chiller_4.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  (data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[338] /* jun_5.port_1.h_outflow variable */)) + (fmax((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */)),fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07) + fmax((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),1e-07),"max(jun_6.port_2.m_flow, 1e-07) + max(chiller_4.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 164
type: SIMPLE_ASSIGN
checkvalve_4.port_a.h_outflow = (max(jun_6.port_2.m_flow, 1e-07) * jun_5.port_1.h_outflow + max(chiller_3.m_flow, 1e-07) * checkvalve_3.port_b.h_outflow) / (max(jun_6.port_2.m_flow, 1e-07) + max(chiller_3.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  (data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[338] /* jun_5.port_1.h_outflow variable */)) + (fmax((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */)),fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07) + fmax((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),1e-07),"max(jun_6.port_2.m_flow, 1e-07) + max(chiller_3.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 165
type: SIMPLE_ASSIGN
chwp_2.port_a.h_outflow = checkvalve_2.port_a.h_outflow - chwp_2.prePow.Q_flow * chwp_2.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  (data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */) = (data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */) - (((data->localData[0]->realVars[238] /* chwp_2.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[252] /* chwp_2.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
jun_2.port_2.h_outflow = (max(-chiller_2.m_flow, 1e-07) * chwp_2.port_a.h_outflow + max(jun_2.port_1.m_flow, 1e-07) * jun_1.port_2.h_outflow) / (max(-chiller_2.m_flow, 1e-07) + max(jun_2.port_1.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  (data->localData[0]->realVars[332] /* jun_2.port_2.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[328] /* jun_1.port_2.h_outflow variable */)),fmax((-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)),1e-07) + fmax((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */),1e-07),"max(-chiller_2.m_flow, 1e-07) + max(jun_2.port_1.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
jun_1.port_3.h_outflow = checkvalve_1.port_b.h_outflow - chwp_1.prePow.Q_flow * chwp_1.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  (data->localData[0]->realVars[329] /* jun_1.port_3.h_outflow variable */) = (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */) - (((data->localData[0]->realVars[207] /* chwp_1.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[221] /* chwp_1.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
chwp_4.port_a.h_outflow = checkvalve_4.port_a.h_outflow - chwp_4.prePow.Q_flow * chwp_4.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  (data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */) = (data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */) - (((data->localData[0]->realVars[300] /* chwp_4.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[314] /* chwp_4.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
chwp_3.port_a.h_outflow = checkvalve_3.port_a.h_outflow - chwp_3.prePow.Q_flow * chwp_3.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  (data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */) = (data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */) - (((data->localData[0]->realVars[269] /* chwp_3.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[283] /* chwp_3.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
jun_3.port_1.h_outflow = (max(-chiller_4.m_flow, 1e-07) * chwp_4.port_a.h_outflow + max(-chiller_3.m_flow, 1e-07) * chwp_3.port_a.h_outflow) / (max(-chiller_4.m_flow, 1e-07) + max(-chiller_3.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  (data->localData[0]->realVars[334] /* jun_3.port_1.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)),1e-07) + fmax((-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)),1e-07),"max(-chiller_4.m_flow, 1e-07) + max(-chiller_3.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
jun_2.port_1.h_outflow = (max(jun_6.port_2.m_flow, 1e-07) * jun_3.port_1.h_outflow + max(-chiller_2.m_flow, 1e-07) * chwp_2.port_a.h_outflow) / (max(jun_6.port_2.m_flow, 1e-07) + max(-chiller_2.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  (data->localData[0]->realVars[330] /* jun_2.port_1.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[334] /* jun_3.port_1.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */)),fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07) + fmax((-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)),1e-07),"max(jun_6.port_2.m_flow, 1e-07) + max(-chiller_2.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
checkvalve_1.state_a.T = 273.15 + 0.0002390057361376673 * checkvalve_1.port_b.h_outflow
*/
void nb_hydr_static_v6_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  (data->localData[0]->realVars[132] /* checkvalve_1.state_a.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */));
  TRACE_POP
}

void residualFunc181(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,181};
  int i,j;
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp0;
  modelica_real tmp1;
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp4;
  modelica_real tmp5;
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp6;
  modelica_real tmp7;
  /* iteration variables */
  for (i=0; i<8; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc181: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<8; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc181 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */) = xloc[0];
  (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */) = xloc[1];
  (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */) = xloc[2];
  (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */) = xloc[3];
  (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */) = xloc[4];
  (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */) = xloc[5];
  (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */) = xloc[6];
  (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */) = xloc[7];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  nb_hydr_static_v6_eqFunction_95(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_96(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_97(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_98(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_99(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_100(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_101(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_102(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_103(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_104(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_105(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_106(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_107(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_108(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_109(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_110(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_111(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_112(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_113(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_114(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_115(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_116(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_117(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_118(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_119(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_120(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_121(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_122(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_123(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_124(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_125(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_126(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_127(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_128(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_129(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_130(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_131(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_132(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_133(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_134(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_135(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_136(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_137(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_138(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_139(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_140(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_141(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_142(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_143(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_144(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_145(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_146(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_147(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_148(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_149(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_150(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_151(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_152(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_153(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_154(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_155(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_156(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_157(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_158(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_159(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_160(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_161(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_162(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_163(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_164(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_165(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_166(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_167(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_168(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_169(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_170(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_171(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_172(data, threadData);
  /* body */
  tmp0._p = (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */);
  tmp0._T = (data->localData[0]->realVars[168] /* checkvalve_4.state_a.T variable */);
  tmp1 = omc_nb__hydr__static__v6_checkvalve__4_Medium_density(threadData, tmp0);
  if(!(tmp1 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(nb_hydr_static_v6.checkvalve_4.Medium.density(nb_hydr_static_v6.checkvalve_4.Medium.ThermodynamicState(checkvalve_4.port_a.p, checkvalve_4.state_a.T))) was %g should be >= 0", tmp1);
    }
  }res[0] = homotopy(((((data->localData[0]->realVars[167] /* checkvalve_4.relativeFlowCoefficient variable */)) * ((data->simulationInfo->realParameter[54] /* checkvalve_4.Av PARAM */))) * (sqrt(tmp1))) * (omc_Modelica_Fluid_Utilities_regRoot2(threadData, (data->localData[0]->realVars[159] /* checkvalve_4.dp variable */), (data->simulationInfo->realParameter[58] /* checkvalve_4.dp_small PARAM */), 1.0, 0.0, 1 /* true */, 0.0)), DIVISION_SIM((((data->localData[0]->realVars[167] /* checkvalve_4.relativeFlowCoefficient variable */)) * ((data->simulationInfo->realParameter[62] /* checkvalve_4.m_flow_nominal PARAM */))) * ((data->localData[0]->realVars[159] /* checkvalve_4.dp variable */)),(data->simulationInfo->realParameter[57] /* checkvalve_4.dp_nominal PARAM */),"checkvalve_4.dp_nominal",equationIndexes)) - (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */);

  res[1] = (fmax((-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[332] /* jun_2.port_2.h_outflow variable */)) - (((data->localData[0]->realVars[335] /* jun_3.port_2.h_outflow variable */)) * (fmax((-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)),1e-07) + fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07)));

  res[2] = (fmax((-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[332] /* jun_2.port_2.h_outflow variable */)) - (((data->localData[0]->realVars[336] /* jun_3.port_3.h_outflow variable */)) * (fmax((-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)),1e-07) + fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07)));

  tmp2._p = (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */);
  tmp2._T = (data->localData[0]->realVars[156] /* checkvalve_3.state_a.T variable */);
  tmp3 = omc_nb__hydr__static__v6_checkvalve__3_Medium_density(threadData, tmp2);
  if(!(tmp3 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(nb_hydr_static_v6.checkvalve_3.Medium.density(nb_hydr_static_v6.checkvalve_3.Medium.ThermodynamicState(checkvalve_3.port_a.p, checkvalve_3.state_a.T))) was %g should be >= 0", tmp3);
    }
  }res[3] = homotopy(((((data->localData[0]->realVars[155] /* checkvalve_3.relativeFlowCoefficient variable */)) * ((data->simulationInfo->realParameter[36] /* checkvalve_3.Av PARAM */))) * (sqrt(tmp3))) * (omc_Modelica_Fluid_Utilities_regRoot2(threadData, (data->localData[0]->realVars[147] /* checkvalve_3.dp variable */), (data->simulationInfo->realParameter[40] /* checkvalve_3.dp_small PARAM */), 1.0, 0.0, 1 /* true */, 0.0)), DIVISION_SIM((((data->localData[0]->realVars[155] /* checkvalve_3.relativeFlowCoefficient variable */)) * ((data->simulationInfo->realParameter[44] /* checkvalve_3.m_flow_nominal PARAM */))) * ((data->localData[0]->realVars[147] /* checkvalve_3.dp variable */)),(data->simulationInfo->realParameter[39] /* checkvalve_3.dp_nominal PARAM */),"checkvalve_3.dp_nominal",equationIndexes)) - (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */);

  tmp4._p = (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */);
  tmp4._T = (data->localData[0]->realVars[144] /* checkvalve_2.state_a.T variable */);
  tmp5 = omc_nb__hydr__static__v6_checkvalve__2_Medium_density(threadData, tmp4);
  if(!(tmp5 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(nb_hydr_static_v6.checkvalve_2.Medium.density(nb_hydr_static_v6.checkvalve_2.Medium.ThermodynamicState(checkvalve_2.port_a.p, checkvalve_2.state_a.T))) was %g should be >= 0", tmp5);
    }
  }res[4] = homotopy(((((data->localData[0]->realVars[143] /* checkvalve_2.relativeFlowCoefficient variable */)) * ((data->simulationInfo->realParameter[18] /* checkvalve_2.Av PARAM */))) * (sqrt(tmp5))) * (omc_Modelica_Fluid_Utilities_regRoot2(threadData, (data->localData[0]->realVars[135] /* checkvalve_2.dp variable */), (data->simulationInfo->realParameter[22] /* checkvalve_2.dp_small PARAM */), 1.0, 0.0, 1 /* true */, 0.0)), DIVISION_SIM((((data->localData[0]->realVars[143] /* checkvalve_2.relativeFlowCoefficient variable */)) * ((data->simulationInfo->realParameter[26] /* checkvalve_2.m_flow_nominal PARAM */))) * ((data->localData[0]->realVars[135] /* checkvalve_2.dp variable */)),(data->simulationInfo->realParameter[21] /* checkvalve_2.dp_nominal PARAM */),"checkvalve_2.dp_nominal",equationIndexes)) - (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */);

  res[5] = (fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[334] /* jun_3.port_1.h_outflow variable */)) + (fmax((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[328] /* jun_1.port_2.h_outflow variable */)) - (((data->localData[0]->realVars[333] /* jun_2.port_3.h_outflow variable */)) * (fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07) + fmax((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */),1e-07)));

  res[6] = (fmax((-(data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[330] /* jun_2.port_1.h_outflow variable */)) + (fmax((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[179] /* chw_ret.ports[1].h_outflow variable */)) - (((data->localData[0]->realVars[329] /* jun_1.port_3.h_outflow variable */)) * (fmax((-(data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */)),1e-07) + fmax((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */),1e-07)));

  tmp6._p = (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */);
  tmp6._T = (data->localData[0]->realVars[132] /* checkvalve_1.state_a.T variable */);
  tmp7 = omc_nb__hydr__static__v6_checkvalve__1_Medium_density(threadData, tmp6);
  if(!(tmp7 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(nb_hydr_static_v6.checkvalve_1.Medium.density(nb_hydr_static_v6.checkvalve_1.Medium.ThermodynamicState(checkvalve_1.port_a.p, checkvalve_1.state_a.T))) was %g should be >= 0", tmp7);
    }
  }res[7] = homotopy(((((data->localData[0]->realVars[131] /* checkvalve_1.relativeFlowCoefficient variable */)) * ((data->simulationInfo->realParameter[0] /* checkvalve_1.Av PARAM */))) * (sqrt(tmp7))) * (omc_Modelica_Fluid_Utilities_regRoot2(threadData, (data->localData[0]->realVars[123] /* checkvalve_1.dp variable */), (data->simulationInfo->realParameter[4] /* checkvalve_1.dp_small PARAM */), 1.0, 0.0, 1 /* true */, 0.0)), DIVISION_SIM((((data->localData[0]->realVars[131] /* checkvalve_1.relativeFlowCoefficient variable */)) * ((data->simulationInfo->realParameter[8] /* checkvalve_1.m_flow_nominal PARAM */))) * ((data->localData[0]->realVars[123] /* checkvalve_1.dp variable */)),(data->simulationInfo->realParameter[3] /* checkvalve_1.dp_nominal PARAM */),"checkvalve_1.dp_nominal",equationIndexes)) - (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */);
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS181(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+8] = {0,5,5,5,5,8,8,8,8};
  const int rowIndex[52] = {1,2,5,6,7,1,2,4,5,6,1,2,3,5,6,0,1,2,5,6,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(8, 52, 8);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (8+1)*sizeof(unsigned int));
  
  for(i=2;i<8+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 52*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {7};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {6};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {5};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
  
  /* color 6 with 1 columns */
  const int indices_6[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_6[i]] = 6;
  
  /* color 7 with 1 columns */
  const int indices_7[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_7[i]] = 7;
  
  /* color 8 with 1 columns */
  const int indices_8[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_8[i]] = 8;
}
void initializeNonlinearPatternNLS181(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS181(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for checkvalve_1.port_b.h_outflow */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* checkvalve_1.port_b.h_outflow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* checkvalve_1.port_b.h_outflow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* checkvalve_1.port_b.h_outflow */.max;
  /* static nls data for checkvalve_2.port_b.h_outflow */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* checkvalve_2.port_b.h_outflow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* checkvalve_2.port_b.h_outflow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* checkvalve_2.port_b.h_outflow */.max;
  /* static nls data for checkvalve_3.port_b.h_outflow */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* checkvalve_3.port_b.h_outflow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* checkvalve_3.port_b.h_outflow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* checkvalve_3.port_b.h_outflow */.max;
  /* static nls data for checkvalve_4.port_b.h_outflow */
  sysData->nominal[i] = data->modelData->realVarsData[164].attribute /* checkvalve_4.port_b.h_outflow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[164].attribute /* checkvalve_4.port_b.h_outflow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[164].attribute /* checkvalve_4.port_b.h_outflow */.max;
  /* static nls data for chiller_1.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[171].attribute /* chiller_1.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[171].attribute /* chiller_1.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[171].attribute /* chiller_1.m_flow */.max;
  /* static nls data for chiller_4.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[177].attribute /* chiller_4.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[177].attribute /* chiller_4.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[177].attribute /* chiller_4.m_flow */.max;
  /* static nls data for chiller_3.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[175].attribute /* chiller_3.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[175].attribute /* chiller_3.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[175].attribute /* chiller_3.m_flow */.max;
  /* static nls data for chiller_2.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[173].attribute /* chiller_2.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[173].attribute /* chiller_2.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[173].attribute /* chiller_2.m_flow */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS181(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS181(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS181(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */);
  array[1] = (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */);
  array[2] = (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */);
  array[3] = (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */);
  array[4] = (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */);
  array[5] = (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */);
  array[6] = (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */);
  array[7] = (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */);
}


/* inner equations */

/*
equation index: 1009
type: SIMPLE_ASSIGN
chwp_2.vol.steBal.m_flowInv = if noEvent(chiller_2.m_flow > 5.74453122e-05) or noEvent(chiller_2.m_flow < -5.74453122e-05) then 1.0 / chiller_2.m_flow else if noEvent(chiller_2.m_flow < 2.87226561e-05) and noEvent(chiller_2.m_flow > -2.87226561e-05) then 303033618.607859 * chiller_2.m_flow else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(chiller_2.m_flow, 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27)
*/
void nb_hydr_static_v6_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1009};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = Greater((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),5.74453122e-05);
  tmp1 = Less((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),-5.74453122e-05);
  tmp4 = (modelica_boolean)(tmp0 || tmp1);
  if(tmp4)
  {
    tmp5 = DIVISION_SIM(1.0,(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),"chiller_2.m_flow",equationIndexes);
  }
  else
  {
    tmp2 = Less((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),2.87226561e-05);
    tmp3 = Greater((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),-2.87226561e-05);
    tmp5 = ((tmp2 && tmp3)?(303033618.607859) * ((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)):omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27));
  }
  (data->localData[0]->realVars[252] /* chwp_2.vol.steBal.m_flowInv variable */) = tmp5;
  TRACE_POP
}
/*
equation index: 1010
type: SIMPLE_ASSIGN
$cse49 = max(chiller_2.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1010};
  (data->localData[0]->realVars[58] /* $cse49 variable */) = fmax((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),1e-07);
  TRACE_POP
}
/*
equation index: 1011
type: SIMPLE_ASSIGN
chiller_2.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(chiller_2.m_flow, chiller_2.k, chiller_2.m_flow_turbulent)
*/
void nb_hydr_static_v6_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1011};
  (data->localData[0]->realVars[172] /* chiller_2.dp variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), (data->simulationInfo->realParameter[93] /* chiller_2.k PARAM */), (data->simulationInfo->realParameter[97] /* chiller_2.m_flow_turbulent PARAM */));
  TRACE_POP
}
/*
equation index: 1012
type: SIMPLE_ASSIGN
$cse40 = max(-chiller_2.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1012};
  (data->localData[0]->realVars[49] /* $cse40 variable */) = fmax((-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)),1e-07);
  TRACE_POP
}
/*
equation index: 1013
type: SIMPLE_ASSIGN
chwp_2.VMachine_flow = 0.001004433569776996 * chiller_2.m_flow
*/
void nb_hydr_static_v6_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1013};
  (data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */) = (0.001004433569776996) * ((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */));
  TRACE_POP
}
/*
equation index: 1014
type: SIMPLE_ASSIGN
chwp_2.P = Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_2.eff.per.power, chwp_2.VMachine_flow, chwp_2.filter.y, chwp_2.eff.powDer, chwp_2.eff.delta)
*/
void nb_hydr_static_v6_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1014};
  real_array tmp0;
  real_array tmp1;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp2;
  real_array tmp3;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[676] /* chwp_2.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[668] /* chwp_2.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp2, tmp0, tmp1);
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[722] /* chwp_2.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  (data->localData[0]->realVars[222] /* chwp_2.P variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp2, (data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */), (data->localData[0]->realVars[231] /* chwp_2.filter.y variable */), tmp3, (data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */));
  TRACE_POP
}
/*
equation index: 1015
type: SIMPLE_ASSIGN
$cse54 = Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(chwp_2.VMachine_flow, chwp_2.filter.y, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]}))
*/
void nb_hydr_static_v6_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1015};
  real_array tmp0;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp1;
  real_array tmp2;
  real_array tmp3;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[765] /* chwp_2.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp2, 19, (modelica_real)(data->simulationInfo->realParameter[624] /* chwp_2.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp3, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[644] /* chwp_2.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[645] /* chwp_2.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[646] /* chwp_2.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[647] /* chwp_2.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[648] /* chwp_2.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[649] /* chwp_2.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[650] /* chwp_2.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[651] /* chwp_2.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[652] /* chwp_2.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[653] /* chwp_2.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[654] /* chwp_2.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[655] /* chwp_2.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[656] /* chwp_2.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[657] /* chwp_2.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[658] /* chwp_2.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[659] /* chwp_2.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[660] /* chwp_2.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[661] /* chwp_2.eff.pCur3.dp[19] PARAM */));
  tmp1._n = ((modelica_integer) 19);
  tmp1._V_flow = tmp2;
  tmp1._dp = tmp3;
  (data->localData[0]->realVars[63] /* $cse54 variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */), (data->localData[0]->realVars[231] /* chwp_2.filter.y variable */), tmp0, 909154.9295774648, 0.5770020020020019, tmp1);
  TRACE_POP
}
/*
equation index: 1016
type: SIMPLE_ASSIGN
chwp_2.dpMachine = $cse54 - chwp_2.VMachine_flow * chwp_2.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1016};
  (data->localData[0]->realVars[226] /* chwp_2.dpMachine variable */) = (data->localData[0]->realVars[63] /* $cse54 variable */) - (((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */)) * ((data->simulationInfo->realParameter[552] /* chwp_2.eff.kRes PARAM */)));
  TRACE_POP
}
/*
equation index: 1017
type: SIMPLE_ASSIGN
chwp_2.heaDis.WHyd = chwp_2.dpMachine * chwp_2.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1017};
  (data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */) = ((data->localData[0]->realVars[226] /* chwp_2.dpMachine variable */)) * ((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */));
  TRACE_POP
}
/*
equation index: 1018
type: SIMPLE_ASSIGN
chwp_2.heaDis.QThe_flow = (if chwp_2.per.motorCooledByFluid then chwp_2.P else chwp_2.heaDis.WHyd) - chwp_2.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1018};
  (data->localData[0]->realVars[232] /* chwp_2.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[127] /* chwp_2.per.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[222] /* chwp_2.P variable */):(data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */)) - (data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 1019
type: SIMPLE_ASSIGN
chwp_2.PToMed.u1 = smooth(1, if noEvent(abs(chwp_2.VMachine_flow) + -0.001154004004004004 > 0.0005770020020020019) then chwp_2.heaDis.QThe_flow else if noEvent(abs(chwp_2.VMachine_flow) + -0.001154004004004004 < -0.0005770020020020019) then 0.0 else 0.25 * (2.0 - 1733.096239753654 * abs(chwp_2.VMachine_flow)) * ((1733.096239753654 * abs(chwp_2.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * chwp_2.heaDis.QThe_flow + 0.5 * chwp_2.heaDis.QThe_flow)
*/
void nb_hydr_static_v6_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1019};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater(fabs((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */)) + -0.001154004004004004,0.0005770020020020019);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (data->localData[0]->realVars[232] /* chwp_2.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp1 = Less(fabs((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */)) + -0.001154004004004004,-0.0005770020020020019);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = 0.0;
    }
    else
    {
      tmp2 = (1733.096239753654) * (fabs((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */))) + -2.0;
      tmp4 = (0.25) * (((2.0 - ((1733.096239753654) * (fabs((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */))))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[232] /* chwp_2.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[232] /* chwp_2.heaDis.QThe_flow variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[223] /* chwp_2.PToMed.u1 variable */) = tmp6;
  TRACE_POP
}
/*
equation index: 1020
type: SIMPLE_ASSIGN
chwp_2.prePow.Q_flow = chwp_2.PToMed.u1 + chwp_2.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1020};
  (data->localData[0]->realVars[238] /* chwp_2.prePow.Q_flow variable */) = (data->localData[0]->realVars[223] /* chwp_2.PToMed.u1 variable */) + (data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 1021
type: SIMPLE_ASSIGN
checkvalve_2.port_a.p = ret_p.k + chwp_2.dpMachine
*/
void nb_hydr_static_v6_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1021};
  (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[226] /* chwp_2.dpMachine variable */);
  TRACE_POP
}
/*
equation index: 1022
type: SIMPLE_ASSIGN
chwp_4.vol.steBal.m_flowInv = if noEvent(chiller_4.m_flow > 5.74453122e-05) or noEvent(chiller_4.m_flow < -5.74453122e-05) then 1.0 / chiller_4.m_flow else if noEvent(chiller_4.m_flow < 2.87226561e-05) and noEvent(chiller_4.m_flow > -2.87226561e-05) then 303033618.607859 * chiller_4.m_flow else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(chiller_4.m_flow, 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27)
*/
void nb_hydr_static_v6_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1022};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = Greater((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),5.74453122e-05);
  tmp1 = Less((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),-5.74453122e-05);
  tmp4 = (modelica_boolean)(tmp0 || tmp1);
  if(tmp4)
  {
    tmp5 = DIVISION_SIM(1.0,(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),"chiller_4.m_flow",equationIndexes);
  }
  else
  {
    tmp2 = Less((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),2.87226561e-05);
    tmp3 = Greater((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),-2.87226561e-05);
    tmp5 = ((tmp2 && tmp3)?(303033618.607859) * ((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)):omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27));
  }
  (data->localData[0]->realVars[314] /* chwp_4.vol.steBal.m_flowInv variable */) = tmp5;
  TRACE_POP
}
/*
equation index: 1023
type: SIMPLE_ASSIGN
chiller_4.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(chiller_4.m_flow, chiller_4.k, chiller_4.m_flow_turbulent)
*/
void nb_hydr_static_v6_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1023};
  (data->localData[0]->realVars[176] /* chiller_4.dp variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), (data->simulationInfo->realParameter[121] /* chiller_4.k PARAM */), (data->simulationInfo->realParameter[125] /* chiller_4.m_flow_turbulent PARAM */));
  TRACE_POP
}
/*
equation index: 1024
type: SIMPLE_ASSIGN
$cse52 = max(chiller_4.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1024};
  (data->localData[0]->realVars[61] /* $cse52 variable */) = fmax((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),1e-07);
  TRACE_POP
}
/*
equation index: 1025
type: SIMPLE_ASSIGN
$cse45 = max(-chiller_4.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1025};
  (data->localData[0]->realVars[54] /* $cse45 variable */) = fmax((-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)),1e-07);
  TRACE_POP
}
/*
equation index: 1026
type: SIMPLE_ASSIGN
chwp_4.VMachine_flow = 0.001004433569776996 * chiller_4.m_flow
*/
void nb_hydr_static_v6_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1026};
  (data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */) = (0.001004433569776996) * ((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */));
  TRACE_POP
}
/*
equation index: 1027
type: SIMPLE_ASSIGN
chwp_4.P = Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_4.eff.per.power, chwp_4.VMachine_flow, chwp_4.filter.y, chwp_4.eff.powDer, chwp_4.eff.delta)
*/
void nb_hydr_static_v6_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1027};
  real_array tmp0;
  real_array tmp1;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp2;
  real_array tmp3;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[1442] /* chwp_4.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[1434] /* chwp_4.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp2, tmp0, tmp1);
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[1488] /* chwp_4.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  (data->localData[0]->realVars[284] /* chwp_4.P variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp2, (data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */), (data->localData[0]->realVars[293] /* chwp_4.filter.y variable */), tmp3, (data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */));
  TRACE_POP
}
/*
equation index: 1028
type: SIMPLE_ASSIGN
$cse56 = Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(chwp_4.VMachine_flow, chwp_4.filter.y, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]}))
*/
void nb_hydr_static_v6_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1028};
  real_array tmp0;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp1;
  real_array tmp2;
  real_array tmp3;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[1531] /* chwp_4.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp2, 19, (modelica_real)(data->simulationInfo->realParameter[1390] /* chwp_4.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp3, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1410] /* chwp_4.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1411] /* chwp_4.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1412] /* chwp_4.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1413] /* chwp_4.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1414] /* chwp_4.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1415] /* chwp_4.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1416] /* chwp_4.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1417] /* chwp_4.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1418] /* chwp_4.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1419] /* chwp_4.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1420] /* chwp_4.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1421] /* chwp_4.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1422] /* chwp_4.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1423] /* chwp_4.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1424] /* chwp_4.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1425] /* chwp_4.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1426] /* chwp_4.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1427] /* chwp_4.eff.pCur3.dp[19] PARAM */));
  tmp1._n = ((modelica_integer) 19);
  tmp1._V_flow = tmp2;
  tmp1._dp = tmp3;
  (data->localData[0]->realVars[65] /* $cse56 variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */), (data->localData[0]->realVars[293] /* chwp_4.filter.y variable */), tmp0, 909154.9295774648, 0.5770020020020019, tmp1);
  TRACE_POP
}
/*
equation index: 1029
type: SIMPLE_ASSIGN
chwp_4.dpMachine = $cse56 - chwp_4.VMachine_flow * chwp_4.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1029};
  (data->localData[0]->realVars[288] /* chwp_4.dpMachine variable */) = (data->localData[0]->realVars[65] /* $cse56 variable */) - (((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */)) * ((data->simulationInfo->realParameter[1318] /* chwp_4.eff.kRes PARAM */)));
  TRACE_POP
}
/*
equation index: 1030
type: SIMPLE_ASSIGN
chwp_4.heaDis.WHyd = chwp_4.dpMachine * chwp_4.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1030};
  (data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */) = ((data->localData[0]->realVars[288] /* chwp_4.dpMachine variable */)) * ((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */));
  TRACE_POP
}
/*
equation index: 1031
type: SIMPLE_ASSIGN
chwp_4.heaDis.QThe_flow = (if chwp_4.per.motorCooledByFluid then chwp_4.P else chwp_4.heaDis.WHyd) - chwp_4.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1031};
  (data->localData[0]->realVars[294] /* chwp_4.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[201] /* chwp_4.per.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[284] /* chwp_4.P variable */):(data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */)) - (data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 1032
type: SIMPLE_ASSIGN
chwp_4.PToMed.u1 = smooth(1, if noEvent(abs(chwp_4.VMachine_flow) + -0.001154004004004004 > 0.0005770020020020019) then chwp_4.heaDis.QThe_flow else if noEvent(abs(chwp_4.VMachine_flow) + -0.001154004004004004 < -0.0005770020020020019) then 0.0 else 0.25 * (2.0 - 1733.096239753654 * abs(chwp_4.VMachine_flow)) * ((1733.096239753654 * abs(chwp_4.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * chwp_4.heaDis.QThe_flow + 0.5 * chwp_4.heaDis.QThe_flow)
*/
void nb_hydr_static_v6_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1032};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater(fabs((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */)) + -0.001154004004004004,0.0005770020020020019);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (data->localData[0]->realVars[294] /* chwp_4.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp1 = Less(fabs((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */)) + -0.001154004004004004,-0.0005770020020020019);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = 0.0;
    }
    else
    {
      tmp2 = (1733.096239753654) * (fabs((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */))) + -2.0;
      tmp4 = (0.25) * (((2.0 - ((1733.096239753654) * (fabs((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */))))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[294] /* chwp_4.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[294] /* chwp_4.heaDis.QThe_flow variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[285] /* chwp_4.PToMed.u1 variable */) = tmp6;
  TRACE_POP
}
/*
equation index: 1033
type: SIMPLE_ASSIGN
chwp_4.prePow.Q_flow = chwp_4.PToMed.u1 + chwp_4.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1033};
  (data->localData[0]->realVars[300] /* chwp_4.prePow.Q_flow variable */) = (data->localData[0]->realVars[285] /* chwp_4.PToMed.u1 variable */) + (data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 1034
type: SIMPLE_ASSIGN
checkvalve_4.port_a.p = ret_p.k + chwp_4.dpMachine
*/
void nb_hydr_static_v6_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1034};
  (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[288] /* chwp_4.dpMachine variable */);
  TRACE_POP
}
/*
equation index: 1035
type: SIMPLE_ASSIGN
chwp_3.vol.steBal.m_flowInv = if noEvent(chiller_3.m_flow > 5.74453122e-05) or noEvent(chiller_3.m_flow < -5.74453122e-05) then 1.0 / chiller_3.m_flow else if noEvent(chiller_3.m_flow < 2.87226561e-05) and noEvent(chiller_3.m_flow > -2.87226561e-05) then 303033618.607859 * chiller_3.m_flow else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(chiller_3.m_flow, 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27)
*/
void nb_hydr_static_v6_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1035};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = Greater((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),5.74453122e-05);
  tmp1 = Less((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),-5.74453122e-05);
  tmp4 = (modelica_boolean)(tmp0 || tmp1);
  if(tmp4)
  {
    tmp5 = DIVISION_SIM(1.0,(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),"chiller_3.m_flow",equationIndexes);
  }
  else
  {
    tmp2 = Less((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),2.87226561e-05);
    tmp3 = Greater((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),-2.87226561e-05);
    tmp5 = ((tmp2 && tmp3)?(303033618.607859) * ((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)):omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27));
  }
  (data->localData[0]->realVars[283] /* chwp_3.vol.steBal.m_flowInv variable */) = tmp5;
  TRACE_POP
}
/*
equation index: 1036
type: SIMPLE_ASSIGN
chiller_3.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(chiller_3.m_flow, chiller_3.k, chiller_3.m_flow_turbulent)
*/
void nb_hydr_static_v6_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1036};
  (data->localData[0]->realVars[174] /* chiller_3.dp variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), (data->simulationInfo->realParameter[107] /* chiller_3.k PARAM */), (data->simulationInfo->realParameter[111] /* chiller_3.m_flow_turbulent PARAM */));
  TRACE_POP
}
/*
equation index: 1037
type: SIMPLE_ASSIGN
$cse51 = max(chiller_3.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1037};
  (data->localData[0]->realVars[60] /* $cse51 variable */) = fmax((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),1e-07);
  TRACE_POP
}
/*
equation index: 1038
type: SIMPLE_ASSIGN
$cse43 = max(-chiller_3.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1038};
  (data->localData[0]->realVars[52] /* $cse43 variable */) = fmax((-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)),1e-07);
  TRACE_POP
}
/*
equation index: 1039
type: SIMPLE_ASSIGN
jun_6.port_2.m_flow = (-chiller_4.m_flow) - chiller_3.m_flow
*/
void nb_hydr_static_v6_eqFunction_1039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1039};
  (data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */) = (-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)) - (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */);
  TRACE_POP
}
/*
equation index: 1040
type: SIMPLE_ASSIGN
$cse44 = max(-jun_6.port_2.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1040};
  (data->localData[0]->realVars[53] /* $cse44 variable */) = fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07);
  TRACE_POP
}
/*
equation index: 1041
type: SIMPLE_ASSIGN
$cse42 = max(jun_6.port_2.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1041};
  (data->localData[0]->realVars[51] /* $cse42 variable */) = fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07);
  TRACE_POP
}
/*
equation index: 1042
type: SIMPLE_ASSIGN
jun_2.port_1.m_flow = chiller_2.m_flow - jun_6.port_2.m_flow
*/
void nb_hydr_static_v6_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1042};
  (data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */) = (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */) - (data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */);
  TRACE_POP
}
/*
equation index: 1043
type: SIMPLE_ASSIGN
$cse41 = max(jun_2.port_1.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1043};
  (data->localData[0]->realVars[50] /* $cse41 variable */) = fmax((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */),1e-07);
  TRACE_POP
}
/*
equation index: 1044
type: SIMPLE_ASSIGN
$cse39 = max(-jun_2.port_1.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1044};
  (data->localData[0]->realVars[48] /* $cse39 variable */) = fmax((-(data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */)),1e-07);
  TRACE_POP
}
/*
equation index: 1045
type: SIMPLE_ASSIGN
jun_5.port_2.m_flow = jun_6.port_2.m_flow - chiller_2.m_flow
*/
void nb_hydr_static_v6_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1045};
  (data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */) = (data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */) - (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */);
  TRACE_POP
}
/*
equation index: 1046
type: SIMPLE_ASSIGN
$cse50 = max(jun_5.port_2.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1046};
  (data->localData[0]->realVars[59] /* $cse50 variable */) = fmax((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */),1e-07);
  TRACE_POP
}
/*
equation index: 1047
type: SIMPLE_ASSIGN
$cse47 = max(-jun_5.port_2.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1047};
  (data->localData[0]->realVars[56] /* $cse47 variable */) = fmax((-(data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */)),1e-07);
  TRACE_POP
}
/*
equation index: 1048
type: SIMPLE_ASSIGN
chwp_3.VMachine_flow = 0.001004433569776996 * chiller_3.m_flow
*/
void nb_hydr_static_v6_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1048};
  (data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */) = (0.001004433569776996) * ((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */));
  TRACE_POP
}
/*
equation index: 1049
type: SIMPLE_ASSIGN
chwp_3.P = Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_3.eff.per.power, chwp_3.VMachine_flow, chwp_3.filter.y, chwp_3.eff.powDer, chwp_3.eff.delta)
*/
void nb_hydr_static_v6_eqFunction_1049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1049};
  real_array tmp0;
  real_array tmp1;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp2;
  real_array tmp3;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[1059] /* chwp_3.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[1051] /* chwp_3.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp2, tmp0, tmp1);
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[1105] /* chwp_3.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  (data->localData[0]->realVars[253] /* chwp_3.P variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp2, (data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */), (data->localData[0]->realVars[262] /* chwp_3.filter.y variable */), tmp3, (data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */));
  TRACE_POP
}
/*
equation index: 1050
type: SIMPLE_ASSIGN
$cse55 = Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(chwp_3.VMachine_flow, chwp_3.filter.y, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]}))
*/
void nb_hydr_static_v6_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1050};
  real_array tmp0;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp1;
  real_array tmp2;
  real_array tmp3;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[1148] /* chwp_3.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp2, 19, (modelica_real)(data->simulationInfo->realParameter[1007] /* chwp_3.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp3, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1027] /* chwp_3.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1028] /* chwp_3.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1029] /* chwp_3.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1030] /* chwp_3.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1031] /* chwp_3.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1032] /* chwp_3.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1033] /* chwp_3.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1034] /* chwp_3.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1035] /* chwp_3.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1036] /* chwp_3.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1037] /* chwp_3.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1038] /* chwp_3.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1039] /* chwp_3.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1040] /* chwp_3.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1041] /* chwp_3.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1042] /* chwp_3.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1043] /* chwp_3.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1044] /* chwp_3.eff.pCur3.dp[19] PARAM */));
  tmp1._n = ((modelica_integer) 19);
  tmp1._V_flow = tmp2;
  tmp1._dp = tmp3;
  (data->localData[0]->realVars[64] /* $cse55 variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */), (data->localData[0]->realVars[262] /* chwp_3.filter.y variable */), tmp0, 909154.9295774648, 0.5770020020020019, tmp1);
  TRACE_POP
}
/*
equation index: 1051
type: SIMPLE_ASSIGN
chwp_3.dpMachine = $cse55 - chwp_3.VMachine_flow * chwp_3.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1051};
  (data->localData[0]->realVars[257] /* chwp_3.dpMachine variable */) = (data->localData[0]->realVars[64] /* $cse55 variable */) - (((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */)) * ((data->simulationInfo->realParameter[935] /* chwp_3.eff.kRes PARAM */)));
  TRACE_POP
}
/*
equation index: 1052
type: SIMPLE_ASSIGN
chwp_3.heaDis.WHyd = chwp_3.dpMachine * chwp_3.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1052};
  (data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */) = ((data->localData[0]->realVars[257] /* chwp_3.dpMachine variable */)) * ((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */));
  TRACE_POP
}
/*
equation index: 1053
type: SIMPLE_ASSIGN
chwp_3.heaDis.QThe_flow = (if chwp_3.per.motorCooledByFluid then chwp_3.P else chwp_3.heaDis.WHyd) - chwp_3.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_1053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1053};
  (data->localData[0]->realVars[263] /* chwp_3.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[164] /* chwp_3.per.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[253] /* chwp_3.P variable */):(data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */)) - (data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 1054
type: SIMPLE_ASSIGN
chwp_3.PToMed.u1 = smooth(1, if noEvent(abs(chwp_3.VMachine_flow) + -0.001154004004004004 > 0.0005770020020020019) then chwp_3.heaDis.QThe_flow else if noEvent(abs(chwp_3.VMachine_flow) + -0.001154004004004004 < -0.0005770020020020019) then 0.0 else 0.25 * (2.0 - 1733.096239753654 * abs(chwp_3.VMachine_flow)) * ((1733.096239753654 * abs(chwp_3.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * chwp_3.heaDis.QThe_flow + 0.5 * chwp_3.heaDis.QThe_flow)
*/
void nb_hydr_static_v6_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1054};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater(fabs((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */)) + -0.001154004004004004,0.0005770020020020019);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (data->localData[0]->realVars[263] /* chwp_3.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp1 = Less(fabs((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */)) + -0.001154004004004004,-0.0005770020020020019);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = 0.0;
    }
    else
    {
      tmp2 = (1733.096239753654) * (fabs((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */))) + -2.0;
      tmp4 = (0.25) * (((2.0 - ((1733.096239753654) * (fabs((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */))))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[263] /* chwp_3.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[263] /* chwp_3.heaDis.QThe_flow variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[254] /* chwp_3.PToMed.u1 variable */) = tmp6;
  TRACE_POP
}
/*
equation index: 1055
type: SIMPLE_ASSIGN
chwp_3.prePow.Q_flow = chwp_3.PToMed.u1 + chwp_3.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1055};
  (data->localData[0]->realVars[269] /* chwp_3.prePow.Q_flow variable */) = (data->localData[0]->realVars[254] /* chwp_3.PToMed.u1 variable */) + (data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 1056
type: SIMPLE_ASSIGN
checkvalve_3.port_a.p = ret_p.k + chwp_3.dpMachine
*/
void nb_hydr_static_v6_eqFunction_1056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1056};
  (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[257] /* chwp_3.dpMachine variable */);
  TRACE_POP
}
/*
equation index: 1057
type: SIMPLE_ASSIGN
chwp_1.vol.steBal.m_flowInv = if noEvent(chiller_1.m_flow > 5.74453122e-05) or noEvent(chiller_1.m_flow < -5.74453122e-05) then 1.0 / chiller_1.m_flow else if noEvent(chiller_1.m_flow < 2.87226561e-05) and noEvent(chiller_1.m_flow > -2.87226561e-05) then 303033618.607859 * chiller_1.m_flow else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(chiller_1.m_flow, 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27)
*/
void nb_hydr_static_v6_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1057};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = Greater((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),5.74453122e-05);
  tmp1 = Less((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),-5.74453122e-05);
  tmp4 = (modelica_boolean)(tmp0 || tmp1);
  if(tmp4)
  {
    tmp5 = DIVISION_SIM(1.0,(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),"chiller_1.m_flow",equationIndexes);
  }
  else
  {
    tmp2 = Less((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),2.87226561e-05);
    tmp3 = Greater((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),-2.87226561e-05);
    tmp5 = ((tmp2 && tmp3)?(303033618.607859) * ((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)):omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27));
  }
  (data->localData[0]->realVars[221] /* chwp_1.vol.steBal.m_flowInv variable */) = tmp5;
  TRACE_POP
}
/*
equation index: 1058
type: SIMPLE_ASSIGN
chiller_1.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(chiller_1.m_flow, chiller_1.k, chiller_1.m_flow_turbulent)
*/
void nb_hydr_static_v6_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1058};
  (data->localData[0]->realVars[170] /* chiller_1.dp variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), (data->simulationInfo->realParameter[79] /* chiller_1.k PARAM */), (data->simulationInfo->realParameter[83] /* chiller_1.m_flow_turbulent PARAM */));
  TRACE_POP
}
/*
equation index: 1059
type: SIMPLE_ASSIGN
$cse46 = max(chiller_1.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1059};
  (data->localData[0]->realVars[55] /* $cse46 variable */) = fmax((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),1e-07);
  TRACE_POP
}
/*
equation index: 1060
type: SIMPLE_ASSIGN
$cse37 = max(-chiller_1.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1060};
  (data->localData[0]->realVars[46] /* $cse37 variable */) = fmax((-(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)),1e-07);
  TRACE_POP
}
/*
equation index: 1061
type: SIMPLE_ASSIGN
terminal_resist.m_flow = chiller_1.m_flow - jun_5.port_2.m_flow
*/
void nb_hydr_static_v6_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1061};
  (data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */) = (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */) - (data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */);
  TRACE_POP
}
/*
equation index: 1062
type: SIMPLE_ASSIGN
terminal_resist.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(terminal_resist.m_flow, terminal_resist.k, terminal_resist.m_flow_turbulent)
*/
void nb_hydr_static_v6_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1062};
  (data->localData[0]->realVars[344] /* terminal_resist.dp variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */), (data->localData[0]->realVars[347] /* terminal_resist.k variable */), (data->simulationInfo->realParameter[1782] /* terminal_resist.m_flow_turbulent PARAM */));
  TRACE_POP
}
/*
equation index: 1063
type: SIMPLE_ASSIGN
$cse48 = max(-terminal_resist.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1063};
  (data->localData[0]->realVars[57] /* $cse48 variable */) = fmax((-(data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */)),1e-07);
  TRACE_POP
}
/*
equation index: 1064
type: SIMPLE_ASSIGN
$cse38 = max(terminal_resist.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_1064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1064};
  (data->localData[0]->realVars[47] /* $cse38 variable */) = fmax((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */),1e-07);
  TRACE_POP
}
/*
equation index: 1065
type: SIMPLE_ASSIGN
chwp_1.VMachine_flow = 0.001004433569776996 * chiller_1.m_flow
*/
void nb_hydr_static_v6_eqFunction_1065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1065};
  (data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */) = (0.001004433569776996) * ((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */));
  TRACE_POP
}
/*
equation index: 1066
type: SIMPLE_ASSIGN
chwp_1.P = Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_1.eff.per.power, chwp_1.VMachine_flow, chwp_1.filter.y, chwp_1.eff.powDer, chwp_1.eff.delta)
*/
void nb_hydr_static_v6_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1066};
  real_array tmp0;
  real_array tmp1;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp2;
  real_array tmp3;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[295] /* chwp_1.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[287] /* chwp_1.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp2, tmp0, tmp1);
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[341] /* chwp_1.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  (data->localData[0]->realVars[191] /* chwp_1.P variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp2, (data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */), (data->localData[0]->realVars[200] /* chwp_1.filter.y variable */), tmp3, (data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */));
  TRACE_POP
}
/*
equation index: 1067
type: SIMPLE_ASSIGN
$cse53 = Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(chwp_1.VMachine_flow, chwp_1.filter.y, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]}))
*/
void nb_hydr_static_v6_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1067};
  real_array tmp0;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp1;
  real_array tmp2;
  real_array tmp3;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[384] /* chwp_1.eff.preDer3[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp2, 19, (modelica_real)(data->simulationInfo->realParameter[243] /* chwp_1.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp3, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[263] /* chwp_1.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[264] /* chwp_1.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[265] /* chwp_1.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[266] /* chwp_1.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[267] /* chwp_1.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[268] /* chwp_1.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[269] /* chwp_1.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[270] /* chwp_1.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[271] /* chwp_1.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[272] /* chwp_1.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[273] /* chwp_1.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[274] /* chwp_1.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[275] /* chwp_1.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[276] /* chwp_1.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[277] /* chwp_1.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[278] /* chwp_1.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[279] /* chwp_1.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[280] /* chwp_1.eff.pCur3.dp[19] PARAM */));
  tmp1._n = ((modelica_integer) 19);
  tmp1._V_flow = tmp2;
  tmp1._dp = tmp3;
  (data->localData[0]->realVars[62] /* $cse53 variable */) = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */), (data->localData[0]->realVars[200] /* chwp_1.filter.y variable */), tmp0, 909154.9295774648, 0.5770020020020019, tmp1);
  TRACE_POP
}
/*
equation index: 1068
type: SIMPLE_ASSIGN
chwp_1.dpMachine = $cse53 - chwp_1.VMachine_flow * chwp_1.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1068};
  (data->localData[0]->realVars[195] /* chwp_1.dpMachine variable */) = (data->localData[0]->realVars[62] /* $cse53 variable */) - (((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */)) * ((data->simulationInfo->realParameter[171] /* chwp_1.eff.kRes PARAM */)));
  TRACE_POP
}
/*
equation index: 1069
type: SIMPLE_ASSIGN
chwp_1.heaDis.WHyd = chwp_1.dpMachine * chwp_1.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1069};
  (data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */) = ((data->localData[0]->realVars[195] /* chwp_1.dpMachine variable */)) * ((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */));
  TRACE_POP
}
/*
equation index: 1070
type: SIMPLE_ASSIGN
chwp_1.heaDis.QThe_flow = (if chwp_1.per.motorCooledByFluid then chwp_1.P else chwp_1.heaDis.WHyd) - chwp_1.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1070};
  (data->localData[0]->realVars[201] /* chwp_1.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[90] /* chwp_1.per.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[191] /* chwp_1.P variable */):(data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */)) - (data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 1071
type: SIMPLE_ASSIGN
chwp_1.PToMed.u1 = smooth(1, if noEvent(abs(chwp_1.VMachine_flow) + -0.001154004004004004 > 0.0005770020020020019) then chwp_1.heaDis.QThe_flow else if noEvent(abs(chwp_1.VMachine_flow) + -0.001154004004004004 < -0.0005770020020020019) then 0.0 else 0.25 * (2.0 - 1733.096239753654 * abs(chwp_1.VMachine_flow)) * ((1733.096239753654 * abs(chwp_1.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * chwp_1.heaDis.QThe_flow + 0.5 * chwp_1.heaDis.QThe_flow)
*/
void nb_hydr_static_v6_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1071};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater(fabs((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */)) + -0.001154004004004004,0.0005770020020020019);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (data->localData[0]->realVars[201] /* chwp_1.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp1 = Less(fabs((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */)) + -0.001154004004004004,-0.0005770020020020019);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = 0.0;
    }
    else
    {
      tmp2 = (1733.096239753654) * (fabs((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */))) + -2.0;
      tmp4 = (0.25) * (((2.0 - ((1733.096239753654) * (fabs((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */))))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[201] /* chwp_1.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[201] /* chwp_1.heaDis.QThe_flow variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[192] /* chwp_1.PToMed.u1 variable */) = tmp6;
  TRACE_POP
}
/*
equation index: 1072
type: SIMPLE_ASSIGN
chwp_1.prePow.Q_flow = chwp_1.PToMed.u1 + chwp_1.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1072};
  (data->localData[0]->realVars[207] /* chwp_1.prePow.Q_flow variable */) = (data->localData[0]->realVars[192] /* chwp_1.PToMed.u1 variable */) + (data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */);
  TRACE_POP
}
/*
equation index: 1073
type: SIMPLE_ASSIGN
checkvalve_1.port_a.p = ret_p.k + chwp_1.dpMachine
*/
void nb_hydr_static_v6_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1073};
  (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[195] /* chwp_1.dpMachine variable */);
  TRACE_POP
}
/*
equation index: 1074
type: SIMPLE_ASSIGN
chw_sup_P.p = ret_p.k + terminal_resist.dp
*/
void nb_hydr_static_v6_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1074};
  (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[344] /* terminal_resist.dp variable */);
  TRACE_POP
}
/*
equation index: 1075
type: SIMPLE_ASSIGN
checkvalve_1.port_b.p = chw_sup_P.p + chiller_1.dp
*/
void nb_hydr_static_v6_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1075};
  (data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */) = (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) + (data->localData[0]->realVars[170] /* chiller_1.dp variable */);
  TRACE_POP
}
/*
equation index: 1076
type: SIMPLE_ASSIGN
checkvalve_1.dp = checkvalve_1.port_a.p - checkvalve_1.port_b.p
*/
void nb_hydr_static_v6_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1076};
  (data->localData[0]->realVars[123] /* checkvalve_1.dp variable */) = (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */) - (data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */);
  TRACE_POP
}
/*
equation index: 1077
type: SIMPLE_ASSIGN
$cse57 = Modelica.Fluid.Utilities.regRoot2(checkvalve_1.dp, checkvalve_1.dp_small, 1.0, 0.0, true, 0.0)
*/
void nb_hydr_static_v6_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1077};
  (data->localData[0]->realVars[66] /* $cse57 variable */) = omc_Modelica_Fluid_Utilities_regRoot2(threadData, (data->localData[0]->realVars[123] /* checkvalve_1.dp variable */), (data->simulationInfo->realParameter[4] /* checkvalve_1.dp_small PARAM */), 1.0, 0.0, 1 /* true */, 0.0);
  TRACE_POP
}
/*
equation index: 1078
type: SIMPLE_ASSIGN
checkvalve_2.port_b.p = chw_sup_P.p + chiller_2.dp
*/
void nb_hydr_static_v6_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1078};
  (data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */) = (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) + (data->localData[0]->realVars[172] /* chiller_2.dp variable */);
  TRACE_POP
}
/*
equation index: 1079
type: SIMPLE_ASSIGN
checkvalve_2.dp = checkvalve_2.port_a.p - checkvalve_2.port_b.p
*/
void nb_hydr_static_v6_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1079};
  (data->localData[0]->realVars[135] /* checkvalve_2.dp variable */) = (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */) - (data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */);
  TRACE_POP
}
/*
equation index: 1080
type: SIMPLE_ASSIGN
$cse58 = Modelica.Fluid.Utilities.regRoot2(checkvalve_2.dp, checkvalve_2.dp_small, 1.0, 0.0, true, 0.0)
*/
void nb_hydr_static_v6_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1080};
  (data->localData[0]->realVars[67] /* $cse58 variable */) = omc_Modelica_Fluid_Utilities_regRoot2(threadData, (data->localData[0]->realVars[135] /* checkvalve_2.dp variable */), (data->simulationInfo->realParameter[22] /* checkvalve_2.dp_small PARAM */), 1.0, 0.0, 1 /* true */, 0.0);
  TRACE_POP
}
/*
equation index: 1081
type: SIMPLE_ASSIGN
checkvalve_4.port_b.p = chw_sup_P.p + chiller_4.dp
*/
void nb_hydr_static_v6_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1081};
  (data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */) = (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) + (data->localData[0]->realVars[176] /* chiller_4.dp variable */);
  TRACE_POP
}
/*
equation index: 1082
type: SIMPLE_ASSIGN
checkvalve_3.port_b.p = chw_sup_P.p + chiller_3.dp
*/
void nb_hydr_static_v6_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1082};
  (data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */) = (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) + (data->localData[0]->realVars[174] /* chiller_3.dp variable */);
  TRACE_POP
}
/*
equation index: 1083
type: SIMPLE_ASSIGN
checkvalve_3.dp = checkvalve_3.port_a.p - checkvalve_3.port_b.p
*/
void nb_hydr_static_v6_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1083};
  (data->localData[0]->realVars[147] /* checkvalve_3.dp variable */) = (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */) - (data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */);
  TRACE_POP
}
/*
equation index: 1084
type: SIMPLE_ASSIGN
$cse59 = Modelica.Fluid.Utilities.regRoot2(checkvalve_3.dp, checkvalve_3.dp_small, 1.0, 0.0, true, 0.0)
*/
void nb_hydr_static_v6_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1084};
  (data->localData[0]->realVars[68] /* $cse59 variable */) = omc_Modelica_Fluid_Utilities_regRoot2(threadData, (data->localData[0]->realVars[147] /* checkvalve_3.dp variable */), (data->simulationInfo->realParameter[40] /* checkvalve_3.dp_small PARAM */), 1.0, 0.0, 1 /* true */, 0.0);
  TRACE_POP
}
/*
equation index: 1085
type: SIMPLE_ASSIGN
checkvalve_4.dp = checkvalve_4.port_a.p - checkvalve_4.port_b.p
*/
void nb_hydr_static_v6_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1085};
  (data->localData[0]->realVars[159] /* checkvalve_4.dp variable */) = (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */) - (data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */);
  TRACE_POP
}
/*
equation index: 1086
type: SIMPLE_ASSIGN
$cse60 = Modelica.Fluid.Utilities.regRoot2(checkvalve_4.dp, checkvalve_4.dp_small, 1.0, 0.0, true, 0.0)
*/
void nb_hydr_static_v6_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1086};
  (data->localData[0]->realVars[69] /* $cse60 variable */) = omc_Modelica_Fluid_Utilities_regRoot2(threadData, (data->localData[0]->realVars[159] /* checkvalve_4.dp variable */), (data->simulationInfo->realParameter[58] /* checkvalve_4.dp_small PARAM */), 1.0, 0.0, 1 /* true */, 0.0);
  TRACE_POP
}
/*
equation index: 1087
type: SIMPLE_ASSIGN
jun_3.port_2.h_outflow = checkvalve_4.port_b.h_outflow - chwp_4.prePow.Q_flow * chwp_4.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1087};
  (data->localData[0]->realVars[335] /* jun_3.port_2.h_outflow variable */) = (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */) - (((data->localData[0]->realVars[300] /* chwp_4.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[314] /* chwp_4.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 1088
type: SIMPLE_ASSIGN
checkvalve_4.state_a.T = 273.15 + 0.0002390057361376673 * checkvalve_4.port_b.h_outflow
*/
void nb_hydr_static_v6_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1088};
  (data->localData[0]->realVars[168] /* checkvalve_4.state_a.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */));
  TRACE_POP
}
/*
equation index: 1089
type: SIMPLE_ASSIGN
$cse111 = nb_hydr_static_v6.checkvalve_4.Medium.density(nb_hydr_static_v6.checkvalve_4.Medium.ThermodynamicState(checkvalve_4.port_a.p, checkvalve_4.state_a.T))
*/
void nb_hydr_static_v6_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1089};
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */);
  tmp0._T = (data->localData[0]->realVars[168] /* checkvalve_4.state_a.T variable */);
  (data->localData[0]->realVars[36] /* $cse111 variable */) = omc_nb__hydr__static__v6_checkvalve__4_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 1090
type: SIMPLE_ASSIGN
jun_6.port_2.h_outflow = ($cse51 * checkvalve_3.port_b.h_outflow + $cse52 * checkvalve_4.port_b.h_outflow) / ($cse51 + $cse52)
*/
void nb_hydr_static_v6_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1090};
  (data->localData[0]->realVars[341] /* jun_6.port_2.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[60] /* $cse51 variable */)) * ((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */)) + ((data->localData[0]->realVars[61] /* $cse52 variable */)) * ((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */)),(data->localData[0]->realVars[60] /* $cse51 variable */) + (data->localData[0]->realVars[61] /* $cse52 variable */),"$cse51 + $cse52",equationIndexes);
  TRACE_POP
}
/*
equation index: 1091
type: SIMPLE_ASSIGN
jun_3.port_3.h_outflow = checkvalve_3.port_b.h_outflow - chwp_3.prePow.Q_flow * chwp_3.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1091};
  (data->localData[0]->realVars[336] /* jun_3.port_3.h_outflow variable */) = (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */) - (((data->localData[0]->realVars[269] /* chwp_3.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[283] /* chwp_3.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 1092
type: SIMPLE_ASSIGN
checkvalve_3.state_a.T = 273.15 + 0.0002390057361376673 * checkvalve_3.port_b.h_outflow
*/
void nb_hydr_static_v6_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1092};
  (data->localData[0]->realVars[156] /* checkvalve_3.state_a.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */));
  TRACE_POP
}
/*
equation index: 1093
type: SIMPLE_ASSIGN
$cse102 = nb_hydr_static_v6.checkvalve_3.Medium.density(nb_hydr_static_v6.checkvalve_3.Medium.ThermodynamicState(checkvalve_3.port_a.p, checkvalve_3.state_a.T))
*/
void nb_hydr_static_v6_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1093};
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */);
  tmp0._T = (data->localData[0]->realVars[156] /* checkvalve_3.state_a.T variable */);
  (data->localData[0]->realVars[25] /* $cse102 variable */) = omc_nb__hydr__static__v6_checkvalve__3_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 1094
type: SIMPLE_ASSIGN
jun_5.port_2.h_outflow = ($cse49 * checkvalve_2.port_b.h_outflow + $cse44 * jun_6.port_2.h_outflow) / ($cse49 + $cse44)
*/
void nb_hydr_static_v6_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1094};
  (data->localData[0]->realVars[339] /* jun_5.port_2.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[58] /* $cse49 variable */)) * ((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */)) + ((data->localData[0]->realVars[53] /* $cse44 variable */)) * ((data->localData[0]->realVars[341] /* jun_6.port_2.h_outflow variable */)),(data->localData[0]->realVars[58] /* $cse49 variable */) + (data->localData[0]->realVars[53] /* $cse44 variable */),"$cse49 + $cse44",equationIndexes);
  TRACE_POP
}
/*
equation index: 1095
type: SIMPLE_ASSIGN
checkvalve_1.port_a.h_outflow = ($cse48 * chw_sup.ports[2].h_outflow + $cse47 * jun_5.port_2.h_outflow) / ($cse48 + $cse47)
*/
void nb_hydr_static_v6_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1095};
  (data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[57] /* $cse48 variable */)) * ((data->localData[0]->realVars[184] /* chw_sup.ports[2].h_outflow variable */)) + ((data->localData[0]->realVars[56] /* $cse47 variable */)) * ((data->localData[0]->realVars[339] /* jun_5.port_2.h_outflow variable */)),(data->localData[0]->realVars[57] /* $cse48 variable */) + (data->localData[0]->realVars[56] /* $cse47 variable */),"$cse48 + $cse47",equationIndexes);
  TRACE_POP
}
/*
equation index: 1096
type: SIMPLE_ASSIGN
chwp_1.port_a.h_outflow = checkvalve_1.port_a.h_outflow - chwp_1.prePow.Q_flow * chwp_1.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1096};
  (data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */) = (data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */) - (((data->localData[0]->realVars[207] /* chwp_1.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[221] /* chwp_1.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 1097
type: SIMPLE_ASSIGN
jun_1.port_2.h_outflow = ($cse37 * chwp_1.port_a.h_outflow + $cse38 * chw_ret.ports[1].h_outflow) / ($cse37 + $cse38)
*/
void nb_hydr_static_v6_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1097};
  (data->localData[0]->realVars[328] /* jun_1.port_2.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[46] /* $cse37 variable */)) * ((data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */)) + ((data->localData[0]->realVars[47] /* $cse38 variable */)) * ((data->localData[0]->realVars[179] /* chw_ret.ports[1].h_outflow variable */)),(data->localData[0]->realVars[46] /* $cse37 variable */) + (data->localData[0]->realVars[47] /* $cse38 variable */),"$cse37 + $cse38",equationIndexes);
  TRACE_POP
}
/*
equation index: 1098
type: SIMPLE_ASSIGN
jun_2.port_3.h_outflow = checkvalve_2.port_b.h_outflow - chwp_2.prePow.Q_flow * chwp_2.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1098};
  (data->localData[0]->realVars[333] /* jun_2.port_3.h_outflow variable */) = (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */) - (((data->localData[0]->realVars[238] /* chwp_2.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[252] /* chwp_2.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 1099
type: SIMPLE_ASSIGN
checkvalve_2.state_a.T = 273.15 + 0.0002390057361376673 * checkvalve_2.port_b.h_outflow
*/
void nb_hydr_static_v6_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1099};
  (data->localData[0]->realVars[144] /* checkvalve_2.state_a.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */));
  TRACE_POP
}
/*
equation index: 1100
type: SIMPLE_ASSIGN
$cse93 = nb_hydr_static_v6.checkvalve_2.Medium.density(nb_hydr_static_v6.checkvalve_2.Medium.ThermodynamicState(checkvalve_2.port_a.p, checkvalve_2.state_a.T))
*/
void nb_hydr_static_v6_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1100};
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */);
  tmp0._T = (data->localData[0]->realVars[144] /* checkvalve_2.state_a.T variable */);
  (data->localData[0]->realVars[114] /* $cse93 variable */) = omc_nb__hydr__static__v6_checkvalve__2_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 1101
type: SIMPLE_ASSIGN
checkvalve_2.port_a.h_outflow = ($cse50 * jun_4.port_1.h_outflow + $cse44 * jun_6.port_2.h_outflow) / ($cse50 + $cse44)
*/
void nb_hydr_static_v6_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1101};
  (data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[59] /* $cse50 variable */)) * ((data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */)) + ((data->localData[0]->realVars[53] /* $cse44 variable */)) * ((data->localData[0]->realVars[341] /* jun_6.port_2.h_outflow variable */)),(data->localData[0]->realVars[59] /* $cse50 variable */) + (data->localData[0]->realVars[53] /* $cse44 variable */),"$cse50 + $cse44",equationIndexes);
  TRACE_POP
}
/*
equation index: 1102
type: SIMPLE_ASSIGN
jun_5.port_1.h_outflow = ($cse50 * jun_4.port_1.h_outflow + $cse49 * checkvalve_2.port_b.h_outflow) / ($cse50 + $cse49)
*/
void nb_hydr_static_v6_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1102};
  (data->localData[0]->realVars[338] /* jun_5.port_1.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[59] /* $cse50 variable */)) * ((data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */)) + ((data->localData[0]->realVars[58] /* $cse49 variable */)) * ((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */)),(data->localData[0]->realVars[59] /* $cse50 variable */) + (data->localData[0]->realVars[58] /* $cse49 variable */),"$cse50 + $cse49",equationIndexes);
  TRACE_POP
}
/*
equation index: 1103
type: SIMPLE_ASSIGN
checkvalve_3.port_a.h_outflow = ($cse42 * jun_5.port_1.h_outflow + $cse52 * checkvalve_4.port_b.h_outflow) / ($cse42 + $cse52)
*/
void nb_hydr_static_v6_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1103};
  (data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[51] /* $cse42 variable */)) * ((data->localData[0]->realVars[338] /* jun_5.port_1.h_outflow variable */)) + ((data->localData[0]->realVars[61] /* $cse52 variable */)) * ((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */)),(data->localData[0]->realVars[51] /* $cse42 variable */) + (data->localData[0]->realVars[61] /* $cse52 variable */),"$cse42 + $cse52",equationIndexes);
  TRACE_POP
}
/*
equation index: 1104
type: SIMPLE_ASSIGN
checkvalve_4.port_a.h_outflow = ($cse42 * jun_5.port_1.h_outflow + $cse51 * checkvalve_3.port_b.h_outflow) / ($cse42 + $cse51)
*/
void nb_hydr_static_v6_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1104};
  (data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[51] /* $cse42 variable */)) * ((data->localData[0]->realVars[338] /* jun_5.port_1.h_outflow variable */)) + ((data->localData[0]->realVars[60] /* $cse51 variable */)) * ((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */)),(data->localData[0]->realVars[51] /* $cse42 variable */) + (data->localData[0]->realVars[60] /* $cse51 variable */),"$cse42 + $cse51",equationIndexes);
  TRACE_POP
}
/*
equation index: 1105
type: SIMPLE_ASSIGN
chwp_3.port_a.h_outflow = checkvalve_3.port_a.h_outflow - chwp_3.prePow.Q_flow * chwp_3.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1105};
  (data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */) = (data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */) - (((data->localData[0]->realVars[269] /* chwp_3.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[283] /* chwp_3.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 1106
type: SIMPLE_ASSIGN
chwp_4.port_a.h_outflow = checkvalve_4.port_a.h_outflow - chwp_4.prePow.Q_flow * chwp_4.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1106};
  (data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */) = (data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */) - (((data->localData[0]->realVars[300] /* chwp_4.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[314] /* chwp_4.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 1107
type: SIMPLE_ASSIGN
jun_3.port_1.h_outflow = ($cse45 * chwp_4.port_a.h_outflow + $cse43 * chwp_3.port_a.h_outflow) / ($cse45 + $cse43)
*/
void nb_hydr_static_v6_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1107};
  (data->localData[0]->realVars[334] /* jun_3.port_1.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[54] /* $cse45 variable */)) * ((data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */)) + ((data->localData[0]->realVars[52] /* $cse43 variable */)) * ((data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */)),(data->localData[0]->realVars[54] /* $cse45 variable */) + (data->localData[0]->realVars[52] /* $cse43 variable */),"$cse45 + $cse43",equationIndexes);
  TRACE_POP
}
/*
equation index: 1108
type: SIMPLE_ASSIGN
chwp_2.port_a.h_outflow = checkvalve_2.port_a.h_outflow - chwp_2.prePow.Q_flow * chwp_2.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1108};
  (data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */) = (data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */) - (((data->localData[0]->realVars[238] /* chwp_2.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[252] /* chwp_2.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 1109
type: SIMPLE_ASSIGN
jun_2.port_2.h_outflow = ($cse40 * chwp_2.port_a.h_outflow + $cse41 * jun_1.port_2.h_outflow) / ($cse40 + $cse41)
*/
void nb_hydr_static_v6_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1109};
  (data->localData[0]->realVars[332] /* jun_2.port_2.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[49] /* $cse40 variable */)) * ((data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */)) + ((data->localData[0]->realVars[50] /* $cse41 variable */)) * ((data->localData[0]->realVars[328] /* jun_1.port_2.h_outflow variable */)),(data->localData[0]->realVars[49] /* $cse40 variable */) + (data->localData[0]->realVars[50] /* $cse41 variable */),"$cse40 + $cse41",equationIndexes);
  TRACE_POP
}
/*
equation index: 1110
type: SIMPLE_ASSIGN
jun_2.port_1.h_outflow = ($cse42 * jun_3.port_1.h_outflow + $cse40 * chwp_2.port_a.h_outflow) / ($cse42 + $cse40)
*/
void nb_hydr_static_v6_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1110};
  (data->localData[0]->realVars[330] /* jun_2.port_1.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[51] /* $cse42 variable */)) * ((data->localData[0]->realVars[334] /* jun_3.port_1.h_outflow variable */)) + ((data->localData[0]->realVars[49] /* $cse40 variable */)) * ((data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */)),(data->localData[0]->realVars[51] /* $cse42 variable */) + (data->localData[0]->realVars[49] /* $cse40 variable */),"$cse42 + $cse40",equationIndexes);
  TRACE_POP
}
/*
equation index: 1111
type: SIMPLE_ASSIGN
jun_1.port_3.h_outflow = ($cse39 * jun_2.port_1.h_outflow + $cse38 * chw_ret.ports[1].h_outflow) / ($cse39 + $cse38)
*/
void nb_hydr_static_v6_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1111};
  (data->localData[0]->realVars[329] /* jun_1.port_3.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[48] /* $cse39 variable */)) * ((data->localData[0]->realVars[330] /* jun_2.port_1.h_outflow variable */)) + ((data->localData[0]->realVars[47] /* $cse38 variable */)) * ((data->localData[0]->realVars[179] /* chw_ret.ports[1].h_outflow variable */)),(data->localData[0]->realVars[48] /* $cse39 variable */) + (data->localData[0]->realVars[47] /* $cse38 variable */),"$cse39 + $cse38",equationIndexes);
  TRACE_POP
}
/*
equation index: 1112
type: SIMPLE_ASSIGN
checkvalve_1.port_b.h_outflow = jun_1.port_3.h_outflow + chwp_1.prePow.Q_flow * chwp_1.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1112};
  (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */) = (data->localData[0]->realVars[329] /* jun_1.port_3.h_outflow variable */) + ((data->localData[0]->realVars[207] /* chwp_1.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[221] /* chwp_1.vol.steBal.m_flowInv variable */));
  TRACE_POP
}
/*
equation index: 1113
type: SIMPLE_ASSIGN
checkvalve_1.state_a.T = 273.15 + 0.0002390057361376673 * checkvalve_1.port_b.h_outflow
*/
void nb_hydr_static_v6_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1113};
  (data->localData[0]->realVars[132] /* checkvalve_1.state_a.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */));
  TRACE_POP
}
/*
equation index: 1114
type: SIMPLE_ASSIGN
$cse84 = nb_hydr_static_v6.checkvalve_1.Medium.density(nb_hydr_static_v6.checkvalve_1.Medium.ThermodynamicState(checkvalve_1.port_a.p, checkvalve_1.state_a.T))
*/
void nb_hydr_static_v6_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1114};
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */);
  tmp0._T = (data->localData[0]->realVars[132] /* checkvalve_1.state_a.T variable */);
  (data->localData[0]->realVars[103] /* $cse84 variable */) = omc_nb__hydr__static__v6_checkvalve__1_Medium_density(threadData, tmp0);
  TRACE_POP
}

void residualFunc1123(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1123};
  int i,j;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<8; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc1123: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<8; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1123 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */) = xloc[0];
  (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */) = xloc[1];
  (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */) = xloc[2];
  (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */) = xloc[3];
  (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */) = xloc[4];
  (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */) = xloc[5];
  (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */) = xloc[6];
  (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */) = xloc[7];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  nb_hydr_static_v6_eqFunction_1009(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1010(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1011(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1012(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1013(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1014(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1015(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1016(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1017(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1018(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1019(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1020(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1021(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1022(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1023(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1024(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1025(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1026(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1027(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1028(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1029(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1030(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1031(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1032(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1033(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1034(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1035(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1036(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1037(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1038(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1039(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1040(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1041(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1042(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1043(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1044(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1045(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1046(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1047(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1048(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1049(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1050(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1051(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1052(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1053(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1054(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1055(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1056(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1057(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1058(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1059(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1060(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1061(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1062(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1063(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1064(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1065(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1066(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1067(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1068(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1069(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1070(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1071(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1072(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1073(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1074(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1075(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1076(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1077(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1078(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1079(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1080(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1081(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1082(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1083(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1084(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1085(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1086(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1087(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1088(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1089(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1090(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1091(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1092(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1093(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1094(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1095(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1096(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1097(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1098(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1099(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1100(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1101(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1102(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1103(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1104(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1105(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1106(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1107(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1108(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1109(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1110(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1111(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1112(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1113(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_1114(data, threadData);
  /* body */
  tmp0 = (data->localData[0]->realVars[36] /* $cse111 variable */);
  if(!(tmp0 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt($cse111) was %g should be >= 0", tmp0);
    }
  }res[0] = ((data->localData[0]->realVars[167] /* checkvalve_4.relativeFlowCoefficient variable */)) * (((data->simulationInfo->realParameter[54] /* checkvalve_4.Av PARAM */)) * ((sqrt(tmp0)) * ((data->localData[0]->realVars[69] /* $cse60 variable */)))) - (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */);

  tmp1 = (data->localData[0]->realVars[25] /* $cse102 variable */);
  if(!(tmp1 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt($cse102) was %g should be >= 0", tmp1);
    }
  }res[1] = ((data->localData[0]->realVars[155] /* checkvalve_3.relativeFlowCoefficient variable */)) * (((data->simulationInfo->realParameter[36] /* checkvalve_3.Av PARAM */)) * ((sqrt(tmp1)) * ((data->localData[0]->realVars[68] /* $cse59 variable */)))) - (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */);

  tmp2 = (data->localData[0]->realVars[114] /* $cse93 variable */);
  if(!(tmp2 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt($cse93) was %g should be >= 0", tmp2);
    }
  }res[2] = ((data->localData[0]->realVars[143] /* checkvalve_2.relativeFlowCoefficient variable */)) * (((data->simulationInfo->realParameter[18] /* checkvalve_2.Av PARAM */)) * ((sqrt(tmp2)) * ((data->localData[0]->realVars[67] /* $cse58 variable */)))) - (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */);

  tmp3 = (data->localData[0]->realVars[103] /* $cse84 variable */);
  if(!(tmp3 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt($cse84) was %g should be >= 0", tmp3);
    }
  }res[3] = ((data->localData[0]->realVars[131] /* checkvalve_1.relativeFlowCoefficient variable */)) * (((data->simulationInfo->realParameter[0] /* checkvalve_1.Av PARAM */)) * ((sqrt(tmp3)) * ((data->localData[0]->realVars[66] /* $cse57 variable */)))) - (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */);

  res[4] = ((data->localData[0]->realVars[51] /* $cse42 variable */)) * ((data->localData[0]->realVars[334] /* jun_3.port_1.h_outflow variable */)) + ((data->localData[0]->realVars[50] /* $cse41 variable */)) * ((data->localData[0]->realVars[328] /* jun_1.port_2.h_outflow variable */)) - (((data->localData[0]->realVars[333] /* jun_2.port_3.h_outflow variable */)) * ((data->localData[0]->realVars[51] /* $cse42 variable */) + (data->localData[0]->realVars[50] /* $cse41 variable */)));

  res[5] = ((data->localData[0]->realVars[52] /* $cse43 variable */)) * ((data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */)) + ((data->localData[0]->realVars[53] /* $cse44 variable */)) * ((data->localData[0]->realVars[332] /* jun_2.port_2.h_outflow variable */)) - (((data->localData[0]->realVars[335] /* jun_3.port_2.h_outflow variable */)) * ((data->localData[0]->realVars[52] /* $cse43 variable */) + (data->localData[0]->realVars[53] /* $cse44 variable */)));

  res[6] = ((data->localData[0]->realVars[54] /* $cse45 variable */)) * ((data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */)) + ((data->localData[0]->realVars[53] /* $cse44 variable */)) * ((data->localData[0]->realVars[332] /* jun_2.port_2.h_outflow variable */)) - (((data->localData[0]->realVars[336] /* jun_3.port_3.h_outflow variable */)) * ((data->localData[0]->realVars[54] /* $cse45 variable */) + (data->localData[0]->realVars[53] /* $cse44 variable */)));

  res[7] = ((data->localData[0]->realVars[57] /* $cse48 variable */)) * ((data->localData[0]->realVars[184] /* chw_sup.ports[2].h_outflow variable */)) + ((data->localData[0]->realVars[55] /* $cse46 variable */)) * ((data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */)) - (((data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */)) * ((data->localData[0]->realVars[57] /* $cse48 variable */) + (data->localData[0]->realVars[55] /* $cse46 variable */)));
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1123(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+8] = {0,5,6,6,6,8,8,8,8};
  const int rowIndex[55] = {3,4,5,6,7,2,3,4,5,6,7,1,3,4,5,6,7,0,3,4,5,6,7,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(8, 55, 8);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (8+1)*sizeof(unsigned int));
  
  for(i=2;i<8+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 55*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {7};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {6};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {5};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
  
  /* color 6 with 1 columns */
  const int indices_6[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_6[i]] = 6;
  
  /* color 7 with 1 columns */
  const int indices_7[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_7[i]] = 7;
  
  /* color 8 with 1 columns */
  const int indices_8[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_8[i]] = 8;
}
void initializeNonlinearPatternNLS1123(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1123(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for jun_4.port_1.h_outflow */
  sysData->nominal[i] = data->modelData->realVarsData[337].attribute /* jun_4.port_1.h_outflow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[337].attribute /* jun_4.port_1.h_outflow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[337].attribute /* jun_4.port_1.h_outflow */.max;
  /* static nls data for checkvalve_2.port_b.h_outflow */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* checkvalve_2.port_b.h_outflow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* checkvalve_2.port_b.h_outflow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* checkvalve_2.port_b.h_outflow */.max;
  /* static nls data for checkvalve_3.port_b.h_outflow */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* checkvalve_3.port_b.h_outflow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* checkvalve_3.port_b.h_outflow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* checkvalve_3.port_b.h_outflow */.max;
  /* static nls data for checkvalve_4.port_b.h_outflow */
  sysData->nominal[i] = data->modelData->realVarsData[164].attribute /* checkvalve_4.port_b.h_outflow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[164].attribute /* checkvalve_4.port_b.h_outflow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[164].attribute /* checkvalve_4.port_b.h_outflow */.max;
  /* static nls data for chiller_1.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[171].attribute /* chiller_1.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[171].attribute /* chiller_1.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[171].attribute /* chiller_1.m_flow */.max;
  /* static nls data for chiller_3.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[175].attribute /* chiller_3.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[175].attribute /* chiller_3.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[175].attribute /* chiller_3.m_flow */.max;
  /* static nls data for chiller_4.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[177].attribute /* chiller_4.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[177].attribute /* chiller_4.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[177].attribute /* chiller_4.m_flow */.max;
  /* static nls data for chiller_2.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[173].attribute /* chiller_2.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[173].attribute /* chiller_2.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[173].attribute /* chiller_2.m_flow */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1123(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1123(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS1123(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */);
  array[1] = (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */);
  array[2] = (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */);
  array[3] = (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */);
  array[4] = (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */);
  array[5] = (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */);
  array[6] = (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */);
  array[7] = (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void nb_hydr_static_v6_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 1123;
  nonLinearSystemData[1].size = 8;
  nonLinearSystemData[1].homotopySupport = 0 /* false */;
  nonLinearSystemData[1].mixedSystem = 1 /* true */;
  nonLinearSystemData[1].residualFunc = residualFunc1123;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS1123;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS1123;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 181;
  nonLinearSystemData[0].size = 8;
  nonLinearSystemData[0].homotopySupport = 1 /* true */;
  nonLinearSystemData[0].mixedSystem = 1 /* true */;
  nonLinearSystemData[0].residualFunc = residualFunc181;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS181;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS181;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

