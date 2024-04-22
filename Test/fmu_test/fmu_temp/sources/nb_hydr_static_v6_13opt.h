#if defined(__cplusplus)
  extern "C" {
#endif
  int nb_hydr_static_v6_mayer(DATA* data, modelica_real** res, short*);
  int nb_hydr_static_v6_lagrange(DATA* data, modelica_real** res, short *, short *);
  int nb_hydr_static_v6_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int nb_hydr_static_v6_setInputData(DATA *data, const modelica_boolean file);
  int nb_hydr_static_v6_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif