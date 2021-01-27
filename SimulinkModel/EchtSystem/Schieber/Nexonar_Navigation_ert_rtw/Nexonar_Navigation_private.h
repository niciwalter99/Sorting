/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Nexonar_Navigation_private.h
 *
 * Code generated for Simulink model 'Nexonar_Navigation'.
 *
 * Model version                  : 1.94
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan 27 10:06:59 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Nexonar_Navigation_private_h_
#define RTW_HEADER_Nexonar_Navigation_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "Nexonar_Navigation.h"

extern real_T rt_roundd_snf(real_T u);
void isr_int8pie2_task_fcn(void);
extern void configureGPIOExtInterrupt(void);
void isr_int8pie2_task_fcn(void);

#endif                                 /* RTW_HEADER_Nexonar_Navigation_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
