/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PoluluSortierenWinkel2_data.c
 *
 * Code generated for Simulink model 'PoluluSortierenWinkel2'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Dec 14 17:02:16 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PoluluSortierenWinkel2.h"
#include "PoluluSortierenWinkel2_private.h"

/* Block parameters (default storage) */
P_PoluluSortierenWinkel2_T PoluluSortierenWinkel2_P = {
  /* Mask Parameter: EdgeDetector1_model
   * Referenced by: '<S6>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_model
   * Referenced by: '<S7>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_ic
   * Referenced by: '<S7>/Memory'
   */
  0,

  /* Mask Parameter: EdgeDetector1_ic
   * Referenced by: '<S6>/Memory'
   */
  0,

  /* Expression: [1 1]
   * Referenced by: '<S6>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S6>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S6>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: [1 1]
   * Referenced by: '<S7>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S7>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S7>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: 2000
   * Referenced by: '<S3>/Heuristisch ermittelter Schwellwert'
   */
  2000.0,

  /* Expression: 2000
   * Referenced by: '<S3>/Constant'
   */
  2000.0,

  /* Expression: 0
   * Referenced by: '<S3>/Unit Delay5'
   */
  0.0,

  /* Expression: 0.076
   * Referenced by: '<S3>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   */
  0.076,

  /* Expression: 0.076
   * Referenced by: '<S3>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  0.076,

  /* Expression: -1
   * Referenced by: '<S4>/Dead Zone'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S4>/Dead Zone'
   */
  1.0,

  /* Expression: 0.1
   * Referenced by: '<S4>/Verstaerkung'
   */
  0.1,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<S3>/Unit Delay2'
   */
  0.0F,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S3>/Unit Delay1'
   */
  0.0F,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S3>/Unit Delay3'
   */
  0,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S3>/Unit Delay4'
   */
  0,

  /* Start of '<S7>/POSITIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S14>/OUT'
     */
    0
  }
  ,

  /* End of '<S7>/POSITIVE Edge' */

  /* Start of '<S7>/NEGATIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S13>/OUT'
     */
    0
  }
  ,

  /* End of '<S7>/NEGATIVE Edge' */

  /* Start of '<S6>/POSITIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S12>/OUT'
     */
    0
  }
  ,

  /* End of '<S6>/POSITIVE Edge' */

  /* Start of '<S6>/NEGATIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S11>/OUT'
     */
    0
  }
  /* End of '<S6>/NEGATIVE Edge' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
