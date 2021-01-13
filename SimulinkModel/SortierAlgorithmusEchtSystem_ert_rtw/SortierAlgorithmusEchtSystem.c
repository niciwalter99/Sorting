/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusEchtSystem.c
 *
 * Code generated for Simulink model 'SortierAlgorithmusEchtSystem'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jan 12 19:02:16 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SortierAlgorithmusEchtSystem.h"
#include "SortierAlgorithmusEchtSystem_private.h"
#define SortierAlgor_IN_NO_ACTIVE_CHILD (0U)
#define SortierAlgorit_IN_setupVariable (7U)
#define SortierAlgorith_IN_DetectedCube (3U)
#define SortierAlgorith_IN_Linksdrehen1 (2U)
#define SortierAlgorith_IN_Rechtsdrehen (3U)
#define SortierAlgorith_IN_noCubeLoaded (6U)
#define SortierAlgorithm_IN_Linksdrehen (1U)
#define SortierAlgorithm_IN_closeKlappe (4U)
#define SortierAlgorithm_IN_waitForCube (10U)
#define SortierAlgorithmu_IN_cubeLoaded (5U)
#define SortierAlgorithmu_IN_firstEntry (5U)
#define SortierAlgorithmu_IN_openKlappe (9U)
#define SortierAlgorithmusE_IN_BlueCube (2U)
#define SortierAlgorithmusEc_IN_RedCube (4U)
#define SortierAlgorithmusEchtS_IN_wait (8U)
#define SortierAlgorithmusEcht_IN_Black (1U)
#define SortierAlgorithmus_IN_goToZero1 (6U)
#define SortierAlgorithmus_IN_goToZero2 (7U)
#define SortierAlgorithmus_IN_goToZero3 (8U)

/* Block signals (default storage) */
B_SortierAlgorithmusEchtSyste_T SortierAlgorithmusEchtSystem_B;

/* Block states (default storage) */
DW_SortierAlgorithmusEchtSyst_T SortierAlgorithmusEchtSystem_DW;

/* Real-time model */
RT_MODEL_SortierAlgorithmusEc_T SortierAlgorithmusEchtSystem_M_;
RT_MODEL_SortierAlgorithmusEc_T *const SortierAlgorithmusEchtSystem_M =
  &SortierAlgorithmusEchtSystem_M_;

/* Forward declaration for local functions */
static real_T SortierAlgorit_findPlaceForBlue(void);
static real_T SortierAlgorith_findPlaceForRed(void);
static void rate_monotonic_scheduler(void);
static uint16_T adcInitFlag = 0;

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void SortierAlgorithmusEchtSystem_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(SortierAlgorithmusEchtSystem_M, 1));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 0 shares data with slower tid rate: 1 */
  SortierAlgorithmusEchtSystem_M->Timing.RateInteraction.TID0_1 =
    (SortierAlgorithmusEchtSystem_M->Timing.TaskCounters.TID[1] == 0);

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (SortierAlgorithmusEchtSystem_M->Timing.TaskCounters.TID[1])++;
  if ((SortierAlgorithmusEchtSystem_M->Timing.TaskCounters.TID[1]) > 499) {/* Sample time: [0.01s, 0.0s] */
    SortierAlgorithmusEchtSystem_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * System initialize for enable system:
 *    '<S9>/NEGATIVE Edge'
 *    '<S10>/NEGATIVE Edge'
 */
void SortierAl_NEGATIVEEdge_Init(boolean_T *rty_OUT,
  P_NEGATIVEEdge_SortierAlgorit_T *localP)
{
  /* SystemInitialize for Outport: '<S14>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S9>/NEGATIVE Edge'
 *    '<S10>/NEGATIVE Edge'
 */
void SortierAlgorit_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, boolean_T *rty_OUT)
{
  /* Outputs for Enabled SubSystem: '<S9>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S14>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S14>/Relational Operator1' */
    *rty_OUT = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S9>/NEGATIVE Edge' */
}

/*
 * System initialize for enable system:
 *    '<S9>/POSITIVE Edge'
 *    '<S10>/POSITIVE Edge'
 */
void SortierAl_POSITIVEEdge_Init(boolean_T *rty_OUT,
  P_POSITIVEEdge_SortierAlgorit_T *localP)
{
  /* SystemInitialize for Outport: '<S15>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S9>/POSITIVE Edge'
 *    '<S10>/POSITIVE Edge'
 */
void SortierAlgorit_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, boolean_T *rty_OUT)
{
  /* Outputs for Enabled SubSystem: '<S9>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S15>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S15>/Relational Operator1' */
    *rty_OUT = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S9>/POSITIVE Edge' */
}

/*
 * Output and update for atomic system:
 *    '<S8>/MATLAB Function1'
 *    '<S8>/MATLAB Function3'
 */
void SortierAlgo_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt, real32_T
  *rty_y)
{
  *rty_y = rtu_yalt + (real32_T)rtu_u;
}

/* Function for Chart: '<Root>/Chart' */
static real_T SortierAlgorit_findPlaceForBlue(void)
{
  real_T magacinOut;
  if (SortierAlgorithmusEchtSystem_DW.m0 == 0.0) {
    magacinOut = 0.0;
    SortierAlgorithmusEchtSystem_DW.m0++;
  } else if ((SortierAlgorithmusEchtSystem_DW.m2 == 0L) ||
             ((SortierAlgorithmusEchtSystem_DW.m2_LC == 2.0) &&
              (SortierAlgorithmusEchtSystem_DW.m2 < 5L))) {
    magacinOut = 2.0;
    SortierAlgorithmusEchtSystem_DW.m2 = c28x_add_s32_s32_s32_sat
      (SortierAlgorithmusEchtSystem_DW.m2, 1L);
    SortierAlgorithmusEchtSystem_DW.m2_LC = 1.0;
  } else if ((SortierAlgorithmusEchtSystem_DW.m1_LC == 2.0) &&
             (SortierAlgorithmusEchtSystem_DW.m1 < 5L)) {
    magacinOut = 1.0;
    SortierAlgorithmusEchtSystem_DW.m0++;
  } else if (SortierAlgorithmusEchtSystem_DW.m3 < 5.0) {
    magacinOut = 3.0;
    SortierAlgorithmusEchtSystem_DW.m3++;
  } else if (SortierAlgorithmusEchtSystem_DW.m4 < 5.0) {
    magacinOut = 4.0;
    SortierAlgorithmusEchtSystem_DW.m4++;
  } else {
    magacinOut = 5.0;
    SortierAlgorithmusEchtSystem_DW.m5++;
  }

  return magacinOut;
}

/* Function for Chart: '<Root>/Chart' */
static real_T SortierAlgorith_findPlaceForRed(void)
{
  real_T magacinOut;
  if (((SortierAlgorithmusEchtSystem_DW.m1 == 0L) ||
       (SortierAlgorithmusEchtSystem_DW.m1_LC == 1.0)) &&
      (SortierAlgorithmusEchtSystem_DW.m1 < 5L)) {
    magacinOut = 1.0;
    SortierAlgorithmusEchtSystem_DW.m1 = c28x_add_s32_s32_s32_sat
      (SortierAlgorithmusEchtSystem_DW.m1, 1L);
    SortierAlgorithmusEchtSystem_DW.m1_LC = 2.0;
  } else if ((SortierAlgorithmusEchtSystem_DW.m2 == 0L) ||
             ((SortierAlgorithmusEchtSystem_DW.m2_LC == 1.0) &&
              (SortierAlgorithmusEchtSystem_DW.m2 < 5L))) {
    magacinOut = 2.0;
    SortierAlgorithmusEchtSystem_DW.m2 = c28x_add_s32_s32_s32_sat
      (SortierAlgorithmusEchtSystem_DW.m2, 1L);
    SortierAlgorithmusEchtSystem_DW.m2_LC = 2.0;
  } else if ((SortierAlgorithmusEchtSystem_DW.m0 < 5.0) &&
             (SortierAlgorithmusEchtSystem_DW.m1 > 0L)) {
    magacinOut = 0.0;
    SortierAlgorithmusEchtSystem_DW.m0++;
  } else {
    magacinOut = 3.0;
    SortierAlgorithmusEchtSystem_DW.m3++;
  }

  return magacinOut;
}

/* Model step function for TID0 */
void SortierAlgorithmusEchtSystem_step0(void) /* Sample time: [2.0E-5s, 0.0s] */
{
  boolean_T rtb_VergleichmitSchwellwert;
  boolean_T rtb_VergleichmitSchwellwert_j;
  real_T rtb_MultiportSwitch_c_idx_0;
  real_T rtb_MultiportSwitch_c_idx_1;
  real_T rtb_MultiportSwitch_idx_0;
  real_T rtb_MultiportSwitch_idx_1;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_1;

  {                                    /* Sample time: [2.0E-5s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Constant: '<S9>/either edge'
   *  Constant: '<S9>/neg. edge'
   *  Constant: '<S9>/pos. edge'
   */
  switch ((int16_T)SortierAlgorithmusEchtSystem_P.EdgeDetector1_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = SortierAlgorithmusEchtSystem_P.posedge_Value[0];
    rtb_MultiportSwitch_idx_1 = SortierAlgorithmusEchtSystem_P.posedge_Value[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = SortierAlgorithmusEchtSystem_P.negedge_Value[0];
    rtb_MultiportSwitch_idx_1 = SortierAlgorithmusEchtSystem_P.negedge_Value[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = SortierAlgorithmusEchtSystem_P.eitheredge_Value
      [0];
    rtb_MultiportSwitch_idx_1 = SortierAlgorithmusEchtSystem_P.eitheredge_Value
      [1];
    break;
  }

  /* End of MultiPortSwitch: '<S9>/Multiport Switch' */

  /* MultiPortSwitch: '<S10>/Multiport Switch' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Constant: '<S10>/either edge'
   *  Constant: '<S10>/neg. edge'
   *  Constant: '<S10>/pos. edge'
   */
  switch ((int16_T)SortierAlgorithmusEchtSystem_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_c_idx_0 =
      SortierAlgorithmusEchtSystem_P.posedge_Value_n[0];
    rtb_MultiportSwitch_c_idx_1 =
      SortierAlgorithmusEchtSystem_P.posedge_Value_n[1];
    break;

   case 2:
    rtb_MultiportSwitch_c_idx_0 =
      SortierAlgorithmusEchtSystem_P.negedge_Value_d[0];
    rtb_MultiportSwitch_c_idx_1 =
      SortierAlgorithmusEchtSystem_P.negedge_Value_d[1];
    break;

   default:
    rtb_MultiportSwitch_c_idx_0 =
      SortierAlgorithmusEchtSystem_P.eitheredge_Value_b[0];
    rtb_MultiportSwitch_c_idx_1 =
      SortierAlgorithmusEchtSystem_P.eitheredge_Value_b[1];
    break;
  }

  /* End of MultiPortSwitch: '<S10>/Multiport Switch' */

  /* S-Function (c280xadc): '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  {
    AdcRegs.ADCTRL2.bit.RST_SEQ1 = 1;  /* Reset SEQ1 module*/
    AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;/*clear INT sequencer*/
    AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;  /* Software Trigger*/
    while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {
    }                                  /*Wait for Sequencer INT bit to clear */

    asm(" RPT #11 || NOP");
    SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampletime =
      (AdcRegs.ADCRESULT0) >> 4;
    SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_l =
      (AdcRegs.ADCRESULT1) >> 4;
    SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_a =
      (AdcRegs.ADCRESULT2) >> 4;
    SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_o =
      (AdcRegs.ADCRESULT3) >> 4;
  }

  /* RelationalOperator: '<S8>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S8>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert =
    (SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_l <=
     SortierAlgorithmusEchtSystem_P.HeuristischermittelterSchwellwe);

  /* Outputs for Enabled SubSystem: '<S10>/POSITIVE Edge' */
  /* Memory: '<S10>/Memory' */
  SortierAlgorit_POSITIVEEdge(rtb_MultiportSwitch_c_idx_0,
    rtb_VergleichmitSchwellwert,
    SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput,
    &SortierAlgorithmusEchtSystem_B.RelationalOperator1);

  /* End of Outputs for SubSystem: '<S10>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S10>/NEGATIVE Edge' */
  SortierAlgorit_NEGATIVEEdge(rtb_MultiportSwitch_c_idx_1,
    rtb_VergleichmitSchwellwert,
    SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput,
    &SortierAlgorithmusEchtSystem_B.RelationalOperator1_f);

  /* End of Outputs for SubSystem: '<S10>/NEGATIVE Edge' */

  /* RelationalOperator: '<S8>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S8>/Constant'
   */
  rtb_VergleichmitSchwellwert_j = (SortierAlgorithmusEchtSystem_P.Constant_Value
    <= SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampletime);

  /* MATLAB Function: '<S8>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S8>/Unit Delay3'
   *  UnitDelay: '<S8>/Unit Delay4'
   *  UnitDelay: '<S8>/Unit Delay5'
   */
  rtb_MultiportSwitch_c_idx_0 = 1.0;
  tmp_0 = !SortierAlgorithmusEchtSystem_DW.UnitDelay3_DSTATE;
  tmp_1 = !SortierAlgorithmusEchtSystem_DW.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert_j) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_c_idx_0 =
      SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert_j) && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_c_idx_0 = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert_j && (!rtb_VergleichmitSchwellwert)) {
    rtb_MultiportSwitch_c_idx_0 = -1.0;
  }

  tmp_0 = (tmp_0 && SortierAlgorithmusEchtSystem_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_j) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_c_idx_0 = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert_j) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_c_idx_0 =
      SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_j && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_c_idx_0 = 1.0;
  }

  tmp_0 = (SortierAlgorithmusEchtSystem_DW.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_j) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_c_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_j && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_c_idx_0 =
      SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_j && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_c_idx_0 = -1.0;
  }

  tmp_0 = (SortierAlgorithmusEchtSystem_DW.UnitDelay3_DSTATE &&
           SortierAlgorithmusEchtSystem_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_j) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_c_idx_0 = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_j && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_c_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_j && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_c_idx_0 =
      SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE;
  }

  SortierAlgorithmusEchtSystem_B.RL = (rtb_MultiportSwitch_c_idx_0 == 1.0);
  SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE =
    rtb_MultiportSwitch_c_idx_0;

  /* End of MATLAB Function: '<S8>/MATLAB Function2' */

  /* MATLAB Function: '<S8>/MATLAB Function3' incorporates:
   *  Logic: '<S10>/Logical Operator1'
   *  Product: '<S8>/Product'
   *  UnitDelay: '<S8>/Unit Delay2'
   *  UnitDelay: '<S8>/Unit Delay5'
   */
  SortierAlgo_MATLABFunction1(SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE *
    (real_T)(SortierAlgorithmusEchtSystem_B.RelationalOperator1 ||
             SortierAlgorithmusEchtSystem_B.RelationalOperator1_f),
    SortierAlgorithmusEchtSystem_DW.UnitDelay2_DSTATE,
    &SortierAlgorithmusEchtSystem_DW.UnitDelay2_DSTATE);

  /* Outputs for Enabled SubSystem: '<S9>/POSITIVE Edge' */
  /* Memory: '<S9>/Memory' */
  SortierAlgorit_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_j,
    SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput_b,
    &SortierAlgorithmusEchtSystem_B.RelationalOperator1_b);

  /* End of Outputs for SubSystem: '<S9>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S9>/NEGATIVE Edge' */
  SortierAlgorit_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_j,
    SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput_b,
    &SortierAlgorithmusEchtSystem_B.RelationalOperator1_j);

  /* End of Outputs for SubSystem: '<S9>/NEGATIVE Edge' */

  /* MATLAB Function: '<S8>/MATLAB Function1' incorporates:
   *  Logic: '<S9>/Logical Operator1'
   *  Product: '<S8>/Product3'
   *  UnitDelay: '<S8>/Unit Delay1'
   *  UnitDelay: '<S8>/Unit Delay5'
   */
  SortierAlgo_MATLABFunction1((real_T)
    (SortierAlgorithmusEchtSystem_B.RelationalOperator1_b ||
     SortierAlgorithmusEchtSystem_B.RelationalOperator1_j) *
    SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE,
    SortierAlgorithmusEchtSystem_DW.UnitDelay1_DSTATE,
    &SortierAlgorithmusEchtSystem_DW.UnitDelay1_DSTATE);

  /* Product: '<S8>/Product1' incorporates:
   *  Constant: '<S8>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   *  UnitDelay: '<S8>/Unit Delay1'
   */
  rtb_MultiportSwitch_idx_0 =
    SortierAlgorithmusEchtSystem_P.WinkelFlankePolulo3416V022Pol_o *
    SortierAlgorithmusEchtSystem_DW.UnitDelay1_DSTATE;

  /* Sum: '<S8>/Sum' incorporates:
   *  Constant: '<S8>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S8>/Product2'
   *  UnitDelay: '<S8>/Unit Delay2'
   */
  rtb_MultiportSwitch_idx_0 += SortierAlgorithmusEchtSystem_DW.UnitDelay2_DSTATE
    * SortierAlgorithmusEchtSystem_P.WinkelFlankePolulo3416V022Polul;

  /* RateTransition: '<S4>/Rate Transition4' */
  if (SortierAlgorithmusEchtSystem_M->Timing.RateInteraction.TID0_1) {
    SortierAlgorithmusEchtSystem_B.RateTransition4 = rtb_MultiportSwitch_idx_0;
  }

  /* End of RateTransition: '<S4>/Rate Transition4' */

  /* Chart: '<Root>/Chart' */
  if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d < MAX_uint16_T) {
    SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d++;
  }

  if (SortierAlgorithmusEchtSystem_DW.is_active_c3_SortierAlgorithmus == 0U) {
    SortierAlgorithmusEchtSystem_DW.is_active_c3_SortierAlgorithmus = 1U;
    SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
      SortierAlgorit_IN_setupVariable;
    SortierAlgorithmusEchtSystem_DW.m0 = 0.0;
    SortierAlgorithmusEchtSystem_DW.m1 = 0L;
    SortierAlgorithmusEchtSystem_DW.m2 = 0L;
    SortierAlgorithmusEchtSystem_DW.m3 = 0.0;
    SortierAlgorithmusEchtSystem_DW.m4 = 0.0;
    SortierAlgorithmusEchtSystem_DW.m5 = 0.0;
    SortierAlgorithmusEchtSystem_DW.m1_LC = 0.0;
    SortierAlgorithmusEchtSystem_DW.m2_LC = 0.0;
  } else {
    switch (SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys) {
     case SortierAlgorithmusEcht_IN_Black:
      SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
        SortierAlgorith_IN_DetectedCube;
      SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d = 0U;
      break;

     case SortierAlgorithmusE_IN_BlueCube:
      SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
        SortierAlgorith_IN_DetectedCube;
      SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d = 0U;
      break;

     case SortierAlgorith_IN_DetectedCube:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d >= 50000U) {
        SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
          SortierAlgorithmu_IN_cubeLoaded;
        SortierAlgorithmusEchtSystem_B.blau = -1.0;
      }
      break;

     case SortierAlgorithmusEc_IN_RedCube:
      SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
        SortierAlgorith_IN_DetectedCube;
      SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d = 0U;
      break;

     case SortierAlgorithmu_IN_cubeLoaded:
      if ((SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_a <
           1000.0) &&
          (SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_o <
           400.0)) {
        SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
          SortierAlgorithmusEc_IN_RedCube;
        SortierAlgorith_findPlaceForRed();
        SortierAlgorithmusEchtSystem_B.blau = 0.0;
      } else if ((SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_a
                  > 2050.0) &&
                 (SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_o
                  < 400.0)) {
        SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
          SortierAlgorithmusEcht_IN_Black;
        SortierAlgorithmusEchtSystem_B.blau = 2.0;
      } else if ((SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_a
                  >= 1000.0) &&
                 (SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_a
                  <= 2050.0) &&
                 (SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_o
                  < 400.0)) {
        SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
          SortierAlgorithmusE_IN_BlueCube;
        SortierAlgorit_findPlaceForBlue();
        SortierAlgorithmusEchtSystem_B.blau = 1.0;
      } else if (SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_o >
                 400.0) {
        SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
          SortierAlgorithmusEchtS_IN_wait;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d = 0U;
      } else {
        SortierAlgorithmusEchtSystem_B.blau = -1.0;
      }
      break;

     case SortierAlgorith_IN_noCubeLoaded:
      SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
        SortierAlgorithmu_IN_cubeLoaded;
      SortierAlgorithmusEchtSystem_B.blau = -1.0;
      break;

     case SortierAlgorit_IN_setupVariable:
      SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
        SortierAlgorith_IN_noCubeLoaded;
      break;

     default:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d >= 15000U) {
        SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
          SortierAlgorithmu_IN_cubeLoaded;
        SortierAlgorithmusEchtSystem_B.blau = -1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Chart: '<Root>/Chart1' */
  if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 < 131071UL) {
    SortierAlgorithmusEchtSystem_DW.temporalCounter_i1++;
  }

  if (SortierAlgorithmusEchtSystem_DW.is_active_c1_SortierAlgorithmus == 0U) {
    SortierAlgorithmusEchtSystem_DW.is_active_c1_SortierAlgorithmus = 1U;
    SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
      SortierAlgorithmu_IN_firstEntry;
    SortierAlgorithmusEchtSystem_B.winkel = 100.0;
  } else {
    switch (SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys) {
     case SortierAlgorithm_IN_Linksdrehen:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 >= 70000UL) {
        SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
          SortierAlgorithmu_IN_openKlappe;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0UL;
        SortierAlgorithmusEchtSystem_B.klappenPWM = 50.0;
        SortierAlgorithmusEchtSystem_B.klappenD = 1.0;
      }
      break;

     case SortierAlgorith_IN_Linksdrehen1:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 >= 70000UL) {
        SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
          SortierAlgorithmu_IN_openKlappe;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0UL;
        SortierAlgorithmusEchtSystem_B.klappenPWM = 50.0;
        SortierAlgorithmusEchtSystem_B.klappenD = 1.0;
      }
      break;

     case SortierAlgorith_IN_Rechtsdrehen:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 >= 70000UL) {
        SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
          SortierAlgorithmu_IN_openKlappe;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0UL;
        SortierAlgorithmusEchtSystem_B.klappenPWM = 50.0;
        SortierAlgorithmusEchtSystem_B.klappenD = 1.0;
      }
      break;

     case SortierAlgorithm_IN_closeKlappe:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 >= 50000UL) {
        SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
          SortierAlgorithm_IN_waitForCube;
        SortierAlgorithmusEchtSystem_B.klappenPWM = 0.0;
      } else {
        SortierAlgorithmusEchtSystem_B.klappenD = 0.0;
      }
      break;

     case SortierAlgorithmu_IN_firstEntry:
      SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
        SortierAlgorithm_IN_waitForCube;
      SortierAlgorithmusEchtSystem_B.klappenPWM = 0.0;
      break;

     case SortierAlgorithmus_IN_goToZero1:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 >= 100000UL) {
        SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
          SortierAlgorith_IN_Rechtsdrehen;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0UL;
        SortierAlgorithmusEchtSystem_B.winkel = 220.0;
      } else {
        SortierAlgorithmusEchtSystem_B.winkel = 0.0;
      }
      break;

     case SortierAlgorithmus_IN_goToZero2:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 >= 100000UL) {
        SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
          SortierAlgorithm_IN_Linksdrehen;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0UL;
        SortierAlgorithmusEchtSystem_B.winkel = -445.0;
      } else {
        SortierAlgorithmusEchtSystem_B.winkel = 0.0;
      }
      break;

     case SortierAlgorithmus_IN_goToZero3:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 >= 100000UL) {
        SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
          SortierAlgorith_IN_Linksdrehen1;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0UL;
        SortierAlgorithmusEchtSystem_B.winkel = 430.0;
      } else {
        SortierAlgorithmusEchtSystem_B.winkel = 0.0;
      }
      break;

     case SortierAlgorithmu_IN_openKlappe:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 >= 55000UL) {
        SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
          SortierAlgorithm_IN_closeKlappe;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0UL;
        SortierAlgorithmusEchtSystem_B.klappenD = 0.0;
      } else {
        SortierAlgorithmusEchtSystem_B.klappenPWM = 50.0;
        SortierAlgorithmusEchtSystem_B.klappenD = 1.0;
      }
      break;

     default:
      if (SortierAlgorithmusEchtSystem_B.blau == 1.0) {
        SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
          SortierAlgorithmus_IN_goToZero1;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0UL;
        SortierAlgorithmusEchtSystem_B.winkel = 0.0;
      } else if (SortierAlgorithmusEchtSystem_B.blau == 0.0) {
        SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
          SortierAlgorithmus_IN_goToZero2;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0UL;
        SortierAlgorithmusEchtSystem_B.winkel = 0.0;
      } else if (SortierAlgorithmusEchtSystem_B.blau == 2.0) {
        SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
          SortierAlgorithmus_IN_goToZero3;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0UL;
        SortierAlgorithmusEchtSystem_B.winkel = 0.0;
      } else {
        SortierAlgorithmusEchtSystem_B.klappenPWM = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart1' */

  /* RateTransition: '<Root>/Rate Transition1' */
  if (SortierAlgorithmusEchtSystem_M->Timing.RateInteraction.TID0_1) {
    SortierAlgorithmusEchtSystem_B.RateTransition1 =
      SortierAlgorithmusEchtSystem_B.winkel;
  }

  /* End of RateTransition: '<Root>/Rate Transition1' */

  /* S-Function (c280xgpio_do): '<Root>/Drehrichtungsvorgabe für einen Motor1' */
  {
    if (SortierAlgorithmusEchtSystem_B.klappenD)
      GpioDataRegs.GPASET.bit.GPIO17 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO17 = 1;
  }

  /* S-Function (c280xpwm): '<Root>/PWM Vorgabe für einen Motor 1' */

  /*-- Update CMPB value for ePWM3 --*/
  {
    EPwm3Regs.CMPB = (uint16_T)((uint32_T)EPwm3Regs.TBPRD *
      SortierAlgorithmusEchtSystem_B.klappenPWM * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S4>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (SortierAlgorithmusEchtSystem_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Update for Memory: '<S10>/Memory' */
  SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput =
    rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S8>/Unit Delay3' */
  SortierAlgorithmusEchtSystem_DW.UnitDelay3_DSTATE =
    rtb_VergleichmitSchwellwert_j;

  /* Update for UnitDelay: '<S8>/Unit Delay4' */
  SortierAlgorithmusEchtSystem_DW.UnitDelay4_DSTATE =
    rtb_VergleichmitSchwellwert;

  /* Update for Memory: '<S9>/Memory' */
  SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput_b =
    rtb_VergleichmitSchwellwert_j;
}

/* Model step function for TID1 */
void SortierAlgorithmusEchtSystem_step1(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_y_f;
  real_T rtb_DeadZone;

  /* Sum: '<S5>/Sum' */
  rtb_DeadZone = SortierAlgorithmusEchtSystem_B.RateTransition1 -
    SortierAlgorithmusEchtSystem_B.RateTransition4;

  /* DeadZone: '<S5>/Dead Zone' */
  if (rtb_DeadZone > SortierAlgorithmusEchtSystem_P.DeadZone_End) {
    rtb_DeadZone -= SortierAlgorithmusEchtSystem_P.DeadZone_End;
  } else if (rtb_DeadZone >= SortierAlgorithmusEchtSystem_P.DeadZone_Start) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= SortierAlgorithmusEchtSystem_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S5>/Dead Zone' */

  /* Gain: '<S5>/Verstaerkung' */
  rtb_DeadZone *= SortierAlgorithmusEchtSystem_P.Verstaerkung_Gain;

  /* MATLAB Function: '<S5>/Richtung' */
  SortierAlgorithmusEchtSystem_B.y = (rtb_DeadZone > 0.0);

  /* S-Function (c280xgpio_do): '<S3>/Drehrichtungsvorgabe für einen Motor' */
  {
    if (SortierAlgorithmusEchtSystem_B.y)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* Abs: '<S5>/Abs' */
  rtb_y_f = fabs(rtb_DeadZone);

  /* MATLAB Function: '<S5>/Betrag' */
  if ((0.5 < rtb_y_f) && (rtb_y_f < 60.0)) {
    rtb_y_f = 60.0;
  } else if (rtb_y_f <= 0.5) {
    rtb_y_f = 0.0;
  } else {
    if (rtb_y_f >= 100.0) {
      rtb_y_f = 100.0;
    }
  }

  /* End of MATLAB Function: '<S5>/Betrag' */

  /* S-Function (c280xpwm): '<S3>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD * rtb_y_f * 0.01);
  }
}

/* Model initialize function */
void SortierAlgorithmusEchtSystem_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)SortierAlgorithmusEchtSystem_M, 0,
                sizeof(RT_MODEL_SortierAlgorithmusEc_T));

  /* block I/O */
  (void) memset(((void *) &SortierAlgorithmusEchtSystem_B), 0,
                sizeof(B_SortierAlgorithmusEchtSyste_T));

  /* states (dwork) */
  (void) memset((void *)&SortierAlgorithmusEchtSystem_DW, 0,
                sizeof(DW_SortierAlgorithmusEchtSyst_T));

  /* Machine initializer */
  SortierAlgorithmusEchtSystem_DW.magacin = 0.0;

  /* Start for S-Function (c280xadc): '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  if (adcInitFlag == 0) {
    InitAdc();
    adcInitFlag = 1;
  }

  config_ADC_A (3U, 4146U, 0U, 0U, 0U);

  /* Start for S-Function (c280xgpio_do): '<Root>/Drehrichtungsvorgabe für einen Motor1' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFFF3;
  GpioCtrlRegs.GPADIR.all |= 0x20000;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<S3>/Drehrichtungsvorgabe für einen Motor' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0xFFFFF3FF;
  GpioCtrlRegs.GPADIR.all |= 0x200000;
  EDIS;

  /* Start for S-Function (c280xpwm): '<S3>/PWM Vorgabe für einen Motor ' */

  /*** Initialize ePWM2 modules ***/
  {
    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm2Regs.TBPRD = 64000;

    /* // Time-Base Control Register
       EPwm2Regs.TBCTL.bit.CTRMODE    = 0;          // Counter Mode
       EPwm2Regs.TBCTL.bit.SYNCOSEL   = 3;          // Sync output select
       EPwm2Regs.TBCTL.bit.PRDLD      = 0;          // Shadow select
       EPwm2Regs.TBCTL.bit.PHSEN      = 0;          // Phase load enable
       EPwm2Regs.TBCTL.bit.PHSDIR     = 0;          // Phase Direction
       EPwm2Regs.TBCTL.bit.HSPCLKDIV  = 0;          // High speed time pre-scale
       EPwm2Regs.TBCTL.bit.CLKDIV     = 0;          // Timebase clock pre-scale
     */
    EPwm2Regs.TBCTL.all = (EPwm2Regs.TBCTL.all & ~0x3FBF) | 0x30;

    /* // Time-Base Phase Register
       EPwm2Regs.TBPHS.half.TBPHS     = 0;          // Phase offset register
     */
    EPwm2Regs.TBPHS.all = (EPwm2Regs.TBPHS.all & ~0xFFFF0000) | 0x0;
    EPwm2Regs.TBCTR = 0x0000;          /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /* // Counter-Compare Control Register
       EPwm2Regs.CMPCTL.bit.SHDWAMODE = 0;  // Compare A block operating mode.
       EPwm2Regs.CMPCTL.bit.SHDWBMODE = 0;  // Compare B block operating mode.
       EPwm2Regs.CMPCTL.bit.LOADAMODE = 0;          // Active compare A
       EPwm2Regs.CMPCTL.bit.LOADBMODE = 0;          // Active compare A
     */
    EPwm2Regs.CMPCTL.all = (EPwm2Regs.CMPCTL.all & ~0x5F) | 0x0;
    EPwm2Regs.CMPA.half.CMPA = 32000;
    EPwm2Regs.CMPB = 0;

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm2Regs.AQCTLA.all = 36;
    EPwm2Regs.AQCTLB.all = 264;

    /* // Action-Qualifier Software Force Register
       EPwm2Regs.AQSFRC.bit.RLDCSF    = 0;          // Reload from Shadow options
     */
    EPwm2Regs.AQSFRC.all = (EPwm2Regs.AQSFRC.all & ~0xC0) | 0x0;

    /* // Action-Qualifier Continuous S/W Force Register Set
       EPwm2Regs.AQCSFRC.bit.CSFA     = 0;          // Continuous Software Force on output A
       EPwm2Regs.AQCSFRC.bit.CSFB     = 0;          // Continuous Software Force on output B
     */
    EPwm2Regs.AQCSFRC.all = (EPwm2Regs.AQCSFRC.all & ~0xF) | 0x0;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /* // Dead-Band Generator Control Register
       EPwm2Regs.DBCTL.bit.OUT_MODE   = 0;          // Dead Band Output Mode Control
       EPwm2Regs.DBCTL.bit.IN_MODE    = 0;          // Dead Band Input Select Mode Control
       EPwm2Regs.DBCTL.bit.POLSEL     = 0;          // Polarity Select Control
     */
    EPwm2Regs.DBCTL.all = (EPwm2Regs.DBCTL.all & ~0x3F) | 0x0;
    EPwm2Regs.DBRED = 0;
    EPwm2Regs.DBFED = 0;

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /* // Event-Trigger Selection and Event-Trigger Pre-Scale Register
       EPwm2Regs.ETSEL.bit.SOCAEN     = 0;          // Start of conversion A Enable
       EPwm2Regs.ETSEL.bit.SOCASEL    = 1;          // Start of conversion A Select
       EPwm2Regs.ETPS.bit.SOCAPRD     = 1;          // EPWM2SOCA Period Select
       EPwm2Regs.ETSEL.bit.SOCBEN     = 0;          // Start of conversion B Enable
       EPwm2Regs.ETSEL.bit.SOCBSEL    = 1;          // Start of conversion B Select
       EPwm2Regs.ETPS.bit.SOCBPRD     = 1;          // EPWM2SOCB Period Select
       EPwm2Regs.ETSEL.bit.INTEN      = 0;          // EPWM2INTn Enable
       EPwm2Regs.ETSEL.bit.INTSEL     = 1;          // EPWM2INTn Select
       EPwm2Regs.ETPS.bit.INTPRD      = 1;          // EPWM2INTn Period Select
     */
    EPwm2Regs.ETSEL.all = (EPwm2Regs.ETSEL.all & ~0xFF0F) | 0x1101;
    EPwm2Regs.ETPS.all = (EPwm2Regs.ETPS.all & ~0x3303) | 0x1101;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /* // PWM-Chopper Control Register
       EPwm2Regs.PCCTL.bit.CHPEN      = 0;          // PWM chopping enable
       EPwm2Regs.PCCTL.bit.CHPFREQ    = 0;          // Chopping clock frequency
       EPwm2Regs.PCCTL.bit.OSHTWTH    = 0;          // One-shot pulse width
       EPwm2Regs.PCCTL.bit.CHPDUTY    = 0;          // Chopping clock Duty cycle
     */
    EPwm2Regs.PCCTL.all = (EPwm2Regs.PCCTL.all & ~0x7FF) | 0x0;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm2Regs.TZSEL.all = 0;

    /* // Trip-Zone Control Register
       EPwm2Regs.TZCTL.bit.TZA        = 3;          // TZ1 to TZ6 Trip Action On EPWM2A
       EPwm2Regs.TZCTL.bit.TZB        = 3;          // TZ1 to TZ6 Trip Action On EPWM2B
     */
    EPwm2Regs.TZCTL.all = (EPwm2Regs.TZCTL.all & ~0xF) | 0xF;

    /* // Trip-Zone Enable Interrupt Register
       EPwm2Regs.TZEINT.bit.OST       = 0;          // Trip Zones One Shot Int Enable
       EPwm2Regs.TZEINT.bit.CBC       = 0;          // Trip Zones Cycle By Cycle Int Enable
     */
    EPwm2Regs.TZEINT.all = (EPwm2Regs.TZEINT.all & ~0x6) | 0x0;
    EDIS;
  }

  /* Start for S-Function (c280xpwm): '<Root>/PWM Vorgabe für einen Motor 1' */

  /*** Initialize ePWM3 modules ***/
  {
    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm3Regs.TBPRD = 64000;

    /* // Time-Base Control Register
       EPwm3Regs.TBCTL.bit.CTRMODE    = 0;          // Counter Mode
       EPwm3Regs.TBCTL.bit.SYNCOSEL   = 3;          // Sync output select
       EPwm3Regs.TBCTL.bit.PRDLD      = 0;          // Shadow select
       EPwm3Regs.TBCTL.bit.PHSEN      = 0;          // Phase load enable
       EPwm3Regs.TBCTL.bit.PHSDIR     = 0;          // Phase Direction
       EPwm3Regs.TBCTL.bit.HSPCLKDIV  = 0;          // High speed time pre-scale
       EPwm3Regs.TBCTL.bit.CLKDIV     = 0;          // Timebase clock pre-scale
     */
    EPwm3Regs.TBCTL.all = (EPwm3Regs.TBCTL.all & ~0x3FBF) | 0x30;

    /* // Time-Base Phase Register
       EPwm3Regs.TBPHS.half.TBPHS     = 0;          // Phase offset register
     */
    EPwm3Regs.TBPHS.all = (EPwm3Regs.TBPHS.all & ~0xFFFF0000) | 0x0;
    EPwm3Regs.TBCTR = 0x0000;          /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /* // Counter-Compare Control Register
       EPwm3Regs.CMPCTL.bit.SHDWAMODE = 0;  // Compare A block operating mode.
       EPwm3Regs.CMPCTL.bit.SHDWBMODE = 0;  // Compare B block operating mode.
       EPwm3Regs.CMPCTL.bit.LOADAMODE = 0;          // Active compare A
       EPwm3Regs.CMPCTL.bit.LOADBMODE = 0;          // Active compare A
     */
    EPwm3Regs.CMPCTL.all = (EPwm3Regs.CMPCTL.all & ~0x5F) | 0x0;
    EPwm3Regs.CMPA.half.CMPA = 32000;
    EPwm3Regs.CMPB = 0;

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm3Regs.AQCTLA.all = 36;
    EPwm3Regs.AQCTLB.all = 264;

    /* // Action-Qualifier Software Force Register
       EPwm3Regs.AQSFRC.bit.RLDCSF    = 0;          // Reload from Shadow options
     */
    EPwm3Regs.AQSFRC.all = (EPwm3Regs.AQSFRC.all & ~0xC0) | 0x0;

    /* // Action-Qualifier Continuous S/W Force Register Set
       EPwm3Regs.AQCSFRC.bit.CSFA     = 0;          // Continuous Software Force on output A
       EPwm3Regs.AQCSFRC.bit.CSFB     = 0;          // Continuous Software Force on output B
     */
    EPwm3Regs.AQCSFRC.all = (EPwm3Regs.AQCSFRC.all & ~0xF) | 0x0;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /* // Dead-Band Generator Control Register
       EPwm3Regs.DBCTL.bit.OUT_MODE   = 0;          // Dead Band Output Mode Control
       EPwm3Regs.DBCTL.bit.IN_MODE    = 0;          // Dead Band Input Select Mode Control
       EPwm3Regs.DBCTL.bit.POLSEL     = 0;          // Polarity Select Control
     */
    EPwm3Regs.DBCTL.all = (EPwm3Regs.DBCTL.all & ~0x3F) | 0x0;
    EPwm3Regs.DBRED = 0;
    EPwm3Regs.DBFED = 0;

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /* // Event-Trigger Selection and Event-Trigger Pre-Scale Register
       EPwm3Regs.ETSEL.bit.SOCAEN     = 0;          // Start of conversion A Enable
       EPwm3Regs.ETSEL.bit.SOCASEL    = 1;          // Start of conversion A Select
       EPwm3Regs.ETPS.bit.SOCAPRD     = 1;          // EPWM3SOCA Period Select
       EPwm3Regs.ETSEL.bit.SOCBEN     = 0;          // Start of conversion B Enable
       EPwm3Regs.ETSEL.bit.SOCBSEL    = 1;          // Start of conversion B Select
       EPwm3Regs.ETPS.bit.SOCBPRD     = 1;          // EPWM3SOCB Period Select
       EPwm3Regs.ETSEL.bit.INTEN      = 0;          // EPWM3INTn Enable
       EPwm3Regs.ETSEL.bit.INTSEL     = 1;          // EPWM3INTn Select
       EPwm3Regs.ETPS.bit.INTPRD      = 1;          // EPWM3INTn Period Select
     */
    EPwm3Regs.ETSEL.all = (EPwm3Regs.ETSEL.all & ~0xFF0F) | 0x1101;
    EPwm3Regs.ETPS.all = (EPwm3Regs.ETPS.all & ~0x3303) | 0x1101;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /* // PWM-Chopper Control Register
       EPwm3Regs.PCCTL.bit.CHPEN      = 0;          // PWM chopping enable
       EPwm3Regs.PCCTL.bit.CHPFREQ    = 0;          // Chopping clock frequency
       EPwm3Regs.PCCTL.bit.OSHTWTH    = 0;          // One-shot pulse width
       EPwm3Regs.PCCTL.bit.CHPDUTY    = 0;          // Chopping clock Duty cycle
     */
    EPwm3Regs.PCCTL.all = (EPwm3Regs.PCCTL.all & ~0x7FF) | 0x0;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm3Regs.TZSEL.all = 0;

    /* // Trip-Zone Control Register
       EPwm3Regs.TZCTL.bit.TZA        = 3;          // TZ1 to TZ6 Trip Action On EPWM3A
       EPwm3Regs.TZCTL.bit.TZB        = 3;          // TZ1 to TZ6 Trip Action On EPWM3B
     */
    EPwm3Regs.TZCTL.all = (EPwm3Regs.TZCTL.all & ~0xF) | 0xF;

    /* // Trip-Zone Enable Interrupt Register
       EPwm3Regs.TZEINT.bit.OST       = 0;          // Trip Zones One Shot Int Enable
       EPwm3Regs.TZEINT.bit.CBC       = 0;          // Trip Zones Cycle By Cycle Int Enable
     */
    EPwm3Regs.TZEINT.all = (EPwm3Regs.TZEINT.all & ~0x6) | 0x0;
    EDIS;
  }

  /* Start for S-Function (c280xgpio_do): '<S4>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  EALLOW;
  GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPBDIR.all |= 0x4;
  EDIS;

  /* InitializeConditions for Memory: '<S10>/Memory' */
  SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput =
    SortierAlgorithmusEchtSystem_P.EdgeDetector2_ic;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay3' */
  SortierAlgorithmusEchtSystem_DW.UnitDelay3_DSTATE =
    SortierAlgorithmusEchtSystem_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay4' */
  SortierAlgorithmusEchtSystem_DW.UnitDelay4_DSTATE =
    SortierAlgorithmusEchtSystem_P.UnitDelay4_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay5' */
  SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE =
    SortierAlgorithmusEchtSystem_P.UnitDelay5_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay2' */
  SortierAlgorithmusEchtSystem_DW.UnitDelay2_DSTATE =
    SortierAlgorithmusEchtSystem_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for Memory: '<S9>/Memory' */
  SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput_b =
    SortierAlgorithmusEchtSystem_P.EdgeDetector1_ic;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay1' */
  SortierAlgorithmusEchtSystem_DW.UnitDelay1_DSTATE =
    SortierAlgorithmusEchtSystem_P.UnitDelay1_InitialCondition;

  /* SystemInitialize for Enabled SubSystem: '<S10>/POSITIVE Edge' */
  SortierAl_POSITIVEEdge_Init
    (&SortierAlgorithmusEchtSystem_B.RelationalOperator1,
     &SortierAlgorithmusEchtSystem_P.POSITIVEEdge_n);

  /* End of SystemInitialize for SubSystem: '<S10>/POSITIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S10>/NEGATIVE Edge' */
  SortierAl_NEGATIVEEdge_Init
    (&SortierAlgorithmusEchtSystem_B.RelationalOperator1_f,
     &SortierAlgorithmusEchtSystem_P.NEGATIVEEdge_o);

  /* End of SystemInitialize for SubSystem: '<S10>/NEGATIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S9>/POSITIVE Edge' */
  SortierAl_POSITIVEEdge_Init
    (&SortierAlgorithmusEchtSystem_B.RelationalOperator1_b,
     &SortierAlgorithmusEchtSystem_P.POSITIVEEdge);

  /* End of SystemInitialize for SubSystem: '<S9>/POSITIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S9>/NEGATIVE Edge' */
  SortierAl_NEGATIVEEdge_Init
    (&SortierAlgorithmusEchtSystem_B.RelationalOperator1_j,
     &SortierAlgorithmusEchtSystem_P.NEGATIVEEdge);

  /* End of SystemInitialize for SubSystem: '<S9>/NEGATIVE Edge' */

  /* SystemInitialize for Chart: '<Root>/Chart' */
  SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d = 0U;
  SortierAlgorithmusEchtSystem_DW.is_active_c3_SortierAlgorithmus = 0U;
  SortierAlgorithmusEchtSystem_DW.is_c3_SortierAlgorithmusEchtSys =
    SortierAlgor_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/Chart1' */
  SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0UL;
  SortierAlgorithmusEchtSystem_DW.is_active_c1_SortierAlgorithmus = 0U;
  SortierAlgorithmusEchtSystem_DW.is_c1_SortierAlgorithmusEchtSys =
    SortierAlgor_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void SortierAlgorithmusEchtSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
