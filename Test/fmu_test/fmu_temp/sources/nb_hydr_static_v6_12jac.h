/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define nb_hydr_static_v6_INDEX_JAC_LSJac17 0
int nb_hydr_static_v6_functionJacLSJac17_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int nb_hydr_static_v6_initialAnalyticJacobianLSJac17(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define nb_hydr_static_v6_INDEX_JAC_LSJac18 1
int nb_hydr_static_v6_functionJacLSJac18_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int nb_hydr_static_v6_initialAnalyticJacobianLSJac18(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define nb_hydr_static_v6_INDEX_JAC_H 2
int nb_hydr_static_v6_functionJacH_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int nb_hydr_static_v6_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define nb_hydr_static_v6_INDEX_JAC_F 3
int nb_hydr_static_v6_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int nb_hydr_static_v6_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define nb_hydr_static_v6_INDEX_JAC_D 4
int nb_hydr_static_v6_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int nb_hydr_static_v6_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define nb_hydr_static_v6_INDEX_JAC_C 5
int nb_hydr_static_v6_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int nb_hydr_static_v6_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define nb_hydr_static_v6_INDEX_JAC_B 6
int nb_hydr_static_v6_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int nb_hydr_static_v6_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define nb_hydr_static_v6_INDEX_JAC_A 7
int nb_hydr_static_v6_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int nb_hydr_static_v6_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif

