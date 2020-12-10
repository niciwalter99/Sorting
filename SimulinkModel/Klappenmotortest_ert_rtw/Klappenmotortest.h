/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Klappenmotortest.h
 *
 * Code generated for Simulink model 'Klappenmotortest'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Dec 10 16:25:22 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Klappenmotortest_h_
#define RTW_HEADER_Klappenmotortest_h_
#include <stddef.h>
#include <string.h>
#ifndef Klappenmotortest_COMMON_INCLUDES_
# define Klappenmotortest_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Gpio.h"
#include "DSP2833x_Examples.h"
#include "IQmathLib.h"
#endif                                 /* Klappenmotortest_COMMON_INCLUDES_ */

#include "Klappenmotortest_types.h"
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
  real_T Delay2;                       /* '<Root>/Delay2' */
} B_Klappenmotortest_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay2_DSTATE[18];            /* '<Root>/Delay2' */
  real_T Delay1_DSTATE[15];            /* '<Root>/Delay1' */
  real_T Delay3_DSTATE[20];            /* '<Root>/Delay3' */
} DW_Klappenmotortest_T;

/* Parameters (default storage) */
struct P_Klappenmotortest_T_ {
  real_T Delay2_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<Root>/Delay2'
                                        */
  real_T Delay1_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<Root>/Delay1'
                                        */
  real_T Delay3_InitialCondition;      /* Expression: 1.0
                                        * Referenced by: '<Root>/Delay3'
                                        */
  real_T Constant1_Value;              /* Expression: 100
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  uint16_T Delay2_DelayLength;         /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<Root>/Delay2'
                                        */
  uint16_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<Root>/Delay1'
                                        */
  uint16_T Delay3_DelayLength;         /* Computed Parameter: Delay3_DelayLength
                                        * Referenced by: '<Root>/Delay3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Klappenmotortest_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Klappenmotortest_T Klappenmotortest_P;

/* Block signals (default storage) */
extern B_Klappenmotortest_T Klappenmotortest_B;

/* Block states (default storage) */
extern DW_Klappenmotortest_T Klappenmotortest_DW;

/* Model entry point functions */
extern void Klappenmotortest_initialize(void);
extern void Klappenmotortest_step(void);
extern void Klappenmotortest_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Klappenmotortest_T *const Klappenmotortest_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope1' : Unused code path elimination
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
 * '<Root>' : 'Klappenmotortest'
 */
#endif                                 /* RTW_HEADER_Klappenmotortest_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
