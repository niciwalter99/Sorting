/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PoluluSortierenTest.h
 *
 * Code generated for Simulink model 'PoluluSortierenTest'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Dec 13 15:11:18 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PoluluSortierenTest_h_
#define RTW_HEADER_PoluluSortierenTest_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef PoluluSortierenTest_COMMON_INCLUDES_
# define PoluluSortierenTest_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Gpio.h"
#include "DSP2833x_Examples.h"
#include "IQmathLib.h"
#endif                                 /* PoluluSortierenTest_COMMON_INCLUDES_ */

#include "PoluluSortierenTest_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

extern void config_ePWM_GPIO (void);

/* Block signals (default storage) */
typedef struct {
  real_T rechts;                       /* '<Root>/Chart' */
  real_T stop;                         /* '<Root>/Chart' */
} B_PoluluSortierenTest_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T blau;                         /* '<Root>/Chart' */
  real_T x;                            /* '<Root>/Chart' */
  real_T positionLinks;                /* '<Root>/Chart' */
  uint32_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint16_T is_active_c3_PoluluSortierenTes;/* '<Root>/Chart' */
  uint16_T is_c3_PoluluSortierenTest;  /* '<Root>/Chart' */
} DW_PoluluSortierenTest_T;

/* Real-time Model Data Structure */
struct tag_RTM_PoluluSortierenTest_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_PoluluSortierenTest_T PoluluSortierenTest_B;

/* Block states (default storage) */
extern DW_PoluluSortierenTest_T PoluluSortierenTest_DW;

/* Model entry point functions */
extern void PoluluSortierenTest_initialize(void);
extern void PoluluSortierenTest_step(void);
extern void PoluluSortierenTest_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PoluluSortierenTest_T *const PoluluSortierenTest_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PoluluSortierenTest'
 * '<S1>'   : 'PoluluSortierenTest/Chart'
 */
#endif                                 /* RTW_HEADER_PoluluSortierenTest_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
