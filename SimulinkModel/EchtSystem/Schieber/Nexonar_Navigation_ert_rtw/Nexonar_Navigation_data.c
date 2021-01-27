/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Nexonar_Navigation_data.c
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

#include "Nexonar_Navigation.h"
#include "Nexonar_Navigation_private.h"

/* Block parameters (default storage) */
Parameters_Nexonar_Navigation Nexonar_Navigation_P = {
  /* Expression: 90
   * Referenced by: '<S8>/Quadranten- verschiebung'
   */
  90.0,

  /* Expression: 100
   * Referenced by: '<S7>/PWM-Wertebereich'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S7>/PWM-Wertebereich'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S19>/Pulse Generator'
   */
  1.0,

  /* Expression: 250
   * Referenced by: '<S19>/Pulse Generator'
   */
  250.0,

  /* Expression: 1
   * Referenced by: '<S19>/Pulse Generator'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S19>/Pulse Generator'
   */
  0.0,

  /* Computed Parameter: xinmm_Gain
   * Referenced by: '<S4>/x in mm'
   */
  0.1F,

  /* Computed Parameter: yinmm_Gain
   * Referenced by: '<S4>/y in mm'
   */
  0.1F,

  /* Computed Parameter: alphain_Gain
   * Referenced by: '<S4>/alpha in °'
   */
  0.1F,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S20>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S20>/Delay'
   */
  0U,

  /* Computed Parameter: RateTransition_InitialCondition
   * Referenced by: '<S4>/Rate Transition'
   */
  0U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
