/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusVirtuelleTestumgebung.c
 *
 * Code generated for Simulink model 'SortierAlgorithmusVirtuelleTestumgebung'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Dec 16 15:51:27 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SortierAlgorithmusVirtuelleTestumgebung.h"
#include "SortierAlgorithmusVirtuelleTestumgebung_private.h"
#define SortierAlg_IN_SchrankeAktiviert (5U)
#define SortierAlgor_IN_NO_ACTIVE_CHILD (0U)
#define SortierAlgorit_IN_setupVariable (7U)
#define SortierAlgorith_IN_DetectedCube (3U)
#define SortierAlgorith_IN_Linksdrehen1 (2U)
#define SortierAlgorith_IN_Linksdrehen2 (3U)
#define SortierAlgorith_IN_Linksdrehen3 (4U)
#define SortierAlgorith_IN_Linksdrehen4 (5U)
#define SortierAlgorith_IN_Linksdrehen5 (6U)
#define SortierAlgorith_IN_Rechtsdrehen (7U)
#define SortierAlgorithm_IN_Linksdrehen (1U)
#define SortierAlgorithm_IN_closeKlappe (8U)
#define SortierAlgorithm_IN_waitForCube (25U)
#define SortierAlgorithmu_IN_cubeLoaded (6U)
#define SortierAlgorithmu_IN_firstEntry (9U)
#define SortierAlgorithmu_IN_openKlappe (17U)
#define SortierAlgorithmusV_IN_BlueCube (2U)
#define SortierAlgorithmusVi_IN_RedCube (4U)
#define SortierAlgorithmusVir_IN_wait_l (8U)
#define SortierAlgorithmusVirt_IN_Black (1U)
#define SortierAlgorithmusVirt_IN_wait1 (19U)
#define SortierAlgorithmusVirt_IN_wait2 (20U)
#define SortierAlgorithmusVirt_IN_wait3 (21U)
#define SortierAlgorithmusVirt_IN_wait4 (22U)
#define SortierAlgorithmusVirt_IN_wait5 (23U)
#define SortierAlgorithmusVirt_IN_wait6 (24U)
#define SortierAlgorithmusVirtu_IN_wait (18U)
#define SortierAlgorithmus_IN_goToZero1 (10U)
#define SortierAlgorithmus_IN_goToZero2 (11U)
#define SortierAlgorithmus_IN_goToZero3 (12U)
#define SortierAlgorithmus_IN_goToZero4 (13U)
#define SortierAlgorithmus_IN_goToZero5 (14U)
#define SortierAlgorithmus_IN_goToZero6 (15U)
#define SortierAlgorithmus_IN_goToZero7 (16U)

/* Block signals (default storage) */
B_SortierAlgorithmusVirtuelle_T SortierAlgorithmusVirtuelleTe_B;

/* Block states (default storage) */
DW_SortierAlgorithmusVirtuell_T SortierAlgorithmusVirtuelleT_DW;

/* Real-time model */
RT_MODEL_SortierAlgorithmusVi_T SortierAlgorithmusVirtuelleT_M_;
RT_MODEL_SortierAlgorithmusVi_T *const SortierAlgorithmusVirtuelleT_M =
  &SortierAlgorithmusVirtuelleT_M_;

/* Forward declaration for local functions */
static void SortierAlgorithmusV_waitForCube(void);
static void SortierAlgor_eml_rand_mt19937ar(const uint32_T state[625], uint32_T
  b_state[625], real_T *r);
static real_T SortierAlgorithmusVirtuell_rand(void);
static uint32_T SortierAlgorith_eml_rand_str2id(void);

/* Function for Chart: '<Root>/Chart1' */
static void SortierAlgorithmusV_waitForCube(void)
{
  if (SortierAlgorithmusVirtuelleTe_B.magacin == 0.0) {
    SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
      SortierAlgorithmus_IN_goToZero1;
  } else if (SortierAlgorithmusVirtuelleTe_B.magacin == 1.0) {
    SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
      SortierAlgorithmus_IN_goToZero2;
    SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
  } else if (SortierAlgorithmusVirtuelleTe_B.magacin == 6.0) {
    SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
      SortierAlgorithmus_IN_goToZero7;
  } else if (SortierAlgorithmusVirtuelleTe_B.magacin == 5.0) {
    SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
      SortierAlgorithmus_IN_goToZero6;
  } else if (SortierAlgorithmusVirtuelleTe_B.magacin == 4.0) {
    SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
      SortierAlgorithmus_IN_goToZero5;
  } else if (SortierAlgorithmusVirtuelleTe_B.magacin == 3.0) {
    SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
      SortierAlgorithmus_IN_goToZero4;
  } else if (SortierAlgorithmusVirtuelleTe_B.magacin == 2.0) {
    SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
      SortierAlgorithmus_IN_goToZero3;
  } else {
    if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f >= 5U) {
      SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithm_IN_waitForCube;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
    }
  }
}

static void SortierAlgor_eml_rand_mt19937ar(const uint32_T state[625], uint32_T
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

static real_T SortierAlgorithmusVirtuell_rand(void)
{
  real_T r;
  uint32_T r_0;
  int16_T b_mti;
  uint16_T hi;
  uint32_T test2;
  if (SortierAlgorithmusVirtuelleT_DW.method == 4UL) {
    /* Start for MATLABSystem: '<Root>/Random Integer Generator' */
    hi = (uint16_T)(SortierAlgorithmusVirtuelleT_DW.state / 127773UL);
    r_0 = (uint32_T)((SortierAlgorithmusVirtuelleT_DW.state - (uint32_T)(hi *
      127773ULL)) * 16807ULL);
    test2 = (uint32_T)(2836ULL * hi);
    if (r_0 < test2) {
      SortierAlgorithmusVirtuelleT_DW.state = ~(test2 - r_0) & 2147483647UL;
    } else {
      SortierAlgorithmusVirtuelleT_DW.state = r_0 - test2;
    }

    r = (real_T)SortierAlgorithmusVirtuelleT_DW.state * 4.6566128752457969E-10;
  } else if (SortierAlgorithmusVirtuelleT_DW.method == 5UL) {
    /* Start for MATLABSystem: '<Root>/Random Integer Generator' */
    r_0 = (uint32_T)(69069ULL * SortierAlgorithmusVirtuelleT_DW.state_a[0]) +
      1234567UL;
    test2 = SortierAlgorithmusVirtuelleT_DW.state_a[1] << 13U ^
      SortierAlgorithmusVirtuelleT_DW.state_a[1];
    test2 ^= test2 >> 17U;
    test2 ^= test2 << 5U;
    SortierAlgorithmusVirtuelleT_DW.state_a[0] = r_0;
    SortierAlgorithmusVirtuelleT_DW.state_a[1] = test2;
    r = (real_T)(r_0 + test2) * 2.328306436538696E-10;
  } else {
    if (!SortierAlgorithmusVirtuelleT_DW.state_not_empty_a) {
      memset(&SortierAlgorithmusVirtuelleT_DW.state_h[0], 0, 625U * sizeof
             (uint32_T));
      r_0 = 5489UL;
      SortierAlgorithmusVirtuelleT_DW.state_h[0] = 5489UL;
      for (b_mti = 0; b_mti < 623; b_mti++) {
        r_0 = (uint32_T)((r_0 >> 30 ^ r_0) * 1812433253ULL) + (b_mti + 1);
        SortierAlgorithmusVirtuelleT_DW.state_h[b_mti + 1] = r_0;
      }

      SortierAlgorithmusVirtuelleT_DW.state_h[624] = 624UL;
      SortierAlgorithmusVirtuelleT_DW.state_not_empty_a = true;
    }

    memcpy(&SortierAlgorithmusVirtuelleTe_B.uv0[0],
           &SortierAlgorithmusVirtuelleT_DW.state_h[0], 625U * sizeof(uint32_T));
    SortierAlgor_eml_rand_mt19937ar(SortierAlgorithmusVirtuelleTe_B.uv0,
      SortierAlgorithmusVirtuelleT_DW.state_h, &r);
  }

  return r;
}

static uint32_T SortierAlgorith_eml_rand_str2id(void)
{
  return 7UL;
}

/* Model step function */
void SortierAlgorithmusVirtuelleTestumgebung_step(void)
{
  /* Chart: '<Root>/Sortieralgorithmus' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   */
  if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 < 31U) {
    SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 = ((int16_T)
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 + 1) & 255U;
  }

  if (SortierAlgorithmusVirtuelleT_DW.is_active_c3_SortierAlgorithmus == 0U) {
    SortierAlgorithmusVirtuelleT_DW.is_active_c3_SortierAlgorithmus = 1U;
    SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
      SortierAlgorit_IN_setupVariable;
    SortierAlgorithmusVirtuelleTe_B.magacin = -1.0;
  } else {
    switch (SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel) {
     case SortierAlgorithmusVirt_IN_Black:
      SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
        SortierAlgorith_IN_DetectedCube;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 = 0U;
      break;

     case SortierAlgorithmusV_IN_BlueCube:
      SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
        SortierAlgorith_IN_DetectedCube;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 = 0U;
      break;

     case SortierAlgorith_IN_DetectedCube:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 >= 20U) {
        SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorithmu_IN_cubeLoaded;
        SortierAlgorithmusVirtuelleTe_B.magacin = -1.0;
      }
      break;

     case SortierAlgorithmusVi_IN_RedCube:
      SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
        SortierAlgorith_IN_DetectedCube;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 = 0U;
      break;

     case SortierAlg_IN_SchrankeAktiviert:
      if (SortierAlgorithmusVirtuelleTe_P.Constant1_Value > 2050.0) {
        SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorithmusVirt_IN_Black;
        SortierAlgorithmusVirtuelleTe_B.magacin = 7.0;
      } else if (SortierAlgorithmusVirtuelleTe_P.Constant1_Value < 1000.0) {
        SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorithmusVi_IN_RedCube;
        SortierAlgorithmusVirtuelleTe_B.magacin = 7.0;
      } else {
        if ((SortierAlgorithmusVirtuelleTe_P.Constant1_Value >= 1000.0) &&
            (SortierAlgorithmusVirtuelleTe_P.Constant1_Value <= 2050.0)) {
          SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
            SortierAlgorithmusV_IN_BlueCube;
          SortierAlgorithmusVirtuelleTe_B.magacin = 1.0;
        }
      }
      break;

     case SortierAlgorithmu_IN_cubeLoaded:
      if (SortierAlgorithmusVirtuelleTe_P.Constant_Value > 400.0) {
        SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorithmusVir_IN_wait_l;
        SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 = 0U;
      } else if (SortierAlgorithmusVirtuelleTe_P.Constant_Value < 400.0) {
        SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlg_IN_SchrankeAktiviert;
      } else {
        SortierAlgorithmusVirtuelleTe_B.magacin = -1.0;
      }
      break;

     case SortierAlgorit_IN_setupVariable:
      SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
        SortierAlgorithmu_IN_cubeLoaded;
      SortierAlgorithmusVirtuelleTe_B.magacin = -1.0;
      break;

     default:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 >= 3U) {
        SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorithmu_IN_cubeLoaded;
        SortierAlgorithmusVirtuelleTe_B.magacin = -1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Sortieralgorithmus' */

  /* Chart: '<Root>/Chart1' */
  if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f < 63U) {
    SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = ((int16_T)
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f + 1) & 255U;
  }

  if (SortierAlgorithmusVirtuelleT_DW.is_active_c1_SortierAlgorithmus == 0U) {
    SortierAlgorithmusVirtuelleT_DW.is_active_c1_SortierAlgorithmus = 1U;
    SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
      SortierAlgorithmu_IN_firstEntry;
    SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
  } else {
    switch (SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel) {
     case SortierAlgorithm_IN_Linksdrehen:
     case SortierAlgorith_IN_Linksdrehen1:
     case SortierAlgorith_IN_Linksdrehen2:
     case SortierAlgorith_IN_Linksdrehen3:
     case SortierAlgorith_IN_Linksdrehen4:
     case SortierAlgorith_IN_Linksdrehen5:
     case SortierAlgorith_IN_Rechtsdrehen:
      break;

     case SortierAlgorithm_IN_closeKlappe:
      SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithm_IN_waitForCube;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
      break;

     case SortierAlgorithmu_IN_firstEntry:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f >= 50U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithm_IN_waitForCube;
        SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
      }
      break;

     case SortierAlgorithmus_IN_goToZero1:
      SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithmusVirt_IN_wait2;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
      break;

     case SortierAlgorithmus_IN_goToZero2:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f >= 10U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithmusVirtu_IN_wait;
        SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
      }
      break;

     case SortierAlgorithmus_IN_goToZero3:
      SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithmusVirt_IN_wait1;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
      break;

     case SortierAlgorithmus_IN_goToZero4:
      SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithmusVirt_IN_wait3;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
      break;

     case SortierAlgorithmus_IN_goToZero5:
      SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithmusVirt_IN_wait4;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
      break;

     case SortierAlgorithmus_IN_goToZero6:
      SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithmusVirt_IN_wait5;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
      break;

     case SortierAlgorithmus_IN_goToZero7:
      SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithmusVirt_IN_wait6;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
      break;

     case SortierAlgorithmu_IN_openKlappe:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f >= 7U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithm_IN_closeKlappe;
      }
      break;

     case SortierAlgorithmusVirtu_IN_wait:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f >= 1U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithm_IN_Linksdrehen;
      }
      break;

     case SortierAlgorithmusVirt_IN_wait1:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f >= 1U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorith_IN_Linksdrehen1;
      }
      break;

     case SortierAlgorithmusVirt_IN_wait2:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f >= 1U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorith_IN_Rechtsdrehen;
      }
      break;

     case SortierAlgorithmusVirt_IN_wait3:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f >= 1U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorith_IN_Linksdrehen2;
      }
      break;

     case SortierAlgorithmusVirt_IN_wait4:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f >= 1U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorith_IN_Linksdrehen3;
      }
      break;

     case SortierAlgorithmusVirt_IN_wait5:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f >= 1U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorith_IN_Linksdrehen4;
      }
      break;

     case SortierAlgorithmusVirt_IN_wait6:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f >= 1U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorith_IN_Linksdrehen5;
      }
      break;

     default:
      SortierAlgorithmusV_waitForCube();
      break;
    }
  }

  /* End of Chart: '<Root>/Chart1' */

  /* MATLABSystem: '<Root>/Random Integer Generator' */
  SortierAlgorithmusVirtuell_rand();
}

/* Model initialize function */
void SortierAlgorithmusVirtuelleTestumgebung_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(SortierAlgorithmusVirtuelleT_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &SortierAlgorithmusVirtuelleTe_B), 0,
                sizeof(B_SortierAlgorithmusVirtuelle_T));

  /* states (dwork) */
  (void) memset((void *)&SortierAlgorithmusVirtuelleT_DW, 0,
                sizeof(DW_SortierAlgorithmusVirtuell_T));

  /* Machine initializer */
  SortierAlgorithmusVirtuelleT_DW.magacin = 0.0;

  /* Start for MATLABSystem: '<Root>/Random Integer Generator' */
  SortierAlgorithmusVirtuelleT_DW.method = SortierAlgorith_eml_rand_str2id();
  SortierAlgorithmusVirtuelleT_DW.state = 1144108930UL;
  SortierAlgorithmusVirtuelleT_DW.state_a[0] = 362436069UL;
  SortierAlgorithmusVirtuelleT_DW.state_a[1] = 521288629UL;

  /* SystemInitialize for Chart: '<Root>/Sortieralgorithmus' */
  SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 = 0U;
  SortierAlgorithmusVirtuelleT_DW.is_active_c3_SortierAlgorithmus = 0U;
  SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
    SortierAlgor_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/Chart1' */
  SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_f = 0U;
  SortierAlgorithmusVirtuelleT_DW.is_active_c1_SortierAlgorithmus = 0U;
  SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
    SortierAlgor_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void SortierAlgorithmusVirtuelleTestumgebung_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
