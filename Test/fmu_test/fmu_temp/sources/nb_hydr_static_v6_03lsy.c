/* Linear Systems */
#include "nb_hydr_static_v6_model.h"
#include "nb_hydr_static_v6_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 704
type: SIMPLE_ASSIGN
jun_2.port_3.h_outflow = checkvalve_2.port_b.h_outflow - chwp_2.prePow.Q_flow * chwp_2.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  (data->localData[0]->realVars[333] /* jun_2.port_3.h_outflow variable */) = (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */) - (((data->localData[0]->realVars[238] /* chwp_2.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[252] /* chwp_2.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 705
type: SIMPLE_ASSIGN
checkvalve_3.port_a.h_outflow = chwp_3.port_a.h_outflow + chwp_3.prePow.Q_flow * chwp_3.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  (data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */) = (data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */) + ((data->localData[0]->realVars[269] /* chwp_3.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[283] /* chwp_3.vol.steBal.m_flowInv variable */));
  TRACE_POP
}
/*
equation index: 706
type: SIMPLE_ASSIGN
jun_3.port_1.h_outflow = (max(-chiller_4.m_flow, 1e-07) * chwp_4.port_a.h_outflow + max(-chiller_3.m_flow, 1e-07) * chwp_3.port_a.h_outflow) / (max(-chiller_4.m_flow, 1e-07) + max(-chiller_3.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  (data->localData[0]->realVars[334] /* jun_3.port_1.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)),1e-07) + fmax((-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)),1e-07),"max(-chiller_4.m_flow, 1e-07) + max(-chiller_3.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 707
type: SIMPLE_ASSIGN
checkvalve_4.port_a.h_outflow = chwp_4.port_a.h_outflow + chwp_4.prePow.Q_flow * chwp_4.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  (data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */) = (data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */) + ((data->localData[0]->realVars[300] /* chwp_4.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[314] /* chwp_4.vol.steBal.m_flowInv variable */));
  TRACE_POP
}
/*
equation index: 708
type: SIMPLE_ASSIGN
jun_2.port_1.h_outflow = (max(jun_6.port_2.m_flow, 1e-07) * jun_3.port_1.h_outflow + max(-chiller_2.m_flow, 1e-07) * chwp_2.port_a.h_outflow) / (max(jun_6.port_2.m_flow, 1e-07) + max(-chiller_2.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  (data->localData[0]->realVars[330] /* jun_2.port_1.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[334] /* jun_3.port_1.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */)),fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07) + fmax((-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)),1e-07),"max(jun_6.port_2.m_flow, 1e-07) + max(-chiller_2.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 709
type: SIMPLE_ASSIGN
jun_1.port_3.h_outflow = (max(-jun_2.port_1.m_flow, 1e-07) * jun_2.port_1.h_outflow + max(terminal_resist.m_flow, 1e-07) * chw_ret.ports[1].h_outflow) / (max(-jun_2.port_1.m_flow, 1e-07) + max(terminal_resist.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  (data->localData[0]->realVars[329] /* jun_1.port_3.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[330] /* jun_2.port_1.h_outflow variable */)) + (fmax((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[179] /* chw_ret.ports[1].h_outflow variable */)),fmax((-(data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */)),1e-07) + fmax((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */),1e-07),"max(-jun_2.port_1.m_flow, 1e-07) + max(terminal_resist.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 710
type: SIMPLE_ASSIGN
checkvalve_1.port_b.h_outflow = jun_1.port_3.h_outflow + chwp_1.prePow.Q_flow * chwp_1.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  (data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */) = (data->localData[0]->realVars[329] /* jun_1.port_3.h_outflow variable */) + ((data->localData[0]->realVars[207] /* chwp_1.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[221] /* chwp_1.vol.steBal.m_flowInv variable */));
  TRACE_POP
}
/*
equation index: 711
type: SIMPLE_ASSIGN
jun_4.port_1.h_outflow = (max(-terminal_resist.m_flow, 1e-07) * chw_sup.ports[2].h_outflow + max(chiller_1.m_flow, 1e-07) * checkvalve_1.port_b.h_outflow) / (max(-terminal_resist.m_flow, 1e-07) + max(chiller_1.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  (data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[184] /* chw_sup.ports[2].h_outflow variable */)) + (fmax((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */)),fmax((-(data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */)),1e-07) + fmax((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),1e-07),"max(-terminal_resist.m_flow, 1e-07) + max(chiller_1.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 712
type: SIMPLE_ASSIGN
jun_5.port_1.h_outflow = (max(jun_5.port_2.m_flow, 1e-07) * jun_4.port_1.h_outflow + max(chiller_2.m_flow, 1e-07) * checkvalve_2.port_b.h_outflow) / (max(jun_5.port_2.m_flow, 1e-07) + max(chiller_2.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  (data->localData[0]->realVars[338] /* jun_5.port_1.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */)) + (fmax((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */)),fmax((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */),1e-07) + fmax((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),1e-07),"max(jun_5.port_2.m_flow, 1e-07) + max(chiller_2.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 713
type: SIMPLE_ASSIGN
checkvalve_2.port_a.h_outflow = chwp_2.port_a.h_outflow + chwp_2.prePow.Q_flow * chwp_2.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  (data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */) = (data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */) + ((data->localData[0]->realVars[238] /* chwp_2.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[252] /* chwp_2.vol.steBal.m_flowInv variable */));
  TRACE_POP
}
/*
equation index: 714
type: SIMPLE_ASSIGN
jun_3.port_3.h_outflow = checkvalve_3.port_b.h_outflow - chwp_3.prePow.Q_flow * chwp_3.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  (data->localData[0]->realVars[336] /* jun_3.port_3.h_outflow variable */) = (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */) - (((data->localData[0]->realVars[269] /* chwp_3.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[283] /* chwp_3.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 715
type: SIMPLE_ASSIGN
jun_6.port_2.h_outflow = (max(chiller_3.m_flow, 1e-07) * checkvalve_3.port_b.h_outflow + max(chiller_4.m_flow, 1e-07) * checkvalve_4.port_b.h_outflow) / (max(chiller_3.m_flow, 1e-07) + max(chiller_4.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  (data->localData[0]->realVars[341] /* jun_6.port_2.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */)) + (fmax((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */)),fmax((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),1e-07) + fmax((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),1e-07),"max(chiller_3.m_flow, 1e-07) + max(chiller_4.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 716
type: SIMPLE_ASSIGN
jun_5.port_2.h_outflow = (max(chiller_2.m_flow, 1e-07) * checkvalve_2.port_b.h_outflow + max(-jun_6.port_2.m_flow, 1e-07) * jun_6.port_2.h_outflow) / (max(chiller_2.m_flow, 1e-07) + max(-jun_6.port_2.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  (data->localData[0]->realVars[339] /* jun_5.port_2.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[341] /* jun_6.port_2.h_outflow variable */)),fmax((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),1e-07) + fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07),"max(chiller_2.m_flow, 1e-07) + max(-jun_6.port_2.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 717
type: SIMPLE_ASSIGN
checkvalve_1.port_a.h_outflow = (max(-terminal_resist.m_flow, 1e-07) * chw_sup.ports[2].h_outflow + max(-jun_5.port_2.m_flow, 1e-07) * jun_5.port_2.h_outflow) / (max(-terminal_resist.m_flow, 1e-07) + max(-jun_5.port_2.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  (data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[184] /* chw_sup.ports[2].h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[339] /* jun_5.port_2.h_outflow variable */)),fmax((-(data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */)),1e-07) + fmax((-(data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */)),1e-07),"max(-terminal_resist.m_flow, 1e-07) + max(-jun_5.port_2.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 718
type: SIMPLE_ASSIGN
chwp_1.port_a.h_outflow = checkvalve_1.port_a.h_outflow - chwp_1.prePow.Q_flow * chwp_1.vol.steBal.m_flowInv
*/
void nb_hydr_static_v6_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  (data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */) = (data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */) - (((data->localData[0]->realVars[207] /* chwp_1.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[221] /* chwp_1.vol.steBal.m_flowInv variable */)));
  TRACE_POP
}
/*
equation index: 719
type: SIMPLE_ASSIGN
jun_1.port_2.h_outflow = (max(-chiller_1.m_flow, 1e-07) * chwp_1.port_a.h_outflow + max(terminal_resist.m_flow, 1e-07) * chw_ret.ports[1].h_outflow) / (max(-chiller_1.m_flow, 1e-07) + max(terminal_resist.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  (data->localData[0]->realVars[328] /* jun_1.port_2.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[179] /* chw_ret.ports[1].h_outflow variable */)),fmax((-(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)),1e-07) + fmax((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */),1e-07),"max(-chiller_1.m_flow, 1e-07) + max(terminal_resist.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 720
type: SIMPLE_ASSIGN
jun_2.port_2.h_outflow = (max(-chiller_2.m_flow, 1e-07) * chwp_2.port_a.h_outflow + max(jun_2.port_1.m_flow, 1e-07) * jun_1.port_2.h_outflow) / (max(-chiller_2.m_flow, 1e-07) + max(jun_2.port_1.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  (data->localData[0]->realVars[332] /* jun_2.port_2.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[328] /* jun_1.port_2.h_outflow variable */)),fmax((-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)),1e-07) + fmax((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */),1e-07),"max(-chiller_2.m_flow, 1e-07) + max(jun_2.port_1.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 721
type: SIMPLE_ASSIGN
jun_3.port_2.h_outflow = (max(-chiller_3.m_flow, 1e-07) * chwp_3.port_a.h_outflow + max(-jun_6.port_2.m_flow, 1e-07) * jun_2.port_2.h_outflow) / (max(-chiller_3.m_flow, 1e-07) + max(-jun_6.port_2.m_flow, 1e-07))
*/
void nb_hydr_static_v6_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  (data->localData[0]->realVars[335] /* jun_3.port_2.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[332] /* jun_2.port_2.h_outflow variable */)),fmax((-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)),1e-07) + fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07),"max(-chiller_3.m_flow, 1e-07) + max(-jun_6.port_2.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}

void residualFunc761(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,761};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */) = xloc[0];
  (data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */) = xloc[1];
  (data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */) = xloc[2];
  (data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */) = xloc[3];
  (data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */) = xloc[4];
  (data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */) = xloc[5];
  /* local constraints */
  nb_hydr_static_v6_eqFunction_704(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_705(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_706(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_707(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_708(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_709(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_710(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_711(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_712(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_713(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_714(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_715(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_716(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_717(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_718(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_719(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_720(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_721(data, threadData);
  res[0] = ((data->localData[0]->realVars[300] /* chwp_4.prePow.Q_flow variable */)) * ((data->localData[0]->realVars[314] /* chwp_4.vol.steBal.m_flowInv variable */)) + (data->localData[0]->realVars[335] /* jun_3.port_2.h_outflow variable */) - (data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */);

  res[1] = (fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[338] /* jun_5.port_1.h_outflow variable */)) + (fmax((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */)) - (((data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */)) * (fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07) + fmax((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),1e-07)));

  res[2] = (fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[338] /* jun_5.port_1.h_outflow variable */)) + (fmax((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */)) - (((data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */)) * (fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07) + fmax((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),1e-07)));

  res[3] = (fmax((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[341] /* jun_6.port_2.h_outflow variable */)) - (((data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */)) * (fmax((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */),1e-07) + fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07)));

  res[4] = (fmax((-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07)) * ((data->localData[0]->realVars[332] /* jun_2.port_2.h_outflow variable */)) - (((data->localData[0]->realVars[336] /* jun_3.port_3.h_outflow variable */)) * (fmax((-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)),1e-07) + fmax((-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)),1e-07)));

  res[5] = (fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[334] /* jun_3.port_1.h_outflow variable */)) + (fmax((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */),1e-07)) * ((data->localData[0]->realVars[328] /* jun_1.port_2.h_outflow variable */)) - (((data->localData[0]->realVars[333] /* jun_2.port_3.h_outflow variable */)) * (fmax((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),1e-07) + fmax((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */),1e-07)));
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData761(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[6] = {164/* checkvalve_4.port_b.h_outflow */, 152/* checkvalve_3.port_b.h_outflow */, 237/* chwp_2.port_a.h_outflow */, 299/* chwp_4.port_a.h_outflow */, 268/* chwp_3.port_a.h_outflow */, 140/* checkvalve_2.port_b.h_outflow */};
  for (int i = 0; i < 6; ++i) {
    linearSystemData->nominal[i] = data->modelData->realVarsData[indices[i]].attribute.nominal;
    linearSystemData->min[i]     = data->modelData->realVarsData[indices[i]].attribute.min;
    linearSystemData->max[i]     = data->modelData->realVarsData[indices[i]].attribute.max;
  }
}


/*
equation index: 567
type: SIMPLE_ASSIGN
checkvalve_1.dp = (-chiller_1.m_flow) * checkvalve_1.dp_nominal / ((-checkvalve_1.m_flow_nominal) * checkvalve_1.relativeFlowCoefficient)
*/
void nb_hydr_static_v6_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  (data->localData[0]->realVars[123] /* checkvalve_1.dp variable */) = DIVISION_SIM(((-(data->localData[0]->realVars[171] /* chiller_1.m_flow variable */))) * ((data->simulationInfo->realParameter[3] /* checkvalve_1.dp_nominal PARAM */)),((-(data->simulationInfo->realParameter[8] /* checkvalve_1.m_flow_nominal PARAM */))) * ((data->localData[0]->realVars[131] /* checkvalve_1.relativeFlowCoefficient variable */)),"(-checkvalve_1.m_flow_nominal) * checkvalve_1.relativeFlowCoefficient",equationIndexes);
  TRACE_POP
}
/*
equation index: 568
type: SIMPLE_ASSIGN
chwp_1.VMachine_flow = 0.001004433569776996 * chiller_1.m_flow
*/
void nb_hydr_static_v6_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  (data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */) = (0.001004433569776996) * ((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */));
  TRACE_POP
}
/*
equation index: 569
type: SIMPLE_ASSIGN
chwp_1.dpMachine = chwp_1.filter.y * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(0.577, 1.0, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]})) + (chwp_1.VMachine_flow - 0.577) * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 + chwp_1.eff.delta) * 0.577, 1.0, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]})) - Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 - chwp_1.eff.delta) * 0.577, 1.0, chwp_1.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_1.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_1.eff.pCur3.dp[2], chwp_1.eff.pCur3.dp[3], chwp_1.eff.pCur3.dp[4], chwp_1.eff.pCur3.dp[5], chwp_1.eff.pCur3.dp[6], chwp_1.eff.pCur3.dp[7], chwp_1.eff.pCur3.dp[8], chwp_1.eff.pCur3.dp[9], chwp_1.eff.pCur3.dp[10], chwp_1.eff.pCur3.dp[11], chwp_1.eff.pCur3.dp[12], chwp_1.eff.pCur3.dp[13], chwp_1.eff.pCur3.dp[14], chwp_1.eff.pCur3.dp[15], chwp_1.eff.pCur3.dp[16], chwp_1.eff.pCur3.dp[17], chwp_1.eff.pCur3.dp[18], chwp_1.eff.pCur3.dp[19]}))) / (1.154 * chwp_1.eff.delta)) - chwp_1.VMachine_flow * chwp_1.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
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
  (data->localData[0]->realVars[195] /* chwp_1.dpMachine variable */) = ((data->localData[0]->realVars[200] /* chwp_1.filter.y variable */)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, 0.577, 1.0, tmp0, 909154.9295774648, 0.5770020020020019, tmp1) + DIVISION_SIM(((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */) - 0.577) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 + (data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */)) * (0.577), 1.0, tmp4, 909154.9295774648, 0.5770020020020019, tmp5) - omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 - (data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */)) * (0.577), 1.0, tmp8, 909154.9295774648, 0.5770020020020019, tmp9)),(1.154) * ((data->simulationInfo->realParameter[168] /* chwp_1.eff.delta PARAM */)),"1.154 * chwp_1.eff.delta",equationIndexes)) - (((data->localData[0]->realVars[193] /* chwp_1.VMachine_flow variable */)) * ((data->simulationInfo->realParameter[171] /* chwp_1.eff.kRes PARAM */)));
  TRACE_POP
}
/*
equation index: 570
type: SIMPLE_ASSIGN
chiller_1.dp = 200000.0 * chiller_1.m_flow / chiller_1.m_flow_nominal_pos
*/
void nb_hydr_static_v6_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  (data->localData[0]->realVars[170] /* chiller_1.dp variable */) = DIVISION_SIM((200000.0) * ((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */)),(data->simulationInfo->realParameter[81] /* chiller_1.m_flow_nominal_pos PARAM */),"chiller_1.m_flow_nominal_pos",equationIndexes);
  TRACE_POP
}
/*
equation index: 571
type: SIMPLE_ASSIGN
checkvalve_1.port_a.p = ret_p.k + chwp_1.dpMachine
*/
void nb_hydr_static_v6_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */) = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[195] /* chwp_1.dpMachine variable */);
  TRACE_POP
}
/*
equation index: 572
type: SIMPLE_ASSIGN
checkvalve_1.port_b.p = checkvalve_1.port_a.p - checkvalve_1.dp
*/
void nb_hydr_static_v6_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  (data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */) = (data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */) - (data->localData[0]->realVars[123] /* checkvalve_1.dp variable */);
  TRACE_POP
}
/*
equation index: 573
type: SIMPLE_ASSIGN
chw_sup_P.p = checkvalve_1.port_b.p - chiller_1.dp
*/
void nb_hydr_static_v6_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) = (data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */) - (data->localData[0]->realVars[170] /* chiller_1.dp variable */);
  TRACE_POP
}
/*
equation index: 574
type: SIMPLE_ASSIGN
terminal_resist.dp = chw_sup_P.p - ret_p.k
*/
void nb_hydr_static_v6_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  (data->localData[0]->realVars[344] /* terminal_resist.dp variable */) = (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) - (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */);
  TRACE_POP
}
/*
equation index: 575
type: SIMPLE_ASSIGN
terminal_resist.m_flow = terminal_resist.dp * terminal_resist.m_flow_nominal_pos / terminal_resist.dp_nominal_pos
*/
void nb_hydr_static_v6_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  (data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */) = DIVISION_SIM(((data->localData[0]->realVars[344] /* terminal_resist.dp variable */)) * ((data->simulationInfo->realParameter[1780] /* terminal_resist.m_flow_nominal_pos PARAM */)),(data->simulationInfo->realParameter[1763] /* terminal_resist.dp_nominal_pos PARAM */),"terminal_resist.dp_nominal_pos",equationIndexes);
  TRACE_POP
}
/*
equation index: 576
type: SIMPLE_ASSIGN
jun_5.port_2.m_flow = chiller_1.m_flow - terminal_resist.m_flow
*/
void nb_hydr_static_v6_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  (data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */) = (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */) - (data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */);
  TRACE_POP
}
/*
equation index: 577
type: SIMPLE_ASSIGN
checkvalve_2.dp = (-chiller_2.m_flow) * checkvalve_2.dp_nominal / ((-checkvalve_2.m_flow_nominal) * checkvalve_2.relativeFlowCoefficient)
*/
void nb_hydr_static_v6_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  (data->localData[0]->realVars[135] /* checkvalve_2.dp variable */) = DIVISION_SIM(((-(data->localData[0]->realVars[173] /* chiller_2.m_flow variable */))) * ((data->simulationInfo->realParameter[21] /* checkvalve_2.dp_nominal PARAM */)),((-(data->simulationInfo->realParameter[26] /* checkvalve_2.m_flow_nominal PARAM */))) * ((data->localData[0]->realVars[143] /* checkvalve_2.relativeFlowCoefficient variable */)),"(-checkvalve_2.m_flow_nominal) * checkvalve_2.relativeFlowCoefficient",equationIndexes);
  TRACE_POP
}
/*
equation index: 578
type: SIMPLE_ASSIGN
jun_6.port_2.m_flow = chiller_2.m_flow + jun_5.port_2.m_flow
*/
void nb_hydr_static_v6_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  (data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */) = (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */) + (data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */);
  TRACE_POP
}
/*
equation index: 579
type: SIMPLE_ASSIGN
chwp_2.VMachine_flow = 0.001004433569776996 * chiller_2.m_flow
*/
void nb_hydr_static_v6_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  (data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */) = (0.001004433569776996) * ((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */));
  TRACE_POP
}
/*
equation index: 580
type: SIMPLE_ASSIGN
chwp_2.dpMachine = chwp_2.filter.y * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(0.577, 1.0, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]})) + (chwp_2.VMachine_flow - 0.577) * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 + chwp_2.eff.delta) * 0.577, 1.0, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]})) - Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 - chwp_2.eff.delta) * 0.577, 1.0, chwp_2.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_2.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_2.eff.pCur3.dp[2], chwp_2.eff.pCur3.dp[3], chwp_2.eff.pCur3.dp[4], chwp_2.eff.pCur3.dp[5], chwp_2.eff.pCur3.dp[6], chwp_2.eff.pCur3.dp[7], chwp_2.eff.pCur3.dp[8], chwp_2.eff.pCur3.dp[9], chwp_2.eff.pCur3.dp[10], chwp_2.eff.pCur3.dp[11], chwp_2.eff.pCur3.dp[12], chwp_2.eff.pCur3.dp[13], chwp_2.eff.pCur3.dp[14], chwp_2.eff.pCur3.dp[15], chwp_2.eff.pCur3.dp[16], chwp_2.eff.pCur3.dp[17], chwp_2.eff.pCur3.dp[18], chwp_2.eff.pCur3.dp[19]}))) / (1.154 * chwp_2.eff.delta)) - chwp_2.VMachine_flow * chwp_2.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
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
  (data->localData[0]->realVars[226] /* chwp_2.dpMachine variable */) = ((data->localData[0]->realVars[231] /* chwp_2.filter.y variable */)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, 0.577, 1.0, tmp0, 909154.9295774648, 0.5770020020020019, tmp1) + DIVISION_SIM(((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */) - 0.577) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 + (data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */)) * (0.577), 1.0, tmp4, 909154.9295774648, 0.5770020020020019, tmp5) - omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 - (data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */)) * (0.577), 1.0, tmp8, 909154.9295774648, 0.5770020020020019, tmp9)),(1.154) * ((data->simulationInfo->realParameter[549] /* chwp_2.eff.delta PARAM */)),"1.154 * chwp_2.eff.delta",equationIndexes)) - (((data->localData[0]->realVars[224] /* chwp_2.VMachine_flow variable */)) * ((data->simulationInfo->realParameter[552] /* chwp_2.eff.kRes PARAM */)));
  TRACE_POP
}
/*
equation index: 581
type: SIMPLE_ASSIGN
chiller_2.dp = 200000.0 * chiller_2.m_flow / chiller_2.m_flow_nominal_pos
*/
void nb_hydr_static_v6_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  (data->localData[0]->realVars[172] /* chiller_2.dp variable */) = DIVISION_SIM((200000.0) * ((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */)),(data->simulationInfo->realParameter[95] /* chiller_2.m_flow_nominal_pos PARAM */),"chiller_2.m_flow_nominal_pos",equationIndexes);
  TRACE_POP
}
/*
equation index: 582
type: SIMPLE_ASSIGN
checkvalve_2.port_b.p = chw_sup_P.p + chiller_2.dp
*/
void nb_hydr_static_v6_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  (data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */) = (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) + (data->localData[0]->realVars[172] /* chiller_2.dp variable */);
  TRACE_POP
}
/*
equation index: 583
type: SIMPLE_ASSIGN
checkvalve_2.port_a.p = checkvalve_2.port_b.p + checkvalve_2.dp
*/
void nb_hydr_static_v6_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */) = (data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */) + (data->localData[0]->realVars[135] /* checkvalve_2.dp variable */);
  TRACE_POP
}
/*
equation index: 584
type: SIMPLE_ASSIGN
checkvalve_3.dp = (-chiller_3.m_flow) * checkvalve_3.dp_nominal / ((-checkvalve_3.m_flow_nominal) * checkvalve_3.relativeFlowCoefficient)
*/
void nb_hydr_static_v6_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  (data->localData[0]->realVars[147] /* checkvalve_3.dp variable */) = DIVISION_SIM(((-(data->localData[0]->realVars[175] /* chiller_3.m_flow variable */))) * ((data->simulationInfo->realParameter[39] /* checkvalve_3.dp_nominal PARAM */)),((-(data->simulationInfo->realParameter[44] /* checkvalve_3.m_flow_nominal PARAM */))) * ((data->localData[0]->realVars[155] /* checkvalve_3.relativeFlowCoefficient variable */)),"(-checkvalve_3.m_flow_nominal) * checkvalve_3.relativeFlowCoefficient",equationIndexes);
  TRACE_POP
}
/*
equation index: 585
type: SIMPLE_ASSIGN
chiller_4.m_flow = (-jun_6.port_2.m_flow) - chiller_3.m_flow
*/
void nb_hydr_static_v6_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  (data->localData[0]->realVars[177] /* chiller_4.m_flow variable */) = (-(data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */)) - (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */);
  TRACE_POP
}
/*
equation index: 586
type: SIMPLE_ASSIGN
checkvalve_4.dp = (-chiller_4.m_flow) * checkvalve_4.dp_nominal / ((-checkvalve_4.m_flow_nominal) * checkvalve_4.relativeFlowCoefficient)
*/
void nb_hydr_static_v6_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  (data->localData[0]->realVars[159] /* checkvalve_4.dp variable */) = DIVISION_SIM(((-(data->localData[0]->realVars[177] /* chiller_4.m_flow variable */))) * ((data->simulationInfo->realParameter[57] /* checkvalve_4.dp_nominal PARAM */)),((-(data->simulationInfo->realParameter[62] /* checkvalve_4.m_flow_nominal PARAM */))) * ((data->localData[0]->realVars[167] /* checkvalve_4.relativeFlowCoefficient variable */)),"(-checkvalve_4.m_flow_nominal) * checkvalve_4.relativeFlowCoefficient",equationIndexes);
  TRACE_POP
}
/*
equation index: 587
type: SIMPLE_ASSIGN
chiller_3.dp = 200000.0 * chiller_3.m_flow / chiller_3.m_flow_nominal_pos
*/
void nb_hydr_static_v6_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  (data->localData[0]->realVars[174] /* chiller_3.dp variable */) = DIVISION_SIM((200000.0) * ((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */)),(data->simulationInfo->realParameter[109] /* chiller_3.m_flow_nominal_pos PARAM */),"chiller_3.m_flow_nominal_pos",equationIndexes);
  TRACE_POP
}
/*
equation index: 588
type: SIMPLE_ASSIGN
chwp_3.VMachine_flow = 0.001004433569776996 * chiller_3.m_flow
*/
void nb_hydr_static_v6_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  (data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */) = (0.001004433569776996) * ((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */));
  TRACE_POP
}
/*
equation index: 589
type: SIMPLE_ASSIGN
chwp_3.dpMachine = chwp_3.filter.y * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(0.577, 1.0, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]})) + (chwp_3.VMachine_flow - 0.577) * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 + chwp_3.eff.delta) * 0.577, 1.0, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]})) - Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 - chwp_3.eff.delta) * 0.577, 1.0, chwp_3.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_3.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_3.eff.pCur3.dp[2], chwp_3.eff.pCur3.dp[3], chwp_3.eff.pCur3.dp[4], chwp_3.eff.pCur3.dp[5], chwp_3.eff.pCur3.dp[6], chwp_3.eff.pCur3.dp[7], chwp_3.eff.pCur3.dp[8], chwp_3.eff.pCur3.dp[9], chwp_3.eff.pCur3.dp[10], chwp_3.eff.pCur3.dp[11], chwp_3.eff.pCur3.dp[12], chwp_3.eff.pCur3.dp[13], chwp_3.eff.pCur3.dp[14], chwp_3.eff.pCur3.dp[15], chwp_3.eff.pCur3.dp[16], chwp_3.eff.pCur3.dp[17], chwp_3.eff.pCur3.dp[18], chwp_3.eff.pCur3.dp[19]}))) / (1.154 * chwp_3.eff.delta)) - chwp_3.VMachine_flow * chwp_3.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
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
  (data->localData[0]->realVars[257] /* chwp_3.dpMachine variable */) = ((data->localData[0]->realVars[262] /* chwp_3.filter.y variable */)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, 0.577, 1.0, tmp0, 909154.9295774648, 0.5770020020020019, tmp1) + DIVISION_SIM(((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */) - 0.577) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 + (data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */)) * (0.577), 1.0, tmp4, 909154.9295774648, 0.5770020020020019, tmp5) - omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 - (data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */)) * (0.577), 1.0, tmp8, 909154.9295774648, 0.5770020020020019, tmp9)),(1.154) * ((data->simulationInfo->realParameter[932] /* chwp_3.eff.delta PARAM */)),"1.154 * chwp_3.eff.delta",equationIndexes)) - (((data->localData[0]->realVars[255] /* chwp_3.VMachine_flow variable */)) * ((data->simulationInfo->realParameter[935] /* chwp_3.eff.kRes PARAM */)));
  TRACE_POP
}
/*
equation index: 590
type: SIMPLE_ASSIGN
chwp_4.VMachine_flow = 0.001004433569776996 * chiller_4.m_flow
*/
void nb_hydr_static_v6_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  (data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */) = (0.001004433569776996) * ((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */));
  TRACE_POP
}
/*
equation index: 591
type: SIMPLE_ASSIGN
chwp_4.dpMachine = chwp_4.filter.y * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure(0.577, 1.0, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]})) + (chwp_4.VMachine_flow - 0.577) * (Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 + chwp_4.eff.delta) * 0.577, 1.0, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]})) - Buildings.Fluid.Movers.BaseClasses.Characteristics.pressure((1.0 - chwp_4.eff.delta) * 0.577, 1.0, chwp_4.eff.preDer3, 909154.9295774648, 0.5770020020020019, Buildings.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(19, {chwp_4.eff.pCur3.V_flow[1], 0.155, 0.226, 0.286, 0.336, 0.379, 0.414, 0.445, 0.47, 0.492, 0.511, 0.527, 0.54, 0.552, 0.5620000000000001, 0.569, 0.575, 0.577, 0.5770020020020019}, {909154.9295774648, chwp_4.eff.pCur3.dp[2], chwp_4.eff.pCur3.dp[3], chwp_4.eff.pCur3.dp[4], chwp_4.eff.pCur3.dp[5], chwp_4.eff.pCur3.dp[6], chwp_4.eff.pCur3.dp[7], chwp_4.eff.pCur3.dp[8], chwp_4.eff.pCur3.dp[9], chwp_4.eff.pCur3.dp[10], chwp_4.eff.pCur3.dp[11], chwp_4.eff.pCur3.dp[12], chwp_4.eff.pCur3.dp[13], chwp_4.eff.pCur3.dp[14], chwp_4.eff.pCur3.dp[15], chwp_4.eff.pCur3.dp[16], chwp_4.eff.pCur3.dp[17], chwp_4.eff.pCur3.dp[18], chwp_4.eff.pCur3.dp[19]}))) / (1.154 * chwp_4.eff.delta)) - chwp_4.VMachine_flow * chwp_4.eff.kRes
*/
void nb_hydr_static_v6_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
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
  (data->localData[0]->realVars[288] /* chwp_4.dpMachine variable */) = ((data->localData[0]->realVars[293] /* chwp_4.filter.y variable */)) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, 0.577, 1.0, tmp0, 909154.9295774648, 0.5770020020020019, tmp1) + DIVISION_SIM(((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */) - 0.577) * (omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 + (data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */)) * (0.577), 1.0, tmp4, 909154.9295774648, 0.5770020020020019, tmp5) - omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, (1.0 - (data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */)) * (0.577), 1.0, tmp8, 909154.9295774648, 0.5770020020020019, tmp9)),(1.154) * ((data->simulationInfo->realParameter[1315] /* chwp_4.eff.delta PARAM */)),"1.154 * chwp_4.eff.delta",equationIndexes)) - (((data->localData[0]->realVars[286] /* chwp_4.VMachine_flow variable */)) * ((data->simulationInfo->realParameter[1318] /* chwp_4.eff.kRes PARAM */)));
  TRACE_POP
}
/*
equation index: 592
type: SIMPLE_ASSIGN
chiller_4.dp = 200000.0 * chiller_4.m_flow / chiller_4.m_flow_nominal_pos
*/
void nb_hydr_static_v6_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  (data->localData[0]->realVars[176] /* chiller_4.dp variable */) = DIVISION_SIM((200000.0) * ((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */)),(data->simulationInfo->realParameter[123] /* chiller_4.m_flow_nominal_pos PARAM */),"chiller_4.m_flow_nominal_pos",equationIndexes);
  TRACE_POP
}
/*
equation index: 593
type: SIMPLE_ASSIGN
checkvalve_3.port_b.p = chw_sup_P.p + chiller_3.dp
*/
void nb_hydr_static_v6_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  (data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */) = (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) + (data->localData[0]->realVars[174] /* chiller_3.dp variable */);
  TRACE_POP
}
/*
equation index: 594
type: SIMPLE_ASSIGN
checkvalve_3.port_a.p = checkvalve_3.port_b.p + checkvalve_3.dp
*/
void nb_hydr_static_v6_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */) = (data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */) + (data->localData[0]->realVars[147] /* checkvalve_3.dp variable */);
  TRACE_POP
}
/*
equation index: 595
type: SIMPLE_ASSIGN
checkvalve_4.port_b.p = chw_sup_P.p + chiller_4.dp
*/
void nb_hydr_static_v6_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  (data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */) = (data->localData[0]->realVars[186] /* chw_sup_P.p variable */) + (data->localData[0]->realVars[176] /* chiller_4.dp variable */);
  TRACE_POP
}
/*
equation index: 596
type: SIMPLE_ASSIGN
checkvalve_4.port_a.p = checkvalve_4.port_b.p + checkvalve_4.dp
*/
void nb_hydr_static_v6_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */) = (data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */) + (data->localData[0]->realVars[159] /* checkvalve_4.dp variable */);
  TRACE_POP
}

void residualFunc651(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,651};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[175] /* chiller_3.m_flow variable */) = xloc[0];
  (data->localData[0]->realVars[173] /* chiller_2.m_flow variable */) = xloc[1];
  (data->localData[0]->realVars[171] /* chiller_1.m_flow variable */) = xloc[2];
  /* local constraints */
  nb_hydr_static_v6_eqFunction_567(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_568(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_569(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_570(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_571(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_572(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_573(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_574(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_575(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_576(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_577(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_578(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_579(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_580(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_581(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_582(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_583(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_584(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_585(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_586(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_587(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_588(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_589(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_590(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_591(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_592(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_593(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_594(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_595(data, threadData);

  /* local constraints */
  nb_hydr_static_v6_eqFunction_596(data, threadData);
  res[0] = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[288] /* chwp_4.dpMachine variable */) - (data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */);

  res[1] = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[257] /* chwp_3.dpMachine variable */) - (data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */);

  res[2] = (data->simulationInfo->realParameter[1741] /* ret_p.k PARAM */) + (data->localData[0]->realVars[226] /* chwp_2.dpMachine variable */) - (data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData651(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[3] = {175/* chiller_3.m_flow */, 173/* chiller_2.m_flow */, 171/* chiller_1.m_flow */};
  for (int i = 0; i < 3; ++i) {
    linearSystemData->nominal[i] = data->modelData->realVarsData[indices[i]].attribute.nominal;
    linearSystemData->min[i]     = data->modelData->realVarsData[indices[i]].attribute.min;
    linearSystemData->max[i]     = data->modelData->realVarsData[indices[i]].attribute.max;
  }
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void nb_hydr_static_v6_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 761;
  linearSystemData[1].size = 6;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc761;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = nb_hydr_static_v6_functionJacLSJac18_column;
  linearSystemData[1].initialAnalyticalJacobian = nb_hydr_static_v6_initialAnalyticJacobianLSJac18;
  linearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA761;
  linearSystemData[1].setb = NULL;  //setLinearVectorb761;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData761;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 651;
  linearSystemData[0].size = 3;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc651;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = nb_hydr_static_v6_functionJacLSJac17_column;
  linearSystemData[0].initialAnalyticalJacobian = nb_hydr_static_v6_initialAnalyticJacobianLSJac17;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA651;
  linearSystemData[0].setb = NULL;  //setLinearVectorb651;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData651;
}

#if defined(__cplusplus)
}
#endif

