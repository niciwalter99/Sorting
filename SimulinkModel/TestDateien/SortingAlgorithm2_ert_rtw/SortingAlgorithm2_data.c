/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortingAlgorithm2_data.c
 *
 * Code generated for Simulink model 'SortingAlgorithm2'.
 *
 * Model version                  : 1.22
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Dec 15 18:08:03 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SortingAlgorithm2.h"
#include "SortingAlgorithm2_private.h"

/* Block parameters (default storage) */
P_SortingAlgorithm2_T SortingAlgorithm2_P = {
  /* Mask Parameter: EdgeDetector1_model
   * Referenced by: '<S8>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_model
   * Referenced by: '<S9>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_ic
   * Referenced by: '<S9>/Memory'
   */
  0,

  /* Mask Parameter: EdgeDetector1_ic
   * Referenced by: '<S8>/Memory'
   */
  0,

  /* Expression: [1 1]
   * Referenced by: '<S8>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S8>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S8>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: [1 1]
   * Referenced by: '<S9>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S9>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S9>/pos. edge'
   */
  { 1.0, 0.0 },

  /* Expression: 2000
   * Referenced by: '<S7>/Heuristisch ermittelter Schwellwert'
   */
  2000.0,

  /* Expression: 2000
   * Referenced by: '<S7>/Constant'
   */
  2000.0,

  /* Expression: 0
   * Referenced by: '<S7>/Unit Delay5'
   */
  0.0,

  /* Expression: 0.076
   * Referenced by: '<S7>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   */
  0.076,

  /* Expression: 0.076
   * Referenced by: '<S7>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  0.076,

  /* Expression: -1
   * Referenced by: '<S3>/Dead Zone'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S3>/Dead Zone'
   */
  1.0,

  /* Expression: 0.6
   * Referenced by: '<S3>/Verstaerkung'
   */
  0.6,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<S7>/Unit Delay2'
   */
  0.0F,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S7>/Unit Delay1'
   */
  0.0F,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S7>/Unit Delay3'
   */
  0,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S7>/Unit Delay4'
   */
  0,

  /* Start of '<S9>/POSITIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S16>/OUT'
     */
    0
  }
  ,

  /* End of '<S9>/POSITIVE Edge' */

  /* Start of '<S9>/NEGATIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S15>/OUT'
     */
    0
  }
  ,

  /* End of '<S9>/NEGATIVE Edge' */

  /* Start of '<S8>/POSITIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S14>/OUT'
     */
    0
  }
  ,

  /* End of '<S8>/POSITIVE Edge' */

  /* Start of '<S8>/NEGATIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S13>/OUT'
     */
    0
  }
  /* End of '<S8>/NEGATIVE Edge' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */