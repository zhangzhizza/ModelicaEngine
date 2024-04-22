/* Jacobians 8 */
#include "nb_hydr_static_v6_model.h"
#include "nb_hydr_static_v6_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 600
type: SIMPLE_ASSIGN
$cse1 = $DER$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure(0.577, 1.0, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]}), 0.0, 0.0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 0.0, 0.0, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}))
*/
void nb_hydr_static_v6_eqFunction_600(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,600};
  real_array tmp0;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp1;
  real_array tmp2;
  real_array tmp3;
  real_array tmp4;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp5;
  real_array tmp6;
  real_array tmp7;
  real_array_create(&tmp0, ((modelica_real*)&((data->simulationInfo->realParameter[384] /* chwp_1.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp2, 19, (modelica_real)(data->simulationInfo->realParameter[243] /* chwp_1.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp3, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[263] /* chwp_1.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[264] /* chwp_1.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[265] /* chwp_1.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[266] /* chwp_1.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[267] /* chwp_1.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[268] /* chwp_1.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[269] /* chwp_1.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[270] /* chwp_1.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[271] /* chwp_1.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[272] /* chwp_1.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[273] /* chwp_1.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[274] /* chwp_1.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[275] /* chwp_1.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[276] /* chwp_1.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[277] /* chwp_1.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[278] /* chwp_1.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[279] /* chwp_1.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[280] /* chwp_1.eff.pCur3.dp[19] PARAM */));
  tmp1._n = ((modelica_integer) 19);
  tmp1._V_flow = tmp2;
  tmp1._dp = tmp3;
  array_alloc_scalar_real_array(&tmp4, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp6, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp7, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  tmp5._n = ((modelica_integer) 0);
  tmp5._V_flow = tmp6;
  tmp5._dp = tmp7;
  jacobian->tmpVars[19] /* $cse1 JACOBIAN_TMP_VAR */ = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, 0.577, 1.0, tmp0, 909154.9295774648, 0.5770020020020019, tmp1, 0.0, 0.0, tmp4, 0.0, 0.0, tmp5);
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
$cse2 = $DER$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure((1.0 + chwp_1.eff.delta) * 0.577, 1.0, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]}), 0.0, 0.0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 0.0, 0.0, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}))
*/
void nb_hydr_static_v6_eqFunction_601(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,601};
  real_array tmp8;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp9;
  real_array tmp10;
  real_array tmp11;
  real_array tmp12;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp13;
  real_array tmp14;
  real_array tmp15;
  real_array_create(&tmp8, ((modelica_real*)&((data->simulationInfo->realParameter[384] /* chwp_1.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp10, 19, (modelica_real)(data->simulationInfo->realParameter[243] /* chwp_1.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp11, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[263] /* chwp_1.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[264] /* chwp_1.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[265] /* chwp_1.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[266] /* chwp_1.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[267] /* chwp_1.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[268] /* chwp_1.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[269] /* chwp_1.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[270] /* chwp_1.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[271] /* chwp_1.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[272] /* chwp_1.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[273] /* chwp_1.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[274] /* chwp_1.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[275] /* chwp_1.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[276] /* chwp_1.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[277] /* chwp_1.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[278] /* chwp_1.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[279] /* chwp_1.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[280] /* chwp_1.eff.pCur3.dp[19] PARAM */));
  tmp9._n = ((modelica_integer) 19);
  tmp9._V_flow = tmp10;
  tmp9._dp = tmp11;
  array_alloc_scalar_real_array(&tmp12, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp14, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp15, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  tmp13._n = ((modelica_integer) 0);
  tmp13._V_flow = tmp14;
  tmp13._dp = tmp15;
  jacobian->tmpVars[18] /* $cse2 JACOBIAN_TMP_VAR */ = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, (1.0 + (data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */)) * (0.577), 1.0, tmp8, 909154.9295774648, 0.5770020020020019, tmp9, 0.0, 0.0, tmp12, 0.0, 0.0, tmp13);
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
$cse3 = $DER$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure((1.0 - chwp_1.eff.delta) * 0.577, 1.0, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]}), 0.0, 0.0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 0.0, 0.0, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}))
*/
void nb_hydr_static_v6_eqFunction_602(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,602};
  real_array tmp16;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp17;
  real_array tmp18;
  real_array tmp19;
  real_array tmp20;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp21;
  real_array tmp22;
  real_array tmp23;
  real_array_create(&tmp16, ((modelica_real*)&((data->simulationInfo->realParameter[384] /* chwp_1.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp18, 19, (modelica_real)(data->simulationInfo->realParameter[243] /* chwp_1.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp19, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[263] /* chwp_1.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[264] /* chwp_1.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[265] /* chwp_1.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[266] /* chwp_1.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[267] /* chwp_1.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[268] /* chwp_1.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[269] /* chwp_1.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[270] /* chwp_1.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[271] /* chwp_1.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[272] /* chwp_1.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[273] /* chwp_1.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[274] /* chwp_1.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[275] /* chwp_1.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[276] /* chwp_1.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[277] /* chwp_1.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[278] /* chwp_1.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[279] /* chwp_1.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[280] /* chwp_1.eff.pCur3.dp[19] PARAM */));
  tmp17._n = ((modelica_integer) 19);
  tmp17._V_flow = tmp18;
  tmp17._dp = tmp19;
  array_alloc_scalar_real_array(&tmp20, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp22, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp23, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  tmp21._n = ((modelica_integer) 0);
  tmp21._V_flow = tmp22;
  tmp21._dp = tmp23;
  jacobian->tmpVars[17] /* $cse3 JACOBIAN_TMP_VAR */ = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, (1.0 - (data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */)) * (0.577), 1.0, tmp16, 909154.9295774648, 0.5770020020020019, tmp17, 0.0, 0.0, tmp20, 0.0, 0.0, tmp21);
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
$cse4 = Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 + chwp_1.eff.delta) * 0.577, 1.0, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]}))
*/
void nb_hydr_static_v6_eqFunction_603(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,603};
  real_array tmp24;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp25;
  real_array tmp26;
  real_array tmp27;
  real_array_create(&tmp24, ((modelica_real*)&((data->simulationInfo->realParameter[384] /* chwp_1.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp26, 19, (modelica_real)(data->simulationInfo->realParameter[243] /* chwp_1.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp27, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[263] /* chwp_1.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[264] /* chwp_1.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[265] /* chwp_1.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[266] /* chwp_1.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[267] /* chwp_1.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[268] /* chwp_1.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[269] /* chwp_1.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[270] /* chwp_1.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[271] /* chwp_1.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[272] /* chwp_1.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[273] /* chwp_1.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[274] /* chwp_1.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[275] /* chwp_1.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[276] /* chwp_1.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[277] /* chwp_1.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[278] /* chwp_1.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[279] /* chwp_1.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[280] /* chwp_1.eff.pCur3.dp[19] PARAM */));
  tmp25._n = ((modelica_integer) 19);
  tmp25._V_flow = tmp26;
  tmp25._dp = tmp27;
  jacobian->tmpVars[16] /* $cse4 JACOBIAN_TMP_VAR */ = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 + (data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */)) * (0.577), 1.0, tmp24, 909154.9295774648, 0.5770020020020019, tmp25);
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
$cse5 = Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 - chwp_1.eff.delta) * 0.577, 1.0, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]}))
*/
void nb_hydr_static_v6_eqFunction_604(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,604};
  real_array tmp28;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp29;
  real_array tmp30;
  real_array tmp31;
  real_array_create(&tmp28, ((modelica_real*)&((data->simulationInfo->realParameter[384] /* chwp_1.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp30, 19, (modelica_real)(data->simulationInfo->realParameter[243] /* chwp_1.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp31, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[263] /* chwp_1.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[264] /* chwp_1.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[265] /* chwp_1.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[266] /* chwp_1.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[267] /* chwp_1.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[268] /* chwp_1.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[269] /* chwp_1.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[270] /* chwp_1.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[271] /* chwp_1.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[272] /* chwp_1.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[273] /* chwp_1.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[274] /* chwp_1.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[275] /* chwp_1.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[276] /* chwp_1.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[277] /* chwp_1.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[278] /* chwp_1.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[279] /* chwp_1.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[280] /* chwp_1.eff.pCur3.dp[19] PARAM */));
  tmp29._n = ((modelica_integer) 19);
  tmp29._V_flow = tmp30;
  tmp29._dp = tmp31;
  jacobian->tmpVars[15] /* $cse5 JACOBIAN_TMP_VAR */ = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 - (data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */)) * (0.577), 1.0, tmp28, 909154.9295774648, 0.5770020020020019, tmp29);
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
$cse6 = $DER$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure(0.577, 1.0, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]}), 0.0, 0.0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 0.0, 0.0, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}))
*/
void nb_hydr_static_v6_eqFunction_605(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,605};
  real_array tmp32;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp33;
  real_array tmp34;
  real_array tmp35;
  real_array tmp36;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp37;
  real_array tmp38;
  real_array tmp39;
  real_array_create(&tmp32, ((modelica_real*)&((data->simulationInfo->realParameter[765] /* chwp_2.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp34, 19, (modelica_real)(data->simulationInfo->realParameter[624] /* chwp_2.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp35, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[644] /* chwp_2.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[645] /* chwp_2.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[646] /* chwp_2.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[647] /* chwp_2.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[648] /* chwp_2.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[649] /* chwp_2.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[650] /* chwp_2.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[651] /* chwp_2.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[652] /* chwp_2.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[653] /* chwp_2.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[654] /* chwp_2.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[655] /* chwp_2.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[656] /* chwp_2.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[657] /* chwp_2.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[658] /* chwp_2.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[659] /* chwp_2.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[660] /* chwp_2.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[661] /* chwp_2.eff.pCur3.dp[19] PARAM */));
  tmp33._n = ((modelica_integer) 19);
  tmp33._V_flow = tmp34;
  tmp33._dp = tmp35;
  array_alloc_scalar_real_array(&tmp36, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp38, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp39, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  tmp37._n = ((modelica_integer) 0);
  tmp37._V_flow = tmp38;
  tmp37._dp = tmp39;
  jacobian->tmpVars[14] /* $cse6 JACOBIAN_TMP_VAR */ = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, 0.577, 1.0, tmp32, 909154.9295774648, 0.5770020020020019, tmp33, 0.0, 0.0, tmp36, 0.0, 0.0, tmp37);
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
$cse7 = $DER$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure((1.0 + chwp_2.eff.delta) * 0.577, 1.0, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]}), 0.0, 0.0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 0.0, 0.0, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}))
*/
void nb_hydr_static_v6_eqFunction_606(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,606};
  real_array tmp40;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp41;
  real_array tmp42;
  real_array tmp43;
  real_array tmp44;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp45;
  real_array tmp46;
  real_array tmp47;
  real_array_create(&tmp40, ((modelica_real*)&((data->simulationInfo->realParameter[765] /* chwp_2.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp42, 19, (modelica_real)(data->simulationInfo->realParameter[624] /* chwp_2.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp43, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[644] /* chwp_2.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[645] /* chwp_2.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[646] /* chwp_2.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[647] /* chwp_2.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[648] /* chwp_2.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[649] /* chwp_2.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[650] /* chwp_2.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[651] /* chwp_2.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[652] /* chwp_2.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[653] /* chwp_2.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[654] /* chwp_2.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[655] /* chwp_2.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[656] /* chwp_2.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[657] /* chwp_2.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[658] /* chwp_2.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[659] /* chwp_2.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[660] /* chwp_2.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[661] /* chwp_2.eff.pCur3.dp[19] PARAM */));
  tmp41._n = ((modelica_integer) 19);
  tmp41._V_flow = tmp42;
  tmp41._dp = tmp43;
  array_alloc_scalar_real_array(&tmp44, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp46, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp47, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  tmp45._n = ((modelica_integer) 0);
  tmp45._V_flow = tmp46;
  tmp45._dp = tmp47;
  jacobian->tmpVars[13] /* $cse7 JACOBIAN_TMP_VAR */ = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, (1.0 + (data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */)) * (0.577), 1.0, tmp40, 909154.9295774648, 0.5770020020020019, tmp41, 0.0, 0.0, tmp44, 0.0, 0.0, tmp45);
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
$cse8 = $DER$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure((1.0 - chwp_2.eff.delta) * 0.577, 1.0, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]}), 0.0, 0.0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 0.0, 0.0, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}))
*/
void nb_hydr_static_v6_eqFunction_607(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,607};
  real_array tmp48;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp49;
  real_array tmp50;
  real_array tmp51;
  real_array tmp52;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp53;
  real_array tmp54;
  real_array tmp55;
  real_array_create(&tmp48, ((modelica_real*)&((data->simulationInfo->realParameter[765] /* chwp_2.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp50, 19, (modelica_real)(data->simulationInfo->realParameter[624] /* chwp_2.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp51, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[644] /* chwp_2.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[645] /* chwp_2.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[646] /* chwp_2.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[647] /* chwp_2.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[648] /* chwp_2.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[649] /* chwp_2.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[650] /* chwp_2.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[651] /* chwp_2.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[652] /* chwp_2.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[653] /* chwp_2.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[654] /* chwp_2.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[655] /* chwp_2.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[656] /* chwp_2.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[657] /* chwp_2.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[658] /* chwp_2.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[659] /* chwp_2.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[660] /* chwp_2.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[661] /* chwp_2.eff.pCur3.dp[19] PARAM */));
  tmp49._n = ((modelica_integer) 19);
  tmp49._V_flow = tmp50;
  tmp49._dp = tmp51;
  array_alloc_scalar_real_array(&tmp52, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp54, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp55, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  tmp53._n = ((modelica_integer) 0);
  tmp53._V_flow = tmp54;
  tmp53._dp = tmp55;
  jacobian->tmpVars[12] /* $cse8 JACOBIAN_TMP_VAR */ = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, (1.0 - (data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */)) * (0.577), 1.0, tmp48, 909154.9295774648, 0.5770020020020019, tmp49, 0.0, 0.0, tmp52, 0.0, 0.0, tmp53);
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
$cse9 = Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 + chwp_2.eff.delta) * 0.577, 1.0, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]}))
*/
void nb_hydr_static_v6_eqFunction_608(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,608};
  real_array tmp56;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp57;
  real_array tmp58;
  real_array tmp59;
  real_array_create(&tmp56, ((modelica_real*)&((data->simulationInfo->realParameter[765] /* chwp_2.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp58, 19, (modelica_real)(data->simulationInfo->realParameter[624] /* chwp_2.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp59, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[644] /* chwp_2.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[645] /* chwp_2.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[646] /* chwp_2.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[647] /* chwp_2.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[648] /* chwp_2.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[649] /* chwp_2.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[650] /* chwp_2.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[651] /* chwp_2.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[652] /* chwp_2.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[653] /* chwp_2.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[654] /* chwp_2.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[655] /* chwp_2.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[656] /* chwp_2.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[657] /* chwp_2.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[658] /* chwp_2.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[659] /* chwp_2.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[660] /* chwp_2.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[661] /* chwp_2.eff.pCur3.dp[19] PARAM */));
  tmp57._n = ((modelica_integer) 19);
  tmp57._V_flow = tmp58;
  tmp57._dp = tmp59;
  jacobian->tmpVars[11] /* $cse9 JACOBIAN_TMP_VAR */ = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 + (data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */)) * (0.577), 1.0, tmp56, 909154.9295774648, 0.5770020020020019, tmp57);
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
$cse10 = Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 - chwp_2.eff.delta) * 0.577, 1.0, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]}))
*/
void nb_hydr_static_v6_eqFunction_609(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,609};
  real_array tmp60;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp61;
  real_array tmp62;
  real_array tmp63;
  real_array_create(&tmp60, ((modelica_real*)&((data->simulationInfo->realParameter[765] /* chwp_2.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp62, 19, (modelica_real)(data->simulationInfo->realParameter[624] /* chwp_2.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp63, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[644] /* chwp_2.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[645] /* chwp_2.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[646] /* chwp_2.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[647] /* chwp_2.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[648] /* chwp_2.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[649] /* chwp_2.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[650] /* chwp_2.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[651] /* chwp_2.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[652] /* chwp_2.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[653] /* chwp_2.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[654] /* chwp_2.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[655] /* chwp_2.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[656] /* chwp_2.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[657] /* chwp_2.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[658] /* chwp_2.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[659] /* chwp_2.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[660] /* chwp_2.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[661] /* chwp_2.eff.pCur3.dp[19] PARAM */));
  tmp61._n = ((modelica_integer) 19);
  tmp61._V_flow = tmp62;
  tmp61._dp = tmp63;
  jacobian->tmpVars[10] /* $cse10 JACOBIAN_TMP_VAR */ = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 - (data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */)) * (0.577), 1.0, tmp60, 909154.9295774648, 0.5770020020020019, tmp61);
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
$cse11 = $DER$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure(0.577, 1.0, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]}), 0.0, 0.0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 0.0, 0.0, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}))
*/
void nb_hydr_static_v6_eqFunction_610(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,610};
  real_array tmp64;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp65;
  real_array tmp66;
  real_array tmp67;
  real_array tmp68;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp69;
  real_array tmp70;
  real_array tmp71;
  real_array_create(&tmp64, ((modelica_real*)&((data->simulationInfo->realParameter[1148] /* chwp_3.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp66, 19, (modelica_real)(data->simulationInfo->realParameter[1007] /* chwp_3.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp67, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1027] /* chwp_3.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1028] /* chwp_3.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1029] /* chwp_3.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1030] /* chwp_3.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1031] /* chwp_3.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1032] /* chwp_3.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1033] /* chwp_3.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1034] /* chwp_3.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1035] /* chwp_3.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1036] /* chwp_3.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1037] /* chwp_3.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1038] /* chwp_3.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1039] /* chwp_3.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1040] /* chwp_3.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1041] /* chwp_3.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1042] /* chwp_3.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1043] /* chwp_3.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1044] /* chwp_3.eff.pCur3.dp[19] PARAM */));
  tmp65._n = ((modelica_integer) 19);
  tmp65._V_flow = tmp66;
  tmp65._dp = tmp67;
  array_alloc_scalar_real_array(&tmp68, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp70, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp71, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  tmp69._n = ((modelica_integer) 0);
  tmp69._V_flow = tmp70;
  tmp69._dp = tmp71;
  jacobian->tmpVars[9] /* $cse11 JACOBIAN_TMP_VAR */ = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, 0.577, 1.0, tmp64, 909154.9295774648, 0.5770020020020019, tmp65, 0.0, 0.0, tmp68, 0.0, 0.0, tmp69);
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
$cse12 = $DER$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure((1.0 + chwp_3.eff.delta) * 0.577, 1.0, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]}), 0.0, 0.0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 0.0, 0.0, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}))
*/
void nb_hydr_static_v6_eqFunction_611(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,611};
  real_array tmp72;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp73;
  real_array tmp74;
  real_array tmp75;
  real_array tmp76;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp77;
  real_array tmp78;
  real_array tmp79;
  real_array_create(&tmp72, ((modelica_real*)&((data->simulationInfo->realParameter[1148] /* chwp_3.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp74, 19, (modelica_real)(data->simulationInfo->realParameter[1007] /* chwp_3.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp75, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1027] /* chwp_3.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1028] /* chwp_3.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1029] /* chwp_3.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1030] /* chwp_3.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1031] /* chwp_3.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1032] /* chwp_3.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1033] /* chwp_3.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1034] /* chwp_3.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1035] /* chwp_3.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1036] /* chwp_3.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1037] /* chwp_3.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1038] /* chwp_3.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1039] /* chwp_3.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1040] /* chwp_3.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1041] /* chwp_3.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1042] /* chwp_3.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1043] /* chwp_3.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1044] /* chwp_3.eff.pCur3.dp[19] PARAM */));
  tmp73._n = ((modelica_integer) 19);
  tmp73._V_flow = tmp74;
  tmp73._dp = tmp75;
  array_alloc_scalar_real_array(&tmp76, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp78, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp79, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  tmp77._n = ((modelica_integer) 0);
  tmp77._V_flow = tmp78;
  tmp77._dp = tmp79;
  jacobian->tmpVars[8] /* $cse12 JACOBIAN_TMP_VAR */ = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, (1.0 + (data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */)) * (0.577), 1.0, tmp72, 909154.9295774648, 0.5770020020020019, tmp73, 0.0, 0.0, tmp76, 0.0, 0.0, tmp77);
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
$cse13 = $DER$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure((1.0 - chwp_3.eff.delta) * 0.577, 1.0, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]}), 0.0, 0.0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 0.0, 0.0, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}))
*/
void nb_hydr_static_v6_eqFunction_612(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,612};
  real_array tmp80;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp81;
  real_array tmp82;
  real_array tmp83;
  real_array tmp84;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp85;
  real_array tmp86;
  real_array tmp87;
  real_array_create(&tmp80, ((modelica_real*)&((data->simulationInfo->realParameter[1148] /* chwp_3.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp82, 19, (modelica_real)(data->simulationInfo->realParameter[1007] /* chwp_3.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp83, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1027] /* chwp_3.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1028] /* chwp_3.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1029] /* chwp_3.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1030] /* chwp_3.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1031] /* chwp_3.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1032] /* chwp_3.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1033] /* chwp_3.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1034] /* chwp_3.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1035] /* chwp_3.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1036] /* chwp_3.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1037] /* chwp_3.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1038] /* chwp_3.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1039] /* chwp_3.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1040] /* chwp_3.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1041] /* chwp_3.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1042] /* chwp_3.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1043] /* chwp_3.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1044] /* chwp_3.eff.pCur3.dp[19] PARAM */));
  tmp81._n = ((modelica_integer) 19);
  tmp81._V_flow = tmp82;
  tmp81._dp = tmp83;
  array_alloc_scalar_real_array(&tmp84, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp86, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp87, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  tmp85._n = ((modelica_integer) 0);
  tmp85._V_flow = tmp86;
  tmp85._dp = tmp87;
  jacobian->tmpVars[7] /* $cse13 JACOBIAN_TMP_VAR */ = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, (1.0 - (data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */)) * (0.577), 1.0, tmp80, 909154.9295774648, 0.5770020020020019, tmp81, 0.0, 0.0, tmp84, 0.0, 0.0, tmp85);
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
$cse14 = Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 + chwp_3.eff.delta) * 0.577, 1.0, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]}))
*/
void nb_hydr_static_v6_eqFunction_613(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,613};
  real_array tmp88;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp89;
  real_array tmp90;
  real_array tmp91;
  real_array_create(&tmp88, ((modelica_real*)&((data->simulationInfo->realParameter[1148] /* chwp_3.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp90, 19, (modelica_real)(data->simulationInfo->realParameter[1007] /* chwp_3.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp91, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1027] /* chwp_3.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1028] /* chwp_3.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1029] /* chwp_3.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1030] /* chwp_3.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1031] /* chwp_3.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1032] /* chwp_3.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1033] /* chwp_3.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1034] /* chwp_3.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1035] /* chwp_3.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1036] /* chwp_3.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1037] /* chwp_3.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1038] /* chwp_3.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1039] /* chwp_3.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1040] /* chwp_3.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1041] /* chwp_3.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1042] /* chwp_3.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1043] /* chwp_3.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1044] /* chwp_3.eff.pCur3.dp[19] PARAM */));
  tmp89._n = ((modelica_integer) 19);
  tmp89._V_flow = tmp90;
  tmp89._dp = tmp91;
  jacobian->tmpVars[6] /* $cse14 JACOBIAN_TMP_VAR */ = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 + (data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */)) * (0.577), 1.0, tmp88, 909154.9295774648, 0.5770020020020019, tmp89);
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
$cse15 = Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 - chwp_3.eff.delta) * 0.577, 1.0, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]}))
*/
void nb_hydr_static_v6_eqFunction_614(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,614};
  real_array tmp92;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp93;
  real_array tmp94;
  real_array tmp95;
  real_array_create(&tmp92, ((modelica_real*)&((data->simulationInfo->realParameter[1148] /* chwp_3.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp94, 19, (modelica_real)(data->simulationInfo->realParameter[1007] /* chwp_3.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp95, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1027] /* chwp_3.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1028] /* chwp_3.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1029] /* chwp_3.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1030] /* chwp_3.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1031] /* chwp_3.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1032] /* chwp_3.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1033] /* chwp_3.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1034] /* chwp_3.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1035] /* chwp_3.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1036] /* chwp_3.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1037] /* chwp_3.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1038] /* chwp_3.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1039] /* chwp_3.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1040] /* chwp_3.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1041] /* chwp_3.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1042] /* chwp_3.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1043] /* chwp_3.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1044] /* chwp_3.eff.pCur3.dp[19] PARAM */));
  tmp93._n = ((modelica_integer) 19);
  tmp93._V_flow = tmp94;
  tmp93._dp = tmp95;
  jacobian->tmpVars[5] /* $cse15 JACOBIAN_TMP_VAR */ = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 - (data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */)) * (0.577), 1.0, tmp92, 909154.9295774648, 0.5770020020020019, tmp93);
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
$cse16 = $DER$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure(0.577, 1.0, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]}), 0.0, 0.0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 0.0, 0.0, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}))
*/
void nb_hydr_static_v6_eqFunction_615(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,615};
  real_array tmp96;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp97;
  real_array tmp98;
  real_array tmp99;
  real_array tmp100;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp101;
  real_array tmp102;
  real_array tmp103;
  real_array_create(&tmp96, ((modelica_real*)&((data->simulationInfo->realParameter[1531] /* chwp_4.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp98, 19, (modelica_real)(data->simulationInfo->realParameter[1390] /* chwp_4.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp99, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1410] /* chwp_4.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1411] /* chwp_4.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1412] /* chwp_4.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1413] /* chwp_4.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1414] /* chwp_4.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1415] /* chwp_4.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1416] /* chwp_4.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1417] /* chwp_4.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1418] /* chwp_4.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1419] /* chwp_4.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1420] /* chwp_4.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1421] /* chwp_4.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1422] /* chwp_4.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1423] /* chwp_4.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1424] /* chwp_4.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1425] /* chwp_4.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1426] /* chwp_4.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1427] /* chwp_4.eff.pCur3.dp[19] PARAM */));
  tmp97._n = ((modelica_integer) 19);
  tmp97._V_flow = tmp98;
  tmp97._dp = tmp99;
  array_alloc_scalar_real_array(&tmp100, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp102, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp103, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  tmp101._n = ((modelica_integer) 0);
  tmp101._V_flow = tmp102;
  tmp101._dp = tmp103;
  jacobian->tmpVars[4] /* $cse16 JACOBIAN_TMP_VAR */ = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, 0.577, 1.0, tmp96, 909154.9295774648, 0.5770020020020019, tmp97, 0.0, 0.0, tmp100, 0.0, 0.0, tmp101);
  TRACE_POP
}

/*
equation index: 616
type: SIMPLE_ASSIGN
$cse17 = $DER$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure((1.0 + chwp_4.eff.delta) * 0.577, 1.0, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]}), 0.0, 0.0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 0.0, 0.0, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}))
*/
void nb_hydr_static_v6_eqFunction_616(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,616};
  real_array tmp104;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp105;
  real_array tmp106;
  real_array tmp107;
  real_array tmp108;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp109;
  real_array tmp110;
  real_array tmp111;
  real_array_create(&tmp104, ((modelica_real*)&((data->simulationInfo->realParameter[1531] /* chwp_4.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp106, 19, (modelica_real)(data->simulationInfo->realParameter[1390] /* chwp_4.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp107, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1410] /* chwp_4.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1411] /* chwp_4.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1412] /* chwp_4.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1413] /* chwp_4.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1414] /* chwp_4.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1415] /* chwp_4.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1416] /* chwp_4.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1417] /* chwp_4.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1418] /* chwp_4.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1419] /* chwp_4.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1420] /* chwp_4.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1421] /* chwp_4.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1422] /* chwp_4.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1423] /* chwp_4.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1424] /* chwp_4.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1425] /* chwp_4.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1426] /* chwp_4.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1427] /* chwp_4.eff.pCur3.dp[19] PARAM */));
  tmp105._n = ((modelica_integer) 19);
  tmp105._V_flow = tmp106;
  tmp105._dp = tmp107;
  array_alloc_scalar_real_array(&tmp108, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp110, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp111, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  tmp109._n = ((modelica_integer) 0);
  tmp109._V_flow = tmp110;
  tmp109._dp = tmp111;
  jacobian->tmpVars[3] /* $cse17 JACOBIAN_TMP_VAR */ = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, (1.0 + (data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */)) * (0.577), 1.0, tmp104, 909154.9295774648, 0.5770020020020019, tmp105, 0.0, 0.0, tmp108, 0.0, 0.0, tmp109);
  TRACE_POP
}

/*
equation index: 617
type: SIMPLE_ASSIGN
$cse18 = $DER$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure((1.0 - chwp_4.eff.delta) * 0.577, 1.0, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]}), 0.0, 0.0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 0.0, 0.0, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(0, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}))
*/
void nb_hydr_static_v6_eqFunction_617(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,617};
  real_array tmp112;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp113;
  real_array tmp114;
  real_array tmp115;
  real_array tmp116;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp117;
  real_array tmp118;
  real_array tmp119;
  real_array_create(&tmp112, ((modelica_real*)&((data->simulationInfo->realParameter[1531] /* chwp_4.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp114, 19, (modelica_real)(data->simulationInfo->realParameter[1390] /* chwp_4.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp115, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1410] /* chwp_4.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1411] /* chwp_4.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1412] /* chwp_4.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1413] /* chwp_4.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1414] /* chwp_4.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1415] /* chwp_4.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1416] /* chwp_4.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1417] /* chwp_4.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1418] /* chwp_4.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1419] /* chwp_4.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1420] /* chwp_4.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1421] /* chwp_4.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1422] /* chwp_4.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1423] /* chwp_4.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1424] /* chwp_4.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1425] /* chwp_4.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1426] /* chwp_4.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1427] /* chwp_4.eff.pCur3.dp[19] PARAM */));
  tmp113._n = ((modelica_integer) 19);
  tmp113._V_flow = tmp114;
  tmp113._dp = tmp115;
  array_alloc_scalar_real_array(&tmp116, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp118, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp119, 19, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  tmp117._n = ((modelica_integer) 0);
  tmp117._V_flow = tmp118;
  tmp117._dp = tmp119;
  jacobian->tmpVars[2] /* $cse18 JACOBIAN_TMP_VAR */ = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, (1.0 - (data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */)) * (0.577), 1.0, tmp112, 909154.9295774648, 0.5770020020020019, tmp113, 0.0, 0.0, tmp116, 0.0, 0.0, tmp117);
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
$cse19 = Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 + chwp_4.eff.delta) * 0.577, 1.0, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]}))
*/
void nb_hydr_static_v6_eqFunction_618(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,618};
  real_array tmp120;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp121;
  real_array tmp122;
  real_array tmp123;
  real_array_create(&tmp120, ((modelica_real*)&((data->simulationInfo->realParameter[1531] /* chwp_4.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp122, 19, (modelica_real)(data->simulationInfo->realParameter[1390] /* chwp_4.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp123, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1410] /* chwp_4.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1411] /* chwp_4.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1412] /* chwp_4.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1413] /* chwp_4.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1414] /* chwp_4.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1415] /* chwp_4.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1416] /* chwp_4.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1417] /* chwp_4.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1418] /* chwp_4.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1419] /* chwp_4.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1420] /* chwp_4.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1421] /* chwp_4.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1422] /* chwp_4.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1423] /* chwp_4.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1424] /* chwp_4.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1425] /* chwp_4.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1426] /* chwp_4.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1427] /* chwp_4.eff.pCur3.dp[19] PARAM */));
  tmp121._n = ((modelica_integer) 19);
  tmp121._V_flow = tmp122;
  tmp121._dp = tmp123;
  jacobian->tmpVars[1] /* $cse19 JACOBIAN_TMP_VAR */ = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 + (data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */)) * (0.577), 1.0, tmp120, 909154.9295774648, 0.5770020020020019, tmp121);
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
$cse20 = Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 - chwp_4.eff.delta) * 0.577, 1.0, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]}))
*/
void nb_hydr_static_v6_eqFunction_619(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,619};
  real_array tmp124;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp125;
  real_array tmp126;
  real_array tmp127;
  real_array_create(&tmp124, ((modelica_real*)&((data->simulationInfo->realParameter[1531] /* chwp_4.eff.preDer3[1] PARAM */))), 1, (_index_t)19);
  array_alloc_scalar_real_array(&tmp126, 19, (modelica_real)(data->simulationInfo->realParameter[1390] /* chwp_4.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp127, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1410] /* chwp_4.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1411] /* chwp_4.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1412] /* chwp_4.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1413] /* chwp_4.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1414] /* chwp_4.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1415] /* chwp_4.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1416] /* chwp_4.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1417] /* chwp_4.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1418] /* chwp_4.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1419] /* chwp_4.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1420] /* chwp_4.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1421] /* chwp_4.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1422] /* chwp_4.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1423] /* chwp_4.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1424] /* chwp_4.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1425] /* chwp_4.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1426] /* chwp_4.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1427] /* chwp_4.eff.pCur3.dp[19] PARAM */));
  tmp125._n = ((modelica_integer) 19);
  tmp125._V_flow = tmp126;
  tmp125._dp = tmp127;
  jacobian->tmpVars[0] /* $cse20 JACOBIAN_TMP_VAR */ = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 - (data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */)) * (0.577), 1.0, tmp124, 909154.9295774648, 0.5770020020020019, tmp125);
  TRACE_POP
}

/*
equation index: 620
type: SIMPLE_ASSIGN
chwp_3.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 = 0.001004433569776996 * chiller_3.m_flow.SeedLSJac17
*/
void nb_hydr_static_v6_eqFunction_620(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,620};
  jacobian->tmpVars[41] /* chwp_3.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (0.001004433569776996) * (jacobian->seedVars[0] /* chiller_3.m_flow.SeedLSJac17 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 621
type: SIMPLE_ASSIGN
chwp_3.dpMachine.$pDERLSJac17.dummyVarLSJac17 = chwp_3.filter.y * ($cse11 + 1.154 * ((-0.577 + chwp_3.VMachine_flow) * ($cse12 - $cse13) + chwp_3.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 * ($cse14 - $cse15)) * chwp_3.eff.delta / (1.154 * chwp_3.eff.delta) ^ 2.0) - chwp_3.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 * chwp_3.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_621(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,621};
  modelica_real tmp128;
  tmp128 = (1.154) * ((data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */));
  jacobian->tmpVars[42] /* chwp_3.dpMachine.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[262] /* chwp_3.filter.y variable */)) * (jacobian->tmpVars[9] /* $cse11 JACOBIAN_TMP_VAR */ + (1.154) * (((-0.577 + (data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */)) * (jacobian->tmpVars[8] /* $cse12 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[7] /* $cse13 JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[41] /* chwp_3.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[6] /* $cse14 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[5] /* $cse15 JACOBIAN_TMP_VAR */)) * (DIVISION((data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */),(tmp128 * tmp128),"(1.154 * chwp_3.eff.delta) ^ 2.0")))) - ((jacobian->tmpVars[41] /* chwp_3.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[935] /* chwp_3.eff.kRes PARAM */)));
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
chiller_3.dp.$pDERLSJac17.dummyVarLSJac17 = 200000.0 * chiller_3.m_flow.SeedLSJac17 / chiller_3.m_flow_nominal_pos
*/
void nb_hydr_static_v6_eqFunction_622(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,622};
  jacobian->tmpVars[40] /* chiller_3.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (200000.0) * (DIVISION(jacobian->seedVars[0] /* chiller_3.m_flow.SeedLSJac17 SEED_VAR */,(data->simulationInfo->realParameter[109] /* chiller_3.m_flow_nominal_pos PARAM */),"chiller_3.m_flow_nominal_pos"));
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
checkvalve_3.dp.$pDERLSJac17.dummyVarLSJac17 = (-chiller_3.m_flow.SeedLSJac17) * checkvalve_3.dp_nominal / ((-checkvalve_3.relativeFlowCoefficient) * checkvalve_3.m_flow_nominal)
*/
void nb_hydr_static_v6_eqFunction_623(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,623};
  jacobian->tmpVars[37] /* checkvalve_3.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[0] /* chiller_3.m_flow.SeedLSJac17 SEED_VAR */)) * ((data->simulationInfo->realParameter[39] /* checkvalve_3.dp_nominal PARAM */)),((-(data->localData[0]->realVars[155] /* checkvalve_3.relativeFlowCoefficient variable */))) * ((data->simulationInfo->realParameter[44] /* checkvalve_3.m_flow_nominal PARAM */)),"(-checkvalve_3.relativeFlowCoefficient) * checkvalve_3.m_flow_nominal");
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
chiller_2.dp.$pDERLSJac17.dummyVarLSJac17 = 200000.0 * chiller_2.m_flow.SeedLSJac17 / chiller_2.m_flow_nominal_pos
*/
void nb_hydr_static_v6_eqFunction_624(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,624};
  jacobian->tmpVars[34] /* chiller_2.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (200000.0) * (DIVISION(jacobian->seedVars[1] /* chiller_2.m_flow.SeedLSJac17 SEED_VAR */,(data->simulationInfo->realParameter[95] /* chiller_2.m_flow_nominal_pos PARAM */),"chiller_2.m_flow_nominal_pos"));
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
chwp_2.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 = 0.001004433569776996 * chiller_2.m_flow.SeedLSJac17
*/
void nb_hydr_static_v6_eqFunction_625(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,625};
  jacobian->tmpVars[32] /* chwp_2.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (0.001004433569776996) * (jacobian->seedVars[1] /* chiller_2.m_flow.SeedLSJac17 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
chwp_2.dpMachine.$pDERLSJac17.dummyVarLSJac17 = chwp_2.filter.y * ($cse6 + 1.154 * ((-0.577 + chwp_2.VMachine_flow) * ($cse7 - $cse8) + chwp_2.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 * ($cse9 - $cse10)) * chwp_2.eff.delta / (1.154 * chwp_2.eff.delta) ^ 2.0) - chwp_2.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 * chwp_2.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_626(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,626};
  modelica_real tmp129;
  tmp129 = (1.154) * ((data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */));
  jacobian->tmpVars[33] /* chwp_2.dpMachine.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[231] /* chwp_2.filter.y variable */)) * (jacobian->tmpVars[14] /* $cse6 JACOBIAN_TMP_VAR */ + (1.154) * (((-0.577 + (data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */)) * (jacobian->tmpVars[13] /* $cse7 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[12] /* $cse8 JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[32] /* chwp_2.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[11] /* $cse9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[10] /* $cse10 JACOBIAN_TMP_VAR */)) * (DIVISION((data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */),(tmp129 * tmp129),"(1.154 * chwp_2.eff.delta) ^ 2.0")))) - ((jacobian->tmpVars[32] /* chwp_2.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[552] /* chwp_2.eff.kRes PARAM */)));
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
checkvalve_2.dp.$pDERLSJac17.dummyVarLSJac17 = (-chiller_2.m_flow.SeedLSJac17) * checkvalve_2.dp_nominal / ((-checkvalve_2.relativeFlowCoefficient) * checkvalve_2.m_flow_nominal)
*/
void nb_hydr_static_v6_eqFunction_627(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,627};
  jacobian->tmpVars[30] /* checkvalve_2.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[1] /* chiller_2.m_flow.SeedLSJac17 SEED_VAR */)) * ((data->simulationInfo->realParameter[21] /* checkvalve_2.dp_nominal PARAM */)),((-(data->localData[0]->realVars[143] /* checkvalve_2.relativeFlowCoefficient variable */))) * ((data->simulationInfo->realParameter[26] /* checkvalve_2.m_flow_nominal PARAM */)),"(-checkvalve_2.relativeFlowCoefficient) * checkvalve_2.m_flow_nominal");
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
chiller_1.dp.$pDERLSJac17.dummyVarLSJac17 = 200000.0 * chiller_1.m_flow.SeedLSJac17 / chiller_1.m_flow_nominal_pos
*/
void nb_hydr_static_v6_eqFunction_628(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,628};
  jacobian->tmpVars[23] /* chiller_1.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (200000.0) * (DIVISION(jacobian->seedVars[2] /* chiller_1.m_flow.SeedLSJac17 SEED_VAR */,(data->simulationInfo->realParameter[81] /* chiller_1.m_flow_nominal_pos PARAM */),"chiller_1.m_flow_nominal_pos"));
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
chwp_1.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 = 0.001004433569776996 * chiller_1.m_flow.SeedLSJac17
*/
void nb_hydr_static_v6_eqFunction_629(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,629};
  jacobian->tmpVars[21] /* chwp_1.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (0.001004433569776996) * (jacobian->seedVars[2] /* chiller_1.m_flow.SeedLSJac17 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
chwp_1.dpMachine.$pDERLSJac17.dummyVarLSJac17 = chwp_1.filter.y * ($cse1 + 1.154 * ((-0.577 + chwp_1.VMachine_flow) * ($cse2 - $cse3) + chwp_1.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 * ($cse4 - $cse5)) * chwp_1.eff.delta / (1.154 * chwp_1.eff.delta) ^ 2.0) - chwp_1.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 * chwp_1.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_630(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,630};
  modelica_real tmp130;
  tmp130 = (1.154) * ((data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */));
  jacobian->tmpVars[22] /* chwp_1.dpMachine.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[200] /* chwp_1.filter.y variable */)) * (jacobian->tmpVars[19] /* $cse1 JACOBIAN_TMP_VAR */ + (1.154) * (((-0.577 + (data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */)) * (jacobian->tmpVars[18] /* $cse2 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[17] /* $cse3 JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[21] /* chwp_1.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[16] /* $cse4 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[15] /* $cse5 JACOBIAN_TMP_VAR */)) * (DIVISION((data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */),(tmp130 * tmp130),"(1.154 * chwp_1.eff.delta) ^ 2.0")))) - ((jacobian->tmpVars[21] /* chwp_1.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[171] /* chwp_1.eff.kRes PARAM */)));
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
checkvalve_1.dp.$pDERLSJac17.dummyVarLSJac17 = (-chiller_1.m_flow.SeedLSJac17) * checkvalve_1.dp_nominal / ((-checkvalve_1.relativeFlowCoefficient) * checkvalve_1.m_flow_nominal)
*/
void nb_hydr_static_v6_eqFunction_631(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 31;
  const int equationIndexes[2] = {1,631};
  jacobian->tmpVars[20] /* checkvalve_1.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->seedVars[2] /* chiller_1.m_flow.SeedLSJac17 SEED_VAR */)) * ((data->simulationInfo->realParameter[3] /* checkvalve_1.dp_nominal PARAM */)),((-(data->localData[0]->realVars[131] /* checkvalve_1.relativeFlowCoefficient variable */))) * ((data->simulationInfo->realParameter[8] /* checkvalve_1.m_flow_nominal PARAM */)),"(-checkvalve_1.relativeFlowCoefficient) * checkvalve_1.m_flow_nominal");
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
checkvalve_1.port_b.p.$pDERLSJac17.dummyVarLSJac17 = chwp_1.dpMachine.$pDERLSJac17.dummyVarLSJac17 - checkvalve_1.dp.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_632(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 32;
  const int equationIndexes[2] = {1,632};
  jacobian->tmpVars[25] /* checkvalve_1.port_b.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[22] /* chwp_1.dpMachine.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[20] /* checkvalve_1.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
terminal_resist.dp.$pDERLSJac17.dummyVarLSJac17 = checkvalve_1.port_b.p.$pDERLSJac17.dummyVarLSJac17 - chiller_1.dp.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_633(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 33;
  const int equationIndexes[2] = {1,633};
  jacobian->tmpVars[27] /* terminal_resist.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[25] /* checkvalve_1.port_b.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[23] /* chiller_1.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
terminal_resist.m_flow.$pDERLSJac17.dummyVarLSJac17 = terminal_resist.dp.$pDERLSJac17.dummyVarLSJac17 * terminal_resist.m_flow_nominal_pos / terminal_resist.dp_nominal_pos
*/
void nb_hydr_static_v6_eqFunction_634(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 34;
  const int equationIndexes[2] = {1,634};
  jacobian->tmpVars[28] /* terminal_resist.m_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = DIVISION((jacobian->tmpVars[27] /* terminal_resist.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[1780] /* terminal_resist.m_flow_nominal_pos PARAM */)),(data->simulationInfo->realParameter[1763] /* terminal_resist.dp_nominal_pos PARAM */),"terminal_resist.dp_nominal_pos");
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
jun_5.port_2.m_flow.$pDERLSJac17.dummyVarLSJac17 = chiller_1.m_flow.SeedLSJac17 - terminal_resist.m_flow.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_635(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 35;
  const int equationIndexes[2] = {1,635};
  jacobian->tmpVars[29] /* jun_5.port_2.m_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = jacobian->seedVars[2] /* chiller_1.m_flow.SeedLSJac17 SEED_VAR */ - jacobian->tmpVars[28] /* terminal_resist.m_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
jun_6.port_2.m_flow.$pDERLSJac17.dummyVarLSJac17 = chiller_2.m_flow.SeedLSJac17 + jun_5.port_2.m_flow.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_636(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 36;
  const int equationIndexes[2] = {1,636};
  jacobian->tmpVars[31] /* jun_6.port_2.m_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = jacobian->seedVars[1] /* chiller_2.m_flow.SeedLSJac17 SEED_VAR */ + jacobian->tmpVars[29] /* jun_5.port_2.m_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
chiller_4.m_flow.$pDERLSJac17.dummyVarLSJac17 = (-chiller_3.m_flow.SeedLSJac17) - jun_6.port_2.m_flow.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_637(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 37;
  const int equationIndexes[2] = {1,637};
  jacobian->tmpVars[38] /* chiller_4.m_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (-jacobian->seedVars[0] /* chiller_3.m_flow.SeedLSJac17 SEED_VAR */) - jacobian->tmpVars[31] /* jun_6.port_2.m_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
checkvalve_4.dp.$pDERLSJac17.dummyVarLSJac17 = (-chiller_4.m_flow.$pDERLSJac17.dummyVarLSJac17) * checkvalve_4.dp_nominal / ((-checkvalve_4.relativeFlowCoefficient) * checkvalve_4.m_flow_nominal)
*/
void nb_hydr_static_v6_eqFunction_638(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 38;
  const int equationIndexes[2] = {1,638};
  jacobian->tmpVars[39] /* checkvalve_4.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = DIVISION(((-jacobian->tmpVars[38] /* chiller_4.m_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */)) * ((data->simulationInfo->realParameter[57] /* checkvalve_4.dp_nominal PARAM */)),((-(data->localData[0]->realVars[167] /* checkvalve_4.relativeFlowCoefficient variable */))) * ((data->simulationInfo->realParameter[62] /* checkvalve_4.m_flow_nominal PARAM */)),"(-checkvalve_4.relativeFlowCoefficient) * checkvalve_4.m_flow_nominal");
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
chwp_4.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 = 0.001004433569776996 * chiller_4.m_flow.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_639(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 39;
  const int equationIndexes[2] = {1,639};
  jacobian->tmpVars[43] /* chwp_4.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (0.001004433569776996) * (jacobian->tmpVars[38] /* chiller_4.m_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */);
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
chwp_4.dpMachine.$pDERLSJac17.dummyVarLSJac17 = chwp_4.filter.y * ($cse16 + 1.154 * ((-0.577 + chwp_4.VMachine_flow) * ($cse17 - $cse18) + chwp_4.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 * ($cse19 - $cse20)) * chwp_4.eff.delta / (1.154 * chwp_4.eff.delta) ^ 2.0) - chwp_4.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 * chwp_4.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_640(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 40;
  const int equationIndexes[2] = {1,640};
  modelica_real tmp131;
  tmp131 = (1.154) * ((data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */));
  jacobian->tmpVars[44] /* chwp_4.dpMachine.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[293] /* chwp_4.filter.y variable */)) * (jacobian->tmpVars[4] /* $cse16 JACOBIAN_TMP_VAR */ + (1.154) * (((-0.577 + (data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */)) * (jacobian->tmpVars[3] /* $cse17 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* $cse18 JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[43] /* chwp_4.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[1] /* $cse19 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* $cse20 JACOBIAN_TMP_VAR */)) * (DIVISION((data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */),(tmp131 * tmp131),"(1.154 * chwp_4.eff.delta) ^ 2.0")))) - ((jacobian->tmpVars[43] /* chwp_4.VMachine_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[1318] /* chwp_4.eff.kRes PARAM */)));
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
chiller_4.dp.$pDERLSJac17.dummyVarLSJac17 = 200000.0 * chiller_4.m_flow.$pDERLSJac17.dummyVarLSJac17 / chiller_4.m_flow_nominal_pos
*/
void nb_hydr_static_v6_eqFunction_641(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 41;
  const int equationIndexes[2] = {1,641};
  jacobian->tmpVars[45] /* chiller_4.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (200000.0) * (DIVISION(jacobian->tmpVars[38] /* chiller_4.m_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[123] /* chiller_4.m_flow_nominal_pos PARAM */),"chiller_4.m_flow_nominal_pos"));
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
checkvalve_2.port_b.p.$pDERLSJac17.dummyVarLSJac17 = terminal_resist.dp.$pDERLSJac17.dummyVarLSJac17 + chiller_2.dp.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_642(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 42;
  const int equationIndexes[2] = {1,642};
  jacobian->tmpVars[35] /* checkvalve_2.port_b.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[27] /* terminal_resist.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[34] /* chiller_2.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
checkvalve_2.port_a.p.$pDERLSJac17.dummyVarLSJac17 = checkvalve_2.port_b.p.$pDERLSJac17.dummyVarLSJac17 + checkvalve_2.dp.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_643(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 43;
  const int equationIndexes[2] = {1,643};
  jacobian->tmpVars[36] /* checkvalve_2.port_a.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[35] /* checkvalve_2.port_b.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[30] /* checkvalve_2.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 644
type: SIMPLE_ASSIGN
$res_LSJac17_3.$pDERLSJac17.dummyVarLSJac17 = chwp_2.dpMachine.$pDERLSJac17.dummyVarLSJac17 - checkvalve_2.port_a.p.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_644(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 44;
  const int equationIndexes[2] = {1,644};
  jacobian->resultVars[2] /* $res_LSJac17_3.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_VAR */ = jacobian->tmpVars[33] /* chwp_2.dpMachine.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[36] /* checkvalve_2.port_a.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
checkvalve_3.port_b.p.$pDERLSJac17.dummyVarLSJac17 = terminal_resist.dp.$pDERLSJac17.dummyVarLSJac17 + chiller_3.dp.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_645(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 45;
  const int equationIndexes[2] = {1,645};
  jacobian->tmpVars[46] /* checkvalve_3.port_b.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[27] /* terminal_resist.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[40] /* chiller_3.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
checkvalve_3.port_a.p.$pDERLSJac17.dummyVarLSJac17 = checkvalve_3.port_b.p.$pDERLSJac17.dummyVarLSJac17 + checkvalve_3.dp.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_646(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 46;
  const int equationIndexes[2] = {1,646};
  jacobian->tmpVars[47] /* checkvalve_3.port_a.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[46] /* checkvalve_3.port_b.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[37] /* checkvalve_3.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
$res_LSJac17_2.$pDERLSJac17.dummyVarLSJac17 = chwp_3.dpMachine.$pDERLSJac17.dummyVarLSJac17 - checkvalve_3.port_a.p.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_647(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 47;
  const int equationIndexes[2] = {1,647};
  jacobian->resultVars[1] /* $res_LSJac17_2.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_VAR */ = jacobian->tmpVars[42] /* chwp_3.dpMachine.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[47] /* checkvalve_3.port_a.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
checkvalve_4.port_b.p.$pDERLSJac17.dummyVarLSJac17 = terminal_resist.dp.$pDERLSJac17.dummyVarLSJac17 + chiller_4.dp.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_648(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 48;
  const int equationIndexes[2] = {1,648};
  jacobian->tmpVars[48] /* checkvalve_4.port_b.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[27] /* terminal_resist.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[45] /* chiller_4.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
checkvalve_4.port_a.p.$pDERLSJac17.dummyVarLSJac17 = checkvalve_4.port_b.p.$pDERLSJac17.dummyVarLSJac17 + checkvalve_4.dp.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_649(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 49;
  const int equationIndexes[2] = {1,649};
  jacobian->tmpVars[49] /* checkvalve_4.port_a.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[48] /* checkvalve_4.port_b.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[39] /* checkvalve_4.dp.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
$res_LSJac17_1.$pDERLSJac17.dummyVarLSJac17 = chwp_4.dpMachine.$pDERLSJac17.dummyVarLSJac17 - checkvalve_4.port_a.p.$pDERLSJac17.dummyVarLSJac17
*/
void nb_hydr_static_v6_eqFunction_650(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 50;
  const int equationIndexes[2] = {1,650};
  jacobian->resultVars[0] /* $res_LSJac17_1.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_VAR */ = jacobian->tmpVars[44] /* chwp_4.dpMachine.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[49] /* checkvalve_4.port_a.p.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int nb_hydr_static_v6_functionJacLSJac17_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = nb_hydr_static_v6_INDEX_JAC_LSJac17;
  
  TRACE_POP
  return 0;
}

int nb_hydr_static_v6_functionJacLSJac17_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = nb_hydr_static_v6_INDEX_JAC_LSJac17;
  nb_hydr_static_v6_eqFunction_600(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_601(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_602(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_603(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_604(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_605(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_606(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_607(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_608(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_609(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_610(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_611(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_612(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_613(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_614(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_615(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_616(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_617(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_618(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_619(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_620(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_621(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_622(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_623(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_624(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_625(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_626(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_627(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_628(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_629(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_630(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_631(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_632(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_633(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_634(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_635(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_636(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_637(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_638(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_639(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_640(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_641(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_642(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_643(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_644(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_645(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_646(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_647(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_648(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_649(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_650(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 728
type: SIMPLE_ASSIGN
$cse21 = max(-chiller_4.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_728(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,728};
  jacobian->tmpVars[15] /* $cse21 JACOBIAN_TMP_VAR */ = fmax((-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)),1e-07);
  TRACE_POP
}

/*
equation index: 729
type: SIMPLE_ASSIGN
$cse22 = max(-chiller_3.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_729(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,729};
  jacobian->tmpVars[14] /* $cse22 JACOBIAN_TMP_VAR */ = fmax((-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)),1e-07);
  TRACE_POP
}

/*
equation index: 730
type: SIMPLE_ASSIGN
$cse23 = max(jun_6.port_2.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_730(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,730};
  jacobian->tmpVars[13] /* $cse23 JACOBIAN_TMP_VAR */ = fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07);
  TRACE_POP
}

/*
equation index: 731
type: SIMPLE_ASSIGN
$cse24 = max(-chiller_2.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_731(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,731};
  jacobian->tmpVars[12] /* $cse24 JACOBIAN_TMP_VAR */ = fmax((-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)),1e-07);
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
$cse25 = max(-jun_2.port_1.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_732(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,732};
  jacobian->tmpVars[11] /* $cse25 JACOBIAN_TMP_VAR */ = fmax((-(data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */)),1e-07);
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
$cse26 = max(terminal_resist.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_733(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,733};
  jacobian->tmpVars[10] /* $cse26 JACOBIAN_TMP_VAR */ = fmax((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */),1e-07);
  TRACE_POP
}

/*
equation index: 734
type: SIMPLE_ASSIGN
$cse27 = max(chiller_1.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_734(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,734};
  jacobian->tmpVars[9] /* $cse27 JACOBIAN_TMP_VAR */ = fmax((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),1e-07);
  TRACE_POP
}

/*
equation index: 735
type: SIMPLE_ASSIGN
$cse28 = max(-terminal_resist.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_735(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,735};
  jacobian->tmpVars[8] /* $cse28 JACOBIAN_TMP_VAR */ = fmax((-(data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */)),1e-07);
  TRACE_POP
}

/*
equation index: 736
type: SIMPLE_ASSIGN
$cse29 = max(jun_5.port_2.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_736(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,736};
  jacobian->tmpVars[7] /* $cse29 JACOBIAN_TMP_VAR */ = fmax((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */),1e-07);
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
$cse30 = max(chiller_2.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_737(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,737};
  jacobian->tmpVars[6] /* $cse30 JACOBIAN_TMP_VAR */ = fmax((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),1e-07);
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
$cse31 = max(chiller_3.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_738(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,738};
  jacobian->tmpVars[5] /* $cse31 JACOBIAN_TMP_VAR */ = fmax((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),1e-07);
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
$cse32 = max(chiller_4.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_739(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,739};
  jacobian->tmpVars[4] /* $cse32 JACOBIAN_TMP_VAR */ = fmax((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),1e-07);
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
$cse33 = max(-jun_6.port_2.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_740(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,740};
  jacobian->tmpVars[3] /* $cse33 JACOBIAN_TMP_VAR */ = fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07);
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
$cse34 = max(-jun_5.port_2.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_741(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,741};
  jacobian->tmpVars[2] /* $cse34 JACOBIAN_TMP_VAR */ = fmax((-(data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */)),1e-07);
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
$cse35 = max(-chiller_1.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_742(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,742};
  jacobian->tmpVars[1] /* $cse35 JACOBIAN_TMP_VAR */ = fmax((-(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)),1e-07);
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
$cse36 = max(jun_2.port_1.m_flow, 1e-07)
*/
void nb_hydr_static_v6_eqFunction_743(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,743};
  jacobian->tmpVars[0] /* $cse36 JACOBIAN_TMP_VAR */ = fmax((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */),1e-07);
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
jun_6.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 = ($cse31 * checkvalve_3.port_b.h_outflow.SeedLSJac18 + $cse32 * checkvalve_4.port_b.h_outflow.SeedLSJac18) / ($cse31 + $cse32)
*/
void nb_hydr_static_v6_eqFunction_744(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,744};
  jacobian->tmpVars[27] /* jun_6.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = DIVISION((jacobian->tmpVars[5] /* $cse31 JACOBIAN_TMP_VAR */) * (jacobian->seedVars[1] /* checkvalve_3.port_b.h_outflow.SeedLSJac18 SEED_VAR */) + (jacobian->tmpVars[4] /* $cse32 JACOBIAN_TMP_VAR */) * (jacobian->seedVars[0] /* checkvalve_4.port_b.h_outflow.SeedLSJac18 SEED_VAR */),jacobian->tmpVars[5] /* $cse31 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[4] /* $cse32 JACOBIAN_TMP_VAR */,"$cse31 + $cse32");
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
jun_5.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 = ($cse30 * checkvalve_2.port_b.h_outflow.SeedLSJac18 + $cse33 * jun_6.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18) / ($cse30 + $cse33)
*/
void nb_hydr_static_v6_eqFunction_745(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,745};
  jacobian->tmpVars[28] /* jun_5.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = DIVISION((jacobian->tmpVars[6] /* $cse30 JACOBIAN_TMP_VAR */) * (jacobian->seedVars[5] /* checkvalve_2.port_b.h_outflow.SeedLSJac18 SEED_VAR */) + (jacobian->tmpVars[3] /* $cse33 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[27] /* jun_6.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */),jacobian->tmpVars[6] /* $cse30 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[3] /* $cse33 JACOBIAN_TMP_VAR */,"$cse30 + $cse33");
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
chwp_1.port_a.h_outflow.$pDERLSJac18.dummyVarLSJac18 = $cse34 * jun_5.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 / ($cse28 + $cse34)
*/
void nb_hydr_static_v6_eqFunction_746(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,746};
  jacobian->tmpVars[30] /* chwp_1.port_a.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[2] /* $cse34 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->tmpVars[28] /* jun_5.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */,jacobian->tmpVars[8] /* $cse28 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[2] /* $cse34 JACOBIAN_TMP_VAR */,"$cse28 + $cse34"));
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
jun_1.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 = $cse35 * chwp_1.port_a.h_outflow.$pDERLSJac18.dummyVarLSJac18 / ($cse35 + $cse26)
*/
void nb_hydr_static_v6_eqFunction_747(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,747};
  jacobian->tmpVars[31] /* jun_1.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[1] /* $cse35 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->tmpVars[30] /* chwp_1.port_a.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */,jacobian->tmpVars[1] /* $cse35 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[10] /* $cse26 JACOBIAN_TMP_VAR */,"$cse35 + $cse26"));
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
jun_2.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 = ($cse24 * chwp_2.port_a.h_outflow.SeedLSJac18 + $cse36 * jun_1.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18) / ($cse24 + $cse36)
*/
void nb_hydr_static_v6_eqFunction_748(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,748};
  jacobian->tmpVars[32] /* jun_2.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = DIVISION((jacobian->tmpVars[12] /* $cse24 JACOBIAN_TMP_VAR */) * (jacobian->seedVars[2] /* chwp_2.port_a.h_outflow.SeedLSJac18 SEED_VAR */) + (jacobian->tmpVars[0] /* $cse36 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[31] /* jun_1.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */),jacobian->tmpVars[12] /* $cse24 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[0] /* $cse36 JACOBIAN_TMP_VAR */,"$cse24 + $cse36");
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
jun_3.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 = ($cse22 * chwp_3.port_a.h_outflow.SeedLSJac18 + $cse33 * jun_2.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18) / ($cse22 + $cse33)
*/
void nb_hydr_static_v6_eqFunction_749(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,749};
  jacobian->tmpVars[33] /* jun_3.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = DIVISION((jacobian->tmpVars[14] /* $cse22 JACOBIAN_TMP_VAR */) * (jacobian->seedVars[4] /* chwp_3.port_a.h_outflow.SeedLSJac18 SEED_VAR */) + (jacobian->tmpVars[3] /* $cse33 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[32] /* jun_2.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */),jacobian->tmpVars[14] /* $cse22 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[3] /* $cse33 JACOBIAN_TMP_VAR */,"$cse22 + $cse33");
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
$res_LSJac18_1.$pDERLSJac18.dummyVarLSJac18 = jun_3.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 - checkvalve_4.port_b.h_outflow.SeedLSJac18
*/
void nb_hydr_static_v6_eqFunction_750(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,750};
  jacobian->resultVars[0] /* $res_LSJac18_1.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_VAR */ = jacobian->tmpVars[33] /* jun_3.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ - jacobian->seedVars[0] /* checkvalve_4.port_b.h_outflow.SeedLSJac18 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
$res_LSJac18_5.$pDERLSJac18.dummyVarLSJac18 = $cse21 * chwp_4.port_a.h_outflow.SeedLSJac18 + $cse33 * jun_2.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 - checkvalve_3.port_b.h_outflow.SeedLSJac18 * ($cse21 + $cse33)
*/
void nb_hydr_static_v6_eqFunction_751(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,751};
  jacobian->resultVars[4] /* $res_LSJac18_5.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_VAR */ = (jacobian->tmpVars[15] /* $cse21 JACOBIAN_TMP_VAR */) * (jacobian->seedVars[3] /* chwp_4.port_a.h_outflow.SeedLSJac18 SEED_VAR */) + (jacobian->tmpVars[3] /* $cse33 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[32] /* jun_2.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[1] /* checkvalve_3.port_b.h_outflow.SeedLSJac18 SEED_VAR */) * (jacobian->tmpVars[15] /* $cse21 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[3] /* $cse33 JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
jun_3.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 = ($cse21 * chwp_4.port_a.h_outflow.SeedLSJac18 + $cse22 * chwp_3.port_a.h_outflow.SeedLSJac18) / ($cse21 + $cse22)
*/
void nb_hydr_static_v6_eqFunction_752(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,752};
  jacobian->tmpVars[18] /* jun_3.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = DIVISION((jacobian->tmpVars[15] /* $cse21 JACOBIAN_TMP_VAR */) * (jacobian->seedVars[3] /* chwp_4.port_a.h_outflow.SeedLSJac18 SEED_VAR */) + (jacobian->tmpVars[14] /* $cse22 JACOBIAN_TMP_VAR */) * (jacobian->seedVars[4] /* chwp_3.port_a.h_outflow.SeedLSJac18 SEED_VAR */),jacobian->tmpVars[15] /* $cse21 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[14] /* $cse22 JACOBIAN_TMP_VAR */,"$cse21 + $cse22");
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
jun_2.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 = ($cse23 * jun_3.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 + $cse24 * chwp_2.port_a.h_outflow.SeedLSJac18) / ($cse23 + $cse24)
*/
void nb_hydr_static_v6_eqFunction_753(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,753};
  jacobian->tmpVars[20] /* jun_2.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = DIVISION((jacobian->tmpVars[13] /* $cse23 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[18] /* jun_3.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[12] /* $cse24 JACOBIAN_TMP_VAR */) * (jacobian->seedVars[2] /* chwp_2.port_a.h_outflow.SeedLSJac18 SEED_VAR */),jacobian->tmpVars[13] /* $cse23 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[12] /* $cse24 JACOBIAN_TMP_VAR */,"$cse23 + $cse24");
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
checkvalve_1.port_b.h_outflow.$pDERLSJac18.dummyVarLSJac18 = $cse25 * jun_2.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 / ($cse25 + $cse26)
*/
void nb_hydr_static_v6_eqFunction_754(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,754};
  jacobian->tmpVars[22] /* checkvalve_1.port_b.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[11] /* $cse25 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->tmpVars[20] /* jun_2.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */,jacobian->tmpVars[11] /* $cse25 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[10] /* $cse26 JACOBIAN_TMP_VAR */,"$cse25 + $cse26"));
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
jun_4.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 = $cse27 * checkvalve_1.port_b.h_outflow.$pDERLSJac18.dummyVarLSJac18 / ($cse28 + $cse27)
*/
void nb_hydr_static_v6_eqFunction_755(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,755};
  jacobian->tmpVars[23] /* jun_4.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (jacobian->tmpVars[9] /* $cse27 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->tmpVars[22] /* checkvalve_1.port_b.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */,jacobian->tmpVars[8] /* $cse28 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[9] /* $cse27 JACOBIAN_TMP_VAR */,"$cse28 + $cse27"));
  TRACE_POP
}

/*
equation index: 756
type: SIMPLE_ASSIGN
jun_5.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 = ($cse29 * jun_4.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 + $cse30 * checkvalve_2.port_b.h_outflow.SeedLSJac18) / ($cse29 + $cse30)
*/
void nb_hydr_static_v6_eqFunction_756(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,756};
  jacobian->tmpVars[24] /* jun_5.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = DIVISION((jacobian->tmpVars[7] /* $cse29 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[23] /* jun_4.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[6] /* $cse30 JACOBIAN_TMP_VAR */) * (jacobian->seedVars[5] /* checkvalve_2.port_b.h_outflow.SeedLSJac18 SEED_VAR */),jacobian->tmpVars[7] /* $cse29 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[6] /* $cse30 JACOBIAN_TMP_VAR */,"$cse29 + $cse30");
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
$res_LSJac18_2.$pDERLSJac18.dummyVarLSJac18 = $cse23 * jun_5.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 + $cse32 * checkvalve_4.port_b.h_outflow.SeedLSJac18 - chwp_3.port_a.h_outflow.SeedLSJac18 * ($cse23 + $cse32)
*/
void nb_hydr_static_v6_eqFunction_757(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,757};
  jacobian->resultVars[1] /* $res_LSJac18_2.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_VAR */ = (jacobian->tmpVars[13] /* $cse23 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[24] /* jun_5.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[4] /* $cse32 JACOBIAN_TMP_VAR */) * (jacobian->seedVars[0] /* checkvalve_4.port_b.h_outflow.SeedLSJac18 SEED_VAR */) - ((jacobian->seedVars[4] /* chwp_3.port_a.h_outflow.SeedLSJac18 SEED_VAR */) * (jacobian->tmpVars[13] /* $cse23 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[4] /* $cse32 JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
$res_LSJac18_3.$pDERLSJac18.dummyVarLSJac18 = $cse23 * jun_5.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 + $cse31 * checkvalve_3.port_b.h_outflow.SeedLSJac18 - chwp_4.port_a.h_outflow.SeedLSJac18 * ($cse23 + $cse31)
*/
void nb_hydr_static_v6_eqFunction_758(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,758};
  jacobian->resultVars[2] /* $res_LSJac18_3.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_VAR */ = (jacobian->tmpVars[13] /* $cse23 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[24] /* jun_5.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[5] /* $cse31 JACOBIAN_TMP_VAR */) * (jacobian->seedVars[1] /* checkvalve_3.port_b.h_outflow.SeedLSJac18 SEED_VAR */) - ((jacobian->seedVars[3] /* chwp_4.port_a.h_outflow.SeedLSJac18 SEED_VAR */) * (jacobian->tmpVars[13] /* $cse23 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[5] /* $cse31 JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
$res_LSJac18_4.$pDERLSJac18.dummyVarLSJac18 = $cse29 * jun_4.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 + $cse33 * jun_6.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 - chwp_2.port_a.h_outflow.SeedLSJac18 * ($cse29 + $cse33)
*/
void nb_hydr_static_v6_eqFunction_759(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 31;
  const int equationIndexes[2] = {1,759};
  jacobian->resultVars[3] /* $res_LSJac18_4.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_VAR */ = (jacobian->tmpVars[7] /* $cse29 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[23] /* jun_4.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[3] /* $cse33 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[27] /* jun_6.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[2] /* chwp_2.port_a.h_outflow.SeedLSJac18 SEED_VAR */) * (jacobian->tmpVars[7] /* $cse29 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[3] /* $cse33 JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
$res_LSJac18_6.$pDERLSJac18.dummyVarLSJac18 = $cse23 * jun_3.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 + $cse36 * jun_1.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 - checkvalve_2.port_b.h_outflow.SeedLSJac18 * ($cse23 + $cse36)
*/
void nb_hydr_static_v6_eqFunction_760(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 32;
  const int equationIndexes[2] = {1,760};
  jacobian->resultVars[5] /* $res_LSJac18_6.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_VAR */ = (jacobian->tmpVars[13] /* $cse23 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[18] /* jun_3.port_1.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */) + (jacobian->tmpVars[0] /* $cse36 JACOBIAN_TMP_VAR */) * (jacobian->tmpVars[31] /* jun_1.port_2.h_outflow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[5] /* checkvalve_2.port_b.h_outflow.SeedLSJac18 SEED_VAR */) * (jacobian->tmpVars[13] /* $cse23 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[0] /* $cse36 JACOBIAN_TMP_VAR */));
  TRACE_POP
}

OMC_DISABLE_OPT
int nb_hydr_static_v6_functionJacLSJac18_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = nb_hydr_static_v6_INDEX_JAC_LSJac18;
  
  TRACE_POP
  return 0;
}

int nb_hydr_static_v6_functionJacLSJac18_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = nb_hydr_static_v6_INDEX_JAC_LSJac18;
  nb_hydr_static_v6_eqFunction_728(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_729(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_730(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_731(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_732(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_733(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_734(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_735(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_736(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_737(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_738(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_739(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_740(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_741(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_742(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_743(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_744(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_745(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_746(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_747(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_748(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_749(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_750(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_751(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_752(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_753(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_754(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_755(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_756(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_757(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_758(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_759(data, threadData, jacobian, parentJacobian);
  nb_hydr_static_v6_eqFunction_760(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int nb_hydr_static_v6_functionJacH_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int nb_hydr_static_v6_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int nb_hydr_static_v6_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int nb_hydr_static_v6_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int nb_hydr_static_v6_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int nb_hydr_static_v6_functionJacA_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = nb_hydr_static_v6_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}

int nb_hydr_static_v6_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = nb_hydr_static_v6_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int nb_hydr_static_v6_initialAnalyticJacobianLSJac17(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "nb_hydr_static_v6_JacLSJac17.bin");
  
  initAnalyticJacobian(jacobian, 3, 3, 53, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(3, 7, 3);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 3+1, pFile, FALSE);
  if (count != 3+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 3+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 7, pFile, FALSE);
  if (count != 7) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 3+1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int nb_hydr_static_v6_initialAnalyticJacobianLSJac18(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "nb_hydr_static_v6_JacLSJac18.bin");
  
  initAnalyticJacobian(jacobian, 6, 6, 40, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(6, 30, 6);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 6+1, pFile, FALSE);
  if (count != 6+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 6+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 30, pFile, FALSE);
  if (count != 30) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 6+1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}
int nb_hydr_static_v6_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int nb_hydr_static_v6_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int nb_hydr_static_v6_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int nb_hydr_static_v6_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int nb_hydr_static_v6_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int nb_hydr_static_v6_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "nb_hydr_static_v6_JacA.bin");
  
  initAnalyticJacobian(jacobian, 11, 11, 0, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(11, 27, 7);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 11+1, pFile, FALSE);
  if (count != 11+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 11+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 27, pFile, FALSE);
  if (count != 27) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 11+1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1);
  /* color 7 with 5 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 5);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}



