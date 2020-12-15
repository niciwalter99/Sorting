/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: WinkelTest_data.c
 *
 * Code generated for Simulink model 'WinkelTest'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Dec 14 13:17:49 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "WinkelTest.h"
#include "WinkelTest_private.h"

/* Block parameters (default storage) */
P_WinkelTest_T WinkelTest_P = {
  /* Mask Parameter: EdgeDetector1_model
   * Referenced by: '<S3>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_model
   * Referenced by: '<S4>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_ic
   * Referenced by: '<S4>/Memory'
   */
  0,

  /* Mask Parameter: EdgeDetector1_ic
   * Referenced by: '<S3>/Memory'
   */
  0,

  /* Expression: [1 1]
   * Referenced by: '<S3>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S3>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S3>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: [1 1]
   * Referenced by: '<S4>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S4>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S4>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: 2000
   * Referenced by: '<S1>/Heuristisch ermittelter Schwellwert'
   */
  2000.0,

  /* Expression: 2000
   * Referenced by: '<S1>/Constant'
   */
  2000.0,

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay5'
   */
  0.0,

  /* Expression: 0.076
   * Referenced by: '<S1>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   */
  0.076,

  /* Expression: 0.076
   * Referenced by: '<S1>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  0.076,

  /* Expression: 360
   * Referenced by: '<Root>/Constant'
   */
  360.0,

  /* Expression: -1
   * Referenced by: '<S2>/Dead Zone'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Dead Zone'
   */
  1.0,

  /* Expression: 0.1
   * Referenced by: '<S2>/Verstaerkung'
   */
  0.1,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<S1>/Unit Delay2'
   */
  0.0F,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S1>/Unit Delay1'
   */
  0.0F,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S1>/Unit Delay3'
   */
  0,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S1>/Unit Delay4'
   */
  0,

  /* Start of '<S4>/POSITIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S11>/OUT'
     */
    0
  }
  ,

  /* End of '<S4>/POSITIVE Edge' */

  /* Start of '<S4>/NEGATIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S10>/OUT'
     */
    0
  }
  ,

  /* End of '<S4>/NEGATIVE Edge' */

  /* Start of '<S3>/POSITIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S9>/OUT'
     */
    0
  }
  ,

  /* End of '<S3>/POSITIVE Edge' */

  /* Start of '<S3>/NEGATIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S8>/OUT'
     */
    0
  }
  /* End of '<S3>/NEGATIVE Edge' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
