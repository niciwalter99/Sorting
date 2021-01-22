/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Nexonar_Navigation_data.c
 *
 * Code generated for Simulink model 'Nexonar_Navigation'.
 *
<<<<<<< HEAD
 * Model version                  : 1.80
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan 20 11:10:53 2021
=======
 * Model version                  : 1.76
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Jan 18 19:13:49 2021
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
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
  /* Mask Parameter: EdgeDetector1_model
   * Referenced by: '<S36>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_model
   * Referenced by: '<S37>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector1_ic
   * Referenced by: '<S36>/Memory'
   */
  0,

  /* Mask Parameter: EdgeDetector2_ic
   * Referenced by: '<S37>/Memory'
   */
  0,

  /* Expression: 90
   * Referenced by: '<S9>/Quadranten- verschiebung'
   */
  90.0,

  /* Expression: 100
   * Referenced by: '<S8>/PWM-Wertebereich'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S8>/PWM-Wertebereich'
   */
  0.0,

  /* Expression: [1 1]
   * Referenced by: '<S36>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S36>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S36>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: [1 1]
   * Referenced by: '<S37>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S37>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S37>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: 1
   * Referenced by: '<S20>/Pulse Generator'
   */
  1.0,

  /* Expression: 250
   * Referenced by: '<S20>/Pulse Generator'
   */
  250.0,

  /* Expression: 1
   * Referenced by: '<S20>/Pulse Generator'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S20>/Pulse Generator'
   */
  0.0,

  /* Expression: 0.076
   * Referenced by: '<S35>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  0.076,

  /* Expression: 2000
   * Referenced by: '<S35>/Constant'
   */
  2000.0,

  /* Expression: 2000
   * Referenced by: '<S35>/Heuristisch ermittelter Schwellwert'
   */
  2000.0,

  /* Expression: 0
   * Referenced by: '<S35>/Unit Delay5'
   */
  0.0,

  /* Expression: 0.076
   * Referenced by: '<S35>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   */
  0.076,

  /* Expression: [-1,-440,-295,-170,-40,85,220,430]
   * Referenced by: '<S5>/1-D Lookup Table'
   */
  { -1.0, -440.0, -295.0, -170.0, -40.0, 85.0, 220.0, 430.0 },

  /* Expression: [-1,0,1,2,3,4,5,6]
   * Referenced by: '<S5>/1-D Lookup Table'
   */
  { -1.0, 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 },

  /* Expression: -0.5
   * Referenced by: '<S32>/Dead Zone'
   */
  -0.5,

  /* Expression: 0.5
   * Referenced by: '<S32>/Dead Zone'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S32>/Verstaerkung'
   */
  1.0,

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

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S35>/Unit Delay1'
   */
  0.0F,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<S35>/Unit Delay2'
   */
  0.0F,

  /* Computed Parameter: UnitDelay_InitialCondition
   * Referenced by: '<S5>/Unit Delay'
   */
  0.0F,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S21>/Delay'
   */
  1U,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S35>/Unit Delay3'
   */
  0,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S35>/Unit Delay4'
   */
  0,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S21>/Delay'
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
