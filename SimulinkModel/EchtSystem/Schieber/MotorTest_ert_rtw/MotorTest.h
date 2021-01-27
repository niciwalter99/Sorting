/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MotorTest.h
 *
 * Code generated for Simulink model 'MotorTest'.
 *
 * Model version                  : 1.79
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan 27 10:34:22 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MotorTest_h_
#define RTW_HEADER_MotorTest_h_
#include <stddef.h>
#ifndef MotorTest_COMMON_INCLUDES_
# define MotorTest_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "IQmathLib.h"
#endif                                 /* MotorTest_COMMON_INCLUDES_ */

#include "MotorTest_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

extern void config_ePWM_GPIO (void);

/* user code (top of header file) */
#include "i2c_reset.h"

/* Real-time Model Data Structure */
struct tag_RTM_MotorTest {
  const char_T *errorStatus;
};

/* Model entry point functions */
extern void MotorTest_initialize(void);
extern void MotorTest_step(void);
extern void MotorTest_terminate(void);

/* Real-time Model object */
extern RT_MODEL_MotorTest *const MotorTest_M;

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
 * '<Root>' : 'MotorTest'
 */
#endif                                 /* RTW_HEADER_MotorTest_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
