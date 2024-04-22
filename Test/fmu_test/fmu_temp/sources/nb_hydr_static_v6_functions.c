#include "omc_simulation_settings.h"
#include "nb_hydr_static_v6_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "nb_hydr_static_v6_includes.h"


DLLExport
modelica_real omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData_t *threadData, modelica_real _V_flow, modelica_real _r_N, real_array _d, modelica_real _dpMax, modelica_real _V_flow_max, Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal _per, modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow, modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FN, real_array __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERd, modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdpMax, modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow_5Fmax, Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERper)
{
  modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdp;
  modelica_real _delta;
  modelica_real _r_R;
  modelica_integer _i;
  modelica_real _rat;
  modelica_real _delta2;
  modelica_real tmp1;
  modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdelta;
  modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FR;
  modelica_integer __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERi;
  modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERrat;
  modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdelta2;
  modelica_real tmp2;
  modelica_real _dp;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdp has no default value.
  _delta = 0.05;
  // _r_R has no default value.
  // _i has no default value.
  // _rat has no default value.
  tmp1 = 2.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "delta / 2.0");}
  _delta2 = (_delta) / tmp1;
  __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdelta = 0.0;
  // __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FR has no default value.
  // __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERi has no default value.
  // __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERrat has no default value.
  tmp2 = 2.0;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "0.5 * ($Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure$funDERdelta * 2.0 - delta * 0.0) / 2.0");}
  __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdelta2 = ((0.5) * ((__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdelta) * (2.0) - ((_delta) * (0.0)))) / tmp2;
  // _dp has no default value.
  if((_r_N > _delta))
  {
    _r_R = _r_N;

    __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FR = __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FN;
  }
  else
  {
    if((_r_N < 0.0))
    {
      _r_R = _delta2;

      __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FR = 0.0;
    }
    else
    {
      _r_R = omc_Modelica_Fluid_Utilities_cubicHermite(threadData, _r_N, 0.0, _delta, _delta2, _delta, 0.0, 1.0);

      __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FR = (__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FN) * (omc__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData, _r_N, 0.0, _delta, _delta2, _delta, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0));
    }
  }

  _i = ((modelica_integer) 1);

  __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERi = ((modelica_integer) 0);

  tmp3 = _r_R;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "V_flow / r_R");}
  _rat = (_V_flow) / tmp3;

  tmp4 = _r_R;
  tmp5 = (tmp4 * tmp4);
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "($Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure$funDERV_flow * r_R - V_flow * $Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure$funDERr_R) / r_R ^ 2.0");}
  __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERrat = ((__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow) * (_r_R) - ((_V_flow) * (__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FR))) / tmp5;

  tmp9 = size_of_dimension_base_array(_d, ((modelica_integer) 1));
  tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = tmp9 - ((modelica_integer) 1);
  if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp6, tmp8); _j += tmp7)
    {
      if((_rat > real_array_get(_per._V_flow, 1, _j)))
      {
        _i = _j;

        __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERi = 0.0;
      }
    }
  }

  if((_r_N >= 0.0))
  {
    tmp10 = _r_N;
    _dp = ((tmp10 * tmp10)) * (omc_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData, _rat, real_array_get(_per._V_flow, 1, _i), real_array_get(_per._V_flow, 1, _i + ((modelica_integer) 1)), real_array_get(_per._dp, 1, _i), real_array_get(_per._dp, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1))));

    tmp11 = _r_N;
    __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdp = ((tmp11 * tmp11)) * ((__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERrat) * (omc__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation(threadData, _rat, real_array_get(_per._V_flow, 1, _i), real_array_get(_per._V_flow, 1, _i + ((modelica_integer) 1)), real_array_get(_per._dp, 1, _i), real_array_get(_per._dp, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1)), 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0)) + (real_array_get(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERper._V_flow, 1, _i)) * (omc__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation(threadData, _rat, real_array_get(_per._V_flow, 1, _i), real_array_get(_per._V_flow, 1, _i + ((modelica_integer) 1)), real_array_get(_per._dp, 1, _i), real_array_get(_per._dp, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1)), 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0)) + (real_array_get(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERper._V_flow, 1, _i + ((modelica_integer) 1))) * (omc__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation(threadData, _rat, real_array_get(_per._V_flow, 1, _i), real_array_get(_per._V_flow, 1, _i + ((modelica_integer) 1)), real_array_get(_per._dp, 1, _i), real_array_get(_per._dp, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1)), 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0)) + (real_array_get(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERper._dp, 1, _i)) * (omc__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation(threadData, _rat, real_array_get(_per._V_flow, 1, _i), real_array_get(_per._V_flow, 1, _i + ((modelica_integer) 1)), real_array_get(_per._dp, 1, _i), real_array_get(_per._dp, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1)), 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0)) + (real_array_get(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERper._dp, 1, _i + ((modelica_integer) 1))) * (omc__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation(threadData, _rat, real_array_get(_per._V_flow, 1, _i), real_array_get(_per._V_flow, 1, _i + ((modelica_integer) 1)), real_array_get(_per._dp, 1, _i), real_array_get(_per._dp, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1)), 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0)) + (real_array_get(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERd, 1, _i)) * (omc__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation(threadData, _rat, real_array_get(_per._V_flow, 1, _i), real_array_get(_per._V_flow, 1, _i + ((modelica_integer) 1)), real_array_get(_per._dp, 1, _i), real_array_get(_per._dp, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1)), 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0)) + (real_array_get(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERd, 1, _i + ((modelica_integer) 1))) * (omc__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation(threadData, _rat, real_array_get(_per._V_flow, 1, _i), real_array_get(_per._V_flow, 1, _i + ((modelica_integer) 1)), real_array_get(_per._dp, 1, _i), real_array_get(_per._dp, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1)), 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0))) + (2.0) * ((_r_N) * ((__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FN) * (omc_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData, _rat, real_array_get(_per._V_flow, 1, _i), real_array_get(_per._V_flow, 1, _i + ((modelica_integer) 1)), real_array_get(_per._dp, 1, _i), real_array_get(_per._dp, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1))))));
  }
  else
  {
    tmp12 = _r_N;
    tmp13 = _V_flow_max;
    if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "dpMax / V_flow_max");}
    _dp = (-(((tmp12 * tmp12)) * (_dpMax - (((_dpMax) / tmp13) * (_V_flow)))));

    tmp14 = _r_N;
    tmp15 = _V_flow_max;
    if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "$Buildings$PFluid$PMovers$PBaseClasses$PCharacteristics$Ppressure$funDERV_flow / V_flow_max");}
    tmp16 = _V_flow_max;
    if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "V_flow / V_flow_max");}
    __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdp = ((tmp14 * tmp14)) * ((_dpMax) * ((__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow) / tmp15) + ((__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdpMax) * (_V_flow_max) - ((_dpMax) * (__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow_5Fmax))) * ((real_int_pow(threadData, _V_flow_max, -2)) * (_V_flow)) - __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdpMax) + (-2.0) * ((_r_N) * ((__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FN) * (_dpMax - ((_dpMax) * ((_V_flow) / tmp16)))));
  }
  _return: OMC_LABEL_UNUSED
  return __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdp;
}
modelica_metatype boxptr__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _r_N, modelica_metatype _d, modelica_metatype _dpMax, modelica_metatype _V_flow_max, modelica_metatype _per, modelica_metatype __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow, modelica_metatype __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FN, modelica_metatype __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERd, modelica_metatype __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdpMax, modelica_metatype __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow_5Fmax, modelica_metatype __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERper)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdp;
  modelica_metatype out__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdp;
  tmp1 = mmc_unbox_real(_V_flow);
  tmp2 = mmc_unbox_real(_r_N);
  tmp3 = mmc_unbox_real(_dpMax);
  tmp4 = mmc_unbox_real(_V_flow_max);
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_per), 2)));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmp5._n = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_per), 3)));
  tmp5._V_flow = *((base_array_t*)tmpMeta8);
  tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_per), 4)));
  tmp5._dp = *((base_array_t*)tmpMeta9);tmp10 = mmc_unbox_real(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow);
  tmp11 = mmc_unbox_real(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FN);
  tmp12 = mmc_unbox_real(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdpMax);
  tmp13 = mmc_unbox_real(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow_5Fmax);
  tmpMeta15 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERper), 2)));
  tmp16 = mmc_unbox_integer(tmpMeta15);
  tmp14._n = tmp16;
  tmpMeta17 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERper), 3)));
  tmp14._V_flow = *((base_array_t*)tmpMeta17);
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERper), 4)));
  tmp14._dp = *((base_array_t*)tmpMeta18);
  __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdp = omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData, tmp1, tmp2, *((base_array_t*)_d), tmp3, tmp4, tmp5, tmp10, tmp11, *((base_array_t*)__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERd), tmp12, tmp13, tmp14);
  out__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdp = mmc_mk_rcon(__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdp);
  return out__omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdp;
}

DLLExport
modelica_real omc__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx1, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx2, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1d, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2d)
{
  modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy;
  modelica_real _y;
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy has no default value.
  // _y has no default value.
  if(((_x > _x1) && (_x < _x2)))
  {
    _y = omc_Modelica_Fluid_Utilities_cubicHermite(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d);

    __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy = (__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx) * (omc__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0)) + (__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx1) * (omc__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0)) + (__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx2) * (omc__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0)) + (__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1) * (omc__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0)) + (__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2) * (omc__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0)) + (__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1d) * (omc__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0)) + (__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2d) * (omc__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0));
  }
  else
  {
    if((_x <= _x1))
    {
      _y = _y1 + (_x - _x1) * (_y1d);

      __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy = __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1 + (_x - _x1) * (__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1d) + (__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx - __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx1) * (_y1d);
    }
    else
    {
      _y = _y2 + (_x - _x2) * (_y2d);

      __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy = __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2 + (_x - _x2) * (__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2d) + (__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx - __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx2) * (_y2d);
    }
  }
  _return: OMC_LABEL_UNUSED
  return __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy;
}
modelica_metatype boxptr__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx1, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx2, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1d, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2d)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy;
  modelica_metatype out__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_x2);
  tmp4 = mmc_unbox_real(_y1);
  tmp5 = mmc_unbox_real(_y2);
  tmp6 = mmc_unbox_real(_y1d);
  tmp7 = mmc_unbox_real(_y2d);
  tmp8 = mmc_unbox_real(__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx);
  tmp9 = mmc_unbox_real(__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx1);
  tmp10 = mmc_unbox_real(__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx2);
  tmp11 = mmc_unbox_real(__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1);
  tmp12 = mmc_unbox_real(__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2);
  tmp13 = mmc_unbox_real(__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1d);
  tmp14 = mmc_unbox_real(__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2d);
  __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy = omc__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  out__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy = mmc_mk_rcon(__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy);
  return out__omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy;
}

DLLExport
modelica_real omc__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx1, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx2, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1d, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2d)
{
  modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy;
  modelica_real _h;
  modelica_real _t;
  modelica_real _h00;
  modelica_real _h10;
  modelica_real _h01;
  modelica_real _h11;
  modelica_real _aux3;
  modelica_real _aux2;
  modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh;
  modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERt;
  modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh00;
  modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh10;
  modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh01;
  modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh11;
  modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux3;
  modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux2;
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy has no default value.
  // _h has no default value.
  // _t has no default value.
  // _h00 has no default value.
  // _h10 has no default value.
  // _h01 has no default value.
  // _h11 has no default value.
  // _aux3 has no default value.
  // _aux2 has no default value.
  // __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh has no default value.
  // __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERt has no default value.
  // __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh00 has no default value.
  // __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh10 has no default value.
  // __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh01 has no default value.
  // __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh11 has no default value.
  // __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux3 has no default value.
  // __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux2 has no default value.
  // _y has no default value.
  _h = _x2 - _x1;

  __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh = __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx2 - __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx1;

  if((fabs(_h) > 0.0))
  {
    tmp1 = _h;
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(x - x1) / h");}
    _t = (_x - _x1) / tmp1;

    tmp2 = _h;
    tmp3 = (tmp2 * tmp2);
    if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(($Modelica$PFluid$PUtilities$PcubicHermite$funDERx - $Modelica$PFluid$PUtilities$PcubicHermite$funDERx1) * h + (x1 - x) * $Modelica$PFluid$PUtilities$PcubicHermite$funDERh) / h ^ 2.0");}
    __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERt = ((__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx - __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx1) * (_h) + (_x1 - _x) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh)) / tmp3;

    tmp4 = _t;
    _aux3 = (tmp4 * tmp4 * tmp4);

    tmp5 = _t;
    __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux3 = (3.0) * (((tmp5 * tmp5)) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERt));

    tmp6 = _t;
    _aux2 = (tmp6 * tmp6);

    __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux2 = (2.0) * ((_t) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERt));

    _h00 = (2.0) * (_aux3) - ((3.0) * (_aux2)) + 1.0;

    __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh00 = (2.0) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux3) + (-3.0) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux2);

    _h10 = _aux3 - ((2.0) * (_aux2)) + _t;

    __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh10 = __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux3 + (-2.0) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux2) + __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERt;

    _h01 = (-((2.0) * (_aux3))) + (3.0) * (_aux2);

    __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh01 = (-2.0) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux3) + (3.0) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux2);

    _h11 = _aux3 - _aux2;

    __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh11 = __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux3 - __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERaux2;

    _y = (_y1) * (_h00) + ((_h) * (_y1d)) * (_h10) + (_y2) * (_h01) + ((_h) * (_y2d)) * (_h11);

    __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy = (_y1) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh00) + (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1) * (_h00) + (_h) * ((_y1d) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh10)) + ((_h) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1d) + (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh) * (_y1d)) * (_h10) + (_y2) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh01) + (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2) * (_h01) + (_h) * ((_y2d) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh11)) + ((_h) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2d) + (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERh) * (_y2d)) * (_h11);
  }
  else
  {
    tmp7 = 2.0;
    if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
    _y = (_y1 + _y2) / tmp7;

    __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy = (0.5) * (__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1 + __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2);
  }
  _return: OMC_LABEL_UNUSED
  return __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy;
}
modelica_metatype boxptr__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx1, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx2, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1d, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2d)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy;
  modelica_metatype out__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_x2);
  tmp4 = mmc_unbox_real(_y1);
  tmp5 = mmc_unbox_real(_y2);
  tmp6 = mmc_unbox_real(_y1d);
  tmp7 = mmc_unbox_real(_y2d);
  tmp8 = mmc_unbox_real(__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx);
  tmp9 = mmc_unbox_real(__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx1);
  tmp10 = mmc_unbox_real(__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx2);
  tmp11 = mmc_unbox_real(__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1);
  tmp12 = mmc_unbox_real(__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2);
  tmp13 = mmc_unbox_real(__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1d);
  tmp14 = mmc_unbox_real(__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2d);
  __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy = omc__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  out__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy = mmc_mk_rcon(__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy);
  return out__omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy;
}

DLLExport
modelica_real omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _k, modelica_real _m_flow_turbulent)
{
  modelica_real _dp;
  modelica_real _dp_turbulent;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _m_flowNorm;
  modelica_real tmp3;
  modelica_real _m_flowNormSq;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dp has no default value.
  tmp1 = _k;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "m_flow_turbulent / k");}
  tmp2 = (_m_flow_turbulent) / tmp1;
  _dp_turbulent = (tmp2 * tmp2);
  tmp3 = _m_flow_turbulent;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "m_flow / m_flow_turbulent");}
  _m_flowNorm = (_m_flow) / tmp3;
  tmp4 = _m_flowNorm;
  _m_flowNormSq = (tmp4 * tmp4);
  tmp7 = (modelica_boolean)(fabs(_m_flow) > _m_flow_turbulent);
  if(tmp7)
  {
    tmp5 = _k;
    if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "m_flow / k");}
    tmp6 = (_m_flow) / tmp5;
    tmp8 = (((modelica_real)sign(_m_flow))) * ((tmp6 * tmp6));
  }
  else
  {
    tmp8 = ((0.375 + (0.75 - ((0.125) * (_m_flowNormSq))) * (_m_flowNormSq)) * (_dp_turbulent)) * (_m_flowNorm);
  }
  _dp = tmp8;
  _return: OMC_LABEL_UNUSED
  return _dp;
}
modelica_metatype boxptr_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _k, modelica_metatype _m_flow_turbulent)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _dp;
  modelica_metatype out_dp;
  tmp1 = mmc_unbox_real(_m_flow);
  tmp2 = mmc_unbox_real(_k);
  tmp3 = mmc_unbox_real(_m_flow_turbulent);
  _dp = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, tmp1, tmp2, tmp3);
  out_dp = mmc_mk_rcon(_dp);
  return out_dp;
}

Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal(threadData_t *threadData, modelica_integer omc_n, real_array omc_V_flow, real_array omc_dp)
{
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp1;
  tmp1._n = omc_n;
  tmp1._V_flow = omc_V_flow;
  tmp1._dp = omc_dp;
  return tmp1;
}

modelica_metatype boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal(threadData_t *threadData, modelica_metatype _n, modelica_metatype _V_flow, modelica_metatype _dp)
{
  return mmc_mk_box4(3, &Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal__desc, _n, _V_flow, _dp);
}

DLLExport
modelica_real omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData_t *threadData, Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters _per, modelica_real _V_flow, modelica_real _r_N, real_array _d, modelica_real _delta)
{
  modelica_real _P;
  modelica_integer _n;
  modelica_integer tmp1;
  modelica_real _rat;
  modelica_integer _i;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_real tmp7;
  _tailrecursive: OMC_LABEL_UNUSED
  // _P has no default value.
  tmp1 = size_of_dimension_base_array(_per._V_flow, ((modelica_integer) 1));
  _n = tmp1;
  // _rat has no default value.
  // _i has no default value.
  if((_n == ((modelica_integer) 1)))
  {
    tmp2 = _r_N;
    _P = ((tmp2 * tmp2 * tmp2)) * (real_array_get(_per._P, 1, ((modelica_integer) 1)));
  }
  else
  {
    _i = ((modelica_integer) 1);

    tmp3 = omc_Buildings_Utilities_Math_Functions_smoothMax(threadData, _r_N, 0.1, _delta);
    if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "V_flow / Buildings.Utilities.Math.Functions.smoothMax(r_N, 0.1, delta)");}
    _rat = (_V_flow) / tmp3;

    tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = _n - ((modelica_integer) 1);
    if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
    {
      modelica_integer _j;
      for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp4, tmp6); _j += tmp5)
      {
        if((_rat > real_array_get(_per._V_flow, 1, _j)))
        {
          _i = _j;
        }
      }
    }

    tmp7 = _r_N;
    _P = ((tmp7 * tmp7 * tmp7)) * (omc_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData, _rat, real_array_get(_per._V_flow, 1, _i), real_array_get(_per._V_flow, 1, _i + ((modelica_integer) 1)), real_array_get(_per._P, 1, _i), real_array_get(_per._P, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1))));
  }
  _return: OMC_LABEL_UNUSED
  return _P;
}
modelica_metatype boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData_t *threadData, modelica_metatype _per, modelica_metatype _V_flow, modelica_metatype _r_N, modelica_metatype _d, modelica_metatype _delta)
{
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real _P;
  modelica_metatype out_P;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_per), 2)));
  tmp1._V_flow = *((base_array_t*)tmpMeta2);
  tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_per), 3)));
  tmp1._P = *((base_array_t*)tmpMeta3);tmp4 = mmc_unbox_real(_V_flow);
  tmp5 = mmc_unbox_real(_r_N);
  tmp6 = mmc_unbox_real(_delta);
  _P = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData, tmp1, tmp4, tmp5, *((base_array_t*)_d), tmp6);
  out_P = mmc_mk_rcon(_P);
  return out_P;
}

Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters(threadData_t *threadData, real_array omc_V_flow, real_array omc_P)
{
  Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters tmp1;
  tmp1._V_flow = omc_V_flow;
  tmp1._P = omc_P;
  return tmp1;
}

modelica_metatype boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _P)
{
  return mmc_mk_box3(3, &Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters__desc, _V_flow, _P);
}

DLLExport
modelica_real omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData_t *threadData, modelica_real _V_flow, modelica_real _r_N, real_array _d, modelica_real _dpMax, modelica_real _V_flow_max, Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal _per)
{
  modelica_real _dp;
  modelica_real _delta;
  modelica_real _r_R;
  modelica_integer _i;
  modelica_real _rat;
  modelica_real _delta2;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dp has no default value.
  _delta = 0.05;
  // _r_R has no default value.
  // _i has no default value.
  // _rat has no default value.
  tmp1 = 2.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "delta / 2.0");}
  _delta2 = (_delta) / tmp1;
  if((_r_N > _delta))
  {
    _r_R = _r_N;
  }
  else
  {
    if((_r_N < 0.0))
    {
      _r_R = _delta2;
    }
    else
    {
      _r_R = omc_Modelica_Fluid_Utilities_cubicHermite(threadData, _r_N, 0.0, _delta, _delta2, _delta, 0.0, 1.0);
    }
  }

  _i = ((modelica_integer) 1);

  tmp2 = _r_R;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "V_flow / r_R");}
  _rat = (_V_flow) / tmp2;

  tmp6 = size_of_dimension_base_array(_d, ((modelica_integer) 1));
  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = tmp6 - ((modelica_integer) 1);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp3, tmp5); _j += tmp4)
    {
      if((_rat > real_array_get(_per._V_flow, 1, _j)))
      {
        _i = _j;
      }
    }
  }

  if((_r_N >= 0.0))
  {
    tmp7 = _r_N;
    _dp = ((tmp7 * tmp7)) * (omc_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData, _rat, real_array_get(_per._V_flow, 1, _i), real_array_get(_per._V_flow, 1, _i + ((modelica_integer) 1)), real_array_get(_per._dp, 1, _i), real_array_get(_per._dp, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1))));
  }
  else
  {
    tmp8 = _r_N;
    tmp9 = _V_flow_max;
    if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "dpMax / V_flow_max");}
    _dp = (-(((tmp8 * tmp8)) * (_dpMax - (((_dpMax) / tmp9) * (_V_flow)))));
  }
  _return: OMC_LABEL_UNUSED
  return _dp;
}
modelica_metatype boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _r_N, modelica_metatype _d, modelica_metatype _dpMax, modelica_metatype _V_flow_max, modelica_metatype _per)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_real _dp;
  modelica_metatype out_dp;
  tmp1 = mmc_unbox_real(_V_flow);
  tmp2 = mmc_unbox_real(_r_N);
  tmp3 = mmc_unbox_real(_dpMax);
  tmp4 = mmc_unbox_real(_V_flow_max);
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_per), 2)));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmp5._n = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_per), 3)));
  tmp5._V_flow = *((base_array_t*)tmpMeta8);
  tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_per), 4)));
  tmp5._dp = *((base_array_t*)tmpMeta9);
  _dp = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData, tmp1, tmp2, *((base_array_t*)_d), tmp3, tmp4, tmp5);
  out_dp = mmc_mk_rcon(_dp);
  return out_dp;
}

DLLExport
modelica_real omc_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d)
{
  modelica_real _y;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  if(((_x > _x1) && (_x < _x2)))
  {
    _y = omc_Modelica_Fluid_Utilities_cubicHermite(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d);
  }
  else
  {
    if((_x <= _x1))
    {
      _y = _y1 + (_x - _x1) * (_y1d);
    }
    else
    {
      _y = _y2 + (_x - _x2) * (_y2d);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_x2);
  tmp4 = mmc_unbox_real(_y1);
  tmp5 = mmc_unbox_real(_y2);
  tmp6 = mmc_unbox_real(_y1d);
  tmp7 = mmc_unbox_real(_y2d);
  _y = omc_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_boolean omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData_t *threadData, real_array _x, modelica_boolean _strict)
{
  modelica_boolean _monotonic;
  modelica_integer _n;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  _tailrecursive: OMC_LABEL_UNUSED
  // _monotonic has no default value.
  tmp1 = size_of_dimension_base_array(_x, ((modelica_integer) 1));
  _n = tmp1;
  if((_n == ((modelica_integer) 1)))
  {
    _monotonic = 1 /* true */;
  }
  else
  {
    _monotonic = 1 /* true */;

    if(_strict)
    {
      if((real_array_get(_x, 1, ((modelica_integer) 1)) >= real_array_get(_x, 1, _n)))
      {
        tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = _n - ((modelica_integer) 1);
        if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
          {
            if((!(real_array_get(_x, 1, _i) > real_array_get(_x, 1, _i + ((modelica_integer) 1)))))
            {
              _monotonic = 0 /* false */;
            }
          }
        }
      }
      else
      {
        tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = _n - ((modelica_integer) 1);
        if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
          {
            if((!(real_array_get(_x, 1, _i) < real_array_get(_x, 1, _i + ((modelica_integer) 1)))))
            {
              _monotonic = 0 /* false */;
            }
          }
        }
      }
    }
    else
    {
      if((real_array_get(_x, 1, ((modelica_integer) 1)) >= real_array_get(_x, 1, _n)))
      {
        tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = _n - ((modelica_integer) 1);
        if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
          {
            if((!(real_array_get(_x, 1, _i) >= real_array_get(_x, 1, _i + ((modelica_integer) 1)))))
            {
              _monotonic = 0 /* false */;
            }
          }
        }
      }
      else
      {
        tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = _n - ((modelica_integer) 1);
        if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
          {
            if((!(real_array_get(_x, 1, _i) <= real_array_get(_x, 1, _i + ((modelica_integer) 1)))))
            {
              _monotonic = 0 /* false */;
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _monotonic;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_isMonotonic(threadData_t *threadData, modelica_metatype _x, modelica_metatype _strict)
{
  modelica_integer tmp1;
  modelica_boolean _monotonic;
  modelica_metatype out_monotonic;
  tmp1 = mmc_unbox_integer(_strict);
  _monotonic = omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, *((base_array_t*)_x), tmp1);
  out_monotonic = mmc_mk_icon(_monotonic);
  return out_monotonic;
}

DLLExport
modelica_real omc_Buildings_Utilities_Math_Functions_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp11 = (modelica_boolean)(_x > _x_small);
  if(tmp11)
  {
    tmp12 = _y1;
  }
  else
  {
    tmp9 = (modelica_boolean)(_x < (-_x_small));
    if(tmp9)
    {
      tmp10 = _y2;
    }
    else
    {
      tmp7 = (modelica_boolean)(_x_small > 0.0);
      if(tmp7)
      {
        tmp1 = _x_small;
        if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp2 = _x_small;
        if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp3 = (_x) / tmp2;
        tmp4 = 4.0;
        if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small * ((x / x_small) ^ 2.0 - 3.0) * (y2 - y1) / 4.0");}
        tmp5 = 2.0;
        if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = ((((_x) / tmp1) * ((tmp3 * tmp3) - 3.0)) * (_y2 - _y1)) / tmp4 + (_y1 + _y2) / tmp5;
      }
      else
      {
        tmp6 = 2.0;
        if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = (_y1 + _y2) / tmp6;
      }
      tmp10 = tmp8;
    }
    tmp12 = tmp10;
  }
  _y = tmp12;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_y1);
  tmp3 = mmc_unbox_real(_y2);
  tmp4 = mmc_unbox_real(_x_small);
  _y = omc_Buildings_Utilities_Math_Functions_regStep(threadData, tmp1, tmp2, tmp3, tmp4);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_Buildings_Utilities_Math_Functions_smoothMax(threadData_t *threadData, modelica_real _x1, modelica_real _x2, modelica_real _deltaX)
{
  modelica_real _y;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  _y = omc_Buildings_Utilities_Math_Functions_regStep(threadData, _x1 - _x2, _x1, _x2, _deltaX);
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_smoothMax(threadData_t *threadData, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _deltaX)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x1);
  tmp2 = mmc_unbox_real(_x2);
  tmp3 = mmc_unbox_real(_deltaX);
  _y = omc_Buildings_Utilities_Math_Functions_smoothMax(threadData, tmp1, tmp2, tmp3);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
real_array omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData_t *threadData, real_array _x, real_array _y, modelica_boolean _ensureMonotonicity)
{
  real_array _d;
  modelica_integer tmp1;
  modelica_integer _n;
  modelica_integer tmp2;
  modelica_real _alpha;
  modelica_real _beta;
  modelica_real _tau;
  real_array _delta;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_string tmp9;
  modelica_metatype tmpMeta10;
  static int tmp11 = 0;
  static int tmp12 = 0;
  static int tmp13 = 0;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_real tmp19;
  modelica_integer tmp20;
  modelica_integer tmp21;
  modelica_integer tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_integer tmp31;
  modelica_integer tmp32;
  modelica_integer tmp33;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_x, ((modelica_integer) 1));
  alloc_real_array(&(_d), 1, (_index_t)tmp1); // _d has no default value.
  tmp2 = size_of_dimension_base_array(_x, ((modelica_integer) 1));
  _n = tmp2;
  // _alpha has no default value.
  // _beta has no default value.
  // _tau has no default value.
  alloc_real_array(&(_delta), 1, (_index_t)_n - ((modelica_integer) 1)); // _delta has no default value.
  if((_n > ((modelica_integer) 1)))
  {
    {
      if(!(real_array_get(_x, 1, ((modelica_integer) 1)) < real_array_get(_x, 1, _n)))
      {
        tmp3 = modelica_real_to_modelica_string(real_array_get(_x, 1, ((modelica_integer) 1)), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
        tmpMeta4 = stringAppend(_OMC_LIT11,tmp3);
        tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT12);
        tmp6 = modelica_integer_to_modelica_string(_n, ((modelica_integer) 0), 1 /* true */);
        tmpMeta7 = stringAppend(tmpMeta5,tmp6);
        tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT13);
        tmp9 = modelica_real_to_modelica_string(real_array_get(_x, 1, _n), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
        tmpMeta10 = stringAppend(tmpMeta8,tmp9);
        {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Utilities/Math/Functions/splineDerivatives.mo",19,5,21,52,0};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta10));
        }
      }
    }

    {
      if(!omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, _x, 1 /* true */))
      {
        {
          FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Utilities/Math/Functions/splineDerivatives.mo",23,5,24,71,0};
          omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT14));
        }
      }
    }

    if(_ensureMonotonicity)
    {
      {
        if(!omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, _y, 0 /* false */))
        {
          {
            FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Buildings 8.1.3/Utilities/Math/Functions/splineDerivatives.mo",26,7,27,92,0};
            omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT15));
          }
        }
      }
    }
  }

  if((_n == ((modelica_integer) 1)))
  {
    real_array_get(_d, 1, ((modelica_integer) 1)) = 0.0;
  }
  else
  {
    if((_n == ((modelica_integer) 2)))
    {
      tmp14 = real_array_get(_x, 1, ((modelica_integer) 2)) - real_array_get(_x, 1, ((modelica_integer) 1));
      if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y[2] - y[1]) / (x[2] - x[1])");}
      real_array_get(_d, 1, ((modelica_integer) 1)) = (real_array_get(_y, 1, ((modelica_integer) 2)) - real_array_get(_y, 1, ((modelica_integer) 1))) / tmp14;

      real_array_get(_d, 1, ((modelica_integer) 2)) = real_array_get(_d, 1, ((modelica_integer) 1));
    }
    else
    {
      tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = _n - ((modelica_integer) 1);
      if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
      {
        modelica_integer _i;
        for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp16, tmp18); _i += tmp17)
        {
          tmp15 = real_array_get(_x, 1, _i + ((modelica_integer) 1)) - real_array_get(_x, 1, _i);
          if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y[i + 1] - y[i]) / (x[i + 1] - x[i])");}
          real_array_get(_delta, 1, _i) = (real_array_get(_y, 1, _i + ((modelica_integer) 1)) - real_array_get(_y, 1, _i)) / tmp15;
        }
      }

      real_array_get(_d, 1, ((modelica_integer) 1)) = real_array_get(_delta, 1, ((modelica_integer) 1));

      real_array_get(_d, 1, _n) = real_array_get(_delta, 1, _n - ((modelica_integer) 1));

      tmp20 = ((modelica_integer) 2); tmp21 = 1; tmp22 = _n - ((modelica_integer) 1);
      if(!(((tmp21 > 0) && (tmp20 > tmp22)) || ((tmp21 < 0) && (tmp20 < tmp22))))
      {
        modelica_integer _i;
        for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp20, tmp22); _i += tmp21)
        {
          tmp19 = 2.0;
          if (tmp19 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(delta[i - 1] + delta[i]) / 2.0");}
          real_array_get(_d, 1, _i) = (real_array_get(_delta, 1, _i - ((modelica_integer) 1)) + real_array_get(_delta, 1, _i)) / tmp19;
        }
      }
    }
  }

  if(((_n > ((modelica_integer) 2)) && _ensureMonotonicity))
  {
    tmp31 = ((modelica_integer) 1); tmp32 = 1; tmp33 = _n - ((modelica_integer) 1);
    if(!(((tmp32 > 0) && (tmp31 > tmp33)) || ((tmp32 < 0) && (tmp31 < tmp33))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp31, tmp33); _i += tmp32)
      {
        if((fabs(real_array_get(_delta, 1, _i)) < 1e-60))
        {
          real_array_get(_d, 1, _i) = 0.0;

          real_array_get(_d, 1, _i + ((modelica_integer) 1)) = 0.0;
        }
        else
        {
          tmp23 = real_array_get(_delta, 1, _i);
          if (tmp23 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "d[i] / delta[i]");}
          _alpha = (real_array_get(_d, 1, _i)) / tmp23;

          tmp24 = real_array_get(_delta, 1, _i);
          if (tmp24 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "d[i + 1] / delta[i]");}
          _beta = (real_array_get(_d, 1, _i + ((modelica_integer) 1))) / tmp24;

          tmp25 = _alpha;
          tmp26 = _beta;
          if(((tmp25 * tmp25) + (tmp26 * tmp26) > 9.0))
          {
            tmp27 = _alpha;
            tmp28 = _beta;
            tmp29 = (tmp27 * tmp27) + (tmp28 * tmp28);
            if(!(tmp29 >= 0.0))
            {
              FILE_INFO info = {"",0,0,0,0,0};
              omc_assert(threadData, info, "Model error: Argument of sqrt(alpha ^ 2.0 + beta ^ 2.0) was %g should be >= 0", tmp29);
            }tmp30 = sqrt(tmp29);
            if (tmp30 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "3.0 / (alpha ^ 2.0 + beta ^ 2.0) ^ 0.5");}
            _tau = (3.0) / tmp30;

            real_array_get(_d, 1, _i) = ((real_array_get(_delta, 1, _i)) * (_alpha)) * (_tau);

            real_array_get(_d, 1, _i + ((modelica_integer) 1)) = ((real_array_get(_delta, 1, _i)) * (_beta)) * (_tau);
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_splineDerivatives(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _ensureMonotonicity)
{
  modelica_integer tmp1;
  real_array _d;
  modelica_integer tmp2;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_integer(_ensureMonotonicity);
  _d = omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, *((base_array_t*)_x), *((base_array_t*)_y), tmp1);
  out_d = mmc_mk_modelica_array(_d);
  return out_d;
}

DLLExport
modelica_real omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData_t *threadData, modelica_real _x, modelica_real _delta, modelica_real _deltaInv, modelica_real _a, modelica_real _b, modelica_real _c, modelica_real _d, modelica_real _e, modelica_real _f)
{
  modelica_real _y;
  modelica_real _aX;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _aX has no default value.
  _aX = fabs(_x);

  _y = (((_x >= 0.0)?1.0:-1.0)) * (_a + (_aX) * (_b + (_aX) * (_c + (_aX) * (_d + (_aX) * (_e + (_aX) * (_f))))));
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta, modelica_metatype _deltaInv, modelica_metatype _a, modelica_metatype _b, modelica_metatype _c, modelica_metatype _d, modelica_metatype _e, modelica_metatype _f)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_delta);
  tmp3 = mmc_unbox_real(_deltaInv);
  tmp4 = mmc_unbox_real(_a);
  tmp5 = mmc_unbox_real(_b);
  tmp6 = mmc_unbox_real(_c);
  tmp7 = mmc_unbox_real(_d);
  tmp8 = mmc_unbox_real(_e);
  tmp9 = mmc_unbox_real(_f);
  _y = omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
real_array omc_Modelica_Blocks_Continuous_Internal_Filter_Utilities_toHighestPowerOne(threadData_t *threadData, real_array _den1, real_array _den2, real_array *out_c0, real_array *out_c1)
{
  real_array _cr;
  modelica_integer tmp1;
  real_array _c0;
  modelica_integer tmp2;
  real_array _c1;
  modelica_integer tmp3;
  modelica_real tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_den1, ((modelica_integer) 1));
  alloc_real_array(&(_cr), 1, (_index_t)tmp1); // _cr has no default value.
  tmp2 = size_of_dimension_base_array(_den2, ((modelica_integer) 1));
  alloc_real_array(&(_c0), 1, (_index_t)tmp2); // _c0 has no default value.
  tmp3 = size_of_dimension_base_array(_den2, ((modelica_integer) 1));
  alloc_real_array(&(_c1), 1, (_index_t)tmp3); // _c1 has no default value.
  tmp8 = size_of_dimension_base_array(_den1, ((modelica_integer) 1));
  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = tmp8;
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
    {
      tmp4 = real_array_get(_den1, 1, _i);
      if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / den1[i]");}
      real_array_get(_cr, 1, _i) = (1.0) / tmp4;
    }
  }

  tmp14 = size_of_dimension_base_array(_den2, ((modelica_integer) 1));
  tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = tmp14;
  if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
    {
      tmp9 = real_array_get(_den2, 2, _i, ((modelica_integer) 1));
      if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "den2[i,2] / den2[i,1]");}
      real_array_get(_c1, 1, _i) = (real_array_get(_den2, 2, _i, ((modelica_integer) 2))) / tmp9;

      tmp10 = real_array_get(_den2, 2, _i, ((modelica_integer) 1));
      if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / den2[i,1]");}
      real_array_get(_c0, 1, _i) = (1.0) / tmp10;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_c0) { if (out_c0->dim_size == NULL) {copy_real_array(_c0, out_c0);} else {real_array_copy_data(_c0, *out_c0);} }
  if (out_c1) { if (out_c1->dim_size == NULL) {copy_real_array(_c1, out_c1);} else {real_array_copy_data(_c1, *out_c1);} }
  return _cr;
}
modelica_metatype boxptr_Modelica_Blocks_Continuous_Internal_Filter_Utilities_toHighestPowerOne(threadData_t *threadData, modelica_metatype _den1, modelica_metatype _den2, modelica_metatype *out_c0, modelica_metatype *out_c1)
{
  real_array _c0;
  modelica_integer tmp1;
  real_array _c1;
  modelica_integer tmp2;
  real_array _cr;
  modelica_integer tmp3;
  modelica_metatype out_cr;
  _cr = omc_Modelica_Blocks_Continuous_Internal_Filter_Utilities_toHighestPowerOne(threadData, *((base_array_t*)_den1), *((base_array_t*)_den2), &_c0, &_c1);
  out_cr = mmc_mk_modelica_array(_cr);
  if (out_c0) { *out_c0 = mmc_mk_modelica_array(_c0); }
  if (out_c1) { *out_c1 = mmc_mk_modelica_array(_c1); }
  return out_cr;
}

DLLExport
real_array omc_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData_t *threadData, modelica_integer _order, modelica_boolean _normalized)
{
  real_array _cr;
  modelica_real _alpha;
  modelica_real _alpha2;
  real_array _den1;
  real_array _den2;
  real_array _c0;
  real_array _c1;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_cr), 1, (_index_t)_order); // _cr has no default value.
  _alpha = 1.0;
  // _alpha2 has no default value.
  alloc_real_array(&(_den1), 1, (_index_t)_order); // _den1 has no default value.
  alloc_real_array(&(_den2), 2, (_index_t)0, (_index_t)2); // _den2 has no default value.
  alloc_real_array(&(_c0), 1, (_index_t)0); // _c0 has no default value.
  alloc_real_array(&(_c1), 1, (_index_t)0); // _c1 has no default value.
  if(_normalized)
  {
    tmp1 = ((modelica_real)_order);
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "0.3 / /*Real*/(order)");}
    tmp2 = 10.0;
    tmp3 = (0.3) / tmp1;
    if(tmp2 < 0.0 && tmp3 != 0.0)
    {
      tmp5 = modf(tmp3, &tmp6);
      
      if(tmp5 > 0.5)
      {
        tmp5 -= 1.0;
        tmp6 += 1.0;
      }
      else if(tmp5 < -0.5)
      {
        tmp5 += 1.0;
        tmp6 -= 1.0;
      }
      
      if(fabs(tmp5) < 1e-10)
        tmp4 = pow(tmp2, tmp6);
      else
      {
        tmp8 = modf(1.0/tmp3, &tmp7);
        if(tmp8 > 0.5)
        {
          tmp8 -= 1.0;
          tmp7 += 1.0;
        }
        else if(tmp8 < -0.5)
        {
          tmp8 += 1.0;
          tmp7 -= 1.0;
        }
        if(fabs(tmp8) < 1e-10 && ((unsigned long)tmp7 & 1))
        {
          tmp4 = -pow(-tmp2, tmp5)*pow(tmp2, tmp6);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2, tmp3);
        }
      }
    }
    else
    {
      tmp4 = pow(tmp2, tmp3);
    }
    if(isnan(tmp4) || isinf(tmp4))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2, tmp3);
    }tmp9 = tmp4 - 1.0;
    if(!(tmp9 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(10.0 ^ (0.3 / /*Real*/(order)) - 1.0) was %g should be >= 0", tmp9);
    }
    _alpha = sqrt(tmp9);
  }
  else
  {
    _alpha = 1.0;
  }

  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = _order;
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp10, tmp12); _i += tmp11)
    {
      real_array_get(_den1, 1, _i) = _alpha;
    }
  }

  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_Utilities_toHighestPowerOne(threadData, _den1, _OMC_LIT16 ,NULL ,NULL), _cr);
  _return: OMC_LABEL_UNUSED
  return _cr;
}
modelica_metatype boxptr_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData_t *threadData, modelica_metatype _order, modelica_metatype _normalized)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  real_array _cr;
  modelica_metatype out_cr;
  tmp1 = mmc_unbox_integer(_order);
  tmp2 = mmc_unbox_integer(_normalized);
  _cr = omc_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData, tmp1, tmp2);
  out_cr = mmc_mk_modelica_array(_cr);
  return out_cr;
}

DLLExport
real_array omc_Modelica_Blocks_Continuous_Internal_Filter_coefficients_lowPass(threadData_t *threadData, real_array _cr_in, real_array _c0_in, real_array _c1_in, modelica_real _f_cut, real_array *out_c0, real_array *out_c1)
{
  real_array _cr;
  modelica_integer tmp1;
  real_array _c0;
  modelica_integer tmp2;
  real_array _c1;
  modelica_integer tmp3;
  modelica_real _w_cut;
  modelica_real _w_cut2;
  static int tmp4 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_cr_in, ((modelica_integer) 1));
  alloc_real_array(&(_cr), 1, (_index_t)tmp1); // _cr has no default value.
  tmp2 = size_of_dimension_base_array(_c0_in, ((modelica_integer) 1));
  alloc_real_array(&(_c0), 1, (_index_t)tmp2); // _c0 has no default value.
  tmp3 = size_of_dimension_base_array(_c0_in, ((modelica_integer) 1));
  alloc_real_array(&(_c1), 1, (_index_t)tmp3); // _c1 has no default value.
  _w_cut = (6.283185307179586) * (_f_cut);
  _w_cut2 = (_w_cut) * (_w_cut);
  {
    if(!(_f_cut > 0.0))
    {
      {
        FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Blocks/Continuous.mo",2415,9,2415,70,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT21));
      }
    }
  }

  real_array_copy_data(mul_alloc_real_array_scalar(_cr_in, _w_cut), _cr);

  real_array_copy_data(mul_alloc_real_array_scalar(_c1_in, _w_cut), _c1);

  real_array_copy_data(mul_alloc_real_array_scalar(_c0_in, _w_cut2), _c0);
  _return: OMC_LABEL_UNUSED
  if (out_c0) { if (out_c0->dim_size == NULL) {copy_real_array(_c0, out_c0);} else {real_array_copy_data(_c0, *out_c0);} }
  if (out_c1) { if (out_c1->dim_size == NULL) {copy_real_array(_c1, out_c1);} else {real_array_copy_data(_c1, *out_c1);} }
  return _cr;
}
modelica_metatype boxptr_Modelica_Blocks_Continuous_Internal_Filter_coefficients_lowPass(threadData_t *threadData, modelica_metatype _cr_in, modelica_metatype _c0_in, modelica_metatype _c1_in, modelica_metatype _f_cut, modelica_metatype *out_c0, modelica_metatype *out_c1)
{
  modelica_real tmp1;
  real_array _c0;
  modelica_integer tmp2;
  real_array _c1;
  modelica_integer tmp3;
  real_array _cr;
  modelica_integer tmp4;
  modelica_metatype out_cr;
  tmp1 = mmc_unbox_real(_f_cut);
  _cr = omc_Modelica_Blocks_Continuous_Internal_Filter_coefficients_lowPass(threadData, *((base_array_t*)_cr_in), *((base_array_t*)_c0_in), *((base_array_t*)_c1_in), tmp1, &_c0, &_c1);
  out_cr = mmc_mk_modelica_array(_cr);
  if (out_c0) { *out_c0 = mmc_mk_modelica_array(_c0); }
  if (out_c1) { *out_c1 = mmc_mk_modelica_array(_c1); }
  return out_cr;
}

DLLExport
real_array omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData_t *threadData, real_array _cr_in, real_array _c0_in, real_array _c1_in, modelica_real _f_cut, real_array *out_a, real_array *out_b, real_array *out_ku)
{
  real_array _r;
  modelica_integer tmp1;
  real_array _a;
  modelica_integer tmp2;
  real_array _b;
  modelica_integer tmp3;
  real_array _ku;
  modelica_integer tmp4;
  real_array _c0;
  modelica_integer tmp5;
  real_array _c1;
  modelica_integer tmp6;
  real_array _cr;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_cr_in, ((modelica_integer) 1));
  alloc_real_array(&(_r), 1, (_index_t)tmp1); // _r has no default value.
  tmp2 = size_of_dimension_base_array(_c0_in, ((modelica_integer) 1));
  alloc_real_array(&(_a), 1, (_index_t)tmp2); // _a has no default value.
  tmp3 = size_of_dimension_base_array(_c0_in, ((modelica_integer) 1));
  alloc_real_array(&(_b), 1, (_index_t)tmp3); // _b has no default value.
  tmp4 = size_of_dimension_base_array(_c0_in, ((modelica_integer) 1));
  alloc_real_array(&(_ku), 1, (_index_t)tmp4); // _ku has no default value.
  tmp5 = size_of_dimension_base_array(_c0_in, ((modelica_integer) 1));
  alloc_real_array(&(_c0), 1, (_index_t)tmp5); // _c0 has no default value.
  tmp6 = size_of_dimension_base_array(_c0_in, ((modelica_integer) 1));
  alloc_real_array(&(_c1), 1, (_index_t)tmp6); // _c1 has no default value.
  tmp7 = size_of_dimension_base_array(_cr_in, ((modelica_integer) 1));
  alloc_real_array(&(_cr), 1, (_index_t)tmp7); // _cr has no default value.
  real_array_copy_data(omc_Modelica_Blocks_Continuous_Internal_Filter_coefficients_lowPass(threadData, _cr_in, _c0_in, _c1_in, _f_cut ,&_c0 ,&_c1), _cr);

  tmp11 = size_of_dimension_base_array(_cr_in, ((modelica_integer) 1));
  tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = tmp11;
  if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
    {
      real_array_get(_r, 1, _i) = (-real_array_get(_cr, 1, _i));
    }
  }

  tmp18 = size_of_dimension_base_array(_c0_in, ((modelica_integer) 1));
  tmp15 = ((modelica_integer) 1); tmp16 = 1; tmp17 = tmp18;
  if(!(((tmp16 > 0) && (tmp15 > tmp17)) || ((tmp16 < 0) && (tmp15 < tmp17))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp15, tmp17); _i += tmp16)
    {
      tmp12 = 2.0;
      if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "c1[i] / 2.0");}
      real_array_get(_a, 1, _i) = (-((real_array_get(_c1, 1, _i)) / tmp12));

      tmp13 = real_array_get(_c0, 1, _i) - ((real_array_get(_a, 1, _i)) * (real_array_get(_a, 1, _i)));
      if(!(tmp13 >= 0.0))
      {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of sqrt(c0[i] - a[i] * a[i]) was %g should be >= 0", tmp13);
      }
      real_array_get(_b, 1, _i) = sqrt(tmp13);

      tmp14 = real_array_get(_b, 1, _i);
      if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "c0[i] / b[i]");}
      real_array_get(_ku, 1, _i) = (real_array_get(_c0, 1, _i)) / tmp14;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_a) { if (out_a->dim_size == NULL) {copy_real_array(_a, out_a);} else {real_array_copy_data(_a, *out_a);} }
  if (out_b) { if (out_b->dim_size == NULL) {copy_real_array(_b, out_b);} else {real_array_copy_data(_b, *out_b);} }
  if (out_ku) { if (out_ku->dim_size == NULL) {copy_real_array(_ku, out_ku);} else {real_array_copy_data(_ku, *out_ku);} }
  return _r;
}
modelica_metatype boxptr_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData_t *threadData, modelica_metatype _cr_in, modelica_metatype _c0_in, modelica_metatype _c1_in, modelica_metatype _f_cut, modelica_metatype *out_a, modelica_metatype *out_b, modelica_metatype *out_ku)
{
  modelica_real tmp1;
  real_array _a;
  modelica_integer tmp2;
  real_array _b;
  modelica_integer tmp3;
  real_array _ku;
  modelica_integer tmp4;
  real_array _r;
  modelica_integer tmp5;
  modelica_metatype out_r;
  tmp1 = mmc_unbox_real(_f_cut);
  _r = omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, *((base_array_t*)_cr_in), *((base_array_t*)_c0_in), *((base_array_t*)_c1_in), tmp1, &_a, &_b, &_ku);
  out_r = mmc_mk_modelica_array(_r);
  if (out_a) { *out_a = mmc_mk_modelica_array(_a); }
  if (out_b) { *out_b = mmc_mk_modelica_array(_b); }
  if (out_ku) { *out_ku = mmc_mk_modelica_array(_ku); }
  return out_r;
}

DLLExport
void omc_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_string _mediumName, string_array _substanceNames, modelica_boolean _singleState, modelica_boolean _define_p, real_array _X_boundary, modelica_string _modelName)
{
  modelica_integer _nX;
  modelica_integer tmp1;
  modelica_string _X_str = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  static int tmp6 = 0;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_string tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  static int tmp17 = 0;
  modelica_integer tmp18;
  modelica_integer tmp19;
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_string tmp22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_string tmp25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_integer tmp30;
  modelica_integer tmp31;
  modelica_integer tmp32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_metatype tmpMeta37;
  modelica_string tmp38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_X_boundary, ((modelica_integer) 1));
  _nX = tmp1;
  // _X_str has no default value.
  {
    if(!((!_singleState) || (_singleState && _define_p)))
    {
      tmpMeta2 = stringAppend(_OMC_LIT23,_modelName);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT24);
      tmpMeta4 = stringAppend(tmpMeta3,_mediumName);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT25);
      {
        FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Utilities.mo",18,5,23,3,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta5));
      }
    }
  }

  tmp18 = ((modelica_integer) 1); tmp19 = 1; tmp20 = _nX;
  if(!(((tmp19 > 0) && (tmp18 > tmp20)) || ((tmp19 < 0) && (tmp18 < tmp20))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp18, tmp20); _i += tmp19)
    {
      {
        if(!(real_array_get(_X_boundary, 1, _i) >= 0.0))
        {
          tmpMeta7 = stringAppend(_OMC_LIT26,_mediumName);
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT27);
          tmpMeta9 = stringAppend(tmpMeta8,_modelName);
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT28);
          tmp11 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
          tmpMeta12 = stringAppend(tmpMeta10,tmp11);
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT29);
          tmp14 = modelica_real_to_modelica_string(real_array_get(_X_boundary, 1, _i), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
          tmpMeta15 = stringAppend(tmpMeta13,tmp14);
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT30);
          {
            FILE_INFO info = {"C:/Users/Zhiang Zhang/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Utilities.mo",26,7,33,3,0};
            omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta16));
          }
        }
      }
    }
  }

  if(((_nX > ((modelica_integer) 0)) && (fabs(sum_real_array(_X_boundary) - 1.0) > 1e-10)))
  {
    _X_str = _OMC_LIT7;

    tmp30 = ((modelica_integer) 1); tmp31 = 1; tmp32 = _nX;
    if(!(((tmp31 > 0) && (tmp30 > tmp32)) || ((tmp31 < 0) && (tmp30 < tmp32))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp30, tmp32); _i += tmp31)
      {
        tmpMeta21 = stringAppend(_X_str,_OMC_LIT31);
        tmp22 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
        tmpMeta23 = stringAppend(tmpMeta21,tmp22);
        tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT13);
        tmp25 = modelica_real_to_modelica_string(real_array_get(_X_boundary, 1, _i), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
        tmpMeta26 = stringAppend(tmpMeta24,tmp25);
        tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT32);
        tmpMeta28 = stringAppend(tmpMeta27,string_array_get(_substanceNames, 1, _i));
        tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT33);
        _X_str = tmpMeta29;
      }
    }

    tmpMeta33 = stringAppend(_OMC_LIT34,_mediumName);
    tmpMeta34 = stringAppend(tmpMeta33,_OMC_LIT27);
    tmpMeta35 = stringAppend(tmpMeta34,_modelName);
    tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT33);
    tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT35);
    tmp38 = modelica_real_to_modelica_string(sum_real_array(_X_boundary), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
    tmpMeta39 = stringAppend(tmpMeta37,tmp38);
    tmpMeta40 = stringAppend(tmpMeta39,_OMC_LIT36);
    tmpMeta41 = stringAppend(tmpMeta40,_X_str);
    omc_Modelica_Utilities_Streams_error(threadData, tmpMeta41);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_metatype _mediumName, modelica_metatype _substanceNames, modelica_metatype _singleState, modelica_metatype _define_p, modelica_metatype _X_boundary, modelica_metatype _modelName)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_singleState);
  tmp2 = mmc_unbox_integer(_define_p);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, _mediumName, *((base_array_t*)_substanceNames), tmp1, tmp2, *((base_array_t*)_X_boundary), _modelName);
  return;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_cubicHermite(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d)
{
  modelica_real _y;
  modelica_real _h;
  modelica_real _t;
  modelica_real _h00;
  modelica_real _h10;
  modelica_real _h01;
  modelica_real _h11;
  modelica_real _aux3;
  modelica_real _aux2;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _h has no default value.
  // _t has no default value.
  // _h00 has no default value.
  // _h10 has no default value.
  // _h01 has no default value.
  // _h11 has no default value.
  // _aux3 has no default value.
  // _aux2 has no default value.
  _h = _x2 - _x1;

  if((fabs(_h) > 0.0))
  {
    tmp1 = _h;
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(x - x1) / h");}
    _t = (_x - _x1) / tmp1;

    tmp2 = _t;
    _aux3 = (tmp2 * tmp2 * tmp2);

    tmp3 = _t;
    _aux2 = (tmp3 * tmp3);

    _h00 = (2.0) * (_aux3) - ((3.0) * (_aux2)) + 1.0;

    _h10 = _aux3 - ((2.0) * (_aux2)) + _t;

    _h01 = (-((2.0) * (_aux3))) + (3.0) * (_aux2);

    _h11 = _aux3 - _aux2;

    _y = (_y1) * (_h00) + ((_h) * (_y1d)) * (_h10) + (_y2) * (_h01) + ((_h) * (_y2d)) * (_h11);
  }
  else
  {
    tmp4 = 2.0;
    if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
    _y = (_y1 + _y2) / tmp4;
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_cubicHermite(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_x2);
  tmp4 = mmc_unbox_real(_y1);
  tmp5 = mmc_unbox_real(_y2);
  tmp6 = mmc_unbox_real(_y1d);
  tmp7 = mmc_unbox_real(_y2d);
  _y = omc_Modelica_Fluid_Utilities_cubicHermite(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _y1, modelica_real _y1d, modelica_real _y0d)
{
  modelica_real _y;
  modelica_real _a1;
  modelica_real _a2;
  modelica_real _a3;
  modelica_real _xx;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _a1 has no default value.
  // _a2 has no default value.
  // _a3 has no default value.
  // _xx has no default value.
  _a1 = (_x1) * (_y0d);

  _a2 = (3.0) * (_y1) - ((_x1) * (_y1d)) - ((2.0) * (_a1));

  _a3 = _y1 - _a2 - _a1;

  tmp1 = _x1;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x1");}
  _xx = (_x) / tmp1;

  _y = (_xx) * (_a1 + (_xx) * (_a2 + (_xx) * (_a3)));
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _y1, modelica_metatype _y1d, modelica_metatype _y0d)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_y1);
  tmp4 = mmc_unbox_real(_y1d);
  tmp5 = mmc_unbox_real(_y0d);
  _y = omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData, tmp1, tmp2, tmp3, tmp4, tmp5);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regRoot(threadData_t *threadData, modelica_real _x, modelica_real _delta)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp1 = (_x) * (_x) + (_delta) * (_delta);
  tmp2 = 0.25;
  if(tmp1 < 0.0 && tmp2 != 0.0)
  {
    tmp4 = modf(tmp2, &tmp5);
    
    if(tmp4 > 0.5)
    {
      tmp4 -= 1.0;
      tmp5 += 1.0;
    }
    else if(tmp4 < -0.5)
    {
      tmp4 += 1.0;
      tmp5 -= 1.0;
    }
    
    if(fabs(tmp4) < 1e-10)
      tmp3 = pow(tmp1, tmp5);
    else
    {
      tmp7 = modf(1.0/tmp2, &tmp6);
      if(tmp7 > 0.5)
      {
        tmp7 -= 1.0;
        tmp6 += 1.0;
      }
      else if(tmp7 < -0.5)
      {
        tmp7 += 1.0;
        tmp6 -= 1.0;
      }
      if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
      {
        tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
      }
    }
  }
  else
  {
    tmp3 = pow(tmp1, tmp2);
  }
  if(isnan(tmp3) || isinf(tmp3))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
  }tmp8 = tmp3;
  if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / (x * x + delta * delta) ^ 0.25");}
  _y = (_x) / tmp8;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regRoot(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_delta);
  _y = omc_Modelica_Fluid_Utilities_regRoot(threadData, tmp1, tmp2);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regRoot2(threadData_t *threadData, modelica_real _x, modelica_real _x_small, modelica_real _k1, modelica_real _k2, modelica_boolean _use_yd0, modelica_real _yd0)
{
  modelica_real _y;
  modelica_real _sqrt_k1;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real _sqrt_k2;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp2 = (modelica_boolean)(_k1 > 0.0);
  if(tmp2)
  {
    tmp1 = _k1;
    if(!(tmp1 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(k1) was %g should be >= 0", tmp1);
    }
    tmp3 = sqrt(tmp1);
  }
  else
  {
    tmp3 = 0.0;
  }
  _sqrt_k1 = tmp3;
  tmp5 = (modelica_boolean)(_k2 > 0.0);
  if(tmp5)
  {
    tmp4 = _k2;
    if(!(tmp4 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(k2) was %g should be >= 0", tmp4);
    }
    tmp6 = sqrt(tmp4);
  }
  else
  {
    tmp6 = 0.0;
  }
  _sqrt_k2 = tmp6;
  tmp8 = (modelica_boolean)(_x >= _x_small);
  if(tmp8)
  {
    tmp7 = _x;
    if(!(tmp7 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(x) was %g should be >= 0", tmp7);
    }
    tmp9 = (_sqrt_k1) * (sqrt(tmp7));
  }
  else
  {
    tmp9 = ((_x <= (-_x_small))?(-((_sqrt_k2) * (sqrt(fabs(_x))))):((_k1 >= _k2)?omc_Modelica_Fluid_Utilities_regRoot2_regRoot2__utility(threadData, _x, _x_small, _k1, _k2, _use_yd0, _yd0):(-omc_Modelica_Fluid_Utilities_regRoot2_regRoot2__utility(threadData, (-_x), _x_small, _k2, _k1, _use_yd0, _yd0))));
  }
  _y = tmp9;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regRoot2(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x_small, modelica_metatype _k1, modelica_metatype _k2, modelica_metatype _use_yd0, modelica_metatype _yd0)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_integer tmp5;
  modelica_real tmp6;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x_small);
  tmp3 = mmc_unbox_real(_k1);
  tmp4 = mmc_unbox_real(_k2);
  tmp5 = mmc_unbox_integer(_use_yd0);
  tmp6 = mmc_unbox_real(_yd0);
  _y = omc_Modelica_Fluid_Utilities_regRoot2(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp11 = (modelica_boolean)(_x > _x_small);
  if(tmp11)
  {
    tmp12 = _y1;
  }
  else
  {
    tmp9 = (modelica_boolean)(_x < (-_x_small));
    if(tmp9)
    {
      tmp10 = _y2;
    }
    else
    {
      tmp7 = (modelica_boolean)(_x_small > 0.0);
      if(tmp7)
      {
        tmp1 = _x_small;
        if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp2 = _x_small;
        if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp3 = (_x) / tmp2;
        tmp4 = 4.0;
        if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small * ((x / x_small) ^ 2.0 - 3.0) * (y2 - y1) / 4.0");}
        tmp5 = 2.0;
        if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = ((((_x) / tmp1) * ((tmp3 * tmp3) - 3.0)) * (_y2 - _y1)) / tmp4 + (_y1 + _y2) / tmp5;
      }
      else
      {
        tmp6 = 2.0;
        if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = (_y1 + _y2) / tmp6;
      }
      tmp10 = tmp8;
    }
    tmp12 = tmp10;
  }
  _y = tmp12;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_y1);
  tmp3 = mmc_unbox_real(_y2);
  tmp4 = mmc_unbox_real(_x_small);
  _y = omc_Modelica_Fluid_Utilities_regStep(threadData, tmp1, tmp2, tmp3, tmp4);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regRoot2_regRoot2__utility(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _k1, modelica_real _k2, modelica_boolean _use_yd0, modelica_real _yd0)
{
  modelica_real _y;
  modelica_real _x2;
  modelica_real _xsqrt1;
  modelica_real _xsqrt2;
  modelica_real _y1;
  modelica_real _y2;
  modelica_real _y1d;
  modelica_real _y2d;
  modelica_real _w;
  modelica_real _y0d;
  modelica_real _w1;
  modelica_real _w2;
  modelica_real _sqrt_k1;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real _sqrt_k2;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _x2 has no default value.
  // _xsqrt1 has no default value.
  // _xsqrt2 has no default value.
  // _y1 has no default value.
  // _y2 has no default value.
  // _y1d has no default value.
  // _y2d has no default value.
  // _w has no default value.
  // _y0d has no default value.
  // _w1 has no default value.
  // _w2 has no default value.
  tmp2 = (modelica_boolean)(_k1 > 0.0);
  if(tmp2)
  {
    tmp1 = _k1;
    if(!(tmp1 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(k1) was %g should be >= 0", tmp1);
    }
    tmp3 = sqrt(tmp1);
  }
  else
  {
    tmp3 = 0.0;
  }
  _sqrt_k1 = tmp3;
  tmp5 = (modelica_boolean)(_k2 > 0.0);
  if(tmp5)
  {
    tmp4 = _k2;
    if(!(tmp4 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(k2) was %g should be >= 0", tmp4);
    }
    tmp6 = sqrt(tmp4);
  }
  else
  {
    tmp6 = 0.0;
  }
  _sqrt_k2 = tmp6;
  if((_k2 > 0.0))
  {
    tmp7 = _k1;
    if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "k2 / k1");}
    _x2 = (-((_x1) * ((_k2) / tmp7)));
  }
  else
  {
    if((_k1 > 0.0))
    {
      _x2 = (-_x1);
    }
    else
    {
      _y = 0.0;

      goto _return;
    }
  }

  if((_x <= _x2))
  {
    _y = (-((_sqrt_k2) * (sqrt(fabs(_x)))));
  }
  else
  {
    tmp8 = _x1;
    if(!(tmp8 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(x1) was %g should be >= 0", tmp8);
    }
    _y1 = (_sqrt_k1) * (sqrt(tmp8));

    _y2 = (-((_sqrt_k2) * (sqrt(fabs(_x2)))));

    tmp9 = _x1;
    if(!(tmp9 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(x1) was %g should be >= 0", tmp9);
    }tmp10 = sqrt(tmp9);
    if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "sqrt_k1 / sqrt(x1)");}
    tmp11 = 2.0;
    if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "sqrt_k1 / sqrt(x1) / 2.0");}
    _y1d = ((_sqrt_k1) / tmp10) / tmp11;

    tmp12 = sqrt(fabs(_x2));
    if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "sqrt_k2 / sqrt(abs(x2))");}
    tmp13 = 2.0;
    if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "sqrt_k2 / sqrt(abs(x2)) / 2.0");}
    _y2d = ((_sqrt_k2) / tmp12) / tmp13;

    if(_use_yd0)
    {
      _y0d = _yd0;
    }
    else
    {
      tmp14 = _x1;
      if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x2 / x1");}
      _w = (_x2) / tmp14;

      tmp15 = _w;
      if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(3.0 * y2 - x2 * y2d) / w");}
      tmp16 = ((2.0) * (_x1)) * (1.0 - _w);
      if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "((3.0 * y2 - x2 * y2d) / w - (3.0 * y1 - x1 * y1d) * w) / (2.0 * x1 * (1.0 - w))");}
      _y0d = (((3.0) * (_y2) - ((_x2) * (_y2d))) / tmp15 - (((3.0) * (_y1) - ((_x1) * (_y1d))) * (_w))) / tmp16;
    }

    tmp17 = _x1;
    if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "8.75 / x1");}
    tmp18 = (8.75) / tmp17;
    if(!(tmp18 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(8.75 / x1) was %g should be >= 0", tmp18);
    }
    _w1 = (_sqrt_k1) * (sqrt(tmp18));

    tmp19 = fabs(_x2);
    if (tmp19 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "8.75 / abs(x2)");}
    _w2 = (_sqrt_k2) * (sqrt((8.75) / tmp19));

    _y0d = fmin(_y0d,(0.9) * (fmin(_w1,_w2)));

    tmp28 = (modelica_boolean)(_x >= 0.0);
    if(tmp28)
    {
      tmp20 = _x1;
      if (tmp20 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x1");}
      tmp21 = _y1;
      if (tmp21 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "y1d * x1 / y1");}
      tmp22 = _y1;
      if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "y0d * x1 / y1");}
      tmp29 = omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData, (_x) / tmp20, 1.0, 1.0, ((_y1d) * (_x1)) / tmp21, ((_y0d) * (_x1)) / tmp22);
    }
    else
    {
      tmp23 = _x1;
      if (tmp23 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x1");}
      tmp24 = _x1;
      if (tmp24 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x2 / x1");}
      tmp25 = _y1;
      if (tmp25 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "y2 / y1");}
      tmp26 = _y1;
      if (tmp26 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "y2d * x1 / y1");}
      tmp27 = _y1;
      if (tmp27 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "y0d * x1 / y1");}
      tmp29 = omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData, (_x) / tmp23, (_x2) / tmp24, (_y2) / tmp25, ((_y2d) * (_x1)) / tmp26, ((_y0d) * (_x1)) / tmp27);
    }
    _y = (_y1) * (tmp29);
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regRoot2_regRoot2__utility(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _k1, modelica_metatype _k2, modelica_metatype _use_yd0, modelica_metatype _yd0)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_integer tmp5;
  modelica_real tmp6;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_k1);
  tmp4 = mmc_unbox_real(_k2);
  tmp5 = mmc_unbox_integer(_use_yd0);
  tmp6 = mmc_unbox_real(_yd0);
  _y = omc_Modelica_Fluid_Utilities_regRoot2_regRoot2__utility(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

void omc_Modelica_Utilities_Streams_error(threadData_t *threadData, modelica_string _string)
{
  ModelicaError(MMC_STRINGDATA(_string));
  return;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__1_valveCharacteristic(threadData_t *threadData, modelica_real _pos)
{
  modelica_real _rc;
  _tailrecursive: OMC_LABEL_UNUSED
  // _rc has no default value.
  _rc = _pos;
  _return: OMC_LABEL_UNUSED
  return _rc;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__1_valveCharacteristic(threadData_t *threadData, modelica_metatype _pos)
{
  modelica_real tmp1;
  modelica_real _rc;
  modelica_metatype out_rc;
  tmp1 = mmc_unbox_real(_pos);
  _rc = omc_nb__hydr__static__v6_checkvalve__1_valveCharacteristic(threadData, tmp1);
  out_rc = mmc_mk_rcon(_rc);
  return out_rc;
}

nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__1_Medium_density(threadData_t *threadData, nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__1_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_nb__hydr__static__v6_checkvalve__1_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState _state;
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp1;
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData_t *threadData, nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__2_valveCharacteristic(threadData_t *threadData, modelica_real _pos)
{
  modelica_real _rc;
  _tailrecursive: OMC_LABEL_UNUSED
  // _rc has no default value.
  _rc = _pos;
  _return: OMC_LABEL_UNUSED
  return _rc;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__2_valveCharacteristic(threadData_t *threadData, modelica_metatype _pos)
{
  modelica_real tmp1;
  modelica_real _rc;
  modelica_metatype out_rc;
  tmp1 = mmc_unbox_real(_pos);
  _rc = omc_nb__hydr__static__v6_checkvalve__2_valveCharacteristic(threadData, tmp1);
  out_rc = mmc_mk_rcon(_rc);
  return out_rc;
}

nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__2_Medium_density(threadData_t *threadData, nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__2_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_nb__hydr__static__v6_checkvalve__2_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState _state;
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp1;
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData_t *threadData, nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__3_valveCharacteristic(threadData_t *threadData, modelica_real _pos)
{
  modelica_real _rc;
  _tailrecursive: OMC_LABEL_UNUSED
  // _rc has no default value.
  _rc = _pos;
  _return: OMC_LABEL_UNUSED
  return _rc;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__3_valveCharacteristic(threadData_t *threadData, modelica_metatype _pos)
{
  modelica_real tmp1;
  modelica_real _rc;
  modelica_metatype out_rc;
  tmp1 = mmc_unbox_real(_pos);
  _rc = omc_nb__hydr__static__v6_checkvalve__3_valveCharacteristic(threadData, tmp1);
  out_rc = mmc_mk_rcon(_rc);
  return out_rc;
}

nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__3_Medium_density(threadData_t *threadData, nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__3_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_nb__hydr__static__v6_checkvalve__3_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState _state;
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp1;
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData_t *threadData, nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__4_valveCharacteristic(threadData_t *threadData, modelica_real _pos)
{
  modelica_real _rc;
  _tailrecursive: OMC_LABEL_UNUSED
  // _rc has no default value.
  _rc = _pos;
  _return: OMC_LABEL_UNUSED
  return _rc;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__4_valveCharacteristic(threadData_t *threadData, modelica_metatype _pos)
{
  modelica_real tmp1;
  modelica_real _rc;
  modelica_metatype out_rc;
  tmp1 = mmc_unbox_real(_pos);
  _rc = omc_nb__hydr__static__v6_checkvalve__4_valveCharacteristic(threadData, tmp1);
  out_rc = mmc_mk_rcon(_rc);
  return out_rc;
}

nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__4_Medium_density(threadData_t *threadData, nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__4_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_nb__hydr__static__v6_checkvalve__4_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState _state;
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp1;
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData_t *threadData, nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState omc_nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chiller__1_Medium_dynamicViscosity(threadData_t *threadData, nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_nb__hydr__static__v6_chiller__1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_nb__hydr__static__v6_chiller__1_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState omc_nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chiller__2_Medium_dynamicViscosity(threadData_t *threadData, nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_nb__hydr__static__v6_chiller__2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_nb__hydr__static__v6_chiller__2_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState omc_nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chiller__3_Medium_dynamicViscosity(threadData_t *threadData, nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_nb__hydr__static__v6_chiller__3_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_nb__hydr__static__v6_chiller__3_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState omc_nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chiller__4_Medium_dynamicViscosity(threadData_t *threadData, nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_nb__hydr__static__v6_chiller__4_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_nb__hydr__static__v6_chiller__4_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState omc_nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState omc_nb__hydr__static__v6_chw__ret_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState _state;
  nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState tmp1;
  nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_nb__hydr__static__v6_chw__ret_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_nb__hydr__static__v6_chw__ret_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chw__ret_Medium_specificEnthalpy(threadData_t *threadData, nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_nb__hydr__static__v6_chw__ret_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_nb__hydr__static__v6_chw__ret_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState omc_nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState omc_nb__hydr__static__v6_chw__sup_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState _state;
  nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState tmp1;
  nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_nb__hydr__static__v6_chw__sup_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_nb__hydr__static__v6_chw__sup_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chw__sup_Medium_specificEnthalpy(threadData_t *threadData, nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_nb__hydr__static__v6_chw__sup_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_nb__hydr__static__v6_chw__sup_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__1_Medium_specificEnthalpy(threadData_t *threadData, nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_nb__hydr__static__v6_chwp__1_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_string omc_nb__hydr__static__v6_chwp__1_eff_getArrayAsString(threadData_t *threadData, real_array _array, modelica_string _varName, modelica_integer _minimumLength, modelica_integer _significantDigits)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _str = _OMC_LIT7;

  tmp13 = size_of_dimension_base_array(_array, ((modelica_integer) 1));
  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = tmp13;
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp10, tmp12); _i += tmp11)
    {
      tmpMeta1 = stringAppend(_str,_OMC_LIT50);
      tmpMeta2 = stringAppend(tmpMeta1,_varName);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT51);
      tmp4 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
      tmpMeta5 = stringAppend(tmpMeta3,tmp4);
      tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT52);
      tmp7 = modelica_real_to_modelica_string(real_array_get(_array, 1, _i), _significantDigits, _minimumLength, 1 /* true */);
      tmpMeta8 = stringAppend(tmpMeta6,tmp7);
      tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT53);
      _str = tmpMeta9;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_eff_getArrayAsString(threadData_t *threadData, modelica_metatype _array, modelica_metatype _varName, modelica_metatype _minimumLength, modelica_metatype _significantDigits)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_minimumLength);
  tmp2 = mmc_unbox_integer(_significantDigits);
  _str = omc_nb__hydr__static__v6_chwp__1_eff_getArrayAsString(threadData, *((base_array_t*)_array), _varName, tmp1, tmp2);
  /* skip box _str; String */
  return _str;
}

nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__1_preSou_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_nb__hydr__static__v6_chwp__1_preSou_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState _state;
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState tmp1;
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__1_vol_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_nb__hydr__static__v6_chwp__1_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__1_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_nb__hydr__static__v6_chwp__1_vol_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__1_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_nb__hydr__static__v6_chwp__1_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState__desc, _p, _T);
}

nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__2_Medium_specificEnthalpy(threadData_t *threadData, nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_nb__hydr__static__v6_chwp__2_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_string omc_nb__hydr__static__v6_chwp__2_eff_getArrayAsString(threadData_t *threadData, real_array _array, modelica_string _varName, modelica_integer _minimumLength, modelica_integer _significantDigits)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _str = _OMC_LIT7;

  tmp13 = size_of_dimension_base_array(_array, ((modelica_integer) 1));
  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = tmp13;
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp10, tmp12); _i += tmp11)
    {
      tmpMeta1 = stringAppend(_str,_OMC_LIT50);
      tmpMeta2 = stringAppend(tmpMeta1,_varName);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT51);
      tmp4 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
      tmpMeta5 = stringAppend(tmpMeta3,tmp4);
      tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT52);
      tmp7 = modelica_real_to_modelica_string(real_array_get(_array, 1, _i), _significantDigits, _minimumLength, 1 /* true */);
      tmpMeta8 = stringAppend(tmpMeta6,tmp7);
      tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT53);
      _str = tmpMeta9;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_eff_getArrayAsString(threadData_t *threadData, modelica_metatype _array, modelica_metatype _varName, modelica_metatype _minimumLength, modelica_metatype _significantDigits)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_minimumLength);
  tmp2 = mmc_unbox_integer(_significantDigits);
  _str = omc_nb__hydr__static__v6_chwp__2_eff_getArrayAsString(threadData, *((base_array_t*)_array), _varName, tmp1, tmp2);
  /* skip box _str; String */
  return _str;
}

nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__2_preSou_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_nb__hydr__static__v6_chwp__2_preSou_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState _state;
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState tmp1;
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__2_vol_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_nb__hydr__static__v6_chwp__2_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__2_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_nb__hydr__static__v6_chwp__2_vol_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_nb__hydr__static__v6_chwp__2_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState__desc, _p, _T);
}

nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__3_Medium_specificEnthalpy(threadData_t *threadData, nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_nb__hydr__static__v6_chwp__3_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_string omc_nb__hydr__static__v6_chwp__3_eff_getArrayAsString(threadData_t *threadData, real_array _array, modelica_string _varName, modelica_integer _minimumLength, modelica_integer _significantDigits)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _str = _OMC_LIT7;

  tmp13 = size_of_dimension_base_array(_array, ((modelica_integer) 1));
  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = tmp13;
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp10, tmp12); _i += tmp11)
    {
      tmpMeta1 = stringAppend(_str,_OMC_LIT50);
      tmpMeta2 = stringAppend(tmpMeta1,_varName);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT51);
      tmp4 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
      tmpMeta5 = stringAppend(tmpMeta3,tmp4);
      tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT52);
      tmp7 = modelica_real_to_modelica_string(real_array_get(_array, 1, _i), _significantDigits, _minimumLength, 1 /* true */);
      tmpMeta8 = stringAppend(tmpMeta6,tmp7);
      tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT53);
      _str = tmpMeta9;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_eff_getArrayAsString(threadData_t *threadData, modelica_metatype _array, modelica_metatype _varName, modelica_metatype _minimumLength, modelica_metatype _significantDigits)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_minimumLength);
  tmp2 = mmc_unbox_integer(_significantDigits);
  _str = omc_nb__hydr__static__v6_chwp__3_eff_getArrayAsString(threadData, *((base_array_t*)_array), _varName, tmp1, tmp2);
  /* skip box _str; String */
  return _str;
}

nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__3_preSou_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_nb__hydr__static__v6_chwp__3_preSou_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState _state;
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState tmp1;
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__3_vol_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_nb__hydr__static__v6_chwp__3_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__3_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_nb__hydr__static__v6_chwp__3_vol_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__3_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_nb__hydr__static__v6_chwp__3_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState__desc, _p, _T);
}

nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__4_Medium_specificEnthalpy(threadData_t *threadData, nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_nb__hydr__static__v6_chwp__4_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_string omc_nb__hydr__static__v6_chwp__4_eff_getArrayAsString(threadData_t *threadData, real_array _array, modelica_string _varName, modelica_integer _minimumLength, modelica_integer _significantDigits)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _str = _OMC_LIT7;

  tmp13 = size_of_dimension_base_array(_array, ((modelica_integer) 1));
  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = tmp13;
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp10, tmp12); _i += tmp11)
    {
      tmpMeta1 = stringAppend(_str,_OMC_LIT50);
      tmpMeta2 = stringAppend(tmpMeta1,_varName);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT51);
      tmp4 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
      tmpMeta5 = stringAppend(tmpMeta3,tmp4);
      tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT52);
      tmp7 = modelica_real_to_modelica_string(real_array_get(_array, 1, _i), _significantDigits, _minimumLength, 1 /* true */);
      tmpMeta8 = stringAppend(tmpMeta6,tmp7);
      tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT53);
      _str = tmpMeta9;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_eff_getArrayAsString(threadData_t *threadData, modelica_metatype _array, modelica_metatype _varName, modelica_metatype _minimumLength, modelica_metatype _significantDigits)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_minimumLength);
  tmp2 = mmc_unbox_integer(_significantDigits);
  _str = omc_nb__hydr__static__v6_chwp__4_eff_getArrayAsString(threadData, *((base_array_t*)_array), _varName, tmp1, tmp2);
  /* skip box _str; String */
  return _str;
}

nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__4_preSou_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_nb__hydr__static__v6_chwp__4_preSou_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState _state;
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState tmp1;
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__4_vol_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_nb__hydr__static__v6_chwp__4_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__4_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_nb__hydr__static__v6_chwp__4_vol_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__4_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_nb__hydr__static__v6_chwp__4_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState__desc, _p, _T);
}

nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState omc_nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_nb__hydr__static__v6_terminal__resist_Medium_dynamicViscosity(threadData_t *threadData, nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_nb__hydr__static__v6_terminal__resist_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_nb__hydr__static__v6_terminal__resist_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

#ifdef __cplusplus
}
#endif
