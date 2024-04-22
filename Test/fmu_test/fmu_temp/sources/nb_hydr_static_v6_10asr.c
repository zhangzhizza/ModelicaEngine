/* Asserts */
#include "nb_hydr_static_v6_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 4395
type: ALGORITHM

  assert(chw_ret.ports[1].h_outflow >= -10000000000.0 and chw_ret.ports[1].h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= chw_ret.ports[1].h_outflow <= 10000000000.0, has value: " + String(chw_ret.ports[1].h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4395};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,113,"Variable violating min/max constraint: -10000000000.0 <= chw_ret.ports[1].h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  if(!tmp5)
  {
    tmp0 = GreaterEq((data->localData[0]->realVars[179] /* chw_ret.ports[1].h_outflow variable */),-10000000000.0);
    tmp1 = LessEq((data->localData[0]->realVars[179] /* chw_ret.ports[1].h_outflow variable */),10000000000.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[179] /* chw_ret.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta4 = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        const char* assert_cond = "(chw_ret.ports[1].h_outflow >= -10000000000.0 and chw_ret.ports[1].h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        }
      }
      tmp5 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4396
type: ALGORITHM

  assert(chwp_1.port_a.h_outflow >= -10000000000.0 and chwp_1.port_a.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= chwp_1.port_a.h_outflow <= 10000000000.0, has value: " + String(chwp_1.port_a.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4396};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  static const MMC_DEFSTRINGLIT(tmp8,110,"Variable violating min/max constraint: -10000000000.0 <= chwp_1.port_a.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp9;
  modelica_metatype tmpMeta10;
  static int tmp11 = 0;
  if(!tmp11)
  {
    tmp6 = GreaterEq((data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */),-10000000000.0);
    tmp7 = LessEq((data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */),10000000000.0);
    if(!(tmp6 && tmp7))
    {
      tmp9 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[206] /* chwp_1.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta10 = stringAppend(MMC_REFSTRINGLIT(tmp8),tmp9);
      {
        const char* assert_cond = "(chwp_1.port_a.h_outflow >= -10000000000.0 and chwp_1.port_a.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta10));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta10));
        }
      }
      tmp11 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4397
type: ALGORITHM

  assert(chwp_1.heatPort.T >= 1.0 and chwp_1.heatPort.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= chwp_1.heatPort.T <= 10000.0, has value: " + String(chwp_1.heatPort.T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4397};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,87,"Variable violating min/max constraint: 1.0 <= chwp_1.heatPort.T <= 10000.0, has value: ");
  modelica_string tmp15;
  modelica_metatype tmpMeta16;
  static int tmp17 = 0;
  if(!tmp17)
  {
    tmp12 = GreaterEq((data->localData[0]->realVars[204] /* chwp_1.heatPort.T variable */),1.0);
    tmp13 = LessEq((data->localData[0]->realVars[204] /* chwp_1.heatPort.T variable */),10000.0);
    if(!(tmp12 && tmp13))
    {
      tmp15 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[204] /* chwp_1.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta16 = stringAppend(MMC_REFSTRINGLIT(tmp14),tmp15);
      {
        const char* assert_cond = "(chwp_1.heatPort.T >= 1.0 and chwp_1.heatPort.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta16));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta16));
        }
      }
      tmp17 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4398
type: ALGORITHM

  assert(chiller_1.m_flow >= -100000.0 and chiller_1.m_flow <= 100000.0, "Variable violating min/max constraint: -100000.0 <= chiller_1.m_flow <= 100000.0, has value: " + String(chiller_1.m_flow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4398};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,93,"Variable violating min/max constraint: -100000.0 <= chiller_1.m_flow <= 100000.0, has value: ");
  modelica_string tmp21;
  modelica_metatype tmpMeta22;
  static int tmp23 = 0;
  if(!tmp23)
  {
    tmp18 = GreaterEq((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),-100000.0);
    tmp19 = LessEq((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */),100000.0);
    if(!(tmp18 && tmp19))
    {
      tmp21 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[171] /* chiller_1.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta22 = stringAppend(MMC_REFSTRINGLIT(tmp20),tmp21);
      {
        const char* assert_cond = "(chiller_1.m_flow >= -100000.0 and chiller_1.m_flow <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/PartialTwoPortInterface.mo",21,3,22,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta22));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/PartialTwoPortInterface.mo",21,3,22,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta22));
        }
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4399
type: ALGORITHM

  assert(jun_1.port_2.h_outflow >= -10000000000.0 and jun_1.port_2.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= jun_1.port_2.h_outflow <= 10000000000.0, has value: " + String(jun_1.port_2.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4399};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,109,"Variable violating min/max constraint: -10000000000.0 <= jun_1.port_2.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp27;
  modelica_metatype tmpMeta28;
  static int tmp29 = 0;
  if(!tmp29)
  {
    tmp24 = GreaterEq((data->localData[0]->realVars[328] /* jun_1.port_2.h_outflow variable */),-10000000000.0);
    tmp25 = LessEq((data->localData[0]->realVars[328] /* jun_1.port_2.h_outflow variable */),10000000000.0);
    if(!(tmp24 && tmp25))
    {
      tmp27 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[328] /* jun_1.port_2.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta28 = stringAppend(MMC_REFSTRINGLIT(tmp26),tmp27);
      {
        const char* assert_cond = "(jun_1.port_2.h_outflow >= -10000000000.0 and jun_1.port_2.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta28));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta28));
        }
      }
      tmp29 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4400
type: ALGORITHM

  assert(jun_1.port_3.h_outflow >= -10000000000.0 and jun_1.port_3.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= jun_1.port_3.h_outflow <= 10000000000.0, has value: " + String(jun_1.port_3.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4400};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,109,"Variable violating min/max constraint: -10000000000.0 <= jun_1.port_3.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp33;
  modelica_metatype tmpMeta34;
  static int tmp35 = 0;
  if(!tmp35)
  {
    tmp30 = GreaterEq((data->localData[0]->realVars[329] /* jun_1.port_3.h_outflow variable */),-10000000000.0);
    tmp31 = LessEq((data->localData[0]->realVars[329] /* jun_1.port_3.h_outflow variable */),10000000000.0);
    if(!(tmp30 && tmp31))
    {
      tmp33 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[329] /* jun_1.port_3.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta34 = stringAppend(MMC_REFSTRINGLIT(tmp32),tmp33);
      {
        const char* assert_cond = "(jun_1.port_3.h_outflow >= -10000000000.0 and jun_1.port_3.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta34));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta34));
        }
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4401
type: ALGORITHM

  assert(chwp_2.port_a.h_outflow >= -10000000000.0 and chwp_2.port_a.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= chwp_2.port_a.h_outflow <= 10000000000.0, has value: " + String(chwp_2.port_a.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4401};
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  static const MMC_DEFSTRINGLIT(tmp38,110,"Variable violating min/max constraint: -10000000000.0 <= chwp_2.port_a.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp39;
  modelica_metatype tmpMeta40;
  static int tmp41 = 0;
  if(!tmp41)
  {
    tmp36 = GreaterEq((data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */),-10000000000.0);
    tmp37 = LessEq((data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */),10000000000.0);
    if(!(tmp36 && tmp37))
    {
      tmp39 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[237] /* chwp_2.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta40 = stringAppend(MMC_REFSTRINGLIT(tmp38),tmp39);
      {
        const char* assert_cond = "(chwp_2.port_a.h_outflow >= -10000000000.0 and chwp_2.port_a.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta40));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta40));
        }
      }
      tmp41 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4402
type: ALGORITHM

  assert(chwp_2.heatPort.T >= 1.0 and chwp_2.heatPort.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= chwp_2.heatPort.T <= 10000.0, has value: " + String(chwp_2.heatPort.T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4402};
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,87,"Variable violating min/max constraint: 1.0 <= chwp_2.heatPort.T <= 10000.0, has value: ");
  modelica_string tmp45;
  modelica_metatype tmpMeta46;
  static int tmp47 = 0;
  if(!tmp47)
  {
    tmp42 = GreaterEq((data->localData[0]->realVars[235] /* chwp_2.heatPort.T variable */),1.0);
    tmp43 = LessEq((data->localData[0]->realVars[235] /* chwp_2.heatPort.T variable */),10000.0);
    if(!(tmp42 && tmp43))
    {
      tmp45 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[235] /* chwp_2.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta46 = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        const char* assert_cond = "(chwp_2.heatPort.T >= 1.0 and chwp_2.heatPort.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta46));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta46));
        }
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4403
type: ALGORITHM

  assert(chiller_2.m_flow >= -100000.0 and chiller_2.m_flow <= 100000.0, "Variable violating min/max constraint: -100000.0 <= chiller_2.m_flow <= 100000.0, has value: " + String(chiller_2.m_flow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4403};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  static const MMC_DEFSTRINGLIT(tmp50,93,"Variable violating min/max constraint: -100000.0 <= chiller_2.m_flow <= 100000.0, has value: ");
  modelica_string tmp51;
  modelica_metatype tmpMeta52;
  static int tmp53 = 0;
  if(!tmp53)
  {
    tmp48 = GreaterEq((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),-100000.0);
    tmp49 = LessEq((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */),100000.0);
    if(!(tmp48 && tmp49))
    {
      tmp51 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[173] /* chiller_2.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta52 = stringAppend(MMC_REFSTRINGLIT(tmp50),tmp51);
      {
        const char* assert_cond = "(chiller_2.m_flow >= -100000.0 and chiller_2.m_flow <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/PartialTwoPortInterface.mo",21,3,22,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta52));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/PartialTwoPortInterface.mo",21,3,22,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta52));
        }
      }
      tmp53 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4404
type: ALGORITHM

  assert(jun_2.port_1.m_flow >= -9.999999999999999e+59 and jun_2.port_1.m_flow <= 9.999999999999999e+59, "Variable violating min/max constraint: -9.999999999999999e+59 <= jun_2.port_1.m_flow <= 9.999999999999999e+59, has value: " + String(jun_2.port_1.m_flow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4404};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,122,"Variable violating min/max constraint: -9.999999999999999e+59 <= jun_2.port_1.m_flow <= 9.999999999999999e+59, has value: ");
  modelica_string tmp57;
  modelica_metatype tmpMeta58;
  static int tmp59 = 0;
  if(!tmp59)
  {
    tmp54 = GreaterEq((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */),-9.999999999999999e+59);
    tmp55 = LessEq((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */),9.999999999999999e+59);
    if(!(tmp54 && tmp55))
    {
      tmp57 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[331] /* jun_2.port_1.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta58 = stringAppend(MMC_REFSTRINGLIT(tmp56),tmp57);
      {
        const char* assert_cond = "(jun_2.port_1.m_flow >= -9.999999999999999e+59 and jun_2.port_1.m_flow <= 9.999999999999999e+59)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",13,5,14,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta58));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",13,5,14,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta58));
        }
      }
      tmp59 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4405
type: ALGORITHM

  assert(jun_2.port_1.h_outflow >= -10000000000.0 and jun_2.port_1.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= jun_2.port_1.h_outflow <= 10000000000.0, has value: " + String(jun_2.port_1.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4405};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,109,"Variable violating min/max constraint: -10000000000.0 <= jun_2.port_1.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static int tmp65 = 0;
  if(!tmp65)
  {
    tmp60 = GreaterEq((data->localData[0]->realVars[330] /* jun_2.port_1.h_outflow variable */),-10000000000.0);
    tmp61 = LessEq((data->localData[0]->realVars[330] /* jun_2.port_1.h_outflow variable */),10000000000.0);
    if(!(tmp60 && tmp61))
    {
      tmp63 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[330] /* jun_2.port_1.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta64 = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        const char* assert_cond = "(jun_2.port_1.h_outflow >= -10000000000.0 and jun_2.port_1.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        }
      }
      tmp65 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4406
type: ALGORITHM

  assert(jun_2.port_2.h_outflow >= -10000000000.0 and jun_2.port_2.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= jun_2.port_2.h_outflow <= 10000000000.0, has value: " + String(jun_2.port_2.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4406};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,109,"Variable violating min/max constraint: -10000000000.0 <= jun_2.port_2.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp69;
  modelica_metatype tmpMeta70;
  static int tmp71 = 0;
  if(!tmp71)
  {
    tmp66 = GreaterEq((data->localData[0]->realVars[332] /* jun_2.port_2.h_outflow variable */),-10000000000.0);
    tmp67 = LessEq((data->localData[0]->realVars[332] /* jun_2.port_2.h_outflow variable */),10000000000.0);
    if(!(tmp66 && tmp67))
    {
      tmp69 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[332] /* jun_2.port_2.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta70 = stringAppend(MMC_REFSTRINGLIT(tmp68),tmp69);
      {
        const char* assert_cond = "(jun_2.port_2.h_outflow >= -10000000000.0 and jun_2.port_2.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta70));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta70));
        }
      }
      tmp71 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4407
type: ALGORITHM

  assert(jun_2.port_3.h_outflow >= -10000000000.0 and jun_2.port_3.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= jun_2.port_3.h_outflow <= 10000000000.0, has value: " + String(jun_2.port_3.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4407};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,109,"Variable violating min/max constraint: -10000000000.0 <= jun_2.port_3.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp75;
  modelica_metatype tmpMeta76;
  static int tmp77 = 0;
  if(!tmp77)
  {
    tmp72 = GreaterEq((data->localData[0]->realVars[333] /* jun_2.port_3.h_outflow variable */),-10000000000.0);
    tmp73 = LessEq((data->localData[0]->realVars[333] /* jun_2.port_3.h_outflow variable */),10000000000.0);
    if(!(tmp72 && tmp73))
    {
      tmp75 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[333] /* jun_2.port_3.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta76 = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        const char* assert_cond = "(jun_2.port_3.h_outflow >= -10000000000.0 and jun_2.port_3.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        }
      }
      tmp77 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4408
type: ALGORITHM

  assert(chwp_3.port_a.h_outflow >= -10000000000.0 and chwp_3.port_a.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= chwp_3.port_a.h_outflow <= 10000000000.0, has value: " + String(chwp_3.port_a.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4408};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,110,"Variable violating min/max constraint: -10000000000.0 <= chwp_3.port_a.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp81;
  modelica_metatype tmpMeta82;
  static int tmp83 = 0;
  if(!tmp83)
  {
    tmp78 = GreaterEq((data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */),-10000000000.0);
    tmp79 = LessEq((data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */),10000000000.0);
    if(!(tmp78 && tmp79))
    {
      tmp81 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[268] /* chwp_3.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta82 = stringAppend(MMC_REFSTRINGLIT(tmp80),tmp81);
      {
        const char* assert_cond = "(chwp_3.port_a.h_outflow >= -10000000000.0 and chwp_3.port_a.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        }
      }
      tmp83 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4409
type: ALGORITHM

  assert(chwp_3.heatPort.T >= 1.0 and chwp_3.heatPort.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= chwp_3.heatPort.T <= 10000.0, has value: " + String(chwp_3.heatPort.T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4409};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  static const MMC_DEFSTRINGLIT(tmp86,87,"Variable violating min/max constraint: 1.0 <= chwp_3.heatPort.T <= 10000.0, has value: ");
  modelica_string tmp87;
  modelica_metatype tmpMeta88;
  static int tmp89 = 0;
  if(!tmp89)
  {
    tmp84 = GreaterEq((data->localData[0]->realVars[266] /* chwp_3.heatPort.T variable */),1.0);
    tmp85 = LessEq((data->localData[0]->realVars[266] /* chwp_3.heatPort.T variable */),10000.0);
    if(!(tmp84 && tmp85))
    {
      tmp87 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[266] /* chwp_3.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta88 = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        const char* assert_cond = "(chwp_3.heatPort.T >= 1.0 and chwp_3.heatPort.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta88));
        }
      }
      tmp89 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4410
type: ALGORITHM

  assert(chiller_3.m_flow >= -100000.0 and chiller_3.m_flow <= 100000.0, "Variable violating min/max constraint: -100000.0 <= chiller_3.m_flow <= 100000.0, has value: " + String(chiller_3.m_flow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4410};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,93,"Variable violating min/max constraint: -100000.0 <= chiller_3.m_flow <= 100000.0, has value: ");
  modelica_string tmp93;
  modelica_metatype tmpMeta94;
  static int tmp95 = 0;
  if(!tmp95)
  {
    tmp90 = GreaterEq((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),-100000.0);
    tmp91 = LessEq((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */),100000.0);
    if(!(tmp90 && tmp91))
    {
      tmp93 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[175] /* chiller_3.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta94 = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      {
        const char* assert_cond = "(chiller_3.m_flow >= -100000.0 and chiller_3.m_flow <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/PartialTwoPortInterface.mo",21,3,22,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta94));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/PartialTwoPortInterface.mo",21,3,22,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta94));
        }
      }
      tmp95 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4411
type: ALGORITHM

  assert(jun_3.port_1.h_outflow >= -10000000000.0 and jun_3.port_1.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= jun_3.port_1.h_outflow <= 10000000000.0, has value: " + String(jun_3.port_1.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4411};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  static const MMC_DEFSTRINGLIT(tmp98,109,"Variable violating min/max constraint: -10000000000.0 <= jun_3.port_1.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp99;
  modelica_metatype tmpMeta100;
  static int tmp101 = 0;
  if(!tmp101)
  {
    tmp96 = GreaterEq((data->localData[0]->realVars[334] /* jun_3.port_1.h_outflow variable */),-10000000000.0);
    tmp97 = LessEq((data->localData[0]->realVars[334] /* jun_3.port_1.h_outflow variable */),10000000000.0);
    if(!(tmp96 && tmp97))
    {
      tmp99 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[334] /* jun_3.port_1.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta100 = stringAppend(MMC_REFSTRINGLIT(tmp98),tmp99);
      {
        const char* assert_cond = "(jun_3.port_1.h_outflow >= -10000000000.0 and jun_3.port_1.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta100));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta100));
        }
      }
      tmp101 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4412
type: ALGORITHM

  assert(jun_3.port_2.h_outflow >= -10000000000.0 and jun_3.port_2.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= jun_3.port_2.h_outflow <= 10000000000.0, has value: " + String(jun_3.port_2.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4412};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  static const MMC_DEFSTRINGLIT(tmp104,109,"Variable violating min/max constraint: -10000000000.0 <= jun_3.port_2.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp105;
  modelica_metatype tmpMeta106;
  static int tmp107 = 0;
  if(!tmp107)
  {
    tmp102 = GreaterEq((data->localData[0]->realVars[335] /* jun_3.port_2.h_outflow variable */),-10000000000.0);
    tmp103 = LessEq((data->localData[0]->realVars[335] /* jun_3.port_2.h_outflow variable */),10000000000.0);
    if(!(tmp102 && tmp103))
    {
      tmp105 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[335] /* jun_3.port_2.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta106 = stringAppend(MMC_REFSTRINGLIT(tmp104),tmp105);
      {
        const char* assert_cond = "(jun_3.port_2.h_outflow >= -10000000000.0 and jun_3.port_2.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta106));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta106));
        }
      }
      tmp107 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4413
type: ALGORITHM

  assert(jun_3.port_3.h_outflow >= -10000000000.0 and jun_3.port_3.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= jun_3.port_3.h_outflow <= 10000000000.0, has value: " + String(jun_3.port_3.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4413};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  static const MMC_DEFSTRINGLIT(tmp110,109,"Variable violating min/max constraint: -10000000000.0 <= jun_3.port_3.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp111;
  modelica_metatype tmpMeta112;
  static int tmp113 = 0;
  if(!tmp113)
  {
    tmp108 = GreaterEq((data->localData[0]->realVars[336] /* jun_3.port_3.h_outflow variable */),-10000000000.0);
    tmp109 = LessEq((data->localData[0]->realVars[336] /* jun_3.port_3.h_outflow variable */),10000000000.0);
    if(!(tmp108 && tmp109))
    {
      tmp111 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[336] /* jun_3.port_3.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta112 = stringAppend(MMC_REFSTRINGLIT(tmp110),tmp111);
      {
        const char* assert_cond = "(jun_3.port_3.h_outflow >= -10000000000.0 and jun_3.port_3.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta112));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta112));
        }
      }
      tmp113 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4414
type: ALGORITHM

  assert(chwp_4.port_a.h_outflow >= -10000000000.0 and chwp_4.port_a.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= chwp_4.port_a.h_outflow <= 10000000000.0, has value: " + String(chwp_4.port_a.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4414};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,110,"Variable violating min/max constraint: -10000000000.0 <= chwp_4.port_a.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp117;
  modelica_metatype tmpMeta118;
  static int tmp119 = 0;
  if(!tmp119)
  {
    tmp114 = GreaterEq((data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */),-10000000000.0);
    tmp115 = LessEq((data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */),10000000000.0);
    if(!(tmp114 && tmp115))
    {
      tmp117 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[299] /* chwp_4.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta118 = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        const char* assert_cond = "(chwp_4.port_a.h_outflow >= -10000000000.0 and chwp_4.port_a.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta118));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta118));
        }
      }
      tmp119 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4415
type: ALGORITHM

  assert(chwp_4.heatPort.T >= 1.0 and chwp_4.heatPort.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= chwp_4.heatPort.T <= 10000.0, has value: " + String(chwp_4.heatPort.T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4415};
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,87,"Variable violating min/max constraint: 1.0 <= chwp_4.heatPort.T <= 10000.0, has value: ");
  modelica_string tmp123;
  modelica_metatype tmpMeta124;
  static int tmp125 = 0;
  if(!tmp125)
  {
    tmp120 = GreaterEq((data->localData[0]->realVars[297] /* chwp_4.heatPort.T variable */),1.0);
    tmp121 = LessEq((data->localData[0]->realVars[297] /* chwp_4.heatPort.T variable */),10000.0);
    if(!(tmp120 && tmp121))
    {
      tmp123 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[297] /* chwp_4.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta124 = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        const char* assert_cond = "(chwp_4.heatPort.T >= 1.0 and chwp_4.heatPort.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta124));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Thermal/HeatTransfer.mo",2989,7,2989,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta124));
        }
      }
      tmp125 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4416
type: ALGORITHM

  assert(chiller_4.m_flow >= -100000.0 and chiller_4.m_flow <= 100000.0, "Variable violating min/max constraint: -100000.0 <= chiller_4.m_flow <= 100000.0, has value: " + String(chiller_4.m_flow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4416};
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  static const MMC_DEFSTRINGLIT(tmp128,93,"Variable violating min/max constraint: -100000.0 <= chiller_4.m_flow <= 100000.0, has value: ");
  modelica_string tmp129;
  modelica_metatype tmpMeta130;
  static int tmp131 = 0;
  if(!tmp131)
  {
    tmp126 = GreaterEq((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),-100000.0);
    tmp127 = LessEq((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */),100000.0);
    if(!(tmp126 && tmp127))
    {
      tmp129 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[177] /* chiller_4.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta130 = stringAppend(MMC_REFSTRINGLIT(tmp128),tmp129);
      {
        const char* assert_cond = "(chiller_4.m_flow >= -100000.0 and chiller_4.m_flow <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/PartialTwoPortInterface.mo",21,3,22,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta130));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/PartialTwoPortInterface.mo",21,3,22,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta130));
        }
      }
      tmp131 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4417
type: ALGORITHM

  assert(jun_4.port_1.h_outflow >= -10000000000.0 and jun_4.port_1.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= jun_4.port_1.h_outflow <= 10000000000.0, has value: " + String(jun_4.port_1.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4417};
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  static const MMC_DEFSTRINGLIT(tmp134,109,"Variable violating min/max constraint: -10000000000.0 <= jun_4.port_1.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp135;
  modelica_metatype tmpMeta136;
  static int tmp137 = 0;
  if(!tmp137)
  {
    tmp132 = GreaterEq((data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */),-10000000000.0);
    tmp133 = LessEq((data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */),10000000000.0);
    if(!(tmp132 && tmp133))
    {
      tmp135 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[337] /* jun_4.port_1.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta136 = stringAppend(MMC_REFSTRINGLIT(tmp134),tmp135);
      {
        const char* assert_cond = "(jun_4.port_1.h_outflow >= -10000000000.0 and jun_4.port_1.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta136));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta136));
        }
      }
      tmp137 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4418
type: ALGORITHM

  assert(jun_5.port_1.h_outflow >= -10000000000.0 and jun_5.port_1.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= jun_5.port_1.h_outflow <= 10000000000.0, has value: " + String(jun_5.port_1.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4418};
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  static const MMC_DEFSTRINGLIT(tmp140,109,"Variable violating min/max constraint: -10000000000.0 <= jun_5.port_1.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp141;
  modelica_metatype tmpMeta142;
  static int tmp143 = 0;
  if(!tmp143)
  {
    tmp138 = GreaterEq((data->localData[0]->realVars[338] /* jun_5.port_1.h_outflow variable */),-10000000000.0);
    tmp139 = LessEq((data->localData[0]->realVars[338] /* jun_5.port_1.h_outflow variable */),10000000000.0);
    if(!(tmp138 && tmp139))
    {
      tmp141 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[338] /* jun_5.port_1.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta142 = stringAppend(MMC_REFSTRINGLIT(tmp140),tmp141);
      {
        const char* assert_cond = "(jun_5.port_1.h_outflow >= -10000000000.0 and jun_5.port_1.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta142));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta142));
        }
      }
      tmp143 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4419
type: ALGORITHM

  assert(jun_5.port_2.m_flow >= -9.999999999999999e+59 and jun_5.port_2.m_flow <= 9.999999999999999e+59, "Variable violating min/max constraint: -9.999999999999999e+59 <= jun_5.port_2.m_flow <= 9.999999999999999e+59, has value: " + String(jun_5.port_2.m_flow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4419};
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,122,"Variable violating min/max constraint: -9.999999999999999e+59 <= jun_5.port_2.m_flow <= 9.999999999999999e+59, has value: ");
  modelica_string tmp147;
  modelica_metatype tmpMeta148;
  static int tmp149 = 0;
  if(!tmp149)
  {
    tmp144 = GreaterEq((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */),-9.999999999999999e+59);
    tmp145 = LessEq((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */),9.999999999999999e+59);
    if(!(tmp144 && tmp145))
    {
      tmp147 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[340] /* jun_5.port_2.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta148 = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        const char* assert_cond = "(jun_5.port_2.m_flow >= -9.999999999999999e+59 and jun_5.port_2.m_flow <= 9.999999999999999e+59)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",13,5,14,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",13,5,14,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        }
      }
      tmp149 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4420
type: ALGORITHM

  assert(jun_5.port_2.h_outflow >= -10000000000.0 and jun_5.port_2.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= jun_5.port_2.h_outflow <= 10000000000.0, has value: " + String(jun_5.port_2.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4420};
  modelica_boolean tmp150;
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,109,"Variable violating min/max constraint: -10000000000.0 <= jun_5.port_2.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp153;
  modelica_metatype tmpMeta154;
  static int tmp155 = 0;
  if(!tmp155)
  {
    tmp150 = GreaterEq((data->localData[0]->realVars[339] /* jun_5.port_2.h_outflow variable */),-10000000000.0);
    tmp151 = LessEq((data->localData[0]->realVars[339] /* jun_5.port_2.h_outflow variable */),10000000000.0);
    if(!(tmp150 && tmp151))
    {
      tmp153 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[339] /* jun_5.port_2.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta154 = stringAppend(MMC_REFSTRINGLIT(tmp152),tmp153);
      {
        const char* assert_cond = "(jun_5.port_2.h_outflow >= -10000000000.0 and jun_5.port_2.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta154));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta154));
        }
      }
      tmp155 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4421
type: ALGORITHM

  assert(jun_6.port_2.m_flow >= -9.999999999999999e+59 and jun_6.port_2.m_flow <= 9.999999999999999e+59, "Variable violating min/max constraint: -9.999999999999999e+59 <= jun_6.port_2.m_flow <= 9.999999999999999e+59, has value: " + String(jun_6.port_2.m_flow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4421};
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  static const MMC_DEFSTRINGLIT(tmp158,122,"Variable violating min/max constraint: -9.999999999999999e+59 <= jun_6.port_2.m_flow <= 9.999999999999999e+59, has value: ");
  modelica_string tmp159;
  modelica_metatype tmpMeta160;
  static int tmp161 = 0;
  if(!tmp161)
  {
    tmp156 = GreaterEq((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),-9.999999999999999e+59);
    tmp157 = LessEq((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */),9.999999999999999e+59);
    if(!(tmp156 && tmp157))
    {
      tmp159 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[342] /* jun_6.port_2.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta160 = stringAppend(MMC_REFSTRINGLIT(tmp158),tmp159);
      {
        const char* assert_cond = "(jun_6.port_2.m_flow >= -9.999999999999999e+59 and jun_6.port_2.m_flow <= 9.999999999999999e+59)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",13,5,14,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta160));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",13,5,14,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta160));
        }
      }
      tmp161 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4422
type: ALGORITHM

  assert(jun_6.port_2.h_outflow >= -10000000000.0 and jun_6.port_2.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= jun_6.port_2.h_outflow <= 10000000000.0, has value: " + String(jun_6.port_2.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4422};
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  static const MMC_DEFSTRINGLIT(tmp164,109,"Variable violating min/max constraint: -10000000000.0 <= jun_6.port_2.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp165;
  modelica_metatype tmpMeta166;
  static int tmp167 = 0;
  if(!tmp167)
  {
    tmp162 = GreaterEq((data->localData[0]->realVars[341] /* jun_6.port_2.h_outflow variable */),-10000000000.0);
    tmp163 = LessEq((data->localData[0]->realVars[341] /* jun_6.port_2.h_outflow variable */),10000000000.0);
    if(!(tmp162 && tmp163))
    {
      tmp165 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[341] /* jun_6.port_2.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta166 = stringAppend(MMC_REFSTRINGLIT(tmp164),tmp165);
      {
        const char* assert_cond = "(jun_6.port_2.h_outflow >= -10000000000.0 and jun_6.port_2.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        }
      }
      tmp167 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4423
type: ALGORITHM

  assert(chw_sup.ports[2].h_outflow >= -10000000000.0 and chw_sup.ports[2].h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= chw_sup.ports[2].h_outflow <= 10000000000.0, has value: " + String(chw_sup.ports[2].h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4423};
  modelica_boolean tmp168;
  modelica_boolean tmp169;
  static const MMC_DEFSTRINGLIT(tmp170,113,"Variable violating min/max constraint: -10000000000.0 <= chw_sup.ports[2].h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp171;
  modelica_metatype tmpMeta172;
  static int tmp173 = 0;
  if(!tmp173)
  {
    tmp168 = GreaterEq((data->localData[0]->realVars[184] /* chw_sup.ports[2].h_outflow variable */),-10000000000.0);
    tmp169 = LessEq((data->localData[0]->realVars[184] /* chw_sup.ports[2].h_outflow variable */),10000000000.0);
    if(!(tmp168 && tmp169))
    {
      tmp171 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[184] /* chw_sup.ports[2].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta172 = stringAppend(MMC_REFSTRINGLIT(tmp170),tmp171);
      {
        const char* assert_cond = "(chw_sup.ports[2].h_outflow >= -10000000000.0 and chw_sup.ports[2].h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta172));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta172));
        }
      }
      tmp173 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4424
type: ALGORITHM

  assert(chw_ret_m.port_a.h_outflow >= -10000000000.0 and chw_ret_m.port_a.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= chw_ret_m.port_a.h_outflow <= 10000000000.0, has value: " + String(chw_ret_m.port_a.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4424};
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  static const MMC_DEFSTRINGLIT(tmp176,113,"Variable violating min/max constraint: -10000000000.0 <= chw_ret_m.port_a.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp177;
  modelica_metatype tmpMeta178;
  static int tmp179 = 0;
  if(!tmp179)
  {
    tmp174 = GreaterEq((data->localData[0]->realVars[182] /* chw_ret_m.port_a.h_outflow variable */),-10000000000.0);
    tmp175 = LessEq((data->localData[0]->realVars[182] /* chw_ret_m.port_a.h_outflow variable */),10000000000.0);
    if(!(tmp174 && tmp175))
    {
      tmp177 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[182] /* chw_ret_m.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta178 = stringAppend(MMC_REFSTRINGLIT(tmp176),tmp177);
      {
        const char* assert_cond = "(chw_ret_m.port_a.h_outflow >= -10000000000.0 and chw_ret_m.port_a.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta178));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta178));
        }
      }
      tmp179 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4425
type: ALGORITHM

  assert(chw_sup_P.p >= 0.0 and chw_sup_P.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= chw_sup_P.p <= 100000000.0, has value: " + String(chw_sup_P.p, "g"));
*/
void nb_hydr_static_v6_eqFunction_4425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4425};
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,85,"Variable violating min/max constraint: 0.0 <= chw_sup_P.p <= 100000000.0, has value: ");
  modelica_string tmp183;
  modelica_metatype tmpMeta184;
  static int tmp185 = 0;
  if(!tmp185)
  {
    tmp180 = GreaterEq((data->localData[0]->realVars[186] /* chw_sup_P.p variable */),0.0);
    tmp181 = LessEq((data->localData[0]->realVars[186] /* chw_sup_P.p variable */),100000000.0);
    if(!(tmp180 && tmp181))
    {
      tmp183 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[186] /* chw_sup_P.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta184 = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        const char* assert_cond = "(chw_sup_P.p >= 0.0 and chw_sup_P.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Sensors/Pressure.mo",6,3,9,72,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta184));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Sensors/Pressure.mo",6,3,9,72,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta184));
        }
      }
      tmp185 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4426
type: ALGORITHM

  assert(terminal_resist.port_b.h_outflow >= -10000000000.0 and terminal_resist.port_b.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= terminal_resist.port_b.h_outflow <= 10000000000.0, has value: " + String(terminal_resist.port_b.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4426};
  modelica_boolean tmp186;
  modelica_boolean tmp187;
  static const MMC_DEFSTRINGLIT(tmp188,119,"Variable violating min/max constraint: -10000000000.0 <= terminal_resist.port_b.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp189;
  modelica_metatype tmpMeta190;
  static int tmp191 = 0;
  if(!tmp191)
  {
    tmp186 = GreaterEq((data->localData[0]->realVars[350] /* terminal_resist.port_b.h_outflow variable */),-10000000000.0);
    tmp187 = LessEq((data->localData[0]->realVars[350] /* terminal_resist.port_b.h_outflow variable */),10000000000.0);
    if(!(tmp186 && tmp187))
    {
      tmp189 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[350] /* terminal_resist.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta190 = stringAppend(MMC_REFSTRINGLIT(tmp188),tmp189);
      {
        const char* assert_cond = "(terminal_resist.port_b.h_outflow >= -10000000000.0 and terminal_resist.port_b.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta190));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta190));
        }
      }
      tmp191 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4427
type: ALGORITHM

  assert(terminal_resist.m_flow >= -9.999999999999999e+59 and terminal_resist.m_flow <= 100000.0, "Variable violating min/max constraint: -9.999999999999999e+59 <= terminal_resist.m_flow <= 100000.0, has value: " + String(terminal_resist.m_flow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4427};
  modelica_boolean tmp192;
  modelica_boolean tmp193;
  static const MMC_DEFSTRINGLIT(tmp194,112,"Variable violating min/max constraint: -9.999999999999999e+59 <= terminal_resist.m_flow <= 100000.0, has value: ");
  modelica_string tmp195;
  modelica_metatype tmpMeta196;
  static int tmp197 = 0;
  if(!tmp197)
  {
    tmp192 = GreaterEq((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */),-9.999999999999999e+59);
    tmp193 = LessEq((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */),100000.0);
    if(!(tmp192 && tmp193))
    {
      tmp195 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[348] /* terminal_resist.m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta196 = stringAppend(MMC_REFSTRINGLIT(tmp194),tmp195);
      {
        const char* assert_cond = "(terminal_resist.m_flow >= -9.999999999999999e+59 and terminal_resist.m_flow <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/PartialTwoPortInterface.mo",21,3,22,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta196));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Interfaces/PartialTwoPortInterface.mo",21,3,22,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta196));
        }
      }
      tmp197 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4428
type: ALGORITHM

  assert(terminal_resist.k >= 1e-60, "Variable violating min constraint: 1e-60 <= terminal_resist.k, has value: " + String(terminal_resist.k, "g"));
*/
void nb_hydr_static_v6_eqFunction_4428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4428};
  modelica_boolean tmp198;
  static const MMC_DEFSTRINGLIT(tmp199,74,"Variable violating min constraint: 1e-60 <= terminal_resist.k, has value: ");
  modelica_string tmp200;
  modelica_metatype tmpMeta201;
  static int tmp202 = 0;
  if(!tmp202)
  {
    tmp198 = GreaterEq((data->localData[0]->realVars[347] /* terminal_resist.k variable */),1e-60);
    if(!tmp198)
    {
      tmp200 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[347] /* terminal_resist.k variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta201 = stringAppend(MMC_REFSTRINGLIT(tmp199),tmp200);
      {
        const char* assert_cond = "(terminal_resist.k >= 1e-60)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta201));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Fluid/Actuators/BaseClasses/PartialTwoWayValve.mo",26,3,27,95,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta201));
        }
      }
      tmp202 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4429
type: ALGORITHM

  assert(checkvalve_1.port_a.p >= 0.0 and checkvalve_1.port_a.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= checkvalve_1.port_a.p <= 100000000.0, has value: " + String(checkvalve_1.port_a.p, "g"));
*/
void nb_hydr_static_v6_eqFunction_4429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4429};
  modelica_boolean tmp203;
  modelica_boolean tmp204;
  static const MMC_DEFSTRINGLIT(tmp205,95,"Variable violating min/max constraint: 0.0 <= checkvalve_1.port_a.p <= 100000000.0, has value: ");
  modelica_string tmp206;
  modelica_metatype tmpMeta207;
  static int tmp208 = 0;
  if(!tmp208)
  {
    tmp203 = GreaterEq((data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */),0.0);
    tmp204 = LessEq((data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */),100000000.0);
    if(!(tmp203 && tmp204))
    {
      tmp206 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[126] /* checkvalve_1.port_a.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta207 = stringAppend(MMC_REFSTRINGLIT(tmp205),tmp206);
      {
        const char* assert_cond = "(checkvalve_1.port_a.p >= 0.0 and checkvalve_1.port_a.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        }
      }
      tmp208 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4430
type: ALGORITHM

  assert(checkvalve_1.port_a.h_outflow >= -10000000000.0 and checkvalve_1.port_a.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= checkvalve_1.port_a.h_outflow <= 10000000000.0, has value: " + String(checkvalve_1.port_a.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4430};
  modelica_boolean tmp209;
  modelica_boolean tmp210;
  static const MMC_DEFSTRINGLIT(tmp211,116,"Variable violating min/max constraint: -10000000000.0 <= checkvalve_1.port_a.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp212;
  modelica_metatype tmpMeta213;
  static int tmp214 = 0;
  if(!tmp214)
  {
    tmp209 = GreaterEq((data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */),-10000000000.0);
    tmp210 = LessEq((data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */),10000000000.0);
    if(!(tmp209 && tmp210))
    {
      tmp212 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[125] /* checkvalve_1.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta213 = stringAppend(MMC_REFSTRINGLIT(tmp211),tmp212);
      {
        const char* assert_cond = "(checkvalve_1.port_a.h_outflow >= -10000000000.0 and checkvalve_1.port_a.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta213));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta213));
        }
      }
      tmp214 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4431
type: ALGORITHM

  assert(checkvalve_1.port_b.p >= 0.0 and checkvalve_1.port_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= checkvalve_1.port_b.p <= 100000000.0, has value: " + String(checkvalve_1.port_b.p, "g"));
*/
void nb_hydr_static_v6_eqFunction_4431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4431};
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,95,"Variable violating min/max constraint: 0.0 <= checkvalve_1.port_b.p <= 100000000.0, has value: ");
  modelica_string tmp218;
  modelica_metatype tmpMeta219;
  static int tmp220 = 0;
  if(!tmp220)
  {
    tmp215 = GreaterEq((data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */),0.0);
    tmp216 = LessEq((data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */),100000000.0);
    if(!(tmp215 && tmp216))
    {
      tmp218 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[129] /* checkvalve_1.port_b.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta219 = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        const char* assert_cond = "(checkvalve_1.port_b.p >= 0.0 and checkvalve_1.port_b.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta219));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta219));
        }
      }
      tmp220 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4432
type: ALGORITHM

  assert(checkvalve_1.port_b.h_outflow >= -10000000000.0 and checkvalve_1.port_b.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= checkvalve_1.port_b.h_outflow <= 10000000000.0, has value: " + String(checkvalve_1.port_b.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4432};
  modelica_boolean tmp221;
  modelica_boolean tmp222;
  static const MMC_DEFSTRINGLIT(tmp223,116,"Variable violating min/max constraint: -10000000000.0 <= checkvalve_1.port_b.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp224;
  modelica_metatype tmpMeta225;
  static int tmp226 = 0;
  if(!tmp226)
  {
    tmp221 = GreaterEq((data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */),-10000000000.0);
    tmp222 = LessEq((data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */),10000000000.0);
    if(!(tmp221 && tmp222))
    {
      tmp224 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[128] /* checkvalve_1.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta225 = stringAppend(MMC_REFSTRINGLIT(tmp223),tmp224);
      {
        const char* assert_cond = "(checkvalve_1.port_b.h_outflow >= -10000000000.0 and checkvalve_1.port_b.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta225));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta225));
        }
      }
      tmp226 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4433
type: ALGORITHM

  assert(checkvalve_1.port_a_T >= 1.0 and checkvalve_1.port_a_T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_1.port_a_T <= 10000.0, has value: " + String(checkvalve_1.port_a_T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4433};
  modelica_boolean tmp227;
  modelica_boolean tmp228;
  static const MMC_DEFSTRINGLIT(tmp229,91,"Variable violating min/max constraint: 1.0 <= checkvalve_1.port_a_T <= 10000.0, has value: ");
  modelica_string tmp230;
  modelica_metatype tmpMeta231;
  static int tmp232 = 0;
  if(!tmp232)
  {
    tmp227 = GreaterEq((data->localData[0]->realVars[127] /* checkvalve_1.port_a_T variable */),1.0);
    tmp228 = LessEq((data->localData[0]->realVars[127] /* checkvalve_1.port_a_T variable */),10000.0);
    if(!(tmp227 && tmp228))
    {
      tmp230 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[127] /* checkvalve_1.port_a_T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta231 = stringAppend(MMC_REFSTRINGLIT(tmp229),tmp230);
      {
        const char* assert_cond = "(checkvalve_1.port_a_T >= 1.0 and checkvalve_1.port_a_T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",319,3,324,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta231));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",319,3,324,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta231));
        }
      }
      tmp232 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4434
type: ALGORITHM

  assert(checkvalve_1.port_b_T >= 1.0 and checkvalve_1.port_b_T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_1.port_b_T <= 10000.0, has value: " + String(checkvalve_1.port_b_T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4434};
  modelica_boolean tmp233;
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,91,"Variable violating min/max constraint: 1.0 <= checkvalve_1.port_b_T <= 10000.0, has value: ");
  modelica_string tmp236;
  modelica_metatype tmpMeta237;
  static int tmp238 = 0;
  if(!tmp238)
  {
    tmp233 = GreaterEq((data->localData[0]->realVars[130] /* checkvalve_1.port_b_T variable */),1.0);
    tmp234 = LessEq((data->localData[0]->realVars[130] /* checkvalve_1.port_b_T variable */),10000.0);
    if(!(tmp233 && tmp234))
    {
      tmp236 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[130] /* checkvalve_1.port_b_T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta237 = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        const char* assert_cond = "(checkvalve_1.port_b_T >= 1.0 and checkvalve_1.port_b_T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",325,3,330,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",325,3,330,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        }
      }
      tmp238 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4435
type: ALGORITHM

  assert(checkvalve_1.state_a.T >= 1.0 and checkvalve_1.state_a.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_1.state_a.T <= 10000.0, has value: " + String(checkvalve_1.state_a.T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4435};
  modelica_boolean tmp239;
  modelica_boolean tmp240;
  static const MMC_DEFSTRINGLIT(tmp241,92,"Variable violating min/max constraint: 1.0 <= checkvalve_1.state_a.T <= 10000.0, has value: ");
  modelica_string tmp242;
  modelica_metatype tmpMeta243;
  static int tmp244 = 0;
  if(!tmp244)
  {
    tmp239 = GreaterEq((data->localData[0]->realVars[132] /* checkvalve_1.state_a.T variable */),1.0);
    tmp240 = LessEq((data->localData[0]->realVars[132] /* checkvalve_1.state_a.T variable */),10000.0);
    if(!(tmp239 && tmp240))
    {
      tmp242 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[132] /* checkvalve_1.state_a.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta243 = stringAppend(MMC_REFSTRINGLIT(tmp241),tmp242);
      {
        const char* assert_cond = "(checkvalve_1.state_a.T >= 1.0 and checkvalve_1.state_a.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta243));
        }
      }
      tmp244 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4436
type: ALGORITHM

  assert(checkvalve_1.state_b.T >= 1.0 and checkvalve_1.state_b.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_1.state_b.T <= 10000.0, has value: " + String(checkvalve_1.state_b.T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4436};
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,92,"Variable violating min/max constraint: 1.0 <= checkvalve_1.state_b.T <= 10000.0, has value: ");
  modelica_string tmp248;
  modelica_metatype tmpMeta249;
  static int tmp250 = 0;
  if(!tmp250)
  {
    tmp245 = GreaterEq((data->localData[0]->realVars[133] /* checkvalve_1.state_b.T variable */),1.0);
    tmp246 = LessEq((data->localData[0]->realVars[133] /* checkvalve_1.state_b.T variable */),10000.0);
    if(!(tmp245 && tmp246))
    {
      tmp248 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[133] /* checkvalve_1.state_b.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta249 = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        const char* assert_cond = "(checkvalve_1.state_b.T >= 1.0 and checkvalve_1.state_b.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta249));
        }
      }
      tmp250 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4437
type: ALGORITHM

  assert(checkvalve_2.port_a.p >= 0.0 and checkvalve_2.port_a.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= checkvalve_2.port_a.p <= 100000000.0, has value: " + String(checkvalve_2.port_a.p, "g"));
*/
void nb_hydr_static_v6_eqFunction_4437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4437};
  modelica_boolean tmp251;
  modelica_boolean tmp252;
  static const MMC_DEFSTRINGLIT(tmp253,95,"Variable violating min/max constraint: 0.0 <= checkvalve_2.port_a.p <= 100000000.0, has value: ");
  modelica_string tmp254;
  modelica_metatype tmpMeta255;
  static int tmp256 = 0;
  if(!tmp256)
  {
    tmp251 = GreaterEq((data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */),0.0);
    tmp252 = LessEq((data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */),100000000.0);
    if(!(tmp251 && tmp252))
    {
      tmp254 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[138] /* checkvalve_2.port_a.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta255 = stringAppend(MMC_REFSTRINGLIT(tmp253),tmp254);
      {
        const char* assert_cond = "(checkvalve_2.port_a.p >= 0.0 and checkvalve_2.port_a.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta255));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta255));
        }
      }
      tmp256 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4438
type: ALGORITHM

  assert(checkvalve_2.port_a.h_outflow >= -10000000000.0 and checkvalve_2.port_a.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= checkvalve_2.port_a.h_outflow <= 10000000000.0, has value: " + String(checkvalve_2.port_a.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4438};
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  static const MMC_DEFSTRINGLIT(tmp259,116,"Variable violating min/max constraint: -10000000000.0 <= checkvalve_2.port_a.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp260;
  modelica_metatype tmpMeta261;
  static int tmp262 = 0;
  if(!tmp262)
  {
    tmp257 = GreaterEq((data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */),-10000000000.0);
    tmp258 = LessEq((data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */),10000000000.0);
    if(!(tmp257 && tmp258))
    {
      tmp260 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[137] /* checkvalve_2.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta261 = stringAppend(MMC_REFSTRINGLIT(tmp259),tmp260);
      {
        const char* assert_cond = "(checkvalve_2.port_a.h_outflow >= -10000000000.0 and checkvalve_2.port_a.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        }
      }
      tmp262 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4439
type: ALGORITHM

  assert(checkvalve_2.port_b.p >= 0.0 and checkvalve_2.port_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= checkvalve_2.port_b.p <= 100000000.0, has value: " + String(checkvalve_2.port_b.p, "g"));
*/
void nb_hydr_static_v6_eqFunction_4439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4439};
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  static const MMC_DEFSTRINGLIT(tmp265,95,"Variable violating min/max constraint: 0.0 <= checkvalve_2.port_b.p <= 100000000.0, has value: ");
  modelica_string tmp266;
  modelica_metatype tmpMeta267;
  static int tmp268 = 0;
  if(!tmp268)
  {
    tmp263 = GreaterEq((data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */),0.0);
    tmp264 = LessEq((data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */),100000000.0);
    if(!(tmp263 && tmp264))
    {
      tmp266 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[141] /* checkvalve_2.port_b.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta267 = stringAppend(MMC_REFSTRINGLIT(tmp265),tmp266);
      {
        const char* assert_cond = "(checkvalve_2.port_b.p >= 0.0 and checkvalve_2.port_b.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta267));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta267));
        }
      }
      tmp268 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4440
type: ALGORITHM

  assert(checkvalve_2.port_b.h_outflow >= -10000000000.0 and checkvalve_2.port_b.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= checkvalve_2.port_b.h_outflow <= 10000000000.0, has value: " + String(checkvalve_2.port_b.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4440};
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  static const MMC_DEFSTRINGLIT(tmp271,116,"Variable violating min/max constraint: -10000000000.0 <= checkvalve_2.port_b.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp272;
  modelica_metatype tmpMeta273;
  static int tmp274 = 0;
  if(!tmp274)
  {
    tmp269 = GreaterEq((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */),-10000000000.0);
    tmp270 = LessEq((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */),10000000000.0);
    if(!(tmp269 && tmp270))
    {
      tmp272 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[140] /* checkvalve_2.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta273 = stringAppend(MMC_REFSTRINGLIT(tmp271),tmp272);
      {
        const char* assert_cond = "(checkvalve_2.port_b.h_outflow >= -10000000000.0 and checkvalve_2.port_b.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta273));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta273));
        }
      }
      tmp274 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4441
type: ALGORITHM

  assert(checkvalve_2.port_a_T >= 1.0 and checkvalve_2.port_a_T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_2.port_a_T <= 10000.0, has value: " + String(checkvalve_2.port_a_T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4441};
  modelica_boolean tmp275;
  modelica_boolean tmp276;
  static const MMC_DEFSTRINGLIT(tmp277,91,"Variable violating min/max constraint: 1.0 <= checkvalve_2.port_a_T <= 10000.0, has value: ");
  modelica_string tmp278;
  modelica_metatype tmpMeta279;
  static int tmp280 = 0;
  if(!tmp280)
  {
    tmp275 = GreaterEq((data->localData[0]->realVars[139] /* checkvalve_2.port_a_T variable */),1.0);
    tmp276 = LessEq((data->localData[0]->realVars[139] /* checkvalve_2.port_a_T variable */),10000.0);
    if(!(tmp275 && tmp276))
    {
      tmp278 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[139] /* checkvalve_2.port_a_T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta279 = stringAppend(MMC_REFSTRINGLIT(tmp277),tmp278);
      {
        const char* assert_cond = "(checkvalve_2.port_a_T >= 1.0 and checkvalve_2.port_a_T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",319,3,324,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta279));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",319,3,324,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta279));
        }
      }
      tmp280 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4442
type: ALGORITHM

  assert(checkvalve_2.port_b_T >= 1.0 and checkvalve_2.port_b_T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_2.port_b_T <= 10000.0, has value: " + String(checkvalve_2.port_b_T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4442};
  modelica_boolean tmp281;
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,91,"Variable violating min/max constraint: 1.0 <= checkvalve_2.port_b_T <= 10000.0, has value: ");
  modelica_string tmp284;
  modelica_metatype tmpMeta285;
  static int tmp286 = 0;
  if(!tmp286)
  {
    tmp281 = GreaterEq((data->localData[0]->realVars[142] /* checkvalve_2.port_b_T variable */),1.0);
    tmp282 = LessEq((data->localData[0]->realVars[142] /* checkvalve_2.port_b_T variable */),10000.0);
    if(!(tmp281 && tmp282))
    {
      tmp284 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[142] /* checkvalve_2.port_b_T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta285 = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        const char* assert_cond = "(checkvalve_2.port_b_T >= 1.0 and checkvalve_2.port_b_T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",325,3,330,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta285));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",325,3,330,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta285));
        }
      }
      tmp286 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4443
type: ALGORITHM

  assert(checkvalve_2.state_a.T >= 1.0 and checkvalve_2.state_a.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_2.state_a.T <= 10000.0, has value: " + String(checkvalve_2.state_a.T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4443};
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  static const MMC_DEFSTRINGLIT(tmp289,92,"Variable violating min/max constraint: 1.0 <= checkvalve_2.state_a.T <= 10000.0, has value: ");
  modelica_string tmp290;
  modelica_metatype tmpMeta291;
  static int tmp292 = 0;
  if(!tmp292)
  {
    tmp287 = GreaterEq((data->localData[0]->realVars[144] /* checkvalve_2.state_a.T variable */),1.0);
    tmp288 = LessEq((data->localData[0]->realVars[144] /* checkvalve_2.state_a.T variable */),10000.0);
    if(!(tmp287 && tmp288))
    {
      tmp290 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[144] /* checkvalve_2.state_a.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta291 = stringAppend(MMC_REFSTRINGLIT(tmp289),tmp290);
      {
        const char* assert_cond = "(checkvalve_2.state_a.T >= 1.0 and checkvalve_2.state_a.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta291));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta291));
        }
      }
      tmp292 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4444
type: ALGORITHM

  assert(checkvalve_2.state_b.T >= 1.0 and checkvalve_2.state_b.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_2.state_b.T <= 10000.0, has value: " + String(checkvalve_2.state_b.T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4444};
  modelica_boolean tmp293;
  modelica_boolean tmp294;
  static const MMC_DEFSTRINGLIT(tmp295,92,"Variable violating min/max constraint: 1.0 <= checkvalve_2.state_b.T <= 10000.0, has value: ");
  modelica_string tmp296;
  modelica_metatype tmpMeta297;
  static int tmp298 = 0;
  if(!tmp298)
  {
    tmp293 = GreaterEq((data->localData[0]->realVars[145] /* checkvalve_2.state_b.T variable */),1.0);
    tmp294 = LessEq((data->localData[0]->realVars[145] /* checkvalve_2.state_b.T variable */),10000.0);
    if(!(tmp293 && tmp294))
    {
      tmp296 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[145] /* checkvalve_2.state_b.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta297 = stringAppend(MMC_REFSTRINGLIT(tmp295),tmp296);
      {
        const char* assert_cond = "(checkvalve_2.state_b.T >= 1.0 and checkvalve_2.state_b.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta297));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta297));
        }
      }
      tmp298 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4445
type: ALGORITHM

  assert(checkvalve_3.port_a.p >= 0.0 and checkvalve_3.port_a.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= checkvalve_3.port_a.p <= 100000000.0, has value: " + String(checkvalve_3.port_a.p, "g"));
*/
void nb_hydr_static_v6_eqFunction_4445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4445};
  modelica_boolean tmp299;
  modelica_boolean tmp300;
  static const MMC_DEFSTRINGLIT(tmp301,95,"Variable violating min/max constraint: 0.0 <= checkvalve_3.port_a.p <= 100000000.0, has value: ");
  modelica_string tmp302;
  modelica_metatype tmpMeta303;
  static int tmp304 = 0;
  if(!tmp304)
  {
    tmp299 = GreaterEq((data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */),0.0);
    tmp300 = LessEq((data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */),100000000.0);
    if(!(tmp299 && tmp300))
    {
      tmp302 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[150] /* checkvalve_3.port_a.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta303 = stringAppend(MMC_REFSTRINGLIT(tmp301),tmp302);
      {
        const char* assert_cond = "(checkvalve_3.port_a.p >= 0.0 and checkvalve_3.port_a.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta303));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta303));
        }
      }
      tmp304 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4446
type: ALGORITHM

  assert(checkvalve_3.port_a.h_outflow >= -10000000000.0 and checkvalve_3.port_a.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= checkvalve_3.port_a.h_outflow <= 10000000000.0, has value: " + String(checkvalve_3.port_a.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4446};
  modelica_boolean tmp305;
  modelica_boolean tmp306;
  static const MMC_DEFSTRINGLIT(tmp307,116,"Variable violating min/max constraint: -10000000000.0 <= checkvalve_3.port_a.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp308;
  modelica_metatype tmpMeta309;
  static int tmp310 = 0;
  if(!tmp310)
  {
    tmp305 = GreaterEq((data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */),-10000000000.0);
    tmp306 = LessEq((data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */),10000000000.0);
    if(!(tmp305 && tmp306))
    {
      tmp308 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[149] /* checkvalve_3.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta309 = stringAppend(MMC_REFSTRINGLIT(tmp307),tmp308);
      {
        const char* assert_cond = "(checkvalve_3.port_a.h_outflow >= -10000000000.0 and checkvalve_3.port_a.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta309));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta309));
        }
      }
      tmp310 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4447
type: ALGORITHM

  assert(checkvalve_3.port_b.p >= 0.0 and checkvalve_3.port_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= checkvalve_3.port_b.p <= 100000000.0, has value: " + String(checkvalve_3.port_b.p, "g"));
*/
void nb_hydr_static_v6_eqFunction_4447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4447};
  modelica_boolean tmp311;
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,95,"Variable violating min/max constraint: 0.0 <= checkvalve_3.port_b.p <= 100000000.0, has value: ");
  modelica_string tmp314;
  modelica_metatype tmpMeta315;
  static int tmp316 = 0;
  if(!tmp316)
  {
    tmp311 = GreaterEq((data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */),0.0);
    tmp312 = LessEq((data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */),100000000.0);
    if(!(tmp311 && tmp312))
    {
      tmp314 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[153] /* checkvalve_3.port_b.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta315 = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        const char* assert_cond = "(checkvalve_3.port_b.p >= 0.0 and checkvalve_3.port_b.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta315));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta315));
        }
      }
      tmp316 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4448
type: ALGORITHM

  assert(checkvalve_3.port_b.h_outflow >= -10000000000.0 and checkvalve_3.port_b.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= checkvalve_3.port_b.h_outflow <= 10000000000.0, has value: " + String(checkvalve_3.port_b.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4448};
  modelica_boolean tmp317;
  modelica_boolean tmp318;
  static const MMC_DEFSTRINGLIT(tmp319,116,"Variable violating min/max constraint: -10000000000.0 <= checkvalve_3.port_b.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp320;
  modelica_metatype tmpMeta321;
  static int tmp322 = 0;
  if(!tmp322)
  {
    tmp317 = GreaterEq((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */),-10000000000.0);
    tmp318 = LessEq((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */),10000000000.0);
    if(!(tmp317 && tmp318))
    {
      tmp320 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[152] /* checkvalve_3.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta321 = stringAppend(MMC_REFSTRINGLIT(tmp319),tmp320);
      {
        const char* assert_cond = "(checkvalve_3.port_b.h_outflow >= -10000000000.0 and checkvalve_3.port_b.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta321));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta321));
        }
      }
      tmp322 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4449
type: ALGORITHM

  assert(checkvalve_3.port_a_T >= 1.0 and checkvalve_3.port_a_T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_3.port_a_T <= 10000.0, has value: " + String(checkvalve_3.port_a_T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4449};
  modelica_boolean tmp323;
  modelica_boolean tmp324;
  static const MMC_DEFSTRINGLIT(tmp325,91,"Variable violating min/max constraint: 1.0 <= checkvalve_3.port_a_T <= 10000.0, has value: ");
  modelica_string tmp326;
  modelica_metatype tmpMeta327;
  static int tmp328 = 0;
  if(!tmp328)
  {
    tmp323 = GreaterEq((data->localData[0]->realVars[151] /* checkvalve_3.port_a_T variable */),1.0);
    tmp324 = LessEq((data->localData[0]->realVars[151] /* checkvalve_3.port_a_T variable */),10000.0);
    if(!(tmp323 && tmp324))
    {
      tmp326 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[151] /* checkvalve_3.port_a_T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta327 = stringAppend(MMC_REFSTRINGLIT(tmp325),tmp326);
      {
        const char* assert_cond = "(checkvalve_3.port_a_T >= 1.0 and checkvalve_3.port_a_T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",319,3,324,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta327));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",319,3,324,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta327));
        }
      }
      tmp328 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4450
type: ALGORITHM

  assert(checkvalve_3.port_b_T >= 1.0 and checkvalve_3.port_b_T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_3.port_b_T <= 10000.0, has value: " + String(checkvalve_3.port_b_T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4450};
  modelica_boolean tmp329;
  modelica_boolean tmp330;
  static const MMC_DEFSTRINGLIT(tmp331,91,"Variable violating min/max constraint: 1.0 <= checkvalve_3.port_b_T <= 10000.0, has value: ");
  modelica_string tmp332;
  modelica_metatype tmpMeta333;
  static int tmp334 = 0;
  if(!tmp334)
  {
    tmp329 = GreaterEq((data->localData[0]->realVars[154] /* checkvalve_3.port_b_T variable */),1.0);
    tmp330 = LessEq((data->localData[0]->realVars[154] /* checkvalve_3.port_b_T variable */),10000.0);
    if(!(tmp329 && tmp330))
    {
      tmp332 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[154] /* checkvalve_3.port_b_T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta333 = stringAppend(MMC_REFSTRINGLIT(tmp331),tmp332);
      {
        const char* assert_cond = "(checkvalve_3.port_b_T >= 1.0 and checkvalve_3.port_b_T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",325,3,330,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta333));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",325,3,330,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta333));
        }
      }
      tmp334 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4451
type: ALGORITHM

  assert(checkvalve_3.state_a.T >= 1.0 and checkvalve_3.state_a.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_3.state_a.T <= 10000.0, has value: " + String(checkvalve_3.state_a.T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4451};
  modelica_boolean tmp335;
  modelica_boolean tmp336;
  static const MMC_DEFSTRINGLIT(tmp337,92,"Variable violating min/max constraint: 1.0 <= checkvalve_3.state_a.T <= 10000.0, has value: ");
  modelica_string tmp338;
  modelica_metatype tmpMeta339;
  static int tmp340 = 0;
  if(!tmp340)
  {
    tmp335 = GreaterEq((data->localData[0]->realVars[156] /* checkvalve_3.state_a.T variable */),1.0);
    tmp336 = LessEq((data->localData[0]->realVars[156] /* checkvalve_3.state_a.T variable */),10000.0);
    if(!(tmp335 && tmp336))
    {
      tmp338 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[156] /* checkvalve_3.state_a.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta339 = stringAppend(MMC_REFSTRINGLIT(tmp337),tmp338);
      {
        const char* assert_cond = "(checkvalve_3.state_a.T >= 1.0 and checkvalve_3.state_a.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta339));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta339));
        }
      }
      tmp340 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4452
type: ALGORITHM

  assert(checkvalve_3.state_b.T >= 1.0 and checkvalve_3.state_b.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_3.state_b.T <= 10000.0, has value: " + String(checkvalve_3.state_b.T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4452};
  modelica_boolean tmp341;
  modelica_boolean tmp342;
  static const MMC_DEFSTRINGLIT(tmp343,92,"Variable violating min/max constraint: 1.0 <= checkvalve_3.state_b.T <= 10000.0, has value: ");
  modelica_string tmp344;
  modelica_metatype tmpMeta345;
  static int tmp346 = 0;
  if(!tmp346)
  {
    tmp341 = GreaterEq((data->localData[0]->realVars[157] /* checkvalve_3.state_b.T variable */),1.0);
    tmp342 = LessEq((data->localData[0]->realVars[157] /* checkvalve_3.state_b.T variable */),10000.0);
    if(!(tmp341 && tmp342))
    {
      tmp344 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[157] /* checkvalve_3.state_b.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta345 = stringAppend(MMC_REFSTRINGLIT(tmp343),tmp344);
      {
        const char* assert_cond = "(checkvalve_3.state_b.T >= 1.0 and checkvalve_3.state_b.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta345));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta345));
        }
      }
      tmp346 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4453
type: ALGORITHM

  assert(checkvalve_4.port_a.p >= 0.0 and checkvalve_4.port_a.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= checkvalve_4.port_a.p <= 100000000.0, has value: " + String(checkvalve_4.port_a.p, "g"));
*/
void nb_hydr_static_v6_eqFunction_4453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4453};
  modelica_boolean tmp347;
  modelica_boolean tmp348;
  static const MMC_DEFSTRINGLIT(tmp349,95,"Variable violating min/max constraint: 0.0 <= checkvalve_4.port_a.p <= 100000000.0, has value: ");
  modelica_string tmp350;
  modelica_metatype tmpMeta351;
  static int tmp352 = 0;
  if(!tmp352)
  {
    tmp347 = GreaterEq((data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */),0.0);
    tmp348 = LessEq((data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */),100000000.0);
    if(!(tmp347 && tmp348))
    {
      tmp350 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[162] /* checkvalve_4.port_a.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta351 = stringAppend(MMC_REFSTRINGLIT(tmp349),tmp350);
      {
        const char* assert_cond = "(checkvalve_4.port_a.p >= 0.0 and checkvalve_4.port_a.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta351));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta351));
        }
      }
      tmp352 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4454
type: ALGORITHM

  assert(checkvalve_4.port_a.h_outflow >= -10000000000.0 and checkvalve_4.port_a.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= checkvalve_4.port_a.h_outflow <= 10000000000.0, has value: " + String(checkvalve_4.port_a.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4454};
  modelica_boolean tmp353;
  modelica_boolean tmp354;
  static const MMC_DEFSTRINGLIT(tmp355,116,"Variable violating min/max constraint: -10000000000.0 <= checkvalve_4.port_a.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp356;
  modelica_metatype tmpMeta357;
  static int tmp358 = 0;
  if(!tmp358)
  {
    tmp353 = GreaterEq((data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */),-10000000000.0);
    tmp354 = LessEq((data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */),10000000000.0);
    if(!(tmp353 && tmp354))
    {
      tmp356 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[161] /* checkvalve_4.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta357 = stringAppend(MMC_REFSTRINGLIT(tmp355),tmp356);
      {
        const char* assert_cond = "(checkvalve_4.port_a.h_outflow >= -10000000000.0 and checkvalve_4.port_a.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta357));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta357));
        }
      }
      tmp358 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4455
type: ALGORITHM

  assert(checkvalve_4.port_b.p >= 0.0 and checkvalve_4.port_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= checkvalve_4.port_b.p <= 100000000.0, has value: " + String(checkvalve_4.port_b.p, "g"));
*/
void nb_hydr_static_v6_eqFunction_4455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4455};
  modelica_boolean tmp359;
  modelica_boolean tmp360;
  static const MMC_DEFSTRINGLIT(tmp361,95,"Variable violating min/max constraint: 0.0 <= checkvalve_4.port_b.p <= 100000000.0, has value: ");
  modelica_string tmp362;
  modelica_metatype tmpMeta363;
  static int tmp364 = 0;
  if(!tmp364)
  {
    tmp359 = GreaterEq((data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */),0.0);
    tmp360 = LessEq((data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */),100000000.0);
    if(!(tmp359 && tmp360))
    {
      tmp362 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[165] /* checkvalve_4.port_b.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta363 = stringAppend(MMC_REFSTRINGLIT(tmp361),tmp362);
      {
        const char* assert_cond = "(checkvalve_4.port_b.p >= 0.0 and checkvalve_4.port_b.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta363));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta363));
        }
      }
      tmp364 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4456
type: ALGORITHM

  assert(checkvalve_4.port_b.h_outflow >= -10000000000.0 and checkvalve_4.port_b.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= checkvalve_4.port_b.h_outflow <= 10000000000.0, has value: " + String(checkvalve_4.port_b.h_outflow, "g"));
*/
void nb_hydr_static_v6_eqFunction_4456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4456};
  modelica_boolean tmp365;
  modelica_boolean tmp366;
  static const MMC_DEFSTRINGLIT(tmp367,116,"Variable violating min/max constraint: -10000000000.0 <= checkvalve_4.port_b.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp368;
  modelica_metatype tmpMeta369;
  static int tmp370 = 0;
  if(!tmp370)
  {
    tmp365 = GreaterEq((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */),-10000000000.0);
    tmp366 = LessEq((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */),10000000000.0);
    if(!(tmp365 && tmp366))
    {
      tmp368 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[164] /* checkvalve_4.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta369 = stringAppend(MMC_REFSTRINGLIT(tmp367),tmp368);
      {
        const char* assert_cond = "(checkvalve_4.port_b.h_outflow >= -10000000000.0 and checkvalve_4.port_b.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta369));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta369));
        }
      }
      tmp370 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4457
type: ALGORITHM

  assert(checkvalve_4.port_a_T >= 1.0 and checkvalve_4.port_a_T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_4.port_a_T <= 10000.0, has value: " + String(checkvalve_4.port_a_T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4457};
  modelica_boolean tmp371;
  modelica_boolean tmp372;
  static const MMC_DEFSTRINGLIT(tmp373,91,"Variable violating min/max constraint: 1.0 <= checkvalve_4.port_a_T <= 10000.0, has value: ");
  modelica_string tmp374;
  modelica_metatype tmpMeta375;
  static int tmp376 = 0;
  if(!tmp376)
  {
    tmp371 = GreaterEq((data->localData[0]->realVars[163] /* checkvalve_4.port_a_T variable */),1.0);
    tmp372 = LessEq((data->localData[0]->realVars[163] /* checkvalve_4.port_a_T variable */),10000.0);
    if(!(tmp371 && tmp372))
    {
      tmp374 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[163] /* checkvalve_4.port_a_T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta375 = stringAppend(MMC_REFSTRINGLIT(tmp373),tmp374);
      {
        const char* assert_cond = "(checkvalve_4.port_a_T >= 1.0 and checkvalve_4.port_a_T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",319,3,324,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta375));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",319,3,324,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta375));
        }
      }
      tmp376 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4458
type: ALGORITHM

  assert(checkvalve_4.port_b_T >= 1.0 and checkvalve_4.port_b_T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_4.port_b_T <= 10000.0, has value: " + String(checkvalve_4.port_b_T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4458};
  modelica_boolean tmp377;
  modelica_boolean tmp378;
  static const MMC_DEFSTRINGLIT(tmp379,91,"Variable violating min/max constraint: 1.0 <= checkvalve_4.port_b_T <= 10000.0, has value: ");
  modelica_string tmp380;
  modelica_metatype tmpMeta381;
  static int tmp382 = 0;
  if(!tmp382)
  {
    tmp377 = GreaterEq((data->localData[0]->realVars[166] /* checkvalve_4.port_b_T variable */),1.0);
    tmp378 = LessEq((data->localData[0]->realVars[166] /* checkvalve_4.port_b_T variable */),10000.0);
    if(!(tmp377 && tmp378))
    {
      tmp380 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[166] /* checkvalve_4.port_b_T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta381 = stringAppend(MMC_REFSTRINGLIT(tmp379),tmp380);
      {
        const char* assert_cond = "(checkvalve_4.port_b_T >= 1.0 and checkvalve_4.port_b_T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",325,3,330,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta381));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Interfaces.mo",325,3,330,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta381));
        }
      }
      tmp382 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4459
type: ALGORITHM

  assert(checkvalve_4.state_a.T >= 1.0 and checkvalve_4.state_a.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_4.state_a.T <= 10000.0, has value: " + String(checkvalve_4.state_a.T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4459};
  modelica_boolean tmp383;
  modelica_boolean tmp384;
  static const MMC_DEFSTRINGLIT(tmp385,92,"Variable violating min/max constraint: 1.0 <= checkvalve_4.state_a.T <= 10000.0, has value: ");
  modelica_string tmp386;
  modelica_metatype tmpMeta387;
  static int tmp388 = 0;
  if(!tmp388)
  {
    tmp383 = GreaterEq((data->localData[0]->realVars[168] /* checkvalve_4.state_a.T variable */),1.0);
    tmp384 = LessEq((data->localData[0]->realVars[168] /* checkvalve_4.state_a.T variable */),10000.0);
    if(!(tmp383 && tmp384))
    {
      tmp386 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[168] /* checkvalve_4.state_a.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta387 = stringAppend(MMC_REFSTRINGLIT(tmp385),tmp386);
      {
        const char* assert_cond = "(checkvalve_4.state_a.T >= 1.0 and checkvalve_4.state_a.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta387));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta387));
        }
      }
      tmp388 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4460
type: ALGORITHM

  assert(checkvalve_4.state_b.T >= 1.0 and checkvalve_4.state_b.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= checkvalve_4.state_b.T <= 10000.0, has value: " + String(checkvalve_4.state_b.T, "g"));
*/
void nb_hydr_static_v6_eqFunction_4460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4460};
  modelica_boolean tmp389;
  modelica_boolean tmp390;
  static const MMC_DEFSTRINGLIT(tmp391,92,"Variable violating min/max constraint: 1.0 <= checkvalve_4.state_b.T <= 10000.0, has value: ");
  modelica_string tmp392;
  modelica_metatype tmpMeta393;
  static int tmp394 = 0;
  if(!tmp394)
  {
    tmp389 = GreaterEq((data->localData[0]->realVars[169] /* checkvalve_4.state_b.T variable */),1.0);
    tmp390 = LessEq((data->localData[0]->realVars[169] /* checkvalve_4.state_b.T variable */),10000.0);
    if(!(tmp389 && tmp390))
    {
      tmp392 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[169] /* checkvalve_4.state_b.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta393 = stringAppend(MMC_REFSTRINGLIT(tmp391),tmp392);
      {
        const char* assert_cond = "(checkvalve_4.state_b.T >= 1.0 and checkvalve_4.state_b.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta393));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Media/package.mo",6912,7,6912,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta393));
        }
      }
      tmp394 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 4461
type: ALGORITHM

  assert(conPID.y >= 0.0 and conPID.y <= 1.0, "Variable violating min/max constraint: 0.0 <= conPID.y <= 1.0, has value: " + String(conPID.y, "g"));
*/
void nb_hydr_static_v6_eqFunction_4461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4461};
  modelica_boolean tmp395;
  modelica_boolean tmp396;
  static const MMC_DEFSTRINGLIT(tmp397,74,"Variable violating min/max constraint: 0.0 <= conPID.y <= 1.0, has value: ");
  modelica_string tmp398;
  modelica_metatype tmpMeta399;
  static int tmp400 = 0;
  if(!tmp400)
  {
    tmp395 = GreaterEq((data->localData[0]->realVars[325] /* conPID.y variable */),0.0);
    tmp396 = LessEq((data->localData[0]->realVars[325] /* conPID.y variable */),1.0);
    if(!(tmp395 && tmp396))
    {
      tmp398 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[325] /* conPID.y variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta399 = stringAppend(MMC_REFSTRINGLIT(tmp397),tmp398);
      {
        const char* assert_cond = "(conPID.y >= 0.0 and conPID.y <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Interfaces.mo",501,5,502,56,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta399));
        } else {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Interfaces.mo",501,5,502,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta399));
        }
      }
      tmp400 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int nb_hydr_static_v6_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  nb_hydr_static_v6_eqFunction_4395(data, threadData);

  nb_hydr_static_v6_eqFunction_4396(data, threadData);

  nb_hydr_static_v6_eqFunction_4397(data, threadData);

  nb_hydr_static_v6_eqFunction_4398(data, threadData);

  nb_hydr_static_v6_eqFunction_4399(data, threadData);

  nb_hydr_static_v6_eqFunction_4400(data, threadData);

  nb_hydr_static_v6_eqFunction_4401(data, threadData);

  nb_hydr_static_v6_eqFunction_4402(data, threadData);

  nb_hydr_static_v6_eqFunction_4403(data, threadData);

  nb_hydr_static_v6_eqFunction_4404(data, threadData);

  nb_hydr_static_v6_eqFunction_4405(data, threadData);

  nb_hydr_static_v6_eqFunction_4406(data, threadData);

  nb_hydr_static_v6_eqFunction_4407(data, threadData);

  nb_hydr_static_v6_eqFunction_4408(data, threadData);

  nb_hydr_static_v6_eqFunction_4409(data, threadData);

  nb_hydr_static_v6_eqFunction_4410(data, threadData);

  nb_hydr_static_v6_eqFunction_4411(data, threadData);

  nb_hydr_static_v6_eqFunction_4412(data, threadData);

  nb_hydr_static_v6_eqFunction_4413(data, threadData);

  nb_hydr_static_v6_eqFunction_4414(data, threadData);

  nb_hydr_static_v6_eqFunction_4415(data, threadData);

  nb_hydr_static_v6_eqFunction_4416(data, threadData);

  nb_hydr_static_v6_eqFunction_4417(data, threadData);

  nb_hydr_static_v6_eqFunction_4418(data, threadData);

  nb_hydr_static_v6_eqFunction_4419(data, threadData);

  nb_hydr_static_v6_eqFunction_4420(data, threadData);

  nb_hydr_static_v6_eqFunction_4421(data, threadData);

  nb_hydr_static_v6_eqFunction_4422(data, threadData);

  nb_hydr_static_v6_eqFunction_4423(data, threadData);

  nb_hydr_static_v6_eqFunction_4424(data, threadData);

  nb_hydr_static_v6_eqFunction_4425(data, threadData);

  nb_hydr_static_v6_eqFunction_4426(data, threadData);

  nb_hydr_static_v6_eqFunction_4427(data, threadData);

  nb_hydr_static_v6_eqFunction_4428(data, threadData);

  nb_hydr_static_v6_eqFunction_4429(data, threadData);

  nb_hydr_static_v6_eqFunction_4430(data, threadData);

  nb_hydr_static_v6_eqFunction_4431(data, threadData);

  nb_hydr_static_v6_eqFunction_4432(data, threadData);

  nb_hydr_static_v6_eqFunction_4433(data, threadData);

  nb_hydr_static_v6_eqFunction_4434(data, threadData);

  nb_hydr_static_v6_eqFunction_4435(data, threadData);

  nb_hydr_static_v6_eqFunction_4436(data, threadData);

  nb_hydr_static_v6_eqFunction_4437(data, threadData);

  nb_hydr_static_v6_eqFunction_4438(data, threadData);

  nb_hydr_static_v6_eqFunction_4439(data, threadData);

  nb_hydr_static_v6_eqFunction_4440(data, threadData);

  nb_hydr_static_v6_eqFunction_4441(data, threadData);

  nb_hydr_static_v6_eqFunction_4442(data, threadData);

  nb_hydr_static_v6_eqFunction_4443(data, threadData);

  nb_hydr_static_v6_eqFunction_4444(data, threadData);

  nb_hydr_static_v6_eqFunction_4445(data, threadData);

  nb_hydr_static_v6_eqFunction_4446(data, threadData);

  nb_hydr_static_v6_eqFunction_4447(data, threadData);

  nb_hydr_static_v6_eqFunction_4448(data, threadData);

  nb_hydr_static_v6_eqFunction_4449(data, threadData);

  nb_hydr_static_v6_eqFunction_4450(data, threadData);

  nb_hydr_static_v6_eqFunction_4451(data, threadData);

  nb_hydr_static_v6_eqFunction_4452(data, threadData);

  nb_hydr_static_v6_eqFunction_4453(data, threadData);

  nb_hydr_static_v6_eqFunction_4454(data, threadData);

  nb_hydr_static_v6_eqFunction_4455(data, threadData);

  nb_hydr_static_v6_eqFunction_4456(data, threadData);

  nb_hydr_static_v6_eqFunction_4457(data, threadData);

  nb_hydr_static_v6_eqFunction_4458(data, threadData);

  nb_hydr_static_v6_eqFunction_4459(data, threadData);

  nb_hydr_static_v6_eqFunction_4460(data, threadData);

  nb_hydr_static_v6_eqFunction_4461(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

