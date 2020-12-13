/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PoluluSortierenMitRandom.c
 *
 * Code generated for Simulink model 'PoluluSortierenMitRandom'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Dec 13 15:52:47 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PoluluSortierenMitRandom.h"
#include "PoluluSortierenMitRandom_private.h"
#define PoluluSortie_IN_NO_ACTIVE_CHILD (0U)
#define PoluluSortierenM_IN_Linksdrehen (1U)
#define PoluluSortierenMitR_IN_Stopende (4U)
#define PoluluSortierenMitRa_IN_Stoppen (5U)
#define PoluluSortierenMit_IN_Startwert (3U)
#define PoluluSortieren_IN_Rechtsdrehen (2U)

/* Block signals (default storage) */
B_PoluluSortierenMitRandom_T PoluluSortierenMitRandom_B;

/* Block states (default storage) */
DW_PoluluSortierenMitRandom_T PoluluSortierenMitRandom_DW;

/* Real-time model */
RT_MODEL_PoluluSortierenMitRa_T PoluluSortierenMitRandom_M_;
RT_MODEL_PoluluSortierenMitRa_T *const PoluluSortierenMitRandom_M =
  &PoluluSortierenMitRandom_M_;

/* Forward declaration for local functions */
static void PoluluSortie_eml_rand_mt19937ar(const uint32_T state[625], uint32_T
  b_state[625], real_T *r);
static real_T PoluluSortierenMitRandom_rand(void);
static real_T PoluluSortierenMitRand_sekunden(void);
static uint32_T PoluluSortieren_eml_rand_str2id(void);
static void rate_monotonic_scheduler(void);
static uint16_T adcInitFlag = 0;

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void PoluluSortierenMitRandom_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(PoluluSortierenMitRandom_M, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(PoluluSortierenMitRandom_M, 2));
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
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (PoluluSortierenMitRandom_M->Timing.TaskCounters.TID[1])++;
  if ((PoluluSortierenMitRandom_M->Timing.TaskCounters.TID[1]) > 499) {/* Sample time: [0.01s, 0.0s] */
    PoluluSortierenMitRandom_M->Timing.TaskCounters.TID[1] = 0;
  }

  (PoluluSortierenMitRandom_M->Timing.TaskCounters.TID[2])++;
  if ((PoluluSortierenMitRandom_M->Timing.TaskCounters.TID[2]) > 49999) {/* Sample time: [1.0s, 0.0s] */
    PoluluSortierenMitRandom_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/*
 * System initialize for enable system:
 *    '<S3>/NEGATIVE Edge'
 *    '<S4>/NEGATIVE Edge'
 */
void PoluluSor_NEGATIVEEdge_Init(boolean_T *rty_OUT,
  P_NEGATIVEEdge_PoluluSortiere_T *localP)
{
  /* SystemInitialize for Outport: '<S8>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S3>/NEGATIVE Edge'
 *    '<S4>/NEGATIVE Edge'
 */
void PoluluSortiere_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
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
void PoluluSor_POSITIVEEdge_Init(boolean_T *rty_OUT,
  P_POSITIVEEdge_PoluluSortiere_T *localP)
{
  /* SystemInitialize for Outport: '<S9>/OUT' */
  *rty_OUT = localP->OUT_Y0;
}

/*
 * Output and update for enable system:
 *    '<S3>/POSITIVE Edge'
 *    '<S4>/POSITIVE Edge'
 */
void PoluluSortiere_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
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
 *    '<S2>/MATLAB Function1'
 *    '<S2>/MATLAB Function3'
 */
void PoluluSorti_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt, real32_T
  *rty_y)
{
  *rty_y = rtu_yalt + (real32_T)rtu_u;
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

static real_T PoluluSortierenMitRandom_rand(void)
{
  real_T r;
  uint32_T r_0;
  int16_T b_mti;
  uint16_T hi;
  uint32_T test2;
  if (PoluluSortierenMitRandom_DW.method == 4UL) {
    /* Start for MATLABSystem: '<Root>/Random Integer Generator' */
    hi = (uint16_T)(PoluluSortierenMitRandom_DW.state / 127773UL);
    r_0 = (uint32_T)((PoluluSortierenMitRandom_DW.state - (uint32_T)(hi *
      127773ULL)) * 16807ULL);
    test2 = (uint32_T)(2836ULL * hi);
    if (r_0 < test2) {
      PoluluSortierenMitRandom_DW.state = ~(test2 - r_0) & 2147483647UL;
    } else {
      PoluluSortierenMitRandom_DW.state = r_0 - test2;
    }

    r = (real_T)PoluluSortierenMitRandom_DW.state * 4.6566128752457969E-10;
  } else if (PoluluSortierenMitRandom_DW.method == 5UL) {
    /* Start for MATLABSystem: '<Root>/Random Integer Generator' */
    r_0 = (uint32_T)(69069ULL * PoluluSortierenMitRandom_DW.state_c[0]) +
      1234567UL;
    test2 = PoluluSortierenMitRandom_DW.state_c[1] << 13U ^
      PoluluSortierenMitRandom_DW.state_c[1];
    test2 ^= test2 >> 17U;
    test2 ^= test2 << 5U;
    PoluluSortierenMitRandom_DW.state_c[0] = r_0;
    PoluluSortierenMitRandom_DW.state_c[1] = test2;
    r = (real_T)(r_0 + test2) * 2.328306436538696E-10;
  } else {
    if (!PoluluSortierenMitRandom_DW.state_not_empty_m) {
      memset(&PoluluSortierenMitRandom_DW.state_p[0], 0, 625U * sizeof(uint32_T));
      r_0 = 5489UL;
      PoluluSortierenMitRandom_DW.state_p[0] = 5489UL;
      for (b_mti = 0; b_mti < 623; b_mti++) {
        r_0 = (uint32_T)((r_0 >> 30 ^ r_0) * 1812433253ULL) + (b_mti + 1);
        PoluluSortierenMitRandom_DW.state_p[b_mti + 1] = r_0;
      }

      PoluluSortierenMitRandom_DW.state_p[624] = 624UL;
      PoluluSortierenMitRandom_DW.state_not_empty_m = true;
    }

    memcpy(&PoluluSortierenMitRandom_B.uv0[0],
           &PoluluSortierenMitRandom_DW.state_p[0], 625U * sizeof(uint32_T));
    PoluluSortie_eml_rand_mt19937ar(PoluluSortierenMitRandom_B.uv0,
      PoluluSortierenMitRandom_DW.state_p, &r);
  }

  return r;
}

/* Function for Chart: '<Root>/Chart' */
static real_T PoluluSortierenMitRand_sekunden(void)
{
  real_T sekundenanzahl;
  if ((PoluluSortierenMitRandom_DW.positionLinks == 0.0) &&
      (PoluluSortierenMitRandom_B.rechts == 1.0)) {
    sekundenanzahl = 0.2;
  } else if ((PoluluSortierenMitRandom_DW.positionLinks == 1.0) &&
             (PoluluSortierenMitRandom_B.rechts == 0.0)) {
    sekundenanzahl = 0.2;
  } else {
    sekundenanzahl = 0.5;
  }

  return sekundenanzahl;
}

static uint32_T PoluluSortieren_eml_rand_str2id(void)
{
  return 7UL;
}

/* Model step function for TID0 */
void PoluluSortierenMitRandom_step0(void) /* Sample time: [2.0E-5s, 0.0s] */
{
  boolean_T rtb_VergleichmitSchwellwert;
  boolean_T rtb_VergleichmitSchwellwert_f;
  real_T rtb_MultiportSwitch_j_idx_0;
  real_T rtb_MultiportSwitch_j_idx_1;
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
  switch ((int16_T)PoluluSortierenMitRandom_P.EdgeDetector1_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = PoluluSortierenMitRandom_P.posedge_Value[0];
    rtb_MultiportSwitch_idx_1 = PoluluSortierenMitRandom_P.posedge_Value[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = PoluluSortierenMitRandom_P.negedge_Value[0];
    rtb_MultiportSwitch_idx_1 = PoluluSortierenMitRandom_P.negedge_Value[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = PoluluSortierenMitRandom_P.eitheredge_Value[0];
    rtb_MultiportSwitch_idx_1 = PoluluSortierenMitRandom_P.eitheredge_Value[1];
    break;
  }

  /* End of MultiPortSwitch: '<S3>/Multiport Switch' */

  /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
   *  Constant: '<S4>/Constant1'
   *  Constant: '<S4>/either edge'
   *  Constant: '<S4>/neg. edge'
   *  Constant: '<S4>/pos. edge'
   */
  switch ((int16_T)PoluluSortierenMitRandom_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenMitRandom_P.posedge_Value_c[0];
    rtb_MultiportSwitch_j_idx_1 = PoluluSortierenMitRandom_P.posedge_Value_c[1];
    break;

   case 2:
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenMitRandom_P.negedge_Value_i[0];
    rtb_MultiportSwitch_j_idx_1 = PoluluSortierenMitRandom_P.negedge_Value_i[1];
    break;

   default:
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenMitRandom_P.eitheredge_Value_k
      [0];
    rtb_MultiportSwitch_j_idx_1 = PoluluSortierenMitRandom_P.eitheredge_Value_k
      [1];
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
    PoluluSortierenMitRandom_B.AnalogDigitalWandlungSampletime =
      (AdcRegs.ADCRESULT0) >> 4;
    PoluluSortierenMitRandom_B.AnalogDigitalWandlungSampleti_b =
      (AdcRegs.ADCRESULT1) >> 4;
  }

  /* RelationalOperator: '<S2>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S2>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert =
    (PoluluSortierenMitRandom_B.AnalogDigitalWandlungSampleti_b <=
     PoluluSortierenMitRandom_P.HeuristischermittelterSchwellwe);

  /* Outputs for Enabled SubSystem: '<S4>/POSITIVE Edge' */
  /* Memory: '<S4>/Memory' */
  PoluluSortiere_POSITIVEEdge(rtb_MultiportSwitch_j_idx_0,
    rtb_VergleichmitSchwellwert,
    PoluluSortierenMitRandom_DW.Memory_PreviousInput,
    &PoluluSortierenMitRandom_B.RelationalOperator1);

  /* End of Outputs for SubSystem: '<S4>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S4>/NEGATIVE Edge' */
  PoluluSortiere_NEGATIVEEdge(rtb_MultiportSwitch_j_idx_1,
    rtb_VergleichmitSchwellwert,
    PoluluSortierenMitRandom_DW.Memory_PreviousInput,
    &PoluluSortierenMitRandom_B.RelationalOperator1_e);

  /* End of Outputs for SubSystem: '<S4>/NEGATIVE Edge' */

  /* RelationalOperator: '<S2>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S2>/Constant'
   */
  rtb_VergleichmitSchwellwert_f = (PoluluSortierenMitRandom_P.Constant_Value <=
    PoluluSortierenMitRandom_B.AnalogDigitalWandlungSampletime);

  /* MATLAB Function: '<S2>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S2>/Unit Delay3'
   *  UnitDelay: '<S2>/Unit Delay4'
   *  UnitDelay: '<S2>/Unit Delay5'
   */
  rtb_MultiportSwitch_j_idx_0 = 1.0;
  tmp_0 = !PoluluSortierenMitRandom_DW.UnitDelay3_DSTATE;
  tmp_1 = !PoluluSortierenMitRandom_DW.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert_f) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenMitRandom_DW.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert_f) && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_j_idx_0 = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert_f && (!rtb_VergleichmitSchwellwert)) {
    rtb_MultiportSwitch_j_idx_0 = -1.0;
  }

  tmp_0 = (tmp_0 && PoluluSortierenMitRandom_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_f) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_j_idx_0 = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert_f) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenMitRandom_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_f && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_j_idx_0 = 1.0;
  }

  tmp_0 = (PoluluSortierenMitRandom_DW.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_f) && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_j_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_f && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenMitRandom_DW.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_f && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_j_idx_0 = -1.0;
  }

  tmp_0 = (PoluluSortierenMitRandom_DW.UnitDelay3_DSTATE &&
           PoluluSortierenMitRandom_DW.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert_f) && rtb_VergleichmitSchwellwert)
  {
    rtb_MultiportSwitch_j_idx_0 = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_f && (!rtb_VergleichmitSchwellwert))
  {
    rtb_MultiportSwitch_j_idx_0 = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert_f && rtb_VergleichmitSchwellwert) {
    rtb_MultiportSwitch_j_idx_0 = PoluluSortierenMitRandom_DW.UnitDelay5_DSTATE;
  }

  PoluluSortierenMitRandom_B.RL = (rtb_MultiportSwitch_j_idx_0 == 1.0);
  PoluluSortierenMitRandom_DW.UnitDelay5_DSTATE = rtb_MultiportSwitch_j_idx_0;

  /* End of MATLAB Function: '<S2>/MATLAB Function2' */

  /* MATLAB Function: '<S2>/MATLAB Function3' incorporates:
   *  Logic: '<S4>/Logical Operator1'
   *  Product: '<S2>/Product'
   *  UnitDelay: '<S2>/Unit Delay2'
   *  UnitDelay: '<S2>/Unit Delay5'
   */
  PoluluSorti_MATLABFunction1(PoluluSortierenMitRandom_DW.UnitDelay5_DSTATE *
    (real_T)(PoluluSortierenMitRandom_B.RelationalOperator1 ||
             PoluluSortierenMitRandom_B.RelationalOperator1_e),
    PoluluSortierenMitRandom_DW.UnitDelay2_DSTATE,
    &PoluluSortierenMitRandom_DW.UnitDelay2_DSTATE);

  /* S-Function (c280xgpio_do): '<Root>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (PoluluSortierenMitRandom_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Outputs for Enabled SubSystem: '<S3>/POSITIVE Edge' */
  /* Memory: '<S3>/Memory' */
  PoluluSortiere_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_f,
    PoluluSortierenMitRandom_DW.Memory_PreviousInput_p,
    &PoluluSortierenMitRandom_B.RelationalOperator1_c);

  /* End of Outputs for SubSystem: '<S3>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S3>/NEGATIVE Edge' */
  PoluluSortiere_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_f,
    PoluluSortierenMitRandom_DW.Memory_PreviousInput_p,
    &PoluluSortierenMitRandom_B.RelationalOperator1_h);

  /* End of Outputs for SubSystem: '<S3>/NEGATIVE Edge' */

  /* MATLAB Function: '<S2>/MATLAB Function1' incorporates:
   *  Logic: '<S3>/Logical Operator1'
   *  Product: '<S2>/Product3'
   *  UnitDelay: '<S2>/Unit Delay1'
   *  UnitDelay: '<S2>/Unit Delay5'
   */
  PoluluSorti_MATLABFunction1((real_T)
    (PoluluSortierenMitRandom_B.RelationalOperator1_c ||
     PoluluSortierenMitRandom_B.RelationalOperator1_h) *
    PoluluSortierenMitRandom_DW.UnitDelay5_DSTATE,
    PoluluSortierenMitRandom_DW.UnitDelay1_DSTATE,
    &PoluluSortierenMitRandom_DW.UnitDelay1_DSTATE);

  /* Update for Memory: '<S4>/Memory' */
  PoluluSortierenMitRandom_DW.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S2>/Unit Delay3' */
  PoluluSortierenMitRandom_DW.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert_f;

  /* Update for UnitDelay: '<S2>/Unit Delay4' */
  PoluluSortierenMitRandom_DW.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for Memory: '<S3>/Memory' */
  PoluluSortierenMitRandom_DW.Memory_PreviousInput_p =
    rtb_VergleichmitSchwellwert_f;
}

/* Model step function for TID1 */
void PoluluSortierenMitRandom_step1(void) /* Sample time: [0.01s, 0.0s] */
{
  /* (no output/update code required) */
}

/* Model step function for TID2 */
void PoluluSortierenMitRandom_step2(void) /* Sample time: [1.0s, 0.0s] */
{
  real_T r;
  uint16_T tmp;

  /* MATLABSystem: '<Root>/Random Integer Generator' */
  r = PoluluSortierenMitRandom_rand();

  /* Chart: '<Root>/Chart' */
  if (PoluluSortierenMitRandom_DW.temporalCounter_i1 < MAX_uint32_T) {
    PoluluSortierenMitRandom_DW.temporalCounter_i1++;
  }

  if (PoluluSortierenMitRandom_DW.is_active_c3_PoluluSortierenMit == 0U) {
    PoluluSortierenMitRandom_DW.is_active_c3_PoluluSortierenMit = 1U;
    PoluluSortierenMitRandom_DW.is_c3_PoluluSortierenMitRandom =
      PoluluSortierenMit_IN_Startwert;
    PoluluSortierenMitRandom_B.stop = 100.0;
    PoluluSortierenMitRandom_DW.positionLinks = 0.0;
  } else {
    switch (PoluluSortierenMitRandom_DW.is_c3_PoluluSortierenMitRandom) {
     case PoluluSortierenM_IN_Linksdrehen:
      if (PoluluSortierenMitRandom_DW.temporalCounter_i1 >= (uint32_T)ceil
          (PoluluSortierenMitRandom_DW.x)) {
        PoluluSortierenMitRandom_DW.positionLinks = 1.0;
        PoluluSortierenMitRandom_DW.is_c3_PoluluSortierenMitRandom =
          PoluluSortierenMitRa_IN_Stoppen;
        PoluluSortierenMitRandom_DW.temporalCounter_i1 = 0UL;
        PoluluSortierenMitRandom_B.stop = 0.0;
      } else {
        PoluluSortierenMitRandom_B.rechts = 0.0;
        PoluluSortierenMitRandom_DW.x = PoluluSortierenMitRand_sekunden();
      }
      break;

     case PoluluSortieren_IN_Rechtsdrehen:
      if (PoluluSortierenMitRandom_DW.temporalCounter_i1 >= (uint32_T)ceil
          (PoluluSortierenMitRandom_DW.x)) {
        PoluluSortierenMitRandom_DW.positionLinks = 0.0;
        PoluluSortierenMitRandom_DW.is_c3_PoluluSortierenMitRandom =
          PoluluSortierenMitRa_IN_Stoppen;
        PoluluSortierenMitRandom_DW.temporalCounter_i1 = 0UL;
        PoluluSortierenMitRandom_B.stop = 0.0;
      } else {
        PoluluSortierenMitRandom_B.rechts = 1.0;
        PoluluSortierenMitRandom_DW.x = PoluluSortierenMitRand_sekunden();
      }
      break;

     case PoluluSortierenMit_IN_Startwert:
      PoluluSortierenMitRandom_DW.is_c3_PoluluSortierenMitRandom =
        PoluluSortierenMitR_IN_Stopende;
      PoluluSortierenMitRandom_B.stop = 100.0;
      break;

     case PoluluSortierenMitR_IN_Stopende:
      /* MATLABSystem: '<Root>/Random Integer Generator' */
      r = floor(r * 2.0);
      if (r < 256.0) {
        if (r >= 0.0) {
          tmp = (uint16_T)r;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = 255U;
      }

      switch ((int16_T)tmp) {
       case 0:
        PoluluSortierenMitRandom_DW.is_c3_PoluluSortierenMitRandom =
          PoluluSortierenM_IN_Linksdrehen;
        PoluluSortierenMitRandom_DW.temporalCounter_i1 = 0UL;
        PoluluSortierenMitRandom_B.rechts = 0.0;
        PoluluSortierenMitRandom_DW.x = PoluluSortierenMitRand_sekunden();
        break;

       case 1:
        PoluluSortierenMitRandom_DW.is_c3_PoluluSortierenMitRandom =
          PoluluSortieren_IN_Rechtsdrehen;
        PoluluSortierenMitRandom_DW.temporalCounter_i1 = 0UL;
        PoluluSortierenMitRandom_B.rechts = 1.0;
        PoluluSortierenMitRandom_DW.x = PoluluSortierenMitRand_sekunden();
        break;

       default:
        PoluluSortierenMitRandom_B.stop = 100.0;
        break;
      }
      break;

     default:
      if (PoluluSortierenMitRandom_DW.temporalCounter_i1 >= 4UL) {
        PoluluSortierenMitRandom_DW.is_c3_PoluluSortierenMitRandom =
          PoluluSortierenMitR_IN_Stopende;
        PoluluSortierenMitRandom_B.stop = 100.0;
      } else {
        PoluluSortierenMitRandom_B.stop = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  {
    if (PoluluSortierenMitRandom_B.rechts)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* S-Function (c280xpwm): '<Root>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD *
      PoluluSortierenMitRandom_B.stop * 0.01);
  }
}

/* Model initialize function */
void PoluluSortierenMitRandom_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)PoluluSortierenMitRandom_M, 0,
                sizeof(RT_MODEL_PoluluSortierenMitRa_T));

  /* block I/O */
  (void) memset(((void *) &PoluluSortierenMitRandom_B), 0,
                sizeof(B_PoluluSortierenMitRandom_T));

  /* states (dwork) */
  (void) memset((void *)&PoluluSortierenMitRandom_DW, 0,
                sizeof(DW_PoluluSortierenMitRandom_T));

  /* Start for S-Function (c280xadc): '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  if (adcInitFlag == 0) {
    InitAdc();
    adcInitFlag = 1;
  }

  config_ADC_A (1U, 16U, 0U, 0U, 0U);

  /* Start for S-Function (c280xgpio_do): '<Root>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  EALLOW;
  GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPBDIR.all |= 0x4;
  EDIS;

  /* Start for MATLABSystem: '<Root>/Random Integer Generator' */
  PoluluSortierenMitRandom_DW.method = PoluluSortieren_eml_rand_str2id();
  PoluluSortierenMitRandom_DW.state = 1144108930UL;
  PoluluSortierenMitRandom_DW.state_c[0] = 362436069UL;
  PoluluSortierenMitRandom_DW.state_c[1] = 521288629UL;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output1' */
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

  /* InitializeConditions for Memory: '<S4>/Memory' */
  PoluluSortierenMitRandom_DW.Memory_PreviousInput =
    PoluluSortierenMitRandom_P.EdgeDetector2_ic;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay3' */
  PoluluSortierenMitRandom_DW.UnitDelay3_DSTATE =
    PoluluSortierenMitRandom_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay4' */
  PoluluSortierenMitRandom_DW.UnitDelay4_DSTATE =
    PoluluSortierenMitRandom_P.UnitDelay4_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay5' */
  PoluluSortierenMitRandom_DW.UnitDelay5_DSTATE =
    PoluluSortierenMitRandom_P.UnitDelay5_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay2' */
  PoluluSortierenMitRandom_DW.UnitDelay2_DSTATE =
    PoluluSortierenMitRandom_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory' */
  PoluluSortierenMitRandom_DW.Memory_PreviousInput_p =
    PoluluSortierenMitRandom_P.EdgeDetector1_ic;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay1' */
  PoluluSortierenMitRandom_DW.UnitDelay1_DSTATE =
    PoluluSortierenMitRandom_P.UnitDelay1_InitialCondition;

  /* SystemInitialize for Enabled SubSystem: '<S4>/POSITIVE Edge' */
  PoluluSor_POSITIVEEdge_Init(&PoluluSortierenMitRandom_B.RelationalOperator1,
    &PoluluSortierenMitRandom_P.POSITIVEEdge_b);

  /* End of SystemInitialize for SubSystem: '<S4>/POSITIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S4>/NEGATIVE Edge' */
  PoluluSor_NEGATIVEEdge_Init(&PoluluSortierenMitRandom_B.RelationalOperator1_e,
    &PoluluSortierenMitRandom_P.NEGATIVEEdge_a);

  /* End of SystemInitialize for SubSystem: '<S4>/NEGATIVE Edge' */

  /* SystemInitialize for Chart: '<Root>/Chart' */
  PoluluSortierenMitRandom_DW.temporalCounter_i1 = 0UL;
  PoluluSortierenMitRandom_DW.is_active_c3_PoluluSortierenMit = 0U;
  PoluluSortierenMitRandom_DW.is_c3_PoluluSortierenMitRandom =
    PoluluSortie_IN_NO_ACTIVE_CHILD;
  PoluluSortierenMitRandom_DW.positionLinks = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S3>/POSITIVE Edge' */
  PoluluSor_POSITIVEEdge_Init(&PoluluSortierenMitRandom_B.RelationalOperator1_c,
    &PoluluSortierenMitRandom_P.POSITIVEEdge);

  /* End of SystemInitialize for SubSystem: '<S3>/POSITIVE Edge' */

  /* SystemInitialize for Enabled SubSystem: '<S3>/NEGATIVE Edge' */
  PoluluSor_NEGATIVEEdge_Init(&PoluluSortierenMitRandom_B.RelationalOperator1_h,
    &PoluluSortierenMitRandom_P.NEGATIVEEdge);

  /* End of SystemInitialize for SubSystem: '<S3>/NEGATIVE Edge' */
}

/* Model terminate function */
void PoluluSortierenMitRandom_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
