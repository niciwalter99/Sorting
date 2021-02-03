/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Gesamtsystem_data.c
 *
 * Code generated for Simulink model 'Gesamtsystem'.
 *
 * Model version                  : 1.83
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Feb  3 10:34:50 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Gesamtsystem.h"
#include "Gesamtsystem_private.h"

/* Block parameters (default storage) */
Parameters_Gesamtsystem Gesamtsystem_P = {
  /* Mask Parameter: EdgeDetector1_model
   * Referenced by: '<S45>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_model
   * Referenced by: '<S46>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector1_ic
   * Referenced by: '<S45>/Memory'
   */
  0,

  /* Mask Parameter: EdgeDetector2_ic
   * Referenced by: '<S46>/Memory'
   */
  0,

  /* Expression: 90
   * Referenced by: '<S17>/Quadranten- verschiebung'
   */
  90.0,

  /* Expression: 100
   * Referenced by: '<S16>/PWM-Wertebereich'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S16>/PWM-Wertebereich'
   */
  0.0,

  /* Expression: 0.3
   * Referenced by: '<S3>/Moving Average2'
   */
  0.3,

  /* Expression: [1 1]
   * Referenced by: '<S45>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S45>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S45>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: [1 1]
   * Referenced by: '<S46>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S46>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S46>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S10>/Leistungsoffset Motor_links'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<S10>/Leistungsoffset Motor_links'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S10>/Leistungsoffset Motor_rechts'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S10>/Leistungsoffset Motor_rechts'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S28>/Pulse Generator'
   */
  1.0,

  /* Expression: 250
   * Referenced by: '<S28>/Pulse Generator'
   */
  250.0,

  /* Expression: 1
   * Referenced by: '<S28>/Pulse Generator'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S28>/Pulse Generator'
   */
  0.0,

  /* Expression: 0.076
   * Referenced by: '<S44>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  0.076,

  /* Expression: 2000
   * Referenced by: '<S44>/Constant'
   */
  2000.0,

  /* Expression: 2000
   * Referenced by: '<S44>/Heuristisch ermittelter Schwellwert'
   */
  2000.0,

  /* Expression: 0
   * Referenced by: '<S44>/Unit Delay5'
   */
  0.0,

  /* Expression: 0.076
   * Referenced by: '<S44>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   */
  0.076,

  /* Expression: [-1,-440,-295,-170,-40,85,220,430]
   * Referenced by: '<S3>/1-D Lookup Table2'
   */
  { -1.0, -440.0, -295.0, -170.0, -40.0, 85.0, 220.0, 430.0 },

  /* Expression: [-1,0,1,2,3,4,5,6]
   * Referenced by: '<S3>/1-D Lookup Table2'
   */
  { -1.0, 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 },

  /* Expression: -0.5
   * Referenced by: '<S41>/Dead Zone'
   */
  -0.5,

  /* Expression: 0.5
   * Referenced by: '<S41>/Dead Zone'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S41>/Verstaerkung'
   */
  1.0,

  /* Computed Parameter: xinmm_Gain
   * Referenced by: '<S13>/x in mm'
   */
  0.1F,

  /* Computed Parameter: yinmm_Gain
   * Referenced by: '<S13>/y in mm'
   */
  0.1F,

  /* Computed Parameter: alphain_Gain
   * Referenced by: '<S13>/alpha in °'
   */
  0.1F,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S44>/Unit Delay1'
   */
  0.0F,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<S44>/Unit Delay2'
   */
  0.0F,

  /* Computed Parameter: UnitDelay2_InitialCondition_h
   * Referenced by: '<S3>/Unit Delay2'
   */
  0.0F,

  /* Computed Parameter: TmpRTBAtSortieralgorithmus2Inpo
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: TmpRTBAtChart7Inport4_InitialCo
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S29>/Delay'
   */
  1U,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S44>/Unit Delay3'
   */
  0,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S44>/Unit Delay4'
   */
  0,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S29>/Delay'
   */
  0U,

  /* Computed Parameter: RateTransition_InitialCondition
   * Referenced by: '<S13>/Rate Transition'
   */
  0U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
