/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: GesamtsystemAltV2_data.c
 *
 * Code generated for Simulink model 'GesamtsystemAltV2'.
 *
 * Model version                  : 1.88
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb  9 09:51:15 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GesamtsystemAltV2.h"
#include "GesamtsystemAltV2_private.h"

/* Block parameters (default storage) */
Parameters_GesamtsystemAltV2 GesamtsystemAltV2_P = {
  /* Mask Parameter: DauerbiszumShutdowninsec_const
   * Referenced by: '<S8>/Constant'
   */
  180.0,

  /* Mask Parameter: EdgeDetector1_model
   * Referenced by: '<S53>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_model
   * Referenced by: '<S54>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector1_ic
   * Referenced by: '<S53>/Memory'
   */
  0,

  /* Mask Parameter: EdgeDetector2_ic
   * Referenced by: '<S54>/Memory'
   */
  0,

  /* Expression: 1
   * Referenced by: '<S16>/Binaerer Wertebereich'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S16>/Binaerer Wertebereich'
   */
  0.0,

  /* Expression: 90
   * Referenced by: '<S23>/Quadranten- verschiebung'
   */
  90.0,

  /* Expression: 100
   * Referenced by: '<S22>/PWM-Wertebereich'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S22>/PWM-Wertebereich'
   */
  0.0,

  /* Expression: 0.3
   * Referenced by: '<S4>/Moving Average2'
   */
  0.3,

  /* Expression: [1 1]
   * Referenced by: '<S53>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S53>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S53>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: [1 1]
   * Referenced by: '<S54>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S54>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S54>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S5>/Delay'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S10>/Inkrement'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S10>/Delay'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<S10>/Zeit in sec'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S19>/x-Sollkoordinaten-Offset (in mm)'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S19>/y-Sollkoordinaten-Offset (in mm)'
   */
  0.0,

  /* Expression: 85
   * Referenced by: '<S15>/Leistungsbereich Motor_links'
   */
  85.0,

  /* Expression: 0
   * Referenced by: '<S15>/Leistungsbereich Motor_links'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Leistungsoffset Motor_links'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Leistungsoffset Motor_links'
   */
  0.0,

  /* Expression: 85
   * Referenced by: '<S15>/Leistungsbereich Motor_rechts'
   */
  85.0,

  /* Expression: 0
   * Referenced by: '<S15>/Leistungsbereich Motor_rechts'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Leistungsoffset Motor_rechts'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Leistungsoffset Motor_rechts'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S34>/Pulse Generator'
   */
  1.0,

  /* Expression: 250
   * Referenced by: '<S34>/Pulse Generator'
   */
  250.0,

  /* Expression: 1
   * Referenced by: '<S34>/Pulse Generator'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S34>/Pulse Generator'
   */
  0.0,

  /* Expression: 0.076
   * Referenced by: '<S52>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  0.076,

  /* Expression: 2000
   * Referenced by: '<S52>/Constant'
   */
  2000.0,

  /* Expression: 2000
   * Referenced by: '<S52>/Heuristisch ermittelter Schwellwert'
   */
  2000.0,

  /* Expression: 0
   * Referenced by: '<S52>/Unit Delay5'
   */
  0.0,

  /* Expression: 0.076
   * Referenced by: '<S52>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   */
  0.076,

  /* Expression: [-1,-440,-295,-170,-40,85,220,430]
   * Referenced by: '<S4>/1-D Lookup Table2'
   */
  { -1.0, -440.0, -295.0, -170.0, -40.0, 85.0, 220.0, 430.0 },

  /* Expression: [-1,0,1,2,3,4,5,6]
   * Referenced by: '<S4>/1-D Lookup Table2'
   */
  { -1.0, 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 },

  /* Expression: -0.5
   * Referenced by: '<S49>/Dead Zone'
   */
  -0.5,

  /* Expression: 0.5
   * Referenced by: '<S49>/Dead Zone'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S49>/Verstaerkung'
   */
  1.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Computed Parameter: xinmm_Gain
   * Referenced by: '<S17>/x in mm'
   */
  0.1F,

  /* Computed Parameter: yinmm_Gain
   * Referenced by: '<S17>/y in mm'
   */
  0.1F,

  /* Computed Parameter: alphain_Gain
   * Referenced by: '<S17>/alpha in °'
   */
  0.1F,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S52>/Unit Delay1'
   */
  0.0F,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<S52>/Unit Delay2'
   */
  0.0F,

  /* Computed Parameter: UnitDelay2_InitialCondition_j
   * Referenced by: '<S4>/Unit Delay2'
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
   * Referenced by: '<S35>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_j
   * Referenced by: '<S5>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_d
   * Referenced by: '<S10>/Delay'
   */
  1U,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S52>/Unit Delay3'
   */
  0,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S52>/Unit Delay4'
   */
  0,

  /* Computed Parameter: Delay_InitialCondition_k
   * Referenced by: '<S35>/Delay'
   */
  0U,

  /* Computed Parameter: RateTransition_InitialCondition
   * Referenced by: '<S17>/Rate Transition'
   */
  0U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
