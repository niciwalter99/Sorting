/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusEchtSystem_data.c
 *
 * Code generated for Simulink model 'SortierAlgorithmusEchtSystem'.
 *
 * Model version                  : 1.37
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jan 12 17:04:38 2021
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
   * Referenced by: '<S10>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_model
   * Referenced by: '<S11>/Constant1'
   */
  3.0,

  /* Mask Parameter: EdgeDetector2_ic
   * Referenced by: '<S11>/Memory'
   */
  0,

  /* Mask Parameter: EdgeDetector1_ic
   * Referenced by: '<S10>/Memory'
   */
  0,

  /* Expression: 1
   * Referenced by: '<S4>/Constant'
   */
  1.0,

  /* Expression: [1 1]
   * Referenced by: '<S10>/either edge'
   */
  { 1.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S10>/neg. edge'
   */
  { 0.0, 1.0 },

  /* Expression: [1 0]
   * Referenced by: '<S10>/pos. edge'
   */
  { 1.0, 0.0 },

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

  /* Expression: 2000
   * Referenced by: '<S9>/Heuristisch ermittelter Schwellwert'
   */
  2000.0,

  /* Expression: 2000
   * Referenced by: '<S9>/Constant'
   */
  2000.0,

  /* Expression: 0
   * Referenced by: '<S9>/Unit Delay5'
   */
  0.0,

  /* Expression: 0.076
   * Referenced by: '<S9>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   */
  0.076,

  /* Expression: 0.076
   * Referenced by: '<S9>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  0.076,

  /* Expression: -1
   * Referenced by: '<S6>/Dead Zone'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S6>/Dead Zone'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S6>/Verstaerkung'
   */
  1.0,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<S9>/Unit Delay2'
   */
  0.0F,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S9>/Unit Delay1'
   */
  0.0F,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S9>/Unit Delay3'
   */
  0,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S9>/Unit Delay4'
   */
  0,

  /* Start of '<S11>/POSITIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S18>/OUT'
     */
    0
  }
  ,

  /* End of '<S11>/POSITIVE Edge' */

  /* Start of '<S11>/NEGATIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S17>/OUT'
     */
    0
  }
  ,

  /* End of '<S11>/NEGATIVE Edge' */

  /* Start of '<S10>/POSITIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S16>/OUT'
     */
    0
  }
  ,

  /* End of '<S10>/POSITIVE Edge' */

  /* Start of '<S10>/NEGATIVE Edge' */
  {
    /* Computed Parameter: OUT_Y0
     * Referenced by: '<S15>/OUT'
     */
    0
  }
  /* End of '<S10>/NEGATIVE Edge' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */