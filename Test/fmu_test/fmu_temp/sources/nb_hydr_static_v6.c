/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "nb_hydr_static_v6_model.h"
#include "simulation/solver/events.h"



/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int nb_hydr_static_v6_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  (data->localData[0]->realVars[351] /* u variable */) = data->simulationInfo->inputVars[0];
  
  TRACE_POP
  return 0;
}

int nb_hydr_static_v6_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[351].attribute.start;
  
  TRACE_POP
  return 0;
}

int nb_hydr_static_v6_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[351].attribute.start = data->simulationInfo->inputVars[0];
  
  TRACE_POP
  return 0;
}

int nb_hydr_static_v6_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[351].info.name;
  
  TRACE_POP
  return 0;
}

int nb_hydr_static_v6_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int nb_hydr_static_v6_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int nb_hydr_static_v6_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int nb_hydr_static_v6_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int nb_hydr_static_v6_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int nb_hydr_static_v6_setb_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 985
type: SIMPLE_ASSIGN
chw_ret.X_in_internal[1] = chw_ret.X[1]
*/
void nb_hydr_static_v6_eqFunction_985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,985};
  (data->localData[0]->realVars[178] /* chw_ret.X_in_internal[1] variable */) = (data->simulationInfo->realParameter[132] /* chw_ret.X[1] PARAM */);
  TRACE_POP
}
/*
equation index: 986
type: SIMPLE_ASSIGN
chw_sup.X_in_internal[1] = chw_sup.X[1]
*/
void nb_hydr_static_v6_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  (data->localData[0]->realVars[183] /* chw_sup.X_in_internal[1] variable */) = (data->simulationInfo->realParameter[145] /* chw_sup.X[1] PARAM */);
  TRACE_POP
}
/*
equation index: 987
type: SIMPLE_ASSIGN
$DER.chwp_1.filter.x[2] = chwp_1.filter.r[2] * (chwp_1.filter.x[2] - chwp_1.filter.x[1])
*/
void nb_hydr_static_v6_eqFunction_987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,987};
  (data->localData[0]->realVars[12] /* der(chwp_1.filter.x[2]) STATE_DER */) = ((data->simulationInfo->realParameter[411] /* chwp_1.filter.r[2] PARAM */)) * ((data->localData[0]->realVars[1] /* chwp_1.filter.x[2] STATE(1) */) - (data->localData[0]->realVars[0] /* chwp_1.filter.x[1] STATE(1) */));
  TRACE_POP
}
/*
equation index: 988
type: SIMPLE_ASSIGN
chwp_1.filter.y = chwp_1.filter.gain * chwp_1.filter.u_nominal * chwp_1.filter.x[2]
*/
void nb_hydr_static_v6_eqFunction_988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,988};
  (data->localData[0]->realVars[200] /* chwp_1.filter.y variable */) = ((data->simulationInfo->realParameter[409] /* chwp_1.filter.gain PARAM */)) * (((data->simulationInfo->realParameter[412] /* chwp_1.filter.u_nominal PARAM */)) * ((data->localData[0]->realVars[1] /* chwp_1.filter.x[2] STATE(1) */)));
  TRACE_POP
}
/*
equation index: 989
type: SIMPLE_ASSIGN
chwp_1.inputSwitch.y = chwp_1.gaiSpe.k * u
*/
void nb_hydr_static_v6_eqFunction_989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,989};
  (data->localData[0]->realVars[205] /* chwp_1.inputSwitch.y variable */) = ((data->simulationInfo->realParameter[416] /* chwp_1.gaiSpe.k PARAM */)) * ((data->localData[0]->realVars[351] /* u variable */));
  TRACE_POP
}
/*
equation index: 990
type: SIMPLE_ASSIGN
chwp_1.filter.uu[1] = chwp_1.inputSwitch.y / chwp_1.filter.u_nominal
*/
void nb_hydr_static_v6_eqFunction_990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,990};
  (data->localData[0]->realVars[199] /* chwp_1.filter.uu[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[205] /* chwp_1.inputSwitch.y variable */),(data->simulationInfo->realParameter[412] /* chwp_1.filter.u_nominal PARAM */),"chwp_1.filter.u_nominal",equationIndexes);
  TRACE_POP
}
/*
equation index: 991
type: SIMPLE_ASSIGN
$DER.chwp_1.filter.x[1] = chwp_1.filter.r[1] * (chwp_1.filter.x[1] - chwp_1.filter.uu[1])
*/
void nb_hydr_static_v6_eqFunction_991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,991};
  (data->localData[0]->realVars[11] /* der(chwp_1.filter.x[1]) STATE_DER */) = ((data->simulationInfo->realParameter[410] /* chwp_1.filter.r[1] PARAM */)) * ((data->localData[0]->realVars[0] /* chwp_1.filter.x[1] STATE(1) */) - (data->localData[0]->realVars[199] /* chwp_1.filter.uu[1] variable */));
  TRACE_POP
}
/*
equation index: 992
type: SIMPLE_ASSIGN
$DER.chwp_2.filter.x[1] = chwp_2.filter.r[1] * (chwp_2.filter.x[1] - chwp_2.filter.uu[1])
*/
void nb_hydr_static_v6_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  (data->localData[0]->realVars[13] /* der(chwp_2.filter.x[1]) STATE_DER */) = ((data->simulationInfo->realParameter[791] /* chwp_2.filter.r[1] PARAM */)) * ((data->localData[0]->realVars[2] /* chwp_2.filter.x[1] STATE(1) */) - (data->localData[0]->realVars[230] /* chwp_2.filter.uu[1] variable */));
  TRACE_POP
}
/*
equation index: 993
type: SIMPLE_ASSIGN
$DER.chwp_2.filter.x[2] = chwp_2.filter.r[2] * (chwp_2.filter.x[2] - chwp_2.filter.x[1])
*/
void nb_hydr_static_v6_eqFunction_993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,993};
  (data->localData[0]->realVars[14] /* der(chwp_2.filter.x[2]) STATE_DER */) = ((data->simulationInfo->realParameter[792] /* chwp_2.filter.r[2] PARAM */)) * ((data->localData[0]->realVars[3] /* chwp_2.filter.x[2] STATE(1) */) - (data->localData[0]->realVars[2] /* chwp_2.filter.x[1] STATE(1) */));
  TRACE_POP
}
/*
equation index: 994
type: SIMPLE_ASSIGN
chwp_2.filter.y = chwp_2.filter.gain * chwp_2.filter.u_nominal * chwp_2.filter.x[2]
*/
void nb_hydr_static_v6_eqFunction_994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,994};
  (data->localData[0]->realVars[231] /* chwp_2.filter.y variable */) = ((data->simulationInfo->realParameter[790] /* chwp_2.filter.gain PARAM */)) * (((data->simulationInfo->realParameter[793] /* chwp_2.filter.u_nominal PARAM */)) * ((data->localData[0]->realVars[3] /* chwp_2.filter.x[2] STATE(1) */)));
  TRACE_POP
}
/*
equation index: 995
type: SIMPLE_ASSIGN
$DER.chwp_3.filter.x[1] = chwp_3.filter.r[1] * (chwp_3.filter.x[1] - chwp_3.filter.uu[1])
*/
void nb_hydr_static_v6_eqFunction_995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,995};
  (data->localData[0]->realVars[15] /* der(chwp_3.filter.x[1]) STATE_DER */) = ((data->simulationInfo->realParameter[1174] /* chwp_3.filter.r[1] PARAM */)) * ((data->localData[0]->realVars[4] /* chwp_3.filter.x[1] STATE(1) */) - (data->localData[0]->realVars[261] /* chwp_3.filter.uu[1] variable */));
  TRACE_POP
}
/*
equation index: 996
type: SIMPLE_ASSIGN
$DER.chwp_3.filter.x[2] = chwp_3.filter.r[2] * (chwp_3.filter.x[2] - chwp_3.filter.x[1])
*/
void nb_hydr_static_v6_eqFunction_996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,996};
  (data->localData[0]->realVars[16] /* der(chwp_3.filter.x[2]) STATE_DER */) = ((data->simulationInfo->realParameter[1175] /* chwp_3.filter.r[2] PARAM */)) * ((data->localData[0]->realVars[5] /* chwp_3.filter.x[2] STATE(1) */) - (data->localData[0]->realVars[4] /* chwp_3.filter.x[1] STATE(1) */));
  TRACE_POP
}
/*
equation index: 997
type: SIMPLE_ASSIGN
chwp_3.filter.y = chwp_3.filter.gain * chwp_3.filter.u_nominal * chwp_3.filter.x[2]
*/
void nb_hydr_static_v6_eqFunction_997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,997};
  (data->localData[0]->realVars[262] /* chwp_3.filter.y variable */) = ((data->simulationInfo->realParameter[1173] /* chwp_3.filter.gain PARAM */)) * (((data->simulationInfo->realParameter[1176] /* chwp_3.filter.u_nominal PARAM */)) * ((data->localData[0]->realVars[5] /* chwp_3.filter.x[2] STATE(1) */)));
  TRACE_POP
}
/*
equation index: 998
type: SIMPLE_ASSIGN
$DER.chwp_4.filter.x[1] = chwp_4.filter.r[1] * (chwp_4.filter.x[1] - chwp_4.filter.uu[1])
*/
void nb_hydr_static_v6_eqFunction_998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,998};
  (data->localData[0]->realVars[17] /* der(chwp_4.filter.x[1]) STATE_DER */) = ((data->simulationInfo->realParameter[1557] /* chwp_4.filter.r[1] PARAM */)) * ((data->localData[0]->realVars[6] /* chwp_4.filter.x[1] STATE(1) */) - (data->localData[0]->realVars[292] /* chwp_4.filter.uu[1] variable */));
  TRACE_POP
}
/*
equation index: 999
type: SIMPLE_ASSIGN
$DER.chwp_4.filter.x[2] = chwp_4.filter.r[2] * (chwp_4.filter.x[2] - chwp_4.filter.x[1])
*/
void nb_hydr_static_v6_eqFunction_999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,999};
  (data->localData[0]->realVars[18] /* der(chwp_4.filter.x[2]) STATE_DER */) = ((data->simulationInfo->realParameter[1558] /* chwp_4.filter.r[2] PARAM */)) * ((data->localData[0]->realVars[7] /* chwp_4.filter.x[2] STATE(1) */) - (data->localData[0]->realVars[6] /* chwp_4.filter.x[1] STATE(1) */));
  TRACE_POP
}
/*
equation index: 1000
type: SIMPLE_ASSIGN
chwp_4.filter.y = chwp_4.filter.gain * chwp_4.filter.u_nominal * chwp_4.filter.x[2]
*/
void nb_hydr_static_v6_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1000};
  (data->localData[0]->realVars[293] /* chwp_4.filter.y variable */) = ((data->simulationInfo->realParameter[1556] /* chwp_4.filter.gain PARAM */)) * (((data->simulationInfo->realParameter[1559] /* chwp_4.filter.u_nominal PARAM */)) * ((data->localData[0]->realVars[7] /* chwp_4.filter.x[2] STATE(1) */)));
  TRACE_POP
}
/*
equation index: 1001
type: SIMPLE_ASSIGN
$DER.terminal_resist.filter.x[2] = terminal_resist.filter.r[2] * (terminal_resist.filter.x[2] - terminal_resist.filter.x[1])
*/
void nb_hydr_static_v6_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1001};
  (data->localData[0]->realVars[21] /* der(terminal_resist.filter.x[2]) STATE_DER */) = ((data->simulationInfo->realParameter[1772] /* terminal_resist.filter.r[2] PARAM */)) * ((data->localData[0]->realVars[10] /* terminal_resist.filter.x[2] STATE(1) */) - (data->localData[0]->realVars[9] /* terminal_resist.filter.x[1] STATE(1) */));
  TRACE_POP
}
/*
equation index: 1002
type: SIMPLE_ASSIGN
terminal_resist.filter.y = terminal_resist.filter.gain * terminal_resist.filter.u_nominal * terminal_resist.filter.x[2]
*/
void nb_hydr_static_v6_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1002};
  (data->localData[0]->realVars[346] /* terminal_resist.filter.y variable */) = ((data->simulationInfo->realParameter[1770] /* terminal_resist.filter.gain PARAM */)) * (((data->simulationInfo->realParameter[1773] /* terminal_resist.filter.u_nominal PARAM */)) * ((data->localData[0]->realVars[10] /* terminal_resist.filter.x[2] STATE(1) */)));
  TRACE_POP
}
/*
equation index: 1003
type: SIMPLE_ASSIGN
terminal_resist.phi = max(0.1 * terminal_resist.l, terminal_resist.l + terminal_resist.filter.y * (1.0 - terminal_resist.l))
*/
void nb_hydr_static_v6_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1003};
  (data->localData[0]->realVars[349] /* terminal_resist.phi variable */) = fmax((0.1) * ((data->simulationInfo->realParameter[1778] /* terminal_resist.l PARAM */)),(data->simulationInfo->realParameter[1778] /* terminal_resist.l PARAM */) + ((data->localData[0]->realVars[346] /* terminal_resist.filter.y variable */)) * (1.0 - (data->simulationInfo->realParameter[1778] /* terminal_resist.l PARAM */)));
  TRACE_POP
}
/*
equation index: 1004
type: SIMPLE_ASSIGN
terminal_resist.k = terminal_resist.phi * terminal_resist.Kv_SI
*/
void nb_hydr_static_v6_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1004};
  (data->localData[0]->realVars[347] /* terminal_resist.k variable */) = ((data->localData[0]->realVars[349] /* terminal_resist.phi variable */)) * ((data->simulationInfo->realParameter[1756] /* terminal_resist.Kv_SI PARAM */));
  TRACE_POP
}
/*
equation index: 1005
type: ALGORITHM

  $cse61 := nb_hydr_static_v6.chw_ret.Medium.setState_pTX(ret_p.k, chw_ret.T, {chw_ret.X[1]});
*/
void nb_hydr_static_v6_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1005};
  real_array tmp0;
  nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState tmp1;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)(data->simulationInfo->realParameter[132] /* chw_ret.X[1] PARAM */));
  tmp1 = omc_nb__hydr__static__v6_chw__ret_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->simulationInfo->realParameter[130] /* chw_ret.T PARAM */), tmp0);
  (data->localData[0]->realVars[71] /* $cse61.p variable */) = tmp1._p;
  (data->localData[0]->realVars[70] /* $cse61.T variable */) = tmp1._T;
  ;
  TRACE_POP
}
/*
equation index: 1006
type: SIMPLE_ASSIGN
chw_ret.ports[1].h_outflow = nb_hydr_static_v6.chw_ret.Medium.specificEnthalpy($cse61)
*/
void nb_hydr_static_v6_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1006};
  nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState tmp2;
  nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_wrap_vars(threadData,tmp2, (data->localData[0]->realVars[71] /* $cse61.p variable */), (data->localData[0]->realVars[70] /* $cse61.T variable */));
  (data->localData[0]->realVars[179] /* chw_ret.ports[1].h_outflow variable */) = omc_nb__hydr__static__v6_chw__ret_Medium_specificEnthalpy(threadData, tmp2);
  TRACE_POP
}
/*
equation index: 1007
type: ALGORITHM

  $cse82 := nb_hydr_static_v6.chw_sup.Medium.setState_pTX(ret_p.k, chw_sup.T, {chw_sup.X[1]});
*/
void nb_hydr_static_v6_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1007};
  real_array tmp3;
  nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState tmp4;
  array_alloc_scalar_real_array(&tmp3, 1, (modelica_real)(data->simulationInfo->realParameter[145] /* chw_sup.X[1] PARAM */));
  tmp4 = omc_nb__hydr__static__v6_chw__sup_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->simulationInfo->realParameter[143] /* chw_sup.T PARAM */), tmp3);
  (data->localData[0]->realVars[101] /* $cse82.p variable */) = tmp4._p;
  (data->localData[0]->realVars[100] /* $cse82.T variable */) = tmp4._T;
  ;
  TRACE_POP
}
/*
equation index: 1008
type: SIMPLE_ASSIGN
chw_sup.ports[2].h_outflow = nb_hydr_static_v6.chw_sup.Medium.specificEnthalpy($cse82)
*/
void nb_hydr_static_v6_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1008};
  nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState tmp5;
  nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_wrap_vars(threadData,tmp5, (data->localData[0]->realVars[101] /* $cse82.p variable */), (data->localData[0]->realVars[100] /* $cse82.T variable */));
  (data->localData[0]->realVars[184] /* chw_sup.ports[2].h_outflow variable */) = omc_nb__hydr__static__v6_chw__sup_Medium_specificEnthalpy(threadData, tmp5);
  TRACE_POP
}
void nb_hydr_static_v6_eqFunction_1009(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1010(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1011(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1012(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1013(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1014(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1015(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1016(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1017(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1018(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1019(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1020(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1021(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1022(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1023(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1024(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1025(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1026(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1027(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1028(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1029(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1030(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1031(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1032(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1033(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1034(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1035(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1036(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1037(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1038(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1039(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1040(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1041(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1042(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1043(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1044(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1045(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1046(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1047(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1048(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1049(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1050(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1051(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1052(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1053(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1054(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1055(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1056(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1057(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1058(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1059(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1060(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1061(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1062(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1063(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1064(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1065(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1066(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1067(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1068(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1069(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1070(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1071(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1072(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1073(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1074(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1075(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1076(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1077(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1078(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1079(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1080(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1081(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1082(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1083(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1084(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1085(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1086(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1087(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1088(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1089(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1090(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1091(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1092(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1093(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1094(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1095(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1096(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1097(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1098(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1099(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1100(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1101(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1102(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1103(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1104(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1105(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1106(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1107(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1108(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1109(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1110(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1111(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1112(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1113(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1114(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1122(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1121(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1120(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1119(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1118(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1117(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1116(DATA*, threadData_t*);
void nb_hydr_static_v6_eqFunction_1115(DATA*, threadData_t*);
/*
equation index: 1123
indexNonlinear: 1
type: NONLINEAR

vars: {jun_4.port_1.h_outflow, checkvalve_2.port_b.h_outflow, checkvalve_3.port_b.h_outflow, checkvalve_4.port_b.h_outflow, chiller_1.m_flow, chiller_3.m_flow, chiller_4.m_flow, chiller_2.m_flow}
eqns: {1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1122, 1121, 1120, 1119, 1118, 1117, 1116, 1115}
*/
void nb_hydr_static_v6_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1123};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1123 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1123};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1123 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  TRACE_POP
}
/*
equation index: 1124
type: SIMPLE_ASSIGN
chwp_3.senRelPre.p_rel = checkvalve_3.port_a.p - ret_p.k
*/
void nb_hydr_static_v6_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1124};
  (data->localData[0]->realVars[273] /* chwp_3.senRelPre.p_rel variable */) = (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */) - (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */);
  TRACE_POP
}
/*
equation index: 1125
type: SIMPLE_ASSIGN
chwp_3.dp = ret_p.k - checkvalve_3.port_a.p
*/
void nb_hydr_static_v6_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1125};
  (data->localData[0]->realVars[256] /* chwp_3.dp variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) - (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */);
  TRACE_POP
}
/*
equation index: 1126
type: SIMPLE_ASSIGN
chwp_3.eff.r_V = 1.733096239753654 * chwp_3.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1126};
  (data->localData[0]->realVars[259] /* chwp_3.eff.r_V variable */) = (1.733096239753654) * ((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */));
  TRACE_POP
}
/*
equation index: 1127
type: SIMPLE_ASSIGN
chwp_3.etaMot = chwp_3.heaDis.WHyd / smooth(1, if noEvent(-1e-05 + chwp_3.P > 1e-06) then chwp_3.P else if noEvent(-1e-05 + chwp_3.P < -1e-06) then 1e-05 else 0.25 * (-10.0 + 1000000.0 * chwp_3.P) * ((-10.0 + 1000000.0 * chwp_3.P) ^ 2.0 - 3.0) * (1e-05 - chwp_3.P) + 0.5 * chwp_3.P + 5e-06)
*/
void nb_hydr_static_v6_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1127};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater(-1e-05 + (data->localData[0]->realVars[253] /* chwp_3.P variable */),1e-06);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (data->localData[0]->realVars[253] /* chwp_3.P variable */);
  }
  else
  {
    tmp1 = Less(-1e-05 + (data->localData[0]->realVars[253] /* chwp_3.P variable */),-1e-06);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = 1e-05;
    }
    else
    {
      tmp2 = -10.0 + (1000000.0) * ((data->localData[0]->realVars[253] /* chwp_3.P variable */));
      tmp4 = (0.25) * (((-10.0 + (1000000.0) * ((data->localData[0]->realVars[253] /* chwp_3.P variable */))) * ((tmp2 * tmp2) - 3.0)) * (1e-05 - (data->localData[0]->realVars[253] /* chwp_3.P variable */))) + (0.5) * ((data->localData[0]->realVars[253] /* chwp_3.P variable */)) + 5e-06;
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[260] /* chwp_3.etaMot variable */) = DIVISION_SIM((data->localData[0]->realVars[264] /* chwp_3.heaDis.WHyd variable */),tmp6,"smooth(1, if noEvent(-1e-05 + chwp_3.P > 1e-06) then chwp_3.P else if noEvent(-1e-05 + chwp_3.P < -1e-06) then 1e-05 else 0.25 * (-10.0 + 1000000.0 * chwp_3.P) * ((-10.0 + 1000000.0 * chwp_3.P) ^ 2.0 - 3.0) * (1e-05 - chwp_3.P) + 0.5 * chwp_3.P + 5e-06)",equationIndexes);
  TRACE_POP
}
/*
equation index: 1128
type: SIMPLE_ASSIGN
chwp_4.senRelPre.p_rel = checkvalve_4.port_a.p - ret_p.k
*/
void nb_hydr_static_v6_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1128};
  (data->localData[0]->realVars[304] /* chwp_4.senRelPre.p_rel variable */) = (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */) - (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */);
  TRACE_POP
}
/*
equation index: 1129
type: SIMPLE_ASSIGN
chwp_4.dp = ret_p.k - checkvalve_4.port_a.p
*/
void nb_hydr_static_v6_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1129};
  (data->localData[0]->realVars[287] /* chwp_4.dp variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) - (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */);
  TRACE_POP
}
/*
equation index: 1130
type: SIMPLE_ASSIGN
$cse113 = nb_hydr_static_v6.checkvalve_4.Medium.temperature(nb_hydr_static_v6.checkvalve_4.Medium.ThermodynamicState(checkvalve_4.port_a.p, checkvalve_4.state_a.T))
*/
void nb_hydr_static_v6_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1130};
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp7;
  tmp7._p = (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */);
  tmp7._T = (data->localData[0]->realVars[168] /* checkvalve_4.state_a.T variable */);
  (data->localData[0]->realVars[38] /* $cse113 variable */) = omc_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData, tmp7);
  TRACE_POP
}
/*
equation index: 1131
type: ALGORITHM

  $cse74 := nb_hydr_static_v6.chwp_3.preSou.Medium.setState_phX(ret_p.k, checkvalve_3.port_b.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1131};
  base_array_t tmp8;
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState tmp9;
  simple_alloc_1d_base_array(&tmp8, 0, NULL);
  tmp9 = omc_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */), tmp8);
  (data->localData[0]->realVars[89] /* $cse74.p variable */) = tmp9._p;
  (data->localData[0]->realVars[88] /* $cse74.T variable */) = tmp9._T;
  ;
  TRACE_POP
}
/*
equation index: 1132
type: SIMPLE_ASSIGN
$cse73 = nb_hydr_static_v6.chwp_3.preSou.Medium.density($cse74)
*/
void nb_hydr_static_v6_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1132};
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState tmp10;
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_wrap_vars(threadData,tmp10, (data->localData[0]->realVars[89] /* $cse74.p variable */), (data->localData[0]->realVars[88] /* $cse74.T variable */));
  (data->localData[0]->realVars[87] /* $cse73 variable */) = omc_nb__hydr__static__v6_chwp__3_preSou_Medium_density(threadData, tmp10);
  TRACE_POP
}
/*
equation index: 1133
type: SIMPLE_ASSIGN
$cse104 = nb_hydr_static_v6.checkvalve_3.Medium.temperature(nb_hydr_static_v6.checkvalve_3.Medium.ThermodynamicState(checkvalve_3.port_a.p, checkvalve_3.state_a.T))
*/
void nb_hydr_static_v6_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1133};
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp11;
  tmp11._p = (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */);
  tmp11._T = (data->localData[0]->realVars[156] /* checkvalve_3.state_a.T variable */);
  (data->localData[0]->realVars[27] /* $cse104 variable */) = omc_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData, tmp11);
  TRACE_POP
}
/*
equation index: 1134
type: ALGORITHM

  $cse109 := nb_hydr_static_v6.checkvalve_3.Medium.setState_phX(checkvalve_3.port_b.p, checkvalve_3.port_b.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1134};
  base_array_t tmp12;
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp13;
  simple_alloc_1d_base_array(&tmp12, 0, NULL);
  tmp13 = omc_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX(threadData, (data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */), (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */), tmp12);
  (data->localData[0]->realVars[34] /* $cse109.p variable */) = tmp13._p;
  (data->localData[0]->realVars[33] /* $cse109.T variable */) = tmp13._T;
  ;
  TRACE_POP
}
/*
equation index: 1135
type: SIMPLE_ASSIGN
$cse108 = nb_hydr_static_v6.checkvalve_3.Medium.temperature($cse109)
*/
void nb_hydr_static_v6_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1135};
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp14;
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_wrap_vars(threadData,tmp14, (data->localData[0]->realVars[34] /* $cse109.p variable */), (data->localData[0]->realVars[33] /* $cse109.T variable */));
  (data->localData[0]->realVars[32] /* $cse108 variable */) = omc_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData, tmp14);
  TRACE_POP
}
/*
equation index: 1136
type: SIMPLE_ASSIGN
conPID.addP.y = conPID.addP.k1 * chw_sup_PSP.k + conPID.addP.k2 * chw_sup_P.p
*/
void nb_hydr_static_v6_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1136};
  (data->localData[0]->realVars[319] /* conPID.addP.y variable */) = ((data->simulationInfo->realParameter[1700] /* conPID.addP.k1 PARAM */)) * ((data->simulationInfo->realParameter[151] /* chw_sup_PSP.k PARAM */)) + ((data->simulationInfo->realParameter[1701] /* conPID.addP.k2 PARAM */)) * ((data->localData[0]->realVars[186] /* chw_sup_P.p variable */));
  TRACE_POP
}
/*
equation index: 1137
type: SIMPLE_ASSIGN
conPID.P.y = conPID.P.k * conPID.addP.y
*/
void nb_hydr_static_v6_eqFunction_1137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1137};
  (data->localData[0]->realVars[318] /* conPID.P.y variable */) = ((data->simulationInfo->realParameter[1693] /* conPID.P.k PARAM */)) * ((data->localData[0]->realVars[319] /* conPID.addP.y variable */));
  TRACE_POP
}
/*
equation index: 1138
type: SIMPLE_ASSIGN
conPID.addPID.y = conPID.P.y + conPID.I.y
*/
void nb_hydr_static_v6_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1138};
  (data->localData[0]->realVars[320] /* conPID.addPID.y variable */) = (data->localData[0]->realVars[318] /* conPID.P.y variable */) + (data->localData[0]->realVars[8] /* conPID.I.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 1139
type: SIMPLE_ASSIGN
conPID.gainPID.y = conPID.gainPID.k * conPID.addPID.y
*/
void nb_hydr_static_v6_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1139};
  (data->localData[0]->realVars[323] /* conPID.gainPID.y variable */) = ((data->simulationInfo->realParameter[1708] /* conPID.gainPID.k PARAM */)) * ((data->localData[0]->realVars[320] /* conPID.addPID.y variable */));
  TRACE_POP
}
/*
equation index: 1140
type: SIMPLE_ASSIGN
conPID.y = smooth(0, if noEvent(conPID.gainPID.y > 1.0) then 1.0 else if noEvent(conPID.gainPID.y < 0.01) then 0.01 else conPID.gainPID.y)
*/
void nb_hydr_static_v6_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1140};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  tmp15 = Greater((data->localData[0]->realVars[323] /* conPID.gainPID.y variable */),1.0);
  tmp17 = (modelica_boolean)tmp15;
  if(tmp17)
  {
    tmp18 = 1.0;
  }
  else
  {
    tmp16 = Less((data->localData[0]->realVars[323] /* conPID.gainPID.y variable */),0.01);
    tmp18 = (tmp16?0.01:(data->localData[0]->realVars[323] /* conPID.gainPID.y variable */));
  }
  (data->localData[0]->realVars[325] /* conPID.y variable */) = tmp18;
  TRACE_POP
}
/*
equation index: 1141
type: SIMPLE_ASSIGN
terminal_resist.filter.uu[1] = conPID.y / terminal_resist.filter.u_nominal
*/
void nb_hydr_static_v6_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1141};
  (data->localData[0]->realVars[345] /* terminal_resist.filter.uu[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[325] /* conPID.y variable */),(data->simulationInfo->realParameter[1773] /* terminal_resist.filter.u_nominal PARAM */),"terminal_resist.filter.u_nominal",equationIndexes);
  TRACE_POP
}
/*
equation index: 1142
type: SIMPLE_ASSIGN
$DER.terminal_resist.filter.x[1] = terminal_resist.filter.r[1] * (terminal_resist.filter.x[1] - terminal_resist.filter.uu[1])
*/
void nb_hydr_static_v6_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1142};
  (data->localData[0]->realVars[20] /* der(terminal_resist.filter.x[1]) STATE_DER */) = ((data->simulationInfo->realParameter[1771] /* terminal_resist.filter.r[1] PARAM */)) * ((data->localData[0]->realVars[9] /* terminal_resist.filter.x[1] STATE(1) */) - (data->localData[0]->realVars[345] /* terminal_resist.filter.uu[1] variable */));
  TRACE_POP
}
/*
equation index: 1143
type: SIMPLE_ASSIGN
conPID.addSat.y = conPID.y - conPID.gainPID.y
*/
void nb_hydr_static_v6_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1143};
  (data->localData[0]->realVars[321] /* conPID.addSat.y variable */) = (data->localData[0]->realVars[325] /* conPID.y variable */) - (data->localData[0]->realVars[323] /* conPID.gainPID.y variable */);
  TRACE_POP
}
/*
equation index: 1144
type: SIMPLE_ASSIGN
conPID.gainTrack.y = conPID.gainTrack.k * conPID.addSat.y
*/
void nb_hydr_static_v6_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1144};
  (data->localData[0]->realVars[324] /* conPID.gainTrack.y variable */) = ((data->simulationInfo->realParameter[1709] /* conPID.gainTrack.k PARAM */)) * ((data->localData[0]->realVars[321] /* conPID.addSat.y variable */));
  TRACE_POP
}
/*
equation index: 1145
type: SIMPLE_ASSIGN
conPID.I.u = conPID.addI.k1 * chw_sup_PSP.k + conPID.addI.k2 * chw_sup_P.p + conPID.addI.k3 * conPID.gainTrack.y
*/
void nb_hydr_static_v6_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1145};
  (data->localData[0]->realVars[316] /* conPID.I.u variable */) = ((data->simulationInfo->realParameter[1696] /* conPID.addI.k1 PARAM */)) * ((data->simulationInfo->realParameter[151] /* chw_sup_PSP.k PARAM */)) + ((data->simulationInfo->realParameter[1697] /* conPID.addI.k2 PARAM */)) * ((data->localData[0]->realVars[186] /* chw_sup_P.p variable */)) + ((data->simulationInfo->realParameter[1698] /* conPID.addI.k3 PARAM */)) * ((data->localData[0]->realVars[324] /* conPID.gainTrack.y variable */));
  TRACE_POP
}
/*
equation index: 1146
type: SIMPLE_ASSIGN
$DER.conPID.I.y = conPID.I.k * conPID.I.u
*/
void nb_hydr_static_v6_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1146};
  (data->localData[0]->realVars[19] /* der(conPID.I.y) STATE_DER */) = ((data->simulationInfo->realParameter[1688] /* conPID.I.k PARAM */)) * ((data->localData[0]->realVars[316] /* conPID.I.u variable */));
  TRACE_POP
}
/*
equation index: 1147
type: SIMPLE_ASSIGN
difference.y = difference.k1 * chw_sup_PSP.k + difference.k2 * chw_sup_P.p
*/
void nb_hydr_static_v6_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1147};
  (data->localData[0]->realVars[327] /* difference.y variable */) = ((data->simulationInfo->realParameter[1723] /* difference.k1 PARAM */)) * ((data->simulationInfo->realParameter[151] /* chw_sup_PSP.k PARAM */)) + ((data->simulationInfo->realParameter[1724] /* difference.k2 PARAM */)) * ((data->localData[0]->realVars[186] /* chw_sup_P.p variable */));
  TRACE_POP
}
/*
equation index: 1148
type: SIMPLE_ASSIGN
sup_P_err.y = if noEvent(difference.y >= 0.0) then difference.y else -difference.y
*/
void nb_hydr_static_v6_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1148};
  modelica_boolean tmp19;
  tmp19 = GreaterEq((data->localData[0]->realVars[327] /* difference.y variable */),0.0);
  (data->localData[0]->realVars[343] /* sup_P_err.y variable */) = (tmp19?(data->localData[0]->realVars[327] /* difference.y variable */):(-(data->localData[0]->realVars[327] /* difference.y variable */)));
  TRACE_POP
}
/*
equation index: 1149
type: SIMPLE_ASSIGN
conPID.controlError = chw_sup_PSP.k - chw_sup_P.p
*/
void nb_hydr_static_v6_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1149};
  (data->localData[0]->realVars[322] /* conPID.controlError variable */) = (data->simulationInfo->realParameter[151] /* chw_sup_PSP.k PARAM */) - (data->localData[0]->realVars[186] /* chw_sup_P.p variable */);
  TRACE_POP
}
/*
equation index: 1150
type: SIMPLE_ASSIGN
chwp_2.senRelPre.p_rel = checkvalve_2.port_a.p - ret_p.k
*/
void nb_hydr_static_v6_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1150};
  (data->localData[0]->realVars[242] /* chwp_2.senRelPre.p_rel variable */) = (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */) - (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */);
  TRACE_POP
}
/*
equation index: 1151
type: SIMPLE_ASSIGN
chwp_2.dp = ret_p.k - checkvalve_2.port_a.p
*/
void nb_hydr_static_v6_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1151};
  (data->localData[0]->realVars[225] /* chwp_2.dp variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) - (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */);
  TRACE_POP
}
/*
equation index: 1152
type: SIMPLE_ASSIGN
chwp_2.etaMot = chwp_2.heaDis.WHyd / smooth(1, if noEvent(-1e-05 + chwp_2.P > 1e-06) then chwp_2.P else if noEvent(-1e-05 + chwp_2.P < -1e-06) then 1e-05 else 0.25 * (-10.0 + 1000000.0 * chwp_2.P) * ((-10.0 + 1000000.0 * chwp_2.P) ^ 2.0 - 3.0) * (1e-05 - chwp_2.P) + 0.5 * chwp_2.P + 5e-06)
*/
void nb_hydr_static_v6_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1152};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  tmp20 = Greater(-1e-05 + (data->localData[0]->realVars[222] /* chwp_2.P variable */),1e-06);
  tmp25 = (modelica_boolean)tmp20;
  if(tmp25)
  {
    tmp26 = (data->localData[0]->realVars[222] /* chwp_2.P variable */);
  }
  else
  {
    tmp21 = Less(-1e-05 + (data->localData[0]->realVars[222] /* chwp_2.P variable */),-1e-06);
    tmp23 = (modelica_boolean)tmp21;
    if(tmp23)
    {
      tmp24 = 1e-05;
    }
    else
    {
      tmp22 = -10.0 + (1000000.0) * ((data->localData[0]->realVars[222] /* chwp_2.P variable */));
      tmp24 = (0.25) * (((-10.0 + (1000000.0) * ((data->localData[0]->realVars[222] /* chwp_2.P variable */))) * ((tmp22 * tmp22) - 3.0)) * (1e-05 - (data->localData[0]->realVars[222] /* chwp_2.P variable */))) + (0.5) * ((data->localData[0]->realVars[222] /* chwp_2.P variable */)) + 5e-06;
    }
    tmp26 = tmp24;
  }
  (data->localData[0]->realVars[229] /* chwp_2.etaMot variable */) = DIVISION_SIM((data->localData[0]->realVars[233] /* chwp_2.heaDis.WHyd variable */),tmp26,"smooth(1, if noEvent(-1e-05 + chwp_2.P > 1e-06) then chwp_2.P else if noEvent(-1e-05 + chwp_2.P < -1e-06) then 1e-05 else 0.25 * (-10.0 + 1000000.0 * chwp_2.P) * ((-10.0 + 1000000.0 * chwp_2.P) ^ 2.0 - 3.0) * (1e-05 - chwp_2.P) + 0.5 * chwp_2.P + 5e-06)",equationIndexes);
  TRACE_POP
}
/*
equation index: 1153
type: SIMPLE_ASSIGN
chwp_2.eff.r_V = 1.733096239753654 * chwp_2.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1153};
  (data->localData[0]->realVars[228] /* chwp_2.eff.r_V variable */) = (1.733096239753654) * ((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */));
  TRACE_POP
}
/*
equation index: 1154
type: ALGORITHM

  $cse69 := nb_hydr_static_v6.chwp_2.preSou.Medium.setState_phX(ret_p.k, checkvalve_2.port_b.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1154};
  base_array_t tmp27;
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState tmp28;
  simple_alloc_1d_base_array(&tmp27, 0, NULL);
  tmp28 = omc_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */), tmp27);
  (data->localData[0]->realVars[82] /* $cse69.p variable */) = tmp28._p;
  (data->localData[0]->realVars[81] /* $cse69.T variable */) = tmp28._T;
  ;
  TRACE_POP
}
/*
equation index: 1155
type: SIMPLE_ASSIGN
$cse68 = nb_hydr_static_v6.chwp_2.preSou.Medium.density($cse69)
*/
void nb_hydr_static_v6_eqFunction_1155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1155};
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState tmp29;
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_wrap_vars(threadData,tmp29, (data->localData[0]->realVars[82] /* $cse69.p variable */), (data->localData[0]->realVars[81] /* $cse69.T variable */));
  (data->localData[0]->realVars[80] /* $cse68 variable */) = omc_nb__hydr__static__v6_chwp__2_preSou_Medium_density(threadData, tmp29);
  TRACE_POP
}
/*
equation index: 1156
type: SIMPLE_ASSIGN
$cse95 = nb_hydr_static_v6.checkvalve_2.Medium.temperature(nb_hydr_static_v6.checkvalve_2.Medium.ThermodynamicState(checkvalve_2.port_a.p, checkvalve_2.state_a.T))
*/
void nb_hydr_static_v6_eqFunction_1156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1156};
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp30;
  tmp30._p = (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */);
  tmp30._T = (data->localData[0]->realVars[144] /* checkvalve_2.state_a.T variable */);
  (data->localData[0]->realVars[116] /* $cse95 variable */) = omc_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData, tmp30);
  TRACE_POP
}
/*
equation index: 1157
type: ALGORITHM

  $cse100 := nb_hydr_static_v6.checkvalve_2.Medium.setState_phX(checkvalve_2.port_b.p, checkvalve_2.port_b.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1157};
  base_array_t tmp31;
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp32;
  simple_alloc_1d_base_array(&tmp31, 0, NULL);
  tmp32 = omc_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX(threadData, (data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */), (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */), tmp31);
  (data->localData[0]->realVars[23] /* $cse100.p variable */) = tmp32._p;
  (data->localData[0]->realVars[22] /* $cse100.T variable */) = tmp32._T;
  ;
  TRACE_POP
}
/*
equation index: 1158
type: SIMPLE_ASSIGN
$cse99 = nb_hydr_static_v6.checkvalve_2.Medium.temperature($cse100)
*/
void nb_hydr_static_v6_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1158};
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp33;
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_wrap_vars(threadData,tmp33, (data->localData[0]->realVars[23] /* $cse100.p variable */), (data->localData[0]->realVars[22] /* $cse100.T variable */));
  (data->localData[0]->realVars[121] /* $cse99 variable */) = omc_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData, tmp33);
  TRACE_POP
}
/*
equation index: 1159
type: ALGORITHM

  $cse91 := nb_hydr_static_v6.checkvalve_1.Medium.setState_phX(checkvalve_1.port_b.p, checkvalve_1.port_b.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1159};
  base_array_t tmp34;
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp35;
  simple_alloc_1d_base_array(&tmp34, 0, NULL);
  tmp35 = omc_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX(threadData, (data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */), (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */), tmp34);
  (data->localData[0]->realVars[112] /* $cse91.p variable */) = tmp35._p;
  (data->localData[0]->realVars[111] /* $cse91.T variable */) = tmp35._T;
  ;
  TRACE_POP
}
/*
equation index: 1160
type: SIMPLE_ASSIGN
$cse90 = nb_hydr_static_v6.checkvalve_1.Medium.temperature($cse91)
*/
void nb_hydr_static_v6_eqFunction_1160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1160};
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp36;
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_wrap_vars(threadData,tmp36, (data->localData[0]->realVars[112] /* $cse91.p variable */), (data->localData[0]->realVars[111] /* $cse91.T variable */));
  (data->localData[0]->realVars[110] /* $cse90 variable */) = omc_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData, tmp36);
  TRACE_POP
}
/*
equation index: 1161
type: ALGORITHM

  $cse64 := nb_hydr_static_v6.chwp_1.preSou.Medium.setState_phX(ret_p.k, checkvalve_1.port_b.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1161};
  base_array_t tmp37;
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState tmp38;
  simple_alloc_1d_base_array(&tmp37, 0, NULL);
  tmp38 = omc_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */), tmp37);
  (data->localData[0]->realVars[75] /* $cse64.p variable */) = tmp38._p;
  (data->localData[0]->realVars[74] /* $cse64.T variable */) = tmp38._T;
  ;
  TRACE_POP
}
/*
equation index: 1162
type: SIMPLE_ASSIGN
$cse63 = nb_hydr_static_v6.chwp_1.preSou.Medium.density($cse64)
*/
void nb_hydr_static_v6_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1162};
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState tmp39;
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_wrap_vars(threadData,tmp39, (data->localData[0]->realVars[75] /* $cse64.p variable */), (data->localData[0]->realVars[74] /* $cse64.T variable */));
  (data->localData[0]->realVars[73] /* $cse63 variable */) = omc_nb__hydr__static__v6_chwp__1_preSou_Medium_density(threadData, tmp39);
  TRACE_POP
}
/*
equation index: 1163
type: SIMPLE_ASSIGN
chwp_1.senRelPre.p_rel = checkvalve_1.port_a.p - ret_p.k
*/
void nb_hydr_static_v6_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1163};
  (data->localData[0]->realVars[211] /* chwp_1.senRelPre.p_rel variable */) = (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */) - (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */);
  TRACE_POP
}
/*
equation index: 1164
type: SIMPLE_ASSIGN
chwp_1.dp = ret_p.k - checkvalve_1.port_a.p
*/
void nb_hydr_static_v6_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1164};
  (data->localData[0]->realVars[194] /* chwp_1.dp variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) - (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */);
  TRACE_POP
}
/*
equation index: 1165
type: SIMPLE_ASSIGN
$cse86 = nb_hydr_static_v6.checkvalve_1.Medium.temperature(nb_hydr_static_v6.checkvalve_1.Medium.ThermodynamicState(checkvalve_1.port_a.p, checkvalve_1.state_a.T))
*/
void nb_hydr_static_v6_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1165};
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp40;
  tmp40._p = (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */);
  tmp40._T = (data->localData[0]->realVars[132] /* checkvalve_1.state_a.T variable */);
  (data->localData[0]->realVars[105] /* $cse86 variable */) = omc_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData, tmp40);
  TRACE_POP
}
/*
equation index: 1166
type: SIMPLE_ASSIGN
chwp_1.etaMot = chwp_1.heaDis.WHyd / smooth(1, if noEvent(-1e-05 + chwp_1.P > 1e-06) then chwp_1.P else if noEvent(-1e-05 + chwp_1.P < -1e-06) then 1e-05 else 0.25 * (-10.0 + 1000000.0 * chwp_1.P) * ((-10.0 + 1000000.0 * chwp_1.P) ^ 2.0 - 3.0) * (1e-05 - chwp_1.P) + 0.5 * chwp_1.P + 5e-06)
*/
void nb_hydr_static_v6_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1166};
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
  tmp41 = Greater(-1e-05 + (data->localData[0]->realVars[191] /* chwp_1.P variable */),1e-06);
  tmp46 = (modelica_boolean)tmp41;
  if(tmp46)
  {
    tmp47 = (data->localData[0]->realVars[191] /* chwp_1.P variable */);
  }
  else
  {
    tmp42 = Less(-1e-05 + (data->localData[0]->realVars[191] /* chwp_1.P variable */),-1e-06);
    tmp44 = (modelica_boolean)tmp42;
    if(tmp44)
    {
      tmp45 = 1e-05;
    }
    else
    {
      tmp43 = -10.0 + (1000000.0) * ((data->localData[0]->realVars[191] /* chwp_1.P variable */));
      tmp45 = (0.25) * (((-10.0 + (1000000.0) * ((data->localData[0]->realVars[191] /* chwp_1.P variable */))) * ((tmp43 * tmp43) - 3.0)) * (1e-05 - (data->localData[0]->realVars[191] /* chwp_1.P variable */))) + (0.5) * ((data->localData[0]->realVars[191] /* chwp_1.P variable */)) + 5e-06;
    }
    tmp47 = tmp45;
  }
  (data->localData[0]->realVars[198] /* chwp_1.etaMot variable */) = DIVISION_SIM((data->localData[0]->realVars[202] /* chwp_1.heaDis.WHyd variable */),tmp47,"smooth(1, if noEvent(-1e-05 + chwp_1.P > 1e-06) then chwp_1.P else if noEvent(-1e-05 + chwp_1.P < -1e-06) then 1e-05 else 0.25 * (-10.0 + 1000000.0 * chwp_1.P) * ((-10.0 + 1000000.0 * chwp_1.P) ^ 2.0 - 3.0) * (1e-05 - chwp_1.P) + 0.5 * chwp_1.P + 5e-06)",equationIndexes);
  TRACE_POP
}
/*
equation index: 1167
type: SIMPLE_ASSIGN
chwp_1.eff.r_V = 1.733096239753654 * chwp_1.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1167};
  (data->localData[0]->realVars[197] /* chwp_1.eff.r_V variable */) = (1.733096239753654) * ((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */));
  TRACE_POP
}
/*
equation index: 1168
type: SIMPLE_ASSIGN
checkvalve_4.state_b.T = 273.15 + 0.0002390057361376673 * checkvalve_4.port_a.h_outflow
*/
void nb_hydr_static_v6_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1168};
  (data->localData[0]->realVars[169] /* checkvalve_4.state_b.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */));
  TRACE_POP
}
/*
equation index: 1169
type: SIMPLE_ASSIGN
$cse116 = nb_hydr_static_v6.checkvalve_4.Medium.temperature(nb_hydr_static_v6.checkvalve_4.Medium.ThermodynamicState(checkvalve_4.port_b.p, checkvalve_4.state_b.T))
*/
void nb_hydr_static_v6_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1169};
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp48;
  tmp48._p = (data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */);
  tmp48._T = (data->localData[0]->realVars[169] /* checkvalve_4.state_b.T variable */);
  (data->localData[0]->realVars[42] /* $cse116 variable */) = omc_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData, tmp48);
  TRACE_POP
}
/*
equation index: 1170
type: SIMPLE_ASSIGN
$cse112 = nb_hydr_static_v6.checkvalve_4.Medium.density(nb_hydr_static_v6.checkvalve_4.Medium.ThermodynamicState(checkvalve_4.port_b.p, checkvalve_4.state_b.T))
*/
void nb_hydr_static_v6_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1170};
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp49;
  tmp49._p = (data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */);
  tmp49._T = (data->localData[0]->realVars[169] /* checkvalve_4.state_b.T variable */);
  (data->localData[0]->realVars[37] /* $cse112 variable */) = omc_nb__hydr__static__v6_checkvalve__4_Medium_density(threadData, tmp49);
  TRACE_POP
}
/*
equation index: 1171
type: ALGORITHM

  $cse115 := nb_hydr_static_v6.checkvalve_4.Medium.setState_phX(checkvalve_4.port_a.p, checkvalve_4.port_a.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1171};
  base_array_t tmp50;
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp51;
  simple_alloc_1d_base_array(&tmp50, 0, NULL);
  tmp51 = omc_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX(threadData, (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */), (data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */), tmp50);
  (data->localData[0]->realVars[41] /* $cse115.p variable */) = tmp51._p;
  (data->localData[0]->realVars[40] /* $cse115.T variable */) = tmp51._T;
  ;
  TRACE_POP
}
/*
equation index: 1172
type: SIMPLE_ASSIGN
$cse114 = nb_hydr_static_v6.checkvalve_4.Medium.temperature($cse115)
*/
void nb_hydr_static_v6_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1172};
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp52;
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_wrap_vars(threadData,tmp52, (data->localData[0]->realVars[41] /* $cse115.p variable */), (data->localData[0]->realVars[40] /* $cse115.T variable */));
  (data->localData[0]->realVars[39] /* $cse114 variable */) = omc_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData, tmp52);
  TRACE_POP
}
/*
equation index: 1173
type: ALGORITHM

  $cse81 := nb_hydr_static_v6.chwp_4.preSou.Medium.setState_phX(checkvalve_4.port_a.p, checkvalve_4.port_a.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1173};
  base_array_t tmp53;
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState tmp54;
  simple_alloc_1d_base_array(&tmp53, 0, NULL);
  tmp54 = omc_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */), (data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */), tmp53);
  (data->localData[0]->realVars[99] /* $cse81.p variable */) = tmp54._p;
  (data->localData[0]->realVars[98] /* $cse81.T variable */) = tmp54._T;
  ;
  TRACE_POP
}
/*
equation index: 1174
type: SIMPLE_ASSIGN
$cse80 = nb_hydr_static_v6.chwp_4.preSou.Medium.density($cse81)
*/
void nb_hydr_static_v6_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1174};
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState tmp55;
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_wrap_vars(threadData,tmp55, (data->localData[0]->realVars[99] /* $cse81.p variable */), (data->localData[0]->realVars[98] /* $cse81.T variable */));
  (data->localData[0]->realVars[97] /* $cse80 variable */) = omc_nb__hydr__static__v6_chwp__4_preSou_Medium_density(threadData, tmp55);
  TRACE_POP
}
/*
equation index: 1175
type: SIMPLE_ASSIGN
terminal_resist.port_b.h_outflow = ($cse46 * checkvalve_1.port_b.h_outflow + $cse47 * jun_5.port_2.h_outflow) / ($cse46 + $cse47)
*/
void nb_hydr_static_v6_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1175};
  (data->localData[0]->realVars[350] /* terminal_resist.port_b.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[55] /* $cse46 variable */)) * ((data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */)) + ((data->localData[0]->realVars[56] /* $cse47 variable */)) * ((data->localData[0]->realVars[339] /* jun_5.port_2.h_outflow variable */)),(data->localData[0]->realVars[55] /* $cse46 variable */) + (data->localData[0]->realVars[56] /* $cse47 variable */),"$cse46 + $cse47",equationIndexes);
  TRACE_POP
}
/*
equation index: 1176
type: SIMPLE_ASSIGN
checkvalve_1.state_b.T = 273.15 + 0.0002390057361376673 * checkvalve_1.port_a.h_outflow
*/
void nb_hydr_static_v6_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1176};
  (data->localData[0]->realVars[133] /* checkvalve_1.state_b.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */));
  TRACE_POP
}
/*
equation index: 1177
type: SIMPLE_ASSIGN
$cse89 = nb_hydr_static_v6.checkvalve_1.Medium.temperature(nb_hydr_static_v6.checkvalve_1.Medium.ThermodynamicState(checkvalve_1.port_b.p, checkvalve_1.state_b.T))
*/
void nb_hydr_static_v6_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1177};
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp56;
  tmp56._p = (data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */);
  tmp56._T = (data->localData[0]->realVars[133] /* checkvalve_1.state_b.T variable */);
  (data->localData[0]->realVars[109] /* $cse89 variable */) = omc_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData, tmp56);
  TRACE_POP
}
/*
equation index: 1178
type: SIMPLE_ASSIGN
checkvalve_1.port_b_T = Modelica.Fluid.Utilities.regStep(-chiller_1.m_flow, $cse89, $cse90, checkvalve_1.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1178};
  (data->localData[0]->realVars[130] /* checkvalve_1.port_b_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (-(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)), (data->localData[0]->realVars[109] /* $cse89 variable */), (data->localData[0]->realVars[110] /* $cse90 variable */), (data->simulationInfo->realParameter[9] /* checkvalve_1.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 1179
type: SIMPLE_ASSIGN
$cse85 = nb_hydr_static_v6.checkvalve_1.Medium.density(nb_hydr_static_v6.checkvalve_1.Medium.ThermodynamicState(checkvalve_1.port_b.p, checkvalve_1.state_b.T))
*/
void nb_hydr_static_v6_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1179};
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp57;
  tmp57._p = (data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */);
  tmp57._T = (data->localData[0]->realVars[133] /* checkvalve_1.state_b.T variable */);
  (data->localData[0]->realVars[104] /* $cse85 variable */) = omc_nb__hydr__static__v6_checkvalve__1_Medium_density(threadData, tmp57);
  TRACE_POP
}
/*
equation index: 1180
type: SIMPLE_ASSIGN
$cse83 = Modelica.Fluid.Utilities.regStep(chiller_1.m_flow, $cse84, $cse85, checkvalve_1.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1180};
  (data->localData[0]->realVars[102] /* $cse83 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), (data->localData[0]->realVars[103] /* $cse84 variable */), (data->localData[0]->realVars[104] /* $cse85 variable */), (data->simulationInfo->realParameter[9] /* checkvalve_1.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 1181
type: SIMPLE_ASSIGN
checkvalve_1.V_flow = chiller_1.m_flow / $cse83
*/
void nb_hydr_static_v6_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1181};
  (data->localData[0]->realVars[122] /* checkvalve_1.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),(data->localData[0]->realVars[102] /* $cse83 variable */),"$cse83",equationIndexes);
  TRACE_POP
}
/*
equation index: 1182
type: ALGORITHM

  $cse88 := nb_hydr_static_v6.checkvalve_1.Medium.setState_phX(checkvalve_1.port_a.p, checkvalve_1.port_a.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1182};
  base_array_t tmp58;
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp59;
  simple_alloc_1d_base_array(&tmp58, 0, NULL);
  tmp59 = omc_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX(threadData, (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */), (data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */), tmp58);
  (data->localData[0]->realVars[108] /* $cse88.p variable */) = tmp59._p;
  (data->localData[0]->realVars[107] /* $cse88.T variable */) = tmp59._T;
  ;
  TRACE_POP
}
/*
equation index: 1183
type: SIMPLE_ASSIGN
$cse87 = nb_hydr_static_v6.checkvalve_1.Medium.temperature($cse88)
*/
void nb_hydr_static_v6_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1183};
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp60;
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_wrap_vars(threadData,tmp60, (data->localData[0]->realVars[108] /* $cse88.p variable */), (data->localData[0]->realVars[107] /* $cse88.T variable */));
  (data->localData[0]->realVars[106] /* $cse87 variable */) = omc_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData, tmp60);
  TRACE_POP
}
/*
equation index: 1184
type: SIMPLE_ASSIGN
checkvalve_1.port_a_T = Modelica.Fluid.Utilities.regStep(chiller_1.m_flow, $cse86, $cse87, checkvalve_1.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1184};
  (data->localData[0]->realVars[127] /* checkvalve_1.port_a_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), (data->localData[0]->realVars[105] /* $cse86 variable */), (data->localData[0]->realVars[106] /* $cse87 variable */), (data->simulationInfo->realParameter[9] /* checkvalve_1.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 1185
type: ALGORITHM

  $cse66 := nb_hydr_static_v6.chwp_1.preSou.Medium.setState_phX(checkvalve_1.port_a.p, checkvalve_1.port_a.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1185};
  base_array_t tmp61;
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState tmp62;
  simple_alloc_1d_base_array(&tmp61, 0, NULL);
  tmp62 = omc_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */), (data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */), tmp61);
  (data->localData[0]->realVars[78] /* $cse66.p variable */) = tmp62._p;
  (data->localData[0]->realVars[77] /* $cse66.T variable */) = tmp62._T;
  ;
  TRACE_POP
}
/*
equation index: 1186
type: SIMPLE_ASSIGN
$cse65 = nb_hydr_static_v6.chwp_1.preSou.Medium.density($cse66)
*/
void nb_hydr_static_v6_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1186};
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState tmp63;
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_wrap_vars(threadData,tmp63, (data->localData[0]->realVars[78] /* $cse66.p variable */), (data->localData[0]->realVars[77] /* $cse66.T variable */));
  (data->localData[0]->realVars[76] /* $cse65 variable */) = omc_nb__hydr__static__v6_chwp__1_preSou_Medium_density(threadData, tmp63);
  TRACE_POP
}
/*
equation index: 1187
type: SIMPLE_ASSIGN
$cse62 = Modelica.Fluid.Utilities.regStep(chiller_1.m_flow, $cse63, $cse65, 0.0574453122)
*/
void nb_hydr_static_v6_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1187};
  (data->localData[0]->realVars[72] /* $cse62 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), (data->localData[0]->realVars[73] /* $cse63 variable */), (data->localData[0]->realVars[76] /* $cse65 variable */), 0.0574453122);
  TRACE_POP
}
/*
equation index: 1188
type: SIMPLE_ASSIGN
chwp_1.preSou.V_flow = chiller_1.m_flow / $cse62
*/
void nb_hydr_static_v6_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1188};
  (data->localData[0]->realVars[208] /* chwp_1.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),(data->localData[0]->realVars[72] /* $cse62 variable */),"$cse62",equationIndexes);
  TRACE_POP
}
/*
equation index: 1189
type: SIMPLE_ASSIGN
chw_ret_m.port_a.h_outflow = ($cse39 * jun_2.port_1.h_outflow + $cse37 * chwp_1.port_a.h_outflow) / ($cse39 + $cse37)
*/
void nb_hydr_static_v6_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1189};
  (data->localData[0]->realVars[182] /* chw_ret_m.port_a.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[48] /* $cse39 variable */)) * ((data->localData[0]->realVars[330] /* jun_2.port_1.h_outflow variable */)) + ((data->localData[0]->realVars[46] /* $cse37 variable */)) * ((data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */)),(data->localData[0]->realVars[48] /* $cse39 variable */) + (data->localData[0]->realVars[46] /* $cse37 variable */),"$cse39 + $cse37",equationIndexes);
  TRACE_POP
}
/*
equation index: 1190
type: SIMPLE_ASSIGN
chwp_1.vol.hOut_internal = smooth(1, if noEvent(chiller_1.m_flow > 5.74453122e-05) then checkvalve_1.port_b.h_outflow else if noEvent(chiller_1.m_flow < -5.74453122e-05) then chwp_1.port_a.h_outflow else 0.25 * (1000000.0 * (chiller_1.m_flow / 0.0574453122) ^ 2.0 - 3.0) * 1000.0 * chiller_1.m_flow / 0.0574453122 * (chwp_1.port_a.h_outflow - checkvalve_1.port_b.h_outflow) + 0.5 * (checkvalve_1.port_b.h_outflow + chwp_1.port_a.h_outflow))
*/
void nb_hydr_static_v6_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1190};
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  modelica_boolean tmp67;
  modelica_real tmp68;
  modelica_boolean tmp69;
  modelica_real tmp70;
  tmp64 = Greater((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),5.74453122e-05);
  tmp69 = (modelica_boolean)tmp64;
  if(tmp69)
  {
    tmp70 = (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */);
  }
  else
  {
    tmp65 = Less((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),-5.74453122e-05);
    tmp67 = (modelica_boolean)tmp65;
    if(tmp67)
    {
      tmp68 = (data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */);
    }
    else
    {
      tmp66 = DIVISION_SIM((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),0.0574453122,"0.0574453122",equationIndexes);
      tmp68 = (0.25) * ((DIVISION_SIM(((1000000.0) * ((tmp66 * tmp66)) - 3.0) * ((1000.0) * ((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */))),0.0574453122,"0.0574453122",equationIndexes)) * ((data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */) - (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */))) + (0.5) * ((data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */) + (data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */));
    }
    tmp70 = tmp68;
  }
  (data->localData[0]->realVars[217] /* chwp_1.vol.hOut_internal variable */) = tmp70;
  TRACE_POP
}
/*
equation index: 1191
type: SIMPLE_ASSIGN
chwp_1.heatPort.T = nb_hydr_static_v6.chwp_1.vol.Medium.temperature_phX(ret_p.k, chwp_1.vol.hOut_internal, {1.0})
*/
void nb_hydr_static_v6_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1191};
  (data->localData[0]->realVars[204] /* chwp_1.heatPort.T variable */) = omc_nb__hydr__static__v6_chwp__1_vol_Medium_temperature__phX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->localData[0]->realVars[217] /* chwp_1.vol.hOut_internal variable */), _OMC_LIT42);
  TRACE_POP
}
/*
equation index: 1192
type: SIMPLE_ASSIGN
checkvalve_2.state_b.T = 273.15 + 0.0002390057361376673 * checkvalve_2.port_a.h_outflow
*/
void nb_hydr_static_v6_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1192};
  (data->localData[0]->realVars[145] /* checkvalve_2.state_b.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */));
  TRACE_POP
}
/*
equation index: 1193
type: SIMPLE_ASSIGN
$cse98 = nb_hydr_static_v6.checkvalve_2.Medium.temperature(nb_hydr_static_v6.checkvalve_2.Medium.ThermodynamicState(checkvalve_2.port_b.p, checkvalve_2.state_b.T))
*/
void nb_hydr_static_v6_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1193};
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp71;
  tmp71._p = (data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */);
  tmp71._T = (data->localData[0]->realVars[145] /* checkvalve_2.state_b.T variable */);
  (data->localData[0]->realVars[120] /* $cse98 variable */) = omc_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData, tmp71);
  TRACE_POP
}
/*
equation index: 1194
type: SIMPLE_ASSIGN
$cse94 = nb_hydr_static_v6.checkvalve_2.Medium.density(nb_hydr_static_v6.checkvalve_2.Medium.ThermodynamicState(checkvalve_2.port_b.p, checkvalve_2.state_b.T))
*/
void nb_hydr_static_v6_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1194};
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp72;
  tmp72._p = (data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */);
  tmp72._T = (data->localData[0]->realVars[145] /* checkvalve_2.state_b.T variable */);
  (data->localData[0]->realVars[115] /* $cse94 variable */) = omc_nb__hydr__static__v6_checkvalve__2_Medium_density(threadData, tmp72);
  TRACE_POP
}
/*
equation index: 1195
type: ALGORITHM

  $cse97 := nb_hydr_static_v6.checkvalve_2.Medium.setState_phX(checkvalve_2.port_a.p, checkvalve_2.port_a.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1195};
  base_array_t tmp73;
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp74;
  simple_alloc_1d_base_array(&tmp73, 0, NULL);
  tmp74 = omc_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX(threadData, (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */), (data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */), tmp73);
  (data->localData[0]->realVars[119] /* $cse97.p variable */) = tmp74._p;
  (data->localData[0]->realVars[118] /* $cse97.T variable */) = tmp74._T;
  ;
  TRACE_POP
}
/*
equation index: 1196
type: SIMPLE_ASSIGN
$cse96 = nb_hydr_static_v6.checkvalve_2.Medium.temperature($cse97)
*/
void nb_hydr_static_v6_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1196};
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp75;
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_wrap_vars(threadData,tmp75, (data->localData[0]->realVars[119] /* $cse97.p variable */), (data->localData[0]->realVars[118] /* $cse97.T variable */));
  (data->localData[0]->realVars[117] /* $cse96 variable */) = omc_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData, tmp75);
  TRACE_POP
}
/*
equation index: 1197
type: ALGORITHM

  $cse71 := nb_hydr_static_v6.chwp_2.preSou.Medium.setState_phX(checkvalve_2.port_a.p, checkvalve_2.port_a.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1197};
  base_array_t tmp76;
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState tmp77;
  simple_alloc_1d_base_array(&tmp76, 0, NULL);
  tmp77 = omc_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */), (data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */), tmp76);
  (data->localData[0]->realVars[85] /* $cse71.p variable */) = tmp77._p;
  (data->localData[0]->realVars[84] /* $cse71.T variable */) = tmp77._T;
  ;
  TRACE_POP
}
/*
equation index: 1198
type: SIMPLE_ASSIGN
$cse70 = nb_hydr_static_v6.chwp_2.preSou.Medium.density($cse71)
*/
void nb_hydr_static_v6_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1198};
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState tmp78;
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_wrap_vars(threadData,tmp78, (data->localData[0]->realVars[85] /* $cse71.p variable */), (data->localData[0]->realVars[84] /* $cse71.T variable */));
  (data->localData[0]->realVars[83] /* $cse70 variable */) = omc_nb__hydr__static__v6_chwp__2_preSou_Medium_density(threadData, tmp78);
  TRACE_POP
}
/*
equation index: 1199
type: SIMPLE_ASSIGN
chwp_3.vol.hOut_internal = smooth(1, if noEvent(chiller_3.m_flow > 5.74453122e-05) then checkvalve_3.port_b.h_outflow else if noEvent(chiller_3.m_flow < -5.74453122e-05) then chwp_3.port_a.h_outflow else 0.25 * (1000000.0 * (chiller_3.m_flow / 0.0574453122) ^ 2.0 - 3.0) * 1000.0 * chiller_3.m_flow / 0.0574453122 * (chwp_3.port_a.h_outflow - checkvalve_3.port_b.h_outflow) + 0.5 * (checkvalve_3.port_b.h_outflow + chwp_3.port_a.h_outflow))
*/
void nb_hydr_static_v6_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1199};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_real tmp81;
  modelica_boolean tmp82;
  modelica_real tmp83;
  modelica_boolean tmp84;
  modelica_real tmp85;
  tmp79 = Greater((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),5.74453122e-05);
  tmp84 = (modelica_boolean)tmp79;
  if(tmp84)
  {
    tmp85 = (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */);
  }
  else
  {
    tmp80 = Less((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),-5.74453122e-05);
    tmp82 = (modelica_boolean)tmp80;
    if(tmp82)
    {
      tmp83 = (data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */);
    }
    else
    {
      tmp81 = DIVISION_SIM((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),0.0574453122,"0.0574453122",equationIndexes);
      tmp83 = (0.25) * ((DIVISION_SIM(((1000000.0) * ((tmp81 * tmp81)) - 3.0) * ((1000.0) * ((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */))),0.0574453122,"0.0574453122",equationIndexes)) * ((data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */) - (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */))) + (0.5) * ((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */) + (data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */));
    }
    tmp85 = tmp83;
  }
  (data->localData[0]->realVars[279] /* chwp_3.vol.hOut_internal variable */) = tmp85;
  TRACE_POP
}
/*
equation index: 1200
type: SIMPLE_ASSIGN
chwp_3.heatPort.T = nb_hydr_static_v6.chwp_3.vol.Medium.temperature_phX(ret_p.k, chwp_3.vol.hOut_internal, {1.0})
*/
void nb_hydr_static_v6_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1200};
  (data->localData[0]->realVars[266] /* chwp_3.heatPort.T variable */) = omc_nb__hydr__static__v6_chwp__3_vol_Medium_temperature__phX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->localData[0]->realVars[279] /* chwp_3.vol.hOut_internal variable */), _OMC_LIT42);
  TRACE_POP
}
/*
equation index: 1201
type: SIMPLE_ASSIGN
$cse92 = Modelica.Fluid.Utilities.regStep(chiller_2.m_flow, $cse93, $cse94, checkvalve_2.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1201};
  (data->localData[0]->realVars[113] /* $cse92 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), (data->localData[0]->realVars[114] /* $cse93 variable */), (data->localData[0]->realVars[115] /* $cse94 variable */), (data->simulationInfo->realParameter[27] /* checkvalve_2.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 1202
type: SIMPLE_ASSIGN
checkvalve_2.V_flow = chiller_2.m_flow / $cse92
*/
void nb_hydr_static_v6_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1202};
  (data->localData[0]->realVars[134] /* checkvalve_2.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),(data->localData[0]->realVars[113] /* $cse92 variable */),"$cse92",equationIndexes);
  TRACE_POP
}
/*
equation index: 1203
type: SIMPLE_ASSIGN
chwp_2.vol.hOut_internal = smooth(1, if noEvent(chiller_2.m_flow > 5.74453122e-05) then checkvalve_2.port_b.h_outflow else if noEvent(chiller_2.m_flow < -5.74453122e-05) then chwp_2.port_a.h_outflow else 0.25 * (1000000.0 * (chiller_2.m_flow / 0.0574453122) ^ 2.0 - 3.0) * 1000.0 * chiller_2.m_flow / 0.0574453122 * (chwp_2.port_a.h_outflow - checkvalve_2.port_b.h_outflow) + 0.5 * (checkvalve_2.port_b.h_outflow + chwp_2.port_a.h_outflow))
*/
void nb_hydr_static_v6_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1203};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  modelica_real tmp88;
  modelica_boolean tmp89;
  modelica_real tmp90;
  modelica_boolean tmp91;
  modelica_real tmp92;
  tmp86 = Greater((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),5.74453122e-05);
  tmp91 = (modelica_boolean)tmp86;
  if(tmp91)
  {
    tmp92 = (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */);
  }
  else
  {
    tmp87 = Less((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),-5.74453122e-05);
    tmp89 = (modelica_boolean)tmp87;
    if(tmp89)
    {
      tmp90 = (data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */);
    }
    else
    {
      tmp88 = DIVISION_SIM((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),0.0574453122,"0.0574453122",equationIndexes);
      tmp90 = (0.25) * ((DIVISION_SIM(((1000000.0) * ((tmp88 * tmp88)) - 3.0) * ((1000.0) * ((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */))),0.0574453122,"0.0574453122",equationIndexes)) * ((data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */) - (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */))) + (0.5) * ((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */) + (data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */));
    }
    tmp92 = tmp90;
  }
  (data->localData[0]->realVars[248] /* chwp_2.vol.hOut_internal variable */) = tmp92;
  TRACE_POP
}
/*
equation index: 1204
type: SIMPLE_ASSIGN
chwp_2.heatPort.T = nb_hydr_static_v6.chwp_2.vol.Medium.temperature_phX(ret_p.k, chwp_2.vol.hOut_internal, {1.0})
*/
void nb_hydr_static_v6_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1204};
  (data->localData[0]->realVars[235] /* chwp_2.heatPort.T variable */) = omc_nb__hydr__static__v6_chwp__2_vol_Medium_temperature__phX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->localData[0]->realVars[248] /* chwp_2.vol.hOut_internal variable */), _OMC_LIT42);
  TRACE_POP
}
/*
equation index: 1205
type: SIMPLE_ASSIGN
checkvalve_2.port_b_T = Modelica.Fluid.Utilities.regStep(-chiller_2.m_flow, $cse98, $cse99, checkvalve_2.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1205};
  (data->localData[0]->realVars[142] /* checkvalve_2.port_b_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)), (data->localData[0]->realVars[120] /* $cse98 variable */), (data->localData[0]->realVars[121] /* $cse99 variable */), (data->simulationInfo->realParameter[27] /* checkvalve_2.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 1206
type: SIMPLE_ASSIGN
checkvalve_2.port_a_T = Modelica.Fluid.Utilities.regStep(chiller_2.m_flow, $cse95, $cse96, checkvalve_2.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1206};
  (data->localData[0]->realVars[139] /* checkvalve_2.port_a_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), (data->localData[0]->realVars[116] /* $cse95 variable */), (data->localData[0]->realVars[117] /* $cse96 variable */), (data->simulationInfo->realParameter[27] /* checkvalve_2.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 1207
type: SIMPLE_ASSIGN
$cse67 = Modelica.Fluid.Utilities.regStep(chiller_2.m_flow, $cse68, $cse70, 0.0574453122)
*/
void nb_hydr_static_v6_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1207};
  (data->localData[0]->realVars[79] /* $cse67 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), (data->localData[0]->realVars[80] /* $cse68 variable */), (data->localData[0]->realVars[83] /* $cse70 variable */), 0.0574453122);
  TRACE_POP
}
/*
equation index: 1208
type: SIMPLE_ASSIGN
chwp_2.preSou.V_flow = chiller_2.m_flow / $cse67
*/
void nb_hydr_static_v6_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1208};
  (data->localData[0]->realVars[239] /* chwp_2.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),(data->localData[0]->realVars[79] /* $cse67 variable */),"$cse67",equationIndexes);
  TRACE_POP
}
/*
equation index: 1209
type: SIMPLE_ASSIGN
$cse110 = Modelica.Fluid.Utilities.regStep(chiller_4.m_flow, $cse111, $cse112, checkvalve_4.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1209};
  (data->localData[0]->realVars[35] /* $cse110 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), (data->localData[0]->realVars[36] /* $cse111 variable */), (data->localData[0]->realVars[37] /* $cse112 variable */), (data->simulationInfo->realParameter[63] /* checkvalve_4.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 1210
type: SIMPLE_ASSIGN
checkvalve_4.V_flow = chiller_4.m_flow / $cse110
*/
void nb_hydr_static_v6_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1210};
  (data->localData[0]->realVars[158] /* checkvalve_4.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),(data->localData[0]->realVars[35] /* $cse110 variable */),"$cse110",equationIndexes);
  TRACE_POP
}
/*
equation index: 1211
type: SIMPLE_ASSIGN
checkvalve_4.port_a_T = Modelica.Fluid.Utilities.regStep(chiller_4.m_flow, $cse113, $cse114, checkvalve_4.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1211};
  (data->localData[0]->realVars[163] /* checkvalve_4.port_a_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), (data->localData[0]->realVars[38] /* $cse113 variable */), (data->localData[0]->realVars[39] /* $cse114 variable */), (data->simulationInfo->realParameter[63] /* checkvalve_4.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 1212
type: SIMPLE_ASSIGN
chwp_4.eff.r_V = 1.733096239753654 * chwp_4.VMachine_flow
*/
void nb_hydr_static_v6_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1212};
  (data->localData[0]->realVars[290] /* chwp_4.eff.r_V variable */) = (1.733096239753654) * ((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */));
  TRACE_POP
}
/*
equation index: 1213
type: SIMPLE_ASSIGN
chwp_4.etaMot = chwp_4.heaDis.WHyd / smooth(1, if noEvent(-1e-05 + chwp_4.P > 1e-06) then chwp_4.P else if noEvent(-1e-05 + chwp_4.P < -1e-06) then 1e-05 else 0.25 * (-10.0 + 1000000.0 * chwp_4.P) * ((-10.0 + 1000000.0 * chwp_4.P) ^ 2.0 - 3.0) * (1e-05 - chwp_4.P) + 0.5 * chwp_4.P + 5e-06)
*/
void nb_hydr_static_v6_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1213};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  modelica_real tmp95;
  modelica_boolean tmp96;
  modelica_real tmp97;
  modelica_boolean tmp98;
  modelica_real tmp99;
  tmp93 = Greater(-1e-05 + (data->localData[0]->realVars[284] /* chwp_4.P variable */),1e-06);
  tmp98 = (modelica_boolean)tmp93;
  if(tmp98)
  {
    tmp99 = (data->localData[0]->realVars[284] /* chwp_4.P variable */);
  }
  else
  {
    tmp94 = Less(-1e-05 + (data->localData[0]->realVars[284] /* chwp_4.P variable */),-1e-06);
    tmp96 = (modelica_boolean)tmp94;
    if(tmp96)
    {
      tmp97 = 1e-05;
    }
    else
    {
      tmp95 = -10.0 + (1000000.0) * ((data->localData[0]->realVars[284] /* chwp_4.P variable */));
      tmp97 = (0.25) * (((-10.0 + (1000000.0) * ((data->localData[0]->realVars[284] /* chwp_4.P variable */))) * ((tmp95 * tmp95) - 3.0)) * (1e-05 - (data->localData[0]->realVars[284] /* chwp_4.P variable */))) + (0.5) * ((data->localData[0]->realVars[284] /* chwp_4.P variable */)) + 5e-06;
    }
    tmp99 = tmp97;
  }
  (data->localData[0]->realVars[291] /* chwp_4.etaMot variable */) = DIVISION_SIM((data->localData[0]->realVars[295] /* chwp_4.heaDis.WHyd variable */),tmp99,"smooth(1, if noEvent(-1e-05 + chwp_4.P > 1e-06) then chwp_4.P else if noEvent(-1e-05 + chwp_4.P < -1e-06) then 1e-05 else 0.25 * (-10.0 + 1000000.0 * chwp_4.P) * ((-10.0 + 1000000.0 * chwp_4.P) ^ 2.0 - 3.0) * (1e-05 - chwp_4.P) + 0.5 * chwp_4.P + 5e-06)",equationIndexes);
  TRACE_POP
}
/*
equation index: 1214
type: SIMPLE_ASSIGN
checkvalve_3.state_b.T = 273.15 + 0.0002390057361376673 * checkvalve_3.port_a.h_outflow
*/
void nb_hydr_static_v6_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1214};
  (data->localData[0]->realVars[157] /* checkvalve_3.state_b.T variable */) = 273.15 + (0.0002390057361376673) * ((data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */));
  TRACE_POP
}
/*
equation index: 1215
type: SIMPLE_ASSIGN
$cse107 = nb_hydr_static_v6.checkvalve_3.Medium.temperature(nb_hydr_static_v6.checkvalve_3.Medium.ThermodynamicState(checkvalve_3.port_b.p, checkvalve_3.state_b.T))
*/
void nb_hydr_static_v6_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1215};
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp100;
  tmp100._p = (data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */);
  tmp100._T = (data->localData[0]->realVars[157] /* checkvalve_3.state_b.T variable */);
  (data->localData[0]->realVars[31] /* $cse107 variable */) = omc_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData, tmp100);
  TRACE_POP
}
/*
equation index: 1216
type: SIMPLE_ASSIGN
checkvalve_3.port_b_T = Modelica.Fluid.Utilities.regStep(-chiller_3.m_flow, $cse107, $cse108, checkvalve_3.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1216};
  (data->localData[0]->realVars[154] /* checkvalve_3.port_b_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)), (data->localData[0]->realVars[31] /* $cse107 variable */), (data->localData[0]->realVars[32] /* $cse108 variable */), (data->simulationInfo->realParameter[45] /* checkvalve_3.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 1217
type: SIMPLE_ASSIGN
$cse103 = nb_hydr_static_v6.checkvalve_3.Medium.density(nb_hydr_static_v6.checkvalve_3.Medium.ThermodynamicState(checkvalve_3.port_b.p, checkvalve_3.state_b.T))
*/
void nb_hydr_static_v6_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1217};
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp101;
  tmp101._p = (data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */);
  tmp101._T = (data->localData[0]->realVars[157] /* checkvalve_3.state_b.T variable */);
  (data->localData[0]->realVars[26] /* $cse103 variable */) = omc_nb__hydr__static__v6_checkvalve__3_Medium_density(threadData, tmp101);
  TRACE_POP
}
/*
equation index: 1218
type: SIMPLE_ASSIGN
$cse101 = Modelica.Fluid.Utilities.regStep(chiller_3.m_flow, $cse102, $cse103, checkvalve_3.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1218};
  (data->localData[0]->realVars[24] /* $cse101 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), (data->localData[0]->realVars[25] /* $cse102 variable */), (data->localData[0]->realVars[26] /* $cse103 variable */), (data->simulationInfo->realParameter[45] /* checkvalve_3.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 1219
type: SIMPLE_ASSIGN
checkvalve_3.V_flow = chiller_3.m_flow / $cse101
*/
void nb_hydr_static_v6_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1219};
  (data->localData[0]->realVars[146] /* checkvalve_3.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),(data->localData[0]->realVars[24] /* $cse101 variable */),"$cse101",equationIndexes);
  TRACE_POP
}
/*
equation index: 1220
type: ALGORITHM

  $cse106 := nb_hydr_static_v6.checkvalve_3.Medium.setState_phX(checkvalve_3.port_a.p, checkvalve_3.port_a.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1220};
  base_array_t tmp102;
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp103;
  simple_alloc_1d_base_array(&tmp102, 0, NULL);
  tmp103 = omc_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX(threadData, (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */), (data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */), tmp102);
  (data->localData[0]->realVars[30] /* $cse106.p variable */) = tmp103._p;
  (data->localData[0]->realVars[29] /* $cse106.T variable */) = tmp103._T;
  ;
  TRACE_POP
}
/*
equation index: 1221
type: SIMPLE_ASSIGN
$cse105 = nb_hydr_static_v6.checkvalve_3.Medium.temperature($cse106)
*/
void nb_hydr_static_v6_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1221};
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp104;
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_wrap_vars(threadData,tmp104, (data->localData[0]->realVars[30] /* $cse106.p variable */), (data->localData[0]->realVars[29] /* $cse106.T variable */));
  (data->localData[0]->realVars[28] /* $cse105 variable */) = omc_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData, tmp104);
  TRACE_POP
}
/*
equation index: 1222
type: SIMPLE_ASSIGN
checkvalve_3.port_a_T = Modelica.Fluid.Utilities.regStep(chiller_3.m_flow, $cse104, $cse105, checkvalve_3.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1222};
  (data->localData[0]->realVars[151] /* checkvalve_3.port_a_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), (data->localData[0]->realVars[27] /* $cse104 variable */), (data->localData[0]->realVars[28] /* $cse105 variable */), (data->simulationInfo->realParameter[45] /* checkvalve_3.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 1223
type: ALGORITHM

  $cse76 := nb_hydr_static_v6.chwp_3.preSou.Medium.setState_phX(checkvalve_3.port_a.p, checkvalve_3.port_a.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1223};
  base_array_t tmp105;
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState tmp106;
  simple_alloc_1d_base_array(&tmp105, 0, NULL);
  tmp106 = omc_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */), (data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */), tmp105);
  (data->localData[0]->realVars[92] /* $cse76.p variable */) = tmp106._p;
  (data->localData[0]->realVars[91] /* $cse76.T variable */) = tmp106._T;
  ;
  TRACE_POP
}
/*
equation index: 1224
type: SIMPLE_ASSIGN
$cse75 = nb_hydr_static_v6.chwp_3.preSou.Medium.density($cse76)
*/
void nb_hydr_static_v6_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1224};
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState tmp107;
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_wrap_vars(threadData,tmp107, (data->localData[0]->realVars[92] /* $cse76.p variable */), (data->localData[0]->realVars[91] /* $cse76.T variable */));
  (data->localData[0]->realVars[90] /* $cse75 variable */) = omc_nb__hydr__static__v6_chwp__3_preSou_Medium_density(threadData, tmp107);
  TRACE_POP
}
/*
equation index: 1225
type: SIMPLE_ASSIGN
$cse72 = Modelica.Fluid.Utilities.regStep(chiller_3.m_flow, $cse73, $cse75, 0.0574453122)
*/
void nb_hydr_static_v6_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1225};
  (data->localData[0]->realVars[86] /* $cse72 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), (data->localData[0]->realVars[87] /* $cse73 variable */), (data->localData[0]->realVars[90] /* $cse75 variable */), 0.0574453122);
  TRACE_POP
}
/*
equation index: 1226
type: SIMPLE_ASSIGN
chwp_3.preSou.V_flow = chiller_3.m_flow / $cse72
*/
void nb_hydr_static_v6_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1226};
  (data->localData[0]->realVars[270] /* chwp_3.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),(data->localData[0]->realVars[86] /* $cse72 variable */),"$cse72",equationIndexes);
  TRACE_POP
}
/*
equation index: 1227
type: SIMPLE_ASSIGN
chwp_4.vol.hOut_internal = smooth(1, if noEvent(chiller_4.m_flow > 5.74453122e-05) then checkvalve_4.port_b.h_outflow else if noEvent(chiller_4.m_flow < -5.74453122e-05) then chwp_4.port_a.h_outflow else 0.25 * (1000000.0 * (chiller_4.m_flow / 0.0574453122) ^ 2.0 - 3.0) * 1000.0 * chiller_4.m_flow / 0.0574453122 * (chwp_4.port_a.h_outflow - checkvalve_4.port_b.h_outflow) + 0.5 * (checkvalve_4.port_b.h_outflow + chwp_4.port_a.h_outflow))
*/
void nb_hydr_static_v6_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1227};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  modelica_real tmp110;
  modelica_boolean tmp111;
  modelica_real tmp112;
  modelica_boolean tmp113;
  modelica_real tmp114;
  tmp108 = Greater((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),5.74453122e-05);
  tmp113 = (modelica_boolean)tmp108;
  if(tmp113)
  {
    tmp114 = (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */);
  }
  else
  {
    tmp109 = Less((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),-5.74453122e-05);
    tmp111 = (modelica_boolean)tmp109;
    if(tmp111)
    {
      tmp112 = (data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */);
    }
    else
    {
      tmp110 = DIVISION_SIM((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),0.0574453122,"0.0574453122",equationIndexes);
      tmp112 = (0.25) * ((DIVISION_SIM(((1000000.0) * ((tmp110 * tmp110)) - 3.0) * ((1000.0) * ((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */))),0.0574453122,"0.0574453122",equationIndexes)) * ((data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */) - (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */))) + (0.5) * ((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */) + (data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */));
    }
    tmp114 = tmp112;
  }
  (data->localData[0]->realVars[310] /* chwp_4.vol.hOut_internal variable */) = tmp114;
  TRACE_POP
}
/*
equation index: 1228
type: SIMPLE_ASSIGN
chwp_4.heatPort.T = nb_hydr_static_v6.chwp_4.vol.Medium.temperature_phX(ret_p.k, chwp_4.vol.hOut_internal, {1.0})
*/
void nb_hydr_static_v6_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1228};
  (data->localData[0]->realVars[297] /* chwp_4.heatPort.T variable */) = omc_nb__hydr__static__v6_chwp__4_vol_Medium_temperature__phX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->localData[0]->realVars[310] /* chwp_4.vol.hOut_internal variable */), _OMC_LIT42);
  TRACE_POP
}
/*
equation index: 1229
type: ALGORITHM

  $cse118 := nb_hydr_static_v6.checkvalve_4.Medium.setState_phX(checkvalve_4.port_b.p, checkvalve_4.port_b.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1229};
  base_array_t tmp115;
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp116;
  simple_alloc_1d_base_array(&tmp115, 0, NULL);
  tmp116 = omc_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX(threadData, (data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */), (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */), tmp115);
  (data->localData[0]->realVars[45] /* $cse118.p variable */) = tmp116._p;
  (data->localData[0]->realVars[44] /* $cse118.T variable */) = tmp116._T;
  ;
  TRACE_POP
}
/*
equation index: 1230
type: SIMPLE_ASSIGN
$cse117 = nb_hydr_static_v6.checkvalve_4.Medium.temperature($cse118)
*/
void nb_hydr_static_v6_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1230};
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp117;
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_wrap_vars(threadData,tmp117, (data->localData[0]->realVars[45] /* $cse118.p variable */), (data->localData[0]->realVars[44] /* $cse118.T variable */));
  (data->localData[0]->realVars[43] /* $cse117 variable */) = omc_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData, tmp117);
  TRACE_POP
}
/*
equation index: 1231
type: SIMPLE_ASSIGN
checkvalve_4.port_b_T = Modelica.Fluid.Utilities.regStep(-chiller_4.m_flow, $cse116, $cse117, checkvalve_4.m_flow_small)
*/
void nb_hydr_static_v6_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1231};
  (data->localData[0]->realVars[166] /* checkvalve_4.port_b_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)), (data->localData[0]->realVars[42] /* $cse116 variable */), (data->localData[0]->realVars[43] /* $cse117 variable */), (data->simulationInfo->realParameter[63] /* checkvalve_4.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 1232
type: ALGORITHM

  $cse79 := nb_hydr_static_v6.chwp_4.preSou.Medium.setState_phX(ret_p.k, checkvalve_4.port_b.h_outflow, {});
*/
void nb_hydr_static_v6_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1232};
  base_array_t tmp118;
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState tmp119;
  simple_alloc_1d_base_array(&tmp118, 0, NULL);
  tmp119 = omc_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */), tmp118);
  (data->localData[0]->realVars[96] /* $cse79.p variable */) = tmp119._p;
  (data->localData[0]->realVars[95] /* $cse79.T variable */) = tmp119._T;
  ;
  TRACE_POP
}
/*
equation index: 1233
type: SIMPLE_ASSIGN
$cse78 = nb_hydr_static_v6.chwp_4.preSou.Medium.density($cse79)
*/
void nb_hydr_static_v6_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1233};
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState tmp120;
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_wrap_vars(threadData,tmp120, (data->localData[0]->realVars[96] /* $cse79.p variable */), (data->localData[0]->realVars[95] /* $cse79.T variable */));
  (data->localData[0]->realVars[94] /* $cse78 variable */) = omc_nb__hydr__static__v6_chwp__4_preSou_Medium_density(threadData, tmp120);
  TRACE_POP
}
/*
equation index: 1234
type: SIMPLE_ASSIGN
$cse77 = Modelica.Fluid.Utilities.regStep(chiller_4.m_flow, $cse78, $cse80, 0.0574453122)
*/
void nb_hydr_static_v6_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1234};
  (data->localData[0]->realVars[93] /* $cse77 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), (data->localData[0]->realVars[94] /* $cse78 variable */), (data->localData[0]->realVars[97] /* $cse80 variable */), 0.0574453122);
  TRACE_POP
}
/*
equation index: 1235
type: SIMPLE_ASSIGN
chwp_4.preSou.V_flow = chiller_4.m_flow / $cse77
*/
void nb_hydr_static_v6_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1235};
  (data->localData[0]->realVars[301] /* chwp_4.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),(data->localData[0]->realVars[93] /* $cse77 variable */),"$cse77",equationIndexes);
  TRACE_POP
}
/*
equation index: 1256
type: ALGORITHM

  assert(chwp_1.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1256};
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,22,"u_nominal > 0 required");
  static int tmp123 = 0;
  {
    tmp121 = Greater((data->simulationInfo->realParameter[412] /* chwp_1.filter.u_nominal PARAM */),0.0);
    if(!tmp121)
    {
      {
        const char* assert_cond = "(chwp_1.filter.u_nominal > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp122)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp122)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1255
type: ALGORITHM

  assert(chwp_1.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1255};
  modelica_boolean tmp124;
  static const MMC_DEFSTRINGLIT(tmp125,21,"A_ripple > 0 required");
  static int tmp126 = 0;
  {
    tmp124 = Greater((data->simulationInfo->realParameter[404] /* chwp_1.filter.A_ripple PARAM */),0.0);
    if(!tmp124)
    {
      {
        const char* assert_cond = "(chwp_1.filter.A_ripple > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp125)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp125)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1254
type: ALGORITHM

  assert(chwp_1.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1254};
  modelica_boolean tmp127;
  static const MMC_DEFSTRINGLIT(tmp128,18,"f_cut > 0 required");
  static int tmp129 = 0;
  {
    tmp127 = Greater((data->simulationInfo->realParameter[407] /* chwp_1.filter.f_cut PARAM */),0.0);
    if(!tmp127)
    {
      {
        const char* assert_cond = "(chwp_1.filter.f_cut > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp128)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp128)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1253
type: ALGORITHM

  assert(chwp_2.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1253};
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,22,"u_nominal > 0 required");
  static int tmp132 = 0;
  {
    tmp130 = Greater((data->simulationInfo->realParameter[793] /* chwp_2.filter.u_nominal PARAM */),0.0);
    if(!tmp130)
    {
      {
        const char* assert_cond = "(chwp_2.filter.u_nominal > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp131)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp131)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1252
type: ALGORITHM

  assert(chwp_2.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1252};
  modelica_boolean tmp133;
  static const MMC_DEFSTRINGLIT(tmp134,21,"A_ripple > 0 required");
  static int tmp135 = 0;
  {
    tmp133 = Greater((data->simulationInfo->realParameter[785] /* chwp_2.filter.A_ripple PARAM */),0.0);
    if(!tmp133)
    {
      {
        const char* assert_cond = "(chwp_2.filter.A_ripple > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp134)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp134)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1251
type: ALGORITHM

  assert(chwp_2.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1251};
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,18,"f_cut > 0 required");
  static int tmp138 = 0;
  {
    tmp136 = Greater((data->simulationInfo->realParameter[788] /* chwp_2.filter.f_cut PARAM */),0.0);
    if(!tmp136)
    {
      {
        const char* assert_cond = "(chwp_2.filter.f_cut > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp137)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp137)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1250
type: ALGORITHM

  assert(chwp_3.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1250};
  modelica_boolean tmp139;
  static const MMC_DEFSTRINGLIT(tmp140,22,"u_nominal > 0 required");
  static int tmp141 = 0;
  {
    tmp139 = Greater((data->simulationInfo->realParameter[1176] /* chwp_3.filter.u_nominal PARAM */),0.0);
    if(!tmp139)
    {
      {
        const char* assert_cond = "(chwp_3.filter.u_nominal > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp140)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp140)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1249
type: ALGORITHM

  assert(chwp_3.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1249};
  modelica_boolean tmp142;
  static const MMC_DEFSTRINGLIT(tmp143,21,"A_ripple > 0 required");
  static int tmp144 = 0;
  {
    tmp142 = Greater((data->simulationInfo->realParameter[1168] /* chwp_3.filter.A_ripple PARAM */),0.0);
    if(!tmp142)
    {
      {
        const char* assert_cond = "(chwp_3.filter.A_ripple > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp143)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp143)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1248
type: ALGORITHM

  assert(chwp_3.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1248};
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,18,"f_cut > 0 required");
  static int tmp147 = 0;
  {
    tmp145 = Greater((data->simulationInfo->realParameter[1171] /* chwp_3.filter.f_cut PARAM */),0.0);
    if(!tmp145)
    {
      {
        const char* assert_cond = "(chwp_3.filter.f_cut > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp146)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp146)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1247
type: ALGORITHM

  assert(chwp_4.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1247};
  modelica_boolean tmp148;
  static const MMC_DEFSTRINGLIT(tmp149,22,"u_nominal > 0 required");
  static int tmp150 = 0;
  {
    tmp148 = Greater((data->simulationInfo->realParameter[1559] /* chwp_4.filter.u_nominal PARAM */),0.0);
    if(!tmp148)
    {
      {
        const char* assert_cond = "(chwp_4.filter.u_nominal > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp149)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp149)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1246
type: ALGORITHM

  assert(chwp_4.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1246};
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,21,"A_ripple > 0 required");
  static int tmp153 = 0;
  {
    tmp151 = Greater((data->simulationInfo->realParameter[1551] /* chwp_4.filter.A_ripple PARAM */),0.0);
    if(!tmp151)
    {
      {
        const char* assert_cond = "(chwp_4.filter.A_ripple > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp152)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1932,6,1932,51,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp152)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1245
type: ALGORITHM

  assert(chwp_4.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1245};
  modelica_boolean tmp154;
  static const MMC_DEFSTRINGLIT(tmp155,18,"f_cut > 0 required");
  static int tmp156 = 0;
  {
    tmp154 = Greater((data->simulationInfo->realParameter[1554] /* chwp_4.filter.f_cut PARAM */),0.0);
    if(!tmp154)
    {
      {
        const char* assert_cond = "(chwp_4.filter.f_cut > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp155)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp155)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1244
type: ALGORITHM

  assert(terminal_resist.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1244};
  modelica_boolean tmp157;
  static const MMC_DEFSTRINGLIT(tmp158,22,"u_nominal > 0 required");
  static int tmp159 = 0;
  {
    tmp157 = Greater((data->simulationInfo->realParameter[1773] /* terminal_resist.filter.u_nominal PARAM */),0.0);
    if(!tmp157)
    {
      {
        const char* assert_cond = "(terminal_resist.filter.u_nominal > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp158)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1928,6,1928,53,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp158)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1243
type: ALGORITHM

  assert(terminal_resist.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1243};
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
equation index: 1242
type: ALGORITHM

  assert(terminal_resist.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void nb_hydr_static_v6_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1242};
  modelica_boolean tmp163;
  static const MMC_DEFSTRINGLIT(tmp164,18,"f_cut > 0 required");
  static int tmp165 = 0;
  {
    tmp163 = Greater((data->simulationInfo->realParameter[1768] /* terminal_resist.filter.f_cut PARAM */),0.0);
    if(!tmp163)
    {
      {
        const char* assert_cond = "(terminal_resist.filter.f_cut > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp164)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",1933,6,1933,45,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp164)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1241
type: ALGORITHM

  assert(ret_p.k > 10000.0, "In nb_hydr_static_v6.chw_ret: The value of p_in=" + String(ret_p.k, 6, 0, true) + " is low for water. This is likely an error.");
*/
void nb_hydr_static_v6_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1241};
  modelica_boolean tmp166;
  static const MMC_DEFSTRINGLIT(tmp167,48,"In nb_hydr_static_v6.chw_ret: The value of p_in=");
  modelica_string tmp168;
  modelica_metatype tmpMeta169;
  static const MMC_DEFSTRINGLIT(tmp170,43," is low for water. This is likely an error.");
  modelica_metatype tmpMeta171;
  static int tmp172 = 0;
  {
    tmp166 = Greater((data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */),10000.0);
    if(!tmp166)
    {
      tmp168 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta169 = stringAppend(MMC_REFSTRINGLIT(tmp167),tmp168);
      tmpMeta171 = stringAppend(tmpMeta169,MMC_REFSTRINGLIT(tmp170));
      {
        const char* assert_cond = "(ret_p.k > 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Sources/Boundary_pT.mo",57,7,58,100,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta171));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Sources/Boundary_pT.mo",57,7,58,100,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta171));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1240
type: ALGORITHM

  assert(noEvent(abs(chwp_1.prePow.Q_flow) < 836800.0 * max(5.74453122e-05, abs(chiller_1.m_flow))), "In nb_hydr_static_v6.chwp_1.vol.steBal:
   The heat flow rate equals " + String(chwp_1.prePow.Q_flow, 6, 0, true) + " W and the mass flow rate equals " + String(chiller_1.m_flow, 6, 0, true) + " kg/s,
   which results in a temperature difference " + String(abs(chwp_1.prePow.Q_flow) / (4184.0 * max(5.74453122e-05, abs(chiller_1.m_flow))), 6, 0, true) + " K > dTMax=" + String(200.0, 6, 0, true) + " K.
   This may indicate that energy is not conserved for small mass flow rates.
   The implementation may require prescribedHeatFlowRate = false.");
*/
void nb_hydr_static_v6_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1240};
  modelica_boolean tmp173;
  static const MMC_DEFSTRINGLIT(tmp174,69,"In nb_hydr_static_v6.chwp_1.vol.steBal:\n   The heat flow rate equals ");
  modelica_string tmp175;
  modelica_metatype tmpMeta176;
  static const MMC_DEFSTRINGLIT(tmp177,33," W and the mass flow rate equals ");
  modelica_metatype tmpMeta178;
  modelica_string tmp179;
  modelica_metatype tmpMeta180;
  static const MMC_DEFSTRINGLIT(tmp181,52," kg/s,\n   which results in a temperature difference ");
  modelica_metatype tmpMeta182;
  modelica_string tmp183;
  modelica_metatype tmpMeta184;
  static const MMC_DEFSTRINGLIT(tmp185,11," K > dTMax=");
  modelica_metatype tmpMeta186;
  modelica_string tmp187;
  modelica_metatype tmpMeta188;
  static const MMC_DEFSTRINGLIT(tmp189,146," K.\n   This may indicate that energy is not conserved for small mass flow rates.\n   The implementation may require prescribedHeatFlowRate = false.");
  modelica_metatype tmpMeta190;
  static int tmp191 = 0;
  {
    tmp173 = Less(fabs((data->localData[0]->realVars[207] /* chwp_1.prePow.Q_flow variable */)),(836800.0) * (fmax(5.74453122e-05,fabs((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)))));
    if(!tmp173)
    {
      tmp175 = modelica_real_to_modelica_string((data->localData[0]->realVars[207] /* chwp_1.prePow.Q_flow variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta176 = stringAppend(MMC_REFSTRINGLIT(tmp174),tmp175);
      tmpMeta178 = stringAppend(tmpMeta176,MMC_REFSTRINGLIT(tmp177));
      tmp179 = modelica_real_to_modelica_string((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta180 = stringAppend(tmpMeta178,tmp179);
      tmpMeta182 = stringAppend(tmpMeta180,MMC_REFSTRINGLIT(tmp181));
      tmp183 = modelica_real_to_modelica_string(DIVISION_SIM(fabs((data->localData[0]->realVars[207] /* chwp_1.prePow.Q_flow variable */)),(4184.0) * (fmax(5.74453122e-05,fabs((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)))),"4184.0 * max(5.74453122e-05, abs(chiller_1.m_flow))",equationIndexes), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta184 = stringAppend(tmpMeta182,tmp183);
      tmpMeta186 = stringAppend(tmpMeta184,MMC_REFSTRINGLIT(tmp185));
      tmp187 = modelica_real_to_modelica_string(200.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta188 = stringAppend(tmpMeta186,tmp187);
      tmpMeta190 = stringAppend(tmpMeta188,MMC_REFSTRINGLIT(tmp189));
      {
        const char* assert_cond = "(noEvent(abs(chwp_1.prePow.Q_flow) < 836800.0 * max(5.74453122e-05, abs(chiller_1.m_flow))))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",144,5,152,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta190));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",144,5,152,68,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta190));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1239
type: ALGORITHM

  assert(noEvent(abs(chwp_2.prePow.Q_flow) < 836800.0 * max(5.74453122e-05, abs(chiller_2.m_flow))), "In nb_hydr_static_v6.chwp_2.vol.steBal:
   The heat flow rate equals " + String(chwp_2.prePow.Q_flow, 6, 0, true) + " W and the mass flow rate equals " + String(chiller_2.m_flow, 6, 0, true) + " kg/s,
   which results in a temperature difference " + String(abs(chwp_2.prePow.Q_flow) / (4184.0 * max(5.74453122e-05, abs(chiller_2.m_flow))), 6, 0, true) + " K > dTMax=" + String(200.0, 6, 0, true) + " K.
   This may indicate that energy is not conserved for small mass flow rates.
   The implementation may require prescribedHeatFlowRate = false.");
*/
void nb_hydr_static_v6_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1239};
  modelica_boolean tmp192;
  static const MMC_DEFSTRINGLIT(tmp193,69,"In nb_hydr_static_v6.chwp_2.vol.steBal:\n   The heat flow rate equals ");
  modelica_string tmp194;
  modelica_metatype tmpMeta195;
  static const MMC_DEFSTRINGLIT(tmp196,33," W and the mass flow rate equals ");
  modelica_metatype tmpMeta197;
  modelica_string tmp198;
  modelica_metatype tmpMeta199;
  static const MMC_DEFSTRINGLIT(tmp200,52," kg/s,\n   which results in a temperature difference ");
  modelica_metatype tmpMeta201;
  modelica_string tmp202;
  modelica_metatype tmpMeta203;
  static const MMC_DEFSTRINGLIT(tmp204,11," K > dTMax=");
  modelica_metatype tmpMeta205;
  modelica_string tmp206;
  modelica_metatype tmpMeta207;
  static const MMC_DEFSTRINGLIT(tmp208,146," K.\n   This may indicate that energy is not conserved for small mass flow rates.\n   The implementation may require prescribedHeatFlowRate = false.");
  modelica_metatype tmpMeta209;
  static int tmp210 = 0;
  {
    tmp192 = Less(fabs((data->localData[0]->realVars[238] /* chwp_2.prePow.Q_flow variable */)),(836800.0) * (fmax(5.74453122e-05,fabs((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)))));
    if(!tmp192)
    {
      tmp194 = modelica_real_to_modelica_string((data->localData[0]->realVars[238] /* chwp_2.prePow.Q_flow variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta195 = stringAppend(MMC_REFSTRINGLIT(tmp193),tmp194);
      tmpMeta197 = stringAppend(tmpMeta195,MMC_REFSTRINGLIT(tmp196));
      tmp198 = modelica_real_to_modelica_string((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta199 = stringAppend(tmpMeta197,tmp198);
      tmpMeta201 = stringAppend(tmpMeta199,MMC_REFSTRINGLIT(tmp200));
      tmp202 = modelica_real_to_modelica_string(DIVISION_SIM(fabs((data->localData[0]->realVars[238] /* chwp_2.prePow.Q_flow variable */)),(4184.0) * (fmax(5.74453122e-05,fabs((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)))),"4184.0 * max(5.74453122e-05, abs(chiller_2.m_flow))",equationIndexes), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta203 = stringAppend(tmpMeta201,tmp202);
      tmpMeta205 = stringAppend(tmpMeta203,MMC_REFSTRINGLIT(tmp204));
      tmp206 = modelica_real_to_modelica_string(200.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta207 = stringAppend(tmpMeta205,tmp206);
      tmpMeta209 = stringAppend(tmpMeta207,MMC_REFSTRINGLIT(tmp208));
      {
        const char* assert_cond = "(noEvent(abs(chwp_2.prePow.Q_flow) < 836800.0 * max(5.74453122e-05, abs(chiller_2.m_flow))))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",144,5,152,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta209));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",144,5,152,68,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta209));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1238
type: ALGORITHM

  assert(noEvent(abs(chwp_3.prePow.Q_flow) < 836800.0 * max(5.74453122e-05, abs(chiller_3.m_flow))), "In nb_hydr_static_v6.chwp_3.vol.steBal:
   The heat flow rate equals " + String(chwp_3.prePow.Q_flow, 6, 0, true) + " W and the mass flow rate equals " + String(chiller_3.m_flow, 6, 0, true) + " kg/s,
   which results in a temperature difference " + String(abs(chwp_3.prePow.Q_flow) / (4184.0 * max(5.74453122e-05, abs(chiller_3.m_flow))), 6, 0, true) + " K > dTMax=" + String(200.0, 6, 0, true) + " K.
   This may indicate that energy is not conserved for small mass flow rates.
   The implementation may require prescribedHeatFlowRate = false.");
*/
void nb_hydr_static_v6_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1238};
  modelica_boolean tmp211;
  static const MMC_DEFSTRINGLIT(tmp212,69,"In nb_hydr_static_v6.chwp_3.vol.steBal:\n   The heat flow rate equals ");
  modelica_string tmp213;
  modelica_metatype tmpMeta214;
  static const MMC_DEFSTRINGLIT(tmp215,33," W and the mass flow rate equals ");
  modelica_metatype tmpMeta216;
  modelica_string tmp217;
  modelica_metatype tmpMeta218;
  static const MMC_DEFSTRINGLIT(tmp219,52," kg/s,\n   which results in a temperature difference ");
  modelica_metatype tmpMeta220;
  modelica_string tmp221;
  modelica_metatype tmpMeta222;
  static const MMC_DEFSTRINGLIT(tmp223,11," K > dTMax=");
  modelica_metatype tmpMeta224;
  modelica_string tmp225;
  modelica_metatype tmpMeta226;
  static const MMC_DEFSTRINGLIT(tmp227,146," K.\n   This may indicate that energy is not conserved for small mass flow rates.\n   The implementation may require prescribedHeatFlowRate = false.");
  modelica_metatype tmpMeta228;
  static int tmp229 = 0;
  {
    tmp211 = Less(fabs((data->localData[0]->realVars[269] /* chwp_3.prePow.Q_flow variable */)),(836800.0) * (fmax(5.74453122e-05,fabs((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)))));
    if(!tmp211)
    {
      tmp213 = modelica_real_to_modelica_string((data->localData[0]->realVars[269] /* chwp_3.prePow.Q_flow variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta214 = stringAppend(MMC_REFSTRINGLIT(tmp212),tmp213);
      tmpMeta216 = stringAppend(tmpMeta214,MMC_REFSTRINGLIT(tmp215));
      tmp217 = modelica_real_to_modelica_string((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta218 = stringAppend(tmpMeta216,tmp217);
      tmpMeta220 = stringAppend(tmpMeta218,MMC_REFSTRINGLIT(tmp219));
      tmp221 = modelica_real_to_modelica_string(DIVISION_SIM(fabs((data->localData[0]->realVars[269] /* chwp_3.prePow.Q_flow variable */)),(4184.0) * (fmax(5.74453122e-05,fabs((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)))),"4184.0 * max(5.74453122e-05, abs(chiller_3.m_flow))",equationIndexes), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta222 = stringAppend(tmpMeta220,tmp221);
      tmpMeta224 = stringAppend(tmpMeta222,MMC_REFSTRINGLIT(tmp223));
      tmp225 = modelica_real_to_modelica_string(200.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta226 = stringAppend(tmpMeta224,tmp225);
      tmpMeta228 = stringAppend(tmpMeta226,MMC_REFSTRINGLIT(tmp227));
      {
        const char* assert_cond = "(noEvent(abs(chwp_3.prePow.Q_flow) < 836800.0 * max(5.74453122e-05, abs(chiller_3.m_flow))))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",144,5,152,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta228));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",144,5,152,68,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta228));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1237
type: ALGORITHM

  assert(noEvent(abs(chwp_4.prePow.Q_flow) < 836800.0 * max(5.74453122e-05, abs(chiller_4.m_flow))), "In nb_hydr_static_v6.chwp_4.vol.steBal:
   The heat flow rate equals " + String(chwp_4.prePow.Q_flow, 6, 0, true) + " W and the mass flow rate equals " + String(chiller_4.m_flow, 6, 0, true) + " kg/s,
   which results in a temperature difference " + String(abs(chwp_4.prePow.Q_flow) / (4184.0 * max(5.74453122e-05, abs(chiller_4.m_flow))), 6, 0, true) + " K > dTMax=" + String(200.0, 6, 0, true) + " K.
   This may indicate that energy is not conserved for small mass flow rates.
   The implementation may require prescribedHeatFlowRate = false.");
*/
void nb_hydr_static_v6_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1237};
  modelica_boolean tmp230;
  static const MMC_DEFSTRINGLIT(tmp231,69,"In nb_hydr_static_v6.chwp_4.vol.steBal:\n   The heat flow rate equals ");
  modelica_string tmp232;
  modelica_metatype tmpMeta233;
  static const MMC_DEFSTRINGLIT(tmp234,33," W and the mass flow rate equals ");
  modelica_metatype tmpMeta235;
  modelica_string tmp236;
  modelica_metatype tmpMeta237;
  static const MMC_DEFSTRINGLIT(tmp238,52," kg/s,\n   which results in a temperature difference ");
  modelica_metatype tmpMeta239;
  modelica_string tmp240;
  modelica_metatype tmpMeta241;
  static const MMC_DEFSTRINGLIT(tmp242,11," K > dTMax=");
  modelica_metatype tmpMeta243;
  modelica_string tmp244;
  modelica_metatype tmpMeta245;
  static const MMC_DEFSTRINGLIT(tmp246,146," K.\n   This may indicate that energy is not conserved for small mass flow rates.\n   The implementation may require prescribedHeatFlowRate = false.");
  modelica_metatype tmpMeta247;
  static int tmp248 = 0;
  {
    tmp230 = Less(fabs((data->localData[0]->realVars[300] /* chwp_4.prePow.Q_flow variable */)),(836800.0) * (fmax(5.74453122e-05,fabs((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)))));
    if(!tmp230)
    {
      tmp232 = modelica_real_to_modelica_string((data->localData[0]->realVars[300] /* chwp_4.prePow.Q_flow variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta233 = stringAppend(MMC_REFSTRINGLIT(tmp231),tmp232);
      tmpMeta235 = stringAppend(tmpMeta233,MMC_REFSTRINGLIT(tmp234));
      tmp236 = modelica_real_to_modelica_string((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta237 = stringAppend(tmpMeta235,tmp236);
      tmpMeta239 = stringAppend(tmpMeta237,MMC_REFSTRINGLIT(tmp238));
      tmp240 = modelica_real_to_modelica_string(DIVISION_SIM(fabs((data->localData[0]->realVars[300] /* chwp_4.prePow.Q_flow variable */)),(4184.0) * (fmax(5.74453122e-05,fabs((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)))),"4184.0 * max(5.74453122e-05, abs(chiller_4.m_flow))",equationIndexes), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta241 = stringAppend(tmpMeta239,tmp240);
      tmpMeta243 = stringAppend(tmpMeta241,MMC_REFSTRINGLIT(tmp242));
      tmp244 = modelica_real_to_modelica_string(200.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta245 = stringAppend(tmpMeta243,tmp244);
      tmpMeta247 = stringAppend(tmpMeta245,MMC_REFSTRINGLIT(tmp246));
      {
        const char* assert_cond = "(noEvent(abs(chwp_4.prePow.Q_flow) < 836800.0 * max(5.74453122e-05, abs(chiller_4.m_flow))))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",144,5,152,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta247));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",144,5,152,68,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta247));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1236
type: ALGORITHM

  assert(ret_p.k > 10000.0, "In nb_hydr_static_v6.chw_sup: The value of p_in=" + String(ret_p.k, 6, 0, true) + " is low for water. This is likely an error.");
*/
void nb_hydr_static_v6_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1236};
  modelica_boolean tmp249;
  static const MMC_DEFSTRINGLIT(tmp250,48,"In nb_hydr_static_v6.chw_sup: The value of p_in=");
  modelica_string tmp251;
  modelica_metatype tmpMeta252;
  static const MMC_DEFSTRINGLIT(tmp253,43," is low for water. This is likely an error.");
  modelica_metatype tmpMeta254;
  static int tmp255 = 0;
  {
    tmp249 = Greater((data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */),10000.0);
    if(!tmp249)
    {
      tmp251 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta252 = stringAppend(MMC_REFSTRINGLIT(tmp250),tmp251);
      tmpMeta254 = stringAppend(tmpMeta252,MMC_REFSTRINGLIT(tmp253));
      {
        const char* assert_cond = "(ret_p.k > 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Sources/Boundary_pT.mo",57,7,58,100,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta254));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Sources/Boundary_pT.mo",57,7,58,100,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta254));
        }
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int nb_hydr_static_v6_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  nb_hydr_static_v6_functionLocalKnownVars(data, threadData);
  nb_hydr_static_v6_eqFunction_985(data, threadData);

  nb_hydr_static_v6_eqFunction_986(data, threadData);

  nb_hydr_static_v6_eqFunction_987(data, threadData);

  nb_hydr_static_v6_eqFunction_988(data, threadData);

  nb_hydr_static_v6_eqFunction_989(data, threadData);

  nb_hydr_static_v6_eqFunction_990(data, threadData);

  nb_hydr_static_v6_eqFunction_991(data, threadData);

  nb_hydr_static_v6_eqFunction_992(data, threadData);

  nb_hydr_static_v6_eqFunction_993(data, threadData);

  nb_hydr_static_v6_eqFunction_994(data, threadData);

  nb_hydr_static_v6_eqFunction_995(data, threadData);

  nb_hydr_static_v6_eqFunction_996(data, threadData);

  nb_hydr_static_v6_eqFunction_997(data, threadData);

  nb_hydr_static_v6_eqFunction_998(data, threadData);

  nb_hydr_static_v6_eqFunction_999(data, threadData);

  nb_hydr_static_v6_eqFunction_1000(data, threadData);

  nb_hydr_static_v6_eqFunction_1001(data, threadData);

  nb_hydr_static_v6_eqFunction_1002(data, threadData);

  nb_hydr_static_v6_eqFunction_1003(data, threadData);

  nb_hydr_static_v6_eqFunction_1004(data, threadData);

  nb_hydr_static_v6_eqFunction_1005(data, threadData);

  nb_hydr_static_v6_eqFunction_1006(data, threadData);

  nb_hydr_static_v6_eqFunction_1007(data, threadData);

  nb_hydr_static_v6_eqFunction_1008(data, threadData);

  nb_hydr_static_v6_eqFunction_1123(data, threadData);

  nb_hydr_static_v6_eqFunction_1124(data, threadData);

  nb_hydr_static_v6_eqFunction_1125(data, threadData);

  nb_hydr_static_v6_eqFunction_1126(data, threadData);

  nb_hydr_static_v6_eqFunction_1127(data, threadData);

  nb_hydr_static_v6_eqFunction_1128(data, threadData);

  nb_hydr_static_v6_eqFunction_1129(data, threadData);

  nb_hydr_static_v6_eqFunction_1130(data, threadData);

  nb_hydr_static_v6_eqFunction_1131(data, threadData);

  nb_hydr_static_v6_eqFunction_1132(data, threadData);

  nb_hydr_static_v6_eqFunction_1133(data, threadData);

  nb_hydr_static_v6_eqFunction_1134(data, threadData);

  nb_hydr_static_v6_eqFunction_1135(data, threadData);

  nb_hydr_static_v6_eqFunction_1136(data, threadData);

  nb_hydr_static_v6_eqFunction_1137(data, threadData);

  nb_hydr_static_v6_eqFunction_1138(data, threadData);

  nb_hydr_static_v6_eqFunction_1139(data, threadData);

  nb_hydr_static_v6_eqFunction_1140(data, threadData);

  nb_hydr_static_v6_eqFunction_1141(data, threadData);

  nb_hydr_static_v6_eqFunction_1142(data, threadData);

  nb_hydr_static_v6_eqFunction_1143(data, threadData);

  nb_hydr_static_v6_eqFunction_1144(data, threadData);

  nb_hydr_static_v6_eqFunction_1145(data, threadData);

  nb_hydr_static_v6_eqFunction_1146(data, threadData);

  nb_hydr_static_v6_eqFunction_1147(data, threadData);

  nb_hydr_static_v6_eqFunction_1148(data, threadData);

  nb_hydr_static_v6_eqFunction_1149(data, threadData);

  nb_hydr_static_v6_eqFunction_1150(data, threadData);

  nb_hydr_static_v6_eqFunction_1151(data, threadData);

  nb_hydr_static_v6_eqFunction_1152(data, threadData);

  nb_hydr_static_v6_eqFunction_1153(data, threadData);

  nb_hydr_static_v6_eqFunction_1154(data, threadData);

  nb_hydr_static_v6_eqFunction_1155(data, threadData);

  nb_hydr_static_v6_eqFunction_1156(data, threadData);

  nb_hydr_static_v6_eqFunction_1157(data, threadData);

  nb_hydr_static_v6_eqFunction_1158(data, threadData);

  nb_hydr_static_v6_eqFunction_1159(data, threadData);

  nb_hydr_static_v6_eqFunction_1160(data, threadData);

  nb_hydr_static_v6_eqFunction_1161(data, threadData);

  nb_hydr_static_v6_eqFunction_1162(data, threadData);

  nb_hydr_static_v6_eqFunction_1163(data, threadData);

  nb_hydr_static_v6_eqFunction_1164(data, threadData);

  nb_hydr_static_v6_eqFunction_1165(data, threadData);

  nb_hydr_static_v6_eqFunction_1166(data, threadData);

  nb_hydr_static_v6_eqFunction_1167(data, threadData);

  nb_hydr_static_v6_eqFunction_1168(data, threadData);

  nb_hydr_static_v6_eqFunction_1169(data, threadData);

  nb_hydr_static_v6_eqFunction_1170(data, threadData);

  nb_hydr_static_v6_eqFunction_1171(data, threadData);

  nb_hydr_static_v6_eqFunction_1172(data, threadData);

  nb_hydr_static_v6_eqFunction_1173(data, threadData);

  nb_hydr_static_v6_eqFunction_1174(data, threadData);

  nb_hydr_static_v6_eqFunction_1175(data, threadData);

  nb_hydr_static_v6_eqFunction_1176(data, threadData);

  nb_hydr_static_v6_eqFunction_1177(data, threadData);

  nb_hydr_static_v6_eqFunction_1178(data, threadData);

  nb_hydr_static_v6_eqFunction_1179(data, threadData);

  nb_hydr_static_v6_eqFunction_1180(data, threadData);

  nb_hydr_static_v6_eqFunction_1181(data, threadData);

  nb_hydr_static_v6_eqFunction_1182(data, threadData);

  nb_hydr_static_v6_eqFunction_1183(data, threadData);

  nb_hydr_static_v6_eqFunction_1184(data, threadData);

  nb_hydr_static_v6_eqFunction_1185(data, threadData);

  nb_hydr_static_v6_eqFunction_1186(data, threadData);

  nb_hydr_static_v6_eqFunction_1187(data, threadData);

  nb_hydr_static_v6_eqFunction_1188(data, threadData);

  nb_hydr_static_v6_eqFunction_1189(data, threadData);

  nb_hydr_static_v6_eqFunction_1190(data, threadData);

  nb_hydr_static_v6_eqFunction_1191(data, threadData);

  nb_hydr_static_v6_eqFunction_1192(data, threadData);

  nb_hydr_static_v6_eqFunction_1193(data, threadData);

  nb_hydr_static_v6_eqFunction_1194(data, threadData);

  nb_hydr_static_v6_eqFunction_1195(data, threadData);

  nb_hydr_static_v6_eqFunction_1196(data, threadData);

  nb_hydr_static_v6_eqFunction_1197(data, threadData);

  nb_hydr_static_v6_eqFunction_1198(data, threadData);

  nb_hydr_static_v6_eqFunction_1199(data, threadData);

  nb_hydr_static_v6_eqFunction_1200(data, threadData);

  nb_hydr_static_v6_eqFunction_1201(data, threadData);

  nb_hydr_static_v6_eqFunction_1202(data, threadData);

  nb_hydr_static_v6_eqFunction_1203(data, threadData);

  nb_hydr_static_v6_eqFunction_1204(data, threadData);

  nb_hydr_static_v6_eqFunction_1205(data, threadData);

  nb_hydr_static_v6_eqFunction_1206(data, threadData);

  nb_hydr_static_v6_eqFunction_1207(data, threadData);

  nb_hydr_static_v6_eqFunction_1208(data, threadData);

  nb_hydr_static_v6_eqFunction_1209(data, threadData);

  nb_hydr_static_v6_eqFunction_1210(data, threadData);

  nb_hydr_static_v6_eqFunction_1211(data, threadData);

  nb_hydr_static_v6_eqFunction_1212(data, threadData);

  nb_hydr_static_v6_eqFunction_1213(data, threadData);

  nb_hydr_static_v6_eqFunction_1214(data, threadData);

  nb_hydr_static_v6_eqFunction_1215(data, threadData);

  nb_hydr_static_v6_eqFunction_1216(data, threadData);

  nb_hydr_static_v6_eqFunction_1217(data, threadData);

  nb_hydr_static_v6_eqFunction_1218(data, threadData);

  nb_hydr_static_v6_eqFunction_1219(data, threadData);

  nb_hydr_static_v6_eqFunction_1220(data, threadData);

  nb_hydr_static_v6_eqFunction_1221(data, threadData);

  nb_hydr_static_v6_eqFunction_1222(data, threadData);

  nb_hydr_static_v6_eqFunction_1223(data, threadData);

  nb_hydr_static_v6_eqFunction_1224(data, threadData);

  nb_hydr_static_v6_eqFunction_1225(data, threadData);

  nb_hydr_static_v6_eqFunction_1226(data, threadData);

  nb_hydr_static_v6_eqFunction_1227(data, threadData);

  nb_hydr_static_v6_eqFunction_1228(data, threadData);

  nb_hydr_static_v6_eqFunction_1229(data, threadData);

  nb_hydr_static_v6_eqFunction_1230(data, threadData);

  nb_hydr_static_v6_eqFunction_1231(data, threadData);

  nb_hydr_static_v6_eqFunction_1232(data, threadData);

  nb_hydr_static_v6_eqFunction_1233(data, threadData);

  nb_hydr_static_v6_eqFunction_1234(data, threadData);

  nb_hydr_static_v6_eqFunction_1235(data, threadData);

  nb_hydr_static_v6_eqFunction_1256(data, threadData);

  nb_hydr_static_v6_eqFunction_1255(data, threadData);

  nb_hydr_static_v6_eqFunction_1254(data, threadData);

  nb_hydr_static_v6_eqFunction_1253(data, threadData);

  nb_hydr_static_v6_eqFunction_1252(data, threadData);

  nb_hydr_static_v6_eqFunction_1251(data, threadData);

  nb_hydr_static_v6_eqFunction_1250(data, threadData);

  nb_hydr_static_v6_eqFunction_1249(data, threadData);

  nb_hydr_static_v6_eqFunction_1248(data, threadData);

  nb_hydr_static_v6_eqFunction_1247(data, threadData);

  nb_hydr_static_v6_eqFunction_1246(data, threadData);

  nb_hydr_static_v6_eqFunction_1245(data, threadData);

  nb_hydr_static_v6_eqFunction_1244(data, threadData);

  nb_hydr_static_v6_eqFunction_1243(data, threadData);

  nb_hydr_static_v6_eqFunction_1242(data, threadData);

  nb_hydr_static_v6_eqFunction_1241(data, threadData);

  nb_hydr_static_v6_eqFunction_1240(data, threadData);

  nb_hydr_static_v6_eqFunction_1239(data, threadData);

  nb_hydr_static_v6_eqFunction_1238(data, threadData);

  nb_hydr_static_v6_eqFunction_1237(data, threadData);

  nb_hydr_static_v6_eqFunction_1236(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int nb_hydr_static_v6_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void nb_hydr_static_v6_eqFunction_987(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_988(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_989(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_990(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_991(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_992(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_993(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_994(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_995(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_996(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_997(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_998(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_999(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1000(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1001(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1002(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1003(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1004(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1005(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1006(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1007(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1008(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1123(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1136(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1137(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1138(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1139(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1140(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1141(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1142(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1143(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1144(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1145(DATA* data, threadData_t *threadData);
extern void nb_hydr_static_v6_eqFunction_1146(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  {
    nb_hydr_static_v6_eqFunction_987(data, threadData);
    threadData->lastEquationSolved = 987;
  }
  {
    nb_hydr_static_v6_eqFunction_988(data, threadData);
    threadData->lastEquationSolved = 988;
  }
  {
    nb_hydr_static_v6_eqFunction_989(data, threadData);
    threadData->lastEquationSolved = 989;
  }
  {
    nb_hydr_static_v6_eqFunction_990(data, threadData);
    threadData->lastEquationSolved = 990;
  }
  {
    nb_hydr_static_v6_eqFunction_991(data, threadData);
    threadData->lastEquationSolved = 991;
  }
  {
    nb_hydr_static_v6_eqFunction_992(data, threadData);
    threadData->lastEquationSolved = 992;
  }
  {
    nb_hydr_static_v6_eqFunction_993(data, threadData);
    threadData->lastEquationSolved = 993;
  }
  {
    nb_hydr_static_v6_eqFunction_994(data, threadData);
    threadData->lastEquationSolved = 994;
  }
  {
    nb_hydr_static_v6_eqFunction_995(data, threadData);
    threadData->lastEquationSolved = 995;
  }
  {
    nb_hydr_static_v6_eqFunction_996(data, threadData);
    threadData->lastEquationSolved = 996;
  }
  {
    nb_hydr_static_v6_eqFunction_997(data, threadData);
    threadData->lastEquationSolved = 997;
  }
  {
    nb_hydr_static_v6_eqFunction_998(data, threadData);
    threadData->lastEquationSolved = 998;
  }
  {
    nb_hydr_static_v6_eqFunction_999(data, threadData);
    threadData->lastEquationSolved = 999;
  }
  {
    nb_hydr_static_v6_eqFunction_1000(data, threadData);
    threadData->lastEquationSolved = 1000;
  }
  {
    nb_hydr_static_v6_eqFunction_1001(data, threadData);
    threadData->lastEquationSolved = 1001;
  }
  {
    nb_hydr_static_v6_eqFunction_1002(data, threadData);
    threadData->lastEquationSolved = 1002;
  }
  {
    nb_hydr_static_v6_eqFunction_1003(data, threadData);
    threadData->lastEquationSolved = 1003;
  }
  {
    nb_hydr_static_v6_eqFunction_1004(data, threadData);
    threadData->lastEquationSolved = 1004;
  }
  {
    nb_hydr_static_v6_eqFunction_1005(data, threadData);
    threadData->lastEquationSolved = 1005;
  }
  {
    nb_hydr_static_v6_eqFunction_1006(data, threadData);
    threadData->lastEquationSolved = 1006;
  }
  {
    nb_hydr_static_v6_eqFunction_1007(data, threadData);
    threadData->lastEquationSolved = 1007;
  }
  {
    nb_hydr_static_v6_eqFunction_1008(data, threadData);
    threadData->lastEquationSolved = 1008;
  }
  {
    nb_hydr_static_v6_eqFunction_1123(data, threadData);
    threadData->lastEquationSolved = 1123;
  }
  {
    nb_hydr_static_v6_eqFunction_1136(data, threadData);
    threadData->lastEquationSolved = 1136;
  }
  {
    nb_hydr_static_v6_eqFunction_1137(data, threadData);
    threadData->lastEquationSolved = 1137;
  }
  {
    nb_hydr_static_v6_eqFunction_1138(data, threadData);
    threadData->lastEquationSolved = 1138;
  }
  {
    nb_hydr_static_v6_eqFunction_1139(data, threadData);
    threadData->lastEquationSolved = 1139;
  }
  {
    nb_hydr_static_v6_eqFunction_1140(data, threadData);
    threadData->lastEquationSolved = 1140;
  }
  {
    nb_hydr_static_v6_eqFunction_1141(data, threadData);
    threadData->lastEquationSolved = 1141;
  }
  {
    nb_hydr_static_v6_eqFunction_1142(data, threadData);
    threadData->lastEquationSolved = 1142;
  }
  {
    nb_hydr_static_v6_eqFunction_1143(data, threadData);
    threadData->lastEquationSolved = 1143;
  }
  {
    nb_hydr_static_v6_eqFunction_1144(data, threadData);
    threadData->lastEquationSolved = 1144;
  }
  {
    nb_hydr_static_v6_eqFunction_1145(data, threadData);
    threadData->lastEquationSolved = 1145;
  }
  {
    nb_hydr_static_v6_eqFunction_1146(data, threadData);
    threadData->lastEquationSolved = 1146;
  }
}

int nb_hydr_static_v6_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  nb_hydr_static_v6_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "nb_hydr_static_v6_12jac.h"
#include "nb_hydr_static_v6_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks nb_hydr_static_v6_callback = {
   NULL,    /* performSimulation */
   NULL,    /* performQSSSimulation */
   NULL,    /* updateContinuousSystem */
   nb_hydr_static_v6_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   nb_hydr_static_v6_initialNonLinearSystem,    /* initialNonLinearSystem */
   nb_hydr_static_v6_initialLinearSystem,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   nb_hydr_static_v6_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   nb_hydr_static_v6_initializeDAEmodeData,
   nb_hydr_static_v6_functionODE,
   nb_hydr_static_v6_functionAlgebraics,
   nb_hydr_static_v6_functionDAE,
   nb_hydr_static_v6_functionLocalKnownVars,
   nb_hydr_static_v6_input_function,
   nb_hydr_static_v6_input_function_init,
   nb_hydr_static_v6_input_function_updateStartValues,
   nb_hydr_static_v6_data_function,
   nb_hydr_static_v6_output_function,
   nb_hydr_static_v6_setc_function,
   nb_hydr_static_v6_setb_function,
   nb_hydr_static_v6_function_storeDelayed,
   nb_hydr_static_v6_function_storeSpatialDistribution,
   nb_hydr_static_v6_function_initSpatialDistribution,
   nb_hydr_static_v6_updateBoundVariableAttributes,
   nb_hydr_static_v6_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   nb_hydr_static_v6_functionInitialEquations_lambda0,
   nb_hydr_static_v6_functionRemovedInitialEquations,
   nb_hydr_static_v6_updateBoundParameters,
   nb_hydr_static_v6_checkForAsserts,
   nb_hydr_static_v6_function_ZeroCrossingsEquations,
   nb_hydr_static_v6_function_ZeroCrossings,
   nb_hydr_static_v6_function_updateRelations,
   nb_hydr_static_v6_zeroCrossingDescription,
   nb_hydr_static_v6_relationDescription,
   nb_hydr_static_v6_function_initSample,
   nb_hydr_static_v6_INDEX_JAC_A,
   nb_hydr_static_v6_INDEX_JAC_B,
   nb_hydr_static_v6_INDEX_JAC_C,
   nb_hydr_static_v6_INDEX_JAC_D,
   nb_hydr_static_v6_INDEX_JAC_F,
   nb_hydr_static_v6_INDEX_JAC_H,
   nb_hydr_static_v6_initialAnalyticJacobianA,
   nb_hydr_static_v6_initialAnalyticJacobianB,
   nb_hydr_static_v6_initialAnalyticJacobianC,
   nb_hydr_static_v6_initialAnalyticJacobianD,
   nb_hydr_static_v6_initialAnalyticJacobianF,
   nb_hydr_static_v6_initialAnalyticJacobianH,
   nb_hydr_static_v6_functionJacA_column,
   nb_hydr_static_v6_functionJacB_column,
   nb_hydr_static_v6_functionJacC_column,
   nb_hydr_static_v6_functionJacD_column,
   nb_hydr_static_v6_functionJacF_column,
   nb_hydr_static_v6_functionJacH_column,
   nb_hydr_static_v6_linear_model_frame,
   nb_hydr_static_v6_linear_model_datarecovery_frame,
   nb_hydr_static_v6_mayer,
   nb_hydr_static_v6_lagrange,
   nb_hydr_static_v6_pickUpBoundsForInputsInOptimization,
   nb_hydr_static_v6_setInputData,
   nb_hydr_static_v6_getTimeGrid,
   nb_hydr_static_v6_symbolicInlineSystem,
   nb_hydr_static_v6_function_initSynchronous,
   nb_hydr_static_v6_function_updateSynchronous,
   nb_hydr_static_v6_function_equationsSynchronous,
   nb_hydr_static_v6_inputNames,
   nb_hydr_static_v6_dataReconciliationInputNames,
   nb_hydr_static_v6_dataReconciliationUnmeasuredVariables,
   nb_hydr_static_v6_read_input_fmu,
   NULL,
   NULL,
   -1,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Buildings"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,9,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,77,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Complex"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Complex 3.2.3+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,7,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,84,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,85,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/ModelicaServices 3.2.3+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,93,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "nb_hydr_static_v6"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/Users/Zhiang Zhang"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,17,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,21,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void nb_hydr_static_v6_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &nb_hydr_static_v6_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "nb_hydr_static_v6";
  data->modelData->modelFilePrefix = "nb_hydr_static_v6";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Users/Zhiang Zhang";
  data->modelData->modelGUID = "{80c79894-1d3d-42ba-aa10-5a3cbbc0da2c}";
  data->modelData->encrypted = 0;
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/nb_hydr_static_v6_info.json", data->modelData->resourcesDir);
  data->modelData->runTestsuite = 0;
  data->modelData->nStates = 11;
  data->modelData->nVariablesReal = 352;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 1;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 1797;
  data->modelData->nParametersInteger = 160;
  data->modelData->nParametersBoolean = 237;
  data->modelData->nParametersString = 3;
  data->modelData->nInputVars = 1;
  data->modelData->nOutputVars = 0;
  data->modelData->nAliasReal = 418;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 106;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 4462;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 2;
  data->modelData->nNonLinearSystems = 2;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 8;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  data->modelData->nDelayExpressions = 0;
  data->modelData->nBaseClocks = 0;
  data->modelData->nSpatialDistributions = 0;
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->nSetbVars = 0;
  data->modelData->nRelatedBoundaryConditions = 0;
  data->modelData->linearizationDumpLanguage = OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

