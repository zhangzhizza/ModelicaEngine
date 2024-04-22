/* Initialization */
#include "nb_hydr_static_v6_model.h"
#include "nb_hydr_static_v6_11mix.h"
#include "nb_hydr_static_v6_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void nb_hydr_static_v6_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
chwp_1.vol.steBal.mWat_flow_internal = 0.0
*/
void nb_hydr_static_v6_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[220] /* chwp_1.vol.steBal.mWat_flow_internal variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
chwp_1.vol.U = 0.0
*/
void nb_hydr_static_v6_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[216] /* chwp_1.vol.U variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
chwp_1.vol.m = 0.0
*/
void nb_hydr_static_v6_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[218] /* chwp_1.vol.m variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
chwp_1.preSou.m_flow_internal = 0.0
*/
void nb_hydr_static_v6_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[209] /* chwp_1.preSou.m_flow_internal variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
chwp_1.senRelPre.port_a.h_outflow = 0.0
*/
void nb_hydr_static_v6_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[212] /* chwp_1.senRelPre.port_a.h_outflow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
chwp_1.senRelPre.port_b.h_outflow = 0.0
*/
void nb_hydr_static_v6_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[214] /* chwp_1.senRelPre.port_b.h_outflow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
chwp_2.vol.steBal.mWat_flow_internal = 0.0
*/
void nb_hydr_static_v6_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[251] /* chwp_2.vol.steBal.mWat_flow_internal variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
chwp_2.vol.U = 0.0
*/
void nb_hydr_static_v6_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[247] /* chwp_2.vol.U variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
chwp_2.vol.m = 0.0
*/
void nb_hydr_static_v6_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[249] /* chwp_2.vol.m variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
chwp_2.preSou.m_flow_internal = 0.0
*/
void nb_hydr_static_v6_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[240] /* chwp_2.preSou.m_flow_internal variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
chwp_2.senRelPre.port_a.h_outflow = 0.0
*/
void nb_hydr_static_v6_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[243] /* chwp_2.senRelPre.port_a.h_outflow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
chwp_2.senRelPre.port_b.h_outflow = 0.0
*/
void nb_hydr_static_v6_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[245] /* chwp_2.senRelPre.port_b.h_outflow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
chwp_3.vol.steBal.mWat_flow_internal = 0.0
*/
void nb_hydr_static_v6_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[282] /* chwp_3.vol.steBal.mWat_flow_internal variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
chwp_3.vol.U = 0.0
*/
void nb_hydr_static_v6_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[278] /* chwp_3.vol.U variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
chwp_3.vol.m = 0.0
*/
void nb_hydr_static_v6_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[280] /* chwp_3.vol.m variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
chwp_3.preSou.m_flow_internal = 0.0
*/
void nb_hydr_static_v6_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[271] /* chwp_3.preSou.m_flow_internal variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
chwp_3.senRelPre.port_a.h_outflow = 0.0
*/
void nb_hydr_static_v6_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[274] /* chwp_3.senRelPre.port_a.h_outflow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
chwp_3.senRelPre.port_b.h_outflow = 0.0
*/
void nb_hydr_static_v6_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[276] /* chwp_3.senRelPre.port_b.h_outflow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
chwp_4.vol.steBal.mWat_flow_internal = 0.0
*/
void nb_hydr_static_v6_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[313] /* chwp_4.vol.steBal.mWat_flow_internal variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
chwp_4.vol.U = 0.0
*/
void nb_hydr_static_v6_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[309] /* chwp_4.vol.U variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
chwp_4.vol.m = 0.0
*/
void nb_hydr_static_v6_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[311] /* chwp_4.vol.m variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
chwp_4.preSou.m_flow_internal = 0.0
*/
void nb_hydr_static_v6_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[302] /* chwp_4.preSou.m_flow_internal variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
chwp_4.senRelPre.port_a.h_outflow = 0.0
*/
void nb_hydr_static_v6_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[305] /* chwp_4.senRelPre.port_a.h_outflow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
chwp_4.senRelPre.port_b.h_outflow = 0.0
*/
void nb_hydr_static_v6_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  (data->localData[0]->realVars[307] /* chwp_4.senRelPre.port_b.h_outflow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
chw_sup_P.port.h_outflow = 0.0
*/
void nb_hydr_static_v6_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[187] /* chw_sup_P.port.h_outflow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
chw_ret_P.port.h_outflow = 0.0
*/
void nb_hydr_static_v6_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[180] /* chw_ret_P.port.h_outflow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
chw_term_P.port.m_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[190] /* chw_term_P.port.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
chw_term_P.port.h_outflow = 0.0
*/
void nb_hydr_static_v6_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[189] /* chw_term_P.port.h_outflow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
conPID.I.y_reset_internal = 0.0
*/
void nb_hydr_static_v6_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[317] /* conPID.I.y_reset_internal variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
conPID.I.trigger_internal = false
*/
void nb_hydr_static_v6_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->booleanVars[0] /* conPID.I.trigger_internal DISCRETE */) = 0 /* false */;
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
conPID.y_reset_internal = 0.0
*/
void nb_hydr_static_v6_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[326] /* conPID.y_reset_internal variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
checkvalve_4.relativeFlowCoefficient = nb_hydr_static_v6.checkvalve_4.valveCharacteristic(val_pos_4.k)
*/
void nb_hydr_static_v6_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->realVars[167] /* checkvalve_4.relativeFlowCoefficient variable */) = omc_nb__hydr__static__v6_checkvalve__4_valveCharacteristic(threadData, (data->simulationInfo->realParameter[1795] /* val_pos_4.k PARAM */));
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
checkvalve_3.relativeFlowCoefficient = nb_hydr_static_v6.checkvalve_3.valveCharacteristic(val_pos_3.k)
*/
void nb_hydr_static_v6_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[155] /* checkvalve_3.relativeFlowCoefficient variable */) = omc_nb__hydr__static__v6_checkvalve__3_valveCharacteristic(threadData, (data->simulationInfo->realParameter[1793] /* val_pos_3.k PARAM */));
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
checkvalve_2.relativeFlowCoefficient = nb_hydr_static_v6.checkvalve_2.valveCharacteristic(val_pos_2.k)
*/
void nb_hydr_static_v6_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[143] /* checkvalve_2.relativeFlowCoefficient variable */) = omc_nb__hydr__static__v6_checkvalve__2_valveCharacteristic(threadData, (data->simulationInfo->realParameter[1791] /* val_pos_2.k PARAM */));
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
checkvalve_1.relativeFlowCoefficient = nb_hydr_static_v6.checkvalve_1.valveCharacteristic(val_pos_1.k)
*/
void nb_hydr_static_v6_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[131] /* checkvalve_1.relativeFlowCoefficient variable */) = omc_nb__hydr__static__v6_checkvalve__1_valveCharacteristic(threadData, (data->simulationInfo->realParameter[1789] /* val_pos_1.k PARAM */));
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
chwp_4.inputSwitch.y = chwp_4.gaiSpe.k * pump_speed_4.k
*/
void nb_hydr_static_v6_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[298] /* chwp_4.inputSwitch.y variable */) = ((data->simulationInfo->realParameter[1563] /* chwp_4.gaiSpe.k PARAM */)) * ((data->simulationInfo->realParameter[1739] /* pump_speed_4.k PARAM */));
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
chwp_4.filter.uu[1] = chwp_4.inputSwitch.y / chwp_4.filter.u_nominal
*/
void nb_hydr_static_v6_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[292] /* chwp_4.filter.uu[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[298] /* chwp_4.inputSwitch.y variable */),(data->simulationInfo->realParameter[1559] /* chwp_4.filter.u_nominal PARAM */),"chwp_4.filter.u_nominal",equationIndexes);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
chwp_3.inputSwitch.y = chwp_3.gaiSpe.k * pump_speed_3.k
*/
void nb_hydr_static_v6_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[267] /* chwp_3.inputSwitch.y variable */) = ((data->simulationInfo->realParameter[1180] /* chwp_3.gaiSpe.k PARAM */)) * ((data->simulationInfo->realParameter[1737] /* pump_speed_3.k PARAM */));
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
chwp_3.filter.uu[1] = chwp_3.inputSwitch.y / chwp_3.filter.u_nominal
*/
void nb_hydr_static_v6_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[261] /* chwp_3.filter.uu[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[267] /* chwp_3.inputSwitch.y variable */),(data->simulationInfo->realParameter[1176] /* chwp_3.filter.u_nominal PARAM */),"chwp_3.filter.u_nominal",equationIndexes);
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
chwp_2.inputSwitch.y = chwp_2.gaiSpe.k * pump_speed_2.k
*/
void nb_hydr_static_v6_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[236] /* chwp_2.inputSwitch.y variable */) = ((data->simulationInfo->realParameter[797] /* chwp_2.gaiSpe.k PARAM */)) * ((data->simulationInfo->realParameter[1735] /* pump_speed_2.k PARAM */));
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
chwp_2.filter.uu[1] = chwp_2.inputSwitch.y / chwp_2.filter.u_nominal
*/
void nb_hydr_static_v6_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[230] /* chwp_2.filter.uu[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[236] /* chwp_2.inputSwitch.y variable */),(data->simulationInfo->realParameter[793] /* chwp_2.filter.u_nominal PARAM */),"chwp_2.filter.u_nominal",equationIndexes);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_989(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_990(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_985(DATA *data, threadData_t *threadData);


/*
equation index: 45
type: SIMPLE_ASSIGN
chw_ret.ports[1].h_outflow = nb_hydr_static_v6.chw_ret.Medium.specificEnthalpy(nb_hydr_static_v6.chw_ret.Medium.setState_pTX(ret_p.k, chw_ret.T, chw_ret.X_in_internal))
*/
void nb_hydr_static_v6_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  real_array tmp0;
  real_array_create(&tmp0, ((modelica_real*)&((&data->localData[0]->realVars[178] /* chw_ret.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  (data->localData[0]->realVars[179] /* chw_ret.ports[1].h_outflow variable */) = omc_nb__hydr__static__v6_chw__ret_Medium_specificEnthalpy(threadData, omc_nb__hydr__static__v6_chw__ret_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->simulationInfo->realParameter[130] /* chw_ret.T PARAM */), tmp0));
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_986(DATA *data, threadData_t *threadData);


/*
equation index: 47
type: SIMPLE_ASSIGN
chw_sup.ports[2].h_outflow = nb_hydr_static_v6.chw_sup.Medium.specificEnthalpy(nb_hydr_static_v6.chw_sup.Medium.setState_pTX(ret_p.k, chw_sup.T, chw_sup.X_in_internal))
*/
void nb_hydr_static_v6_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  real_array tmp1;
  real_array_create(&tmp1, ((modelica_real*)&((&data->localData[0]->realVars[183] /* chw_sup.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  (data->localData[0]->realVars[184] /* chw_sup.ports[2].h_outflow variable */) = omc_nb__hydr__static__v6_chw__sup_Medium_specificEnthalpy(threadData, omc_nb__hydr__static__v6_chw__sup_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->simulationInfo->realParameter[143] /* chw_sup.T PARAM */), tmp1));
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
$START.chwp_1.vol.hOut_internal = nb_hydr_static_v6.chwp_1.vol.Medium.specificEnthalpy_pTX(chwp_1.vol.p_start, chwp_1.vol.T_start, chwp_1.vol.X_start)
*/
void nb_hydr_static_v6_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  real_array tmp2;
  real_array_create(&tmp2, ((modelica_real*)&((&data->simulationInfo->realParameter[505] /* chwp_1.vol.X_start[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  (data->modelData->realVarsData[217] /* chwp_1.vol.hOut_internal variable */).attribute .start = omc_nb__hydr__static__v6_chwp__1_vol_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[510] /* chwp_1.vol.p_start PARAM */), (data->simulationInfo->realParameter[502] /* chwp_1.vol.T_start PARAM */), tmp2);
    (data->localData[0]->realVars[217] /* chwp_1.vol.hOut_internal variable */) = (data->modelData->realVarsData[217] /* chwp_1.vol.hOut_internal variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[217].info /* chwp_1.vol.hOut_internal */.name, (modelica_real) (data->localData[0]->realVars[217] /* chwp_1.vol.hOut_internal variable */));
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
$START.chwp_2.vol.hOut_internal = nb_hydr_static_v6.chwp_2.vol.Medium.specificEnthalpy_pTX(chwp_2.vol.p_start, chwp_2.vol.T_start, chwp_2.vol.X_start)
*/
void nb_hydr_static_v6_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  real_array tmp3;
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[887] /* chwp_2.vol.X_start[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  (data->modelData->realVarsData[248] /* chwp_2.vol.hOut_internal variable */).attribute .start = omc_nb__hydr__static__v6_chwp__2_vol_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[892] /* chwp_2.vol.p_start PARAM */), (data->simulationInfo->realParameter[884] /* chwp_2.vol.T_start PARAM */), tmp3);
    (data->localData[0]->realVars[248] /* chwp_2.vol.hOut_internal variable */) = (data->modelData->realVarsData[248] /* chwp_2.vol.hOut_internal variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[248].info /* chwp_2.vol.hOut_internal */.name, (modelica_real) (data->localData[0]->realVars[248] /* chwp_2.vol.hOut_internal variable */));
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
$START.chwp_3.vol.hOut_internal = nb_hydr_static_v6.chwp_3.vol.Medium.specificEnthalpy_pTX(chwp_3.vol.p_start, chwp_3.vol.T_start, chwp_3.vol.X_start)
*/
void nb_hydr_static_v6_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  real_array tmp4;
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[1270] /* chwp_3.vol.X_start[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  (data->modelData->realVarsData[279] /* chwp_3.vol.hOut_internal variable */).attribute .start = omc_nb__hydr__static__v6_chwp__3_vol_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[1275] /* chwp_3.vol.p_start PARAM */), (data->simulationInfo->realParameter[1267] /* chwp_3.vol.T_start PARAM */), tmp4);
    (data->localData[0]->realVars[279] /* chwp_3.vol.hOut_internal variable */) = (data->modelData->realVarsData[279] /* chwp_3.vol.hOut_internal variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[279].info /* chwp_3.vol.hOut_internal */.name, (modelica_real) (data->localData[0]->realVars[279] /* chwp_3.vol.hOut_internal variable */));
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
$START.chwp_4.vol.hOut_internal = nb_hydr_static_v6.chwp_4.vol.Medium.specificEnthalpy_pTX(chwp_4.vol.p_start, chwp_4.vol.T_start, chwp_4.vol.X_start)
*/
void nb_hydr_static_v6_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  real_array tmp5;
  real_array_create(&tmp5, ((modelica_real*)&((&data->simulationInfo->realParameter[1653] /* chwp_4.vol.X_start[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  (data->modelData->realVarsData[310] /* chwp_4.vol.hOut_internal variable */).attribute .start = omc_nb__hydr__static__v6_chwp__4_vol_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[1658] /* chwp_4.vol.p_start PARAM */), (data->simulationInfo->realParameter[1650] /* chwp_4.vol.T_start PARAM */), tmp5);
    (data->localData[0]->realVars[310] /* chwp_4.vol.hOut_internal variable */) = (data->modelData->realVarsData[310] /* chwp_4.vol.hOut_internal variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[310].info /* chwp_4.vol.hOut_internal */.name, (modelica_real) (data->localData[0]->realVars[310] /* chwp_4.vol.hOut_internal variable */));
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
conPID.I.y = 0.0
*/
void nb_hydr_static_v6_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[8] /* conPID.I.y STATE(1) */) = 0.0;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
checkvalve_4.Av = checkvalve_4.m_flow_nominal / (nb_hydr_static_v6.checkvalve_4.valveCharacteristic(checkvalve_4.opening_nominal) * Modelica.Fluid.Utilities.regRoot(checkvalve_4.dp_nominal, checkvalve_4.dp_small) * sqrt(checkvalve_4.rho_nominal))
*/
void nb_hydr_static_v6_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  modelica_real tmp6;
  tmp6 = (data->simulationInfo->realParameter[70] /* checkvalve_4.rho_nominal PARAM */);
  if(!(tmp6 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(checkvalve_4.rho_nominal) was %g should be >= 0", tmp6);
    }
  }
  (data->simulationInfo->realParameter[54] /* checkvalve_4.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[62] /* checkvalve_4.m_flow_nominal PARAM */),((omc_nb__hydr__static__v6_checkvalve__4_valveCharacteristic(threadData, (data->simulationInfo->realParameter[69] /* checkvalve_4.opening_nominal PARAM */))) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->simulationInfo->realParameter[57] /* checkvalve_4.dp_nominal PARAM */), (data->simulationInfo->realParameter[58] /* checkvalve_4.dp_small PARAM */)))) * (sqrt(tmp6)),"nb_hydr_static_v6.checkvalve_4.valveCharacteristic(checkvalve_4.opening_nominal) * Modelica.Fluid.Utilities.regRoot(checkvalve_4.dp_nominal, checkvalve_4.dp_small) * sqrt(checkvalve_4.rho_nominal)",equationIndexes);
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
checkvalve_3.Av = checkvalve_3.m_flow_nominal / (nb_hydr_static_v6.checkvalve_3.valveCharacteristic(checkvalve_3.opening_nominal) * Modelica.Fluid.Utilities.regRoot(checkvalve_3.dp_nominal, checkvalve_3.dp_small) * sqrt(checkvalve_3.rho_nominal))
*/
void nb_hydr_static_v6_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  modelica_real tmp7;
  tmp7 = (data->simulationInfo->realParameter[52] /* checkvalve_3.rho_nominal PARAM */);
  if(!(tmp7 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(checkvalve_3.rho_nominal) was %g should be >= 0", tmp7);
    }
  }
  (data->simulationInfo->realParameter[36] /* checkvalve_3.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[44] /* checkvalve_3.m_flow_nominal PARAM */),((omc_nb__hydr__static__v6_checkvalve__3_valveCharacteristic(threadData, (data->simulationInfo->realParameter[51] /* checkvalve_3.opening_nominal PARAM */))) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->simulationInfo->realParameter[39] /* checkvalve_3.dp_nominal PARAM */), (data->simulationInfo->realParameter[40] /* checkvalve_3.dp_small PARAM */)))) * (sqrt(tmp7)),"nb_hydr_static_v6.checkvalve_3.valveCharacteristic(checkvalve_3.opening_nominal) * Modelica.Fluid.Utilities.regRoot(checkvalve_3.dp_nominal, checkvalve_3.dp_small) * sqrt(checkvalve_3.rho_nominal)",equationIndexes);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
checkvalve_2.Av = checkvalve_2.m_flow_nominal / (nb_hydr_static_v6.checkvalve_2.valveCharacteristic(checkvalve_2.opening_nominal) * Modelica.Fluid.Utilities.regRoot(checkvalve_2.dp_nominal, checkvalve_2.dp_small) * sqrt(checkvalve_2.rho_nominal))
*/
void nb_hydr_static_v6_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  modelica_real tmp8;
  tmp8 = (data->simulationInfo->realParameter[34] /* checkvalve_2.rho_nominal PARAM */);
  if(!(tmp8 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(checkvalve_2.rho_nominal) was %g should be >= 0", tmp8);
    }
  }
  (data->simulationInfo->realParameter[18] /* checkvalve_2.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[26] /* checkvalve_2.m_flow_nominal PARAM */),((omc_nb__hydr__static__v6_checkvalve__2_valveCharacteristic(threadData, (data->simulationInfo->realParameter[33] /* checkvalve_2.opening_nominal PARAM */))) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->simulationInfo->realParameter[21] /* checkvalve_2.dp_nominal PARAM */), (data->simulationInfo->realParameter[22] /* checkvalve_2.dp_small PARAM */)))) * (sqrt(tmp8)),"nb_hydr_static_v6.checkvalve_2.valveCharacteristic(checkvalve_2.opening_nominal) * Modelica.Fluid.Utilities.regRoot(checkvalve_2.dp_nominal, checkvalve_2.dp_small) * sqrt(checkvalve_2.rho_nominal)",equationIndexes);
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
checkvalve_1.Av = checkvalve_1.m_flow_nominal / (nb_hydr_static_v6.checkvalve_1.valveCharacteristic(checkvalve_1.opening_nominal) * Modelica.Fluid.Utilities.regRoot(checkvalve_1.dp_nominal, checkvalve_1.dp_small) * sqrt(checkvalve_1.rho_nominal))
*/
void nb_hydr_static_v6_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  modelica_real tmp9;
  tmp9 = (data->simulationInfo->realParameter[16] /* checkvalve_1.rho_nominal PARAM */);
  if(!(tmp9 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(checkvalve_1.rho_nominal) was %g should be >= 0", tmp9);
    }
  }
  (data->simulationInfo->realParameter[0] /* checkvalve_1.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[8] /* checkvalve_1.m_flow_nominal PARAM */),((omc_nb__hydr__static__v6_checkvalve__1_valveCharacteristic(threadData, (data->simulationInfo->realParameter[15] /* checkvalve_1.opening_nominal PARAM */))) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->simulationInfo->realParameter[3] /* checkvalve_1.dp_nominal PARAM */), (data->simulationInfo->realParameter[4] /* checkvalve_1.dp_small PARAM */)))) * (sqrt(tmp9)),"nb_hydr_static_v6.checkvalve_1.valveCharacteristic(checkvalve_1.opening_nominal) * Modelica.Fluid.Utilities.regRoot(checkvalve_1.dp_nominal, checkvalve_1.dp_small) * sqrt(checkvalve_1.rho_nominal)",equationIndexes);
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
terminal_resist.Kv_SI = terminal_resist.m_flow_nominal / sqrt(terminal_resist.dpValve_nominal)
*/
void nb_hydr_static_v6_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  modelica_real tmp10;
  tmp10 = (data->simulationInfo->realParameter[1761] /* terminal_resist.dpValve_nominal PARAM */);
  if(!(tmp10 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(terminal_resist.dpValve_nominal) was %g should be >= 0", tmp10);
    }
  }
  (data->simulationInfo->realParameter[1756] /* terminal_resist.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1779] /* terminal_resist.m_flow_nominal PARAM */),sqrt(tmp10),"sqrt(terminal_resist.dpValve_nominal)",equationIndexes);
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
terminal_resist.Kv = 1138419.957660617 * terminal_resist.Kv_SI / terminal_resist.rhoStd
*/
void nb_hydr_static_v6_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  (data->simulationInfo->realParameter[1755] /* terminal_resist.Kv PARAM */) = (1138419.957660617) * (DIVISION_SIM((data->simulationInfo->realParameter[1756] /* terminal_resist.Kv_SI PARAM */),(data->simulationInfo->realParameter[1784] /* terminal_resist.rhoStd PARAM */),"terminal_resist.rhoStd",equationIndexes));
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
terminal_resist.Cv = 83036.13671167512 * terminal_resist.Kv_SI / (terminal_resist.rhoStd * 0.0631)
*/
void nb_hydr_static_v6_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  (data->simulationInfo->realParameter[1754] /* terminal_resist.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[1756] /* terminal_resist.Kv_SI PARAM */)),((data->simulationInfo->realParameter[1784] /* terminal_resist.rhoStd PARAM */)) * (0.0631),"terminal_resist.rhoStd * 0.0631",equationIndexes);
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
terminal_resist.Av = terminal_resist.Kv_SI / sqrt(terminal_resist.rhoStd)
*/
void nb_hydr_static_v6_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  modelica_real tmp11;
  tmp11 = (data->simulationInfo->realParameter[1784] /* terminal_resist.rhoStd PARAM */);
  if(!(tmp11 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(terminal_resist.rhoStd) was %g should be >= 0", tmp11);
    }
  }
  (data->simulationInfo->realParameter[1753] /* terminal_resist.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[1756] /* terminal_resist.Kv_SI PARAM */),sqrt(tmp11),"sqrt(terminal_resist.rhoStd)",equationIndexes);
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
$DER.terminal_resist.filter.x[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  (data->localData[0]->realVars[20] /* der(terminal_resist.filter.x[1]) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
terminal_resist.filter.y = terminal_resist.filter.y_start
*/
void nb_hydr_static_v6_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[346] /* terminal_resist.filter.y variable */) = (data->simulationInfo->realParameter[1776] /* terminal_resist.filter.y_start PARAM */);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1003(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1004(DATA *data, threadData_t *threadData);


/*
equation index: 65
type: SIMPLE_ASSIGN
terminal_resist.filter.x[2] = terminal_resist.filter.y / (terminal_resist.filter.gain * terminal_resist.filter.u_nominal)
*/
void nb_hydr_static_v6_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  (data->localData[0]->realVars[10] /* terminal_resist.filter.x[2] STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[346] /* terminal_resist.filter.y variable */),((data->simulationInfo->realParameter[1770] /* terminal_resist.filter.gain PARAM */)) * ((data->simulationInfo->realParameter[1773] /* terminal_resist.filter.u_nominal PARAM */)),"terminal_resist.filter.gain * terminal_resist.filter.u_nominal",equationIndexes);
  TRACE_POP
}

/*
equation index: 66
type: ARRAY_CALL_ASSIGN

terminal_resist.filter.cr = Modelica.Blocks.Continuous.Internal.Filter.base.CriticalDamping(2, terminal_resist.filter.normalized)
*/
void nb_hydr_static_v6_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  real_array tmp12;
  real_array_create(&tmp12, ((modelica_real*)&((&(data->simulationInfo->realParameter[1766] /* terminal_resist.filter.cr[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData, ((modelica_integer) 2), (data->simulationInfo->booleanParameter[232] /* terminal_resist.filter.normalized PARAM */)), tmp12);
  TRACE_POP
}

/*
equation index: 67
type: ALGORITHM

  (terminal_resist.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(terminal_resist.filter.cr, {}, {}, terminal_resist.filter.f_cut);
*/
void nb_hydr_static_v6_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  real_array tmp13;
  base_array_t tmp14;
  base_array_t tmp15;
  real_array tmp16;
  real_array_create(&tmp13, ((modelica_real*)&((&data->simulationInfo->realParameter[1766] /* terminal_resist.filter.cr[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  simple_alloc_1d_base_array(&tmp14, 0, NULL);
  simple_alloc_1d_base_array(&tmp15, 0, NULL);
  real_array_create(&tmp16, ((modelica_real*)&((&(data->simulationInfo->realParameter[1771] /* terminal_resist.filter.r[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp13, tmp14, tmp15, (data->simulationInfo->realParameter[1768] /* terminal_resist.filter.f_cut PARAM */) ,NULL ,NULL ,NULL), tmp16);
  TRACE_POP
}

/*
equation index: 68
type: ARRAY_CALL_ASSIGN

chwp_4.eff.preDer3 = Buildings.Utilities.Math.Functions.splineDerivatives({chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]}, Buildings.Utilities.Math.Functions.isMonotonic({909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]}, false))
*/
void nb_hydr_static_v6_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  real_array tmp17;
  real_array tmp18;
  real_array tmp19;
  real_array tmp20;
  array_alloc_scalar_real_array(&tmp17, 19, (modelica_real)(data->simulationInfo->realParameter[1390] /* chwp_4.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp18, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1410] /* chwp_4.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1411] /* chwp_4.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1412] /* chwp_4.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1413] /* chwp_4.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1414] /* chwp_4.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1415] /* chwp_4.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1416] /* chwp_4.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1417] /* chwp_4.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1418] /* chwp_4.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1419] /* chwp_4.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1420] /* chwp_4.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1421] /* chwp_4.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1422] /* chwp_4.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1423] /* chwp_4.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1424] /* chwp_4.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1425] /* chwp_4.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1426] /* chwp_4.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1427] /* chwp_4.eff.pCur3.dp[19] PARAM */));
  array_alloc_scalar_real_array(&tmp19, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1410] /* chwp_4.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1411] /* chwp_4.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1412] /* chwp_4.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1413] /* chwp_4.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1414] /* chwp_4.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1415] /* chwp_4.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1416] /* chwp_4.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1417] /* chwp_4.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1418] /* chwp_4.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1419] /* chwp_4.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1420] /* chwp_4.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1421] /* chwp_4.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1422] /* chwp_4.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1423] /* chwp_4.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1424] /* chwp_4.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1425] /* chwp_4.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1426] /* chwp_4.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1427] /* chwp_4.eff.pCur3.dp[19] PARAM */));
  real_array_create(&tmp20, ((modelica_real*)&((&(data->simulationInfo->realParameter[1531] /* chwp_4.eff.preDer3[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, tmp17, tmp18, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, tmp19, 0 /* false */)), tmp20);
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
$DER.chwp_4.filter.x[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->realVars[17] /* der(chwp_4.filter.x[1]) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
chwp_4.filter.y = chwp_4.filter.y_start
*/
void nb_hydr_static_v6_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[293] /* chwp_4.filter.y variable */) = (data->simulationInfo->realParameter[1562] /* chwp_4.filter.y_start PARAM */);
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
chwp_4.filter.x[2] = chwp_4.filter.y / (chwp_4.filter.gain * chwp_4.filter.u_nominal)
*/
void nb_hydr_static_v6_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[7] /* chwp_4.filter.x[2] STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[293] /* chwp_4.filter.y variable */),((data->simulationInfo->realParameter[1556] /* chwp_4.filter.gain PARAM */)) * ((data->simulationInfo->realParameter[1559] /* chwp_4.filter.u_nominal PARAM */)),"chwp_4.filter.gain * chwp_4.filter.u_nominal",equationIndexes);
  TRACE_POP
}

/*
equation index: 72
type: ARRAY_CALL_ASSIGN

chwp_4.filter.cr = Modelica.Blocks.Continuous.Internal.Filter.base.CriticalDamping(2, chwp_4.filter.normalized)
*/
void nb_hydr_static_v6_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  real_array tmp21;
  real_array_create(&tmp21, ((modelica_real*)&((&(data->simulationInfo->realParameter[1552] /* chwp_4.filter.cr[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData, ((modelica_integer) 2), (data->simulationInfo->booleanParameter[196] /* chwp_4.filter.normalized PARAM */)), tmp21);
  TRACE_POP
}

/*
equation index: 73
type: ALGORITHM

  (chwp_4.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(chwp_4.filter.cr, {}, {}, chwp_4.filter.f_cut);
*/
void nb_hydr_static_v6_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  real_array tmp22;
  base_array_t tmp23;
  base_array_t tmp24;
  real_array tmp25;
  real_array_create(&tmp22, ((modelica_real*)&((&data->simulationInfo->realParameter[1552] /* chwp_4.filter.cr[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  simple_alloc_1d_base_array(&tmp23, 0, NULL);
  simple_alloc_1d_base_array(&tmp24, 0, NULL);
  real_array_create(&tmp25, ((modelica_real*)&((&(data->simulationInfo->realParameter[1557] /* chwp_4.filter.r[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp22, tmp23, tmp24, (data->simulationInfo->realParameter[1554] /* chwp_4.filter.f_cut PARAM */) ,NULL ,NULL ,NULL), tmp25);
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
chwp_4.filter.x[1] = $DER.chwp_4.filter.x[1] / chwp_4.filter.r[1] + chwp_4.filter.uu[1]
*/
void nb_hydr_static_v6_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->realVars[6] /* chwp_4.filter.x[1] STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[17] /* der(chwp_4.filter.x[1]) STATE_DER */),(data->simulationInfo->realParameter[1557] /* chwp_4.filter.r[1] PARAM */),"chwp_4.filter.r[1]",equationIndexes) + (data->localData[0]->realVars[292] /* chwp_4.filter.uu[1] variable */);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_999(DATA *data, threadData_t *threadData);


/*
equation index: 76
type: ARRAY_CALL_ASSIGN

chwp_3.eff.preDer3 = Buildings.Utilities.Math.Functions.splineDerivatives({chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]}, Buildings.Utilities.Math.Functions.isMonotonic({909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]}, false))
*/
void nb_hydr_static_v6_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  real_array tmp26;
  real_array tmp27;
  real_array tmp28;
  real_array tmp29;
  array_alloc_scalar_real_array(&tmp26, 19, (modelica_real)(data->simulationInfo->realParameter[1007] /* chwp_3.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp27, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1027] /* chwp_3.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1028] /* chwp_3.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1029] /* chwp_3.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1030] /* chwp_3.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1031] /* chwp_3.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1032] /* chwp_3.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1033] /* chwp_3.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1034] /* chwp_3.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1035] /* chwp_3.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1036] /* chwp_3.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1037] /* chwp_3.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1038] /* chwp_3.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1039] /* chwp_3.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1040] /* chwp_3.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1041] /* chwp_3.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1042] /* chwp_3.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1043] /* chwp_3.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1044] /* chwp_3.eff.pCur3.dp[19] PARAM */));
  array_alloc_scalar_real_array(&tmp28, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[1027] /* chwp_3.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1028] /* chwp_3.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1029] /* chwp_3.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1030] /* chwp_3.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1031] /* chwp_3.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1032] /* chwp_3.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1033] /* chwp_3.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1034] /* chwp_3.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1035] /* chwp_3.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1036] /* chwp_3.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1037] /* chwp_3.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1038] /* chwp_3.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1039] /* chwp_3.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1040] /* chwp_3.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1041] /* chwp_3.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1042] /* chwp_3.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1043] /* chwp_3.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[1044] /* chwp_3.eff.pCur3.dp[19] PARAM */));
  real_array_create(&tmp29, ((modelica_real*)&((&(data->simulationInfo->realParameter[1148] /* chwp_3.eff.preDer3[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, tmp26, tmp27, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, tmp28, 0 /* false */)), tmp29);
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
$DER.chwp_3.filter.x[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->realVars[15] /* der(chwp_3.filter.x[1]) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
chwp_3.filter.y = chwp_3.filter.y_start
*/
void nb_hydr_static_v6_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->realVars[262] /* chwp_3.filter.y variable */) = (data->simulationInfo->realParameter[1179] /* chwp_3.filter.y_start PARAM */);
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
chwp_3.filter.x[2] = chwp_3.filter.y / (chwp_3.filter.gain * chwp_3.filter.u_nominal)
*/
void nb_hydr_static_v6_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[5] /* chwp_3.filter.x[2] STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[262] /* chwp_3.filter.y variable */),((data->simulationInfo->realParameter[1173] /* chwp_3.filter.gain PARAM */)) * ((data->simulationInfo->realParameter[1176] /* chwp_3.filter.u_nominal PARAM */)),"chwp_3.filter.gain * chwp_3.filter.u_nominal",equationIndexes);
  TRACE_POP
}

/*
equation index: 80
type: ARRAY_CALL_ASSIGN

chwp_3.filter.cr = Modelica.Blocks.Continuous.Internal.Filter.base.CriticalDamping(2, chwp_3.filter.normalized)
*/
void nb_hydr_static_v6_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  real_array tmp30;
  real_array_create(&tmp30, ((modelica_real*)&((&(data->simulationInfo->realParameter[1169] /* chwp_3.filter.cr[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData, ((modelica_integer) 2), (data->simulationInfo->booleanParameter[159] /* chwp_3.filter.normalized PARAM */)), tmp30);
  TRACE_POP
}

/*
equation index: 81
type: ALGORITHM

  (chwp_3.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(chwp_3.filter.cr, {}, {}, chwp_3.filter.f_cut);
*/
void nb_hydr_static_v6_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  real_array tmp31;
  base_array_t tmp32;
  base_array_t tmp33;
  real_array tmp34;
  real_array_create(&tmp31, ((modelica_real*)&((&data->simulationInfo->realParameter[1169] /* chwp_3.filter.cr[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  simple_alloc_1d_base_array(&tmp32, 0, NULL);
  simple_alloc_1d_base_array(&tmp33, 0, NULL);
  real_array_create(&tmp34, ((modelica_real*)&((&(data->simulationInfo->realParameter[1174] /* chwp_3.filter.r[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp31, tmp32, tmp33, (data->simulationInfo->realParameter[1171] /* chwp_3.filter.f_cut PARAM */) ,NULL ,NULL ,NULL), tmp34);
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
chwp_3.filter.x[1] = $DER.chwp_3.filter.x[1] / chwp_3.filter.r[1] + chwp_3.filter.uu[1]
*/
void nb_hydr_static_v6_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->realVars[4] /* chwp_3.filter.x[1] STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[15] /* der(chwp_3.filter.x[1]) STATE_DER */),(data->simulationInfo->realParameter[1174] /* chwp_3.filter.r[1] PARAM */),"chwp_3.filter.r[1]",equationIndexes) + (data->localData[0]->realVars[261] /* chwp_3.filter.uu[1] variable */);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_996(DATA *data, threadData_t *threadData);


/*
equation index: 84
type: ARRAY_CALL_ASSIGN

chwp_2.eff.preDer3 = Buildings.Utilities.Math.Functions.splineDerivatives({chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]}, Buildings.Utilities.Math.Functions.isMonotonic({909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]}, false))
*/
void nb_hydr_static_v6_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  real_array tmp35;
  real_array tmp36;
  real_array tmp37;
  real_array tmp38;
  array_alloc_scalar_real_array(&tmp35, 19, (modelica_real)(data->simulationInfo->realParameter[624] /* chwp_2.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp36, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[644] /* chwp_2.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[645] /* chwp_2.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[646] /* chwp_2.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[647] /* chwp_2.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[648] /* chwp_2.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[649] /* chwp_2.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[650] /* chwp_2.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[651] /* chwp_2.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[652] /* chwp_2.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[653] /* chwp_2.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[654] /* chwp_2.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[655] /* chwp_2.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[656] /* chwp_2.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[657] /* chwp_2.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[658] /* chwp_2.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[659] /* chwp_2.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[660] /* chwp_2.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[661] /* chwp_2.eff.pCur3.dp[19] PARAM */));
  array_alloc_scalar_real_array(&tmp37, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[644] /* chwp_2.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[645] /* chwp_2.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[646] /* chwp_2.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[647] /* chwp_2.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[648] /* chwp_2.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[649] /* chwp_2.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[650] /* chwp_2.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[651] /* chwp_2.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[652] /* chwp_2.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[653] /* chwp_2.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[654] /* chwp_2.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[655] /* chwp_2.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[656] /* chwp_2.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[657] /* chwp_2.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[658] /* chwp_2.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[659] /* chwp_2.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[660] /* chwp_2.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[661] /* chwp_2.eff.pCur3.dp[19] PARAM */));
  real_array_create(&tmp38, ((modelica_real*)&((&(data->simulationInfo->realParameter[765] /* chwp_2.eff.preDer3[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, tmp35, tmp36, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, tmp37, 0 /* false */)), tmp38);
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
$DER.chwp_2.filter.x[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->realVars[13] /* der(chwp_2.filter.x[1]) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
chwp_2.filter.y = chwp_2.filter.y_start
*/
void nb_hydr_static_v6_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->realVars[231] /* chwp_2.filter.y variable */) = (data->simulationInfo->realParameter[796] /* chwp_2.filter.y_start PARAM */);
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
chwp_2.filter.x[2] = chwp_2.filter.y / (chwp_2.filter.gain * chwp_2.filter.u_nominal)
*/
void nb_hydr_static_v6_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  (data->localData[0]->realVars[3] /* chwp_2.filter.x[2] STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[231] /* chwp_2.filter.y variable */),((data->simulationInfo->realParameter[790] /* chwp_2.filter.gain PARAM */)) * ((data->simulationInfo->realParameter[793] /* chwp_2.filter.u_nominal PARAM */)),"chwp_2.filter.gain * chwp_2.filter.u_nominal",equationIndexes);
  TRACE_POP
}

/*
equation index: 88
type: ARRAY_CALL_ASSIGN

chwp_2.filter.cr = Modelica.Blocks.Continuous.Internal.Filter.base.CriticalDamping(2, chwp_2.filter.normalized)
*/
void nb_hydr_static_v6_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  real_array tmp39;
  real_array_create(&tmp39, ((modelica_real*)&((&(data->simulationInfo->realParameter[786] /* chwp_2.filter.cr[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData, ((modelica_integer) 2), (data->simulationInfo->booleanParameter[122] /* chwp_2.filter.normalized PARAM */)), tmp39);
  TRACE_POP
}

/*
equation index: 89
type: ALGORITHM

  (chwp_2.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(chwp_2.filter.cr, {}, {}, chwp_2.filter.f_cut);
*/
void nb_hydr_static_v6_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  real_array tmp40;
  base_array_t tmp41;
  base_array_t tmp42;
  real_array tmp43;
  real_array_create(&tmp40, ((modelica_real*)&((&data->simulationInfo->realParameter[786] /* chwp_2.filter.cr[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  simple_alloc_1d_base_array(&tmp41, 0, NULL);
  simple_alloc_1d_base_array(&tmp42, 0, NULL);
  real_array_create(&tmp43, ((modelica_real*)&((&(data->simulationInfo->realParameter[791] /* chwp_2.filter.r[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp40, tmp41, tmp42, (data->simulationInfo->realParameter[788] /* chwp_2.filter.f_cut PARAM */) ,NULL ,NULL ,NULL), tmp43);
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
chwp_2.filter.x[1] = $DER.chwp_2.filter.x[1] / chwp_2.filter.r[1] + chwp_2.filter.uu[1]
*/
void nb_hydr_static_v6_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[2] /* chwp_2.filter.x[1] STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[13] /* der(chwp_2.filter.x[1]) STATE_DER */),(data->simulationInfo->realParameter[791] /* chwp_2.filter.r[1] PARAM */),"chwp_2.filter.r[1]",equationIndexes) + (data->localData[0]->realVars[230] /* chwp_2.filter.uu[1] variable */);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_993(DATA *data, threadData_t *threadData);


/*
equation index: 92
type: ARRAY_CALL_ASSIGN

chwp_1.eff.preDer3 = Buildings.Utilities.Math.Functions.splineDerivatives({chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]}, Buildings.Utilities.Math.Functions.isMonotonic({909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]}, false))
*/
void nb_hydr_static_v6_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  real_array tmp44;
  real_array tmp45;
  real_array tmp46;
  real_array tmp47;
  array_alloc_scalar_real_array(&tmp44, 19, (modelica_real)(data->simulationInfo->realParameter[243] /* chwp_1.eff.pCur3.V_flow[1] PARAM */), (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577, (modelica_real)0.5770020020020019);
  array_alloc_scalar_real_array(&tmp45, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[263] /* chwp_1.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[264] /* chwp_1.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[265] /* chwp_1.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[266] /* chwp_1.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[267] /* chwp_1.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[268] /* chwp_1.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[269] /* chwp_1.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[270] /* chwp_1.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[271] /* chwp_1.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[272] /* chwp_1.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[273] /* chwp_1.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[274] /* chwp_1.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[275] /* chwp_1.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[276] /* chwp_1.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[277] /* chwp_1.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[278] /* chwp_1.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[279] /* chwp_1.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[280] /* chwp_1.eff.pCur3.dp[19] PARAM */));
  array_alloc_scalar_real_array(&tmp46, 19, (modelica_real)909154.9295774648, (modelica_real)(data->simulationInfo->realParameter[263] /* chwp_1.eff.pCur3.dp[2] PARAM */), (modelica_real)(data->simulationInfo->realParameter[264] /* chwp_1.eff.pCur3.dp[3] PARAM */), (modelica_real)(data->simulationInfo->realParameter[265] /* chwp_1.eff.pCur3.dp[4] PARAM */), (modelica_real)(data->simulationInfo->realParameter[266] /* chwp_1.eff.pCur3.dp[5] PARAM */), (modelica_real)(data->simulationInfo->realParameter[267] /* chwp_1.eff.pCur3.dp[6] PARAM */), (modelica_real)(data->simulationInfo->realParameter[268] /* chwp_1.eff.pCur3.dp[7] PARAM */), (modelica_real)(data->simulationInfo->realParameter[269] /* chwp_1.eff.pCur3.dp[8] PARAM */), (modelica_real)(data->simulationInfo->realParameter[270] /* chwp_1.eff.pCur3.dp[9] PARAM */), (modelica_real)(data->simulationInfo->realParameter[271] /* chwp_1.eff.pCur3.dp[10] PARAM */), (modelica_real)(data->simulationInfo->realParameter[272] /* chwp_1.eff.pCur3.dp[11] PARAM */), (modelica_real)(data->simulationInfo->realParameter[273] /* chwp_1.eff.pCur3.dp[12] PARAM */), (modelica_real)(data->simulationInfo->realParameter[274] /* chwp_1.eff.pCur3.dp[13] PARAM */), (modelica_real)(data->simulationInfo->realParameter[275] /* chwp_1.eff.pCur3.dp[14] PARAM */), (modelica_real)(data->simulationInfo->realParameter[276] /* chwp_1.eff.pCur3.dp[15] PARAM */), (modelica_real)(data->simulationInfo->realParameter[277] /* chwp_1.eff.pCur3.dp[16] PARAM */), (modelica_real)(data->simulationInfo->realParameter[278] /* chwp_1.eff.pCur3.dp[17] PARAM */), (modelica_real)(data->simulationInfo->realParameter[279] /* chwp_1.eff.pCur3.dp[18] PARAM */), (modelica_real)(data->simulationInfo->realParameter[280] /* chwp_1.eff.pCur3.dp[19] PARAM */));
  real_array_create(&tmp47, ((modelica_real*)&((&(data->simulationInfo->realParameter[384] /* chwp_1.eff.preDer3[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)19);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, tmp44, tmp45, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, tmp46, 0 /* false */)), tmp47);
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
$DER.chwp_1.filter.x[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[11] /* der(chwp_1.filter.x[1]) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
chwp_1.filter.y = chwp_1.filter.y_start
*/
void nb_hydr_static_v6_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  (data->localData[0]->realVars[200] /* chwp_1.filter.y variable */) = (data->simulationInfo->realParameter[415] /* chwp_1.filter.y_start PARAM */);
  TRACE_POP
}

void nb_hydr_static_v6_eqFunction_95(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_96(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_97(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_98(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_99(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_100(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_101(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_102(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_103(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_104(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_105(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_106(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_107(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_108(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_109(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_110(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_111(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_112(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_113(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_114(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_115(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_116(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_117(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_118(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_119(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_120(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_121(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_122(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_123(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_124(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_125(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_126(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_127(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_128(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_129(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_130(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_131(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_132(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_133(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_134(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_135(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_136(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_137(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_138(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_139(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_140(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_141(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_142(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_143(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_144(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_145(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_146(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_147(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_148(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_149(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_150(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_151(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_152(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_153(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_154(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_155(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_156(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_157(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_158(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_159(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_160(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_161(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_162(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_163(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_164(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_165(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_166(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_167(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_168(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_169(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_170(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_171(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_172(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_180(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_179(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_178(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_177(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_176(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_175(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_174(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_173(DATA*, threadData_t*);
/*
equation index: 181
indexNonlinear: 0
type: NONLINEAR

vars: {checkvalve_1.port_b.h_outflow, checkvalve_2.port_b.h_outflow, checkvalve_3.port_b.h_outflow, checkvalve_4.port_b.h_outflow, chiller_1.m_flow, chiller_4.m_flow, chiller_3.m_flow, chiller_2.m_flow}
eqns: {95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 180, 179, 178, 177, 176, 175, 174, 173}
*/
void nb_hydr_static_v6_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 181 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,181};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 181 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1164(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1192(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1176(DATA *data, threadData_t *threadData);


/*
equation index: 185
type: SIMPLE_ASSIGN
checkvalve_1.port_a_T = Modelica.Fluid.Utilities.regStep(chiller_1.m_flow, nb_hydr_static_v6.checkvalve_1.Medium.temperature(nb_hydr_static_v6.checkvalve_1.Medium.ThermodynamicState(checkvalve_1.port_a.p, checkvalve_1.state_a.T)), nb_hydr_static_v6.checkvalve_1.Medium.temperature(nb_hydr_static_v6.checkvalve_1.Medium.setState_phX(checkvalve_1.port_a.p, checkvalve_1.port_a.h_outflow, {})), checkvalve_1.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */);
  tmp0._T = (data->localData[0]->realVars[132] /* checkvalve_1.state_a.T variable */);
  (data->localData[0]->realVars[127] /* checkvalve_1.port_a_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), omc_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData, tmp0), omc_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData, omc_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX(threadData, (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */), (data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */), _OMC_LIT58)), (data->simulationInfo->realParameter[9] /* checkvalve_1.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
chwp_1.preSou.V_flow = chiller_1.m_flow / Modelica.Fluid.Utilities.regStep(chiller_1.m_flow, nb_hydr_static_v6.chwp_1.preSou.Medium.density(nb_hydr_static_v6.chwp_1.preSou.Medium.setState_phX(ret_p.k, checkvalve_1.port_b.h_outflow, {})), nb_hydr_static_v6.chwp_1.preSou.Medium.density(nb_hydr_static_v6.chwp_1.preSou.Medium.setState_phX(checkvalve_1.port_a.p, checkvalve_1.port_a.h_outflow, {})), 0.0574453122)
*/
void nb_hydr_static_v6_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  (data->localData[0]->realVars[208] /* chwp_1.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), omc_nb__hydr__static__v6_chwp__1_preSou_Medium_density(threadData, omc_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */), _OMC_LIT58)), omc_nb__hydr__static__v6_chwp__1_preSou_Medium_density(threadData, omc_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */), (data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */), _OMC_LIT58)), 0.0574453122),"Modelica.Fluid.Utilities.regStep(chiller_1.m_flow, nb_hydr_static_v6.chwp_1.preSou.Medium.density(nb_hydr_static_v6.chwp_1.preSou.Medium.setState_phX(ret_p.k, checkvalve_1.port_b.h_outflow, {})), nb_hydr_static_v6.chwp_1.preSou.Medium.density(nb_hydr_static_v6.chwp_1.preSou.Medium.setState_phX(checkvalve_1.port_a.p, checkvalve_1.port_a.h_outflow, {})), 0.0574453122)",equationIndexes);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1166(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1167(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1149(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1213(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1129(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1128(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1212(DATA *data, threadData_t *threadData);


/*
equation index: 194
type: SIMPLE_ASSIGN
checkvalve_4.port_a_T = Modelica.Fluid.Utilities.regStep(chiller_4.m_flow, nb_hydr_static_v6.checkvalve_4.Medium.temperature(nb_hydr_static_v6.checkvalve_4.Medium.ThermodynamicState(checkvalve_4.port_a.p, checkvalve_4.state_a.T)), nb_hydr_static_v6.checkvalve_4.Medium.temperature(nb_hydr_static_v6.checkvalve_4.Medium.setState_phX(checkvalve_4.port_a.p, checkvalve_4.port_a.h_outflow, {})), checkvalve_4.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp1;
  tmp1._p = (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */);
  tmp1._T = (data->localData[0]->realVars[168] /* checkvalve_4.state_a.T variable */);
  (data->localData[0]->realVars[163] /* checkvalve_4.port_a_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), omc_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData, tmp1), omc_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData, omc_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX(threadData, (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */), (data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */), _OMC_LIT58)), (data->simulationInfo->realParameter[63] /* checkvalve_4.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
chwp_4.preSou.V_flow = chiller_4.m_flow / Modelica.Fluid.Utilities.regStep(chiller_4.m_flow, nb_hydr_static_v6.chwp_4.preSou.Medium.density(nb_hydr_static_v6.chwp_4.preSou.Medium.setState_phX(ret_p.k, checkvalve_4.port_b.h_outflow, {})), nb_hydr_static_v6.chwp_4.preSou.Medium.density(nb_hydr_static_v6.chwp_4.preSou.Medium.setState_phX(checkvalve_4.port_a.p, checkvalve_4.port_a.h_outflow, {})), 0.0574453122)
*/
void nb_hydr_static_v6_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[301] /* chwp_4.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), omc_nb__hydr__static__v6_chwp__4_preSou_Medium_density(threadData, omc_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */), _OMC_LIT58)), omc_nb__hydr__static__v6_chwp__4_preSou_Medium_density(threadData, omc_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */), (data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */), _OMC_LIT58)), 0.0574453122),"Modelica.Fluid.Utilities.regStep(chiller_4.m_flow, nb_hydr_static_v6.chwp_4.preSou.Medium.density(nb_hydr_static_v6.chwp_4.preSou.Medium.setState_phX(ret_p.k, checkvalve_4.port_b.h_outflow, {})), nb_hydr_static_v6.chwp_4.preSou.Medium.density(nb_hydr_static_v6.chwp_4.preSou.Medium.setState_phX(checkvalve_4.port_a.p, checkvalve_4.port_a.h_outflow, {})), 0.0574453122)",equationIndexes);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1168(DATA *data, threadData_t *threadData);


/*
equation index: 197
type: SIMPLE_ASSIGN
checkvalve_4.port_b_T = Modelica.Fluid.Utilities.regStep(-chiller_4.m_flow, nb_hydr_static_v6.checkvalve_4.Medium.temperature(nb_hydr_static_v6.checkvalve_4.Medium.ThermodynamicState(checkvalve_4.port_b.p, checkvalve_4.state_b.T)), nb_hydr_static_v6.checkvalve_4.Medium.temperature(nb_hydr_static_v6.checkvalve_4.Medium.setState_phX(checkvalve_4.port_b.p, checkvalve_4.port_b.h_outflow, {})), checkvalve_4.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp2;
  tmp2._p = (data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */);
  tmp2._T = (data->localData[0]->realVars[169] /* checkvalve_4.state_b.T variable */);
  (data->localData[0]->realVars[166] /* checkvalve_4.port_b_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)), omc_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData, tmp2), omc_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData, omc_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX(threadData, (data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */), (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */), _OMC_LIT58)), (data->simulationInfo->realParameter[63] /* checkvalve_4.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
checkvalve_4.V_flow = chiller_4.m_flow / Modelica.Fluid.Utilities.regStep(chiller_4.m_flow, nb_hydr_static_v6.checkvalve_4.Medium.density(nb_hydr_static_v6.checkvalve_4.Medium.ThermodynamicState(checkvalve_4.port_a.p, checkvalve_4.state_a.T)), nb_hydr_static_v6.checkvalve_4.Medium.density(nb_hydr_static_v6.checkvalve_4.Medium.ThermodynamicState(checkvalve_4.port_b.p, checkvalve_4.state_b.T)), checkvalve_4.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp3;
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp4;
  tmp3._p = (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */);
  tmp3._T = (data->localData[0]->realVars[168] /* checkvalve_4.state_a.T variable */);
  tmp4._p = (data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */);
  tmp4._T = (data->localData[0]->realVars[169] /* checkvalve_4.state_b.T variable */);
  (data->localData[0]->realVars[158] /* checkvalve_4.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), omc_nb__hydr__static__v6_checkvalve__4_Medium_density(threadData, tmp3), omc_nb__hydr__static__v6_checkvalve__4_Medium_density(threadData, tmp4), (data->simulationInfo->realParameter[63] /* checkvalve_4.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(chiller_4.m_flow, nb_hydr_static_v6.checkvalve_4.Medium.density(nb_hydr_static_v6.checkvalve_4.Medium.ThermodynamicState(checkvalve_4.port_a.p, checkvalve_4.state_a.T)), nb_hydr_static_v6.checkvalve_4.Medium.density(nb_hydr_static_v6.checkvalve_4.Medium.ThermodynamicState(checkvalve_4.port_b.p, checkvalve_4.state_b.T)), checkvalve_4.m_flow_small)",equationIndexes);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1227(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1228(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1127(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1126(DATA *data, threadData_t *threadData);


/*
equation index: 203
type: SIMPLE_ASSIGN
checkvalve_2.port_b_T = Modelica.Fluid.Utilities.regStep(-chiller_2.m_flow, nb_hydr_static_v6.checkvalve_2.Medium.temperature(nb_hydr_static_v6.checkvalve_2.Medium.ThermodynamicState(checkvalve_2.port_b.p, checkvalve_2.state_b.T)), nb_hydr_static_v6.checkvalve_2.Medium.temperature(nb_hydr_static_v6.checkvalve_2.Medium.setState_phX(checkvalve_2.port_b.p, checkvalve_2.port_b.h_outflow, {})), checkvalve_2.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp5;
  tmp5._p = (data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */);
  tmp5._T = (data->localData[0]->realVars[145] /* checkvalve_2.state_b.T variable */);
  (data->localData[0]->realVars[142] /* checkvalve_2.port_b_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)), omc_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData, tmp5), omc_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData, omc_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX(threadData, (data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */), (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */), _OMC_LIT58)), (data->simulationInfo->realParameter[27] /* checkvalve_2.m_flow_small PARAM */));
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1152(DATA *data, threadData_t *threadData);


/*
equation index: 205
type: SIMPLE_ASSIGN
checkvalve_2.port_a_T = Modelica.Fluid.Utilities.regStep(chiller_2.m_flow, nb_hydr_static_v6.checkvalve_2.Medium.temperature(nb_hydr_static_v6.checkvalve_2.Medium.ThermodynamicState(checkvalve_2.port_a.p, checkvalve_2.state_a.T)), nb_hydr_static_v6.checkvalve_2.Medium.temperature(nb_hydr_static_v6.checkvalve_2.Medium.setState_phX(checkvalve_2.port_a.p, checkvalve_2.port_a.h_outflow, {})), checkvalve_2.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp6;
  tmp6._p = (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */);
  tmp6._T = (data->localData[0]->realVars[144] /* checkvalve_2.state_a.T variable */);
  (data->localData[0]->realVars[139] /* checkvalve_2.port_a_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), omc_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData, tmp6), omc_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData, omc_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX(threadData, (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */), (data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */), _OMC_LIT58)), (data->simulationInfo->realParameter[27] /* checkvalve_2.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
checkvalve_2.V_flow = chiller_2.m_flow / Modelica.Fluid.Utilities.regStep(chiller_2.m_flow, nb_hydr_static_v6.checkvalve_2.Medium.density(nb_hydr_static_v6.checkvalve_2.Medium.ThermodynamicState(checkvalve_2.port_a.p, checkvalve_2.state_a.T)), nb_hydr_static_v6.checkvalve_2.Medium.density(nb_hydr_static_v6.checkvalve_2.Medium.ThermodynamicState(checkvalve_2.port_b.p, checkvalve_2.state_b.T)), checkvalve_2.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp7;
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp8;
  tmp7._p = (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */);
  tmp7._T = (data->localData[0]->realVars[144] /* checkvalve_2.state_a.T variable */);
  tmp8._p = (data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */);
  tmp8._T = (data->localData[0]->realVars[145] /* checkvalve_2.state_b.T variable */);
  (data->localData[0]->realVars[134] /* checkvalve_2.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), omc_nb__hydr__static__v6_checkvalve__2_Medium_density(threadData, tmp7), omc_nb__hydr__static__v6_checkvalve__2_Medium_density(threadData, tmp8), (data->simulationInfo->realParameter[27] /* checkvalve_2.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(chiller_2.m_flow, nb_hydr_static_v6.checkvalve_2.Medium.density(nb_hydr_static_v6.checkvalve_2.Medium.ThermodynamicState(checkvalve_2.port_a.p, checkvalve_2.state_a.T)), nb_hydr_static_v6.checkvalve_2.Medium.density(nb_hydr_static_v6.checkvalve_2.Medium.ThermodynamicState(checkvalve_2.port_b.p, checkvalve_2.state_b.T)), checkvalve_2.m_flow_small)",equationIndexes);
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
chwp_2.preSou.V_flow = chiller_2.m_flow / Modelica.Fluid.Utilities.regStep(chiller_2.m_flow, nb_hydr_static_v6.chwp_2.preSou.Medium.density(nb_hydr_static_v6.chwp_2.preSou.Medium.setState_phX(ret_p.k, checkvalve_2.port_b.h_outflow, {})), nb_hydr_static_v6.chwp_2.preSou.Medium.density(nb_hydr_static_v6.chwp_2.preSou.Medium.setState_phX(checkvalve_2.port_a.p, checkvalve_2.port_a.h_outflow, {})), 0.0574453122)
*/
void nb_hydr_static_v6_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  (data->localData[0]->realVars[239] /* chwp_2.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), omc_nb__hydr__static__v6_chwp__2_preSou_Medium_density(threadData, omc_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */), _OMC_LIT58)), omc_nb__hydr__static__v6_chwp__2_preSou_Medium_density(threadData, omc_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */), (data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */), _OMC_LIT58)), 0.0574453122),"Modelica.Fluid.Utilities.regStep(chiller_2.m_flow, nb_hydr_static_v6.chwp_2.preSou.Medium.density(nb_hydr_static_v6.chwp_2.preSou.Medium.setState_phX(ret_p.k, checkvalve_2.port_b.h_outflow, {})), nb_hydr_static_v6.chwp_2.preSou.Medium.density(nb_hydr_static_v6.chwp_2.preSou.Medium.setState_phX(checkvalve_2.port_a.p, checkvalve_2.port_a.h_outflow, {})), 0.0574453122)",equationIndexes);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1151(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1150(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1153(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1199(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1200(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1125(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1124(DATA *data, threadData_t *threadData);


/*
equation index: 215
type: SIMPLE_ASSIGN
checkvalve_3.port_a_T = Modelica.Fluid.Utilities.regStep(chiller_3.m_flow, nb_hydr_static_v6.checkvalve_3.Medium.temperature(nb_hydr_static_v6.checkvalve_3.Medium.ThermodynamicState(checkvalve_3.port_a.p, checkvalve_3.state_a.T)), nb_hydr_static_v6.checkvalve_3.Medium.temperature(nb_hydr_static_v6.checkvalve_3.Medium.setState_phX(checkvalve_3.port_a.p, checkvalve_3.port_a.h_outflow, {})), checkvalve_3.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp9;
  tmp9._p = (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */);
  tmp9._T = (data->localData[0]->realVars[156] /* checkvalve_3.state_a.T variable */);
  (data->localData[0]->realVars[151] /* checkvalve_3.port_a_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), omc_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData, tmp9), omc_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData, omc_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX(threadData, (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */), (data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */), _OMC_LIT58)), (data->simulationInfo->realParameter[45] /* checkvalve_3.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
chwp_3.preSou.V_flow = chiller_3.m_flow / Modelica.Fluid.Utilities.regStep(chiller_3.m_flow, nb_hydr_static_v6.chwp_3.preSou.Medium.density(nb_hydr_static_v6.chwp_3.preSou.Medium.setState_phX(ret_p.k, checkvalve_3.port_b.h_outflow, {})), nb_hydr_static_v6.chwp_3.preSou.Medium.density(nb_hydr_static_v6.chwp_3.preSou.Medium.setState_phX(checkvalve_3.port_a.p, checkvalve_3.port_a.h_outflow, {})), 0.0574453122)
*/
void nb_hydr_static_v6_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  (data->localData[0]->realVars[270] /* chwp_3.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), omc_nb__hydr__static__v6_chwp__3_preSou_Medium_density(threadData, omc_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */), _OMC_LIT58)), omc_nb__hydr__static__v6_chwp__3_preSou_Medium_density(threadData, omc_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */), (data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */), _OMC_LIT58)), 0.0574453122),"Modelica.Fluid.Utilities.regStep(chiller_3.m_flow, nb_hydr_static_v6.chwp_3.preSou.Medium.density(nb_hydr_static_v6.chwp_3.preSou.Medium.setState_phX(ret_p.k, checkvalve_3.port_b.h_outflow, {})), nb_hydr_static_v6.chwp_3.preSou.Medium.density(nb_hydr_static_v6.chwp_3.preSou.Medium.setState_phX(checkvalve_3.port_a.p, checkvalve_3.port_a.h_outflow, {})), 0.0574453122)",equationIndexes);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1214(DATA *data, threadData_t *threadData);


/*
equation index: 218
type: SIMPLE_ASSIGN
checkvalve_3.port_b_T = Modelica.Fluid.Utilities.regStep(-chiller_3.m_flow, nb_hydr_static_v6.checkvalve_3.Medium.temperature(nb_hydr_static_v6.checkvalve_3.Medium.ThermodynamicState(checkvalve_3.port_b.p, checkvalve_3.state_b.T)), nb_hydr_static_v6.checkvalve_3.Medium.temperature(nb_hydr_static_v6.checkvalve_3.Medium.setState_phX(checkvalve_3.port_b.p, checkvalve_3.port_b.h_outflow, {})), checkvalve_3.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp10;
  tmp10._p = (data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */);
  tmp10._T = (data->localData[0]->realVars[157] /* checkvalve_3.state_b.T variable */);
  (data->localData[0]->realVars[154] /* checkvalve_3.port_b_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)), omc_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData, tmp10), omc_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData, omc_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX(threadData, (data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */), (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */), _OMC_LIT58)), (data->simulationInfo->realParameter[45] /* checkvalve_3.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
checkvalve_3.V_flow = chiller_3.m_flow / Modelica.Fluid.Utilities.regStep(chiller_3.m_flow, nb_hydr_static_v6.checkvalve_3.Medium.density(nb_hydr_static_v6.checkvalve_3.Medium.ThermodynamicState(checkvalve_3.port_a.p, checkvalve_3.state_a.T)), nb_hydr_static_v6.checkvalve_3.Medium.density(nb_hydr_static_v6.checkvalve_3.Medium.ThermodynamicState(checkvalve_3.port_b.p, checkvalve_3.state_b.T)), checkvalve_3.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp11;
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp12;
  tmp11._p = (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */);
  tmp11._T = (data->localData[0]->realVars[156] /* checkvalve_3.state_a.T variable */);
  tmp12._p = (data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */);
  tmp12._T = (data->localData[0]->realVars[157] /* checkvalve_3.state_b.T variable */);
  (data->localData[0]->realVars[146] /* checkvalve_3.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), omc_nb__hydr__static__v6_checkvalve__3_Medium_density(threadData, tmp11), omc_nb__hydr__static__v6_checkvalve__3_Medium_density(threadData, tmp12), (data->simulationInfo->realParameter[45] /* checkvalve_3.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(chiller_3.m_flow, nb_hydr_static_v6.checkvalve_3.Medium.density(nb_hydr_static_v6.checkvalve_3.Medium.ThermodynamicState(checkvalve_3.port_a.p, checkvalve_3.state_a.T)), nb_hydr_static_v6.checkvalve_3.Medium.density(nb_hydr_static_v6.checkvalve_3.Medium.ThermodynamicState(checkvalve_3.port_b.p, checkvalve_3.state_b.T)), checkvalve_3.m_flow_small)",equationIndexes);
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
checkvalve_1.port_b_T = Modelica.Fluid.Utilities.regStep(-chiller_1.m_flow, nb_hydr_static_v6.checkvalve_1.Medium.temperature(nb_hydr_static_v6.checkvalve_1.Medium.ThermodynamicState(checkvalve_1.port_b.p, checkvalve_1.state_b.T)), nb_hydr_static_v6.checkvalve_1.Medium.temperature(nb_hydr_static_v6.checkvalve_1.Medium.setState_phX(checkvalve_1.port_b.p, checkvalve_1.port_b.h_outflow, {})), checkvalve_1.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp13;
  tmp13._p = (data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */);
  tmp13._T = (data->localData[0]->realVars[133] /* checkvalve_1.state_b.T variable */);
  (data->localData[0]->realVars[130] /* checkvalve_1.port_b_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (-(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)), omc_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData, tmp13), omc_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData, omc_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX(threadData, (data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */), (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */), _OMC_LIT58)), (data->simulationInfo->realParameter[9] /* checkvalve_1.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
checkvalve_1.V_flow = chiller_1.m_flow / Modelica.Fluid.Utilities.regStep(chiller_1.m_flow, nb_hydr_static_v6.checkvalve_1.Medium.density(nb_hydr_static_v6.checkvalve_1.Medium.ThermodynamicState(checkvalve_1.port_a.p, checkvalve_1.state_a.T)), nb_hydr_static_v6.checkvalve_1.Medium.density(nb_hydr_static_v6.checkvalve_1.Medium.ThermodynamicState(checkvalve_1.port_b.p, checkvalve_1.state_b.T)), checkvalve_1.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp14;
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp15;
  tmp14._p = (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */);
  tmp14._T = (data->localData[0]->realVars[132] /* checkvalve_1.state_a.T variable */);
  tmp15._p = (data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */);
  tmp15._T = (data->localData[0]->realVars[133] /* checkvalve_1.state_b.T variable */);
  (data->localData[0]->realVars[122] /* checkvalve_1.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), omc_nb__hydr__static__v6_checkvalve__1_Medium_density(threadData, tmp14), omc_nb__hydr__static__v6_checkvalve__1_Medium_density(threadData, tmp15), (data->simulationInfo->realParameter[9] /* checkvalve_1.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(chiller_1.m_flow, nb_hydr_static_v6.checkvalve_1.Medium.density(nb_hydr_static_v6.checkvalve_1.Medium.ThermodynamicState(checkvalve_1.port_a.p, checkvalve_1.state_a.T)), nb_hydr_static_v6.checkvalve_1.Medium.density(nb_hydr_static_v6.checkvalve_1.Medium.ThermodynamicState(checkvalve_1.port_b.p, checkvalve_1.state_b.T)), checkvalve_1.m_flow_small)",equationIndexes);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1147(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1148(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1136(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1137(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1138(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1139(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1140(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1141(DATA *data, threadData_t *threadData);


/*
equation index: 230
type: SIMPLE_ASSIGN
terminal_resist.filter.x[1] = $DER.terminal_resist.filter.x[1] / terminal_resist.filter.r[1] + terminal_resist.filter.uu[1]
*/
void nb_hydr_static_v6_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  (data->localData[0]->realVars[9] /* terminal_resist.filter.x[1] STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[20] /* der(terminal_resist.filter.x[1]) STATE_DER */),(data->simulationInfo->realParameter[1771] /* terminal_resist.filter.r[1] PARAM */),"terminal_resist.filter.r[1]",equationIndexes) + (data->localData[0]->realVars[345] /* terminal_resist.filter.uu[1] variable */);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1001(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1143(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1144(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1145(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1146(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1203(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1204(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1190(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1191(DATA *data, threadData_t *threadData);


/*
equation index: 240
type: SIMPLE_ASSIGN
chw_ret_m.port_a.h_outflow = (max(-jun_2.port_1.m_flow, 1e-07) * jun_2.port_1.h_outflow + max(-chiller_1.m_flow, 1e-07) * chwp_1.port_a.h_outflow) / (max(-jun_2.port_1.m_flow, 1e-07) + max(-chiller_1.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  (data->localData[0]->realVars[182] /* chw_ret_m.port_a.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[330] /* jun_2.port_1.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */)),1e-07) + fmax((-(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)),1e-07),"max(-jun_2.port_1.m_flow, 1e-07) + max(-chiller_1.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
terminal_resist.port_b.h_outflow = (max(chiller_1.m_flow, 1e-07) * checkvalve_1.port_b.h_outflow + max(-jun_5.port_2.m_flow, 1e-07) * jun_5.port_2.h_outflow) / (max(chiller_1.m_flow, 1e-07) + max(-jun_5.port_2.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  (data->localData[0]->realVars[350] /* terminal_resist.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[339] /* jun_5.port_2.h_outflow variable */)),fmax((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),1e-07) + fmax((-(data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */)),1e-07),"max(chiller_1.m_flow, 1e-07) + max(-jun_5.port_2.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1163(DATA *data, threadData_t *threadData);


/*
equation index: 243
type: SIMPLE_ASSIGN
chwp_1.filter.x[2] = chwp_1.filter.y / (chwp_1.filter.gain * chwp_1.filter.u_nominal)
*/
void nb_hydr_static_v6_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  (data->localData[0]->realVars[1] /* chwp_1.filter.x[2] STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[200] /* chwp_1.filter.y variable */),((data->simulationInfo->realParameter[409] /* chwp_1.filter.gain PARAM */)) * ((data->simulationInfo->realParameter[412] /* chwp_1.filter.u_nominal PARAM */)),"chwp_1.filter.gain * chwp_1.filter.u_nominal",equationIndexes);
  TRACE_POP
}

/*
equation index: 244
type: ARRAY_CALL_ASSIGN

chwp_1.filter.cr = Modelica.Blocks.Continuous.Internal.Filter.base.CriticalDamping(2, chwp_1.filter.normalized)
*/
void nb_hydr_static_v6_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  real_array tmp16;
  real_array_create(&tmp16, ((modelica_real*)&((&(data->simulationInfo->realParameter[405] /* chwp_1.filter.cr[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData, ((modelica_integer) 2), (data->simulationInfo->booleanParameter[85] /* chwp_1.filter.normalized PARAM */)), tmp16);
  TRACE_POP
}

/*
equation index: 245
type: ALGORITHM

  (chwp_1.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(chwp_1.filter.cr, {}, {}, chwp_1.filter.f_cut);
*/
void nb_hydr_static_v6_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  real_array tmp17;
  base_array_t tmp18;
  base_array_t tmp19;
  real_array tmp20;
  real_array_create(&tmp17, ((modelica_real*)&((&data->simulationInfo->realParameter[405] /* chwp_1.filter.cr[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  simple_alloc_1d_base_array(&tmp18, 0, NULL);
  simple_alloc_1d_base_array(&tmp19, 0, NULL);
  real_array_create(&tmp20, ((modelica_real*)&((&(data->simulationInfo->realParameter[410] /* chwp_1.filter.r[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp17, tmp18, tmp19, (data->simulationInfo->realParameter[407] /* chwp_1.filter.f_cut PARAM */) ,NULL ,NULL ,NULL), tmp20);
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
chwp_1.filter.x[1] = $DER.chwp_1.filter.x[1] / chwp_1.filter.r[1] + chwp_1.filter.uu[1]
*/
void nb_hydr_static_v6_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  (data->localData[0]->realVars[0] /* chwp_1.filter.x[1] STATE(1) */) = DIVISION_SIM((data->localData[0]->realVars[11] /* der(chwp_1.filter.x[1]) STATE_DER */),(data->simulationInfo->realParameter[410] /* chwp_1.filter.r[1] PARAM */),"chwp_1.filter.r[1]",equationIndexes) + (data->localData[0]->realVars[199] /* chwp_1.filter.uu[1] variable */);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_987(DATA *data, threadData_t *threadData);


/*
equation index: 248
type: SIMPLE_ASSIGN
chwp_4.vol.steBal.dp = 0.0
*/
void nb_hydr_static_v6_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  (data->localData[0]->realVars[312] /* chwp_4.vol.steBal.dp variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
chwp_3.vol.steBal.dp = 0.0
*/
void nb_hydr_static_v6_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  (data->localData[0]->realVars[281] /* chwp_3.vol.steBal.dp variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
chwp_2.vol.steBal.dp = 0.0
*/
void nb_hydr_static_v6_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  (data->localData[0]->realVars[250] /* chwp_2.vol.steBal.dp variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
chwp_1.vol.steBal.dp = 0.0
*/
void nb_hydr_static_v6_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  (data->localData[0]->realVars[219] /* chwp_1.vol.steBal.dp variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
checkvalve_4.minLimiter.y = smooth(0, if noEvent(val_pos_4.k < checkvalve_4.minLimiter.uMin) then checkvalve_4.minLimiter.uMin else val_pos_4.k)
*/
void nb_hydr_static_v6_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  modelica_boolean tmp21;
  tmp21 = Less((data->simulationInfo->realParameter[1795] /* val_pos_4.k PARAM */),(data->simulationInfo->realParameter[66] /* checkvalve_4.minLimiter.uMin PARAM */));
  (data->localData[0]->realVars[160] /* checkvalve_4.minLimiter.y variable */) = (tmp21?(data->simulationInfo->realParameter[66] /* checkvalve_4.minLimiter.uMin PARAM */):(data->simulationInfo->realParameter[1795] /* val_pos_4.k PARAM */));
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
checkvalve_3.minLimiter.y = smooth(0, if noEvent(val_pos_3.k < checkvalve_3.minLimiter.uMin) then checkvalve_3.minLimiter.uMin else val_pos_3.k)
*/
void nb_hydr_static_v6_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  modelica_boolean tmp22;
  tmp22 = Less((data->simulationInfo->realParameter[1793] /* val_pos_3.k PARAM */),(data->simulationInfo->realParameter[48] /* checkvalve_3.minLimiter.uMin PARAM */));
  (data->localData[0]->realVars[148] /* checkvalve_3.minLimiter.y variable */) = (tmp22?(data->simulationInfo->realParameter[48] /* checkvalve_3.minLimiter.uMin PARAM */):(data->simulationInfo->realParameter[1793] /* val_pos_3.k PARAM */));
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
checkvalve_2.minLimiter.y = smooth(0, if noEvent(val_pos_2.k < checkvalve_2.minLimiter.uMin) then checkvalve_2.minLimiter.uMin else val_pos_2.k)
*/
void nb_hydr_static_v6_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  modelica_boolean tmp23;
  tmp23 = Less((data->simulationInfo->realParameter[1791] /* val_pos_2.k PARAM */),(data->simulationInfo->realParameter[30] /* checkvalve_2.minLimiter.uMin PARAM */));
  (data->localData[0]->realVars[136] /* checkvalve_2.minLimiter.y variable */) = (tmp23?(data->simulationInfo->realParameter[30] /* checkvalve_2.minLimiter.uMin PARAM */):(data->simulationInfo->realParameter[1791] /* val_pos_2.k PARAM */));
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
checkvalve_1.minLimiter.y = smooth(0, if noEvent(val_pos_1.k < checkvalve_1.minLimiter.uMin) then checkvalve_1.minLimiter.uMin else val_pos_1.k)
*/
void nb_hydr_static_v6_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  modelica_boolean tmp24;
  tmp24 = Less((data->simulationInfo->realParameter[1789] /* val_pos_1.k PARAM */),(data->simulationInfo->realParameter[12] /* checkvalve_1.minLimiter.uMin PARAM */));
  (data->localData[0]->realVars[124] /* checkvalve_1.minLimiter.y variable */) = (tmp24?(data->simulationInfo->realParameter[12] /* checkvalve_1.minLimiter.uMin PARAM */):(data->simulationInfo->realParameter[1789] /* val_pos_1.k PARAM */));
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
chwp_1.heatPort.Q_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[203] /* chwp_1.heatPort.Q_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
chwp_2.heatPort.Q_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[234] /* chwp_2.heatPort.Q_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
chwp_3.heatPort.Q_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[265] /* chwp_3.heatPort.Q_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
chwp_4.heatPort.Q_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[296] /* chwp_4.heatPort.Q_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
chwp_1.senRelPre.port_a.m_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[213] /* chwp_1.senRelPre.port_a.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
chwp_1.senRelPre.port_b.m_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  (data->localData[0]->realVars[215] /* chwp_1.senRelPre.port_b.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
chwp_2.senRelPre.port_a.m_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  (data->localData[0]->realVars[244] /* chwp_2.senRelPre.port_a.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
chwp_2.senRelPre.port_b.m_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->realVars[246] /* chwp_2.senRelPre.port_b.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
chwp_3.senRelPre.port_a.m_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  (data->localData[0]->realVars[275] /* chwp_3.senRelPre.port_a.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
chwp_3.senRelPre.port_b.m_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  (data->localData[0]->realVars[277] /* chwp_3.senRelPre.port_b.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
chwp_4.senRelPre.port_a.m_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  (data->localData[0]->realVars[306] /* chwp_4.senRelPre.port_a.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
chwp_4.senRelPre.port_b.m_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[308] /* chwp_4.senRelPre.port_b.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
chw_sup_P.port.m_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  (data->localData[0]->realVars[188] /* chw_sup_P.port.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
chw_ret_P.port.m_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  (data->localData[0]->realVars[181] /* chw_ret_P.port.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
conPID.Dzero.y = 0.0
*/
void nb_hydr_static_v6_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  (data->localData[0]->realVars[315] /* conPID.Dzero.y variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
chwp_1.eff.etaHyd = 1.0
*/
void nb_hydr_static_v6_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  (data->localData[0]->realVars[196] /* chwp_1.eff.etaHyd variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
chwp_2.eff.etaHyd = 1.0
*/
void nb_hydr_static_v6_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  (data->localData[0]->realVars[227] /* chwp_2.eff.etaHyd variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
chwp_3.eff.etaHyd = 1.0
*/
void nb_hydr_static_v6_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  (data->localData[0]->realVars[258] /* chwp_3.eff.etaHyd variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
chwp_4.eff.etaHyd = 1.0
*/
void nb_hydr_static_v6_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  (data->localData[0]->realVars[289] /* chwp_4.eff.etaHyd variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
chw_sup.ports[1].m_flow = 0.0
*/
void nb_hydr_static_v6_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  (data->localData[0]->realVars[185] /* chw_sup.ports[1].m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
chwp_4.rho_inlet.y = 995.586
*/
void nb_hydr_static_v6_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  (data->localData[0]->realVars[303] /* chwp_4.rho_inlet.y variable */) = 995.586;
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
chwp_3.rho_inlet.y = 995.586
*/
void nb_hydr_static_v6_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  (data->localData[0]->realVars[272] /* chwp_3.rho_inlet.y variable */) = 995.586;
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
chwp_2.rho_inlet.y = 995.586
*/
void nb_hydr_static_v6_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  (data->localData[0]->realVars[241] /* chwp_2.rho_inlet.y variable */) = 995.586;
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
chwp_1.rho_inlet.y = 995.586
*/
void nb_hydr_static_v6_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[210] /* chwp_1.rho_inlet.y variable */) = 995.586;
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
chwp_4.eff.hydDer[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  (data->simulationInfo->realParameter[1317] /* chwp_4.eff.hydDer[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
chwp_4.eff.motDer[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  (data->simulationInfo->realParameter[1319] /* chwp_4.eff.motDer[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[18] = 0.0
*/
void nb_hydr_static_v6_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  (data->simulationInfo->realParameter[1530] /* chwp_4.eff.preDer2[18] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[17] = 0.0
*/
void nb_hydr_static_v6_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  (data->simulationInfo->realParameter[1529] /* chwp_4.eff.preDer2[17] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[16] = 0.0
*/
void nb_hydr_static_v6_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  (data->simulationInfo->realParameter[1528] /* chwp_4.eff.preDer2[16] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[15] = 0.0
*/
void nb_hydr_static_v6_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  (data->simulationInfo->realParameter[1527] /* chwp_4.eff.preDer2[15] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[14] = 0.0
*/
void nb_hydr_static_v6_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  (data->simulationInfo->realParameter[1526] /* chwp_4.eff.preDer2[14] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[13] = 0.0
*/
void nb_hydr_static_v6_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  (data->simulationInfo->realParameter[1525] /* chwp_4.eff.preDer2[13] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[12] = 0.0
*/
void nb_hydr_static_v6_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  (data->simulationInfo->realParameter[1524] /* chwp_4.eff.preDer2[12] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[11] = 0.0
*/
void nb_hydr_static_v6_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  (data->simulationInfo->realParameter[1523] /* chwp_4.eff.preDer2[11] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[10] = 0.0
*/
void nb_hydr_static_v6_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  (data->simulationInfo->realParameter[1522] /* chwp_4.eff.preDer2[10] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[9] = 0.0
*/
void nb_hydr_static_v6_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  (data->simulationInfo->realParameter[1521] /* chwp_4.eff.preDer2[9] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[8] = 0.0
*/
void nb_hydr_static_v6_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  (data->simulationInfo->realParameter[1520] /* chwp_4.eff.preDer2[8] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[7] = 0.0
*/
void nb_hydr_static_v6_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  (data->simulationInfo->realParameter[1519] /* chwp_4.eff.preDer2[7] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[6] = 0.0
*/
void nb_hydr_static_v6_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  (data->simulationInfo->realParameter[1518] /* chwp_4.eff.preDer2[6] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[5] = 0.0
*/
void nb_hydr_static_v6_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  (data->simulationInfo->realParameter[1517] /* chwp_4.eff.preDer2[5] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[4] = 0.0
*/
void nb_hydr_static_v6_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  (data->simulationInfo->realParameter[1516] /* chwp_4.eff.preDer2[4] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[3] = 0.0
*/
void nb_hydr_static_v6_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  (data->simulationInfo->realParameter[1515] /* chwp_4.eff.preDer2[3] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[2] = 0.0
*/
void nb_hydr_static_v6_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  (data->simulationInfo->realParameter[1514] /* chwp_4.eff.preDer2[2] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
chwp_4.eff.preDer2[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  (data->simulationInfo->realParameter[1513] /* chwp_4.eff.preDer2[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[17] = 0.0
*/
void nb_hydr_static_v6_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  (data->simulationInfo->realParameter[1512] /* chwp_4.eff.preDer1[17] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[16] = 0.0
*/
void nb_hydr_static_v6_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  (data->simulationInfo->realParameter[1511] /* chwp_4.eff.preDer1[16] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[15] = 0.0
*/
void nb_hydr_static_v6_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  (data->simulationInfo->realParameter[1510] /* chwp_4.eff.preDer1[15] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[14] = 0.0
*/
void nb_hydr_static_v6_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  (data->simulationInfo->realParameter[1509] /* chwp_4.eff.preDer1[14] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[13] = 0.0
*/
void nb_hydr_static_v6_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  (data->simulationInfo->realParameter[1508] /* chwp_4.eff.preDer1[13] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[12] = 0.0
*/
void nb_hydr_static_v6_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  (data->simulationInfo->realParameter[1507] /* chwp_4.eff.preDer1[12] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[11] = 0.0
*/
void nb_hydr_static_v6_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  (data->simulationInfo->realParameter[1506] /* chwp_4.eff.preDer1[11] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[10] = 0.0
*/
void nb_hydr_static_v6_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  (data->simulationInfo->realParameter[1505] /* chwp_4.eff.preDer1[10] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[9] = 0.0
*/
void nb_hydr_static_v6_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  (data->simulationInfo->realParameter[1504] /* chwp_4.eff.preDer1[9] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[8] = 0.0
*/
void nb_hydr_static_v6_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  (data->simulationInfo->realParameter[1503] /* chwp_4.eff.preDer1[8] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[7] = 0.0
*/
void nb_hydr_static_v6_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  (data->simulationInfo->realParameter[1502] /* chwp_4.eff.preDer1[7] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[6] = 0.0
*/
void nb_hydr_static_v6_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  (data->simulationInfo->realParameter[1501] /* chwp_4.eff.preDer1[6] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[5] = 0.0
*/
void nb_hydr_static_v6_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  (data->simulationInfo->realParameter[1500] /* chwp_4.eff.preDer1[5] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[4] = 0.0
*/
void nb_hydr_static_v6_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  (data->simulationInfo->realParameter[1499] /* chwp_4.eff.preDer1[4] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[3] = 0.0
*/
void nb_hydr_static_v6_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  (data->simulationInfo->realParameter[1498] /* chwp_4.eff.preDer1[3] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[2] = 0.0
*/
void nb_hydr_static_v6_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  (data->simulationInfo->realParameter[1497] /* chwp_4.eff.preDer1[2] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
chwp_4.eff.preDer1[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  (data->simulationInfo->realParameter[1496] /* chwp_4.eff.preDer1[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
chwp_3.eff.hydDer[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  (data->simulationInfo->realParameter[934] /* chwp_3.eff.hydDer[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
chwp_3.eff.motDer[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  (data->simulationInfo->realParameter[936] /* chwp_3.eff.motDer[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[18] = 0.0
*/
void nb_hydr_static_v6_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  (data->simulationInfo->realParameter[1147] /* chwp_3.eff.preDer2[18] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[17] = 0.0
*/
void nb_hydr_static_v6_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  (data->simulationInfo->realParameter[1146] /* chwp_3.eff.preDer2[17] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[16] = 0.0
*/
void nb_hydr_static_v6_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  (data->simulationInfo->realParameter[1145] /* chwp_3.eff.preDer2[16] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[15] = 0.0
*/
void nb_hydr_static_v6_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  (data->simulationInfo->realParameter[1144] /* chwp_3.eff.preDer2[15] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[14] = 0.0
*/
void nb_hydr_static_v6_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  (data->simulationInfo->realParameter[1143] /* chwp_3.eff.preDer2[14] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[13] = 0.0
*/
void nb_hydr_static_v6_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  (data->simulationInfo->realParameter[1142] /* chwp_3.eff.preDer2[13] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[12] = 0.0
*/
void nb_hydr_static_v6_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  (data->simulationInfo->realParameter[1141] /* chwp_3.eff.preDer2[12] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[11] = 0.0
*/
void nb_hydr_static_v6_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  (data->simulationInfo->realParameter[1140] /* chwp_3.eff.preDer2[11] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[10] = 0.0
*/
void nb_hydr_static_v6_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  (data->simulationInfo->realParameter[1139] /* chwp_3.eff.preDer2[10] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[9] = 0.0
*/
void nb_hydr_static_v6_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  (data->simulationInfo->realParameter[1138] /* chwp_3.eff.preDer2[9] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[8] = 0.0
*/
void nb_hydr_static_v6_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  (data->simulationInfo->realParameter[1137] /* chwp_3.eff.preDer2[8] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[7] = 0.0
*/
void nb_hydr_static_v6_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  (data->simulationInfo->realParameter[1136] /* chwp_3.eff.preDer2[7] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[6] = 0.0
*/
void nb_hydr_static_v6_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  (data->simulationInfo->realParameter[1135] /* chwp_3.eff.preDer2[6] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[5] = 0.0
*/
void nb_hydr_static_v6_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  (data->simulationInfo->realParameter[1134] /* chwp_3.eff.preDer2[5] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[4] = 0.0
*/
void nb_hydr_static_v6_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  (data->simulationInfo->realParameter[1133] /* chwp_3.eff.preDer2[4] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[3] = 0.0
*/
void nb_hydr_static_v6_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  (data->simulationInfo->realParameter[1132] /* chwp_3.eff.preDer2[3] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[2] = 0.0
*/
void nb_hydr_static_v6_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  (data->simulationInfo->realParameter[1131] /* chwp_3.eff.preDer2[2] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
chwp_3.eff.preDer2[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  (data->simulationInfo->realParameter[1130] /* chwp_3.eff.preDer2[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[17] = 0.0
*/
void nb_hydr_static_v6_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  (data->simulationInfo->realParameter[1129] /* chwp_3.eff.preDer1[17] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[16] = 0.0
*/
void nb_hydr_static_v6_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  (data->simulationInfo->realParameter[1128] /* chwp_3.eff.preDer1[16] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[15] = 0.0
*/
void nb_hydr_static_v6_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  (data->simulationInfo->realParameter[1127] /* chwp_3.eff.preDer1[15] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[14] = 0.0
*/
void nb_hydr_static_v6_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  (data->simulationInfo->realParameter[1126] /* chwp_3.eff.preDer1[14] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[13] = 0.0
*/
void nb_hydr_static_v6_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  (data->simulationInfo->realParameter[1125] /* chwp_3.eff.preDer1[13] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[12] = 0.0
*/
void nb_hydr_static_v6_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  (data->simulationInfo->realParameter[1124] /* chwp_3.eff.preDer1[12] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[11] = 0.0
*/
void nb_hydr_static_v6_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  (data->simulationInfo->realParameter[1123] /* chwp_3.eff.preDer1[11] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[10] = 0.0
*/
void nb_hydr_static_v6_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  (data->simulationInfo->realParameter[1122] /* chwp_3.eff.preDer1[10] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[9] = 0.0
*/
void nb_hydr_static_v6_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  (data->simulationInfo->realParameter[1121] /* chwp_3.eff.preDer1[9] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[8] = 0.0
*/
void nb_hydr_static_v6_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  (data->simulationInfo->realParameter[1120] /* chwp_3.eff.preDer1[8] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[7] = 0.0
*/
void nb_hydr_static_v6_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  (data->simulationInfo->realParameter[1119] /* chwp_3.eff.preDer1[7] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[6] = 0.0
*/
void nb_hydr_static_v6_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  (data->simulationInfo->realParameter[1118] /* chwp_3.eff.preDer1[6] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[5] = 0.0
*/
void nb_hydr_static_v6_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  (data->simulationInfo->realParameter[1117] /* chwp_3.eff.preDer1[5] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[4] = 0.0
*/
void nb_hydr_static_v6_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  (data->simulationInfo->realParameter[1116] /* chwp_3.eff.preDer1[4] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[3] = 0.0
*/
void nb_hydr_static_v6_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  (data->simulationInfo->realParameter[1115] /* chwp_3.eff.preDer1[3] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[2] = 0.0
*/
void nb_hydr_static_v6_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  (data->simulationInfo->realParameter[1114] /* chwp_3.eff.preDer1[2] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
chwp_3.eff.preDer1[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  (data->simulationInfo->realParameter[1113] /* chwp_3.eff.preDer1[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
chwp_2.eff.hydDer[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  (data->simulationInfo->realParameter[551] /* chwp_2.eff.hydDer[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
chwp_2.eff.motDer[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  (data->simulationInfo->realParameter[553] /* chwp_2.eff.motDer[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[18] = 0.0
*/
void nb_hydr_static_v6_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  (data->simulationInfo->realParameter[764] /* chwp_2.eff.preDer2[18] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[17] = 0.0
*/
void nb_hydr_static_v6_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  (data->simulationInfo->realParameter[763] /* chwp_2.eff.preDer2[17] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[16] = 0.0
*/
void nb_hydr_static_v6_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  (data->simulationInfo->realParameter[762] /* chwp_2.eff.preDer2[16] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[15] = 0.0
*/
void nb_hydr_static_v6_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  (data->simulationInfo->realParameter[761] /* chwp_2.eff.preDer2[15] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[14] = 0.0
*/
void nb_hydr_static_v6_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  (data->simulationInfo->realParameter[760] /* chwp_2.eff.preDer2[14] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[13] = 0.0
*/
void nb_hydr_static_v6_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  (data->simulationInfo->realParameter[759] /* chwp_2.eff.preDer2[13] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[12] = 0.0
*/
void nb_hydr_static_v6_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  (data->simulationInfo->realParameter[758] /* chwp_2.eff.preDer2[12] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[11] = 0.0
*/
void nb_hydr_static_v6_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  (data->simulationInfo->realParameter[757] /* chwp_2.eff.preDer2[11] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[10] = 0.0
*/
void nb_hydr_static_v6_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  (data->simulationInfo->realParameter[756] /* chwp_2.eff.preDer2[10] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[9] = 0.0
*/
void nb_hydr_static_v6_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  (data->simulationInfo->realParameter[755] /* chwp_2.eff.preDer2[9] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[8] = 0.0
*/
void nb_hydr_static_v6_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  (data->simulationInfo->realParameter[754] /* chwp_2.eff.preDer2[8] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[7] = 0.0
*/
void nb_hydr_static_v6_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  (data->simulationInfo->realParameter[753] /* chwp_2.eff.preDer2[7] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[6] = 0.0
*/
void nb_hydr_static_v6_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  (data->simulationInfo->realParameter[752] /* chwp_2.eff.preDer2[6] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[5] = 0.0
*/
void nb_hydr_static_v6_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  (data->simulationInfo->realParameter[751] /* chwp_2.eff.preDer2[5] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[4] = 0.0
*/
void nb_hydr_static_v6_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  (data->simulationInfo->realParameter[750] /* chwp_2.eff.preDer2[4] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[3] = 0.0
*/
void nb_hydr_static_v6_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  (data->simulationInfo->realParameter[749] /* chwp_2.eff.preDer2[3] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[2] = 0.0
*/
void nb_hydr_static_v6_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  (data->simulationInfo->realParameter[748] /* chwp_2.eff.preDer2[2] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
chwp_2.eff.preDer2[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  (data->simulationInfo->realParameter[747] /* chwp_2.eff.preDer2[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[17] = 0.0
*/
void nb_hydr_static_v6_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  (data->simulationInfo->realParameter[746] /* chwp_2.eff.preDer1[17] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[16] = 0.0
*/
void nb_hydr_static_v6_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  (data->simulationInfo->realParameter[745] /* chwp_2.eff.preDer1[16] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[15] = 0.0
*/
void nb_hydr_static_v6_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  (data->simulationInfo->realParameter[744] /* chwp_2.eff.preDer1[15] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[14] = 0.0
*/
void nb_hydr_static_v6_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  (data->simulationInfo->realParameter[743] /* chwp_2.eff.preDer1[14] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[13] = 0.0
*/
void nb_hydr_static_v6_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  (data->simulationInfo->realParameter[742] /* chwp_2.eff.preDer1[13] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[12] = 0.0
*/
void nb_hydr_static_v6_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  (data->simulationInfo->realParameter[741] /* chwp_2.eff.preDer1[12] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[11] = 0.0
*/
void nb_hydr_static_v6_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  (data->simulationInfo->realParameter[740] /* chwp_2.eff.preDer1[11] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[10] = 0.0
*/
void nb_hydr_static_v6_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  (data->simulationInfo->realParameter[739] /* chwp_2.eff.preDer1[10] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[9] = 0.0
*/
void nb_hydr_static_v6_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  (data->simulationInfo->realParameter[738] /* chwp_2.eff.preDer1[9] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[8] = 0.0
*/
void nb_hydr_static_v6_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  (data->simulationInfo->realParameter[737] /* chwp_2.eff.preDer1[8] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[7] = 0.0
*/
void nb_hydr_static_v6_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  (data->simulationInfo->realParameter[736] /* chwp_2.eff.preDer1[7] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[6] = 0.0
*/
void nb_hydr_static_v6_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  (data->simulationInfo->realParameter[735] /* chwp_2.eff.preDer1[6] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[5] = 0.0
*/
void nb_hydr_static_v6_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  (data->simulationInfo->realParameter[734] /* chwp_2.eff.preDer1[5] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[4] = 0.0
*/
void nb_hydr_static_v6_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  (data->simulationInfo->realParameter[733] /* chwp_2.eff.preDer1[4] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[3] = 0.0
*/
void nb_hydr_static_v6_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  (data->simulationInfo->realParameter[732] /* chwp_2.eff.preDer1[3] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[2] = 0.0
*/
void nb_hydr_static_v6_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  (data->simulationInfo->realParameter[731] /* chwp_2.eff.preDer1[2] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
chwp_2.eff.preDer1[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  (data->simulationInfo->realParameter[730] /* chwp_2.eff.preDer1[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
chwp_1.eff.hydDer[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  (data->simulationInfo->realParameter[170] /* chwp_1.eff.hydDer[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
chwp_1.eff.motDer[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  (data->simulationInfo->realParameter[172] /* chwp_1.eff.motDer[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[18] = 0.0
*/
void nb_hydr_static_v6_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  (data->simulationInfo->realParameter[383] /* chwp_1.eff.preDer2[18] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[17] = 0.0
*/
void nb_hydr_static_v6_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  (data->simulationInfo->realParameter[382] /* chwp_1.eff.preDer2[17] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[16] = 0.0
*/
void nb_hydr_static_v6_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  (data->simulationInfo->realParameter[381] /* chwp_1.eff.preDer2[16] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[15] = 0.0
*/
void nb_hydr_static_v6_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  (data->simulationInfo->realParameter[380] /* chwp_1.eff.preDer2[15] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[14] = 0.0
*/
void nb_hydr_static_v6_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  (data->simulationInfo->realParameter[379] /* chwp_1.eff.preDer2[14] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[13] = 0.0
*/
void nb_hydr_static_v6_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  (data->simulationInfo->realParameter[378] /* chwp_1.eff.preDer2[13] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[12] = 0.0
*/
void nb_hydr_static_v6_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  (data->simulationInfo->realParameter[377] /* chwp_1.eff.preDer2[12] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[11] = 0.0
*/
void nb_hydr_static_v6_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  (data->simulationInfo->realParameter[376] /* chwp_1.eff.preDer2[11] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[10] = 0.0
*/
void nb_hydr_static_v6_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  (data->simulationInfo->realParameter[375] /* chwp_1.eff.preDer2[10] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[9] = 0.0
*/
void nb_hydr_static_v6_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  (data->simulationInfo->realParameter[374] /* chwp_1.eff.preDer2[9] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[8] = 0.0
*/
void nb_hydr_static_v6_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  (data->simulationInfo->realParameter[373] /* chwp_1.eff.preDer2[8] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[7] = 0.0
*/
void nb_hydr_static_v6_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  (data->simulationInfo->realParameter[372] /* chwp_1.eff.preDer2[7] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[6] = 0.0
*/
void nb_hydr_static_v6_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  (data->simulationInfo->realParameter[371] /* chwp_1.eff.preDer2[6] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[5] = 0.0
*/
void nb_hydr_static_v6_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  (data->simulationInfo->realParameter[370] /* chwp_1.eff.preDer2[5] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[4] = 0.0
*/
void nb_hydr_static_v6_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  (data->simulationInfo->realParameter[369] /* chwp_1.eff.preDer2[4] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[3] = 0.0
*/
void nb_hydr_static_v6_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  (data->simulationInfo->realParameter[368] /* chwp_1.eff.preDer2[3] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[2] = 0.0
*/
void nb_hydr_static_v6_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  (data->simulationInfo->realParameter[367] /* chwp_1.eff.preDer2[2] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
chwp_1.eff.preDer2[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  (data->simulationInfo->realParameter[366] /* chwp_1.eff.preDer2[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[17] = 0.0
*/
void nb_hydr_static_v6_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  (data->simulationInfo->realParameter[365] /* chwp_1.eff.preDer1[17] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[16] = 0.0
*/
void nb_hydr_static_v6_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  (data->simulationInfo->realParameter[364] /* chwp_1.eff.preDer1[16] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[15] = 0.0
*/
void nb_hydr_static_v6_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  (data->simulationInfo->realParameter[363] /* chwp_1.eff.preDer1[15] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[14] = 0.0
*/
void nb_hydr_static_v6_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  (data->simulationInfo->realParameter[362] /* chwp_1.eff.preDer1[14] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[13] = 0.0
*/
void nb_hydr_static_v6_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  (data->simulationInfo->realParameter[361] /* chwp_1.eff.preDer1[13] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[12] = 0.0
*/
void nb_hydr_static_v6_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  (data->simulationInfo->realParameter[360] /* chwp_1.eff.preDer1[12] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[11] = 0.0
*/
void nb_hydr_static_v6_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  (data->simulationInfo->realParameter[359] /* chwp_1.eff.preDer1[11] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[10] = 0.0
*/
void nb_hydr_static_v6_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  (data->simulationInfo->realParameter[358] /* chwp_1.eff.preDer1[10] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[9] = 0.0
*/
void nb_hydr_static_v6_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  (data->simulationInfo->realParameter[357] /* chwp_1.eff.preDer1[9] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[8] = 0.0
*/
void nb_hydr_static_v6_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  (data->simulationInfo->realParameter[356] /* chwp_1.eff.preDer1[8] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[7] = 0.0
*/
void nb_hydr_static_v6_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  (data->simulationInfo->realParameter[355] /* chwp_1.eff.preDer1[7] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[6] = 0.0
*/
void nb_hydr_static_v6_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  (data->simulationInfo->realParameter[354] /* chwp_1.eff.preDer1[6] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[5] = 0.0
*/
void nb_hydr_static_v6_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  (data->simulationInfo->realParameter[353] /* chwp_1.eff.preDer1[5] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[4] = 0.0
*/
void nb_hydr_static_v6_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  (data->simulationInfo->realParameter[352] /* chwp_1.eff.preDer1[4] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[3] = 0.0
*/
void nb_hydr_static_v6_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  (data->simulationInfo->realParameter[351] /* chwp_1.eff.preDer1[3] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[2] = 0.0
*/
void nb_hydr_static_v6_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  (data->simulationInfo->realParameter[350] /* chwp_1.eff.preDer1[2] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
chwp_1.eff.preDer1[1] = 0.0
*/
void nb_hydr_static_v6_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  (data->simulationInfo->realParameter[349] /* chwp_1.eff.preDer1[1] PARAM */) = 0.0;
  TRACE_POP
}

/*
equation index: 472
type: ALGORITHM

  assert(Buildings.Utilities.Math.Functions.isMonotonic({0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577}, true), "The fan pressure rise must be a strictly decreasing sequence with respect to the volume flow rate,
  with the first element for the fan pressure raise being non-zero.
The following performance data have been entered:
" + nb_hydr_static_v6.chwp_1.eff.getArrayAsString({0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577}, "pressure.V_flow", 6, 6));
*/
void nb_hydr_static_v6_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  real_array tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,217,"The fan pressure rise must be a strictly decreasing sequence with respect to the volume flow rate,\n  with the first element for the fan pressure raise being non-zero.\nThe following performance data have been entered:\n");
  real_array tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,15,"pressure.V_flow");
  modelica_metatype tmpMeta29;
  static int tmp30 = 0;
  {
    array_alloc_scalar_real_array(&tmp25, 17, (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577);
    if(!omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, tmp25, 1 /* true */))
    {
      array_alloc_scalar_real_array(&tmp27, 17, (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577);
      tmpMeta29 = stringAppend(MMC_REFSTRINGLIT(tmp26),omc_nb__hydr__static__v6_chwp__1_eff_getArrayAsString(threadData, tmp27, MMC_REFSTRINGLIT(tmp28), ((modelica_integer) 6), ((modelica_integer) 6)));
      {
        const char* assert_cond = "(Buildings.Utilities.Math.Functions.isMonotonic({0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577}, true))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",268,3,273,62,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta29));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",268,3,273,62,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta29));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 471
type: ALGORITHM

  assert(true, "The last two pressure points for the fan or pump performance curve must be decreasing.
    You need to set more reasonable parameters.
Received
" + nb_hydr_static_v6.chwp_1.eff.getArrayAsString({800000.0, 750000.0, 700000.0, 650000.0, 600000.0, 550000.0, 500000.0, 450000.0, 400000.0, 350000.0, 300000.0, 250000.0, 200000.0, 150000.0, 100000.0, 50000.0, 50.0}, "dp", 6, 6));
*/
void nb_hydr_static_v6_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  static const MMC_DEFSTRINGLIT(tmp31,144,"The last two pressure points for the fan or pump performance curve must be decreasing.\n    You need to set more reasonable parameters.\nReceived\n");
  real_array tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,2,"dp");
  modelica_metatype tmpMeta34;
  static int tmp35 = 0;
  {
    if(!1 /* true */)
    {
      array_alloc_scalar_real_array(&tmp32, 17, (modelica_real)800000.0, (modelica_real)750000.0, (modelica_real)700000.0, (modelica_real)650000.0, (modelica_real)600000.0, (modelica_real)550000.0, (modelica_real)500000.0, (modelica_real)450000.0, (modelica_real)400000.0, (modelica_real)350000.0, (modelica_real)300000.0, (modelica_real)250000.0, (modelica_real)200000.0, (modelica_real)150000.0, (modelica_real)100000.0, (modelica_real)50000.0, (modelica_real)50.0);
      tmpMeta34 = stringAppend(MMC_REFSTRINGLIT(tmp31),omc_nb__hydr__static__v6_chwp__1_eff_getArrayAsString(threadData, tmp32, MMC_REFSTRINGLIT(tmp33), ((modelica_integer) 6), ((modelica_integer) 6)));
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",276,5,281,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta34));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",276,5,281,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta34));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 470
type: ALGORITHM

  assert(true, "SpeedControlled_y requires to set the pressure vs. flow rate curve in record 'per'.");
*/
void nb_hydr_static_v6_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  static const MMC_DEFSTRINGLIT(tmp36,83,"SpeedControlled_y requires to set the pressure vs. flow rate curve in record 'per'.");
  static int tmp37 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/SpeedControlled_y.mo",40,3,41,90,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp36)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/SpeedControlled_y.mo",40,3,41,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp36)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 469
type: ALGORITHM

  assert(true, "In nb_hydr_static_v6.chwp_1: The value of parameter m_flow_nominal should be greater or equal than " + String(1e-60, 6, 0, true) + " but it equals " + String(574.453122, 6, 0, true));
*/
void nb_hydr_static_v6_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  static const MMC_DEFSTRINGLIT(tmp38,99,"In nb_hydr_static_v6.chwp_1: The value of parameter m_flow_nominal should be greater or equal than ");
  modelica_string tmp39;
  modelica_metatype tmpMeta40;
  static const MMC_DEFSTRINGLIT(tmp41,15," but it equals ");
  modelica_metatype tmpMeta42;
  modelica_string tmp43;
  modelica_metatype tmpMeta44;
  static int tmp45 = 0;
  {
    if(!1 /* true */)
    {
      tmp39 = modelica_real_to_modelica_string(1e-60, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta40 = stringAppend(MMC_REFSTRINGLIT(tmp38),tmp39);
      tmpMeta42 = stringAppend(tmpMeta40,MMC_REFSTRINGLIT(tmp41));
      tmp43 = modelica_real_to_modelica_string(574.453122, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta44 = stringAppend(tmpMeta42,tmp43);
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",346,3,348,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta44));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",346,3,348,81,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta44));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 468
type: ALGORITHM

  assert(chiller_1.m_flow_turbulent > 0.0, "m_flow_turbulent must be bigger than zero.");
*/
void nb_hydr_static_v6_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  modelica_boolean tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp48 = 0;
  {
    tmp46 = Greater((data->simulationInfo->realParameter[83] /* chiller_1.m_flow_turbulent PARAM */),0.0);
    if(!tmp46)
    {
      {
        const char* assert_cond = "(chiller_1.m_flow_turbulent > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp47)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp47)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 467
type: ALGORITHM

  assert(chiller_1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void nb_hydr_static_v6_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  modelica_boolean tmp49;
  static const MMC_DEFSTRINGLIT(tmp50,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp51 = 0;
  {
    tmp49 = Greater((data->simulationInfo->realParameter[81] /* chiller_1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp49)
    {
      {
        const char* assert_cond = "(chiller_1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp50)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp50)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 466
type: ALGORITHM

  assert(Buildings.Utilities.Math.Functions.isMonotonic({0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577}, true), "The fan pressure rise must be a strictly decreasing sequence with respect to the volume flow rate,
  with the first element for the fan pressure raise being non-zero.
The following performance data have been entered:
" + nb_hydr_static_v6.chwp_2.eff.getArrayAsString({0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577}, "pressure.V_flow", 6, 6));
*/
void nb_hydr_static_v6_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  real_array tmp52;
  static const MMC_DEFSTRINGLIT(tmp53,217,"The fan pressure rise must be a strictly decreasing sequence with respect to the volume flow rate,\n  with the first element for the fan pressure raise being non-zero.\nThe following performance data have been entered:\n");
  real_array tmp54;
  static const MMC_DEFSTRINGLIT(tmp55,15,"pressure.V_flow");
  modelica_metatype tmpMeta56;
  static int tmp57 = 0;
  {
    array_alloc_scalar_real_array(&tmp52, 17, (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577);
    if(!omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, tmp52, 1 /* true */))
    {
      array_alloc_scalar_real_array(&tmp54, 17, (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577);
      tmpMeta56 = stringAppend(MMC_REFSTRINGLIT(tmp53),omc_nb__hydr__static__v6_chwp__2_eff_getArrayAsString(threadData, tmp54, MMC_REFSTRINGLIT(tmp55), ((modelica_integer) 6), ((modelica_integer) 6)));
      {
        const char* assert_cond = "(Buildings.Utilities.Math.Functions.isMonotonic({0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577}, true))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",268,3,273,62,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta56));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",268,3,273,62,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta56));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 465
type: ALGORITHM

  assert(true, "The last two pressure points for the fan or pump performance curve must be decreasing.
    You need to set more reasonable parameters.
Received
" + nb_hydr_static_v6.chwp_2.eff.getArrayAsString({800000.0, 750000.0, 700000.0, 650000.0, 600000.0, 550000.0, 500000.0, 450000.0, 400000.0, 350000.0, 300000.0, 250000.0, 200000.0, 150000.0, 100000.0, 50000.0, 50.0}, "dp", 6, 6));
*/
void nb_hydr_static_v6_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  static const MMC_DEFSTRINGLIT(tmp58,144,"The last two pressure points for the fan or pump performance curve must be decreasing.\n    You need to set more reasonable parameters.\nReceived\n");
  real_array tmp59;
  static const MMC_DEFSTRINGLIT(tmp60,2,"dp");
  modelica_metatype tmpMeta61;
  static int tmp62 = 0;
  {
    if(!1 /* true */)
    {
      array_alloc_scalar_real_array(&tmp59, 17, (modelica_real)800000.0, (modelica_real)750000.0, (modelica_real)700000.0, (modelica_real)650000.0, (modelica_real)600000.0, (modelica_real)550000.0, (modelica_real)500000.0, (modelica_real)450000.0, (modelica_real)400000.0, (modelica_real)350000.0, (modelica_real)300000.0, (modelica_real)250000.0, (modelica_real)200000.0, (modelica_real)150000.0, (modelica_real)100000.0, (modelica_real)50000.0, (modelica_real)50.0);
      tmpMeta61 = stringAppend(MMC_REFSTRINGLIT(tmp58),omc_nb__hydr__static__v6_chwp__2_eff_getArrayAsString(threadData, tmp59, MMC_REFSTRINGLIT(tmp60), ((modelica_integer) 6), ((modelica_integer) 6)));
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",276,5,281,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta61));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",276,5,281,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta61));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 464
type: ALGORITHM

  assert(true, "SpeedControlled_y requires to set the pressure vs. flow rate curve in record 'per'.");
*/
void nb_hydr_static_v6_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  static const MMC_DEFSTRINGLIT(tmp63,83,"SpeedControlled_y requires to set the pressure vs. flow rate curve in record 'per'.");
  static int tmp64 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/SpeedControlled_y.mo",40,3,41,90,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp63)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/SpeedControlled_y.mo",40,3,41,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp63)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 463
type: ALGORITHM

  assert(true, "In nb_hydr_static_v6.chwp_2: The value of parameter m_flow_nominal should be greater or equal than " + String(1e-60, 6, 0, true) + " but it equals " + String(574.453122, 6, 0, true));
*/
void nb_hydr_static_v6_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  static const MMC_DEFSTRINGLIT(tmp65,99,"In nb_hydr_static_v6.chwp_2: The value of parameter m_flow_nominal should be greater or equal than ");
  modelica_string tmp66;
  modelica_metatype tmpMeta67;
  static const MMC_DEFSTRINGLIT(tmp68,15," but it equals ");
  modelica_metatype tmpMeta69;
  modelica_string tmp70;
  modelica_metatype tmpMeta71;
  static int tmp72 = 0;
  {
    if(!1 /* true */)
    {
      tmp66 = modelica_real_to_modelica_string(1e-60, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta67 = stringAppend(MMC_REFSTRINGLIT(tmp65),tmp66);
      tmpMeta69 = stringAppend(tmpMeta67,MMC_REFSTRINGLIT(tmp68));
      tmp70 = modelica_real_to_modelica_string(574.453122, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta71 = stringAppend(tmpMeta69,tmp70);
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",346,3,348,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",346,3,348,81,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 462
type: ALGORITHM

  assert(chiller_2.m_flow_turbulent > 0.0, "m_flow_turbulent must be bigger than zero.");
*/
void nb_hydr_static_v6_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp75 = 0;
  {
    tmp73 = Greater((data->simulationInfo->realParameter[97] /* chiller_2.m_flow_turbulent PARAM */),0.0);
    if(!tmp73)
    {
      {
        const char* assert_cond = "(chiller_2.m_flow_turbulent > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp74)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp74)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 461
type: ALGORITHM

  assert(chiller_2.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void nb_hydr_static_v6_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  modelica_boolean tmp76;
  static const MMC_DEFSTRINGLIT(tmp77,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp78 = 0;
  {
    tmp76 = Greater((data->simulationInfo->realParameter[95] /* chiller_2.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp76)
    {
      {
        const char* assert_cond = "(chiller_2.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp77)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp77)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 460
type: ALGORITHM

  assert(Buildings.Utilities.Math.Functions.isMonotonic({0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577}, true), "The fan pressure rise must be a strictly decreasing sequence with respect to the volume flow rate,
  with the first element for the fan pressure raise being non-zero.
The following performance data have been entered:
" + nb_hydr_static_v6.chwp_3.eff.getArrayAsString({0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577}, "pressure.V_flow", 6, 6));
*/
void nb_hydr_static_v6_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  real_array tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,217,"The fan pressure rise must be a strictly decreasing sequence with respect to the volume flow rate,\n  with the first element for the fan pressure raise being non-zero.\nThe following performance data have been entered:\n");
  real_array tmp81;
  static const MMC_DEFSTRINGLIT(tmp82,15,"pressure.V_flow");
  modelica_metatype tmpMeta83;
  static int tmp84 = 0;
  {
    array_alloc_scalar_real_array(&tmp79, 17, (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577);
    if(!omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, tmp79, 1 /* true */))
    {
      array_alloc_scalar_real_array(&tmp81, 17, (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577);
      tmpMeta83 = stringAppend(MMC_REFSTRINGLIT(tmp80),omc_nb__hydr__static__v6_chwp__3_eff_getArrayAsString(threadData, tmp81, MMC_REFSTRINGLIT(tmp82), ((modelica_integer) 6), ((modelica_integer) 6)));
      {
        const char* assert_cond = "(Buildings.Utilities.Math.Functions.isMonotonic({0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577}, true))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",268,3,273,62,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",268,3,273,62,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 459
type: ALGORITHM

  assert(true, "The last two pressure points for the fan or pump performance curve must be decreasing.
    You need to set more reasonable parameters.
Received
" + nb_hydr_static_v6.chwp_3.eff.getArrayAsString({800000.0, 750000.0, 700000.0, 650000.0, 600000.0, 550000.0, 500000.0, 450000.0, 400000.0, 350000.0, 300000.0, 250000.0, 200000.0, 150000.0, 100000.0, 50000.0, 50.0}, "dp", 6, 6));
*/
void nb_hydr_static_v6_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  static const MMC_DEFSTRINGLIT(tmp85,144,"The last two pressure points for the fan or pump performance curve must be decreasing.\n    You need to set more reasonable parameters.\nReceived\n");
  real_array tmp86;
  static const MMC_DEFSTRINGLIT(tmp87,2,"dp");
  modelica_metatype tmpMeta88;
  static int tmp89 = 0;
  {
    if(!1 /* true */)
    {
      array_alloc_scalar_real_array(&tmp86, 17, (modelica_real)800000.0, (modelica_real)750000.0, (modelica_real)700000.0, (modelica_real)650000.0, (modelica_real)600000.0, (modelica_real)550000.0, (modelica_real)500000.0, (modelica_real)450000.0, (modelica_real)400000.0, (modelica_real)350000.0, (modelica_real)300000.0, (modelica_real)250000.0, (modelica_real)200000.0, (modelica_real)150000.0, (modelica_real)100000.0, (modelica_real)50000.0, (modelica_real)50.0);
      tmpMeta88 = stringAppend(MMC_REFSTRINGLIT(tmp85),omc_nb__hydr__static__v6_chwp__3_eff_getArrayAsString(threadData, tmp86, MMC_REFSTRINGLIT(tmp87), ((modelica_integer) 6), ((modelica_integer) 6)));
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",276,5,281,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",276,5,281,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 458
type: ALGORITHM

  assert(true, "SpeedControlled_y requires to set the pressure vs. flow rate curve in record 'per'.");
*/
void nb_hydr_static_v6_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  static const MMC_DEFSTRINGLIT(tmp90,83,"SpeedControlled_y requires to set the pressure vs. flow rate curve in record 'per'.");
  static int tmp91 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/SpeedControlled_y.mo",40,3,41,90,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp90)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/SpeedControlled_y.mo",40,3,41,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp90)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 457
type: ALGORITHM

  assert(true, "In nb_hydr_static_v6.chwp_3: The value of parameter m_flow_nominal should be greater or equal than " + String(1e-60, 6, 0, true) + " but it equals " + String(574.453122, 6, 0, true));
*/
void nb_hydr_static_v6_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  static const MMC_DEFSTRINGLIT(tmp92,99,"In nb_hydr_static_v6.chwp_3: The value of parameter m_flow_nominal should be greater or equal than ");
  modelica_string tmp93;
  modelica_metatype tmpMeta94;
  static const MMC_DEFSTRINGLIT(tmp95,15," but it equals ");
  modelica_metatype tmpMeta96;
  modelica_string tmp97;
  modelica_metatype tmpMeta98;
  static int tmp99 = 0;
  {
    if(!1 /* true */)
    {
      tmp93 = modelica_real_to_modelica_string(1e-60, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta94 = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      tmpMeta96 = stringAppend(tmpMeta94,MMC_REFSTRINGLIT(tmp95));
      tmp97 = modelica_real_to_modelica_string(574.453122, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta98 = stringAppend(tmpMeta96,tmp97);
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",346,3,348,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta98));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",346,3,348,81,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta98));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 456
type: ALGORITHM

  assert(chiller_3.m_flow_turbulent > 0.0, "m_flow_turbulent must be bigger than zero.");
*/
void nb_hydr_static_v6_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp102 = 0;
  {
    tmp100 = Greater((data->simulationInfo->realParameter[111] /* chiller_3.m_flow_turbulent PARAM */),0.0);
    if(!tmp100)
    {
      {
        const char* assert_cond = "(chiller_3.m_flow_turbulent > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp101)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp101)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 455
type: ALGORITHM

  assert(chiller_3.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void nb_hydr_static_v6_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  modelica_boolean tmp103;
  static const MMC_DEFSTRINGLIT(tmp104,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp105 = 0;
  {
    tmp103 = Greater((data->simulationInfo->realParameter[109] /* chiller_3.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp103)
    {
      {
        const char* assert_cond = "(chiller_3.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp104)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp104)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 454
type: ALGORITHM

  assert(Buildings.Utilities.Math.Functions.isMonotonic({0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577}, true), "The fan pressure rise must be a strictly decreasing sequence with respect to the volume flow rate,
  with the first element for the fan pressure raise being non-zero.
The following performance data have been entered:
" + nb_hydr_static_v6.chwp_4.eff.getArrayAsString({0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577}, "pressure.V_flow", 6, 6));
*/
void nb_hydr_static_v6_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  real_array tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,217,"The fan pressure rise must be a strictly decreasing sequence with respect to the volume flow rate,\n  with the first element for the fan pressure raise being non-zero.\nThe following performance data have been entered:\n");
  real_array tmp108;
  static const MMC_DEFSTRINGLIT(tmp109,15,"pressure.V_flow");
  modelica_metatype tmpMeta110;
  static int tmp111 = 0;
  {
    array_alloc_scalar_real_array(&tmp106, 17, (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577);
    if(!omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, tmp106, 1 /* true */))
    {
      array_alloc_scalar_real_array(&tmp108, 17, (modelica_real)0.155, (modelica_real)0.226, (modelica_real)0.286, (modelica_real)0.336, (modelica_real)0.379, (modelica_real)0.414, (modelica_real)0.445, (modelica_real)0.47, (modelica_real)0.492, (modelica_real)0.511, (modelica_real)0.527, (modelica_real)0.54, (modelica_real)0.552, (modelica_real)0.5620000000000001, (modelica_real)0.569, (modelica_real)0.575, (modelica_real)0.577);
      tmpMeta110 = stringAppend(MMC_REFSTRINGLIT(tmp107),omc_nb__hydr__static__v6_chwp__4_eff_getArrayAsString(threadData, tmp108, MMC_REFSTRINGLIT(tmp109), ((modelica_integer) 6), ((modelica_integer) 6)));
      {
        const char* assert_cond = "(Buildings.Utilities.Math.Functions.isMonotonic({0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577}, true))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",268,3,273,62,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta110));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",268,3,273,62,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta110));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 453
type: ALGORITHM

  assert(true, "The last two pressure points for the fan or pump performance curve must be decreasing.
    You need to set more reasonable parameters.
Received
" + nb_hydr_static_v6.chwp_4.eff.getArrayAsString({800000.0, 750000.0, 700000.0, 650000.0, 600000.0, 550000.0, 500000.0, 450000.0, 400000.0, 350000.0, 300000.0, 250000.0, 200000.0, 150000.0, 100000.0, 50000.0, 50.0}, "dp", 6, 6));
*/
void nb_hydr_static_v6_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  static const MMC_DEFSTRINGLIT(tmp112,144,"The last two pressure points for the fan or pump performance curve must be decreasing.\n    You need to set more reasonable parameters.\nReceived\n");
  real_array tmp113;
  static const MMC_DEFSTRINGLIT(tmp114,2,"dp");
  modelica_metatype tmpMeta115;
  static int tmp116 = 0;
  {
    if(!1 /* true */)
    {
      array_alloc_scalar_real_array(&tmp113, 17, (modelica_real)800000.0, (modelica_real)750000.0, (modelica_real)700000.0, (modelica_real)650000.0, (modelica_real)600000.0, (modelica_real)550000.0, (modelica_real)500000.0, (modelica_real)450000.0, (modelica_real)400000.0, (modelica_real)350000.0, (modelica_real)300000.0, (modelica_real)250000.0, (modelica_real)200000.0, (modelica_real)150000.0, (modelica_real)100000.0, (modelica_real)50000.0, (modelica_real)50.0);
      tmpMeta115 = stringAppend(MMC_REFSTRINGLIT(tmp112),omc_nb__hydr__static__v6_chwp__4_eff_getArrayAsString(threadData, tmp113, MMC_REFSTRINGLIT(tmp114), ((modelica_integer) 6), ((modelica_integer) 6)));
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",276,5,281,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta115));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",276,5,281,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta115));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 452
type: ALGORITHM

  assert(true, "SpeedControlled_y requires to set the pressure vs. flow rate curve in record 'per'.");
*/
void nb_hydr_static_v6_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  static const MMC_DEFSTRINGLIT(tmp117,83,"SpeedControlled_y requires to set the pressure vs. flow rate curve in record 'per'.");
  static int tmp118 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/SpeedControlled_y.mo",40,3,41,90,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp117)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/SpeedControlled_y.mo",40,3,41,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp117)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 451
type: ALGORITHM

  assert(true, "In nb_hydr_static_v6.chwp_4: The value of parameter m_flow_nominal should be greater or equal than " + String(1e-60, 6, 0, true) + " but it equals " + String(574.453122, 6, 0, true));
*/
void nb_hydr_static_v6_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  static const MMC_DEFSTRINGLIT(tmp119,99,"In nb_hydr_static_v6.chwp_4: The value of parameter m_flow_nominal should be greater or equal than ");
  modelica_string tmp120;
  modelica_metatype tmpMeta121;
  static const MMC_DEFSTRINGLIT(tmp122,15," but it equals ");
  modelica_metatype tmpMeta123;
  modelica_string tmp124;
  modelica_metatype tmpMeta125;
  static int tmp126 = 0;
  {
    if(!1 /* true */)
    {
      tmp120 = modelica_real_to_modelica_string(1e-60, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta121 = stringAppend(MMC_REFSTRINGLIT(tmp119),tmp120);
      tmpMeta123 = stringAppend(tmpMeta121,MMC_REFSTRINGLIT(tmp122));
      tmp124 = modelica_real_to_modelica_string(574.453122, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta125 = stringAppend(tmpMeta123,tmp124);
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",346,3,348,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",346,3,348,81,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 450
type: ALGORITHM

  assert(chiller_4.m_flow_turbulent > 0.0, "m_flow_turbulent must be bigger than zero.");
*/
void nb_hydr_static_v6_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  modelica_boolean tmp127;
  static const MMC_DEFSTRINGLIT(tmp128,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp129 = 0;
  {
    tmp127 = Greater((data->simulationInfo->realParameter[125] /* chiller_4.m_flow_turbulent PARAM */),0.0);
    if(!tmp127)
    {
      {
        const char* assert_cond = "(chiller_4.m_flow_turbulent > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp128)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp128)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 449
type: ALGORITHM

  assert(chiller_4.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void nb_hydr_static_v6_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp132 = 0;
  {
    tmp130 = Greater((data->simulationInfo->realParameter[123] /* chiller_4.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp130)
    {
      {
        const char* assert_cond = "(chiller_4.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp131)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp131)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 448
type: ALGORITHM

  assert(true, "Sensor " + chw_sup_P.instanceName + " can lead to numerical problems if connected to a scalar fluid port.
  Only connect it to a vectorized fluid port, such as used in 'Buildings.Fluid.MixingVolumes`.
  See Buildings.Fluid.Sensors.UsersGuide for more information.
  To disable this warning, set 'warnAboutOnePortConnection = false' in " + chw_sup_P.instanceName + ".");
*/
void nb_hydr_static_v6_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  static const MMC_DEFSTRINGLIT(tmp133,7,"Sensor ");
  modelica_metatype tmpMeta134;
  static const MMC_DEFSTRINGLIT(tmp135,298," can lead to numerical problems if connected to a scalar fluid port.\n  Only connect it to a vectorized fluid port, such as used in 'Buildings.Fluid.MixingVolumes`.\n  See Buildings.Fluid.Sensors.UsersGuide for more information.\n  To disable this warning, set 'warnAboutOnePortConnection = false' in ");
  modelica_metatype tmpMeta136;
  modelica_metatype tmpMeta137;
  modelica_metatype tmpMeta138;
  static int tmp139 = 0;
  if(!tmp139)
  {
    if(!1 /* true */)
    {
      tmpMeta134 = stringAppend(MMC_REFSTRINGLIT(tmp133),(data->simulationInfo->stringParameter[1] /* chw_sup_P.instanceName PARAM */));
      tmpMeta136 = stringAppend(tmpMeta134,MMC_REFSTRINGLIT(tmp135));
      tmpMeta137 = stringAppend(tmpMeta136,(data->simulationInfo->stringParameter[1] /* chw_sup_P.instanceName PARAM */));
      tmpMeta138 = stringAppend(tmpMeta137,(modelica_string) mmc_strings_len1[46]);
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Sensors/BaseClasses/PartialAbsoluteSensor.mo",28,3,33,32,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Sensors/BaseClasses/PartialAbsoluteSensor.mo",28,3,33,32,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta138));
        }
      }
      tmp139 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 447
type: ALGORITHM

  assert(true, "Sensor " + chw_ret_P.instanceName + " can lead to numerical problems if connected to a scalar fluid port.
  Only connect it to a vectorized fluid port, such as used in 'Buildings.Fluid.MixingVolumes`.
  See Buildings.Fluid.Sensors.UsersGuide for more information.
  To disable this warning, set 'warnAboutOnePortConnection = false' in " + chw_ret_P.instanceName + ".");
*/
void nb_hydr_static_v6_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  static const MMC_DEFSTRINGLIT(tmp140,7,"Sensor ");
  modelica_metatype tmpMeta141;
  static const MMC_DEFSTRINGLIT(tmp142,298," can lead to numerical problems if connected to a scalar fluid port.\n  Only connect it to a vectorized fluid port, such as used in 'Buildings.Fluid.MixingVolumes`.\n  See Buildings.Fluid.Sensors.UsersGuide for more information.\n  To disable this warning, set 'warnAboutOnePortConnection = false' in ");
  modelica_metatype tmpMeta143;
  modelica_metatype tmpMeta144;
  modelica_metatype tmpMeta145;
  static int tmp146 = 0;
  if(!tmp146)
  {
    if(!1 /* true */)
    {
      tmpMeta141 = stringAppend(MMC_REFSTRINGLIT(tmp140),(data->simulationInfo->stringParameter[0] /* chw_ret_P.instanceName PARAM */));
      tmpMeta143 = stringAppend(tmpMeta141,MMC_REFSTRINGLIT(tmp142));
      tmpMeta144 = stringAppend(tmpMeta143,(data->simulationInfo->stringParameter[0] /* chw_ret_P.instanceName PARAM */));
      tmpMeta145 = stringAppend(tmpMeta144,(modelica_string) mmc_strings_len1[46]);
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Sensors/BaseClasses/PartialAbsoluteSensor.mo",28,3,33,32,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta145));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Sensors/BaseClasses/PartialAbsoluteSensor.mo",28,3,33,32,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta145));
        }
      }
      tmp146 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 446
type: ALGORITHM

  assert(true, "Sensor " + chw_term_P.instanceName + " can lead to numerical problems if connected to a scalar fluid port.
  Only connect it to a vectorized fluid port, such as used in 'Buildings.Fluid.MixingVolumes`.
  See Buildings.Fluid.Sensors.UsersGuide for more information.
  To disable this warning, set 'warnAboutOnePortConnection = false' in " + chw_term_P.instanceName + ".");
*/
void nb_hydr_static_v6_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  static const MMC_DEFSTRINGLIT(tmp147,7,"Sensor ");
  modelica_metatype tmpMeta148;
  static const MMC_DEFSTRINGLIT(tmp149,298," can lead to numerical problems if connected to a scalar fluid port.\n  Only connect it to a vectorized fluid port, such as used in 'Buildings.Fluid.MixingVolumes`.\n  See Buildings.Fluid.Sensors.UsersGuide for more information.\n  To disable this warning, set 'warnAboutOnePortConnection = false' in ");
  modelica_metatype tmpMeta150;
  modelica_metatype tmpMeta151;
  modelica_metatype tmpMeta152;
  static int tmp153 = 0;
  if(!tmp153)
  {
    if(!1 /* true */)
    {
      tmpMeta148 = stringAppend(MMC_REFSTRINGLIT(tmp147),(data->simulationInfo->stringParameter[2] /* chw_term_P.instanceName PARAM */));
      tmpMeta150 = stringAppend(tmpMeta148,MMC_REFSTRINGLIT(tmp149));
      tmpMeta151 = stringAppend(tmpMeta150,(data->simulationInfo->stringParameter[2] /* chw_term_P.instanceName PARAM */));
      tmpMeta152 = stringAppend(tmpMeta151,(modelica_string) mmc_strings_len1[46]);
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Sensors/BaseClasses/PartialAbsoluteSensor.mo",28,3,33,32,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta152));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Sensors/BaseClasses/PartialAbsoluteSensor.mo",28,3,33,32,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta152));
        }
      }
      tmp153 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 445
type: ALGORITHM

  assert(terminal_resist.l > 0.0, "Valve leakage parameter l must be bigger than zero.");
*/
void nb_hydr_static_v6_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  modelica_boolean tmp154;
  static const MMC_DEFSTRINGLIT(tmp155,51,"Valve leakage parameter l must be bigger than zero.");
  static int tmp156 = 0;
  {
    tmp154 = Greater((data->simulationInfo->realParameter[1778] /* terminal_resist.l PARAM */),0.0);
    if(!tmp154)
    {
      {
        const char* assert_cond = "(terminal_resist.l > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Actuators/Valves/TwoWayLinear.mo",8,3,8,71,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp155)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Actuators/Valves/TwoWayLinear.mo",8,3,8,71,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp155)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 444
type: ALGORITHM

  assert(terminal_resist.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void nb_hydr_static_v6_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  modelica_boolean tmp157;
  static const MMC_DEFSTRINGLIT(tmp158,18,"f_cut > 0 required");
  static int tmp159 = 0;
  {
    tmp157 = Greater((data->simulationInfo->realParameter[1768] /* terminal_resist.filter.f_cut PARAM */),0.0);
    if(!tmp157)
    {
      {
        const char* assert_cond = "(terminal_resist.filter.f_cut > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp158)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp158)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 443
type: ALGORITHM

  assert(terminal_resist.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void nb_hydr_static_v6_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  modelica_boolean tmp160;
  static const MMC_DEFSTRINGLIT(tmp161,21,"A_ripple > 0 required");
  static int tmp162 = 0;
  {
    tmp160 = Greater((data->simulationInfo->realParameter[1765] /* terminal_resist.filter.A_ripple PARAM */),0.0);
    if(!tmp160)
    {
      {
        const char* assert_cond = "(terminal_resist.filter.A_ripple > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp161)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp161)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 442
type: ALGORITHM

  assert(terminal_resist.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void nb_hydr_static_v6_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  modelica_boolean tmp163;
  static const MMC_DEFSTRINGLIT(tmp164,22,"u_nominal > 0 required");
  static int tmp165 = 0;
  {
    tmp163 = Greater((data->simulationInfo->realParameter[1773] /* terminal_resist.filter.u_nominal PARAM */),0.0);
    if(!tmp163)
    {
      {
        const char* assert_cond = "(terminal_resist.filter.u_nominal > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp164)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp164)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 441
type: ALGORITHM

  assert(chwp_4.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void nb_hydr_static_v6_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  modelica_boolean tmp166;
  static const MMC_DEFSTRINGLIT(tmp167,18,"f_cut > 0 required");
  static int tmp168 = 0;
  {
    tmp166 = Greater((data->simulationInfo->realParameter[1554] /* chwp_4.filter.f_cut PARAM */),0.0);
    if(!tmp166)
    {
      {
        const char* assert_cond = "(chwp_4.filter.f_cut > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp167)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp167)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 440
type: ALGORITHM

  assert(chwp_4.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void nb_hydr_static_v6_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  modelica_boolean tmp169;
  static const MMC_DEFSTRINGLIT(tmp170,21,"A_ripple > 0 required");
  static int tmp171 = 0;
  {
    tmp169 = Greater((data->simulationInfo->realParameter[1551] /* chwp_4.filter.A_ripple PARAM */),0.0);
    if(!tmp169)
    {
      {
        const char* assert_cond = "(chwp_4.filter.A_ripple > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp170)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp170)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 439
type: ALGORITHM

  assert(chwp_4.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void nb_hydr_static_v6_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  modelica_boolean tmp172;
  static const MMC_DEFSTRINGLIT(tmp173,22,"u_nominal > 0 required");
  static int tmp174 = 0;
  {
    tmp172 = Greater((data->simulationInfo->realParameter[1559] /* chwp_4.filter.u_nominal PARAM */),0.0);
    if(!tmp172)
    {
      {
        const char* assert_cond = "(chwp_4.filter.u_nominal > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp173)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp173)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 438
type: ALGORITHM

  assert(chwp_3.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void nb_hydr_static_v6_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  modelica_boolean tmp175;
  static const MMC_DEFSTRINGLIT(tmp176,18,"f_cut > 0 required");
  static int tmp177 = 0;
  {
    tmp175 = Greater((data->simulationInfo->realParameter[1171] /* chwp_3.filter.f_cut PARAM */),0.0);
    if(!tmp175)
    {
      {
        const char* assert_cond = "(chwp_3.filter.f_cut > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp176)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp176)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 437
type: ALGORITHM

  assert(chwp_3.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void nb_hydr_static_v6_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  modelica_boolean tmp178;
  static const MMC_DEFSTRINGLIT(tmp179,21,"A_ripple > 0 required");
  static int tmp180 = 0;
  {
    tmp178 = Greater((data->simulationInfo->realParameter[1168] /* chwp_3.filter.A_ripple PARAM */),0.0);
    if(!tmp178)
    {
      {
        const char* assert_cond = "(chwp_3.filter.A_ripple > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp179)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp179)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 436
type: ALGORITHM

  assert(chwp_3.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void nb_hydr_static_v6_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,22,"u_nominal > 0 required");
  static int tmp183 = 0;
  {
    tmp181 = Greater((data->simulationInfo->realParameter[1176] /* chwp_3.filter.u_nominal PARAM */),0.0);
    if(!tmp181)
    {
      {
        const char* assert_cond = "(chwp_3.filter.u_nominal > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp182)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp182)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 435
type: ALGORITHM

  assert(chwp_2.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void nb_hydr_static_v6_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  modelica_boolean tmp184;
  static const MMC_DEFSTRINGLIT(tmp185,18,"f_cut > 0 required");
  static int tmp186 = 0;
  {
    tmp184 = Greater((data->simulationInfo->realParameter[788] /* chwp_2.filter.f_cut PARAM */),0.0);
    if(!tmp184)
    {
      {
        const char* assert_cond = "(chwp_2.filter.f_cut > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp185)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp185)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 434
type: ALGORITHM

  assert(chwp_2.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void nb_hydr_static_v6_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  modelica_boolean tmp187;
  static const MMC_DEFSTRINGLIT(tmp188,21,"A_ripple > 0 required");
  static int tmp189 = 0;
  {
    tmp187 = Greater((data->simulationInfo->realParameter[785] /* chwp_2.filter.A_ripple PARAM */),0.0);
    if(!tmp187)
    {
      {
        const char* assert_cond = "(chwp_2.filter.A_ripple > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp188)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp188)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 433
type: ALGORITHM

  assert(chwp_2.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void nb_hydr_static_v6_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  modelica_boolean tmp190;
  static const MMC_DEFSTRINGLIT(tmp191,22,"u_nominal > 0 required");
  static int tmp192 = 0;
  {
    tmp190 = Greater((data->simulationInfo->realParameter[793] /* chwp_2.filter.u_nominal PARAM */),0.0);
    if(!tmp190)
    {
      {
        const char* assert_cond = "(chwp_2.filter.u_nominal > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp191)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp191)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 432
type: ALGORITHM

  assert(chwp_1.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void nb_hydr_static_v6_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  modelica_boolean tmp193;
  static const MMC_DEFSTRINGLIT(tmp194,18,"f_cut > 0 required");
  static int tmp195 = 0;
  {
    tmp193 = Greater((data->simulationInfo->realParameter[407] /* chwp_1.filter.f_cut PARAM */),0.0);
    if(!tmp193)
    {
      {
        const char* assert_cond = "(chwp_1.filter.f_cut > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp194)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp194)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 431
type: ALGORITHM

  assert(chwp_1.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void nb_hydr_static_v6_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,21,"A_ripple > 0 required");
  static int tmp198 = 0;
  {
    tmp196 = Greater((data->simulationInfo->realParameter[404] /* chwp_1.filter.A_ripple PARAM */),0.0);
    if(!tmp196)
    {
      {
        const char* assert_cond = "(chwp_1.filter.A_ripple > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp197)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp197)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 430
type: ALGORITHM

  assert(chwp_1.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void nb_hydr_static_v6_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  modelica_boolean tmp199;
  static const MMC_DEFSTRINGLIT(tmp200,22,"u_nominal > 0 required");
  static int tmp201 = 0;
  {
    tmp199 = Greater((data->simulationInfo->realParameter[412] /* chwp_1.filter.u_nominal PARAM */),0.0);
    if(!tmp199)
    {
      {
        const char* assert_cond = "(chwp_1.filter.u_nominal > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp200)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp200)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 429
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("SimpleLiquidWater", {"SimpleLiquidWater"}, true, true, chw_sup.X_in_internal, "Boundary_pT");
*/
void nb_hydr_static_v6_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  static const MMC_DEFSTRINGLIT(tmp202,17,"SimpleLiquidWater");
  string_array tmp203;
  static const MMC_DEFSTRINGLIT(tmp204,17,"SimpleLiquidWater");
  real_array tmp205;
  static const MMC_DEFSTRINGLIT(tmp206,11,"Boundary_pT");
  array_alloc_scalar_string_array(&tmp203, 1, (modelica_string)MMC_REFSTRINGLIT(tmp204));
  real_array_create(&tmp205, ((modelica_real*)&((&data->localData[0]->realVars[183] /* chw_sup.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp202), tmp203, 1 /* true */, 1 /* true */, tmp205, MMC_REFSTRINGLIT(tmp206));
  TRACE_POP
}

/*
equation index: 428
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("SimpleLiquidWater", {"SimpleLiquidWater"}, true, true, chw_ret.X_in_internal, "Boundary_pT");
*/
void nb_hydr_static_v6_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  static const MMC_DEFSTRINGLIT(tmp207,17,"SimpleLiquidWater");
  string_array tmp208;
  static const MMC_DEFSTRINGLIT(tmp209,17,"SimpleLiquidWater");
  real_array tmp210;
  static const MMC_DEFSTRINGLIT(tmp211,11,"Boundary_pT");
  array_alloc_scalar_string_array(&tmp208, 1, (modelica_string)MMC_REFSTRINGLIT(tmp209));
  real_array_create(&tmp210, ((modelica_real*)&((&data->localData[0]->realVars[178] /* chw_ret.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp207), tmp208, 1 /* true */, 1 /* true */, tmp210, MMC_REFSTRINGLIT(tmp211));
  TRACE_POP
}
OMC_DISABLE_OPT
void nb_hydr_static_v6_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  nb_hydr_static_v6_eqFunction_1(data, threadData);
  nb_hydr_static_v6_eqFunction_2(data, threadData);
  nb_hydr_static_v6_eqFunction_3(data, threadData);
  nb_hydr_static_v6_eqFunction_4(data, threadData);
  nb_hydr_static_v6_eqFunction_5(data, threadData);
  nb_hydr_static_v6_eqFunction_6(data, threadData);
  nb_hydr_static_v6_eqFunction_7(data, threadData);
  nb_hydr_static_v6_eqFunction_8(data, threadData);
  nb_hydr_static_v6_eqFunction_9(data, threadData);
  nb_hydr_static_v6_eqFunction_10(data, threadData);
  nb_hydr_static_v6_eqFunction_11(data, threadData);
  nb_hydr_static_v6_eqFunction_12(data, threadData);
  nb_hydr_static_v6_eqFunction_13(data, threadData);
  nb_hydr_static_v6_eqFunction_14(data, threadData);
  nb_hydr_static_v6_eqFunction_15(data, threadData);
  nb_hydr_static_v6_eqFunction_16(data, threadData);
  nb_hydr_static_v6_eqFunction_17(data, threadData);
  nb_hydr_static_v6_eqFunction_18(data, threadData);
  nb_hydr_static_v6_eqFunction_19(data, threadData);
  nb_hydr_static_v6_eqFunction_20(data, threadData);
  nb_hydr_static_v6_eqFunction_21(data, threadData);
  nb_hydr_static_v6_eqFunction_22(data, threadData);
  nb_hydr_static_v6_eqFunction_23(data, threadData);
  nb_hydr_static_v6_eqFunction_24(data, threadData);
  nb_hydr_static_v6_eqFunction_25(data, threadData);
  nb_hydr_static_v6_eqFunction_26(data, threadData);
  nb_hydr_static_v6_eqFunction_27(data, threadData);
  nb_hydr_static_v6_eqFunction_28(data, threadData);
  nb_hydr_static_v6_eqFunction_29(data, threadData);
  nb_hydr_static_v6_eqFunction_30(data, threadData);
  nb_hydr_static_v6_eqFunction_31(data, threadData);
  nb_hydr_static_v6_eqFunction_32(data, threadData);
  nb_hydr_static_v6_eqFunction_33(data, threadData);
  nb_hydr_static_v6_eqFunction_34(data, threadData);
  nb_hydr_static_v6_eqFunction_35(data, threadData);
  nb_hydr_static_v6_eqFunction_36(data, threadData);
  nb_hydr_static_v6_eqFunction_37(data, threadData);
  nb_hydr_static_v6_eqFunction_38(data, threadData);
  nb_hydr_static_v6_eqFunction_39(data, threadData);
  nb_hydr_static_v6_eqFunction_40(data, threadData);
  nb_hydr_static_v6_eqFunction_41(data, threadData);
  nb_hydr_static_v6_eqFunction_989(data, threadData);
  nb_hydr_static_v6_eqFunction_990(data, threadData);
  nb_hydr_static_v6_eqFunction_985(data, threadData);
  nb_hydr_static_v6_eqFunction_45(data, threadData);
  nb_hydr_static_v6_eqFunction_986(data, threadData);
  nb_hydr_static_v6_eqFunction_47(data, threadData);
  nb_hydr_static_v6_eqFunction_48(data, threadData);
  nb_hydr_static_v6_eqFunction_49(data, threadData);
  nb_hydr_static_v6_eqFunction_50(data, threadData);
  nb_hydr_static_v6_eqFunction_51(data, threadData);
  nb_hydr_static_v6_eqFunction_52(data, threadData);
  nb_hydr_static_v6_eqFunction_53(data, threadData);
  nb_hydr_static_v6_eqFunction_54(data, threadData);
  nb_hydr_static_v6_eqFunction_55(data, threadData);
  nb_hydr_static_v6_eqFunction_56(data, threadData);
  nb_hydr_static_v6_eqFunction_57(data, threadData);
  nb_hydr_static_v6_eqFunction_58(data, threadData);
  nb_hydr_static_v6_eqFunction_59(data, threadData);
  nb_hydr_static_v6_eqFunction_60(data, threadData);
  nb_hydr_static_v6_eqFunction_61(data, threadData);
  nb_hydr_static_v6_eqFunction_62(data, threadData);
  nb_hydr_static_v6_eqFunction_1003(data, threadData);
  nb_hydr_static_v6_eqFunction_1004(data, threadData);
  nb_hydr_static_v6_eqFunction_65(data, threadData);
  nb_hydr_static_v6_eqFunction_66(data, threadData);
  nb_hydr_static_v6_eqFunction_67(data, threadData);
  nb_hydr_static_v6_eqFunction_68(data, threadData);
  nb_hydr_static_v6_eqFunction_69(data, threadData);
  nb_hydr_static_v6_eqFunction_70(data, threadData);
  nb_hydr_static_v6_eqFunction_71(data, threadData);
  nb_hydr_static_v6_eqFunction_72(data, threadData);
  nb_hydr_static_v6_eqFunction_73(data, threadData);
  nb_hydr_static_v6_eqFunction_74(data, threadData);
  nb_hydr_static_v6_eqFunction_999(data, threadData);
  nb_hydr_static_v6_eqFunction_76(data, threadData);
  nb_hydr_static_v6_eqFunction_77(data, threadData);
  nb_hydr_static_v6_eqFunction_78(data, threadData);
  nb_hydr_static_v6_eqFunction_79(data, threadData);
  nb_hydr_static_v6_eqFunction_80(data, threadData);
  nb_hydr_static_v6_eqFunction_81(data, threadData);
  nb_hydr_static_v6_eqFunction_82(data, threadData);
  nb_hydr_static_v6_eqFunction_996(data, threadData);
  nb_hydr_static_v6_eqFunction_84(data, threadData);
  nb_hydr_static_v6_eqFunction_85(data, threadData);
  nb_hydr_static_v6_eqFunction_86(data, threadData);
  nb_hydr_static_v6_eqFunction_87(data, threadData);
  nb_hydr_static_v6_eqFunction_88(data, threadData);
  nb_hydr_static_v6_eqFunction_89(data, threadData);
  nb_hydr_static_v6_eqFunction_90(data, threadData);
  nb_hydr_static_v6_eqFunction_993(data, threadData);
  nb_hydr_static_v6_eqFunction_92(data, threadData);
  nb_hydr_static_v6_eqFunction_93(data, threadData);
  nb_hydr_static_v6_eqFunction_94(data, threadData);
  nb_hydr_static_v6_eqFunction_181(data, threadData);
  nb_hydr_static_v6_eqFunction_1164(data, threadData);
  nb_hydr_static_v6_eqFunction_1192(data, threadData);
  nb_hydr_static_v6_eqFunction_1176(data, threadData);
  nb_hydr_static_v6_eqFunction_185(data, threadData);
  nb_hydr_static_v6_eqFunction_186(data, threadData);
  nb_hydr_static_v6_eqFunction_1166(data, threadData);
  nb_hydr_static_v6_eqFunction_1167(data, threadData);
  nb_hydr_static_v6_eqFunction_1149(data, threadData);
  nb_hydr_static_v6_eqFunction_1213(data, threadData);
  nb_hydr_static_v6_eqFunction_1129(data, threadData);
  nb_hydr_static_v6_eqFunction_1128(data, threadData);
  nb_hydr_static_v6_eqFunction_1212(data, threadData);
  nb_hydr_static_v6_eqFunction_194(data, threadData);
  nb_hydr_static_v6_eqFunction_195(data, threadData);
  nb_hydr_static_v6_eqFunction_1168(data, threadData);
  nb_hydr_static_v6_eqFunction_197(data, threadData);
  nb_hydr_static_v6_eqFunction_198(data, threadData);
  nb_hydr_static_v6_eqFunction_1227(data, threadData);
  nb_hydr_static_v6_eqFunction_1228(data, threadData);
  nb_hydr_static_v6_eqFunction_1127(data, threadData);
  nb_hydr_static_v6_eqFunction_1126(data, threadData);
  nb_hydr_static_v6_eqFunction_203(data, threadData);
  nb_hydr_static_v6_eqFunction_1152(data, threadData);
  nb_hydr_static_v6_eqFunction_205(data, threadData);
  nb_hydr_static_v6_eqFunction_206(data, threadData);
  nb_hydr_static_v6_eqFunction_207(data, threadData);
  nb_hydr_static_v6_eqFunction_1151(data, threadData);
  nb_hydr_static_v6_eqFunction_1150(data, threadData);
  nb_hydr_static_v6_eqFunction_1153(data, threadData);
  nb_hydr_static_v6_eqFunction_1199(data, threadData);
  nb_hydr_static_v6_eqFunction_1200(data, threadData);
  nb_hydr_static_v6_eqFunction_1125(data, threadData);
  nb_hydr_static_v6_eqFunction_1124(data, threadData);
  nb_hydr_static_v6_eqFunction_215(data, threadData);
  nb_hydr_static_v6_eqFunction_216(data, threadData);
  nb_hydr_static_v6_eqFunction_1214(data, threadData);
  nb_hydr_static_v6_eqFunction_218(data, threadData);
  nb_hydr_static_v6_eqFunction_219(data, threadData);
  nb_hydr_static_v6_eqFunction_220(data, threadData);
  nb_hydr_static_v6_eqFunction_221(data, threadData);
  nb_hydr_static_v6_eqFunction_1147(data, threadData);
  nb_hydr_static_v6_eqFunction_1148(data, threadData);
  nb_hydr_static_v6_eqFunction_1136(data, threadData);
  nb_hydr_static_v6_eqFunction_1137(data, threadData);
  nb_hydr_static_v6_eqFunction_1138(data, threadData);
  nb_hydr_static_v6_eqFunction_1139(data, threadData);
  nb_hydr_static_v6_eqFunction_1140(data, threadData);
  nb_hydr_static_v6_eqFunction_1141(data, threadData);
  nb_hydr_static_v6_eqFunction_230(data, threadData);
  nb_hydr_static_v6_eqFunction_1001(data, threadData);
  nb_hydr_static_v6_eqFunction_1143(data, threadData);
  nb_hydr_static_v6_eqFunction_1144(data, threadData);
  nb_hydr_static_v6_eqFunction_1145(data, threadData);
  nb_hydr_static_v6_eqFunction_1146(data, threadData);
  nb_hydr_static_v6_eqFunction_1203(data, threadData);
  nb_hydr_static_v6_eqFunction_1204(data, threadData);
  nb_hydr_static_v6_eqFunction_1190(data, threadData);
  nb_hydr_static_v6_eqFunction_1191(data, threadData);
  nb_hydr_static_v6_eqFunction_240(data, threadData);
  nb_hydr_static_v6_eqFunction_241(data, threadData);
  nb_hydr_static_v6_eqFunction_1163(data, threadData);
  nb_hydr_static_v6_eqFunction_243(data, threadData);
  nb_hydr_static_v6_eqFunction_244(data, threadData);
  nb_hydr_static_v6_eqFunction_245(data, threadData);
  nb_hydr_static_v6_eqFunction_246(data, threadData);
  nb_hydr_static_v6_eqFunction_987(data, threadData);
  nb_hydr_static_v6_eqFunction_248(data, threadData);
  nb_hydr_static_v6_eqFunction_249(data, threadData);
  nb_hydr_static_v6_eqFunction_250(data, threadData);
  nb_hydr_static_v6_eqFunction_251(data, threadData);
  nb_hydr_static_v6_eqFunction_252(data, threadData);
  nb_hydr_static_v6_eqFunction_253(data, threadData);
  nb_hydr_static_v6_eqFunction_254(data, threadData);
  nb_hydr_static_v6_eqFunction_255(data, threadData);
  nb_hydr_static_v6_eqFunction_256(data, threadData);
  nb_hydr_static_v6_eqFunction_257(data, threadData);
  nb_hydr_static_v6_eqFunction_258(data, threadData);
  nb_hydr_static_v6_eqFunction_259(data, threadData);
  nb_hydr_static_v6_eqFunction_260(data, threadData);
  nb_hydr_static_v6_eqFunction_261(data, threadData);
  nb_hydr_static_v6_eqFunction_262(data, threadData);
  nb_hydr_static_v6_eqFunction_263(data, threadData);
  nb_hydr_static_v6_eqFunction_264(data, threadData);
  nb_hydr_static_v6_eqFunction_265(data, threadData);
  nb_hydr_static_v6_eqFunction_266(data, threadData);
  nb_hydr_static_v6_eqFunction_267(data, threadData);
  nb_hydr_static_v6_eqFunction_268(data, threadData);
  nb_hydr_static_v6_eqFunction_269(data, threadData);
  nb_hydr_static_v6_eqFunction_270(data, threadData);
  nb_hydr_static_v6_eqFunction_271(data, threadData);
  nb_hydr_static_v6_eqFunction_272(data, threadData);
  nb_hydr_static_v6_eqFunction_273(data, threadData);
  nb_hydr_static_v6_eqFunction_274(data, threadData);
  nb_hydr_static_v6_eqFunction_275(data, threadData);
  nb_hydr_static_v6_eqFunction_276(data, threadData);
  nb_hydr_static_v6_eqFunction_277(data, threadData);
  nb_hydr_static_v6_eqFunction_278(data, threadData);
  nb_hydr_static_v6_eqFunction_279(data, threadData);
  nb_hydr_static_v6_eqFunction_280(data, threadData);
  nb_hydr_static_v6_eqFunction_281(data, threadData);
  nb_hydr_static_v6_eqFunction_282(data, threadData);
  nb_hydr_static_v6_eqFunction_283(data, threadData);
  nb_hydr_static_v6_eqFunction_284(data, threadData);
  nb_hydr_static_v6_eqFunction_285(data, threadData);
  nb_hydr_static_v6_eqFunction_286(data, threadData);
  nb_hydr_static_v6_eqFunction_287(data, threadData);
  nb_hydr_static_v6_eqFunction_288(data, threadData);
  nb_hydr_static_v6_eqFunction_289(data, threadData);
  nb_hydr_static_v6_eqFunction_290(data, threadData);
  nb_hydr_static_v6_eqFunction_291(data, threadData);
  nb_hydr_static_v6_eqFunction_292(data, threadData);
  nb_hydr_static_v6_eqFunction_293(data, threadData);
  nb_hydr_static_v6_eqFunction_294(data, threadData);
  nb_hydr_static_v6_eqFunction_295(data, threadData);
  nb_hydr_static_v6_eqFunction_296(data, threadData);
  nb_hydr_static_v6_eqFunction_297(data, threadData);
  nb_hydr_static_v6_eqFunction_298(data, threadData);
  nb_hydr_static_v6_eqFunction_299(data, threadData);
  nb_hydr_static_v6_eqFunction_300(data, threadData);
  nb_hydr_static_v6_eqFunction_301(data, threadData);
  nb_hydr_static_v6_eqFunction_302(data, threadData);
  nb_hydr_static_v6_eqFunction_303(data, threadData);
  nb_hydr_static_v6_eqFunction_304(data, threadData);
  nb_hydr_static_v6_eqFunction_305(data, threadData);
  nb_hydr_static_v6_eqFunction_306(data, threadData);
  nb_hydr_static_v6_eqFunction_307(data, threadData);
  nb_hydr_static_v6_eqFunction_308(data, threadData);
  nb_hydr_static_v6_eqFunction_309(data, threadData);
  nb_hydr_static_v6_eqFunction_310(data, threadData);
  nb_hydr_static_v6_eqFunction_311(data, threadData);
  nb_hydr_static_v6_eqFunction_312(data, threadData);
  nb_hydr_static_v6_eqFunction_313(data, threadData);
  nb_hydr_static_v6_eqFunction_314(data, threadData);
  nb_hydr_static_v6_eqFunction_315(data, threadData);
  nb_hydr_static_v6_eqFunction_316(data, threadData);
  nb_hydr_static_v6_eqFunction_317(data, threadData);
  nb_hydr_static_v6_eqFunction_318(data, threadData);
  nb_hydr_static_v6_eqFunction_319(data, threadData);
  nb_hydr_static_v6_eqFunction_320(data, threadData);
  nb_hydr_static_v6_eqFunction_321(data, threadData);
  nb_hydr_static_v6_eqFunction_322(data, threadData);
  nb_hydr_static_v6_eqFunction_323(data, threadData);
  nb_hydr_static_v6_eqFunction_324(data, threadData);
  nb_hydr_static_v6_eqFunction_325(data, threadData);
  nb_hydr_static_v6_eqFunction_326(data, threadData);
  nb_hydr_static_v6_eqFunction_327(data, threadData);
  nb_hydr_static_v6_eqFunction_328(data, threadData);
  nb_hydr_static_v6_eqFunction_329(data, threadData);
  nb_hydr_static_v6_eqFunction_330(data, threadData);
  nb_hydr_static_v6_eqFunction_331(data, threadData);
  nb_hydr_static_v6_eqFunction_332(data, threadData);
  nb_hydr_static_v6_eqFunction_333(data, threadData);
  nb_hydr_static_v6_eqFunction_334(data, threadData);
  nb_hydr_static_v6_eqFunction_335(data, threadData);
  nb_hydr_static_v6_eqFunction_336(data, threadData);
  nb_hydr_static_v6_eqFunction_337(data, threadData);
  nb_hydr_static_v6_eqFunction_338(data, threadData);
  nb_hydr_static_v6_eqFunction_339(data, threadData);
  nb_hydr_static_v6_eqFunction_340(data, threadData);
  nb_hydr_static_v6_eqFunction_341(data, threadData);
  nb_hydr_static_v6_eqFunction_342(data, threadData);
  nb_hydr_static_v6_eqFunction_343(data, threadData);
  nb_hydr_static_v6_eqFunction_344(data, threadData);
  nb_hydr_static_v6_eqFunction_345(data, threadData);
  nb_hydr_static_v6_eqFunction_346(data, threadData);
  nb_hydr_static_v6_eqFunction_347(data, threadData);
  nb_hydr_static_v6_eqFunction_348(data, threadData);
  nb_hydr_static_v6_eqFunction_349(data, threadData);
  nb_hydr_static_v6_eqFunction_350(data, threadData);
  nb_hydr_static_v6_eqFunction_351(data, threadData);
  nb_hydr_static_v6_eqFunction_352(data, threadData);
  nb_hydr_static_v6_eqFunction_353(data, threadData);
  nb_hydr_static_v6_eqFunction_354(data, threadData);
  nb_hydr_static_v6_eqFunction_355(data, threadData);
  nb_hydr_static_v6_eqFunction_356(data, threadData);
  nb_hydr_static_v6_eqFunction_357(data, threadData);
  nb_hydr_static_v6_eqFunction_358(data, threadData);
  nb_hydr_static_v6_eqFunction_359(data, threadData);
  nb_hydr_static_v6_eqFunction_360(data, threadData);
  nb_hydr_static_v6_eqFunction_361(data, threadData);
  nb_hydr_static_v6_eqFunction_362(data, threadData);
  nb_hydr_static_v6_eqFunction_363(data, threadData);
  nb_hydr_static_v6_eqFunction_364(data, threadData);
  nb_hydr_static_v6_eqFunction_365(data, threadData);
  nb_hydr_static_v6_eqFunction_366(data, threadData);
  nb_hydr_static_v6_eqFunction_367(data, threadData);
  nb_hydr_static_v6_eqFunction_368(data, threadData);
  nb_hydr_static_v6_eqFunction_369(data, threadData);
  nb_hydr_static_v6_eqFunction_370(data, threadData);
  nb_hydr_static_v6_eqFunction_371(data, threadData);
  nb_hydr_static_v6_eqFunction_372(data, threadData);
  nb_hydr_static_v6_eqFunction_373(data, threadData);
  nb_hydr_static_v6_eqFunction_374(data, threadData);
  nb_hydr_static_v6_eqFunction_375(data, threadData);
  nb_hydr_static_v6_eqFunction_376(data, threadData);
  nb_hydr_static_v6_eqFunction_377(data, threadData);
  nb_hydr_static_v6_eqFunction_378(data, threadData);
  nb_hydr_static_v6_eqFunction_379(data, threadData);
  nb_hydr_static_v6_eqFunction_380(data, threadData);
  nb_hydr_static_v6_eqFunction_381(data, threadData);
  nb_hydr_static_v6_eqFunction_382(data, threadData);
  nb_hydr_static_v6_eqFunction_383(data, threadData);
  nb_hydr_static_v6_eqFunction_384(data, threadData);
  nb_hydr_static_v6_eqFunction_385(data, threadData);
  nb_hydr_static_v6_eqFunction_386(data, threadData);
  nb_hydr_static_v6_eqFunction_387(data, threadData);
  nb_hydr_static_v6_eqFunction_388(data, threadData);
  nb_hydr_static_v6_eqFunction_389(data, threadData);
  nb_hydr_static_v6_eqFunction_390(data, threadData);
  nb_hydr_static_v6_eqFunction_391(data, threadData);
  nb_hydr_static_v6_eqFunction_392(data, threadData);
  nb_hydr_static_v6_eqFunction_393(data, threadData);
  nb_hydr_static_v6_eqFunction_394(data, threadData);
  nb_hydr_static_v6_eqFunction_395(data, threadData);
  nb_hydr_static_v6_eqFunction_396(data, threadData);
  nb_hydr_static_v6_eqFunction_397(data, threadData);
  nb_hydr_static_v6_eqFunction_398(data, threadData);
  nb_hydr_static_v6_eqFunction_399(data, threadData);
  nb_hydr_static_v6_eqFunction_400(data, threadData);
  nb_hydr_static_v6_eqFunction_401(data, threadData);
  nb_hydr_static_v6_eqFunction_402(data, threadData);
  nb_hydr_static_v6_eqFunction_403(data, threadData);
  nb_hydr_static_v6_eqFunction_404(data, threadData);
  nb_hydr_static_v6_eqFunction_405(data, threadData);
  nb_hydr_static_v6_eqFunction_406(data, threadData);
  nb_hydr_static_v6_eqFunction_407(data, threadData);
  nb_hydr_static_v6_eqFunction_408(data, threadData);
  nb_hydr_static_v6_eqFunction_409(data, threadData);
  nb_hydr_static_v6_eqFunction_410(data, threadData);
  nb_hydr_static_v6_eqFunction_411(data, threadData);
  nb_hydr_static_v6_eqFunction_412(data, threadData);
  nb_hydr_static_v6_eqFunction_413(data, threadData);
  nb_hydr_static_v6_eqFunction_414(data, threadData);
  nb_hydr_static_v6_eqFunction_415(data, threadData);
  nb_hydr_static_v6_eqFunction_416(data, threadData);
  nb_hydr_static_v6_eqFunction_417(data, threadData);
  nb_hydr_static_v6_eqFunction_418(data, threadData);
  nb_hydr_static_v6_eqFunction_419(data, threadData);
  nb_hydr_static_v6_eqFunction_420(data, threadData);
  nb_hydr_static_v6_eqFunction_421(data, threadData);
  nb_hydr_static_v6_eqFunction_422(data, threadData);
  nb_hydr_static_v6_eqFunction_423(data, threadData);
  nb_hydr_static_v6_eqFunction_424(data, threadData);
  nb_hydr_static_v6_eqFunction_425(data, threadData);
  nb_hydr_static_v6_eqFunction_426(data, threadData);
  nb_hydr_static_v6_eqFunction_427(data, threadData);
  nb_hydr_static_v6_eqFunction_472(data, threadData);
  nb_hydr_static_v6_eqFunction_471(data, threadData);
  nb_hydr_static_v6_eqFunction_470(data, threadData);
  nb_hydr_static_v6_eqFunction_469(data, threadData);
  nb_hydr_static_v6_eqFunction_468(data, threadData);
  nb_hydr_static_v6_eqFunction_467(data, threadData);
  nb_hydr_static_v6_eqFunction_466(data, threadData);
  nb_hydr_static_v6_eqFunction_465(data, threadData);
  nb_hydr_static_v6_eqFunction_464(data, threadData);
  nb_hydr_static_v6_eqFunction_463(data, threadData);
  nb_hydr_static_v6_eqFunction_462(data, threadData);
  nb_hydr_static_v6_eqFunction_461(data, threadData);
  nb_hydr_static_v6_eqFunction_460(data, threadData);
  nb_hydr_static_v6_eqFunction_459(data, threadData);
  nb_hydr_static_v6_eqFunction_458(data, threadData);
  nb_hydr_static_v6_eqFunction_457(data, threadData);
  nb_hydr_static_v6_eqFunction_456(data, threadData);
  nb_hydr_static_v6_eqFunction_455(data, threadData);
  nb_hydr_static_v6_eqFunction_454(data, threadData);
  nb_hydr_static_v6_eqFunction_453(data, threadData);
  nb_hydr_static_v6_eqFunction_452(data, threadData);
  nb_hydr_static_v6_eqFunction_451(data, threadData);
  nb_hydr_static_v6_eqFunction_450(data, threadData);
  nb_hydr_static_v6_eqFunction_449(data, threadData);
  nb_hydr_static_v6_eqFunction_448(data, threadData);
  nb_hydr_static_v6_eqFunction_447(data, threadData);
  nb_hydr_static_v6_eqFunction_446(data, threadData);
  nb_hydr_static_v6_eqFunction_445(data, threadData);
  nb_hydr_static_v6_eqFunction_444(data, threadData);
  nb_hydr_static_v6_eqFunction_443(data, threadData);
  nb_hydr_static_v6_eqFunction_442(data, threadData);
  nb_hydr_static_v6_eqFunction_441(data, threadData);
  nb_hydr_static_v6_eqFunction_440(data, threadData);
  nb_hydr_static_v6_eqFunction_439(data, threadData);
  nb_hydr_static_v6_eqFunction_438(data, threadData);
  nb_hydr_static_v6_eqFunction_437(data, threadData);
  nb_hydr_static_v6_eqFunction_436(data, threadData);
  nb_hydr_static_v6_eqFunction_435(data, threadData);
  nb_hydr_static_v6_eqFunction_434(data, threadData);
  nb_hydr_static_v6_eqFunction_433(data, threadData);
  nb_hydr_static_v6_eqFunction_432(data, threadData);
  nb_hydr_static_v6_eqFunction_431(data, threadData);
  nb_hydr_static_v6_eqFunction_430(data, threadData);
  nb_hydr_static_v6_eqFunction_429(data, threadData);
  nb_hydr_static_v6_eqFunction_428(data, threadData);
  TRACE_POP
}

int nb_hydr_static_v6_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  nb_hydr_static_v6_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
extern void nb_hydr_static_v6_eqFunction_1(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_2(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_3(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_4(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_5(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_6(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_7(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_8(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_9(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_10(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_11(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_12(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_13(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_14(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_15(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_16(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_17(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_18(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_19(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_20(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_21(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_22(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_23(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_24(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_25(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_26(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_27(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_28(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_29(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_30(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_31(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_32(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_33(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_34(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_35(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_36(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_37(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_38(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_39(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_40(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_41(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_989(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_990(DATA *data, threadData_t *threadData);


/*
equation index: 516
type: SIMPLE_ASSIGN
chwp_1.PToMed.u1 = 0.0
*/
void nb_hydr_static_v6_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  (data->localData[0]->realVars[192] /* chwp_1.PToMed.u1 variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
chwp_2.PToMed.u1 = 0.0
*/
void nb_hydr_static_v6_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  (data->localData[0]->realVars[223] /* chwp_2.PToMed.u1 variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
chwp_3.PToMed.u1 = 0.0
*/
void nb_hydr_static_v6_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  (data->localData[0]->realVars[254] /* chwp_3.PToMed.u1 variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
chwp_4.PToMed.u1 = 0.0
*/
void nb_hydr_static_v6_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  (data->localData[0]->realVars[285] /* chwp_4.PToMed.u1 variable */) = 0.0;
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_985(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_45(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_986(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_47(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_48(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_49(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_50(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_51(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_52(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_57(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_58(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_59(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_60(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_61(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_62(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1003(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1004(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_65(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_66(DATA *data, threadData_t *threadData);


/*
equation index: 539
type: ALGORITHM

  (terminal_resist.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(terminal_resist.filter.cr, {}, {}, terminal_resist.filter.f_cut);
*/
void nb_hydr_static_v6_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  real_array tmp0;
  base_array_t tmp1;
  base_array_t tmp2;
  real_array tmp3;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[1766] /* terminal_resist.filter.cr[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  simple_alloc_1d_base_array(&tmp2, 0, NULL);
  real_array_create(&tmp3, ((modelica_real*)&((&(data->simulationInfo->realParameter[1771] /* terminal_resist.filter.r[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp0, tmp1, tmp2, (data->simulationInfo->realParameter[1768] /* terminal_resist.filter.f_cut PARAM */) ,NULL ,NULL ,NULL), tmp3);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_68(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_69(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_70(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_71(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_72(DATA *data, threadData_t *threadData);


/*
equation index: 545
type: ALGORITHM

  (chwp_4.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(chwp_4.filter.cr, {}, {}, chwp_4.filter.f_cut);
*/
void nb_hydr_static_v6_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  real_array tmp4;
  base_array_t tmp5;
  base_array_t tmp6;
  real_array tmp7;
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[1552] /* chwp_4.filter.cr[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  simple_alloc_1d_base_array(&tmp5, 0, NULL);
  simple_alloc_1d_base_array(&tmp6, 0, NULL);
  real_array_create(&tmp7, ((modelica_real*)&((&(data->simulationInfo->realParameter[1557] /* chwp_4.filter.r[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp4, tmp5, tmp6, (data->simulationInfo->realParameter[1554] /* chwp_4.filter.f_cut PARAM */) ,NULL ,NULL ,NULL), tmp7);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_74(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_999(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_76(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_77(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_78(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_79(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_80(DATA *data, threadData_t *threadData);


/*
equation index: 553
type: ALGORITHM

  (chwp_3.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(chwp_3.filter.cr, {}, {}, chwp_3.filter.f_cut);
*/
void nb_hydr_static_v6_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  real_array tmp8;
  base_array_t tmp9;
  base_array_t tmp10;
  real_array tmp11;
  real_array_create(&tmp8, ((modelica_real*)&((&data->simulationInfo->realParameter[1169] /* chwp_3.filter.cr[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  simple_alloc_1d_base_array(&tmp9, 0, NULL);
  simple_alloc_1d_base_array(&tmp10, 0, NULL);
  real_array_create(&tmp11, ((modelica_real*)&((&(data->simulationInfo->realParameter[1174] /* chwp_3.filter.r[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp8, tmp9, tmp10, (data->simulationInfo->realParameter[1171] /* chwp_3.filter.f_cut PARAM */) ,NULL ,NULL ,NULL), tmp11);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_82(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_996(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_84(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_85(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_86(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_87(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_88(DATA *data, threadData_t *threadData);


/*
equation index: 561
type: ALGORITHM

  (chwp_2.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(chwp_2.filter.cr, {}, {}, chwp_2.filter.f_cut);
*/
void nb_hydr_static_v6_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  real_array tmp12;
  base_array_t tmp13;
  base_array_t tmp14;
  real_array tmp15;
  real_array_create(&tmp12, ((modelica_real*)&((&data->simulationInfo->realParameter[786] /* chwp_2.filter.cr[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  simple_alloc_1d_base_array(&tmp13, 0, NULL);
  simple_alloc_1d_base_array(&tmp14, 0, NULL);
  real_array_create(&tmp15, ((modelica_real*)&((&(data->simulationInfo->realParameter[791] /* chwp_2.filter.r[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp12, tmp13, tmp14, (data->simulationInfo->realParameter[788] /* chwp_2.filter.f_cut PARAM */) ,NULL ,NULL ,NULL), tmp15);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_90(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_993(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_92(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_93(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_94(DATA *data, threadData_t *threadData);


/*
equation index: 651
type: LINEAR

<var>chiller_3.m_flow</var>
<var>chiller_2.m_flow</var>
<var>chiller_1.m_flow</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void nb_hydr_static_v6_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { (data->localData[1]->realVars[175] /* chiller_3.m_flow variable */),(data->localData[1]->realVars[173] /* chiller_2.m_flow variable */),(data->localData[1]->realVars[171] /* chiller_1.m_flow variable */) };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 651 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,651};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 651 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */) = aux_x[0];
  (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */) = aux_x[1];
  (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */) = aux_x[2];

  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
chwp_1.P = chwp_1.VMachine_flow / 0.577 * Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_1.eff.per.power, 0.577, 1.0, chwp_1.eff.powDer, chwp_1.eff.delta)
*/
void nb_hydr_static_v6_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  real_array tmp16;
  real_array tmp17;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp18;
  real_array tmp19;
  real_array_create(&tmp16, ((modelica_real*)&((&data->simulationInfo->realParameter[295] /* chwp_1.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp17, ((modelica_real*)&((&data->simulationInfo->realParameter[287] /* chwp_1.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp18, tmp16, tmp17);
  real_array_create(&tmp19, ((modelica_real*)&((&data->simulationInfo->realParameter[341] /* chwp_1.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  (data->localData[0]->realVars[191] /* chwp_1.P variable */) = (DIVISION_SIM((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */),0.577,"0.577",equationIndexes)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp18, 0.577, 1.0, tmp19, (data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */)));
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1167(DATA *data, threadData_t *threadData);


/*
equation index: 654
type: SIMPLE_ASSIGN
chwp_1.vol.steBal.m_flowInv = if noEvent(chiller_1.m_flow > 5.74453122e-05) or noEvent(chiller_1.m_flow < -5.74453122e-05) then 1.0 / chiller_1.m_flow else if noEvent(chiller_1.m_flow < 2.87226561e-05) and noEvent(chiller_1.m_flow > -2.87226561e-05) then 303033618.607859 * chiller_1.m_flow else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(chiller_1.m_flow, 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27)
*/
void nb_hydr_static_v6_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  tmp20 = Greater((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),5.74453122e-05);
  tmp21 = Less((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),-5.74453122e-05);
  tmp24 = (modelica_boolean)(tmp20 || tmp21);
  if(tmp24)
  {
    tmp25 = DIVISION_SIM(1.0,(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),"chiller_1.m_flow",equationIndexes);
  }
  else
  {
    tmp22 = Less((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),2.87226561e-05);
    tmp23 = Greater((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),-2.87226561e-05);
    tmp25 = ((tmp22 && tmp23)?(303033618.607859) * ((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)):omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27));
  }
  (data->localData[0]->realVars[221] /* chwp_1.vol.steBal.m_flowInv variable */) = tmp25;
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1149(DATA *data, threadData_t *threadData);


/*
equation index: 656
type: SIMPLE_ASSIGN
chwp_4.P = chwp_4.VMachine_flow / 0.577 * Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_4.eff.per.power, 0.577, 1.0, chwp_4.eff.powDer, chwp_4.eff.delta)
*/
void nb_hydr_static_v6_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  real_array tmp26;
  real_array tmp27;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp28;
  real_array tmp29;
  real_array_create(&tmp26, ((modelica_real*)&((&data->simulationInfo->realParameter[1442] /* chwp_4.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp27, ((modelica_real*)&((&data->simulationInfo->realParameter[1434] /* chwp_4.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp28, tmp26, tmp27);
  real_array_create(&tmp29, ((modelica_real*)&((&data->simulationInfo->realParameter[1488] /* chwp_4.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  (data->localData[0]->realVars[284] /* chwp_4.P variable */) = (DIVISION_SIM((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */),0.577,"0.577",equationIndexes)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp28, 0.577, 1.0, tmp29, (data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */)));
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
chwp_4.heaDis.WHyd = chwp_4.dpMachine * chwp_4.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  (data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */) = ((data->localData[0]->realVars[288] /* chwp_4.dpMachine variable */)) * ((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */));
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1213(DATA *data, threadData_t *threadData);


/*
equation index: 659
type: SIMPLE_ASSIGN
chwp_4.prePow.Q_flow = chwp_4.PToMed.u1 + chwp_4.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  (data->localData[0]->realVars[300] /* chwp_4.prePow.Q_flow variable */) = (data->localData[0]->realVars[285] /* chwp_4.PToMed.u1 variable */) + (data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */);
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
chwp_4.heaDis.QThe_flow = (if chwp_4.per.motorCooledByFluid then chwp_4.P else chwp_4.heaDis.WHyd) - chwp_4.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  (data->localData[0]->realVars[294] /* chwp_4.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[201] /* chwp_4.per.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[284] /* chwp_4.P variable */):(data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */)) - (data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1129(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1128(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1212(DATA *data, threadData_t *threadData);


/*
equation index: 664
type: SIMPLE_ASSIGN
chwp_4.vol.steBal.m_flowInv = if noEvent(chiller_4.m_flow > 5.74453122e-05) or noEvent(chiller_4.m_flow < -5.74453122e-05) then 1.0 / chiller_4.m_flow else if noEvent(chiller_4.m_flow < 2.87226561e-05) and noEvent(chiller_4.m_flow > -2.87226561e-05) then 303033618.607859 * chiller_4.m_flow else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(chiller_4.m_flow, 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27)
*/
void nb_hydr_static_v6_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  tmp30 = Greater((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),5.74453122e-05);
  tmp31 = Less((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),-5.74453122e-05);
  tmp34 = (modelica_boolean)(tmp30 || tmp31);
  if(tmp34)
  {
    tmp35 = DIVISION_SIM(1.0,(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),"chiller_4.m_flow",equationIndexes);
  }
  else
  {
    tmp32 = Less((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),2.87226561e-05);
    tmp33 = Greater((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),-2.87226561e-05);
    tmp35 = ((tmp32 && tmp33)?(303033618.607859) * ((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)):omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27));
  }
  (data->localData[0]->realVars[314] /* chwp_4.vol.steBal.m_flowInv variable */) = tmp35;
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
chwp_3.P = chwp_3.VMachine_flow / 0.577 * Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_3.eff.per.power, 0.577, 1.0, chwp_3.eff.powDer, chwp_3.eff.delta)
*/
void nb_hydr_static_v6_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  real_array tmp36;
  real_array tmp37;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp38;
  real_array tmp39;
  real_array_create(&tmp36, ((modelica_real*)&((&data->simulationInfo->realParameter[1059] /* chwp_3.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp37, ((modelica_real*)&((&data->simulationInfo->realParameter[1051] /* chwp_3.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp38, tmp36, tmp37);
  real_array_create(&tmp39, ((modelica_real*)&((&data->simulationInfo->realParameter[1105] /* chwp_3.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  (data->localData[0]->realVars[253] /* chwp_3.P variable */) = (DIVISION_SIM((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */),0.577,"0.577",equationIndexes)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp38, 0.577, 1.0, tmp39, (data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */)));
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
chwp_3.heaDis.WHyd = chwp_3.dpMachine * chwp_3.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  (data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */) = ((data->localData[0]->realVars[257] /* chwp_3.dpMachine variable */)) * ((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */));
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1127(DATA *data, threadData_t *threadData);


/*
equation index: 668
type: SIMPLE_ASSIGN
chwp_3.prePow.Q_flow = chwp_3.PToMed.u1 + chwp_3.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  (data->localData[0]->realVars[269] /* chwp_3.prePow.Q_flow variable */) = (data->localData[0]->realVars[254] /* chwp_3.PToMed.u1 variable */) + (data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */);
  TRACE_POP
}

/*
equation index: 669
type: SIMPLE_ASSIGN
chwp_3.heaDis.QThe_flow = (if chwp_3.per.motorCooledByFluid then chwp_3.P else chwp_3.heaDis.WHyd) - chwp_3.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  (data->localData[0]->realVars[263] /* chwp_3.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[164] /* chwp_3.per.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[253] /* chwp_3.P variable */):(data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */)) - (data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1125(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1124(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1126(DATA *data, threadData_t *threadData);


/*
equation index: 673
type: SIMPLE_ASSIGN
chwp_3.vol.steBal.m_flowInv = if noEvent(chiller_3.m_flow > 5.74453122e-05) or noEvent(chiller_3.m_flow < -5.74453122e-05) then 1.0 / chiller_3.m_flow else if noEvent(chiller_3.m_flow < 2.87226561e-05) and noEvent(chiller_3.m_flow > -2.87226561e-05) then 303033618.607859 * chiller_3.m_flow else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(chiller_3.m_flow, 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27)
*/
void nb_hydr_static_v6_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
  tmp40 = Greater((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),5.74453122e-05);
  tmp41 = Less((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),-5.74453122e-05);
  tmp44 = (modelica_boolean)(tmp40 || tmp41);
  if(tmp44)
  {
    tmp45 = DIVISION_SIM(1.0,(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),"chiller_3.m_flow",equationIndexes);
  }
  else
  {
    tmp42 = Less((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),2.87226561e-05);
    tmp43 = Greater((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),-2.87226561e-05);
    tmp45 = ((tmp42 && tmp43)?(303033618.607859) * ((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)):omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27));
  }
  (data->localData[0]->realVars[283] /* chwp_3.vol.steBal.m_flowInv variable */) = tmp45;
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
chwp_2.P = chwp_2.VMachine_flow / 0.577 * Buildings.Fluid.Movers.BaseClasses.Characteristics.power(chwp_2.eff.per.power, 0.577, 1.0, chwp_2.eff.powDer, chwp_2.eff.delta)
*/
void nb_hydr_static_v6_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  real_array tmp46;
  real_array tmp47;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp48;
  real_array tmp49;
  real_array_create(&tmp46, ((modelica_real*)&((&data->simulationInfo->realParameter[676] /* chwp_2.eff.per.power.V_flow[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_create(&tmp47, ((modelica_real*)&((&data->simulationInfo->realParameter[668] /* chwp_2.eff.per.power.P[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(threadData,tmp48, tmp46, tmp47);
  real_array_create(&tmp49, ((modelica_real*)&((&data->simulationInfo->realParameter[722] /* chwp_2.eff.powDer[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  (data->localData[0]->realVars[222] /* chwp_2.P variable */) = (DIVISION_SIM((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */),0.577,"0.577",equationIndexes)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp48, 0.577, 1.0, tmp49, (data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */)));
  TRACE_POP
}

/*
equation index: 675
type: SIMPLE_ASSIGN
chwp_2.heaDis.WHyd = chwp_2.dpMachine * chwp_2.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  (data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */) = ((data->localData[0]->realVars[226] /* chwp_2.dpMachine variable */)) * ((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */));
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1152(DATA *data, threadData_t *threadData);


/*
equation index: 677
type: SIMPLE_ASSIGN
chwp_2.prePow.Q_flow = chwp_2.PToMed.u1 + chwp_2.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  (data->localData[0]->realVars[238] /* chwp_2.prePow.Q_flow variable */) = (data->localData[0]->realVars[223] /* chwp_2.PToMed.u1 variable */) + (data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */);
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
chwp_2.heaDis.QThe_flow = (if chwp_2.per.motorCooledByFluid then chwp_2.P else chwp_2.heaDis.WHyd) - chwp_2.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  (data->localData[0]->realVars[232] /* chwp_2.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[127] /* chwp_2.per.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[222] /* chwp_2.P variable */):(data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */)) - (data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1151(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1150(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1153(DATA *data, threadData_t *threadData);


/*
equation index: 682
type: SIMPLE_ASSIGN
chwp_2.vol.steBal.m_flowInv = if noEvent(chiller_2.m_flow > 5.74453122e-05) or noEvent(chiller_2.m_flow < -5.74453122e-05) then 1.0 / chiller_2.m_flow else if noEvent(chiller_2.m_flow < 2.87226561e-05) and noEvent(chiller_2.m_flow > -2.87226561e-05) then 303033618.607859 * chiller_2.m_flow else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(chiller_2.m_flow, 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27)
*/
void nb_hydr_static_v6_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  tmp50 = Greater((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),5.74453122e-05);
  tmp51 = Less((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),-5.74453122e-05);
  tmp54 = (modelica_boolean)(tmp50 || tmp51);
  if(tmp54)
  {
    tmp55 = DIVISION_SIM(1.0,(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),"chiller_2.m_flow",equationIndexes);
  }
  else
  {
    tmp52 = Less((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),2.87226561e-05);
    tmp53 = Greater((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),-2.87226561e-05);
    tmp55 = ((tmp52 && tmp53)?(303033618.607859) * ((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)):omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), 5.74453122e-05, 17407.86082802419, -261117.9124203628, 36061000614.33522, -1904335308276680.0, 4.903688571951017e+19, -6.074501257997842e+23, 2.894048299969465e+27));
  }
  (data->localData[0]->realVars[252] /* chwp_2.vol.steBal.m_flowInv variable */) = tmp55;
  TRACE_POP
}

/*
equation index: 683
type: SIMPLE_ASSIGN
jun_2.port_1.m_flow = chiller_2.m_flow - jun_6.port_2.m_flow
*/
void nb_hydr_static_v6_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  (data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */) = (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */) - (data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1164(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1163(DATA *data, threadData_t *threadData);


/*
equation index: 686
type: SIMPLE_ASSIGN
chwp_1.heaDis.WHyd = chwp_1.dpMachine * chwp_1.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  (data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */) = ((data->localData[0]->realVars[195] /* chwp_1.dpMachine variable */)) * ((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */));
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1166(DATA *data, threadData_t *threadData);


/*
equation index: 688
type: SIMPLE_ASSIGN
chwp_1.prePow.Q_flow = chwp_1.PToMed.u1 + chwp_1.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  (data->localData[0]->realVars[207] /* chwp_1.prePow.Q_flow variable */) = (data->localData[0]->realVars[192] /* chwp_1.PToMed.u1 variable */) + (data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */);
  TRACE_POP
}

/*
equation index: 689
type: SIMPLE_ASSIGN
chwp_1.heaDis.QThe_flow = (if chwp_1.per.motorCooledByFluid then chwp_1.P else chwp_1.heaDis.WHyd) - chwp_1.heaDis.WHyd
*/
void nb_hydr_static_v6_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  (data->localData[0]->realVars[201] /* chwp_1.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[90] /* chwp_1.per.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[191] /* chwp_1.P variable */):(data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */)) - (data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1147(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1148(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1136(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1137(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1138(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1139(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1140(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1141(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_230(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1001(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1143(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1144(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1145(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1146(DATA *data, threadData_t *threadData);


/*
equation index: 761
type: LINEAR

<var>checkvalve_4.port_b.h_outflow</var>
<var>checkvalve_3.port_b.h_outflow</var>
<var>chwp_2.port_a.h_outflow</var>
<var>chwp_4.port_a.h_outflow</var>
<var>chwp_3.port_a.h_outflow</var>
<var>checkvalve_2.port_b.h_outflow</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void nb_hydr_static_v6_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  /* Linear equation system */
  int retValue;
  double aux_x[6] = { (data->localData[1]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */),(data->localData[1]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */),(data->localData[1]->realVars[237] /* chwp_2.port_a.h_outflow variable */),(data->localData[1]->realVars[299] /* chwp_4.port_a.h_outflow variable */),(data->localData[1]->realVars[268] /* chwp_3.port_a.h_outflow variable */),(data->localData[1]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */) };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 761 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,761};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 761 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */) = aux_x[0];
  (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */) = aux_x[1];
  (data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */) = aux_x[2];
  (data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */) = aux_x[3];
  (data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */) = aux_x[4];
  (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */) = aux_x[5];

  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_1176(DATA *data, threadData_t *threadData);


/*
equation index: 763
type: SIMPLE_ASSIGN
checkvalve_2.state_a.T = 273.15 + 0.0002390057361376673 * checkvalve_2.port_b.h_outflow
*/
void nb_hydr_static_v6_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  (data->localData[0]->realVars[144] /* checkvalve_2.state_a.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */));
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_220(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_186(DATA *data, threadData_t *threadData);


/*
equation index: 766
type: SIMPLE_ASSIGN
checkvalve_1.state_a.T = 273.15 + 0.0002390057361376673 * checkvalve_1.port_b.h_outflow
*/
void nb_hydr_static_v6_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  (data->localData[0]->realVars[132] /* checkvalve_1.state_a.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */));
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_185(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_221(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1214(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1168(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_218(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_216(DATA *data, threadData_t *threadData);


/*
equation index: 773
type: SIMPLE_ASSIGN
checkvalve_3.state_a.T = 273.15 + 0.0002390057361376673 * checkvalve_3.port_b.h_outflow
*/
void nb_hydr_static_v6_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  (data->localData[0]->realVars[156] /* checkvalve_3.state_a.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */));
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_215(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_219(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1199(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1200(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_197(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_195(DATA *data, threadData_t *threadData);


/*
equation index: 780
type: SIMPLE_ASSIGN
checkvalve_4.state_a.T = 273.15 + 0.0002390057361376673 * checkvalve_4.port_b.h_outflow
*/
void nb_hydr_static_v6_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  (data->localData[0]->realVars[168] /* checkvalve_4.state_a.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */));
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_194(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_198(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1227(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1228(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_205(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_207(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1192(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_203(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_206(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1203(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1204(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_241(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1190(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_1191(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_240(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_243(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_244(DATA *data, threadData_t *threadData);


/*
equation index: 798
type: ALGORITHM

  (chwp_1.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(chwp_1.filter.cr, {}, {}, chwp_1.filter.f_cut);
*/
void nb_hydr_static_v6_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  real_array tmp56;
  base_array_t tmp57;
  base_array_t tmp58;
  real_array tmp59;
  real_array_create(&tmp56, ((modelica_real*)&((&data->simulationInfo->realParameter[405] /* chwp_1.filter.cr[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  simple_alloc_1d_base_array(&tmp57, 0, NULL);
  simple_alloc_1d_base_array(&tmp58, 0, NULL);
  real_array_create(&tmp59, ((modelica_real*)&((&(data->simulationInfo->realParameter[410] /* chwp_1.filter.r[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp56, tmp57, tmp58, (data->simulationInfo->realParameter[407] /* chwp_1.filter.f_cut PARAM */) ,NULL ,NULL ,NULL), tmp59);
  TRACE_POP
}
extern void nb_hydr_static_v6_eqFunction_246(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_987(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_248(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_249(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_250(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_251(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_252(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_253(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_254(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_255(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_256(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_257(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_258(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_259(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_260(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_261(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_262(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_263(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_264(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_265(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_266(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_267(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_268(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_269(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_270(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_271(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_272(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_273(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_274(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_275(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_276(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_277(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_278(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_279(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_53(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_54(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_55(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_56(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_280(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_281(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_282(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_283(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_284(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_285(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_286(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_287(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_288(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_289(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_290(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_291(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_292(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_293(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_294(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_295(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_296(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_297(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_298(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_299(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_300(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_301(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_302(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_303(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_304(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_305(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_306(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_307(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_308(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_309(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_310(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_311(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_312(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_313(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_314(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_315(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_316(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_317(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_318(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_319(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_320(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_321(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_322(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_323(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_324(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_325(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_326(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_327(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_328(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_329(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_330(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_331(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_332(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_333(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_334(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_335(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_336(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_337(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_338(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_339(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_340(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_341(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_342(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_343(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_344(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_345(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_346(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_347(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_348(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_349(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_350(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_351(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_352(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_353(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_354(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_355(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_356(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_357(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_358(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_359(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_360(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_361(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_362(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_363(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_364(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_365(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_366(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_367(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_368(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_369(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_370(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_371(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_372(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_373(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_374(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_375(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_376(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_377(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_378(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_379(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_380(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_381(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_382(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_383(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_384(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_385(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_386(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_387(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_388(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_389(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_390(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_391(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_392(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_393(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_394(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_395(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_396(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_397(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_398(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_399(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_400(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_401(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_402(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_403(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_404(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_405(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_406(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_407(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_408(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_409(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_410(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_411(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_412(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_413(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_414(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_415(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_416(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_417(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_418(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_419(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_420(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_421(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_422(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_423(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_424(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_425(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_426(DATA *data, threadData_t *threadData);

extern void nb_hydr_static_v6_eqFunction_427(DATA *data, threadData_t *threadData);

int nb_hydr_static_v6_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  nb_hydr_static_v6_eqFunction_1(data, threadData);

  nb_hydr_static_v6_eqFunction_2(data, threadData);

  nb_hydr_static_v6_eqFunction_3(data, threadData);

  nb_hydr_static_v6_eqFunction_4(data, threadData);

  nb_hydr_static_v6_eqFunction_5(data, threadData);

  nb_hydr_static_v6_eqFunction_6(data, threadData);

  nb_hydr_static_v6_eqFunction_7(data, threadData);

  nb_hydr_static_v6_eqFunction_8(data, threadData);

  nb_hydr_static_v6_eqFunction_9(data, threadData);

  nb_hydr_static_v6_eqFunction_10(data, threadData);

  nb_hydr_static_v6_eqFunction_11(data, threadData);

  nb_hydr_static_v6_eqFunction_12(data, threadData);

  nb_hydr_static_v6_eqFunction_13(data, threadData);

  nb_hydr_static_v6_eqFunction_14(data, threadData);

  nb_hydr_static_v6_eqFunction_15(data, threadData);

  nb_hydr_static_v6_eqFunction_16(data, threadData);

  nb_hydr_static_v6_eqFunction_17(data, threadData);

  nb_hydr_static_v6_eqFunction_18(data, threadData);

  nb_hydr_static_v6_eqFunction_19(data, threadData);

  nb_hydr_static_v6_eqFunction_20(data, threadData);

  nb_hydr_static_v6_eqFunction_21(data, threadData);

  nb_hydr_static_v6_eqFunction_22(data, threadData);

  nb_hydr_static_v6_eqFunction_23(data, threadData);

  nb_hydr_static_v6_eqFunction_24(data, threadData);

  nb_hydr_static_v6_eqFunction_25(data, threadData);

  nb_hydr_static_v6_eqFunction_26(data, threadData);

  nb_hydr_static_v6_eqFunction_27(data, threadData);

  nb_hydr_static_v6_eqFunction_28(data, threadData);

  nb_hydr_static_v6_eqFunction_29(data, threadData);

  nb_hydr_static_v6_eqFunction_30(data, threadData);

  nb_hydr_static_v6_eqFunction_31(data, threadData);

  nb_hydr_static_v6_eqFunction_32(data, threadData);

  nb_hydr_static_v6_eqFunction_33(data, threadData);

  nb_hydr_static_v6_eqFunction_34(data, threadData);

  nb_hydr_static_v6_eqFunction_35(data, threadData);

  nb_hydr_static_v6_eqFunction_36(data, threadData);

  nb_hydr_static_v6_eqFunction_37(data, threadData);

  nb_hydr_static_v6_eqFunction_38(data, threadData);

  nb_hydr_static_v6_eqFunction_39(data, threadData);

  nb_hydr_static_v6_eqFunction_40(data, threadData);

  nb_hydr_static_v6_eqFunction_41(data, threadData);

  nb_hydr_static_v6_eqFunction_989(data, threadData);

  nb_hydr_static_v6_eqFunction_990(data, threadData);

  nb_hydr_static_v6_eqFunction_516(data, threadData);

  nb_hydr_static_v6_eqFunction_517(data, threadData);

  nb_hydr_static_v6_eqFunction_518(data, threadData);

  nb_hydr_static_v6_eqFunction_519(data, threadData);

  nb_hydr_static_v6_eqFunction_985(data, threadData);

  nb_hydr_static_v6_eqFunction_45(data, threadData);

  nb_hydr_static_v6_eqFunction_986(data, threadData);

  nb_hydr_static_v6_eqFunction_47(data, threadData);

  nb_hydr_static_v6_eqFunction_48(data, threadData);

  nb_hydr_static_v6_eqFunction_49(data, threadData);

  nb_hydr_static_v6_eqFunction_50(data, threadData);

  nb_hydr_static_v6_eqFunction_51(data, threadData);

  nb_hydr_static_v6_eqFunction_52(data, threadData);

  nb_hydr_static_v6_eqFunction_57(data, threadData);

  nb_hydr_static_v6_eqFunction_58(data, threadData);

  nb_hydr_static_v6_eqFunction_59(data, threadData);

  nb_hydr_static_v6_eqFunction_60(data, threadData);

  nb_hydr_static_v6_eqFunction_61(data, threadData);

  nb_hydr_static_v6_eqFunction_62(data, threadData);

  nb_hydr_static_v6_eqFunction_1003(data, threadData);

  nb_hydr_static_v6_eqFunction_1004(data, threadData);

  nb_hydr_static_v6_eqFunction_65(data, threadData);

  nb_hydr_static_v6_eqFunction_66(data, threadData);

  nb_hydr_static_v6_eqFunction_539(data, threadData);

  nb_hydr_static_v6_eqFunction_68(data, threadData);

  nb_hydr_static_v6_eqFunction_69(data, threadData);

  nb_hydr_static_v6_eqFunction_70(data, threadData);

  nb_hydr_static_v6_eqFunction_71(data, threadData);

  nb_hydr_static_v6_eqFunction_72(data, threadData);

  nb_hydr_static_v6_eqFunction_545(data, threadData);

  nb_hydr_static_v6_eqFunction_74(data, threadData);

  nb_hydr_static_v6_eqFunction_999(data, threadData);

  nb_hydr_static_v6_eqFunction_76(data, threadData);

  nb_hydr_static_v6_eqFunction_77(data, threadData);

  nb_hydr_static_v6_eqFunction_78(data, threadData);

  nb_hydr_static_v6_eqFunction_79(data, threadData);

  nb_hydr_static_v6_eqFunction_80(data, threadData);

  nb_hydr_static_v6_eqFunction_553(data, threadData);

  nb_hydr_static_v6_eqFunction_82(data, threadData);

  nb_hydr_static_v6_eqFunction_996(data, threadData);

  nb_hydr_static_v6_eqFunction_84(data, threadData);

  nb_hydr_static_v6_eqFunction_85(data, threadData);

  nb_hydr_static_v6_eqFunction_86(data, threadData);

  nb_hydr_static_v6_eqFunction_87(data, threadData);

  nb_hydr_static_v6_eqFunction_88(data, threadData);

  nb_hydr_static_v6_eqFunction_561(data, threadData);

  nb_hydr_static_v6_eqFunction_90(data, threadData);

  nb_hydr_static_v6_eqFunction_993(data, threadData);

  nb_hydr_static_v6_eqFunction_92(data, threadData);

  nb_hydr_static_v6_eqFunction_93(data, threadData);

  nb_hydr_static_v6_eqFunction_94(data, threadData);

  nb_hydr_static_v6_eqFunction_651(data, threadData);

  nb_hydr_static_v6_eqFunction_652(data, threadData);

  nb_hydr_static_v6_eqFunction_1167(data, threadData);

  nb_hydr_static_v6_eqFunction_654(data, threadData);

  nb_hydr_static_v6_eqFunction_1149(data, threadData);

  nb_hydr_static_v6_eqFunction_656(data, threadData);

  nb_hydr_static_v6_eqFunction_657(data, threadData);

  nb_hydr_static_v6_eqFunction_1213(data, threadData);

  nb_hydr_static_v6_eqFunction_659(data, threadData);

  nb_hydr_static_v6_eqFunction_660(data, threadData);

  nb_hydr_static_v6_eqFunction_1129(data, threadData);

  nb_hydr_static_v6_eqFunction_1128(data, threadData);

  nb_hydr_static_v6_eqFunction_1212(data, threadData);

  nb_hydr_static_v6_eqFunction_664(data, threadData);

  nb_hydr_static_v6_eqFunction_665(data, threadData);

  nb_hydr_static_v6_eqFunction_666(data, threadData);

  nb_hydr_static_v6_eqFunction_1127(data, threadData);

  nb_hydr_static_v6_eqFunction_668(data, threadData);

  nb_hydr_static_v6_eqFunction_669(data, threadData);

  nb_hydr_static_v6_eqFunction_1125(data, threadData);

  nb_hydr_static_v6_eqFunction_1124(data, threadData);

  nb_hydr_static_v6_eqFunction_1126(data, threadData);

  nb_hydr_static_v6_eqFunction_673(data, threadData);

  nb_hydr_static_v6_eqFunction_674(data, threadData);

  nb_hydr_static_v6_eqFunction_675(data, threadData);

  nb_hydr_static_v6_eqFunction_1152(data, threadData);

  nb_hydr_static_v6_eqFunction_677(data, threadData);

  nb_hydr_static_v6_eqFunction_678(data, threadData);

  nb_hydr_static_v6_eqFunction_1151(data, threadData);

  nb_hydr_static_v6_eqFunction_1150(data, threadData);

  nb_hydr_static_v6_eqFunction_1153(data, threadData);

  nb_hydr_static_v6_eqFunction_682(data, threadData);

  nb_hydr_static_v6_eqFunction_683(data, threadData);

  nb_hydr_static_v6_eqFunction_1164(data, threadData);

  nb_hydr_static_v6_eqFunction_1163(data, threadData);

  nb_hydr_static_v6_eqFunction_686(data, threadData);

  nb_hydr_static_v6_eqFunction_1166(data, threadData);

  nb_hydr_static_v6_eqFunction_688(data, threadData);

  nb_hydr_static_v6_eqFunction_689(data, threadData);

  nb_hydr_static_v6_eqFunction_1147(data, threadData);

  nb_hydr_static_v6_eqFunction_1148(data, threadData);

  nb_hydr_static_v6_eqFunction_1136(data, threadData);

  nb_hydr_static_v6_eqFunction_1137(data, threadData);

  nb_hydr_static_v6_eqFunction_1138(data, threadData);

  nb_hydr_static_v6_eqFunction_1139(data, threadData);

  nb_hydr_static_v6_eqFunction_1140(data, threadData);

  nb_hydr_static_v6_eqFunction_1141(data, threadData);

  nb_hydr_static_v6_eqFunction_230(data, threadData);

  nb_hydr_static_v6_eqFunction_1001(data, threadData);

  nb_hydr_static_v6_eqFunction_1143(data, threadData);

  nb_hydr_static_v6_eqFunction_1144(data, threadData);

  nb_hydr_static_v6_eqFunction_1145(data, threadData);

  nb_hydr_static_v6_eqFunction_1146(data, threadData);

  nb_hydr_static_v6_eqFunction_761(data, threadData);

  nb_hydr_static_v6_eqFunction_1176(data, threadData);

  nb_hydr_static_v6_eqFunction_763(data, threadData);

  nb_hydr_static_v6_eqFunction_220(data, threadData);

  nb_hydr_static_v6_eqFunction_186(data, threadData);

  nb_hydr_static_v6_eqFunction_766(data, threadData);

  nb_hydr_static_v6_eqFunction_185(data, threadData);

  nb_hydr_static_v6_eqFunction_221(data, threadData);

  nb_hydr_static_v6_eqFunction_1214(data, threadData);

  nb_hydr_static_v6_eqFunction_1168(data, threadData);

  nb_hydr_static_v6_eqFunction_218(data, threadData);

  nb_hydr_static_v6_eqFunction_216(data, threadData);

  nb_hydr_static_v6_eqFunction_773(data, threadData);

  nb_hydr_static_v6_eqFunction_215(data, threadData);

  nb_hydr_static_v6_eqFunction_219(data, threadData);

  nb_hydr_static_v6_eqFunction_1199(data, threadData);

  nb_hydr_static_v6_eqFunction_1200(data, threadData);

  nb_hydr_static_v6_eqFunction_197(data, threadData);

  nb_hydr_static_v6_eqFunction_195(data, threadData);

  nb_hydr_static_v6_eqFunction_780(data, threadData);

  nb_hydr_static_v6_eqFunction_194(data, threadData);

  nb_hydr_static_v6_eqFunction_198(data, threadData);

  nb_hydr_static_v6_eqFunction_1227(data, threadData);

  nb_hydr_static_v6_eqFunction_1228(data, threadData);

  nb_hydr_static_v6_eqFunction_205(data, threadData);

  nb_hydr_static_v6_eqFunction_207(data, threadData);

  nb_hydr_static_v6_eqFunction_1192(data, threadData);

  nb_hydr_static_v6_eqFunction_203(data, threadData);

  nb_hydr_static_v6_eqFunction_206(data, threadData);

  nb_hydr_static_v6_eqFunction_1203(data, threadData);

  nb_hydr_static_v6_eqFunction_1204(data, threadData);

  nb_hydr_static_v6_eqFunction_241(data, threadData);

  nb_hydr_static_v6_eqFunction_1190(data, threadData);

  nb_hydr_static_v6_eqFunction_1191(data, threadData);

  nb_hydr_static_v6_eqFunction_240(data, threadData);

  nb_hydr_static_v6_eqFunction_243(data, threadData);

  nb_hydr_static_v6_eqFunction_244(data, threadData);

  nb_hydr_static_v6_eqFunction_798(data, threadData);

  nb_hydr_static_v6_eqFunction_246(data, threadData);

  nb_hydr_static_v6_eqFunction_987(data, threadData);

  nb_hydr_static_v6_eqFunction_248(data, threadData);

  nb_hydr_static_v6_eqFunction_249(data, threadData);

  nb_hydr_static_v6_eqFunction_250(data, threadData);

  nb_hydr_static_v6_eqFunction_251(data, threadData);

  nb_hydr_static_v6_eqFunction_252(data, threadData);

  nb_hydr_static_v6_eqFunction_253(data, threadData);

  nb_hydr_static_v6_eqFunction_254(data, threadData);

  nb_hydr_static_v6_eqFunction_255(data, threadData);

  nb_hydr_static_v6_eqFunction_256(data, threadData);

  nb_hydr_static_v6_eqFunction_257(data, threadData);

  nb_hydr_static_v6_eqFunction_258(data, threadData);

  nb_hydr_static_v6_eqFunction_259(data, threadData);

  nb_hydr_static_v6_eqFunction_260(data, threadData);

  nb_hydr_static_v6_eqFunction_261(data, threadData);

  nb_hydr_static_v6_eqFunction_262(data, threadData);

  nb_hydr_static_v6_eqFunction_263(data, threadData);

  nb_hydr_static_v6_eqFunction_264(data, threadData);

  nb_hydr_static_v6_eqFunction_265(data, threadData);

  nb_hydr_static_v6_eqFunction_266(data, threadData);

  nb_hydr_static_v6_eqFunction_267(data, threadData);

  nb_hydr_static_v6_eqFunction_268(data, threadData);

  nb_hydr_static_v6_eqFunction_269(data, threadData);

  nb_hydr_static_v6_eqFunction_270(data, threadData);

  nb_hydr_static_v6_eqFunction_271(data, threadData);

  nb_hydr_static_v6_eqFunction_272(data, threadData);

  nb_hydr_static_v6_eqFunction_273(data, threadData);

  nb_hydr_static_v6_eqFunction_274(data, threadData);

  nb_hydr_static_v6_eqFunction_275(data, threadData);

  nb_hydr_static_v6_eqFunction_276(data, threadData);

  nb_hydr_static_v6_eqFunction_277(data, threadData);

  nb_hydr_static_v6_eqFunction_278(data, threadData);

  nb_hydr_static_v6_eqFunction_279(data, threadData);

  nb_hydr_static_v6_eqFunction_53(data, threadData);

  nb_hydr_static_v6_eqFunction_54(data, threadData);

  nb_hydr_static_v6_eqFunction_55(data, threadData);

  nb_hydr_static_v6_eqFunction_56(data, threadData);

  nb_hydr_static_v6_eqFunction_280(data, threadData);

  nb_hydr_static_v6_eqFunction_281(data, threadData);

  nb_hydr_static_v6_eqFunction_282(data, threadData);

  nb_hydr_static_v6_eqFunction_283(data, threadData);

  nb_hydr_static_v6_eqFunction_284(data, threadData);

  nb_hydr_static_v6_eqFunction_285(data, threadData);

  nb_hydr_static_v6_eqFunction_286(data, threadData);

  nb_hydr_static_v6_eqFunction_287(data, threadData);

  nb_hydr_static_v6_eqFunction_288(data, threadData);

  nb_hydr_static_v6_eqFunction_289(data, threadData);

  nb_hydr_static_v6_eqFunction_290(data, threadData);

  nb_hydr_static_v6_eqFunction_291(data, threadData);

  nb_hydr_static_v6_eqFunction_292(data, threadData);

  nb_hydr_static_v6_eqFunction_293(data, threadData);

  nb_hydr_static_v6_eqFunction_294(data, threadData);

  nb_hydr_static_v6_eqFunction_295(data, threadData);

  nb_hydr_static_v6_eqFunction_296(data, threadData);

  nb_hydr_static_v6_eqFunction_297(data, threadData);

  nb_hydr_static_v6_eqFunction_298(data, threadData);

  nb_hydr_static_v6_eqFunction_299(data, threadData);

  nb_hydr_static_v6_eqFunction_300(data, threadData);

  nb_hydr_static_v6_eqFunction_301(data, threadData);

  nb_hydr_static_v6_eqFunction_302(data, threadData);

  nb_hydr_static_v6_eqFunction_303(data, threadData);

  nb_hydr_static_v6_eqFunction_304(data, threadData);

  nb_hydr_static_v6_eqFunction_305(data, threadData);

  nb_hydr_static_v6_eqFunction_306(data, threadData);

  nb_hydr_static_v6_eqFunction_307(data, threadData);

  nb_hydr_static_v6_eqFunction_308(data, threadData);

  nb_hydr_static_v6_eqFunction_309(data, threadData);

  nb_hydr_static_v6_eqFunction_310(data, threadData);

  nb_hydr_static_v6_eqFunction_311(data, threadData);

  nb_hydr_static_v6_eqFunction_312(data, threadData);

  nb_hydr_static_v6_eqFunction_313(data, threadData);

  nb_hydr_static_v6_eqFunction_314(data, threadData);

  nb_hydr_static_v6_eqFunction_315(data, threadData);

  nb_hydr_static_v6_eqFunction_316(data, threadData);

  nb_hydr_static_v6_eqFunction_317(data, threadData);

  nb_hydr_static_v6_eqFunction_318(data, threadData);

  nb_hydr_static_v6_eqFunction_319(data, threadData);

  nb_hydr_static_v6_eqFunction_320(data, threadData);

  nb_hydr_static_v6_eqFunction_321(data, threadData);

  nb_hydr_static_v6_eqFunction_322(data, threadData);

  nb_hydr_static_v6_eqFunction_323(data, threadData);

  nb_hydr_static_v6_eqFunction_324(data, threadData);

  nb_hydr_static_v6_eqFunction_325(data, threadData);

  nb_hydr_static_v6_eqFunction_326(data, threadData);

  nb_hydr_static_v6_eqFunction_327(data, threadData);

  nb_hydr_static_v6_eqFunction_328(data, threadData);

  nb_hydr_static_v6_eqFunction_329(data, threadData);

  nb_hydr_static_v6_eqFunction_330(data, threadData);

  nb_hydr_static_v6_eqFunction_331(data, threadData);

  nb_hydr_static_v6_eqFunction_332(data, threadData);

  nb_hydr_static_v6_eqFunction_333(data, threadData);

  nb_hydr_static_v6_eqFunction_334(data, threadData);

  nb_hydr_static_v6_eqFunction_335(data, threadData);

  nb_hydr_static_v6_eqFunction_336(data, threadData);

  nb_hydr_static_v6_eqFunction_337(data, threadData);

  nb_hydr_static_v6_eqFunction_338(data, threadData);

  nb_hydr_static_v6_eqFunction_339(data, threadData);

  nb_hydr_static_v6_eqFunction_340(data, threadData);

  nb_hydr_static_v6_eqFunction_341(data, threadData);

  nb_hydr_static_v6_eqFunction_342(data, threadData);

  nb_hydr_static_v6_eqFunction_343(data, threadData);

  nb_hydr_static_v6_eqFunction_344(data, threadData);

  nb_hydr_static_v6_eqFunction_345(data, threadData);

  nb_hydr_static_v6_eqFunction_346(data, threadData);

  nb_hydr_static_v6_eqFunction_347(data, threadData);

  nb_hydr_static_v6_eqFunction_348(data, threadData);

  nb_hydr_static_v6_eqFunction_349(data, threadData);

  nb_hydr_static_v6_eqFunction_350(data, threadData);

  nb_hydr_static_v6_eqFunction_351(data, threadData);

  nb_hydr_static_v6_eqFunction_352(data, threadData);

  nb_hydr_static_v6_eqFunction_353(data, threadData);

  nb_hydr_static_v6_eqFunction_354(data, threadData);

  nb_hydr_static_v6_eqFunction_355(data, threadData);

  nb_hydr_static_v6_eqFunction_356(data, threadData);

  nb_hydr_static_v6_eqFunction_357(data, threadData);

  nb_hydr_static_v6_eqFunction_358(data, threadData);

  nb_hydr_static_v6_eqFunction_359(data, threadData);

  nb_hydr_static_v6_eqFunction_360(data, threadData);

  nb_hydr_static_v6_eqFunction_361(data, threadData);

  nb_hydr_static_v6_eqFunction_362(data, threadData);

  nb_hydr_static_v6_eqFunction_363(data, threadData);

  nb_hydr_static_v6_eqFunction_364(data, threadData);

  nb_hydr_static_v6_eqFunction_365(data, threadData);

  nb_hydr_static_v6_eqFunction_366(data, threadData);

  nb_hydr_static_v6_eqFunction_367(data, threadData);

  nb_hydr_static_v6_eqFunction_368(data, threadData);

  nb_hydr_static_v6_eqFunction_369(data, threadData);

  nb_hydr_static_v6_eqFunction_370(data, threadData);

  nb_hydr_static_v6_eqFunction_371(data, threadData);

  nb_hydr_static_v6_eqFunction_372(data, threadData);

  nb_hydr_static_v6_eqFunction_373(data, threadData);

  nb_hydr_static_v6_eqFunction_374(data, threadData);

  nb_hydr_static_v6_eqFunction_375(data, threadData);

  nb_hydr_static_v6_eqFunction_376(data, threadData);

  nb_hydr_static_v6_eqFunction_377(data, threadData);

  nb_hydr_static_v6_eqFunction_378(data, threadData);

  nb_hydr_static_v6_eqFunction_379(data, threadData);

  nb_hydr_static_v6_eqFunction_380(data, threadData);

  nb_hydr_static_v6_eqFunction_381(data, threadData);

  nb_hydr_static_v6_eqFunction_382(data, threadData);

  nb_hydr_static_v6_eqFunction_383(data, threadData);

  nb_hydr_static_v6_eqFunction_384(data, threadData);

  nb_hydr_static_v6_eqFunction_385(data, threadData);

  nb_hydr_static_v6_eqFunction_386(data, threadData);

  nb_hydr_static_v6_eqFunction_387(data, threadData);

  nb_hydr_static_v6_eqFunction_388(data, threadData);

  nb_hydr_static_v6_eqFunction_389(data, threadData);

  nb_hydr_static_v6_eqFunction_390(data, threadData);

  nb_hydr_static_v6_eqFunction_391(data, threadData);

  nb_hydr_static_v6_eqFunction_392(data, threadData);

  nb_hydr_static_v6_eqFunction_393(data, threadData);

  nb_hydr_static_v6_eqFunction_394(data, threadData);

  nb_hydr_static_v6_eqFunction_395(data, threadData);

  nb_hydr_static_v6_eqFunction_396(data, threadData);

  nb_hydr_static_v6_eqFunction_397(data, threadData);

  nb_hydr_static_v6_eqFunction_398(data, threadData);

  nb_hydr_static_v6_eqFunction_399(data, threadData);

  nb_hydr_static_v6_eqFunction_400(data, threadData);

  nb_hydr_static_v6_eqFunction_401(data, threadData);

  nb_hydr_static_v6_eqFunction_402(data, threadData);

  nb_hydr_static_v6_eqFunction_403(data, threadData);

  nb_hydr_static_v6_eqFunction_404(data, threadData);

  nb_hydr_static_v6_eqFunction_405(data, threadData);

  nb_hydr_static_v6_eqFunction_406(data, threadData);

  nb_hydr_static_v6_eqFunction_407(data, threadData);

  nb_hydr_static_v6_eqFunction_408(data, threadData);

  nb_hydr_static_v6_eqFunction_409(data, threadData);

  nb_hydr_static_v6_eqFunction_410(data, threadData);

  nb_hydr_static_v6_eqFunction_411(data, threadData);

  nb_hydr_static_v6_eqFunction_412(data, threadData);

  nb_hydr_static_v6_eqFunction_413(data, threadData);

  nb_hydr_static_v6_eqFunction_414(data, threadData);

  nb_hydr_static_v6_eqFunction_415(data, threadData);

  nb_hydr_static_v6_eqFunction_416(data, threadData);

  nb_hydr_static_v6_eqFunction_417(data, threadData);

  nb_hydr_static_v6_eqFunction_418(data, threadData);

  nb_hydr_static_v6_eqFunction_419(data, threadData);

  nb_hydr_static_v6_eqFunction_420(data, threadData);

  nb_hydr_static_v6_eqFunction_421(data, threadData);

  nb_hydr_static_v6_eqFunction_422(data, threadData);

  nb_hydr_static_v6_eqFunction_423(data, threadData);

  nb_hydr_static_v6_eqFunction_424(data, threadData);

  nb_hydr_static_v6_eqFunction_425(data, threadData);

  nb_hydr_static_v6_eqFunction_426(data, threadData);

  nb_hydr_static_v6_eqFunction_427(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int nb_hydr_static_v6_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

