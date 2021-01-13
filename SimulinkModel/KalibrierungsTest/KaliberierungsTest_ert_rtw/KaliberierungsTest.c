/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: KaliberierungsTest.c
 *
 * Code generated for Simulink model 'KaliberierungsTest'.
 *
 * Model version                  : 1.41
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan 13 17:27:49 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "KaliberierungsTest.h"
#include "KaliberierungsTest_private.h"
#define Kaliberierun_IN_NO_ACTIVE_CHILD (0U)
#define KaliberierungsTe_IN_StoppeMotor (2U)
#define KaliberierungsTest_IN_Start    (1U)

/* Block signals (default storage) */
B_KaliberierungsTest_T KaliberierungsTest_B;

/* Block states (default storage) */
DW_KaliberierungsTest_T KaliberierungsTest_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_KaliberierungsTest_T KaliberierungsTest_PrevZCX;

/* Real-time model */
RT_MODEL_KaliberierungsTest_T KaliberierungsTest_M_;
RT_MODEL_KaliberierungsTest_T *const KaliberierungsTest_M =
  &KaliberierungsTest_M_;
static void rate_monotonic_scheduler(void);
static uint16_T adcInitFlag = 0;

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void KaliberierungsTest_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(KaliberierungsTest_M, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(KaliberierungsTest_M, 2));
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
  KaliberierungsTest_M->Timing.RateInteraction.TID0_1 =
    (KaliberierungsTest_M->Timing.TaskCounters.TID[1] == 0);

  /* tid 1 shares data with slower tid rate: 2 */
  if (KaliberierungsTest_M->Timing.TaskCounters.TID[1] == 0) {
    KaliberierungsTest_M->Timing.RateInteraction.TID1_2 =
      (KaliberierungsTest_M->Timing.TaskCounters.TID[2] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (KaliberierungsTest_M->Timing.TaskCounters.TID[1])++;
  if ((KaliberierungsTest_M->Timing.TaskCounters.TID[1]) > 499) {/* Sample time: [0.01s, 0.0s] */
    KaliberierungsTest_M->Timing.TaskCounters.TID[1] = 0;
  }

  (KaliberierungsTest_M->Timing.TaskCounters.TID[2])++;
  if ((KaliberierungsTest_M->Timing.TaskCounters.TID[2]) > 4999) {/* Sample time: [0.1s, 0.0s] */
    KaliberierungsTest_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/*
 * System initialize for enable system:
 *    '<S9>/NEGATIVE Edge'
 *    '<S10>/NEGATIVE Edge'
 */
void Kaliberie_NEGATIVEEdge_Init(boolean_T *rty_OUT,
  P_NEGATIVEEdge_Kaliberierungs_T *localP)
{
  /* SystemInitialize for Outport: '<S14>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S9>/NEGATIVE Edge'
 *    '<S10>/NEGATIVE Edge'
 */
void Kaliberierungs_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
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
void Kaliberie_POSITIVEEdge_Init(boolean_T *rty_OUT,
  P_POSITIVEEdge_Kaliberierungs_T *localP)
{
  /* SystemInitialize for Outport: '<S15>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S9>/POSITIVE Edge'
 *    '<S10>/POSITIVE Edge'
 */
void Kaliberierungs_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
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
void Kaliberieru_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt, real32_T
  *rty_y)
{
  *rty_y = rtu_yalt + (real32_T)rtu_u;
}

/* Model step function for TID0 */
void KaliberierungsTest_step0(void)    /* Sample time: [2.0E-5s, 0.0s] */
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
  switch ((int16_T)KaliberierungsTest_P.EdgeDetector1_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = KaliberierungsTest_P.posedge_Value[0];
    rtb_MultiportSwitch_idx_1 = KaliberierungsTest_P.posedge_Value[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = KaliberierungsTest_P.negedge_Value[0];
    rtb_MultiportSwitch_idx_1 = KaliberierungsTest_P.negedge_Value[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = KaliberierungsTest_P.eitheredge_Value[0];
    rtb_MultiportSwitch_idx_1 = KaliberierungsTest_P.eitheredge_Value[1];
    break;
  }

  /* End of MultiPortSwitch: '<S9>/Multiport Switch' */

  /* MultiPortSwitch: '<S10>/Multiport Switch' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Constant: '<S10>/either edge'
   *  Constant: '<S10>/neg. edge'
   *  Constant: '<S10>/pos. edge'
   */
  switch ((int16_T)KaliberierungsTest_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_c_idx_0 = KaliberierungsTest_P.posedge_Value_n[0];
    rtb_MultiportSwitch_c_idx_1 = KaliberierungsTest_P.posedge_Value_n[1];
    break;

   case 2:
    rtb_MultiportSwitch_c_idx_0 = KaliberierungsTest_P.negedge_Value_d[0];
    rtb_MultiportSwitch_c_idx_1 = KaliberierungsTest_P.negedge_Value_d[1];
    break;

   default:
    rtb_MultiportSwitch_c_idx_0 = KaliberierungsTest_P.eitheredge_Value_b[0];
    rtb_MultiportSwitch_c_idx_1 = KaliberierungsTest_P.eitheredge_Value_b[1];
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
    KaliberierungsTest_B.AnalogDigitalWandlungSampletime = (AdcRegs.ADCRESULT0) >>
      4;
    KaliberierungsTest_B.AnalogDigitalWandlungSampleti_l = (AdcRegs.ADCRESULT1) >>
      4;
    KaliberierungsTest_B.AnalogDigitalWandlungSampleti_a = (AdcRegs.ADCRESULT2) >>
      4;
    KaliberierungsTest_B.AnalogDigitalWandlungSampleti_o = (AdcRegs.ADCRESULT3) >>
      4;
  }

  /* RelationalOperator: '<S8>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S8>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert =
    (KaliberierungsTest_B.AnalogDigitalWandlungSampleti_l <=
     KaliberierungsTest_P.HeuristischermittelterSchwellwe);

  /* Outputs for Enabled SubSystem: '<S10>/POSITIVE Edge' */
  /* Memory: '<S10>/Memory' */
  Kaliberierungs_POSITIVEEdge(rtb_MultiportSwitch_c_idx_0,
    rtb_VergleichmitSchwellwert, KaliberierungsTest_DW.Memory_PreviousInput,
    &KaliberierungsTest_B.RelationalOperator1);

  /* End of Outputs for SubSystem: '<S10>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S10>/NEGATIVE Edge' */
  Kaliberierungs_NEGATIVEEdge(rtb_MultiportSwitch_c_idx_1,
    rtb_VergleichmitSchwellwert, KaliberierungsTest_DW.Memory_PreviousInput,
    &KaliberierungsTest_B.RelationalOperator1_f);

  /* End of Outputs for SubSystem: '<S10>/NEGATIVE Edge' */

  /* RelationalOperator: '<S8>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S8>/Constant'
   */
  rtb_VergleichmitSchwellwert_j = (KaliberierungsTest_P.Constant_Value <=
    KaliberierungsTest_B.AnalogDigitalWandlungSampletime);

  /* MATLAB Function: '<S8>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S8>/Unit Delay3'
   *  UnitDelay: '<S8>/Unit Delay4'
   *  UnitDelay: '<S8>/Unit Delay5'
   */
  rtb_MultiportSwitch_c_idx_0 = 1.0;
  tmp_0 = !KaliberierungsTest_DW.UnitDelay3_DSTATE;
  tmp_1 = !KaliberierungsTest_DW.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert_j) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_c_idx_0 = KaliberierungsTest_DW.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert_j) && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_c_idx_0 = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert_j && (!rtb_VergleichmitSchwellwert)) {
    rtb_MultiportSwitch_c_idx_0 = -1.0;
  }

  tmp_0 = (tmp_0 && KaliberierungsTest_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_j) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_c_idx_0 = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert_j) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_c_idx_0 = KaliberierungsTest_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_j && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_c_idx_0 = 1.0;
  }

  tmp_0 = (KaliberierungsTest_DW.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_j) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_c_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_j && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_c_idx_0 = KaliberierungsTest_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_j && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_c_idx_0 = -1.0;
  }

  tmp_0 = (KaliberierungsTest_DW.UnitDelay3_DSTATE &&
           KaliberierungsTest_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_j) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_c_idx_0 = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_j && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_c_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_j && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_c_idx_0 = KaliberierungsTest_DW.UnitDelay5_DSTATE;
  }

  KaliberierungsTest_B.RL = (rtb_MultiportSwitch_c_idx_0 == 1.0);
  KaliberierungsTest_DW.UnitDelay5_DSTATE = rtb_MultiportSwitch_c_idx_0;

  /* End of MATLAB Function: '<S8>/MATLAB Function2' */

  /* MATLAB Function: '<S8>/MATLAB Function3' incorporates:
   *  Logic: '<S10>/Logical Operator1'
   *  Product: '<S8>/Product'
   *  UnitDelay: '<S8>/Unit Delay2'
   *  UnitDelay: '<S8>/Unit Delay5'
   */
  Kaliberieru_MATLABFunction1(KaliberierungsTest_DW.UnitDelay5_DSTATE * (real_T)
    (KaliberierungsTest_B.RelationalOperator1 ||
     KaliberierungsTest_B.RelationalOperator1_f),
    KaliberierungsTest_DW.UnitDelay2_DSTATE,
    &KaliberierungsTest_DW.UnitDelay2_DSTATE);

  /* Outputs for Enabled SubSystem: '<S9>/POSITIVE Edge' */
  /* Memory: '<S9>/Memory' */
  Kaliberierungs_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_j, KaliberierungsTest_DW.Memory_PreviousInput_b,
    &KaliberierungsTest_B.RelationalOperator1_b);

  /* End of Outputs for SubSystem: '<S9>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S9>/NEGATIVE Edge' */
  Kaliberierungs_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_j, KaliberierungsTest_DW.Memory_PreviousInput_b,
    &KaliberierungsTest_B.RelationalOperator1_j);

  /* End of Outputs for SubSystem: '<S9>/NEGATIVE Edge' */

  /* MATLAB Function: '<S8>/MATLAB Function1' incorporates:
   *  Logic: '<S9>/Logical Operator1'
   *  Product: '<S8>/Product3'
   *  UnitDelay: '<S8>/Unit Delay1'
   *  UnitDelay: '<S8>/Unit Delay5'
   */
  Kaliberieru_MATLABFunction1((real_T)
    (KaliberierungsTest_B.RelationalOperator1_b ||
     KaliberierungsTest_B.RelationalOperator1_j) *
    KaliberierungsTest_DW.UnitDelay5_DSTATE,
    KaliberierungsTest_DW.UnitDelay1_DSTATE,
    &KaliberierungsTest_DW.UnitDelay1_DSTATE);

  /* Product: '<S8>/Product1' incorporates:
   *  Constant: '<S8>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   *  UnitDelay: '<S8>/Unit Delay1'
   */
  rtb_MultiportSwitch_idx_0 =
    KaliberierungsTest_P.WinkelFlankePolulo3416V022Pol_o *
    KaliberierungsTest_DW.UnitDelay1_DSTATE;

  /* Sum: '<S8>/Sum' incorporates:
   *  Constant: '<S8>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S8>/Product2'
   *  UnitDelay: '<S8>/Unit Delay2'
   */
  rtb_MultiportSwitch_idx_0 += KaliberierungsTest_DW.UnitDelay2_DSTATE *
    KaliberierungsTest_P.WinkelFlankePolulo3416V022Polul;

  /* RateTransition: '<S4>/Rate Transition3' */
  if (KaliberierungsTest_M->Timing.RateInteraction.TID0_1) {
    KaliberierungsTest_B.RateTransition3 = rtb_MultiportSwitch_idx_0;
  }

  /* End of RateTransition: '<S4>/Rate Transition3' */

  /* S-Function (c280xgpio_do): '<S4>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (KaliberierungsTest_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Update for Memory: '<S10>/Memory' */
  KaliberierungsTest_DW.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S8>/Unit Delay3' */
  KaliberierungsTest_DW.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert_j;

  /* Update for UnitDelay: '<S8>/Unit Delay4' */
  KaliberierungsTest_DW.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for Memory: '<S9>/Memory' */
  KaliberierungsTest_DW.Memory_PreviousInput_b = rtb_VergleichmitSchwellwert_j;
}

/* Model step function for TID1 */
void KaliberierungsTest_step1(void)    /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_y_c;
  real_T rtb_DeadZone;

  /* RateTransition: '<S5>/TmpRTBAtSumInport2' */
  if (KaliberierungsTest_M->Timing.RateInteraction.TID1_2) {
    KaliberierungsTest_B.TmpRTBAtSumInport2 =
      KaliberierungsTest_DW.TmpRTBAtSumInport2_Buffer0;
  }

  /* End of RateTransition: '<S5>/TmpRTBAtSumInport2' */

  /* Sum: '<S5>/Sum' */
  rtb_DeadZone = KaliberierungsTest_B.TmpRTBAtSumInport2 -
    KaliberierungsTest_B.RateTransition3;

  /* DeadZone: '<S5>/Dead Zone' */
  if (rtb_DeadZone > KaliberierungsTest_P.DeadZone_End) {
    rtb_DeadZone -= KaliberierungsTest_P.DeadZone_End;
  } else if (rtb_DeadZone >= KaliberierungsTest_P.DeadZone_Start) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= KaliberierungsTest_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S5>/Dead Zone' */

  /* Gain: '<S5>/Verstaerkung' */
  rtb_DeadZone *= KaliberierungsTest_P.Verstaerkung_Gain;

  /* MATLAB Function: '<S5>/Richtung' */
  KaliberierungsTest_B.y = (rtb_DeadZone > 0.0);

  /* S-Function (c280xgpio_do): '<S2>/Drehrichtungsvorgabe für einen Motor' */
  {
    if (KaliberierungsTest_B.y)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* Abs: '<S5>/Abs' */
  rtb_y_c = fabs(rtb_DeadZone);

  /* MATLAB Function: '<S5>/Betrag' */
  if ((0.5 < rtb_y_c) && (rtb_y_c < 60.0)) {
    rtb_y_c = 60.0;
  } else if (rtb_y_c <= 0.5) {
    rtb_y_c = 0.0;
  } else {
    if (rtb_y_c >= 100.0) {
      rtb_y_c = 100.0;
    }
  }

  /* End of MATLAB Function: '<S5>/Betrag' */

  /* S-Function (c280xpwm): '<S2>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD * rtb_y_c * 0.01);
  }

  /* RateTransition: '<Root>/TmpRTBAtTriggered SubsystemInport1' */
  if (KaliberierungsTest_M->Timing.RateInteraction.TID1_2) {
    KaliberierungsTest_B.TmpRTBAtTriggeredSubsystemInpor =
      KaliberierungsTest_B.RateTransition3;
  }

  /* End of RateTransition: '<Root>/TmpRTBAtTriggered SubsystemInport1' */
}

/* Model step function for TID2 */
void KaliberierungsTest_step2(void)    /* Sample time: [0.1s, 0.0s] */
{
  ZCEventType zcEvent;
  int16_T rtb_winkelAnfahren;

  /* S-Function (c280xgpio_di): '<Root>/Digital Input' */
  {
    KaliberierungsTest_B.DigitalInput = GpioDataRegs.GPADAT.bit.GPIO24;
  }

  /* Outputs for Triggered SubSystem: '<Root>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S3>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &KaliberierungsTest_PrevZCX.TriggeredSubsystem_Trig_ZCE,
                     (KaliberierungsTest_B.DigitalInput));
  if (zcEvent != NO_ZCEVENT) {
    /* Inport: '<S3>/In1' */
    KaliberierungsTest_B.In1 =
      KaliberierungsTest_B.TmpRTBAtTriggeredSubsystemInpor;
  }

  /* End of Outputs for SubSystem: '<Root>/Triggered Subsystem' */

  /* Chart: '<Root>/Chart' */
  if (KaliberierungsTest_DW.is_active_c1_KaliberierungsTest == 0U) {
    KaliberierungsTest_DW.is_active_c1_KaliberierungsTest = 1U;
    KaliberierungsTest_DW.is_c1_KaliberierungsTest = KaliberierungsTest_IN_Start;
    rtb_winkelAnfahren = 800;
  } else if (KaliberierungsTest_DW.is_c1_KaliberierungsTest == 1U) {
    if (KaliberierungsTest_B.In1 > 0.0) {
      KaliberierungsTest_DW.is_c1_KaliberierungsTest =
        KaliberierungsTe_IN_StoppeMotor;
      rtb_winkelAnfahren = 0;
    } else {
      rtb_winkelAnfahren = 800;
    }
  } else {
    rtb_winkelAnfahren = 0;
  }

  /* End of Chart: '<Root>/Chart' */

  /* Update for RateTransition: '<S5>/TmpRTBAtSumInport2' */
  KaliberierungsTest_DW.TmpRTBAtSumInport2_Buffer0 = rtb_winkelAnfahren;
}

/* Model initialize function */
void KaliberierungsTest_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)KaliberierungsTest_M, 0,
                sizeof(RT_MODEL_KaliberierungsTest_T));

  /* block I/O */
  (void) memset(((void *) &KaliberierungsTest_B), 0,
                sizeof(B_KaliberierungsTest_T));

  /* states (dwork) */
  (void) memset((void *)&KaliberierungsTest_DW, 0,
                sizeof(DW_KaliberierungsTest_T));

  /* Machine initializer */
  KaliberierungsTest_DW.magacin = 0.0;

  /* Start for S-Function (c280xadc): '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  if (adcInitFlag == 0) {
    InitAdc();
    adcInitFlag = 1;
  }

  config_ADC_A (3U, 4146U, 0U, 0U, 0U);

  /* Start for RateTransition: '<S5>/TmpRTBAtSumInport2' */
  KaliberierungsTest_B.TmpRTBAtSumInport2 =
    KaliberierungsTest_P.TmpRTBAtSumInport2_InitialCondi;

  /* Start for S-Function (c280xgpio_do): '<S2>/Drehrichtungsvorgabe für einen Motor' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0xFFFFF3FF;
  GpioCtrlRegs.GPADIR.all |= 0x200000;
  EDIS;

  /* Start for S-Function (c280xpwm): '<S2>/PWM Vorgabe für einen Motor ' */

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

  /* Start for S-Function (c280xgpio_di): '<Root>/Digital Input' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0xFFFCFFFF;
  GpioCtrlRegs.GPADIR.all &= 0xFEFFFFFF;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<S4>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  EALLOW;
  GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPBDIR.all |= 0x4;
  EDIS;
  KaliberierungsTest_PrevZCX.TriggeredSubsystem_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Memory: '<S10>/Memory' */
  KaliberierungsTest_DW.Memory_PreviousInput =
    KaliberierungsTest_P.EdgeDetector2_ic;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay3' */
  KaliberierungsTest_DW.UnitDelay3_DSTATE =
    KaliberierungsTest_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay4' */
  KaliberierungsTest_DW.UnitDelay4_DSTATE =
    KaliberierungsTest_P.UnitDelay4_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay5' */
  KaliberierungsTest_DW.UnitDelay5_DSTATE =
    KaliberierungsTest_P.UnitDelay5_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay2' */
  KaliberierungsTest_DW.UnitDelay2_DSTATE =
    KaliberierungsTest_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for Memory: '<S9>/Memory' */
  KaliberierungsTest_DW.Memory_PreviousInput_b =
    KaliberierungsTest_P.EdgeDetector1_ic;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay1' */
  KaliberierungsTest_DW.UnitDelay1_DSTATE =
    KaliberierungsTest_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for RateTransition: '<S5>/TmpRTBAtSumInport2' */
  KaliberierungsTest_DW.TmpRTBAtSumInport2_Buffer0 =
    KaliberierungsTest_P.TmpRTBAtSumInport2_InitialCondi;

  /* SystemInitialize for Enabled SubSystem: '<S10>/POSITIVE Edge' */
  Kaliberie_POSITIVEEdge_Init(&KaliberierungsTest_B.RelationalOperator1,
    &KaliberierungsTest_P.POSITIVEEdge_n);

  /* End of SystemInitialize for SubSystem: '<S10>/POSITIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S10>/NEGATIVE Edge' */
  Kaliberie_NEGATIVEEdge_Init(&KaliberierungsTest_B.RelationalOperator1_f,
    &KaliberierungsTest_P.NEGATIVEEdge_o);

  /* End of SystemInitialize for SubSystem: '<S10>/NEGATIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S9>/POSITIVE Edge' */
  Kaliberie_POSITIVEEdge_Init(&KaliberierungsTest_B.RelationalOperator1_b,
    &KaliberierungsTest_P.POSITIVEEdge);

  /* End of SystemInitialize for SubSystem: '<S9>/POSITIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S9>/NEGATIVE Edge' */
  Kaliberie_NEGATIVEEdge_Init(&KaliberierungsTest_B.RelationalOperator1_j,
    &KaliberierungsTest_P.NEGATIVEEdge);

  /* End of SystemInitialize for SubSystem: '<S9>/NEGATIVE Edge' */

  /* SystemInitialize for Triggered SubSystem: '<Root>/Triggered Subsystem' */
  /* SystemInitialize for Outport: '<S3>/Out1' */
  KaliberierungsTest_B.In1 = KaliberierungsTest_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/Triggered Subsystem' */

  /* SystemInitialize for Chart: '<Root>/Chart' */
  KaliberierungsTest_DW.is_active_c1_KaliberierungsTest = 0U;
  KaliberierungsTest_DW.is_c1_KaliberierungsTest =
    Kaliberierun_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void KaliberierungsTest_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
