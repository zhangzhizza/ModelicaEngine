#ifndef nb_hydr_static_v6__H
#define nb_hydr_static_v6__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  modelica_integer _n;
  real_array _V_flow;
  real_array _dp;
} Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal;
extern struct record_description Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal__desc;

void Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_construct_p(threadData_t *threadData, void* v_ths );
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_construct(td, ths ) Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_construct_p(td, &ths )
void Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_p(void* v_src, void* v_dst);
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy(src,dst) Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_p(&src, &dst)


void Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_integer in_n, real_array in_V_flow, real_array in_dp);
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_wrap_vars(td, dst , in_n, in_V_flow, in_dp) Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_wrap_vars_p(td, &dst , in_n, in_V_flow, in_dp)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_to_vars_p(void* v_src , modelica_integer* in_n, real_array* in_V_flow, real_array* in_dp);
// #define Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_to_vars(src,...) Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_array;
#define alloc_Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_array(dst,ndims,...) generic_array_create(NULL, dst, Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_construct_p, ndims, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal), __VA_ARGS__)
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_p, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal))
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_p, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal))
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_array_get(src,ndims,...)   (*(Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal*)(generic_array_get(&src, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal), __VA_ARGS__)))
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_set(dst,val,...)           generic_array_set(&dst, &val, Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_p, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal), __VA_ARGS__)

typedef struct {
  real_array _V_flow;
  real_array _P;
} Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters;
extern struct record_description Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters__desc;

void Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_construct_p(threadData_t *threadData, void* v_ths );
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_construct(td, ths ) Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_construct_p(td, &ths )
void Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_copy_p(void* v_src, void* v_dst);
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_copy(src,dst) Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_copy_p(&src, &dst)


void Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars_p(threadData_t *threadData , void* v_dst , real_array in_V_flow, real_array in_P);
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars(td, dst , in_V_flow, in_P) Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_wrap_vars_p(td, &dst , in_V_flow, in_P)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_copy_to_vars_p(void* v_src , real_array* in_V_flow, real_array* in_P);
// #define Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_copy_to_vars(src,...) Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_array;
#define alloc_Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_array(dst,ndims,...) generic_array_create(NULL, dst, Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_construct_p, ndims, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters), __VA_ARGS__)
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_copy_p, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters))
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_copy_p, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters))
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_array_get(src,ndims,...)   (*(Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters*)(generic_array_get(&src, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters), __VA_ARGS__)))
#define Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_set(dst,val,...)           generic_array_set(&dst, &val, Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters_copy_p, sizeof(Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters), __VA_ARGS__)

typedef struct {
  modelica_real _p;
  modelica_real _T;
} nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState))
#define nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState))
#define nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState))
#define nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState))
#define nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState))
#define nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState))
#define nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState))
#define nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState))
#define nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState))
#define nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState;
extern struct record_description nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState__desc;

void nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_construct(td, ths ) nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_construct_p(td, &ths )
void nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_copy(src,dst) nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_copy_p(&src, &dst)


void nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_copy_to_vars(src,...) nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_array;
#define alloc_nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_construct_p, ndims, sizeof(nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState), __VA_ARGS__)
#define nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState))
#define nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState))
#define nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState), __VA_ARGS__)))
#define nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState_copy_p, sizeof(nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState), __VA_ARGS__)

DLLExport
modelica_real omc__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData_t *threadData, modelica_real _V_flow, modelica_real _r_N, real_array _d, modelica_real _dpMax, modelica_real _V_flow_max, Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal _per, modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow, modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FN, real_array __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERd, modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdpMax, modelica_real __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow_5Fmax, Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERper);
DLLExport
modelica_metatype boxptr__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _r_N, modelica_metatype _d, modelica_metatype _dpMax, modelica_metatype _V_flow_max, modelica_metatype _per, modelica_metatype __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow, modelica_metatype __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERr_5FN, modelica_metatype __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERd, modelica_metatype __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERdpMax, modelica_metatype __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERV_5Fflow_5Fmax, modelica_metatype __omcQ_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure_24funDERper);
static const MMC_DEFSTRUCTLIT(boxvar_lit__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure,2,0) {(void*) boxptr__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure,0}};
#define boxvar__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure MMC_REFSTRUCTLIT(boxvar_lit__omcQ_24DER_24Buildings_24PFluid_24PMovers_24PBaseClasses_24PCharacteristics_24Ppressure)


DLLExport
modelica_real omc__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx1, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx2, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1d, modelica_real __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2d);
DLLExport
modelica_metatype boxptr__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx1, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERx2, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy1d, modelica_metatype __omcQ_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation_24funDERy2d);
static const MMC_DEFSTRUCTLIT(boxvar_lit__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation,2,0) {(void*) boxptr__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation,0}};
#define boxvar__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation MMC_REFSTRUCTLIT(boxvar_lit__omcQ_24DER_24Buildings_24PUtilities_24PMath_24PFunctions_24PcubicHermiteLinearExtrapolation)


DLLExport
modelica_real omc__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx1, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx2, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1d, modelica_real __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2d);
DLLExport
modelica_metatype boxptr__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx1, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERx2, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy1d, modelica_metatype __omcQ_24Modelica_24PFluid_24PUtilities_24PcubicHermite_24funDERy2d);
static const MMC_DEFSTRUCTLIT(boxvar_lit__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite,2,0) {(void*) boxptr__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite,0}};
#define boxvar__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite MMC_REFSTRUCTLIT(boxvar_lit__omcQ_24DER_24Modelica_24PFluid_24PUtilities_24PcubicHermite)


DLLExport
modelica_real omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _k, modelica_real _m_flow_turbulent);
DLLExport
modelica_metatype boxptr_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _k, modelica_metatype _m_flow_turbulent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow,2,0) {(void*) boxptr_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow,0}};
#define boxvar_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow)


DLLExport
Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal (threadData_t *threadData, modelica_integer omc_n, real_array omc_V_flow, real_array omc_dp);

DLLExport
modelica_metatype boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal(threadData_t *threadData, modelica_metatype _n, modelica_metatype _V_flow, modelica_metatype _dp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal,2,0) {(void*) boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal,0}};
#define boxvar_Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal)


DLLExport
modelica_real omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData_t *threadData, Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters _per, modelica_real _V_flow, modelica_real _r_N, real_array _d, modelica_real _delta);
DLLExport
modelica_metatype boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_power(threadData_t *threadData, modelica_metatype _per, modelica_metatype _V_flow, modelica_metatype _r_N, modelica_metatype _d, modelica_metatype _delta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Movers_BaseClasses_Characteristics_power,2,0) {(void*) boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_power,0}};
#define boxvar_Buildings_Fluid_Movers_BaseClasses_Characteristics_power MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Movers_BaseClasses_Characteristics_power)


DLLExport
Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters (threadData_t *threadData, real_array omc_V_flow, real_array omc_P);

DLLExport
modelica_metatype boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _P);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters,2,0) {(void*) boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters,0}};
#define boxvar_Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Movers_BaseClasses_Characteristics_powerParameters)


DLLExport
modelica_real omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData_t *threadData, modelica_real _V_flow, modelica_real _r_N, real_array _d, modelica_real _dpMax, modelica_real _V_flow_max, Buildings_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal _per);
DLLExport
modelica_metatype boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _r_N, modelica_metatype _d, modelica_metatype _dpMax, modelica_metatype _V_flow_max, modelica_metatype _per);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure,2,0) {(void*) boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure,0}};
#define boxvar_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Fluid_Movers_BaseClasses_Characteristics_pressure)


DLLExport
modelica_real omc_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d);
DLLExport
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation,0}};
#define boxvar_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation)


DLLExport
modelica_boolean omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData_t *threadData, real_array _x, modelica_boolean _strict);
DLLExport
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_isMonotonic(threadData_t *threadData, modelica_metatype _x, modelica_metatype _strict);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_isMonotonic,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_isMonotonic,0}};
#define boxvar_Buildings_Utilities_Math_Functions_isMonotonic MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_isMonotonic)


DLLExport
modelica_real omc_Buildings_Utilities_Math_Functions_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small);
DLLExport
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_regStep,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_regStep,0}};
#define boxvar_Buildings_Utilities_Math_Functions_regStep MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_regStep)


DLLExport
modelica_real omc_Buildings_Utilities_Math_Functions_smoothMax(threadData_t *threadData, modelica_real _x1, modelica_real _x2, modelica_real _deltaX);
DLLExport
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_smoothMax(threadData_t *threadData, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _deltaX);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_smoothMax,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_smoothMax,0}};
#define boxvar_Buildings_Utilities_Math_Functions_smoothMax MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_smoothMax)


DLLExport
real_array omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData_t *threadData, real_array _x, real_array _y, modelica_boolean _ensureMonotonicity);
DLLExport
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_splineDerivatives(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _ensureMonotonicity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_splineDerivatives,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_splineDerivatives,0}};
#define boxvar_Buildings_Utilities_Math_Functions_splineDerivatives MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_splineDerivatives)


DLLExport
modelica_real omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData_t *threadData, modelica_real _x, modelica_real _delta, modelica_real _deltaInv, modelica_real _a, modelica_real _b, modelica_real _c, modelica_real _d, modelica_real _e, modelica_real _f);
DLLExport
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta, modelica_metatype _deltaInv, modelica_metatype _a, modelica_metatype _b, modelica_metatype _c, modelica_metatype _d, modelica_metatype _e, modelica_metatype _f);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition,2,0) {(void*) boxptr_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition,0}};
#define boxvar_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition MMC_REFSTRUCTLIT(boxvar_lit_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition)


DLLExport
real_array omc_Modelica_Blocks_Continuous_Internal_Filter_Utilities_toHighestPowerOne(threadData_t *threadData, real_array _den1, real_array _den2, real_array *out_c0, real_array *out_c1);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Continuous_Internal_Filter_Utilities_toHighestPowerOne(threadData_t *threadData, modelica_metatype _den1, modelica_metatype _den2, modelica_metatype *out_c0, modelica_metatype *out_c1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Continuous_Internal_Filter_Utilities_toHighestPowerOne,2,0) {(void*) boxptr_Modelica_Blocks_Continuous_Internal_Filter_Utilities_toHighestPowerOne,0}};
#define boxvar_Modelica_Blocks_Continuous_Internal_Filter_Utilities_toHighestPowerOne MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Continuous_Internal_Filter_Utilities_toHighestPowerOne)


DLLExport
real_array omc_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData_t *threadData, modelica_integer _order, modelica_boolean _normalized);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData_t *threadData, modelica_metatype _order, modelica_metatype _normalized);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping,2,0) {(void*) boxptr_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping,0}};
#define boxvar_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping)


DLLExport
real_array omc_Modelica_Blocks_Continuous_Internal_Filter_coefficients_lowPass(threadData_t *threadData, real_array _cr_in, real_array _c0_in, real_array _c1_in, modelica_real _f_cut, real_array *out_c0, real_array *out_c1);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Continuous_Internal_Filter_coefficients_lowPass(threadData_t *threadData, modelica_metatype _cr_in, modelica_metatype _c0_in, modelica_metatype _c1_in, modelica_metatype _f_cut, modelica_metatype *out_c0, modelica_metatype *out_c1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Continuous_Internal_Filter_coefficients_lowPass,2,0) {(void*) boxptr_Modelica_Blocks_Continuous_Internal_Filter_coefficients_lowPass,0}};
#define boxvar_Modelica_Blocks_Continuous_Internal_Filter_coefficients_lowPass MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Continuous_Internal_Filter_coefficients_lowPass)


DLLExport
real_array omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData_t *threadData, real_array _cr_in, real_array _c0_in, real_array _c1_in, modelica_real _f_cut, real_array *out_a, real_array *out_b, real_array *out_ku);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData_t *threadData, modelica_metatype _cr_in, modelica_metatype _c0_in, modelica_metatype _c1_in, modelica_metatype _f_cut, modelica_metatype *out_a, modelica_metatype *out_b, modelica_metatype *out_ku);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass,2,0) {(void*) boxptr_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass,0}};
#define boxvar_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass)


DLLExport
void omc_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_string _mediumName, string_array _substanceNames, modelica_boolean _singleState, modelica_boolean _define_p, real_array _X_boundary, modelica_string _modelName);
DLLExport
void boxptr_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_metatype _mediumName, modelica_metatype _substanceNames, modelica_metatype _singleState, modelica_metatype _define_p, modelica_metatype _X_boundary, modelica_metatype _modelName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_checkBoundary,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_checkBoundary,0}};
#define boxvar_Modelica_Fluid_Utilities_checkBoundary MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_checkBoundary)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_cubicHermite(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_cubicHermite(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_cubicHermite,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_cubicHermite,0}};
#define boxvar_Modelica_Fluid_Utilities_cubicHermite MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_cubicHermite)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _y1, modelica_real _y1d, modelica_real _y0d);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _y1, modelica_metatype _y1d, modelica_metatype _y0d);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero,0}};
#define boxvar_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regRoot(threadData_t *threadData, modelica_real _x, modelica_real _delta);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_regRoot(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regRoot,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regRoot,0}};
#define boxvar_Modelica_Fluid_Utilities_regRoot MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regRoot)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regRoot2(threadData_t *threadData, modelica_real _x, modelica_real _x_small, modelica_real _k1, modelica_real _k2, modelica_boolean _use_yd0, modelica_real _yd0);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_regRoot2(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x_small, modelica_metatype _k1, modelica_metatype _k2, modelica_metatype _use_yd0, modelica_metatype _yd0);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regRoot2,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regRoot2,0}};
#define boxvar_Modelica_Fluid_Utilities_regRoot2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regRoot2)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regStep,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regStep,0}};
#define boxvar_Modelica_Fluid_Utilities_regStep MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regStep)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regRoot2_regRoot2__utility(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _k1, modelica_real _k2, modelica_boolean _use_yd0, modelica_real _yd0);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_regRoot2_regRoot2__utility(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _k1, modelica_metatype _k2, modelica_metatype _use_yd0, modelica_metatype _yd0);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regRoot2_regRoot2__utility,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regRoot2_regRoot2__utility,0}};
#define boxvar_Modelica_Fluid_Utilities_regRoot2_regRoot2__utility MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regRoot2_regRoot2__utility)


DLLExport
void omc_Modelica_Utilities_Streams_error(threadData_t *threadData, modelica_string _string);
#define boxptr_Modelica_Utilities_Streams_error omc_Modelica_Utilities_Streams_error
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_error,2,0) {(void*) boxptr_Modelica_Utilities_Streams_error,0}};
#define boxvar_Modelica_Utilities_Streams_error MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_error)

extern void ModelicaError(const char* /*_string*/);

DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__1_valveCharacteristic(threadData_t *threadData, modelica_real _pos);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__1_valveCharacteristic(threadData_t *threadData, modelica_metatype _pos);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__1_valveCharacteristic,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__1_valveCharacteristic,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__1_valveCharacteristic MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__1_valveCharacteristic)


DLLExport
nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__1_Medium_density(threadData_t *threadData, nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__1_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__1_Medium_density,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__1_Medium_density,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__1_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__1_Medium_density)


DLLExport
nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__1_Medium_setState__phX)


DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData_t *threadData, nb__hydr__static__v6_checkvalve__1_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__1_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__1_Medium_temperature,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__1_Medium_temperature,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__1_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__1_Medium_temperature)


DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__2_valveCharacteristic(threadData_t *threadData, modelica_real _pos);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__2_valveCharacteristic(threadData_t *threadData, modelica_metatype _pos);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__2_valveCharacteristic,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__2_valveCharacteristic,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__2_valveCharacteristic MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__2_valveCharacteristic)


DLLExport
nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__2_Medium_density(threadData_t *threadData, nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__2_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__2_Medium_density,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__2_Medium_density,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__2_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__2_Medium_density)


DLLExport
nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__2_Medium_setState__phX)


DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData_t *threadData, nb__hydr__static__v6_checkvalve__2_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__2_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__2_Medium_temperature,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__2_Medium_temperature,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__2_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__2_Medium_temperature)


DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__3_valveCharacteristic(threadData_t *threadData, modelica_real _pos);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__3_valveCharacteristic(threadData_t *threadData, modelica_metatype _pos);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__3_valveCharacteristic,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__3_valveCharacteristic,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__3_valveCharacteristic MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__3_valveCharacteristic)


DLLExport
nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__3_Medium_density(threadData_t *threadData, nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__3_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__3_Medium_density,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__3_Medium_density,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__3_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__3_Medium_density)


DLLExport
nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__3_Medium_setState__phX)


DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData_t *threadData, nb__hydr__static__v6_checkvalve__3_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__3_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__3_Medium_temperature,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__3_Medium_temperature,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__3_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__3_Medium_temperature)


DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__4_valveCharacteristic(threadData_t *threadData, modelica_real _pos);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__4_valveCharacteristic(threadData_t *threadData, modelica_metatype _pos);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__4_valveCharacteristic,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__4_valveCharacteristic,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__4_valveCharacteristic MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__4_valveCharacteristic)


DLLExport
nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__4_Medium_density(threadData_t *threadData, nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__4_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__4_Medium_density,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__4_Medium_density,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__4_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__4_Medium_density)


DLLExport
nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState omc_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__4_Medium_setState__phX)


DLLExport
modelica_real omc_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData_t *threadData, nb__hydr__static__v6_checkvalve__4_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_checkvalve__4_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__4_Medium_temperature,2,0) {(void*) boxptr_nb__hydr__static__v6_checkvalve__4_Medium_temperature,0}};
#define boxvar_nb__hydr__static__v6_checkvalve__4_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_checkvalve__4_Medium_temperature)


DLLExport
nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState omc_nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chiller__1_Medium_dynamicViscosity(threadData_t *threadData, nb__hydr__static__v6_chiller__1_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chiller__1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__1_Medium_dynamicViscosity,2,0) {(void*) boxptr_nb__hydr__static__v6_chiller__1_Medium_dynamicViscosity,0}};
#define boxvar_nb__hydr__static__v6_chiller__1_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__1_Medium_dynamicViscosity)


DLLExport
nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState omc_nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chiller__2_Medium_dynamicViscosity(threadData_t *threadData, nb__hydr__static__v6_chiller__2_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chiller__2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__2_Medium_dynamicViscosity,2,0) {(void*) boxptr_nb__hydr__static__v6_chiller__2_Medium_dynamicViscosity,0}};
#define boxvar_nb__hydr__static__v6_chiller__2_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__2_Medium_dynamicViscosity)


DLLExport
nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState omc_nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chiller__3_Medium_dynamicViscosity(threadData_t *threadData, nb__hydr__static__v6_chiller__3_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chiller__3_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__3_Medium_dynamicViscosity,2,0) {(void*) boxptr_nb__hydr__static__v6_chiller__3_Medium_dynamicViscosity,0}};
#define boxvar_nb__hydr__static__v6_chiller__3_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__3_Medium_dynamicViscosity)


DLLExport
nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState omc_nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chiller__4_Medium_dynamicViscosity(threadData_t *threadData, nb__hydr__static__v6_chiller__4_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chiller__4_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__4_Medium_dynamicViscosity,2,0) {(void*) boxptr_nb__hydr__static__v6_chiller__4_Medium_dynamicViscosity,0}};
#define boxvar_nb__hydr__static__v6_chiller__4_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chiller__4_Medium_dynamicViscosity)


DLLExport
nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState omc_nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState)


DLLExport
nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState omc_nb__hydr__static__v6_chw__ret_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chw__ret_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chw__ret_Medium_setState__pTX,2,0) {(void*) boxptr_nb__hydr__static__v6_chw__ret_Medium_setState__pTX,0}};
#define boxvar_nb__hydr__static__v6_chw__ret_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chw__ret_Medium_setState__pTX)


DLLExport
modelica_real omc_nb__hydr__static__v6_chw__ret_Medium_specificEnthalpy(threadData_t *threadData, nb__hydr__static__v6_chw__ret_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chw__ret_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chw__ret_Medium_specificEnthalpy,2,0) {(void*) boxptr_nb__hydr__static__v6_chw__ret_Medium_specificEnthalpy,0}};
#define boxvar_nb__hydr__static__v6_chw__ret_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chw__ret_Medium_specificEnthalpy)


DLLExport
nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState omc_nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState)


DLLExport
nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState omc_nb__hydr__static__v6_chw__sup_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chw__sup_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chw__sup_Medium_setState__pTX,2,0) {(void*) boxptr_nb__hydr__static__v6_chw__sup_Medium_setState__pTX,0}};
#define boxvar_nb__hydr__static__v6_chw__sup_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chw__sup_Medium_setState__pTX)


DLLExport
modelica_real omc_nb__hydr__static__v6_chw__sup_Medium_specificEnthalpy(threadData_t *threadData, nb__hydr__static__v6_chw__sup_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chw__sup_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chw__sup_Medium_specificEnthalpy,2,0) {(void*) boxptr_nb__hydr__static__v6_chw__sup_Medium_specificEnthalpy,0}};
#define boxvar_nb__hydr__static__v6_chw__sup_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chw__sup_Medium_specificEnthalpy)


DLLExport
nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__1_Medium_specificEnthalpy(threadData_t *threadData, nb__hydr__static__v6_chwp__1_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_Medium_specificEnthalpy,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__1_Medium_specificEnthalpy,0}};
#define boxvar_nb__hydr__static__v6_chwp__1_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_Medium_specificEnthalpy)


DLLExport
modelica_string omc_nb__hydr__static__v6_chwp__1_eff_getArrayAsString(threadData_t *threadData, real_array _array, modelica_string _varName, modelica_integer _minimumLength, modelica_integer _significantDigits);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_eff_getArrayAsString(threadData_t *threadData, modelica_metatype _array, modelica_metatype _varName, modelica_metatype _minimumLength, modelica_metatype _significantDigits);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_eff_getArrayAsString,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__1_eff_getArrayAsString,0}};
#define boxvar_nb__hydr__static__v6_chwp__1_eff_getArrayAsString MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_eff_getArrayAsString)


DLLExport
nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__1_preSou_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_preSou_Medium_density,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__1_preSou_Medium_density,0}};
#define boxvar_nb__hydr__static__v6_chwp__1_preSou_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_preSou_Medium_density)


DLLExport
nb__hydr__static__v6_chwp__1_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX,0}};
#define boxvar_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_preSou_Medium_setState__phX)


DLLExport
nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__1_vol_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__1_vol_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_vol_Medium_density,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__1_vol_Medium_density,0}};
#define boxvar_nb__hydr__static__v6_chwp__1_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_vol_Medium_density)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__1_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_vol_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__1_vol_Medium_specificEnthalpy__pTX,0}};
#define boxvar_nb__hydr__static__v6_chwp__1_vol_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_vol_Medium_specificEnthalpy__pTX)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__1_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_vol_Medium_temperature__phX,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__1_vol_Medium_temperature__phX,0}};
#define boxvar_nb__hydr__static__v6_chwp__1_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_vol_Medium_temperature__phX)


DLLExport
nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__1_vol_steBal_Medium_ThermodynamicState)


DLLExport
nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__2_Medium_specificEnthalpy(threadData_t *threadData, nb__hydr__static__v6_chwp__2_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_Medium_specificEnthalpy,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__2_Medium_specificEnthalpy,0}};
#define boxvar_nb__hydr__static__v6_chwp__2_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_Medium_specificEnthalpy)


DLLExport
modelica_string omc_nb__hydr__static__v6_chwp__2_eff_getArrayAsString(threadData_t *threadData, real_array _array, modelica_string _varName, modelica_integer _minimumLength, modelica_integer _significantDigits);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_eff_getArrayAsString(threadData_t *threadData, modelica_metatype _array, modelica_metatype _varName, modelica_metatype _minimumLength, modelica_metatype _significantDigits);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_eff_getArrayAsString,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__2_eff_getArrayAsString,0}};
#define boxvar_nb__hydr__static__v6_chwp__2_eff_getArrayAsString MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_eff_getArrayAsString)


DLLExport
nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__2_preSou_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_preSou_Medium_density,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__2_preSou_Medium_density,0}};
#define boxvar_nb__hydr__static__v6_chwp__2_preSou_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_preSou_Medium_density)


DLLExport
nb__hydr__static__v6_chwp__2_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX,0}};
#define boxvar_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_preSou_Medium_setState__phX)


DLLExport
nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__2_vol_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__2_vol_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_vol_Medium_density,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__2_vol_Medium_density,0}};
#define boxvar_nb__hydr__static__v6_chwp__2_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_vol_Medium_density)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__2_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_vol_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__2_vol_Medium_specificEnthalpy__pTX,0}};
#define boxvar_nb__hydr__static__v6_chwp__2_vol_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_vol_Medium_specificEnthalpy__pTX)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_vol_Medium_temperature__phX,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__2_vol_Medium_temperature__phX,0}};
#define boxvar_nb__hydr__static__v6_chwp__2_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_vol_Medium_temperature__phX)


DLLExport
nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__2_vol_steBal_Medium_ThermodynamicState)


DLLExport
nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__3_Medium_specificEnthalpy(threadData_t *threadData, nb__hydr__static__v6_chwp__3_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_Medium_specificEnthalpy,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__3_Medium_specificEnthalpy,0}};
#define boxvar_nb__hydr__static__v6_chwp__3_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_Medium_specificEnthalpy)


DLLExport
modelica_string omc_nb__hydr__static__v6_chwp__3_eff_getArrayAsString(threadData_t *threadData, real_array _array, modelica_string _varName, modelica_integer _minimumLength, modelica_integer _significantDigits);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_eff_getArrayAsString(threadData_t *threadData, modelica_metatype _array, modelica_metatype _varName, modelica_metatype _minimumLength, modelica_metatype _significantDigits);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_eff_getArrayAsString,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__3_eff_getArrayAsString,0}};
#define boxvar_nb__hydr__static__v6_chwp__3_eff_getArrayAsString MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_eff_getArrayAsString)


DLLExport
nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__3_preSou_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_preSou_Medium_density,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__3_preSou_Medium_density,0}};
#define boxvar_nb__hydr__static__v6_chwp__3_preSou_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_preSou_Medium_density)


DLLExport
nb__hydr__static__v6_chwp__3_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX,0}};
#define boxvar_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_preSou_Medium_setState__phX)


DLLExport
nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__3_vol_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__3_vol_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_vol_Medium_density,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__3_vol_Medium_density,0}};
#define boxvar_nb__hydr__static__v6_chwp__3_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_vol_Medium_density)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__3_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_vol_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__3_vol_Medium_specificEnthalpy__pTX,0}};
#define boxvar_nb__hydr__static__v6_chwp__3_vol_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_vol_Medium_specificEnthalpy__pTX)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__3_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_vol_Medium_temperature__phX,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__3_vol_Medium_temperature__phX,0}};
#define boxvar_nb__hydr__static__v6_chwp__3_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_vol_Medium_temperature__phX)


DLLExport
nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__3_vol_steBal_Medium_ThermodynamicState)


DLLExport
nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__4_Medium_specificEnthalpy(threadData_t *threadData, nb__hydr__static__v6_chwp__4_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_Medium_specificEnthalpy,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__4_Medium_specificEnthalpy,0}};
#define boxvar_nb__hydr__static__v6_chwp__4_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_Medium_specificEnthalpy)


DLLExport
modelica_string omc_nb__hydr__static__v6_chwp__4_eff_getArrayAsString(threadData_t *threadData, real_array _array, modelica_string _varName, modelica_integer _minimumLength, modelica_integer _significantDigits);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_eff_getArrayAsString(threadData_t *threadData, modelica_metatype _array, modelica_metatype _varName, modelica_metatype _minimumLength, modelica_metatype _significantDigits);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_eff_getArrayAsString,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__4_eff_getArrayAsString,0}};
#define boxvar_nb__hydr__static__v6_chwp__4_eff_getArrayAsString MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_eff_getArrayAsString)


DLLExport
nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__4_preSou_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_preSou_Medium_density,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__4_preSou_Medium_density,0}};
#define boxvar_nb__hydr__static__v6_chwp__4_preSou_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_preSou_Medium_density)


DLLExport
nb__hydr__static__v6_chwp__4_preSou_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX,0}};
#define boxvar_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_preSou_Medium_setState__phX)


DLLExport
nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__4_vol_Medium_density(threadData_t *threadData, nb__hydr__static__v6_chwp__4_vol_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_vol_Medium_density,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__4_vol_Medium_density,0}};
#define boxvar_nb__hydr__static__v6_chwp__4_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_vol_Medium_density)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__4_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_vol_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_vol_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__4_vol_Medium_specificEnthalpy__pTX,0}};
#define boxvar_nb__hydr__static__v6_chwp__4_vol_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_vol_Medium_specificEnthalpy__pTX)


DLLExport
modelica_real omc_nb__hydr__static__v6_chwp__4_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_vol_Medium_temperature__phX,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__4_vol_Medium_temperature__phX,0}};
#define boxvar_nb__hydr__static__v6_chwp__4_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_vol_Medium_temperature__phX)


DLLExport
nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState omc_nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_chwp__4_vol_steBal_Medium_ThermodynamicState)


DLLExport
nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState omc_nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState,2,0) {(void*) boxptr_nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState,0}};
#define boxvar_nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState)


DLLExport
modelica_real omc_nb__hydr__static__v6_terminal__resist_Medium_dynamicViscosity(threadData_t *threadData, nb__hydr__static__v6_terminal__resist_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_nb__hydr__static__v6_terminal__resist_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_terminal__resist_Medium_dynamicViscosity,2,0) {(void*) boxptr_nb__hydr__static__v6_terminal__resist_Medium_dynamicViscosity,0}};
#define boxvar_nb__hydr__static__v6_terminal__resist_Medium_dynamicViscosity MMC_REFSTRUCTLIT(boxvar_lit_nb__hydr__static__v6_terminal__resist_Medium_dynamicViscosity)
#include "nb_hydr_static_v6_model.h"


#ifdef __cplusplus
}
#endif
#endif

