/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: testFarbe.h
 *
 * Code generated for Simulink model 'testFarbe'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Dec 14 17:13:49 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_testFarbe_h_
#define RTW_HEADER_testFarbe_h_
#include <stddef.h>
#include <string.h>
#ifndef testFarbe_COMMON_INCLUDES_
# define testFarbe_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#endif                                 /* testFarbe_COMMON_INCLUDES_ */

#include "testFarbe_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  uint16_T ADC;                        /* '<Root>/ADC' */
} B_testFarbe_T;

/* Real-time Model Data Structure */
struct tag_RTM_testFarbe_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_testFarbe_T testFarbe_B;

/* Model entry point functions */
extern void testFarbe_initialize(void);
extern void testFarbe_step(void);
extern void testFarbe_terminate(void);

/* Real-time Model object */
extern RT_MODEL_testFarbe_T *const testFarbe_M;

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
 * '<Root>' : 'testFarbe'
 */
#endif                                 /* RTW_HEADER_testFarbe_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
