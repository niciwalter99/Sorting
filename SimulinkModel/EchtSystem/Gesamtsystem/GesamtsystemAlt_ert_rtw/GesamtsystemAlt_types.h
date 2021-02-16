/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: GesamtsystemAlt_types.h
 *
 * Code generated for Simulink model 'GesamtsystemAlt'.
 *
 * Model version                  : 1.85
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Feb  5 15:31:11 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_GesamtsystemAlt_types_h_
#define RTW_HEADER_GesamtsystemAlt_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef typedef_dsp_private_ExponentialMovingAv
#define typedef_dsp_private_ExponentialMovingAv

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  real_T ForgettingFactor;
  real_T pwN;
  real_T pmN;
  real_T plambda;
} dsp_private_ExponentialMovingAv;

#endif                                 /*typedef_dsp_private_ExponentialMovingAv*/

#ifndef typedef_cell_wrap_GesamtsystemAlt
#define typedef_cell_wrap_GesamtsystemAlt

typedef struct {
  uint32_T f1[8];
} cell_wrap_GesamtsystemAlt;

#endif                                 /*typedef_cell_wrap_GesamtsystemAlt*/

#ifndef typedef_dsp_simulink_MovingAverage_Gesa
#define typedef_dsp_simulink_MovingAverage_Gesa

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_GesamtsystemAlt inputVarSize;
  real_T ForgettingFactor;
  dsp_private_ExponentialMovingAv *pStatistic;
  int32_T NumChannels;
} dsp_simulink_MovingAverage_Gesa;

#endif                                 /*typedef_dsp_simulink_MovingAverage_Gesa*/

/* Parameters (default storage) */
typedef struct Parameters_GesamtsystemAlt_ Parameters_GesamtsystemAlt;

/* Forward declaration for rtModel */
typedef struct tag_RTM_GesamtsystemAlt RT_MODEL_GesamtsystemAlt;

#endif                                 /* RTW_HEADER_GesamtsystemAlt_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
