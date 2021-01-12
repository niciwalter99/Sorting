/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PoluluSortierenWinkel2.c
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
#define PoluluSortie_IN_NO_ACTIVE_CHILD (0U)
#define PoluluSortier_IN_waitForNewCube (6U)
#define PoluluSortierenW_IN_Linksdrehen (1U)
#define PoluluSortierenWi_IN_Stopbeginn (4U)
#define PoluluSortierenWin_IN_Startwert (3U)
#define PoluluSortierenWink_IN_Stopende (5U)
#define PoluluSortierenWinkel2_IN_a    (1U)
#define PoluluSortierenWinkel2_IN_b    (2U)
#define PoluluSortierenWinkel2_IN_c    (3U)
#define PoluluSortierenWinkel2_IN_d    (4U)
#define PoluluSortierenWinkel2_IN_d1   (5U)
#define PoluluSortierenWinkel2_IN_d2   (6U)
#define PoluluSortierenWinkel2_IN_d3   (7U)
#define PoluluSortierenWinkel2_IN_d4   (8U)
#define PoluluSortierenWinkel2_IN_d5   (9U)
#define PoluluSortierenWinkel2_IN_d6   (10U)
#define PoluluSortierenWinkel2_IN_d7   (11U)
#define PoluluSortierenWinkel2_IN_d8   (12U)
#define PoluluSortierenWinkel2_IN_d9   (13U)
#define PoluluSortieren_IN_Rechtsdrehen (2U)

/* Block signals (default storage) */
B_PoluluSortierenWinkel2_T PoluluSortierenWinkel2_B;

/* Block states (default storage) */
DW_PoluluSortierenWinkel2_T PoluluSortierenWinkel2_DW;

/* Real-time model */
RT_MODEL_PoluluSortierenWinke_T PoluluSortierenWinkel2_M_;
RT_MODEL_PoluluSortierenWinke_T *const PoluluSortierenWinkel2_M =
  &PoluluSortierenWinkel2_M_;
static void rate_monotonic_scheduler(void);
static uint16_T adcInitFlag = 0;

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void PoluluSortierenWinkel2_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[2] = ((boolean_T)rtmStepTask(PoluluSortierenWinkel2_M, 2));
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

  /* tid 1 shares data with slower tid rate: 2 */
  if (PoluluSortierenWinkel2_M->Timing.TaskCounters.TID[1] == 0) {
    PoluluSortierenWinkel2_M->Timing.RateInteraction.TID1_2 =
      (PoluluSortierenWinkel2_M->Timing.TaskCounters.TID[2] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (PoluluSortierenWinkel2_M->Timing.TaskCounters.TID[2])++;
  if ((PoluluSortierenWinkel2_M->Timing.TaskCounters.TID[2]) > 499) {/* Sample time: [0.01s, 0.0s] */
    PoluluSortierenWinkel2_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/*
 * System initialize for enable system:
 *    '<S6>/NEGATIVE Edge'
 *    '<S7>/NEGATIVE Edge'
 */
void PoluluSor_NEGATIVEEdge_Init(boolean_T *rty_OUT,
  P_NEGATIVEEdge_PoluluSortiere_T *localP)
{
  /* SystemInitialize for Outport: '<S11>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S6>/NEGATIVE Edge'
 *    '<S7>/NEGATIVE Edge'
 */
void PoluluSortiere_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, boolean_T *rty_OUT)
{
  /* Outputs for Enabled SubSystem: '<S6>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S11>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S11>/Relational Operator1' */
    *rty_OUT = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S6>/NEGATIVE Edge' */
}

/*
 * System initialize for enable system:
 *    '<S6>/POSITIVE Edge'
 *    '<S7>/POSITIVE Edge'
 */
void PoluluSor_POSITIVEEdge_Init(boolean_T *rty_OUT,
  P_POSITIVEEdge_PoluluSortiere_T *localP)
{
  /* SystemInitialize for Outport: '<S12>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S6>/POSITIVE Edge'
 *    '<S7>/POSITIVE Edge'
 */
void PoluluSortiere_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, boolean_T *rty_OUT)
{
  /* Outputs for Enabled SubSystem: '<S6>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S12>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S12>/Relational Operator1' */
    *rty_OUT = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S6>/POSITIVE Edge' */
}

/*
 * Output and update for atomic system:
 *    '<S3>/MATLAB Function1'
 *    '<S3>/MATLAB Function3'
 */
void PoluluSorti_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt, real32_T
  *rty_y)
{
  *rty_y = rtu_yalt + (real32_T)rtu_u;
}

/* Model step function for TID0 */
void PoluluSortierenWinkel2_step0(void) /* Sample time: [0.0s, 0.0s] */
{
  /* local block i/o variables */
  boolean_T rtb_VergleichmitSchwellwert;
  boolean_T rtb_VergleichmitSchwellwert_k;
  real_T rtb_MultiportSwitch_a_idx_1;
  real_T rtb_MultiportSwitch_a_idx_0;
  real_T rtb_MultiportSwitch_idx_1;
  real_T rtb_MultiportSwitch_idx_0;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_1;

  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/either edge'
   *  Constant: '<S6>/neg. edge'
   *  Constant: '<S6>/pos. edge'
   */
  switch ((int16_T)PoluluSortierenWinkel2_P.EdgeDetector1_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = PoluluSortierenWinkel2_P.posedge_Value[0];
    rtb_MultiportSwitch_idx_1 = PoluluSortierenWinkel2_P.posedge_Value[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = PoluluSortierenWinkel2_P.negedge_Value[0];
    rtb_MultiportSwitch_idx_1 = PoluluSortierenWinkel2_P.negedge_Value[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = PoluluSortierenWinkel2_P.eitheredge_Value[0];
    rtb_MultiportSwitch_idx_1 = PoluluSortierenWinkel2_P.eitheredge_Value[1];
    break;
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch' */

  /* MultiPortSwitch: '<S7>/Multiport Switch' incorporates:
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/either edge'
   *  Constant: '<S7>/neg. edge'
   *  Constant: '<S7>/pos. edge'
   */
  switch ((int16_T)PoluluSortierenWinkel2_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_a_idx_0 = PoluluSortierenWinkel2_P.posedge_Value_m[0];
    rtb_MultiportSwitch_a_idx_1 = PoluluSortierenWinkel2_P.posedge_Value_m[1];
    break;

   case 2:
    rtb_MultiportSwitch_a_idx_0 = PoluluSortierenWinkel2_P.negedge_Value_i[0];
    rtb_MultiportSwitch_a_idx_1 = PoluluSortierenWinkel2_P.negedge_Value_i[1];
    break;

   default:
    rtb_MultiportSwitch_a_idx_0 = PoluluSortierenWinkel2_P.eitheredge_Value_n[0];
    rtb_MultiportSwitch_a_idx_1 = PoluluSortierenWinkel2_P.eitheredge_Value_n[1];
    break;
  }

  /* End of MultiPortSwitch: '<S7>/Multiport Switch' */

  /* S-Function (c280xadc): '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  {
    AdcRegs.ADCTRL2.bit.RST_SEQ1 = 1;  /* Reset SEQ1 module*/
    AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;/*clear INT sequencer*/
    AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;  /* Software Trigger*/
    while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {
    }                                  /*Wait for Sequencer INT bit to clear */

    asm(" RPT #11 || NOP");
    PoluluSortierenWinkel2_B.AnalogDigitalWandlungSampletime =
      (AdcRegs.ADCRESULT0) >> 4;
    PoluluSortierenWinkel2_B.AnalogDigitalWandlungSampleti_k =
      (AdcRegs.ADCRESULT1) >> 4;
  }

  /* RelationalOperator: '<S3>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S3>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert =
    (PoluluSortierenWinkel2_B.AnalogDigitalWandlungSampleti_k <=
     PoluluSortierenWinkel2_P.HeuristischermittelterSchwellwe);

  /* Outputs for Enabled SubSystem: '<S7>/POSITIVE Edge' */
  /* Memory: '<S7>/Memory' */
  PoluluSortiere_POSITIVEEdge(rtb_MultiportSwitch_a_idx_0,
    rtb_VergleichmitSchwellwert, PoluluSortierenWinkel2_DW.Memory_PreviousInput,
    &PoluluSortierenWinkel2_B.RelationalOperator1);

  /* End of Outputs for SubSystem: '<S7>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S7>/NEGATIVE Edge' */
  PoluluSortiere_NEGATIVEEdge(rtb_MultiportSwitch_a_idx_1,
    rtb_VergleichmitSchwellwert, PoluluSortierenWinkel2_DW.Memory_PreviousInput,
    &PoluluSortierenWinkel2_B.RelationalOperator1_h);

  /* End of Outputs for SubSystem: '<S7>/NEGATIVE Edge' */

  /* RelationalOperator: '<S3>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S3>/Constant'
   */
  rtb_VergleichmitSchwellwert_k = (PoluluSortierenWinkel2_P.Constant_Value <=
    PoluluSortierenWinkel2_B.AnalogDigitalWandlungSampletime);

  /* MATLAB Function: '<S3>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S3>/Unit Delay3'
   *  UnitDelay: '<S3>/Unit Delay4'
   *  UnitDelay: '<S3>/Unit Delay5'
   */
  rtb_MultiportSwitch_a_idx_0 = 1.0;
  tmp_0 = !PoluluSortierenWinkel2_DW.UnitDelay3_DSTATE;
  tmp_1 = !PoluluSortierenWinkel2_DW.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert_k) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_a_idx_0 = PoluluSortierenWinkel2_DW.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert_k) && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_a_idx_0 = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert_k && (!rtb_VergleichmitSchwellwert)) {
    rtb_MultiportSwitch_a_idx_0 = -1.0;
  }

  tmp_0 = (tmp_0 && PoluluSortierenWinkel2_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_k) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_a_idx_0 = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert_k) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_a_idx_0 = PoluluSortierenWinkel2_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_k && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_a_idx_0 = 1.0;
  }

  tmp_0 = (PoluluSortierenWinkel2_DW.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_k) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_a_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_k && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_a_idx_0 = PoluluSortierenWinkel2_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_k && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_a_idx_0 = -1.0;
  }

  tmp_0 = (PoluluSortierenWinkel2_DW.UnitDelay3_DSTATE &&
           PoluluSortierenWinkel2_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_k) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_a_idx_0 = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_k && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_a_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_k && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_a_idx_0 = PoluluSortierenWinkel2_DW.UnitDelay5_DSTATE;
  }

  PoluluSortierenWinkel2_B.RL = (rtb_MultiportSwitch_a_idx_0 == 1.0);
  PoluluSortierenWinkel2_DW.UnitDelay5_DSTATE = rtb_MultiportSwitch_a_idx_0;

  /* End of MATLAB Function: '<S3>/MATLAB Function2' */

  /* MATLAB Function: '<S3>/MATLAB Function3' incorporates:
   *  Logic: '<S7>/Logical Operator1'
   *  Product: '<S3>/Product'
   *  UnitDelay: '<S3>/Unit Delay2'
   *  UnitDelay: '<S3>/Unit Delay5'
   */
  PoluluSorti_MATLABFunction1(PoluluSortierenWinkel2_DW.UnitDelay5_DSTATE *
    (real_T)(PoluluSortierenWinkel2_B.RelationalOperator1 ||
             PoluluSortierenWinkel2_B.RelationalOperator1_h),
    PoluluSortierenWinkel2_DW.UnitDelay2_DSTATE,
    &PoluluSortierenWinkel2_DW.UnitDelay2_DSTATE);

  /* Outputs for Enabled SubSystem: '<S6>/POSITIVE Edge' */
  /* Memory: '<S6>/Memory' */
  PoluluSortiere_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_k,
    PoluluSortierenWinkel2_DW.Memory_PreviousInput_a,
    &PoluluSortierenWinkel2_B.RelationalOperator1_m);

  /* End of Outputs for SubSystem: '<S6>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S6>/NEGATIVE Edge' */
  PoluluSortiere_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_k,
    PoluluSortierenWinkel2_DW.Memory_PreviousInput_a,
    &PoluluSortierenWinkel2_B.RelationalOperator1_l);

  /* End of Outputs for SubSystem: '<S6>/NEGATIVE Edge' */

  /* MATLAB Function: '<S3>/MATLAB Function1' incorporates:
   *  Logic: '<S6>/Logical Operator1'
   *  Product: '<S3>/Product3'
   *  UnitDelay: '<S3>/Unit Delay1'
   *  UnitDelay: '<S3>/Unit Delay5'
   */
  PoluluSorti_MATLABFunction1((real_T)
    (PoluluSortierenWinkel2_B.RelationalOperator1_m ||
     PoluluSortierenWinkel2_B.RelationalOperator1_l) *
    PoluluSortierenWinkel2_DW.UnitDelay5_DSTATE,
    PoluluSortierenWinkel2_DW.UnitDelay1_DSTATE,
    &PoluluSortierenWinkel2_DW.UnitDelay1_DSTATE);

  /* Product: '<S3>/Product1' incorporates:
   *  Constant: '<S3>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   *  UnitDelay: '<S3>/Unit Delay1'
   */
  rtb_MultiportSwitch_idx_0 =
    PoluluSortierenWinkel2_P.WinkelFlankePolulo3416V022Pol_a *
    PoluluSortierenWinkel2_DW.UnitDelay1_DSTATE;

  /* Sum: '<S3>/Sum' incorporates:
   *  Constant: '<S3>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S3>/Product2'
   *  UnitDelay: '<S3>/Unit Delay2'
   */
  rtb_MultiportSwitch_idx_0 += PoluluSortierenWinkel2_DW.UnitDelay2_DSTATE *
    PoluluSortierenWinkel2_P.WinkelFlankePolulo3416V022Polul;

  /* RateTransition: '<Root>/Rate Transition4' */
  if (PoluluSortierenWinkel2_M->Timing.RateInteraction.TID1_2) {
    PoluluSortierenWinkel2_B.RateTransition4 = rtb_MultiportSwitch_idx_0;
  }

  /* End of RateTransition: '<Root>/Rate Transition4' */

  /* S-Function (c280xgpio_do): '<Root>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (PoluluSortierenWinkel2_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Chart: '<Root>/Chart' */
  if (PoluluSortierenWinkel2_DW.temporalCounter_i1 < 262143UL) {
    PoluluSortierenWinkel2_DW.temporalCounter_i1++;
  }

  if (PoluluSortierenWinkel2_DW.is_active_c3_PoluluSortierenWin == 0U) {
    PoluluSortierenWinkel2_DW.is_active_c3_PoluluSortierenWin = 1U;
    PoluluSortierenWinkel2_DW.is_c3_PoluluSortierenWinkel2 =
      PoluluSortierenWin_IN_Startwert;
  } else {
    switch (PoluluSortierenWinkel2_DW.is_c3_PoluluSortierenWinkel2) {
     case PoluluSortierenW_IN_Linksdrehen:
      PoluluSortierenWinkel2_DW.is_c3_PoluluSortierenWinkel2 =
        PoluluSortier_IN_waitForNewCube;
      PoluluSortierenWinkel2_DW.temporalCounter_i1 = 0UL;
      break;

     case PoluluSortieren_IN_Rechtsdrehen:
      PoluluSortierenWinkel2_DW.is_c3_PoluluSortierenWinkel2 =
        PoluluSortier_IN_waitForNewCube;
      PoluluSortierenWinkel2_DW.temporalCounter_i1 = 0UL;
      break;

     case PoluluSortierenWin_IN_Startwert:
      PoluluSortierenWinkel2_DW.is_c3_PoluluSortierenWinkel2 =
        PoluluSortierenWi_IN_Stopbeginn;
      PoluluSortierenWinkel2_DW.temporalCounter_i1 = 0UL;
      break;

     case PoluluSortierenWi_IN_Stopbeginn:
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1 >= 10000UL) {
        PoluluSortierenWinkel2_DW.is_c3_PoluluSortierenWinkel2 =
          PoluluSortierenWink_IN_Stopende;
      }
      break;

     case PoluluSortierenWink_IN_Stopende:
      PoluluSortierenWinkel2_DW.is_c3_PoluluSortierenWinkel2 =
        PoluluSortierenW_IN_Linksdrehen;
      break;

     default:
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1 >= 150000UL) {
        PoluluSortierenWinkel2_DW.is_c3_PoluluSortierenWinkel2 =
          PoluluSortierenWi_IN_Stopbeginn;
        PoluluSortierenWinkel2_DW.temporalCounter_i1 = 0UL;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Update for Memory: '<S7>/Memory' */
  PoluluSortierenWinkel2_DW.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S3>/Unit Delay3' */
  PoluluSortierenWinkel2_DW.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert_k;

  /* Update for UnitDelay: '<S3>/Unit Delay4' */
  PoluluSortierenWinkel2_DW.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for Memory: '<S6>/Memory' */
  PoluluSortierenWinkel2_DW.Memory_PreviousInput_a =
    rtb_VergleichmitSchwellwert_k;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++PoluluSortierenWinkel2_M->Timing.clockTick0)) {
    ++PoluluSortierenWinkel2_M->Timing.clockTickH0;
  }

  PoluluSortierenWinkel2_M->Timing.t[0] =
    PoluluSortierenWinkel2_M->Timing.clockTick0 *
    PoluluSortierenWinkel2_M->Timing.stepSize0 +
    PoluluSortierenWinkel2_M->Timing.clockTickH0 *
    PoluluSortierenWinkel2_M->Timing.stepSize0 * 4294967296.0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 2.0E-5, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  PoluluSortierenWinkel2_M->Timing.clockTick1++;
  if (!PoluluSortierenWinkel2_M->Timing.clockTick1) {
    PoluluSortierenWinkel2_M->Timing.clockTickH1++;
  }
}

/* Model step function for TID2 */
void PoluluSortierenWinkel2_step2(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_y;
  int16_T rtb_winkel;
  real_T rtb_DeadZone;

  /* Chart: '<Root>/Chart1' */
  if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c < 511U) {
    PoluluSortierenWinkel2_DW.temporalCounter_i1_c++;
  }

  if (PoluluSortierenWinkel2_DW.is_active_c1_PoluluSortierenWin == 0U) {
    PoluluSortierenWinkel2_DW.is_active_c1_PoluluSortierenWin = 1U;
    PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
      PoluluSortierenWinkel2_IN_a;
    PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
    rtb_winkel = -40;
  } else {
    switch (PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2) {
     case PoluluSortierenWinkel2_IN_a:
      rtb_winkel = -40;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_b;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = 0;
      }
      break;

     case PoluluSortierenWinkel2_IN_b:
      rtb_winkel = 0;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_c;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = -170;
      }
      break;

     case PoluluSortierenWinkel2_IN_c:
      rtb_winkel = -170;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_d9;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = 0;
      }
      break;

     case PoluluSortierenWinkel2_IN_d:
      rtb_winkel = -295;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_d1;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = 0;
      }
      break;

     case PoluluSortierenWinkel2_IN_d1:
      rtb_winkel = 0;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_d2;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = -440;
      }
      break;

     case PoluluSortierenWinkel2_IN_d2:
      rtb_winkel = -440;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_d3;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = 0;
      }
      break;

     case PoluluSortierenWinkel2_IN_d3:
      rtb_winkel = 0;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_d4;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = 85;
      }
      break;

     case PoluluSortierenWinkel2_IN_d4:
      rtb_winkel = 85;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_d5;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = 0;
      }
      break;

     case PoluluSortierenWinkel2_IN_d5:
      rtb_winkel = 0;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_d6;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = 220;
      }
      break;

     case PoluluSortierenWinkel2_IN_d6:
      rtb_winkel = 220;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_d7;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = 0;
      }
      break;

     case PoluluSortierenWinkel2_IN_d7:
      rtb_winkel = 0;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_d8;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = 430;
      }
      break;

     case PoluluSortierenWinkel2_IN_d8:
      rtb_winkel = 430;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_a;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = -40;
      }
      break;

     default:
      rtb_winkel = 0;
      if (PoluluSortierenWinkel2_DW.temporalCounter_i1_c >= 400U) {
        PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
          PoluluSortierenWinkel2_IN_d;
        PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
        rtb_winkel = -295;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart1' */

  /* Sum: '<S4>/Sum' */
  rtb_DeadZone = (real_T)rtb_winkel - PoluluSortierenWinkel2_B.RateTransition4;

  /* DeadZone: '<S4>/Dead Zone' */
  if (rtb_DeadZone > PoluluSortierenWinkel2_P.DeadZone_End) {
    rtb_DeadZone -= PoluluSortierenWinkel2_P.DeadZone_End;
  } else if (rtb_DeadZone >= PoluluSortierenWinkel2_P.DeadZone_Start) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= PoluluSortierenWinkel2_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S4>/Dead Zone' */

  /* Gain: '<S4>/Verstaerkung' */
  rtb_DeadZone *= PoluluSortierenWinkel2_P.Verstaerkung_Gain;

  /* MATLAB Function: '<S4>/Richtung' */
  PoluluSortierenWinkel2_B.y = (rtb_DeadZone > 0.0);

  /* S-Function (c280xgpio_do): '<Root>/Drehrichtungsvorgabe für einen Motor' */
  {
    if (PoluluSortierenWinkel2_B.y)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* Abs: '<S4>/Abs' */
  rtb_y = fabs(rtb_DeadZone);

  /* MATLAB Function: '<S4>/Betrag' */
  if ((0.5 < rtb_y) && (rtb_y < 60.0)) {
    rtb_y = 60.0;
  } else if (rtb_y <= 0.5) {
    rtb_y = 0.0;
  } else {
    if (rtb_y >= 100.0) {
      rtb_y = 100.0;
    }
  }

  /* End of MATLAB Function: '<S4>/Betrag' */

  /* S-Function (c280xpwm): '<Root>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD * rtb_y * 0.01);
  }
}

/* Model initialize function */
void PoluluSortierenWinkel2_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)PoluluSortierenWinkel2_M, 0,
                sizeof(RT_MODEL_PoluluSortierenWinke_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&PoluluSortierenWinkel2_M->solverInfo,
                          &PoluluSortierenWinkel2_M->Timing.simTimeStep);
    rtsiSetTPtr(&PoluluSortierenWinkel2_M->solverInfo, &rtmGetTPtr
                (PoluluSortierenWinkel2_M));
    rtsiSetStepSizePtr(&PoluluSortierenWinkel2_M->solverInfo,
                       &PoluluSortierenWinkel2_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&PoluluSortierenWinkel2_M->solverInfo,
                          (&rtmGetErrorStatus(PoluluSortierenWinkel2_M)));
    rtsiSetRTModelPtr(&PoluluSortierenWinkel2_M->solverInfo,
                      PoluluSortierenWinkel2_M);
  }

  rtsiSetSimTimeStep(&PoluluSortierenWinkel2_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&PoluluSortierenWinkel2_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(PoluluSortierenWinkel2_M, &PoluluSortierenWinkel2_M->Timing.tArray
             [0]);
  PoluluSortierenWinkel2_M->Timing.stepSize0 = 2.0E-5;

  /* block I/O */
  (void) memset(((void *) &PoluluSortierenWinkel2_B), 0,
                sizeof(B_PoluluSortierenWinkel2_T));

  /* states (dwork) */
  (void) memset((void *)&PoluluSortierenWinkel2_DW, 0,
                sizeof(DW_PoluluSortierenWinkel2_T));

  /* Start for S-Function (c280xadc): '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  if (adcInitFlag == 0) {
    InitAdc();
    adcInitFlag = 1;
  }

  config_ADC_A (1U, 50U, 0U, 0U, 0U);

  /* Start for S-Function (c280xgpio_do): '<Root>/Drehrichtungsvorgabe für einen Motor' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0xFFFFF3FF;
  GpioCtrlRegs.GPADIR.all |= 0x200000;
  EDIS;

  /* Start for S-Function (c280xpwm): '<Root>/PWM Vorgabe für einen Motor ' */

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

  /* Start for S-Function (c280xgpio_do): '<Root>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  EALLOW;
  GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPBDIR.all |= 0x4;
  EDIS;

  /* InitializeConditions for Memory: '<S7>/Memory' */
  PoluluSortierenWinkel2_DW.Memory_PreviousInput =
    PoluluSortierenWinkel2_P.EdgeDetector2_ic;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay3' */
  PoluluSortierenWinkel2_DW.UnitDelay3_DSTATE =
    PoluluSortierenWinkel2_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay4' */
  PoluluSortierenWinkel2_DW.UnitDelay4_DSTATE =
    PoluluSortierenWinkel2_P.UnitDelay4_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay5' */
  PoluluSortierenWinkel2_DW.UnitDelay5_DSTATE =
    PoluluSortierenWinkel2_P.UnitDelay5_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay2' */
  PoluluSortierenWinkel2_DW.UnitDelay2_DSTATE =
    PoluluSortierenWinkel2_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for Memory: '<S6>/Memory' */
  PoluluSortierenWinkel2_DW.Memory_PreviousInput_a =
    PoluluSortierenWinkel2_P.EdgeDetector1_ic;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay1' */
  PoluluSortierenWinkel2_DW.UnitDelay1_DSTATE =
    PoluluSortierenWinkel2_P.UnitDelay1_InitialCondition;

  /* SystemInitialize for Enabled SubSystem: '<S7>/POSITIVE Edge' */
  PoluluSor_POSITIVEEdge_Init(&PoluluSortierenWinkel2_B.RelationalOperator1,
    &PoluluSortierenWinkel2_P.POSITIVEEdge_c);

  /* End of SystemInitialize for SubSystem: '<S7>/POSITIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S7>/NEGATIVE Edge' */
  PoluluSor_NEGATIVEEdge_Init(&PoluluSortierenWinkel2_B.RelationalOperator1_h,
    &PoluluSortierenWinkel2_P.NEGATIVEEdge_b);

  /* End of SystemInitialize for SubSystem: '<S7>/NEGATIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S6>/POSITIVE Edge' */
  PoluluSor_POSITIVEEdge_Init(&PoluluSortierenWinkel2_B.RelationalOperator1_m,
    &PoluluSortierenWinkel2_P.POSITIVEEdge);

  /* End of SystemInitialize for SubSystem: '<S6>/POSITIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S6>/NEGATIVE Edge' */
  PoluluSor_NEGATIVEEdge_Init(&PoluluSortierenWinkel2_B.RelationalOperator1_l,
    &PoluluSortierenWinkel2_P.NEGATIVEEdge);

  /* End of SystemInitialize for SubSystem: '<S6>/NEGATIVE Edge' */

  /* SystemInitialize for Chart: '<Root>/Chart1' */
  PoluluSortierenWinkel2_DW.temporalCounter_i1_c = 0U;
  PoluluSortierenWinkel2_DW.is_active_c1_PoluluSortierenWin = 0U;
  PoluluSortierenWinkel2_DW.is_c1_PoluluSortierenWinkel2 =
    PoluluSortie_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  PoluluSortierenWinkel2_DW.temporalCounter_i1 = 0UL;
  PoluluSortierenWinkel2_DW.is_active_c3_PoluluSortierenWin = 0U;
  PoluluSortierenWinkel2_DW.is_c3_PoluluSortierenWinkel2 =
    PoluluSortie_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void PoluluSortierenWinkel2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
