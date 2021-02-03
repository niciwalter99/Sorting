/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusEchtSystem.c
 *
 * Code generated for Simulink model 'SortierAlgorithmusEchtSystem'.
 *
 * Model version                  : 1.78
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Feb  3 22:31:30 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SortierAlgorithmusEchtSystem.h"
#include "SortierAlgorithmusEchtSystem_private.h"
#define IN_photoelectricBarrierActivate (6U)
#define SortierA_IN_betterRightPosition (2U)
#define SortierAl_IN_betterLeftPosition (1U)
#define SortierAlgor_IN_NO_ACTIVE_CHILD (0U)
#define SortierAlgorit_IN_closeKlappe_b (4U)
#define SortierAlgorit_IN_setupVariable (7U)
#define SortierAlgorit_IN_startPosition (9U)
#define SortierAlgorith_IN_CloseRegular (1U)
#define SortierAlgorith_IN_DetectedCube (3U)
#define SortierAlgorithm_IN_closeKlappe (3U)
#define SortierAlgorithm_IN_goToMagacin (6U)
#define SortierAlgorithm_IN_waitForCube (11U)
#define SortierAlgorithmu_IN_Stillstand (2U)
#define SortierAlgorithmu_IN_cubeLoaded (5U)
#define SortierAlgorithmu_IN_firstEntry (5U)
#define SortierAlgorithmusE_IN_BlueCube (2U)
#define SortierAlgorithmusE_IN_goToZero (7U)
#define SortierAlgorithmusE_IN_openGate (8U)
#define SortierAlgorithmusE_IN_wait_boy (8U)
#define SortierAlgorithmusEc_IN_RedCube (4U)
#define SortierAlgorithmusEc_IN_wait_bo (6U)
#define SortierAlgorithmusEch_IN_open_b (5U)
#define SortierAlgorithmusEch_IN_wait_b (10U)
#define SortierAlgorithmusEchtS_IN_open (4U)
#define SortierAlgorithmusEchtS_IN_wait (5U)
#define SortierAlgorithmusEchtSy_IN_end (3U)
#define SortierAlgorithmusEcht_IN_Black (1U)
#define SortierAlgorithmusEcht_IN_Lampe (1U)
#define SortierAlgorithmusEcht_IN_close (2U)
#define SortierAlgorithmusEcht_IN_entry (4U)
#define SortierAlgorithmusEcht_IN_wait1 (7U)
#define SortierAlgorithmus_IN_closeGate (3U)

/* Block signals (default storage) */
B_SortierAlgorithmusEchtSyste_T SortierAlgorithmusEchtSystem_B;

/* Block states (default storage) */
DW_SortierAlgorithmusEchtSyst_T SortierAlgorithmusEchtSystem_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_SortierAlgorithmusEchtSy_T SortierAlgorithmusEchtSystem_Y;

/* Real-time model */
RT_MODEL_SortierAlgorithmusEc_T SortierAlgorithmusEchtSystem_M_;
RT_MODEL_SortierAlgorithmusEc_T *const SortierAlgorithmusEchtSystem_M =
  &SortierAlgorithmusEchtSystem_M_;

/* Forward declaration for local functions */
static real_T SortierAlgorit_findPlaceForBlue(void);
static real_T SortierAlgorith_findPlaceForRed(void);
static void SortierAlgor_SystemCore_release(dsp_simulink_MovingAverage_So_T *obj);
static void SortierAlgori_SystemCore_delete(dsp_simulink_MovingAverage_So_T *obj);
static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingAverage_So_T *obj);
static void rate_monotonic_scheduler(void);
static uint16_T adcInitFlag = 0;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0UL]) {
    iLeft = 0UL;
    frac = (u0 - bp0[0UL]) / (bp0[1UL] - bp0[0UL]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1UL;
    iLeft = 0UL;
    iRght = maxIndex;
    while (iRght - iLeft > 1UL) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1UL;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1UL] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1UL;
    frac = (u0 - bp0[maxIndex - 1UL]) / (bp0[maxIndex] - bp0[maxIndex - 1UL]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1UL] - table[iLeft]) * frac + table[iLeft];
}

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
  eventFlags[2] = ((boolean_T)rtmStepTask(SortierAlgorithmusEchtSystem_M, 2));
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

  /* tid 1 shares data with slower tid rate: 2 */
  if (SortierAlgorithmusEchtSystem_M->Timing.TaskCounters.TID[1] == 0) {
    SortierAlgorithmusEchtSystem_M->Timing.RateInteraction.TID1_2 =
      (SortierAlgorithmusEchtSystem_M->Timing.TaskCounters.TID[2] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (SortierAlgorithmusEchtSystem_M->Timing.TaskCounters.TID[1])++;
  if ((SortierAlgorithmusEchtSystem_M->Timing.TaskCounters.TID[1]) > 499) {/* Sample time: [0.01s, 0.0s] */
    SortierAlgorithmusEchtSystem_M->Timing.TaskCounters.TID[1] = 0;
  }

  (SortierAlgorithmusEchtSystem_M->Timing.TaskCounters.TID[2])++;
  if ((SortierAlgorithmusEchtSystem_M->Timing.TaskCounters.TID[2]) > 4999) {/* Sample time: [0.1s, 0.0s] */
    SortierAlgorithmusEchtSystem_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/*
 * System initialize for enable system:
 *    '<S12>/NEGATIVE Edge'
 *    '<S13>/NEGATIVE Edge'
 */
void SortierAl_NEGATIVEEdge_Init(boolean_T *rty_OUT,
  P_NEGATIVEEdge_SortierAlgorit_T *localP)
{
  /* SystemInitialize for Outport: '<S17>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S12>/NEGATIVE Edge'
 *    '<S13>/NEGATIVE Edge'
 */
void SortierAlgorit_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, boolean_T *rty_OUT)
{
  /* Outputs for Enabled SubSystem: '<S12>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S17>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S17>/Relational Operator1' */
    *rty_OUT = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S12>/NEGATIVE Edge' */
}

/*
 * System initialize for enable system:
 *    '<S12>/POSITIVE Edge'
 *    '<S13>/POSITIVE Edge'
 */
void SortierAl_POSITIVEEdge_Init(boolean_T *rty_OUT,
  P_POSITIVEEdge_SortierAlgorit_T *localP)
{
  /* SystemInitialize for Outport: '<S18>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S12>/POSITIVE Edge'
 *    '<S13>/POSITIVE Edge'
 */
void SortierAlgorit_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, boolean_T *rty_OUT)
{
  /* Outputs for Enabled SubSystem: '<S12>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S18>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S18>/Relational Operator1' */
    *rty_OUT = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S12>/POSITIVE Edge' */
}

/*
 * Output and update for atomic system:
 *    '<S11>/MATLAB Function1'
 *    '<S11>/MATLAB Function3'
 */
void SortierAlgo_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt, real32_T
  *rty_y)
{
  *rty_y = rtu_yalt + (real32_T)rtu_u;
}

/* Function for Chart: '<Root>/Sortieralgorithmus2' */
static real_T SortierAlgorit_findPlaceForBlue(void)
{
  real_T magacinOut;
  if (SortierAlgorithmusEchtSystem_DW.magacin0 == 4.0) {
    magacinOut = 0.0;
    SortierAlgorithmusEchtSystem_DW.magacin0++;
  } else if ((SortierAlgorithmusEchtSystem_DW.magacin2 == 0.0) ||
             ((SortierAlgorithmusEchtSystem_DW.magacin2_LastCube == 2.0) &&
              (SortierAlgorithmusEchtSystem_DW.magacin2 < 5.0))) {
    magacinOut = 2.0;
    SortierAlgorithmusEchtSystem_DW.magacin2++;
    SortierAlgorithmusEchtSystem_DW.magacin2_LastCube = 1.0;
  } else if ((SortierAlgorithmusEchtSystem_DW.magacin1_LastCube == 2.0) &&
             (SortierAlgorithmusEchtSystem_DW.magacin1 < 5.0)) {
    magacinOut = 1.0;
    SortierAlgorithmusEchtSystem_DW.magacin1++;
    SortierAlgorithmusEchtSystem_DW.magacin1_LastCube = 1.0;
  } else if (SortierAlgorithmusEchtSystem_DW.magacin3 < 5.0) {
    magacinOut = 3.0;
    SortierAlgorithmusEchtSystem_DW.magacin3++;
  } else if (SortierAlgorithmusEchtSystem_DW.magacin4 < 5.0) {
    magacinOut = 4.0;
    SortierAlgorithmusEchtSystem_DW.magacin4++;
  } else if (SortierAlgorithmusEchtSystem_DW.magacin5 < 5.0) {
    magacinOut = 5.0;
    SortierAlgorithmusEchtSystem_DW.magacin5++;
  } else if (SortierAlgorithmusEchtSystem_DW.magacin6 < 4.0) {
    magacinOut = 6.0;
  } else {
    magacinOut = -1.0;
  }

  return magacinOut;
}

/* Function for Chart: '<Root>/Sortieralgorithmus2' */
static real_T SortierAlgorith_findPlaceForRed(void)
{
  real_T magacinOut;
  if ((SortierAlgorithmusEchtSystem_DW.magacin1 == 0.0) ||
      ((SortierAlgorithmusEchtSystem_DW.magacin1_LastCube == 1.0) &&
       (SortierAlgorithmusEchtSystem_DW.magacin1 < 5.0))) {
    magacinOut = 1.0;
    SortierAlgorithmusEchtSystem_DW.magacin1++;
    SortierAlgorithmusEchtSystem_DW.magacin1_LastCube = 2.0;
  } else if ((SortierAlgorithmusEchtSystem_DW.magacin2_LastCube == 1.0) &&
             (SortierAlgorithmusEchtSystem_DW.magacin2 < 5.0)) {
    magacinOut = 2.0;
    SortierAlgorithmusEchtSystem_DW.magacin2++;
    SortierAlgorithmusEchtSystem_DW.magacin2_LastCube = 2.0;
  } else if (SortierAlgorithmusEchtSystem_DW.magacin0 != 5.0) {
    magacinOut = 0.0;
    SortierAlgorithmusEchtSystem_DW.magacin0++;
  } else if (SortierAlgorithmusEchtSystem_DW.magacin6 < 4.0) {
    magacinOut = 6.0;
  } else if (SortierAlgorithmusEchtSystem_DW.magacin3 != 5.0) {
    magacinOut = 3.0;
    SortierAlgorithmusEchtSystem_DW.magacin3++;
  } else if ((SortierAlgorithmusEchtSystem_DW.magacin1 <=
              SortierAlgorithmusEchtSystem_DW.magacin4) &&
             (SortierAlgorithmusEchtSystem_DW.magacin1 != 5.0)) {
    magacinOut = 1.0;
    SortierAlgorithmusEchtSystem_DW.magacin1++;
    SortierAlgorithmusEchtSystem_DW.magacin1_LastCube = 2.0;
  } else if (SortierAlgorithmusEchtSystem_DW.magacin1 >
             SortierAlgorithmusEchtSystem_DW.magacin4) {
    magacinOut = 4.0;
    SortierAlgorithmusEchtSystem_DW.magacin4++;
  } else if ((SortierAlgorithmusEchtSystem_DW.magacin2 <=
              SortierAlgorithmusEchtSystem_DW.magacin5) &&
             (SortierAlgorithmusEchtSystem_DW.magacin2 != 5.0)) {
    magacinOut = 2.0;
    SortierAlgorithmusEchtSystem_DW.magacin2++;
    SortierAlgorithmusEchtSystem_DW.magacin2_LastCube = 2.0;
  } else if (SortierAlgorithmusEchtSystem_DW.magacin2 >
             SortierAlgorithmusEchtSystem_DW.magacin5) {
    magacinOut = 5.0;
    SortierAlgorithmusEchtSystem_DW.magacin5++;
  } else {
    magacinOut = -1.0;
  }

  return magacinOut;
}

static void SortierAlgor_SystemCore_release(dsp_simulink_MovingAverage_So_T *obj)
{
  dsp_private_ExponentialMoving_T *obj_0;
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj_0 = obj->pStatistic;
    if (obj_0->isInitialized == 1L) {
      obj_0->isInitialized = 2L;
    }

    obj->NumChannels = -1L;
  }
}

static void SortierAlgori_SystemCore_delete(dsp_simulink_MovingAverage_So_T *obj)
{
  SortierAlgor_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingAverage_So_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SortierAlgori_SystemCore_delete(obj);
  }
}

/* Model step function for TID0 */
void SortierAlgorithmusEchtSystem_step0(void) /* Sample time: [2.0E-5s, 0.0s] */
{
  boolean_T rtb_VergleichmitSchwellwert;
  boolean_T rtb_VergleichmitSchwellwert_l;
  real_T rtb_MultiportSwitch_i_idx_0;
  real_T rtb_MultiportSwitch_i_idx_1;
  real_T rtb_MultiportSwitch_idx_0;
  real_T rtb_MultiportSwitch_idx_1;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_1;

  {                                    /* Sample time: [2.0E-5s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* MultiPortSwitch: '<S12>/Multiport Switch' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Constant: '<S12>/either edge'
   *  Constant: '<S12>/neg. edge'
   *  Constant: '<S12>/pos. edge'
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

  /* End of MultiPortSwitch: '<S12>/Multiport Switch' */

  /* MultiPortSwitch: '<S13>/Multiport Switch' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Constant: '<S13>/either edge'
   *  Constant: '<S13>/neg. edge'
   *  Constant: '<S13>/pos. edge'
   */
  switch ((int16_T)SortierAlgorithmusEchtSystem_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_i_idx_0 =
      SortierAlgorithmusEchtSystem_P.posedge_Value_h[0];
    rtb_MultiportSwitch_i_idx_1 =
      SortierAlgorithmusEchtSystem_P.posedge_Value_h[1];
    break;

   case 2:
    rtb_MultiportSwitch_i_idx_0 =
      SortierAlgorithmusEchtSystem_P.negedge_Value_g[0];
    rtb_MultiportSwitch_i_idx_1 =
      SortierAlgorithmusEchtSystem_P.negedge_Value_g[1];
    break;

   default:
    rtb_MultiportSwitch_i_idx_0 =
      SortierAlgorithmusEchtSystem_P.eitheredge_Value_h[0];
    rtb_MultiportSwitch_i_idx_1 =
      SortierAlgorithmusEchtSystem_P.eitheredge_Value_h[1];
    break;
  }

  /* End of MultiPortSwitch: '<S13>/Multiport Switch' */

  /* S-Function (c280xadc): '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  {
    AdcRegs.ADCTRL2.bit.RST_SEQ1 = 1;  /* Reset SEQ1 module*/
    AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;/*clear INT sequencer*/
    AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;  /* Software Trigger*/
    while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {
    }                                  /*Wait for Sequencer INT bit to clear */

    asm(" RPT #11 || NOP");
    SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampletime =
      (AdcRegs.ADCRESULT0) >> 4;
    SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_m =
      (AdcRegs.ADCRESULT1) >> 4;
    SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_h =
      (AdcRegs.ADCRESULT2) >> 4;
  }

  /* RelationalOperator: '<S11>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S11>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert =
    (SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampletime <=
     SortierAlgorithmusEchtSystem_P.HeuristischermittelterSchwellwe);

  /* Outputs for Enabled SubSystem: '<S13>/POSITIVE Edge' */
  /* Memory: '<S13>/Memory' */
  SortierAlgorit_POSITIVEEdge(rtb_MultiportSwitch_i_idx_0,
    rtb_VergleichmitSchwellwert,
    SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput,
    &SortierAlgorithmusEchtSystem_B.RelationalOperator1);

  /* End of Outputs for SubSystem: '<S13>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S13>/NEGATIVE Edge' */
  SortierAlgorit_NEGATIVEEdge(rtb_MultiportSwitch_i_idx_1,
    rtb_VergleichmitSchwellwert,
    SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput,
    &SortierAlgorithmusEchtSystem_B.RelationalOperator1_k);

  /* End of Outputs for SubSystem: '<S13>/NEGATIVE Edge' */

  /* RelationalOperator: '<S11>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S11>/Constant'
   */
  rtb_VergleichmitSchwellwert_l = (SortierAlgorithmusEchtSystem_P.Constant_Value
    <= SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_h);

  /* MATLAB Function: '<S11>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S11>/Unit Delay3'
   *  UnitDelay: '<S11>/Unit Delay4'
   *  UnitDelay: '<S11>/Unit Delay5'
   */
  rtb_MultiportSwitch_i_idx_0 = 1.0;
  tmp_0 = !SortierAlgorithmusEchtSystem_DW.UnitDelay3_DSTATE;
  tmp_1 = !SortierAlgorithmusEchtSystem_DW.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert_l) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_i_idx_0 =
      SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert_l) && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_i_idx_0 = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert_l && (!rtb_VergleichmitSchwellwert)) {
    rtb_MultiportSwitch_i_idx_0 = -1.0;
  }

  tmp_0 = (tmp_0 && SortierAlgorithmusEchtSystem_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_l) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_i_idx_0 = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert_l) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_i_idx_0 =
      SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_l && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_i_idx_0 = 1.0;
  }

  tmp_0 = (SortierAlgorithmusEchtSystem_DW.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_l) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_i_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_l && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_i_idx_0 =
      SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_l && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_i_idx_0 = -1.0;
  }

  tmp_0 = (SortierAlgorithmusEchtSystem_DW.UnitDelay3_DSTATE &&
           SortierAlgorithmusEchtSystem_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_l) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_i_idx_0 = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_l && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_i_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_l && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_i_idx_0 =
      SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE;
  }

  SortierAlgorithmusEchtSystem_B.RL = (rtb_MultiportSwitch_i_idx_0 == 1.0);
  SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE =
    rtb_MultiportSwitch_i_idx_0;

  /* End of MATLAB Function: '<S11>/MATLAB Function2' */

  /* MATLAB Function: '<S11>/MATLAB Function3' incorporates:
   *  Logic: '<S13>/Logical Operator1'
   *  Product: '<S11>/Product'
   *  UnitDelay: '<S11>/Unit Delay2'
   *  UnitDelay: '<S11>/Unit Delay5'
   */
  SortierAlgo_MATLABFunction1(SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE *
    (real_T)(SortierAlgorithmusEchtSystem_B.RelationalOperator1 ||
             SortierAlgorithmusEchtSystem_B.RelationalOperator1_k),
    SortierAlgorithmusEchtSystem_DW.UnitDelay2_DSTATE,
    &SortierAlgorithmusEchtSystem_DW.UnitDelay2_DSTATE);

  /* Outputs for Enabled SubSystem: '<S12>/POSITIVE Edge' */
  /* Memory: '<S12>/Memory' */
  SortierAlgorit_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_l,
    SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput_d,
    &SortierAlgorithmusEchtSystem_B.RelationalOperator1_p);

  /* End of Outputs for SubSystem: '<S12>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S12>/NEGATIVE Edge' */
  SortierAlgorit_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_l,
    SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput_d,
    &SortierAlgorithmusEchtSystem_B.RelationalOperator1_b);

  /* End of Outputs for SubSystem: '<S12>/NEGATIVE Edge' */

  /* MATLAB Function: '<S11>/MATLAB Function1' incorporates:
   *  Logic: '<S12>/Logical Operator1'
   *  Product: '<S11>/Product3'
   *  UnitDelay: '<S11>/Unit Delay1'
   *  UnitDelay: '<S11>/Unit Delay5'
   */
  SortierAlgo_MATLABFunction1((real_T)
    (SortierAlgorithmusEchtSystem_B.RelationalOperator1_p ||
     SortierAlgorithmusEchtSystem_B.RelationalOperator1_b) *
    SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE,
    SortierAlgorithmusEchtSystem_DW.UnitDelay1_DSTATE,
    &SortierAlgorithmusEchtSystem_DW.UnitDelay1_DSTATE);

  /* Product: '<S11>/Product1' incorporates:
   *  Constant: '<S11>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   *  UnitDelay: '<S11>/Unit Delay1'
   */
  rtb_MultiportSwitch_idx_0 =
    SortierAlgorithmusEchtSystem_P.WinkelFlankePolulo3416V022Pol_a *
    SortierAlgorithmusEchtSystem_DW.UnitDelay1_DSTATE;

  /* Sum: '<S11>/Sum' incorporates:
   *  Constant: '<S11>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S11>/Product2'
   *  UnitDelay: '<S11>/Unit Delay2'
   */
  rtb_MultiportSwitch_idx_0 += SortierAlgorithmusEchtSystem_DW.UnitDelay2_DSTATE
    * SortierAlgorithmusEchtSystem_P.WinkelFlankePolulo3416V022Polul;

  /* RateTransition: '<S7>/Rate Transition3' */
  if (SortierAlgorithmusEchtSystem_M->Timing.RateInteraction.TID0_1) {
    SortierAlgorithmusEchtSystem_B.RateTransition3 = rtb_MultiportSwitch_idx_0;

    /* RateTransition: '<Root>/Rate Transition3' */
    SortierAlgorithmusEchtSystem_B.RateTransition3_g =
      SortierAlgorithmusEchtSystem_B.AnalogDigitalWandlungSampleti_m;
  }

  /* End of RateTransition: '<S7>/Rate Transition3' */

  /* S-Function (c280xgpio_do): '<S7>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (SortierAlgorithmusEchtSystem_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Update for Memory: '<S13>/Memory' */
  SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput =
    rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S11>/Unit Delay3' */
  SortierAlgorithmusEchtSystem_DW.UnitDelay3_DSTATE =
    rtb_VergleichmitSchwellwert_l;

  /* Update for UnitDelay: '<S11>/Unit Delay4' */
  SortierAlgorithmusEchtSystem_DW.UnitDelay4_DSTATE =
    rtb_VergleichmitSchwellwert;

  /* Update for Memory: '<S12>/Memory' */
  SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput_d =
    rtb_VergleichmitSchwellwert_l;
}

/* Model step function for TID1 */
void SortierAlgorithmusEchtSystem_step1(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_y_o;
  boolean_T flag;
  real_T pmLocal;
  real_T lambda;
  real_T rtb_uDLookupTable2;

  /* RateTransition: '<Root>/TmpRTBAtSortieralgorithmus2Inport3' */
  if (SortierAlgorithmusEchtSystem_M->Timing.RateInteraction.TID1_2) {
    SortierAlgorithmusEchtSystem_B.TmpRTBAtSortieralgorithmus2Inpo =
      SortierAlgorithmusEchtSystem_DW.TmpRTBAtSortieralgorithmus2Inpo;
  }

  /* End of RateTransition: '<Root>/TmpRTBAtSortieralgorithmus2Inport3' */

  /* MATLABSystem: '<Root>/Moving Average2' */
  if (SortierAlgorithmusEchtSystem_DW.obj.ForgettingFactor !=
      SortierAlgorithmusEchtSystem_P.MovingAverage2_ForgettingFactor) {
    if (SortierAlgorithmusEchtSystem_DW.obj.isInitialized == 1L) {
      SortierAlgorithmusEchtSystem_DW.obj.TunablePropsChanged = true;
    }

    SortierAlgorithmusEchtSystem_DW.obj.ForgettingFactor =
      SortierAlgorithmusEchtSystem_P.MovingAverage2_ForgettingFactor;
  }

  if (SortierAlgorithmusEchtSystem_DW.obj.TunablePropsChanged) {
    SortierAlgorithmusEchtSystem_DW.obj.TunablePropsChanged = false;
    flag = (SortierAlgorithmusEchtSystem_DW.obj.pStatistic->isInitialized == 1L);
    if (flag) {
      SortierAlgorithmusEchtSystem_DW.obj.pStatistic->TunablePropsChanged = true;
    }

    SortierAlgorithmusEchtSystem_DW.obj.pStatistic->ForgettingFactor =
      SortierAlgorithmusEchtSystem_DW.obj.ForgettingFactor;
  }

  if (SortierAlgorithmusEchtSystem_DW.obj.pStatistic->isInitialized != 1L) {
    SortierAlgorithmusEchtSystem_DW.obj.pStatistic->isSetupComplete = false;
    SortierAlgorithmusEchtSystem_DW.obj.pStatistic->isInitialized = 1L;
    SortierAlgorithmusEchtSystem_DW.obj.pStatistic->pwN = 1.0;
    SortierAlgorithmusEchtSystem_DW.obj.pStatistic->pmN = 0.0;
    SortierAlgorithmusEchtSystem_DW.obj.pStatistic->plambda =
      SortierAlgorithmusEchtSystem_DW.obj.pStatistic->ForgettingFactor;
    SortierAlgorithmusEchtSystem_DW.obj.pStatistic->isSetupComplete = true;
    SortierAlgorithmusEchtSystem_DW.obj.pStatistic->TunablePropsChanged = false;
    SortierAlgorithmusEchtSystem_DW.obj.pStatistic->pwN = 1.0;
    SortierAlgorithmusEchtSystem_DW.obj.pStatistic->pmN = 0.0;
  }

  if (SortierAlgorithmusEchtSystem_DW.obj.pStatistic->TunablePropsChanged) {
    SortierAlgorithmusEchtSystem_DW.obj.pStatistic->TunablePropsChanged = false;
    SortierAlgorithmusEchtSystem_DW.obj.pStatistic->plambda =
      SortierAlgorithmusEchtSystem_DW.obj.pStatistic->ForgettingFactor;
  }

  rtb_uDLookupTable2 = SortierAlgorithmusEchtSystem_DW.obj.pStatistic->pwN;
  pmLocal = SortierAlgorithmusEchtSystem_DW.obj.pStatistic->pmN;
  lambda = SortierAlgorithmusEchtSystem_DW.obj.pStatistic->plambda;
  SortierAlgorithmusEchtSystem_B.MovingAverage2 = (1.0 - 1.0 /
    rtb_uDLookupTable2) * pmLocal + 1.0 / rtb_uDLookupTable2 *
    SortierAlgorithmusEchtSystem_B.RateTransition3_g;
  SortierAlgorithmusEchtSystem_DW.obj.pStatistic->pwN = lambda *
    rtb_uDLookupTable2 + 1.0;
  SortierAlgorithmusEchtSystem_DW.obj.pStatistic->pmN =
    SortierAlgorithmusEchtSystem_B.MovingAverage2;

  /* End of MATLABSystem: '<Root>/Moving Average2' */

  /* Chart: '<Root>/Sortieralgorithmus2' incorporates:
   *  UnitDelay: '<Root>/Unit Delay2'
   */
  if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 < 255U) {
    SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = ((int16_T)
      SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 + 1) & 255U;
  }

  if (SortierAlgorithmusEchtSystem_DW.is_active_c42_SortierAlgorithmu == 0U) {
    SortierAlgorithmusEchtSystem_DW.is_active_c42_SortierAlgorithmu = 1U;
    SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy =
      SortierAlgorit_IN_setupVariable;
    SortierAlgorithmusEchtSystem_DW.magacin0 = 0.0;
    SortierAlgorithmusEchtSystem_DW.magacin1 = 0.0;
    SortierAlgorithmusEchtSystem_DW.magacin2 = 0.0;
    SortierAlgorithmusEchtSystem_DW.magacin3 = 0.0;
    SortierAlgorithmusEchtSystem_DW.magacin4 = 0.0;
    SortierAlgorithmusEchtSystem_DW.magacin5 = 0.0;
    SortierAlgorithmusEchtSystem_DW.magacin6 = 0.0;
    SortierAlgorithmusEchtSystem_DW.magacin1_LastCube = 0.0;
    SortierAlgorithmusEchtSystem_DW.magacin2_LastCube = 0.0;
    SortierAlgorithmusEchtSystem_B.magacin = -1.0;
    SortierAlgorithmusEchtSystem_DW.cubeCounter = 0.0;
    SortierAlgorithmusEchtSystem_B.signal = 0.0;
    SortierAlgorithmusEchtSystem_B.lampeSortier = 0.0;
    SortierAlgorithmusEchtSystem_B.lampeCubeLoaded = 0.0;
  } else {
    switch (SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy) {
     case SortierAlgorithmusEcht_IN_Black:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 >= 100U) {
        SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy =
          SortierAlgorith_IN_DetectedCube;
        SortierAlgorithmusEchtSystem_DW.cubeCounter++;
      } else {
        SortierAlgorithmusEchtSystem_B.magacin = 6.0;
      }
      break;

     case SortierAlgorithmusE_IN_BlueCube:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 >= 100U) {
        SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy =
          SortierAlgorith_IN_DetectedCube;
        SortierAlgorithmusEchtSystem_DW.cubeCounter++;
      }
      break;

     case SortierAlgorith_IN_DetectedCube:
      if (SortierAlgorithmusEchtSystem_DW.UnitDelay2_DSTATE_j == 0.0F) {
        SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy =
          SortierAlgorithmu_IN_cubeLoaded;
        SortierAlgorithmusEchtSystem_B.magacin = -1.0;
        SortierAlgorithmusEchtSystem_B.lampeCubeLoaded = 1.0;
      }
      break;

     case SortierAlgorithmusEc_IN_RedCube:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 >= 100U) {
        SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy =
          SortierAlgorith_IN_DetectedCube;
        SortierAlgorithmusEchtSystem_DW.cubeCounter++;
      }
      break;

     case SortierAlgorithmu_IN_cubeLoaded:
      if ((SortierAlgorithmusEchtSystem_B.MovingAverage2 < 400.0) ||
          (SortierAlgorithmusEchtSystem_B.MovingAverage2 > 1300.0) ||
          (SortierAlgorithmusEchtSystem_B.TmpRTBAtSortieralgorithmus2Inpo > 0.0F))
      {
        SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy =
          IN_photoelectricBarrierActivate;
        SortierAlgorithmusEchtSystem_B.lampeCubeLoaded = 0.0;
      } else {
        SortierAlgorithmusEchtSystem_B.magacin = -1.0;
      }
      break;

     case IN_photoelectricBarrierActivate:
      if (SortierAlgorithmusEchtSystem_B.MovingAverage2 > 2150.0) {
        SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy =
          SortierAlgorithmusEcht_IN_Black;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0U;
        SortierAlgorithmusEchtSystem_B.magacin = 6.0;
        SortierAlgorithmusEchtSystem_DW.magacin6++;
      } else if (SortierAlgorithmusEchtSystem_B.MovingAverage2 < 1000.0) {
        SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy =
          SortierAlgorithmusEc_IN_RedCube;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0U;
        SortierAlgorithmusEchtSystem_B.magacin = SortierAlgorith_findPlaceForRed
          ();
      } else {
        if ((SortierAlgorithmusEchtSystem_B.MovingAverage2 >= 1000.0) &&
            (SortierAlgorithmusEchtSystem_B.MovingAverage2 <= 2150.0)) {
          SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy =
            SortierAlgorithmusE_IN_BlueCube;
          SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0U;
          SortierAlgorithmusEchtSystem_B.magacin =
            SortierAlgorit_findPlaceForBlue();
        }
      }
      break;

     case SortierAlgorit_IN_setupVariable:
      if (SortierAlgorithmusEchtSystem_B.TmpRTBAtSortieralgorithmus2Inpo > 0.0F)
      {
        SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy =
          SortierAlgorithmusE_IN_wait_boy;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0U;
      } else {
        SortierAlgorithmusEchtSystem_DW.magacin0 = 0.0;
        SortierAlgorithmusEchtSystem_DW.magacin1 = 0.0;
        SortierAlgorithmusEchtSystem_DW.magacin2 = 0.0;
        SortierAlgorithmusEchtSystem_DW.magacin3 = 0.0;
        SortierAlgorithmusEchtSystem_DW.magacin4 = 0.0;
        SortierAlgorithmusEchtSystem_DW.magacin5 = 0.0;
        SortierAlgorithmusEchtSystem_DW.magacin6 = 0.0;
        SortierAlgorithmusEchtSystem_DW.magacin1_LastCube = 0.0;
        SortierAlgorithmusEchtSystem_DW.magacin2_LastCube = 0.0;
        SortierAlgorithmusEchtSystem_B.magacin = -1.0;
        SortierAlgorithmusEchtSystem_DW.cubeCounter = 0.0;
        SortierAlgorithmusEchtSystem_B.signal = 0.0;
        SortierAlgorithmusEchtSystem_B.lampeSortier = 0.0;
        SortierAlgorithmusEchtSystem_B.lampeCubeLoaded = 0.0;
      }
      break;

     default:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 >= 200U) {
        SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy =
          SortierAlgorithmu_IN_cubeLoaded;
        SortierAlgorithmusEchtSystem_B.magacin = -1.0;
        SortierAlgorithmusEchtSystem_B.lampeCubeLoaded = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Sortieralgorithmus2' */

  /* S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  {
    if (SortierAlgorithmusEchtSystem_B.lampeCubeLoaded)
      GpioDataRegs.GPBSET.bit.GPIO58 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO58 = 1;
  }

  /* RateTransition: '<Root>/TmpRTBAtChart7Inport4' */
  if (SortierAlgorithmusEchtSystem_M->Timing.RateInteraction.TID1_2) {
    SortierAlgorithmusEchtSystem_B.TmpRTBAtChart7Inport4 =
      SortierAlgorithmusEchtSystem_DW.TmpRTBAtChart7Inport4_Buffer0;
  }

  /* End of RateTransition: '<Root>/TmpRTBAtChart7Inport4' */

  /* Lookup_n-D: '<Root>/1-D Lookup Table2' */
  rtb_uDLookupTable2 = look1_binlxpw(SortierAlgorithmusEchtSystem_B.magacin,
    SortierAlgorithmusEchtSystem_P.uDLookupTable2_bp01Data,
    SortierAlgorithmusEchtSystem_P.uDLookupTable2_tableData, 7UL);

  /* Chart: '<Root>/Chart7' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  UnitDelay: '<Root>/Unit Delay2'
   */
  if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d < 255U) {
    SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d = ((int16_T)
      SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d + 1) & 255U;
  }

  if (SortierAlgorithmusEchtSystem_DW.is_active_c38_SortierAlgorithmu == 0U) {
    SortierAlgorithmusEchtSystem_DW.is_active_c38_SortierAlgorithmu = 1U;
    SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
      SortierAlgorit_IN_startPosition;
    SortierAlgorithmusEchtSystem_B.angle = 0.0;
  } else {
    switch (SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy) {
     case SortierAl_IN_betterLeftPosition:
      SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
        SortierAlgorithm_IN_waitForCube;
      break;

     case SortierA_IN_betterRightPosition:
      SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
        SortierAlgorithm_IN_waitForCube;
      break;

     case SortierAlgorithmus_IN_closeGate:
      if (SortierAlgorithmusEchtSystem_DW.UnitDelay2_DSTATE_j == 0.0F) {
        SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
          SortierAlgorithm_IN_waitForCube;
      } else {
        SortierAlgorithmusEchtSystem_B.signal_o = 0.0;
      }
      break;

     case SortierAlgorit_IN_closeKlappe_b:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d >= 230U) {
        SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
          SortierAlgorithm_IN_waitForCube;
      } else {
        SortierAlgorithmusEchtSystem_B.signal_o = 0.0;
      }
      break;

     case SortierAlgorithmu_IN_firstEntry:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d >= 70U) {
        SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
          SortierAlgorit_IN_closeKlappe_b;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d = 0U;
        SortierAlgorithmusEchtSystem_B.signal_o = 0.0;
      }
      break;

     case SortierAlgorithm_IN_goToMagacin:
      if (((real32_T)SortierAlgorithmusEchtSystem_B.RateTransition3 >
           SortierAlgorithmusEchtSystem_B.angle - 2.0) && ((real32_T)
           SortierAlgorithmusEchtSystem_B.RateTransition3 <
           SortierAlgorithmusEchtSystem_B.angle + 2.0)) {
        SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
          SortierAlgorithmusE_IN_openGate;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d = 0U;
        SortierAlgorithmusEchtSystem_B.signal_o = 1.0;
        SortierAlgorithmusEchtSystem_B.movingCube = 0.0F;
      }
      break;

     case SortierAlgorithmusE_IN_goToZero:
      if (((real32_T)SortierAlgorithmusEchtSystem_B.RateTransition3 > -2.0F) &&
          ((real32_T)SortierAlgorithmusEchtSystem_B.RateTransition3 < 2.0F)) {
        SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
          SortierAlgorithmusEch_IN_wait_b;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d = 0U;
      } else {
        SortierAlgorithmusEchtSystem_B.angle = 0.0;
        SortierAlgorithmusEchtSystem_B.movingCube = 1.0F;
      }
      break;

     case SortierAlgorithmusE_IN_openGate:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d >= 50U) {
        SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
          SortierAlgorithmus_IN_closeGate;
        SortierAlgorithmusEchtSystem_B.signal_o = 0.0;
      } else {
        SortierAlgorithmusEchtSystem_B.signal_o = 1.0;
        SortierAlgorithmusEchtSystem_B.movingCube = 0.0F;
      }
      break;

     case SortierAlgorit_IN_startPosition:
      if (SortierAlgorithmusEchtSystem_B.TmpRTBAtChart7Inport4 > 0.0F) {
        SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
          SortierAlgorithmu_IN_firstEntry;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d = 0U;
        SortierAlgorithmusEchtSystem_B.angle = 300.0;
        SortierAlgorithmusEchtSystem_B.signal_o = -1.0;
      }
      break;

     case SortierAlgorithmusEch_IN_wait_b:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d >= 40U) {
        SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
          SortierAlgorithm_IN_goToMagacin;
        SortierAlgorithmusEchtSystem_B.angle = rtb_uDLookupTable2;
      }
      break;

     default:
      if (SortierAlgorithmusEchtSystem_B.angle == 85.0) {
        SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
          SortierA_IN_betterRightPosition;
        SortierAlgorithmusEchtSystem_B.angle = 220.0;
      } else if (SortierAlgorithmusEchtSystem_B.angle == -40.0) {
        SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
          SortierAl_IN_betterLeftPosition;
        SortierAlgorithmusEchtSystem_B.angle = -170.0;
      } else {
        if (rtb_uDLookupTable2 != -1.0) {
          SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
            SortierAlgorithmusE_IN_goToZero;
          SortierAlgorithmusEchtSystem_B.angle = 0.0;
          SortierAlgorithmusEchtSystem_B.movingCube = 1.0F;
        }
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart7' */

  /* Sum: '<S8>/Sum' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   */
  rtb_uDLookupTable2 = SortierAlgorithmusEchtSystem_B.angle - (real32_T)
    SortierAlgorithmusEchtSystem_B.RateTransition3;

  /* DeadZone: '<S8>/Dead Zone' */
  if (rtb_uDLookupTable2 > SortierAlgorithmusEchtSystem_P.DeadZone_End) {
    rtb_uDLookupTable2 -= SortierAlgorithmusEchtSystem_P.DeadZone_End;
  } else if (rtb_uDLookupTable2 >= SortierAlgorithmusEchtSystem_P.DeadZone_Start)
  {
    rtb_uDLookupTable2 = 0.0;
  } else {
    rtb_uDLookupTable2 -= SortierAlgorithmusEchtSystem_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S8>/Dead Zone' */

  /* Gain: '<S8>/Verstaerkung' */
  rtb_uDLookupTable2 *= SortierAlgorithmusEchtSystem_P.Verstaerkung_Gain;

  /* MATLAB Function: '<S8>/Richtung' */
  SortierAlgorithmusEchtSystem_B.y = (rtb_uDLookupTable2 > 0.0);

  /* S-Function (c280xgpio_do): '<S4>/Drehrichtungsvorgabe für einen Motor' */
  {
    if (SortierAlgorithmusEchtSystem_B.y)
      GpioDataRegs.GPASET.bit.GPIO19 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO19 = 1;
  }

  /* Abs: '<S8>/Abs' */
  rtb_y_o = fabs(rtb_uDLookupTable2);

  /* MATLAB Function: '<S8>/Betrag' */
  if ((0.5 < rtb_y_o) && (rtb_y_o < 60.0)) {
    rtb_y_o = 60.0;
  } else if (rtb_y_o <= 0.5) {
    rtb_y_o = 0.0;
  } else {
    if (rtb_y_o >= 100.0) {
      rtb_y_o = 100.0;
    }
  }

  /* End of MATLAB Function: '<S8>/Betrag' */

  /* S-Function (c280xpwm): '<S4>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM4 --*/
  {
    EPwm4Regs.CMPB = (uint16_T)((uint32_T)EPwm4Regs.TBPRD * rtb_y_o * 0.01);
  }

  /* Chart: '<Root>/Chart6' */
  if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e0 < 127U) {
    SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e0 = ((int16_T)
      SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e0 + 1) & 255U;
  }

  if (SortierAlgorithmusEchtSystem_DW.is_active_c37_SortierAlgorithmu == 0U) {
    SortierAlgorithmusEchtSystem_DW.is_active_c37_SortierAlgorithmu = 1U;
    SortierAlgorithmusEchtSystem_DW.is_c37_SortierAlgorithmusEchtSy =
      SortierAlgorithmusEchtS_IN_wait;
    SortierAlgorithmusEchtSystem_B.gateDirection_f = 0.0;
    SortierAlgorithmusEchtSystem_B.gatePWM_g = 50.0;
    SortierAlgorithmusEchtSystem_B.movingCube_g = 0.0F;
  } else {
    switch (SortierAlgorithmusEchtSystem_DW.is_c37_SortierAlgorithmusEchtSy) {
     case SortierAlgorith_IN_CloseRegular:
      SortierAlgorithmusEchtSystem_B.gatePWM_g = 100.0;
      SortierAlgorithmusEchtSystem_B.gateDirection_f = 0.0;
      break;

     case SortierAlgorithmusEcht_IN_close:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e0 >= 40U) {
        SortierAlgorithmusEchtSystem_DW.is_c37_SortierAlgorithmusEchtSy =
          SortierAlgorithmusEchtS_IN_wait;
        SortierAlgorithmusEchtSystem_B.gateDirection_f = 0.0;
        SortierAlgorithmusEchtSystem_B.gatePWM_g = 50.0;
        SortierAlgorithmusEchtSystem_B.movingCube_g = 0.0F;
      } else {
        SortierAlgorithmusEchtSystem_B.gateDirection_f = 0.0;
      }
      break;

     case SortierAlgorithm_IN_closeKlappe:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e0 >= 100U) {
        SortierAlgorithmusEchtSystem_DW.is_c37_SortierAlgorithmusEchtSy =
          SortierAlgorithmusEchtS_IN_wait;
        SortierAlgorithmusEchtSystem_B.gateDirection_f = 0.0;
        SortierAlgorithmusEchtSystem_B.gatePWM_g = 50.0;
        SortierAlgorithmusEchtSystem_B.movingCube_g = 0.0F;
      } else {
        SortierAlgorithmusEchtSystem_B.gatePWM_g = 100.0;
        SortierAlgorithmusEchtSystem_B.gateDirection_f = 0.0;
      }
      break;

     case SortierAlgorithmusEchtS_IN_open:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e0 >= 50U) {
        SortierAlgorithmusEchtSystem_DW.is_c37_SortierAlgorithmusEchtSy =
          SortierAlgorithmusEcht_IN_close;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e0 = 0U;
        SortierAlgorithmusEchtSystem_B.gateDirection_f = 0.0;
      } else {
        SortierAlgorithmusEchtSystem_B.gateDirection_f = 1.0;
        SortierAlgorithmusEchtSystem_B.gatePWM_g = 100.0;
        SortierAlgorithmusEchtSystem_B.movingCube_g = 1.0F;
      }
      break;

     default:
      if (SortierAlgorithmusEchtSystem_B.signal_o == 1.0) {
        SortierAlgorithmusEchtSystem_DW.is_c37_SortierAlgorithmusEchtSy =
          SortierAlgorithmusEchtS_IN_open;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e0 = 0U;
        SortierAlgorithmusEchtSystem_B.gateDirection_f = 1.0;
        SortierAlgorithmusEchtSystem_B.gatePWM_g = 100.0;
        SortierAlgorithmusEchtSystem_B.movingCube_g = 1.0F;
      } else if (SortierAlgorithmusEchtSystem_B.signal_o == -1.0) {
        SortierAlgorithmusEchtSystem_DW.is_c37_SortierAlgorithmusEchtSy =
          SortierAlgorithm_IN_closeKlappe;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e0 = 0U;
        SortierAlgorithmusEchtSystem_B.gatePWM_g = 100.0;
        SortierAlgorithmusEchtSystem_B.gateDirection_f = 0.0;
      } else {
        SortierAlgorithmusEchtSystem_B.gateDirection_f = 0.0;
        SortierAlgorithmusEchtSystem_B.gatePWM_g = 50.0;
        SortierAlgorithmusEchtSystem_B.movingCube_g = 0.0F;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart6' */

  /* S-Function (c280xpwm): '<S6>/PWM Vorgabe für einen Motor 1' */

  /*-- Update CMPB value for ePWM6 --*/
  {
    EPwm6Regs.CMPB = (uint16_T)((uint32_T)EPwm6Regs.TBPRD *
      SortierAlgorithmusEchtSystem_B.gatePWM_g * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S6>/Drehrichtungsvorgabe für einen Motor1' */
  {
    if (SortierAlgorithmusEchtSystem_B.gateDirection_f)
      GpioDataRegs.GPASET.bit.GPIO16 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO16 = 1;
  }

  /* Sum: '<Root>/Sum2' incorporates:
   *  UnitDelay: '<Root>/Unit Delay2'
   */
  SortierAlgorithmusEchtSystem_DW.UnitDelay2_DSTATE_j =
    SortierAlgorithmusEchtSystem_B.movingCube +
    SortierAlgorithmusEchtSystem_B.movingCube_g;
}

/* Model step function for TID2 */
void SortierAlgorithmusEchtSystem_step2(void) /* Sample time: [0.1s, 0.0s] */
{
  /* S-Function (c280xgpio_di): '<Root>/Digital Input2' */
  {
    SortierAlgorithmusEchtSystem_B.DigitalInput2 =
      GpioDataRegs.GPADAT.bit.GPIO24;
  }

  /* Chart: '<Root>/Chart8' */
  if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e < 31U) {
    SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e = ((int16_T)
      SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e + 1) & 255U;
  }

  if (SortierAlgorithmusEchtSystem_DW.is_active_c39_SortierAlgorithmu == 0U) {
    SortierAlgorithmusEchtSystem_DW.is_active_c39_SortierAlgorithmu = 1U;
    SortierAlgorithmusEchtSystem_DW.is_c39_SortierAlgorithmusEchtSy =
      SortierAlgorithmusEcht_IN_entry;
    SortierAlgorithmusEchtSystem_DW.tasterCounter = 0.0;
    SortierAlgorithmusEchtSystem_B.panzerMotor = 0.0;
    SortierAlgorithmusEchtSystem_B.lampe = 0.0;
  } else {
    switch (SortierAlgorithmusEchtSystem_DW.is_c39_SortierAlgorithmusEchtSy) {
     case SortierAlgorithmusEcht_IN_Lampe:
      SortierAlgorithmusEchtSystem_B.lampe = 1.0;
      break;

     case SortierAlgorithmu_IN_Stillstand:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e >= 10U) {
        SortierAlgorithmusEchtSystem_DW.is_c39_SortierAlgorithmusEchtSy =
          SortierAlgorithmusEcht_IN_Lampe;
        SortierAlgorithmusEchtSystem_B.lampe = 1.0;
      } else {
        SortierAlgorithmusEchtSystem_B.gatePWM = 0.0;
      }
      break;

     case SortierAlgorithmusEchtSy_IN_end:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e >= 5U) {
        SortierAlgorithmusEchtSystem_DW.is_c39_SortierAlgorithmusEchtSy =
          SortierAlgorithmu_IN_Stillstand;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e = 0U;
        SortierAlgorithmusEchtSystem_B.gatePWM = 0.0;
      } else {
        SortierAlgorithmusEchtSystem_B.gatePWM = 100.0;
        SortierAlgorithmusEchtSystem_B.gateDirection = 1.0;
        SortierAlgorithmusEchtSystem_B.panzerMotor = 0.0;
      }
      break;

     case SortierAlgorithmusEcht_IN_entry:
      SortierAlgorithmusEchtSystem_DW.is_c39_SortierAlgorithmusEchtSy =
        SortierAlgorithmusEc_IN_wait_bo;
      SortierAlgorithmusEchtSystem_B.gatePWM = 0.0;
      SortierAlgorithmusEchtSystem_B.gateDirection = 0.0;
      break;

     case SortierAlgorithmusEch_IN_open_b:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e >= 5U) {
        SortierAlgorithmusEchtSystem_DW.is_c39_SortierAlgorithmusEchtSy =
          SortierAlgorithmusEcht_IN_wait1;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e = 0U;
        SortierAlgorithmusEchtSystem_B.gatePWM = 0.0;
      }
      break;

     case SortierAlgorithmusEc_IN_wait_bo:
      if ((SortierAlgorithmusEchtSystem_B.DigitalInput2 > 0.0F) &&
          (SortierAlgorithmusEchtSystem_DW.tasterCounter >= 1.0)) {
        SortierAlgorithmusEchtSystem_DW.is_c39_SortierAlgorithmusEchtSy =
          SortierAlgorithmusEchtSy_IN_end;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e = 0U;
        SortierAlgorithmusEchtSystem_B.gatePWM = 100.0;
        SortierAlgorithmusEchtSystem_B.gateDirection = 1.0;
        SortierAlgorithmusEchtSystem_B.panzerMotor = 0.0;
      } else if ((SortierAlgorithmusEchtSystem_B.DigitalInput2 > 0.0F) &&
                 (SortierAlgorithmusEchtSystem_DW.tasterCounter == 0.0)) {
        SortierAlgorithmusEchtSystem_DW.is_c39_SortierAlgorithmusEchtSy =
          SortierAlgorithmusEch_IN_open_b;
        SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e = 0U;
        SortierAlgorithmusEchtSystem_DW.tasterCounter++;
        SortierAlgorithmusEchtSystem_B.gatePWM = 100.0;
        SortierAlgorithmusEchtSystem_B.gateDirection = 0.0;
        SortierAlgorithmusEchtSystem_B.panzerMotor = 1.0;
      } else {
        SortierAlgorithmusEchtSystem_B.gatePWM = 0.0;
        SortierAlgorithmusEchtSystem_B.gateDirection = 0.0;
      }
      break;

     default:
      if (SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e >= 20U) {
        SortierAlgorithmusEchtSystem_DW.is_c39_SortierAlgorithmusEchtSy =
          SortierAlgorithmusEc_IN_wait_bo;
        SortierAlgorithmusEchtSystem_B.gatePWM = 0.0;
        SortierAlgorithmusEchtSystem_B.gateDirection = 0.0;
      } else {
        SortierAlgorithmusEchtSystem_B.gatePWM = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart8' */

  /* S-Function (c280xgpio_do): '<Root>/Drehrichtungsvorgabe für einen Motor3' */
  {
    if (SortierAlgorithmusEchtSystem_B.gateDirection)
      GpioDataRegs.GPASET.bit.GPIO15 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO15 = 1;
  }

  /* S-Function (c280xpwm): '<Root>/ePWM2' */

  /*-- Update CMPB value for ePWM5 --*/
  {
    EPwm5Regs.CMPB = (uint16_T)((uint32_T)EPwm5Regs.TBPRD *
      SortierAlgorithmusEchtSystem_B.gatePWM * 0.01);
  }

  /* Outport: '<Root>/Out1' */
  SortierAlgorithmusEchtSystem_Y.Out1 =
    SortierAlgorithmusEchtSystem_B.panzerMotor;

  /* Update for RateTransition: '<Root>/TmpRTBAtSortieralgorithmus2Inport3' */
  SortierAlgorithmusEchtSystem_DW.TmpRTBAtSortieralgorithmus2Inpo =
    SortierAlgorithmusEchtSystem_B.DigitalInput2;

  /* Update for RateTransition: '<Root>/TmpRTBAtChart7Inport4' */
  SortierAlgorithmusEchtSystem_DW.TmpRTBAtChart7Inport4_Buffer0 =
    SortierAlgorithmusEchtSystem_B.DigitalInput2;
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

  /* external outputs */
  SortierAlgorithmusEchtSystem_Y.Out1 = 0.0;

  {
    boolean_T flag;

    /* Machine initializer */
    SortierAlgorithmusEchtSystem_DW.magacin = 0.0;

    /* Start for S-Function (c280xgpio_di): '<Root>/Digital Input2' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFCFFFF;
    GpioCtrlRegs.GPADIR.all &= 0xFEFFFFFF;
    EDIS;

    /* Start for S-Function (c280xadc): '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
    if (adcInitFlag == 0) {
      InitAdc();
      adcInitFlag = 1;
    }

    config_ADC_A (2U, 33U, 0U, 0U, 0U);

    /* Start for RateTransition: '<Root>/TmpRTBAtSortieralgorithmus2Inport3' */
    SortierAlgorithmusEchtSystem_B.TmpRTBAtSortieralgorithmus2Inpo =
      SortierAlgorithmusEchtSystem_P.TmpRTBAtSortieralgorithmus2Inpo;

    /* Start for MATLABSystem: '<Root>/Moving Average2' */
    SortierAlgorithmusEchtSystem_DW.obj.matlabCodegenIsDeleted = true;
    SortierAlgorithmusEchtSystem_DW.obj.isInitialized = 0L;
    SortierAlgorithmusEchtSystem_DW.obj.NumChannels = -1L;
    SortierAlgorithmusEchtSystem_DW.obj.matlabCodegenIsDeleted = false;
    SortierAlgorithmusEchtSystem_DW.objisempty = true;
    if (SortierAlgorithmusEchtSystem_DW.obj.isInitialized == 1L) {
      SortierAlgorithmusEchtSystem_DW.obj.TunablePropsChanged = true;
    }

    SortierAlgorithmusEchtSystem_DW.obj.ForgettingFactor =
      SortierAlgorithmusEchtSystem_P.MovingAverage2_ForgettingFactor;
    SortierAlgorithmusEchtSystem_DW.obj.isSetupComplete = false;
    SortierAlgorithmusEchtSystem_DW.obj.isInitialized = 1L;
    SortierAlgorithmusEchtSystem_DW.obj.NumChannels = 1L;
    SortierAlgorithmusEchtSystem_DW.gobj_0.isInitialized = 0L;
    flag = (SortierAlgorithmusEchtSystem_DW.gobj_0.isInitialized == 1L);
    if (flag) {
      SortierAlgorithmusEchtSystem_DW.gobj_0.TunablePropsChanged = true;
    }

    SortierAlgorithmusEchtSystem_DW.gobj_0.ForgettingFactor =
      SortierAlgorithmusEchtSystem_DW.obj.ForgettingFactor;
    SortierAlgorithmusEchtSystem_DW.obj.pStatistic =
      &SortierAlgorithmusEchtSystem_DW.gobj_0;
    SortierAlgorithmusEchtSystem_DW.obj.isSetupComplete = true;
    SortierAlgorithmusEchtSystem_DW.obj.TunablePropsChanged = false;

    /* End of Start for MATLABSystem: '<Root>/Moving Average2' */

    /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output1' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFCFFFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x4000000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<Root>/Drehrichtungsvorgabe für einen Motor3' */
    EALLOW;
    GpioCtrlRegs.GPAMUX1.all &= 0x3FFFFFFF;
    GpioCtrlRegs.GPADIR.all |= 0x8000;
    EDIS;

    /* Start for RateTransition: '<Root>/TmpRTBAtChart7Inport4' */
    SortierAlgorithmusEchtSystem_B.TmpRTBAtChart7Inport4 =
      SortierAlgorithmusEchtSystem_P.TmpRTBAtChart7Inport4_InitialCo;

    /* Start for S-Function (c280xgpio_do): '<S4>/Drehrichtungsvorgabe für einen Motor' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFF3F;
    GpioCtrlRegs.GPADIR.all |= 0x80000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S4>/PWM Vorgabe für einen Motor ' */

    /*** Initialize ePWM4 modules ***/
    {
      /*-- Setup Time-Base (TB) Submodule --*/
      EPwm4Regs.TBPRD = 64000;

      /* // Time-Base Control Register
         EPwm4Regs.TBCTL.bit.CTRMODE    = 0;          // Counter Mode
         EPwm4Regs.TBCTL.bit.SYNCOSEL   = 3;          // Sync output select
         EPwm4Regs.TBCTL.bit.PRDLD      = 0;          // Shadow select
         EPwm4Regs.TBCTL.bit.PHSEN      = 0;          // Phase load enable
         EPwm4Regs.TBCTL.bit.PHSDIR     = 0;          // Phase Direction
         EPwm4Regs.TBCTL.bit.HSPCLKDIV  = 0;          // High speed time pre-scale
         EPwm4Regs.TBCTL.bit.CLKDIV     = 0;          // Timebase clock pre-scale
       */
      EPwm4Regs.TBCTL.all = (EPwm4Regs.TBCTL.all & ~0x3FBF) | 0x30;

      /* // Time-Base Phase Register
         EPwm4Regs.TBPHS.half.TBPHS     = 0;          // Phase offset register
       */
      EPwm4Regs.TBPHS.all = (EPwm4Regs.TBPHS.all & ~0xFFFF0000) | 0x0;
      EPwm4Regs.TBCTR = 0x0000;        /* Clear counter*/

      /*-- Setup Counter_Compare (CC) Submodule --*/
      /* // Counter-Compare Control Register
         EPwm4Regs.CMPCTL.bit.SHDWAMODE = 0;  // Compare A block operating mode.
         EPwm4Regs.CMPCTL.bit.SHDWBMODE = 0;  // Compare B block operating mode.
         EPwm4Regs.CMPCTL.bit.LOADAMODE = 0;          // Active compare A
         EPwm4Regs.CMPCTL.bit.LOADBMODE = 0;          // Active compare A
       */
      EPwm4Regs.CMPCTL.all = (EPwm4Regs.CMPCTL.all & ~0x5F) | 0x0;
      EPwm4Regs.CMPA.half.CMPA = 32000;
      EPwm4Regs.CMPB = 0;

      /*-- Setup Action-Qualifier (AQ) Submodule --*/
      EPwm4Regs.AQCTLA.all = 36;
      EPwm4Regs.AQCTLB.all = 264;

      /* // Action-Qualifier Software Force Register
         EPwm4Regs.AQSFRC.bit.RLDCSF    = 0;          // Reload from Shadow options
       */
      EPwm4Regs.AQSFRC.all = (EPwm4Regs.AQSFRC.all & ~0xC0) | 0x0;

      /* // Action-Qualifier Continuous S/W Force Register Set
         EPwm4Regs.AQCSFRC.bit.CSFA     = 0;          // Continuous Software Force on output A
         EPwm4Regs.AQCSFRC.bit.CSFB     = 0;          // Continuous Software Force on output B
       */
      EPwm4Regs.AQCSFRC.all = (EPwm4Regs.AQCSFRC.all & ~0xF) | 0x0;

      /*-- Setup Dead-Band Generator (DB) Submodule --*/
      /* // Dead-Band Generator Control Register
         EPwm4Regs.DBCTL.bit.OUT_MODE   = 0;          // Dead Band Output Mode Control
         EPwm4Regs.DBCTL.bit.IN_MODE    = 0;          // Dead Band Input Select Mode Control
         EPwm4Regs.DBCTL.bit.POLSEL     = 0;          // Polarity Select Control
       */
      EPwm4Regs.DBCTL.all = (EPwm4Regs.DBCTL.all & ~0x3F) | 0x0;
      EPwm4Regs.DBRED = 0;
      EPwm4Regs.DBFED = 0;

      /*-- Setup Event-Trigger (ET) Submodule --*/
      /* // Event-Trigger Selection and Event-Trigger Pre-Scale Register
         EPwm4Regs.ETSEL.bit.SOCAEN     = 0;          // Start of conversion A Enable
         EPwm4Regs.ETSEL.bit.SOCASEL    = 1;          // Start of conversion A Select
         EPwm4Regs.ETPS.bit.SOCAPRD     = 1;          // EPWM4SOCA Period Select
         EPwm4Regs.ETSEL.bit.SOCBEN     = 0;          // Start of conversion B Enable
         EPwm4Regs.ETSEL.bit.SOCBSEL    = 1;          // Start of conversion B Select
         EPwm4Regs.ETPS.bit.SOCBPRD     = 1;          // EPWM4SOCB Period Select
         EPwm4Regs.ETSEL.bit.INTEN      = 0;          // EPWM4INTn Enable
         EPwm4Regs.ETSEL.bit.INTSEL     = 1;          // EPWM4INTn Select
         EPwm4Regs.ETPS.bit.INTPRD      = 1;          // EPWM4INTn Period Select
       */
      EPwm4Regs.ETSEL.all = (EPwm4Regs.ETSEL.all & ~0xFF0F) | 0x1101;
      EPwm4Regs.ETPS.all = (EPwm4Regs.ETPS.all & ~0x3303) | 0x1101;

      /*-- Setup PWM-Chopper (PC) Submodule --*/
      /* // PWM-Chopper Control Register
         EPwm4Regs.PCCTL.bit.CHPEN      = 0;          // PWM chopping enable
         EPwm4Regs.PCCTL.bit.CHPFREQ    = 0;          // Chopping clock frequency
         EPwm4Regs.PCCTL.bit.OSHTWTH    = 0;          // One-shot pulse width
         EPwm4Regs.PCCTL.bit.CHPDUTY    = 0;          // Chopping clock Duty cycle
       */
      EPwm4Regs.PCCTL.all = (EPwm4Regs.PCCTL.all & ~0x7FF) | 0x0;

      /*-- Set up Trip-Zone (TZ) Submodule --*/
      EALLOW;
      EPwm4Regs.TZSEL.all = 0;

      /* // Trip-Zone Control Register
         EPwm4Regs.TZCTL.bit.TZA        = 3;          // TZ1 to TZ6 Trip Action On EPWM4A
         EPwm4Regs.TZCTL.bit.TZB        = 3;          // TZ1 to TZ6 Trip Action On EPWM4B
       */
      EPwm4Regs.TZCTL.all = (EPwm4Regs.TZCTL.all & ~0xF) | 0xF;

      /* // Trip-Zone Enable Interrupt Register
         EPwm4Regs.TZEINT.bit.OST       = 0;          // Trip Zones One Shot Int Enable
         EPwm4Regs.TZEINT.bit.CBC       = 0;          // Trip Zones Cycle By Cycle Int Enable
       */
      EPwm4Regs.TZEINT.all = (EPwm4Regs.TZEINT.all & ~0x6) | 0x0;
      EDIS;
    }

    /* Start for S-Function (c280xpwm): '<S6>/PWM Vorgabe für einen Motor 1' */

    /*** Initialize ePWM6 modules ***/
    {
      /*-- Setup Time-Base (TB) Submodule --*/
      EPwm6Regs.TBPRD = 64000;

      /* // Time-Base Control Register
         EPwm6Regs.TBCTL.bit.CTRMODE    = 0;          // Counter Mode
         EPwm6Regs.TBCTL.bit.SYNCOSEL   = 3;          // Sync output select
         EPwm6Regs.TBCTL.bit.PRDLD      = 0;          // Shadow select
         EPwm6Regs.TBCTL.bit.PHSEN      = 0;          // Phase load enable
         EPwm6Regs.TBCTL.bit.PHSDIR     = 0;          // Phase Direction
         EPwm6Regs.TBCTL.bit.HSPCLKDIV  = 0;          // High speed time pre-scale
         EPwm6Regs.TBCTL.bit.CLKDIV     = 0;          // Timebase clock pre-scale
       */
      EPwm6Regs.TBCTL.all = (EPwm6Regs.TBCTL.all & ~0x3FBF) | 0x30;

      /* // Time-Base Phase Register
         EPwm6Regs.TBPHS.half.TBPHS     = 0;          // Phase offset register
       */
      EPwm6Regs.TBPHS.all = (EPwm6Regs.TBPHS.all & ~0xFFFF0000) | 0x0;
      EPwm6Regs.TBCTR = 0x0000;        /* Clear counter*/

      /*-- Setup Counter_Compare (CC) Submodule --*/
      /* // Counter-Compare Control Register
         EPwm6Regs.CMPCTL.bit.SHDWAMODE = 0;  // Compare A block operating mode.
         EPwm6Regs.CMPCTL.bit.SHDWBMODE = 0;  // Compare B block operating mode.
         EPwm6Regs.CMPCTL.bit.LOADAMODE = 0;          // Active compare A
         EPwm6Regs.CMPCTL.bit.LOADBMODE = 0;          // Active compare A
       */
      EPwm6Regs.CMPCTL.all = (EPwm6Regs.CMPCTL.all & ~0x5F) | 0x0;
      EPwm6Regs.CMPA.half.CMPA = 32000;
      EPwm6Regs.CMPB = 0;

      /*-- Setup Action-Qualifier (AQ) Submodule --*/
      EPwm6Regs.AQCTLA.all = 36;
      EPwm6Regs.AQCTLB.all = 264;

      /* // Action-Qualifier Software Force Register
         EPwm6Regs.AQSFRC.bit.RLDCSF    = 0;          // Reload from Shadow options
       */
      EPwm6Regs.AQSFRC.all = (EPwm6Regs.AQSFRC.all & ~0xC0) | 0x0;

      /* // Action-Qualifier Continuous S/W Force Register Set
         EPwm6Regs.AQCSFRC.bit.CSFA     = 0;          // Continuous Software Force on output A
         EPwm6Regs.AQCSFRC.bit.CSFB     = 0;          // Continuous Software Force on output B
       */
      EPwm6Regs.AQCSFRC.all = (EPwm6Regs.AQCSFRC.all & ~0xF) | 0x0;

      /*-- Setup Dead-Band Generator (DB) Submodule --*/
      /* // Dead-Band Generator Control Register
         EPwm6Regs.DBCTL.bit.OUT_MODE   = 0;          // Dead Band Output Mode Control
         EPwm6Regs.DBCTL.bit.IN_MODE    = 0;          // Dead Band Input Select Mode Control
         EPwm6Regs.DBCTL.bit.POLSEL     = 0;          // Polarity Select Control
       */
      EPwm6Regs.DBCTL.all = (EPwm6Regs.DBCTL.all & ~0x3F) | 0x0;
      EPwm6Regs.DBRED = 0;
      EPwm6Regs.DBFED = 0;

      /*-- Setup Event-Trigger (ET) Submodule --*/
      /* // Event-Trigger Selection and Event-Trigger Pre-Scale Register
         EPwm6Regs.ETSEL.bit.SOCAEN     = 0;          // Start of conversion A Enable
         EPwm6Regs.ETSEL.bit.SOCASEL    = 1;          // Start of conversion A Select
         EPwm6Regs.ETPS.bit.SOCAPRD     = 1;          // EPWM6SOCA Period Select
         EPwm6Regs.ETSEL.bit.SOCBEN     = 0;          // Start of conversion B Enable
         EPwm6Regs.ETSEL.bit.SOCBSEL    = 1;          // Start of conversion B Select
         EPwm6Regs.ETPS.bit.SOCBPRD     = 1;          // EPWM6SOCB Period Select
         EPwm6Regs.ETSEL.bit.INTEN      = 0;          // EPWM6INTn Enable
         EPwm6Regs.ETSEL.bit.INTSEL     = 1;          // EPWM6INTn Select
         EPwm6Regs.ETPS.bit.INTPRD      = 1;          // EPWM6INTn Period Select
       */
      EPwm6Regs.ETSEL.all = (EPwm6Regs.ETSEL.all & ~0xFF0F) | 0x1101;
      EPwm6Regs.ETPS.all = (EPwm6Regs.ETPS.all & ~0x3303) | 0x1101;

      /*-- Setup PWM-Chopper (PC) Submodule --*/
      /* // PWM-Chopper Control Register
         EPwm6Regs.PCCTL.bit.CHPEN      = 0;          // PWM chopping enable
         EPwm6Regs.PCCTL.bit.CHPFREQ    = 0;          // Chopping clock frequency
         EPwm6Regs.PCCTL.bit.OSHTWTH    = 0;          // One-shot pulse width
         EPwm6Regs.PCCTL.bit.CHPDUTY    = 0;          // Chopping clock Duty cycle
       */
      EPwm6Regs.PCCTL.all = (EPwm6Regs.PCCTL.all & ~0x7FF) | 0x0;

      /*-- Set up Trip-Zone (TZ) Submodule --*/
      EALLOW;
      EPwm6Regs.TZSEL.all = 0;

      /* // Trip-Zone Control Register
         EPwm6Regs.TZCTL.bit.TZA        = 3;          // TZ1 to TZ6 Trip Action On EPWM6A
         EPwm6Regs.TZCTL.bit.TZB        = 3;          // TZ1 to TZ6 Trip Action On EPWM6B
       */
      EPwm6Regs.TZCTL.all = (EPwm6Regs.TZCTL.all & ~0xF) | 0xF;

      /* // Trip-Zone Enable Interrupt Register
         EPwm6Regs.TZEINT.bit.OST       = 0;          // Trip Zones One Shot Int Enable
         EPwm6Regs.TZEINT.bit.CBC       = 0;          // Trip Zones Cycle By Cycle Int Enable
       */
      EPwm6Regs.TZEINT.all = (EPwm6Regs.TZEINT.all & ~0x6) | 0x0;
      EDIS;
    }

    /* Start for S-Function (c280xgpio_do): '<S6>/Drehrichtungsvorgabe für einen Motor1' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFFFC;
    GpioCtrlRegs.GPADIR.all |= 0x10000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<Root>/ePWM2' */

    /*** Initialize ePWM5 modules ***/
    {
      /*-- Setup Time-Base (TB) Submodule --*/
      EPwm5Regs.TBPRD = 64000;

      /* // Time-Base Control Register
         EPwm5Regs.TBCTL.bit.CTRMODE    = 0;          // Counter Mode
         EPwm5Regs.TBCTL.bit.SYNCOSEL   = 3;          // Sync output select
         EPwm5Regs.TBCTL.bit.PRDLD      = 0;          // Shadow select
         EPwm5Regs.TBCTL.bit.PHSEN      = 0;          // Phase load enable
         EPwm5Regs.TBCTL.bit.PHSDIR     = 0;          // Phase Direction
         EPwm5Regs.TBCTL.bit.HSPCLKDIV  = 0;          // High speed time pre-scale
         EPwm5Regs.TBCTL.bit.CLKDIV     = 0;          // Timebase clock pre-scale
       */
      EPwm5Regs.TBCTL.all = (EPwm5Regs.TBCTL.all & ~0x3FBF) | 0x30;

      /* // Time-Base Phase Register
         EPwm5Regs.TBPHS.half.TBPHS     = 0;          // Phase offset register
       */
      EPwm5Regs.TBPHS.all = (EPwm5Regs.TBPHS.all & ~0xFFFF0000) | 0x0;
      EPwm5Regs.TBCTR = 0x0000;        /* Clear counter*/

      /*-- Setup Counter_Compare (CC) Submodule --*/
      /* // Counter-Compare Control Register
         EPwm5Regs.CMPCTL.bit.SHDWAMODE = 0;  // Compare A block operating mode.
         EPwm5Regs.CMPCTL.bit.SHDWBMODE = 0;  // Compare B block operating mode.
         EPwm5Regs.CMPCTL.bit.LOADAMODE = 0;          // Active compare A
         EPwm5Regs.CMPCTL.bit.LOADBMODE = 0;          // Active compare A
       */
      EPwm5Regs.CMPCTL.all = (EPwm5Regs.CMPCTL.all & ~0x5F) | 0x0;
      EPwm5Regs.CMPA.half.CMPA = 32000;
      EPwm5Regs.CMPB = 32000;

      /*-- Setup Action-Qualifier (AQ) Submodule --*/
      EPwm5Regs.AQCTLA.all = 36;
      EPwm5Regs.AQCTLB.all = 264;

      /* // Action-Qualifier Software Force Register
         EPwm5Regs.AQSFRC.bit.RLDCSF    = 0;          // Reload from Shadow options
       */
      EPwm5Regs.AQSFRC.all = (EPwm5Regs.AQSFRC.all & ~0xC0) | 0x0;

      /* // Action-Qualifier Continuous S/W Force Register Set
         EPwm5Regs.AQCSFRC.bit.CSFA     = 0;          // Continuous Software Force on output A
         EPwm5Regs.AQCSFRC.bit.CSFB     = 0;          // Continuous Software Force on output B
       */
      EPwm5Regs.AQCSFRC.all = (EPwm5Regs.AQCSFRC.all & ~0xF) | 0x0;

      /*-- Setup Dead-Band Generator (DB) Submodule --*/
      /* // Dead-Band Generator Control Register
         EPwm5Regs.DBCTL.bit.OUT_MODE   = 0;          // Dead Band Output Mode Control
         EPwm5Regs.DBCTL.bit.IN_MODE    = 0;          // Dead Band Input Select Mode Control
         EPwm5Regs.DBCTL.bit.POLSEL     = 0;          // Polarity Select Control
       */
      EPwm5Regs.DBCTL.all = (EPwm5Regs.DBCTL.all & ~0x3F) | 0x0;
      EPwm5Regs.DBRED = 0;
      EPwm5Regs.DBFED = 0;

      /*-- Setup Event-Trigger (ET) Submodule --*/
      /* // Event-Trigger Selection and Event-Trigger Pre-Scale Register
         EPwm5Regs.ETSEL.bit.SOCAEN     = 0;          // Start of conversion A Enable
         EPwm5Regs.ETSEL.bit.SOCASEL    = 1;          // Start of conversion A Select
         EPwm5Regs.ETPS.bit.SOCAPRD     = 1;          // EPWM5SOCA Period Select
         EPwm5Regs.ETSEL.bit.SOCBEN     = 0;          // Start of conversion B Enable
         EPwm5Regs.ETSEL.bit.SOCBSEL    = 1;          // Start of conversion B Select
         EPwm5Regs.ETPS.bit.SOCBPRD     = 1;          // EPWM5SOCB Period Select
         EPwm5Regs.ETSEL.bit.INTEN      = 0;          // EPWM5INTn Enable
         EPwm5Regs.ETSEL.bit.INTSEL     = 1;          // EPWM5INTn Select
         EPwm5Regs.ETPS.bit.INTPRD      = 1;          // EPWM5INTn Period Select
       */
      EPwm5Regs.ETSEL.all = (EPwm5Regs.ETSEL.all & ~0xFF0F) | 0x1101;
      EPwm5Regs.ETPS.all = (EPwm5Regs.ETPS.all & ~0x3303) | 0x1101;

      /*-- Setup PWM-Chopper (PC) Submodule --*/
      /* // PWM-Chopper Control Register
         EPwm5Regs.PCCTL.bit.CHPEN      = 0;          // PWM chopping enable
         EPwm5Regs.PCCTL.bit.CHPFREQ    = 0;          // Chopping clock frequency
         EPwm5Regs.PCCTL.bit.OSHTWTH    = 0;          // One-shot pulse width
         EPwm5Regs.PCCTL.bit.CHPDUTY    = 0;          // Chopping clock Duty cycle
       */
      EPwm5Regs.PCCTL.all = (EPwm5Regs.PCCTL.all & ~0x7FF) | 0x0;

      /*-- Set up Trip-Zone (TZ) Submodule --*/
      EALLOW;
      EPwm5Regs.TZSEL.all = 0;

      /* // Trip-Zone Control Register
         EPwm5Regs.TZCTL.bit.TZA        = 3;          // TZ1 to TZ6 Trip Action On EPWM5A
         EPwm5Regs.TZCTL.bit.TZB        = 3;          // TZ1 to TZ6 Trip Action On EPWM5B
       */
      EPwm5Regs.TZCTL.all = (EPwm5Regs.TZCTL.all & ~0xF) | 0xF;

      /* // Trip-Zone Enable Interrupt Register
         EPwm5Regs.TZEINT.bit.OST       = 0;          // Trip Zones One Shot Int Enable
         EPwm5Regs.TZEINT.bit.CBC       = 0;          // Trip Zones Cycle By Cycle Int Enable
       */
      EPwm5Regs.TZEINT.all = (EPwm5Regs.TZEINT.all & ~0x6) | 0x0;
      EDIS;
    }

    /* Start for S-Function (c280xgpio_do): '<S7>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
    EALLOW;
    GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
    GpioCtrlRegs.GPBDIR.all |= 0x4;
    EDIS;

    /* InitializeConditions for Memory: '<S13>/Memory' */
    SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput =
      SortierAlgorithmusEchtSystem_P.EdgeDetector2_ic;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay3' */
    SortierAlgorithmusEchtSystem_DW.UnitDelay3_DSTATE =
      SortierAlgorithmusEchtSystem_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay4' */
    SortierAlgorithmusEchtSystem_DW.UnitDelay4_DSTATE =
      SortierAlgorithmusEchtSystem_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay5' */
    SortierAlgorithmusEchtSystem_DW.UnitDelay5_DSTATE =
      SortierAlgorithmusEchtSystem_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay2' */
    SortierAlgorithmusEchtSystem_DW.UnitDelay2_DSTATE =
      SortierAlgorithmusEchtSystem_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for Memory: '<S12>/Memory' */
    SortierAlgorithmusEchtSystem_DW.Memory_PreviousInput_d =
      SortierAlgorithmusEchtSystem_P.EdgeDetector1_ic;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
    SortierAlgorithmusEchtSystem_DW.UnitDelay1_DSTATE =
      SortierAlgorithmusEchtSystem_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for RateTransition: '<Root>/TmpRTBAtSortieralgorithmus2Inport3' */
    SortierAlgorithmusEchtSystem_DW.TmpRTBAtSortieralgorithmus2Inpo =
      SortierAlgorithmusEchtSystem_P.TmpRTBAtSortieralgorithmus2Inpo;

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay2' */
    SortierAlgorithmusEchtSystem_DW.UnitDelay2_DSTATE_j =
      SortierAlgorithmusEchtSystem_P.UnitDelay2_InitialCondition_i;

    /* InitializeConditions for RateTransition: '<Root>/TmpRTBAtChart7Inport4' */
    SortierAlgorithmusEchtSystem_DW.TmpRTBAtChart7Inport4_Buffer0 =
      SortierAlgorithmusEchtSystem_P.TmpRTBAtChart7Inport4_InitialCo;

    /* SystemInitialize for Chart: '<Root>/Chart8' */
    SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e = 0U;
    SortierAlgorithmusEchtSystem_DW.is_active_c39_SortierAlgorithmu = 0U;
    SortierAlgorithmusEchtSystem_DW.is_c39_SortierAlgorithmusEchtSy =
      SortierAlgor_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Enabled SubSystem: '<S13>/POSITIVE Edge' */
    SortierAl_POSITIVEEdge_Init
      (&SortierAlgorithmusEchtSystem_B.RelationalOperator1,
       &SortierAlgorithmusEchtSystem_P.POSITIVEEdge_m);

    /* End of SystemInitialize for SubSystem: '<S13>/POSITIVE Edge' */

    /* SystemInitialize for Enabled SubSystem: '<S13>/NEGATIVE Edge' */
    SortierAl_NEGATIVEEdge_Init
      (&SortierAlgorithmusEchtSystem_B.RelationalOperator1_k,
       &SortierAlgorithmusEchtSystem_P.NEGATIVEEdge_h);

    /* End of SystemInitialize for SubSystem: '<S13>/NEGATIVE Edge' */

    /* SystemInitialize for Enabled SubSystem: '<S12>/POSITIVE Edge' */
    SortierAl_POSITIVEEdge_Init
      (&SortierAlgorithmusEchtSystem_B.RelationalOperator1_p,
       &SortierAlgorithmusEchtSystem_P.POSITIVEEdge);

    /* End of SystemInitialize for SubSystem: '<S12>/POSITIVE Edge' */

    /* SystemInitialize for Enabled SubSystem: '<S12>/NEGATIVE Edge' */
    SortierAl_NEGATIVEEdge_Init
      (&SortierAlgorithmusEchtSystem_B.RelationalOperator1_b,
       &SortierAlgorithmusEchtSystem_P.NEGATIVEEdge);

    /* End of SystemInitialize for SubSystem: '<S12>/NEGATIVE Edge' */

    /* InitializeConditions for MATLABSystem: '<Root>/Moving Average2' */
    if (SortierAlgorithmusEchtSystem_DW.obj.pStatistic->isInitialized == 1L) {
      SortierAlgorithmusEchtSystem_DW.obj.pStatistic->pwN = 1.0;
      SortierAlgorithmusEchtSystem_DW.obj.pStatistic->pmN = 0.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<Root>/Moving Average2' */

    /* SystemInitialize for Chart: '<Root>/Sortieralgorithmus2' */
    SortierAlgorithmusEchtSystem_DW.temporalCounter_i1 = 0U;
    SortierAlgorithmusEchtSystem_DW.is_active_c42_SortierAlgorithmu = 0U;
    SortierAlgorithmusEchtSystem_DW.is_c42_SortierAlgorithmusEchtSy =
      SortierAlgor_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<Root>/Chart7' */
    SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_d = 0U;
    SortierAlgorithmusEchtSystem_DW.is_active_c38_SortierAlgorithmu = 0U;
    SortierAlgorithmusEchtSystem_DW.is_c38_SortierAlgorithmusEchtSy =
      SortierAlgor_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<Root>/Chart6' */
    SortierAlgorithmusEchtSystem_DW.temporalCounter_i1_e0 = 0U;
    SortierAlgorithmusEchtSystem_DW.is_active_c37_SortierAlgorithmu = 0U;
    SortierAlgorithmusEchtSystem_DW.is_c37_SortierAlgorithmusEchtSy =
      SortierAlgor_IN_NO_ACTIVE_CHILD;
  }
}

/* Model terminate function */
void SortierAlgorithmusEchtSystem_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Moving Average2' */
  matlabCodegenHandle_matlabCodeg(&SortierAlgorithmusEchtSystem_DW.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
