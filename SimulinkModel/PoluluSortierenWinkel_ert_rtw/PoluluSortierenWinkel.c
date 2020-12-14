/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PoluluSortierenWinkel.c
 *
 * Code generated for Simulink model 'PoluluSortierenWinkel'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Dec 13 18:02:49 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PoluluSortierenWinkel.h"
#include "PoluluSortierenWinkel_private.h"
#define PoluluSortie_IN_NO_ACTIVE_CHILD (0U)
#define PoluluSortiere_IN_Startposition (4U)
#define PoluluSortierenW_IN_Linksdrehen (2U)
#define PoluluSortierenWi_IN_Stopbeginn (6U)
#define PoluluSortierenWin_IN_Startwert (5U)
#define PoluluSortierenWink_IN_Stopende (7U)
#define PoluluSortierenWinke_IN_Stoppen (8U)
#define PoluluSortierenWinkel_IN_Drehen (1U)
#define PoluluSortieren_IN_Rechtsdrehen (3U)

/* Block signals (default storage) */
B_PoluluSortierenWinkel_T PoluluSortierenWinkel_B;

/* Block states (default storage) */
DW_PoluluSortierenWinkel_T PoluluSortierenWinkel_DW;

/* Real-time model */
RT_MODEL_PoluluSortierenWinke_T PoluluSortierenWinkel_M_;
RT_MODEL_PoluluSortierenWinke_T *const PoluluSortierenWinkel_M =
  &PoluluSortierenWinkel_M_;

/* Forward declaration for local functions */
static real_T PoluluSortierenWinkel_umkehren(void);
static void PoluluSortie_eml_rand_mt19937ar(const uint32_T state[625], uint32_T
  b_state[625], real_T *r);
static real_T PoluluSortierenWinkel_rand(void);
static uint32_T PoluluSortieren_eml_rand_str2id(void);
static void rate_monotonic_scheduler(void);
static uint16_T adcInitFlag = 0;

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void PoluluSortierenWinkel_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[2] = ((boolean_T)rtmStepTask(PoluluSortierenWinkel_M, 2));
  eventFlags[3] = ((boolean_T)rtmStepTask(PoluluSortierenWinkel_M, 3));
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
  if (PoluluSortierenWinkel_M->Timing.TaskCounters.TID[1] == 0) {
    PoluluSortierenWinkel_M->Timing.RateInteraction.TID1_2 =
      (PoluluSortierenWinkel_M->Timing.TaskCounters.TID[2] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (PoluluSortierenWinkel_M->Timing.TaskCounters.TID[2])++;
  if ((PoluluSortierenWinkel_M->Timing.TaskCounters.TID[2]) > 499) {/* Sample time: [0.01s, 0.0s] */
    PoluluSortierenWinkel_M->Timing.TaskCounters.TID[2] = 0;
  }

  (PoluluSortierenWinkel_M->Timing.TaskCounters.TID[3])++;
  if ((PoluluSortierenWinkel_M->Timing.TaskCounters.TID[3]) > 4999) {/* Sample time: [0.1s, 0.0s] */
    PoluluSortierenWinkel_M->Timing.TaskCounters.TID[3] = 0;
  }
}

/*
 * System initialize for enable system:
 *    '<S4>/NEGATIVE Edge'
 *    '<S5>/NEGATIVE Edge'
 */
void PoluluSor_NEGATIVEEdge_Init(boolean_T *rty_OUT,
  P_NEGATIVEEdge_PoluluSortiere_T *localP)
{
  /* SystemInitialize for Outport: '<S9>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S4>/NEGATIVE Edge'
 *    '<S5>/NEGATIVE Edge'
 */
void PoluluSortiere_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, boolean_T *rty_OUT)
{
  /* Outputs for Enabled SubSystem: '<S4>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S9>/Relational Operator1' */
    *rty_OUT = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S4>/NEGATIVE Edge' */
}

/*
 * System initialize for enable system:
 *    '<S4>/POSITIVE Edge'
 *    '<S5>/POSITIVE Edge'
 */
void PoluluSor_POSITIVEEdge_Init(boolean_T *rty_OUT,
  P_POSITIVEEdge_PoluluSortiere_T *localP)
{
  /* SystemInitialize for Outport: '<S10>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S4>/POSITIVE Edge'
 *    '<S5>/POSITIVE Edge'
 */
void PoluluSortiere_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, boolean_T *rty_OUT)
{
  /* Outputs for Enabled SubSystem: '<S4>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S10>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S10>/Relational Operator1' */
    *rty_OUT = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S4>/POSITIVE Edge' */
}

/*
 * Output and update for atomic system:
 *    '<S2>/MATLAB Function1'
 *    '<S2>/MATLAB Function3'
 */
void PoluluSorti_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt, real32_T
  *rty_y)
{
  *rty_y = rtu_yalt + (real32_T)rtu_u;
}

/* Function for Chart: '<Root>/Chart' */
static real_T PoluluSortierenWinkel_umkehren(void)
{
  return PoluluSortierenWinkel_B.rechts == 0.0;
}

static void PoluluSortie_eml_rand_mt19937ar(const uint32_T state[625], uint32_T
  b_state[625], real_T *r)
{
  uint32_T b_u[2];
  uint32_T mti;
  uint32_T y;
  int16_T b_j;
  int16_T b_kk;
  memcpy(&b_state[0], &state[0], 625U * sizeof(uint32_T));

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    for (b_j = 0; b_j < 2; b_j++) {
      mti = b_state[624] + 1UL;
      if (mti >= 625UL) {
        for (b_kk = 0; b_kk < 227; b_kk++) {
          y = (b_state[b_kk + 1] & 2147483647UL) | (b_state[b_kk] & 2147483648UL);
          if ((uint16_T)((int16_T)y & 1) == 0U) {
            y >>= 1;
          } else {
            y = y >> 1 ^ 2567483615UL;
          }

          b_state[b_kk] = b_state[b_kk + 397] ^ y;
        }

        for (b_kk = 0; b_kk < 396; b_kk++) {
          y = (b_state[b_kk + 227] & 2147483648UL) | (b_state[b_kk + 228] &
            2147483647UL);
          if ((uint16_T)((int16_T)y & 1) == 0U) {
            y >>= 1;
          } else {
            y = y >> 1 ^ 2567483615UL;
          }

          b_state[b_kk + 227] = b_state[b_kk] ^ y;
        }

        y = (b_state[623] & 2147483648UL) | (b_state[0] & 2147483647UL);
        if ((uint16_T)((int16_T)y & 1) == 0U) {
          y >>= 1;
        } else {
          y = y >> 1 ^ 2567483615UL;
        }

        b_state[623] = b_state[396] ^ y;
        mti = 1UL;
      }

      y = b_state[(int16_T)mti - 1];
      b_state[624] = mti;
      y ^= y >> 11;
      y ^= y << 7UL & 2636928640UL;
      y ^= y << 15UL & 4022730752UL;
      b_u[b_j] = y >> 18 ^ y;
    }

    *r = ((real_T)(b_u[0] >> 5) * 6.7108864E+7 + (real_T)(b_u[1] >> 6)) *
      1.1102230246251565E-16;
  } while (*r == 0.0);
}

static real_T PoluluSortierenWinkel_rand(void)
{
  real_T r;
  uint32_T r_0;
  int16_T b_mti;
  uint16_T hi;
  uint32_T test2;
  if (PoluluSortierenWinkel_DW.method == 4UL) {
    /* Start for MATLABSystem: '<Root>/Random Integer Generator' */
    hi = (uint16_T)(PoluluSortierenWinkel_DW.state / 127773UL);
    r_0 = (uint32_T)((PoluluSortierenWinkel_DW.state - (uint32_T)(hi * 127773ULL))
                     * 16807ULL);
    test2 = (uint32_T)(2836ULL * hi);
    if (r_0 < test2) {
      PoluluSortierenWinkel_DW.state = ~(test2 - r_0) & 2147483647UL;
    } else {
      PoluluSortierenWinkel_DW.state = r_0 - test2;
    }

    r = (real_T)PoluluSortierenWinkel_DW.state * 4.6566128752457969E-10;
  } else if (PoluluSortierenWinkel_DW.method == 5UL) {
    /* Start for MATLABSystem: '<Root>/Random Integer Generator' */
    r_0 = (uint32_T)(69069ULL * PoluluSortierenWinkel_DW.state_c[0]) + 1234567UL;
    test2 = PoluluSortierenWinkel_DW.state_c[1] << 13U ^
      PoluluSortierenWinkel_DW.state_c[1];
    test2 ^= test2 >> 17U;
    test2 ^= test2 << 5U;
    PoluluSortierenWinkel_DW.state_c[0] = r_0;
    PoluluSortierenWinkel_DW.state_c[1] = test2;
    r = (real_T)(r_0 + test2) * 2.328306436538696E-10;
  } else {
    if (!PoluluSortierenWinkel_DW.state_not_empty_m) {
      memset(&PoluluSortierenWinkel_DW.state_p[0], 0, 625U * sizeof(uint32_T));
      r_0 = 5489UL;
      PoluluSortierenWinkel_DW.state_p[0] = 5489UL;
      for (b_mti = 0; b_mti < 623; b_mti++) {
        r_0 = (uint32_T)((r_0 >> 30 ^ r_0) * 1812433253ULL) + (b_mti + 1);
        PoluluSortierenWinkel_DW.state_p[b_mti + 1] = r_0;
      }

      PoluluSortierenWinkel_DW.state_p[624] = 624UL;
      PoluluSortierenWinkel_DW.state_not_empty_m = true;
    }

    memcpy(&PoluluSortierenWinkel_B.uv0[0], &PoluluSortierenWinkel_DW.state_p[0],
           625U * sizeof(uint32_T));
    PoluluSortie_eml_rand_mt19937ar(PoluluSortierenWinkel_B.uv0,
      PoluluSortierenWinkel_DW.state_p, &r);
  }

  return r;
}

static uint32_T PoluluSortieren_eml_rand_str2id(void)
{
  return 7UL;
}

/* Model step function for TID0 */
void PoluluSortierenWinkel_step0(void) /* Sample time: [0.0s, 0.0s] */
{
  /* local block i/o variables */
  boolean_T rtb_VergleichmitSchwellwert;
  boolean_T rtb_VergleichmitSchwellwert_l;
  real_T rtb_MultiportSwitch_j_idx_0;
  real_T rtb_MultiportSwitch_j_idx_1;
  real_T rtb_MultiportSwitch_idx_0;
  real_T rtb_MultiportSwitch_idx_1;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_1;

  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
   *  Constant: '<S4>/Constant1'
   *  Constant: '<S4>/either edge'
   *  Constant: '<S4>/neg. edge'
   *  Constant: '<S4>/pos. edge'
   */
  switch ((int16_T)PoluluSortierenWinkel_P.EdgeDetector1_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = PoluluSortierenWinkel_P.posedge_Value[0];
    rtb_MultiportSwitch_idx_1 = PoluluSortierenWinkel_P.posedge_Value[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = PoluluSortierenWinkel_P.negedge_Value[0];
    rtb_MultiportSwitch_idx_1 = PoluluSortierenWinkel_P.negedge_Value[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = PoluluSortierenWinkel_P.eitheredge_Value[0];
    rtb_MultiportSwitch_idx_1 = PoluluSortierenWinkel_P.eitheredge_Value[1];
    break;
  }

  /* End of MultiPortSwitch: '<S4>/Multiport Switch' */

  /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/either edge'
   *  Constant: '<S5>/neg. edge'
   *  Constant: '<S5>/pos. edge'
   */
  switch ((int16_T)PoluluSortierenWinkel_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenWinkel_P.posedge_Value_c[0];
    rtb_MultiportSwitch_j_idx_1 = PoluluSortierenWinkel_P.posedge_Value_c[1];
    break;

   case 2:
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenWinkel_P.negedge_Value_i[0];
    rtb_MultiportSwitch_j_idx_1 = PoluluSortierenWinkel_P.negedge_Value_i[1];
    break;

   default:
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenWinkel_P.eitheredge_Value_k[0];
    rtb_MultiportSwitch_j_idx_1 = PoluluSortierenWinkel_P.eitheredge_Value_k[1];
    break;
  }

  /* End of MultiPortSwitch: '<S5>/Multiport Switch' */

  /* S-Function (c280xadc): '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  {
    AdcRegs.ADCTRL2.bit.RST_SEQ1 = 1;  /* Reset SEQ1 module*/
    AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;/*clear INT sequencer*/
    AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;  /* Software Trigger*/
    while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {
    }                                  /*Wait for Sequencer INT bit to clear */

    asm(" RPT #11 || NOP");
    PoluluSortierenWinkel_B.AnalogDigitalWandlungSampletime =
      (AdcRegs.ADCRESULT0) >> 4;
    PoluluSortierenWinkel_B.AnalogDigitalWandlungSampleti_b =
      (AdcRegs.ADCRESULT1) >> 4;
  }

  /* RelationalOperator: '<S2>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S2>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert =
    (PoluluSortierenWinkel_B.AnalogDigitalWandlungSampleti_b <=
     PoluluSortierenWinkel_P.HeuristischermittelterSchwellwe);

  /* Outputs for Enabled SubSystem: '<S5>/POSITIVE Edge' */
  /* Memory: '<S5>/Memory' */
  PoluluSortiere_POSITIVEEdge(rtb_MultiportSwitch_j_idx_0,
    rtb_VergleichmitSchwellwert, PoluluSortierenWinkel_DW.Memory_PreviousInput,
    &PoluluSortierenWinkel_B.RelationalOperator1);

  /* End of Outputs for SubSystem: '<S5>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S5>/NEGATIVE Edge' */
  PoluluSortiere_NEGATIVEEdge(rtb_MultiportSwitch_j_idx_1,
    rtb_VergleichmitSchwellwert, PoluluSortierenWinkel_DW.Memory_PreviousInput,
    &PoluluSortierenWinkel_B.RelationalOperator1_e);

  /* End of Outputs for SubSystem: '<S5>/NEGATIVE Edge' */

  /* RelationalOperator: '<S2>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S2>/Constant'
   */
  rtb_VergleichmitSchwellwert_l = (PoluluSortierenWinkel_P.Constant_Value <=
    PoluluSortierenWinkel_B.AnalogDigitalWandlungSampletime);

  /* MATLAB Function: '<S2>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S2>/Unit Delay3'
   *  UnitDelay: '<S2>/Unit Delay4'
   *  UnitDelay: '<S2>/Unit Delay5'
   */
  rtb_MultiportSwitch_j_idx_0 = 1.0;
  tmp_0 = !PoluluSortierenWinkel_DW.UnitDelay3_DSTATE;
  tmp_1 = !PoluluSortierenWinkel_DW.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert_l) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenWinkel_DW.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert_l) && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_j_idx_0 = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert_l && (!rtb_VergleichmitSchwellwert)) {
    rtb_MultiportSwitch_j_idx_0 = -1.0;
  }

  tmp_0 = (tmp_0 && PoluluSortierenWinkel_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_l) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_j_idx_0 = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert_l) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenWinkel_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_l && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_j_idx_0 = 1.0;
  }

  tmp_0 = (PoluluSortierenWinkel_DW.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_l) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_j_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_l && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenWinkel_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_l && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_j_idx_0 = -1.0;
  }

  tmp_0 = (PoluluSortierenWinkel_DW.UnitDelay3_DSTATE &&
           PoluluSortierenWinkel_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_l) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_j_idx_0 = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_l && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_j_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_l && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenWinkel_DW.UnitDelay5_DSTATE;
  }

  PoluluSortierenWinkel_B.RL = (rtb_MultiportSwitch_j_idx_0 == 1.0);
  PoluluSortierenWinkel_DW.UnitDelay5_DSTATE = rtb_MultiportSwitch_j_idx_0;

  /* End of MATLAB Function: '<S2>/MATLAB Function2' */

  /* MATLAB Function: '<S2>/MATLAB Function3' incorporates:
   *  Logic: '<S5>/Logical Operator1'
   *  Product: '<S2>/Product'
   *  UnitDelay: '<S2>/Unit Delay2'
   *  UnitDelay: '<S2>/Unit Delay5'
   */
  PoluluSorti_MATLABFunction1(PoluluSortierenWinkel_DW.UnitDelay5_DSTATE *
    (real_T)(PoluluSortierenWinkel_B.RelationalOperator1 ||
             PoluluSortierenWinkel_B.RelationalOperator1_e),
    PoluluSortierenWinkel_DW.UnitDelay2_DSTATE,
    &PoluluSortierenWinkel_DW.UnitDelay2_DSTATE);

  /* Outputs for Enabled SubSystem: '<S4>/POSITIVE Edge' */
  /* Memory: '<S4>/Memory' */
  PoluluSortiere_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_l,
    PoluluSortierenWinkel_DW.Memory_PreviousInput_p,
    &PoluluSortierenWinkel_B.RelationalOperator1_c);

  /* End of Outputs for SubSystem: '<S4>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S4>/NEGATIVE Edge' */
  PoluluSortiere_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_l,
    PoluluSortierenWinkel_DW.Memory_PreviousInput_p,
    &PoluluSortierenWinkel_B.RelationalOperator1_h);

  /* End of Outputs for SubSystem: '<S4>/NEGATIVE Edge' */

  /* MATLAB Function: '<S2>/MATLAB Function1' incorporates:
   *  Logic: '<S4>/Logical Operator1'
   *  Product: '<S2>/Product3'
   *  UnitDelay: '<S2>/Unit Delay1'
   *  UnitDelay: '<S2>/Unit Delay5'
   */
  PoluluSorti_MATLABFunction1((real_T)
    (PoluluSortierenWinkel_B.RelationalOperator1_c ||
     PoluluSortierenWinkel_B.RelationalOperator1_h) *
    PoluluSortierenWinkel_DW.UnitDelay5_DSTATE,
    PoluluSortierenWinkel_DW.UnitDelay1_DSTATE,
    &PoluluSortierenWinkel_DW.UnitDelay1_DSTATE);

  /* Product: '<S2>/Product1' incorporates:
   *  Constant: '<S2>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   *  UnitDelay: '<S2>/Unit Delay1'
   */
  rtb_MultiportSwitch_idx_0 =
    PoluluSortierenWinkel_P.WinkelFlankePolulo3416V022Pol_j *
    PoluluSortierenWinkel_DW.UnitDelay1_DSTATE;

  /* Sum: '<S2>/Sum' incorporates:
   *  Constant: '<S2>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S2>/Product2'
   *  UnitDelay: '<S2>/Unit Delay2'
   */
  rtb_MultiportSwitch_idx_0 += PoluluSortierenWinkel_DW.UnitDelay2_DSTATE *
    PoluluSortierenWinkel_P.WinkelFlankePolulo3416V022Polul;

  /* RateTransition: '<Root>/Rate Transition2' */
  if (PoluluSortierenWinkel_M->Timing.RateInteraction.TID1_2) {
    PoluluSortierenWinkel_B.RateTransition2 = rtb_MultiportSwitch_idx_0;

    /* RateTransition: '<Root>/Rate Transition1' incorporates:
     *  Constant: '<Root>/Constant'
     */
    PoluluSortierenWinkel_B.RateTransition1 =
      PoluluSortierenWinkel_P.Constant_Value_p;
  }

  /* End of RateTransition: '<Root>/Rate Transition2' */

  /* S-Function (c280xgpio_do): '<Root>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (PoluluSortierenWinkel_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Update for Memory: '<S5>/Memory' */
  PoluluSortierenWinkel_DW.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S2>/Unit Delay3' */
  PoluluSortierenWinkel_DW.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert_l;

  /* Update for UnitDelay: '<S2>/Unit Delay4' */
  PoluluSortierenWinkel_DW.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for Memory: '<S4>/Memory' */
  PoluluSortierenWinkel_DW.Memory_PreviousInput_p =
    rtb_VergleichmitSchwellwert_l;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++PoluluSortierenWinkel_M->Timing.clockTick0)) {
    ++PoluluSortierenWinkel_M->Timing.clockTickH0;
  }

  PoluluSortierenWinkel_M->Timing.t[0] =
    PoluluSortierenWinkel_M->Timing.clockTick0 *
    PoluluSortierenWinkel_M->Timing.stepSize0 +
    PoluluSortierenWinkel_M->Timing.clockTickH0 *
    PoluluSortierenWinkel_M->Timing.stepSize0 * 4294967296.0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 2.0E-5, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  PoluluSortierenWinkel_M->Timing.clockTick1++;
  if (!PoluluSortierenWinkel_M->Timing.clockTick1) {
    PoluluSortierenWinkel_M->Timing.clockTickH1++;
  }
}

/* Model step function for TID2 */
void PoluluSortierenWinkel_step2(void) /* Sample time: [0.01s, 0.0s] */
{
  /* Chart: '<Root>/Chart' */
  if (PoluluSortierenWinkel_DW.temporalCounter_i1 < 511U) {
    PoluluSortierenWinkel_DW.temporalCounter_i1++;
  }

  if (PoluluSortierenWinkel_DW.is_active_c3_PoluluSortierenWin == 0U) {
    PoluluSortierenWinkel_DW.is_active_c3_PoluluSortierenWin = 1U;
    PoluluSortierenWinkel_DW.is_c3_PoluluSortierenWinkel =
      PoluluSortierenWin_IN_Startwert;
  } else {
    switch (PoluluSortierenWinkel_DW.is_c3_PoluluSortierenWinkel) {
     case PoluluSortierenWinkel_IN_Drehen:
      PoluluSortierenWinkel_DW.is_c3_PoluluSortierenWinkel =
        PoluluSortiere_IN_Startposition;
      PoluluSortierenWinkel_B.stop = 100.0;
      PoluluSortierenWinkel_B.w = PoluluSortierenWinkel_B.RateTransition2;
      break;

     case PoluluSortierenW_IN_Linksdrehen:
      if (PoluluSortierenWinkel_B.RateTransition2 > 359.0) {
        PoluluSortierenWinkel_DW.is_c3_PoluluSortierenWinkel =
          PoluluSortierenWinke_IN_Stoppen;
        PoluluSortierenWinkel_DW.temporalCounter_i1 = 0U;
        PoluluSortierenWinkel_B.stop = 0.0;
      } else {
        PoluluSortierenWinkel_B.rechts = 0.0;
        PoluluSortierenWinkel_B.stop = 100.0;
        PoluluSortierenWinkel_B.w = PoluluSortierenWinkel_B.RateTransition2;
      }
      break;

     case PoluluSortieren_IN_Rechtsdrehen:
      if (PoluluSortierenWinkel_B.RateTransition2 > 360.0) {
        PoluluSortierenWinkel_DW.is_c3_PoluluSortierenWinkel =
          PoluluSortierenWinke_IN_Stoppen;
        PoluluSortierenWinkel_DW.temporalCounter_i1 = 0U;
        PoluluSortierenWinkel_B.stop = 0.0;
      } else {
        PoluluSortierenWinkel_B.rechts = 1.0;
        PoluluSortierenWinkel_B.stop = 100.0;
        PoluluSortierenWinkel_B.w = PoluluSortierenWinkel_B.RateTransition2;
      }
      break;

     case PoluluSortiere_IN_Startposition:
      if (PoluluSortierenWinkel_B.RateTransition2 < 0.0) {
        PoluluSortierenWinkel_DW.is_c3_PoluluSortierenWinkel =
          PoluluSortierenWi_IN_Stopbeginn;
        PoluluSortierenWinkel_DW.temporalCounter_i1 = 0U;
        PoluluSortierenWinkel_B.stop = 0.0;
      } else {
        PoluluSortierenWinkel_B.stop = 100.0;
        PoluluSortierenWinkel_B.w = PoluluSortierenWinkel_B.RateTransition2;
      }
      break;

     case PoluluSortierenWin_IN_Startwert:
      PoluluSortierenWinkel_DW.is_c3_PoluluSortierenWinkel =
        PoluluSortierenWi_IN_Stopbeginn;
      PoluluSortierenWinkel_DW.temporalCounter_i1 = 0U;
      PoluluSortierenWinkel_B.stop = 0.0;
      break;

     case PoluluSortierenWi_IN_Stopbeginn:
      if (PoluluSortierenWinkel_DW.temporalCounter_i1 >= 20U) {
        PoluluSortierenWinkel_DW.is_c3_PoluluSortierenWinkel =
          PoluluSortierenWink_IN_Stopende;
      } else {
        PoluluSortierenWinkel_B.stop = 0.0;
      }
      break;

     case PoluluSortierenWink_IN_Stopende:
      if (PoluluSortierenWinkel_B.RateTransition1 == 0.0) {
        PoluluSortierenWinkel_DW.is_c3_PoluluSortierenWinkel =
          PoluluSortierenW_IN_Linksdrehen;
        PoluluSortierenWinkel_B.rechts = 0.0;
        PoluluSortierenWinkel_B.stop = 100.0;
        PoluluSortierenWinkel_B.w = PoluluSortierenWinkel_B.RateTransition2;
      } else {
        if (PoluluSortierenWinkel_B.RateTransition1 == 1.0) {
          PoluluSortierenWinkel_DW.is_c3_PoluluSortierenWinkel =
            PoluluSortieren_IN_Rechtsdrehen;
          PoluluSortierenWinkel_B.rechts = 1.0;
          PoluluSortierenWinkel_B.stop = 100.0;
          PoluluSortierenWinkel_B.w = PoluluSortierenWinkel_B.RateTransition2;
        }
      }
      break;

     default:
      if (PoluluSortierenWinkel_DW.temporalCounter_i1 >= 300U) {
        PoluluSortierenWinkel_DW.is_c3_PoluluSortierenWinkel =
          PoluluSortierenWinkel_IN_Drehen;
        PoluluSortierenWinkel_B.rechts = PoluluSortierenWinkel_umkehren();
      } else {
        PoluluSortierenWinkel_B.stop = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  {
    if (PoluluSortierenWinkel_B.rechts)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* S-Function (c280xgpio_do): '<Root>/Digital Output2' */
  {
    if (PoluluSortierenWinkel_B.w)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* S-Function (c280xpwm): '<Root>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD *
      PoluluSortierenWinkel_B.stop * 0.01);
  }
}

/* Model step function for TID3 */
void PoluluSortierenWinkel_step3(void) /* Sample time: [0.1s, 0.0s] */
{
  /* MATLABSystem: '<Root>/Random Integer Generator' */
  PoluluSortierenWinkel_rand();
}

/* Model initialize function */
void PoluluSortierenWinkel_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)PoluluSortierenWinkel_M, 0,
                sizeof(RT_MODEL_PoluluSortierenWinke_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&PoluluSortierenWinkel_M->solverInfo,
                          &PoluluSortierenWinkel_M->Timing.simTimeStep);
    rtsiSetTPtr(&PoluluSortierenWinkel_M->solverInfo, &rtmGetTPtr
                (PoluluSortierenWinkel_M));
    rtsiSetStepSizePtr(&PoluluSortierenWinkel_M->solverInfo,
                       &PoluluSortierenWinkel_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&PoluluSortierenWinkel_M->solverInfo,
                          (&rtmGetErrorStatus(PoluluSortierenWinkel_M)));
    rtsiSetRTModelPtr(&PoluluSortierenWinkel_M->solverInfo,
                      PoluluSortierenWinkel_M);
  }

  rtsiSetSimTimeStep(&PoluluSortierenWinkel_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&PoluluSortierenWinkel_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(PoluluSortierenWinkel_M, &PoluluSortierenWinkel_M->Timing.tArray[0]);
  PoluluSortierenWinkel_M->Timing.stepSize0 = 2.0E-5;

  /* block I/O */
  (void) memset(((void *) &PoluluSortierenWinkel_B), 0,
                sizeof(B_PoluluSortierenWinkel_T));

  /* states (dwork) */
  (void) memset((void *)&PoluluSortierenWinkel_DW, 0,
                sizeof(DW_PoluluSortierenWinkel_T));

  /* Start for S-Function (c280xadc): '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  if (adcInitFlag == 0) {
    InitAdc();
    adcInitFlag = 1;
  }

  config_ADC_A (1U, 16U, 0U, 0U, 0U);

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0xFFFFF3FF;
  GpioCtrlRegs.GPADIR.all |= 0x200000;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output2' */
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

  /* Start for MATLABSystem: '<Root>/Random Integer Generator' */
  PoluluSortierenWinkel_DW.method = PoluluSortieren_eml_rand_str2id();
  PoluluSortierenWinkel_DW.state = 1144108930UL;
  PoluluSortierenWinkel_DW.state_c[0] = 362436069UL;
  PoluluSortierenWinkel_DW.state_c[1] = 521288629UL;

  /* InitializeConditions for Memory: '<S5>/Memory' */
  PoluluSortierenWinkel_DW.Memory_PreviousInput =
    PoluluSortierenWinkel_P.EdgeDetector2_ic;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay3' */
  PoluluSortierenWinkel_DW.UnitDelay3_DSTATE =
    PoluluSortierenWinkel_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay4' */
  PoluluSortierenWinkel_DW.UnitDelay4_DSTATE =
    PoluluSortierenWinkel_P.UnitDelay4_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay5' */
  PoluluSortierenWinkel_DW.UnitDelay5_DSTATE =
    PoluluSortierenWinkel_P.UnitDelay5_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay2' */
  PoluluSortierenWinkel_DW.UnitDelay2_DSTATE =
    PoluluSortierenWinkel_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for Memory: '<S4>/Memory' */
  PoluluSortierenWinkel_DW.Memory_PreviousInput_p =
    PoluluSortierenWinkel_P.EdgeDetector1_ic;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay1' */
  PoluluSortierenWinkel_DW.UnitDelay1_DSTATE =
    PoluluSortierenWinkel_P.UnitDelay1_InitialCondition;

  /* SystemInitialize for Enabled SubSystem: '<S5>/POSITIVE Edge' */
  PoluluSor_POSITIVEEdge_Init(&PoluluSortierenWinkel_B.RelationalOperator1,
    &PoluluSortierenWinkel_P.POSITIVEEdge_b);

  /* End of SystemInitialize for SubSystem: '<S5>/POSITIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S5>/NEGATIVE Edge' */
  PoluluSor_NEGATIVEEdge_Init(&PoluluSortierenWinkel_B.RelationalOperator1_e,
    &PoluluSortierenWinkel_P.NEGATIVEEdge_a);

  /* End of SystemInitialize for SubSystem: '<S5>/NEGATIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S4>/POSITIVE Edge' */
  PoluluSor_POSITIVEEdge_Init(&PoluluSortierenWinkel_B.RelationalOperator1_c,
    &PoluluSortierenWinkel_P.POSITIVEEdge);

  /* End of SystemInitialize for SubSystem: '<S4>/POSITIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S4>/NEGATIVE Edge' */
  PoluluSor_NEGATIVEEdge_Init(&PoluluSortierenWinkel_B.RelationalOperator1_h,
    &PoluluSortierenWinkel_P.NEGATIVEEdge);

  /* End of SystemInitialize for SubSystem: '<S4>/NEGATIVE Edge' */

  /* SystemInitialize for Chart: '<Root>/Chart' */
  PoluluSortierenWinkel_DW.temporalCounter_i1 = 0U;
  PoluluSortierenWinkel_DW.is_active_c3_PoluluSortierenWin = 0U;
  PoluluSortierenWinkel_DW.is_c3_PoluluSortierenWinkel =
    PoluluSortie_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void PoluluSortierenWinkel_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
