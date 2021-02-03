/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusEchtSystem_types.h
 *
 * Code generated for Simulink model 'SortierAlgorithmusEchtSystem'.
 *
 * Model version                  : 1.74
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Feb  3 18:56:58 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SortierAlgorithmusEchtSystem_types_h_
#define RTW_HEADER_SortierAlgorithmusEchtSystem_types_h_
#include "rtwtypes.h"
#ifndef typedef_dsp_private_ExponentialMoving_T
#define typedef_dsp_private_ExponentialMoving_T

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  real_T ForgettingFactor;
  real_T pwN;
  real_T pmN;
  real_T plambda;
} dsp_private_ExponentialMoving_T;

#endif                                 /*typedef_dsp_private_ExponentialMoving_T*/

#ifndef typedef_cell_wrap_SortierAlgorithmusE_T
#define typedef_cell_wrap_SortierAlgorithmusE_T

typedef struct {
  uint32_T f1[8];
} cell_wrap_SortierAlgorithmusE_T;

#endif                                 /*typedef_cell_wrap_SortierAlgorithmusE_T*/

#ifndef typedef_dsp_simulink_MovingAverage_So_T
#define typedef_dsp_simulink_MovingAverage_So_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_SortierAlgorithmusE_T inputVarSize;
  real_T ForgettingFactor;
  dsp_private_ExponentialMoving_T *pStatistic;
  int32_T NumChannels;
} dsp_simulink_MovingAverage_So_T;

#endif                                 /*typedef_dsp_simulink_MovingAverage_So_T*/

/* Parameters for system: '<S12>/NEGATIVE Edge' */
typedef struct P_NEGATIVEEdge_SortierAlgorit_T_ P_NEGATIVEEdge_SortierAlgorit_T;

/* Parameters for system: '<S12>/POSITIVE Edge' */
typedef struct P_POSITIVEEdge_SortierAlgorit_T_ P_POSITIVEEdge_SortierAlgorit_T;

/* Parameters (default storage) */
typedef struct P_SortierAlgorithmusEchtSyste_T_ P_SortierAlgorithmusEchtSyste_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_SortierAlgorithmusEch_T RT_MODEL_SortierAlgorithmusEc_T;

#endif                                 /* RTW_HEADER_SortierAlgorithmusEchtSystem_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
