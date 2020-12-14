/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: WinkelTest.c
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

/* Block signals (default storage) */
B_WinkelTest_T WinkelTest_B;

/* Block states (default storage) */
DW_WinkelTest_T WinkelTest_DW;

/* Real-time model */
RT_MODEL_WinkelTest_T WinkelTest_M_;
RT_MODEL_WinkelTest_T *const WinkelTest_M = &WinkelTest_M_;
static void rate_monotonic_scheduler(void);
static uint16_T adcInitFlag = 0;

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void WinkelTest_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(WinkelTest_M, 1));
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
  WinkelTest_M->Timing.RateInteraction.TID0_1 =
    (WinkelTest_M->Timing.TaskCounters.TID[1] == 0);

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (WinkelTest_M->Timing.TaskCounters.TID[1])++;
  if ((WinkelTest_M->Timing.TaskCounters.TID[1]) > 499) {/* Sample time: [0.01s, 0.0s] */
    WinkelTest_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * System initialize for enable system:
 *    '<S3>/NEGATIVE Edge'
 *    '<S4>/NEGATIVE Edge'
 */
void WinkelTes_NEGATIVEEdge_Init(boolean_T *rty_OUT, P_NEGATIVEEdge_WinkelTest_T
  *localP)
{
  /* SystemInitialize for Outport: '<S8>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S3>/NEGATIVE Edge'
 *    '<S4>/NEGATIVE Edge'
 */
void WinkelTest_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, boolean_T *rty_OUT)
{
  /* Outputs for Enabled SubSystem: '<S3>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S8>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S8>/Relational Operator1' */
    *rty_OUT = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S3>/NEGATIVE Edge' */
}

/*
 * System initialize for enable system:
 *    '<S3>/POSITIVE Edge'
 *    '<S4>/POSITIVE Edge'
 */
void WinkelTes_POSITIVEEdge_Init(boolean_T *rty_OUT, P_POSITIVEEdge_WinkelTest_T
  *localP)
{
  /* SystemInitialize for Outport: '<S9>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S3>/POSITIVE Edge'
 *    '<S4>/POSITIVE Edge'
 */
void WinkelTest_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, boolean_T *rty_OUT)
{
  /* Outputs for Enabled SubSystem: '<S3>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S9>/Relational Operator1' */
    *rty_OUT = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S3>/POSITIVE Edge' */
}

/*
 * Output and update for atomic system:
 *    '<S1>/MATLAB Function1'
 *    '<S1>/MATLAB Function3'
 */
void WinkelTest_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt, real32_T *rty_y)
{
  *rty_y = rtu_yalt + (real32_T)rtu_u;
}

/* Model step function for TID0 */
void WinkelTest_step0(void)            /* Sample time: [2.0E-5s, 0.0s] */
{
  boolean_T rtb_VergleichmitSchwellwert;
  boolean_T rtb_VergleichmitSchwellwert_d;
  real_T rtb_MultiportSwitch_b_idx_0;
  real_T rtb_MultiportSwitch_b_idx_1;
  real_T rtb_MultiportSwitch_idx_0;
  real_T rtb_MultiportSwitch_idx_1;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_1;

  {                                    /* Sample time: [2.0E-5s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
   *  Constant: '<S3>/Constant1'
   *  Constant: '<S3>/either edge'
   *  Constant: '<S3>/neg. edge'
   *  Constant: '<S3>/pos. edge'
   */
  switch ((int16_T)WinkelTest_P.EdgeDetector1_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = WinkelTest_P.posedge_Value[0];
    rtb_MultiportSwitch_idx_1 = WinkelTest_P.posedge_Value[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = WinkelTest_P.negedge_Value[0];
    rtb_MultiportSwitch_idx_1 = WinkelTest_P.negedge_Value[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = WinkelTest_P.eitheredge_Value[0];
    rtb_MultiportSwitch_idx_1 = WinkelTest_P.eitheredge_Value[1];
    break;
  }

  /* End of MultiPortSwitch: '<S3>/Multiport Switch' */

  /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
   *  Constant: '<S4>/Constant1'
   *  Constant: '<S4>/either edge'
   *  Constant: '<S4>/neg. edge'
   *  Constant: '<S4>/pos. edge'
   */
  switch ((int16_T)WinkelTest_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_b_idx_0 = WinkelTest_P.posedge_Value_g[0];
    rtb_MultiportSwitch_b_idx_1 = WinkelTest_P.posedge_Value_g[1];
    break;

   case 2:
    rtb_MultiportSwitch_b_idx_0 = WinkelTest_P.negedge_Value_b[0];
    rtb_MultiportSwitch_b_idx_1 = WinkelTest_P.negedge_Value_b[1];
    break;

   default:
    rtb_MultiportSwitch_b_idx_0 = WinkelTest_P.eitheredge_Value_j[0];
    rtb_MultiportSwitch_b_idx_1 = WinkelTest_P.eitheredge_Value_j[1];
    break;
  }

  /* End of MultiPortSwitch: '<S4>/Multiport Switch' */

  /* S-Function (c280xadc): '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  {
    AdcRegs.ADCTRL2.bit.RST_SEQ1 = 1;  /* Reset SEQ1 module*/
    AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;/*clear INT sequencer*/
    AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;  /* Software Trigger*/
    while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {
    }                                  /*Wait for Sequencer INT bit to clear */

    asm(" RPT #11 || NOP");
    WinkelTest_B.AnalogDigitalWandlungSampletime = (AdcRegs.ADCRESULT0) >> 4;
    WinkelTest_B.AnalogDigitalWandlungSampleti_g = (AdcRegs.ADCRESULT1) >> 4;
  }

  /* RelationalOperator: '<S1>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S1>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert = (WinkelTest_B.AnalogDigitalWandlungSampleti_g <=
    WinkelTest_P.HeuristischermittelterSchwellwe);

  /* Outputs for Enabled SubSystem: '<S4>/POSITIVE Edge' */
  /* Memory: '<S4>/Memory' */
  WinkelTest_POSITIVEEdge(rtb_MultiportSwitch_b_idx_0,
    rtb_VergleichmitSchwellwert, WinkelTest_DW.Memory_PreviousInput,
    &WinkelTest_B.RelationalOperator1);

  /* End of Outputs for SubSystem: '<S4>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S4>/NEGATIVE Edge' */
  WinkelTest_NEGATIVEEdge(rtb_MultiportSwitch_b_idx_1,
    rtb_VergleichmitSchwellwert, WinkelTest_DW.Memory_PreviousInput,
    &WinkelTest_B.RelationalOperator1_j);

  /* End of Outputs for SubSystem: '<S4>/NEGATIVE Edge' */

  /* RelationalOperator: '<S1>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rtb_VergleichmitSchwellwert_d = (WinkelTest_P.Constant_Value <=
    WinkelTest_B.AnalogDigitalWandlungSampletime);

  /* MATLAB Function: '<S1>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S1>/Unit Delay3'
   *  UnitDelay: '<S1>/Unit Delay4'
   *  UnitDelay: '<S1>/Unit Delay5'
   */
  rtb_MultiportSwitch_b_idx_0 = 1.0;
  tmp_0 = !WinkelTest_DW.UnitDelay3_DSTATE;
  tmp_1 = !WinkelTest_DW.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert_d) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_b_idx_0 = WinkelTest_DW.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert_d) && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_b_idx_0 = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert_d && (!rtb_VergleichmitSchwellwert)) {
    rtb_MultiportSwitch_b_idx_0 = -1.0;
  }

  tmp_0 = (tmp_0 && WinkelTest_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_d) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_b_idx_0 = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert_d) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_b_idx_0 = WinkelTest_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_d && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_b_idx_0 = 1.0;
  }

  tmp_0 = (WinkelTest_DW.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_d) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_b_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_d && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_b_idx_0 = WinkelTest_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_d && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_b_idx_0 = -1.0;
  }

  tmp_0 = (WinkelTest_DW.UnitDelay3_DSTATE && WinkelTest_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_d) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_b_idx_0 = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_d && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_b_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_d && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_b_idx_0 = WinkelTest_DW.UnitDelay5_DSTATE;
  }

  WinkelTest_B.RL = (rtb_MultiportSwitch_b_idx_0 == 1.0);
  WinkelTest_DW.UnitDelay5_DSTATE = rtb_MultiportSwitch_b_idx_0;

  /* End of MATLAB Function: '<S1>/MATLAB Function2' */

  /* MATLAB Function: '<S1>/MATLAB Function3' incorporates:
   *  Logic: '<S4>/Logical Operator1'
   *  Product: '<S1>/Product'
   *  UnitDelay: '<S1>/Unit Delay2'
   *  UnitDelay: '<S1>/Unit Delay5'
   */
  WinkelTest_MATLABFunction1(WinkelTest_DW.UnitDelay5_DSTATE * (real_T)
    (WinkelTest_B.RelationalOperator1 || WinkelTest_B.RelationalOperator1_j),
    WinkelTest_DW.UnitDelay2_DSTATE, &WinkelTest_DW.UnitDelay2_DSTATE);

  /* Outputs for Enabled SubSystem: '<S3>/POSITIVE Edge' */
  /* Memory: '<S3>/Memory' */
  WinkelTest_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_d, WinkelTest_DW.Memory_PreviousInput_k,
    &WinkelTest_B.RelationalOperator1_o);

  /* End of Outputs for SubSystem: '<S3>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S3>/NEGATIVE Edge' */
  WinkelTest_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_d, WinkelTest_DW.Memory_PreviousInput_k,
    &WinkelTest_B.RelationalOperator1_f);

  /* End of Outputs for SubSystem: '<S3>/NEGATIVE Edge' */

  /* MATLAB Function: '<S1>/MATLAB Function1' incorporates:
   *  Logic: '<S3>/Logical Operator1'
   *  Product: '<S1>/Product3'
   *  UnitDelay: '<S1>/Unit Delay1'
   *  UnitDelay: '<S1>/Unit Delay5'
   */
  WinkelTest_MATLABFunction1((real_T)(WinkelTest_B.RelationalOperator1_o ||
    WinkelTest_B.RelationalOperator1_f) * WinkelTest_DW.UnitDelay5_DSTATE,
    WinkelTest_DW.UnitDelay1_DSTATE, &WinkelTest_DW.UnitDelay1_DSTATE);

  /* Product: '<S1>/Product1' incorporates:
   *  Constant: '<S1>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  rtb_MultiportSwitch_idx_0 = WinkelTest_P.WinkelFlankePolulo3416V022Pol_f *
    WinkelTest_DW.UnitDelay1_DSTATE;

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S1>/Product2'
   *  UnitDelay: '<S1>/Unit Delay2'
   */
  rtb_MultiportSwitch_idx_0 += WinkelTest_DW.UnitDelay2_DSTATE *
    WinkelTest_P.WinkelFlankePolulo3416V022Polul;

  /* RateTransition: '<Root>/Rate Transition4' */
  if (WinkelTest_M->Timing.RateInteraction.TID0_1) {
    WinkelTest_B.RateTransition4 = rtb_MultiportSwitch_idx_0;
  }

  /* End of RateTransition: '<Root>/Rate Transition4' */

  /* S-Function (c280xgpio_do): '<Root>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (WinkelTest_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Update for Memory: '<S4>/Memory' */
  WinkelTest_DW.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S1>/Unit Delay3' */
  WinkelTest_DW.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert_d;

  /* Update for UnitDelay: '<S1>/Unit Delay4' */
  WinkelTest_DW.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for Memory: '<S3>/Memory' */
  WinkelTest_DW.Memory_PreviousInput_k = rtb_VergleichmitSchwellwert_d;
}

/* Model step function for TID1 */
void WinkelTest_step1(void)            /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_y;
  real_T rtb_DeadZone;

  /* Sum: '<S2>/Sum' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_DeadZone = WinkelTest_P.Constant_Value_g - WinkelTest_B.RateTransition4;

  /* DeadZone: '<S2>/Dead Zone' */
  if (rtb_DeadZone > WinkelTest_P.DeadZone_End) {
    rtb_DeadZone -= WinkelTest_P.DeadZone_End;
  } else if (rtb_DeadZone >= WinkelTest_P.DeadZone_Start) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= WinkelTest_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S2>/Dead Zone' */

  /* Gain: '<S2>/Verstaerkung' */
  rtb_DeadZone *= WinkelTest_P.Verstaerkung_Gain;

  /* MATLAB Function: '<S2>/Richtung' */
  WinkelTest_B.y = (rtb_DeadZone > 0.0);

  /* S-Function (c280xgpio_do): '<Root>/Drehrichtungsvorgabe für einen Motor' */
  {
    if (WinkelTest_B.y)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* Abs: '<S2>/Abs' */
  rtb_y = fabs(rtb_DeadZone);

  /* MATLAB Function: '<S2>/Betrag' */
  if ((0.5 < rtb_y) && (rtb_y < 60.0)) {
    rtb_y = 60.0;
  } else if (rtb_y <= 0.5) {
    rtb_y = 0.0;
  } else {
    if (rtb_y >= 100.0) {
      rtb_y = 100.0;
    }
  }

  /* End of MATLAB Function: '<S2>/Betrag' */

  /* S-Function (c280xpwm): '<Root>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD * rtb_y * 0.01);
  }
}

/* Model initialize function */
void WinkelTest_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)WinkelTest_M, 0,
                sizeof(RT_MODEL_WinkelTest_T));

  /* block I/O */
  (void) memset(((void *) &WinkelTest_B), 0,
                sizeof(B_WinkelTest_T));

  /* states (dwork) */
  (void) memset((void *)&WinkelTest_DW, 0,
                sizeof(DW_WinkelTest_T));

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

  /* InitializeConditions for Memory: '<S4>/Memory' */
  WinkelTest_DW.Memory_PreviousInput = WinkelTest_P.EdgeDetector2_ic;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay3' */
  WinkelTest_DW.UnitDelay3_DSTATE = WinkelTest_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay4' */
  WinkelTest_DW.UnitDelay4_DSTATE = WinkelTest_P.UnitDelay4_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay5' */
  WinkelTest_DW.UnitDelay5_DSTATE = WinkelTest_P.UnitDelay5_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay2' */
  WinkelTest_DW.UnitDelay2_DSTATE = WinkelTest_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory' */
  WinkelTest_DW.Memory_PreviousInput_k = WinkelTest_P.EdgeDetector1_ic;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay1' */
  WinkelTest_DW.UnitDelay1_DSTATE = WinkelTest_P.UnitDelay1_InitialCondition;

  /* SystemInitialize for Enabled SubSystem: '<S4>/POSITIVE Edge' */
  WinkelTes_POSITIVEEdge_Init(&WinkelTest_B.RelationalOperator1,
    &WinkelTest_P.POSITIVEEdge_j);

  /* End of SystemInitialize for SubSystem: '<S4>/POSITIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S4>/NEGATIVE Edge' */
  WinkelTes_NEGATIVEEdge_Init(&WinkelTest_B.RelationalOperator1_j,
    &WinkelTest_P.NEGATIVEEdge_o);

  /* End of SystemInitialize for SubSystem: '<S4>/NEGATIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S3>/POSITIVE Edge' */
  WinkelTes_POSITIVEEdge_Init(&WinkelTest_B.RelationalOperator1_o,
    &WinkelTest_P.POSITIVEEdge);

  /* End of SystemInitialize for SubSystem: '<S3>/POSITIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S3>/NEGATIVE Edge' */
  WinkelTes_NEGATIVEEdge_Init(&WinkelTest_B.RelationalOperator1_f,
    &WinkelTest_P.NEGATIVEEdge);

  /* End of SystemInitialize for SubSystem: '<S3>/NEGATIVE Edge' */
}

/* Model terminate function */
void WinkelTest_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
