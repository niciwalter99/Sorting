/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusEchtSystem_data.c
 *
 * Code generated for Simulink model 'SortierAlgorithmusEchtSystem'.
 *
 * Model version                  : 1.56
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan 20 10:48:53 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SortierAlgorithmusEchtSystem.h"
#include "SortierAlgorithmusEchtSystem_private.h"

/* Block parameters (default storage) */
P_SortierAlgorithmusEchtSyste_T SortierAlgorithmusEchtSystem_P = {
  /* Mask Parameter: EdgeDetector1_model
   * Referenced by: '<S11>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_model
   * Referenced by: '<S12>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_ic
   * Referenced by: '<S12>/Memory'
   */
  0,

  /* Mask Parameter: EdgeDetector1_ic
   * Referenced by: '<S11>/Memory'
   */
  0,

  /* Expression: [1 1]
   * Referenced by: '<S11>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S11>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S11>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: [1 1]
   * Referenced by: '<S12>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S12>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S12>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: 2000
   * Referenced by: '<S10>/Heuristisch ermittelter Schwellwert'
   */
  2000.0,

  /* Expression: 2000
   * Referenced by: '<S10>/Constant'
   */
  2000.0,

  /* Expression: 0
   * Referenced by: '<S10>/Unit Delay5'
   */
  0.0,

  /* Expression: 0.076
   * Referenced by: '<S10>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   */
  0.076,

  /* Expression: 0.076
   * Referenced by: '<S10>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  0.076,

  /* Expression: [-1,-440,-295,-170,-40,85,220,430]
   * Referenced by: '<Root>/1-D Lookup Table'
   */
  { -1.0, -440.0, -295.0, -170.0, -40.0, 85.0, 220.0, 430.0 },

  /* Expression: [-1,0,1,2,3,4,5,6]
   * Referenced by: '<Root>/1-D Lookup Table'
   */
  { -1.0, 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 },

  /* Expression: -0.5
   * Referenced by: '<S7>/Dead Zone'
   */
  -0.5,

  /* Expression: 0.5
   * Referenced by: '<S7>/Dead Zone'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S7>/Verstaerkung'
   */
  1.0,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<S10>/Unit Delay2'
   */
  0.0F,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S10>/Unit Delay1'
   */
  0.0F,

  /* Computed Parameter: UnitDelay_InitialCondition
   * Referenced by: '<Root>/Unit Delay'
   */
  0.0F,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S10>/Unit Delay3'
   */
  0,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S10>/Unit Delay4'
   */
  0,

  /* Start of '<S12>/POSITIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S19>/OUT'
     */
    0
  }
  ,

  /* End of '<S12>/POSITIVE Edge' */

  /* Start of '<S12>/NEGATIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S18>/OUT'
     */
    0
  }
  ,

  /* End of '<S12>/NEGATIVE Edge' */

  /* Start of '<S11>/POSITIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S17>/OUT'
     */
    0
  }
  ,

  /* End of '<S11>/POSITIVE Edge' */

  /* Start of '<S11>/NEGATIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S16>/OUT'
     */
    0
  }
  /* End of '<S11>/NEGATIVE Edge' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */