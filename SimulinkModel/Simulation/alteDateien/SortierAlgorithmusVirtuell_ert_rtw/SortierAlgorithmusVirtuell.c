/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusVirtuell.c
 *
 * Code generated for Simulink model 'SortierAlgorithmusVirtuell'.
 *
 * Model version                  : 1.121
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jan 19 19:29:10 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SortierAlgorithmusVirtuell.h"
#include "SortierAlgorithmusVirtuell_private.h"
#define IN_photoelectricBarrierActivate (6U)
#define SortierAlgor_IN_NO_ACTIVE_CHILD (0U)
#define SortierAlgorit_IN_setupVariable (7U)
#define SortierAlgorith_IN_DetectedCube (3U)
#define SortierAlgorithm_IN_goToMagacin (3U)
#define SortierAlgorithm_IN_waitForCube (7U)
#define SortierAlgorithmu_IN_cubeLoaded (5U)
#define SortierAlgorithmu_IN_firstEntry (2U)
#define SortierAlgorithmusV_IN_BlueCube (2U)
#define SortierAlgorithmusV_IN_goToZero (4U)
#define SortierAlgorithmusV_IN_openGate (5U)
#define SortierAlgorithmusVi_IN_RedCube (4U)
#define SortierAlgorithmusVir_IN_Update (2U)
#define SortierAlgorithmusVir_IN_wait_d (6U)
#define SortierAlgorithmusVirt_IN_Black (1U)
#define SortierAlgorithmusVirt_IN_Entry (1U)
#define SortierAlgorithmusVirt_IN_close (1U)
#define SortierAlgorithmusVirtu_IN_open (2U)
#define SortierAlgorithmusVirtu_IN_wait (3U)
#define SortierAlgorithmus_IN_closeGate (1U)

/* Block signals (default storage) */
B_SortierAlgorithmusVirtuell_T SortierAlgorithmusVirtuell_B;

/* Block states (default storage) */
DW_SortierAlgorithmusVirtuell_T SortierAlgorithmusVirtuell_DW;

/* Real-time model */
RT_MODEL_SortierAlgorithmusVi_T SortierAlgorithmusVirtuell_M_;
RT_MODEL_SortierAlgorithmusVi_T *const SortierAlgorithmusVirtuell_M =
  &SortierAlgorithmusVirtuell_M_;

/* Forward declaration for local functions */
static real_T SortierAlgorit_findPlaceForBlue(void);
static real_T SortierAlgorith_findPlaceForRed(void);
static void SortierAlgorithmusV_updateColor(void);
static void rate_monotonic_scheduler(void);
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
void SortierAlgorithmusVirtuell_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[2] = ((boolean_T)rtmStepTask(SortierAlgorithmusVirtuell_M, 2));
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
  if (SortierAlgorithmusVirtuell_M->Timing.TaskCounters.TID[1] == 0) {
    SortierAlgorithmusVirtuell_M->Timing.RateInteraction.TID1_2 =
      (SortierAlgorithmusVirtuell_M->Timing.TaskCounters.TID[2] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (SortierAlgorithmusVirtuell_M->Timing.TaskCounters.TID[2])++;
  if ((SortierAlgorithmusVirtuell_M->Timing.TaskCounters.TID[2]) > 99) {/* Sample time: [1.0s, 0.0s] */
    SortierAlgorithmusVirtuell_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Function for Chart: '<Root>/Sortieralgorithmus' */
static real_T SortierAlgorit_findPlaceForBlue(void)
{
  real_T magacinOut;
  if (SortierAlgorithmusVirtuell_DW.magacin0 == 0.0) {
    magacinOut = 0.0;
    SortierAlgorithmusVirtuell_DW.magacin0++;
  } else if ((SortierAlgorithmusVirtuell_DW.magacin2 == 0.0) ||
             ((SortierAlgorithmusVirtuell_DW.magacin2_LastCube == 2.0) &&
              (SortierAlgorithmusVirtuell_DW.magacin2 < 5.0))) {
    magacinOut = 2.0;
    SortierAlgorithmusVirtuell_DW.magacin2++;
    SortierAlgorithmusVirtuell_DW.magacin2_LastCube = 1.0;
  } else if ((SortierAlgorithmusVirtuell_DW.magacin1_LastCube == 2.0) &&
             (SortierAlgorithmusVirtuell_DW.magacin1 < 5.0)) {
    magacinOut = 1.0;
    SortierAlgorithmusVirtuell_DW.magacin1++;
    SortierAlgorithmusVirtuell_DW.magacin1_LastCube = 1.0;
  } else if (SortierAlgorithmusVirtuell_DW.magacin3 < 5.0) {
    magacinOut = 3.0;
    SortierAlgorithmusVirtuell_DW.magacin3++;
  } else if (SortierAlgorithmusVirtuell_DW.magacin4 < 5.0) {
    magacinOut = 4.0;
    SortierAlgorithmusVirtuell_DW.magacin4++;
  } else {
    magacinOut = 5.0;
    SortierAlgorithmusVirtuell_DW.magacin5++;
  }

  return magacinOut;
}

/* Function for Chart: '<Root>/Sortieralgorithmus' */
static real_T SortierAlgorith_findPlaceForRed(void)
{
  real_T magacinOut;
  if ((SortierAlgorithmusVirtuell_DW.magacin1 == 0.0) ||
      ((SortierAlgorithmusVirtuell_DW.magacin1_LastCube == 1.0) &&
       (SortierAlgorithmusVirtuell_DW.magacin1 < 5.0))) {
    magacinOut = 1.0;
    SortierAlgorithmusVirtuell_DW.magacin1++;
    SortierAlgorithmusVirtuell_DW.magacin1_LastCube = 2.0;
  } else if ((SortierAlgorithmusVirtuell_DW.magacin2_LastCube == 1.0) &&
             (SortierAlgorithmusVirtuell_DW.magacin2 < 5.0)) {
    magacinOut = 2.0;
    SortierAlgorithmusVirtuell_DW.magacin2++;
    SortierAlgorithmusVirtuell_DW.magacin2_LastCube = 2.0;
  } else if ((SortierAlgorithmusVirtuell_DW.magacin0 < 5.0) &&
             (SortierAlgorithmusVirtuell_DW.magacin0 > 0.0)) {
    magacinOut = 0.0;
    SortierAlgorithmusVirtuell_DW.magacin0++;
  } else {
    magacinOut = 3.0;
    SortierAlgorithmusVirtuell_DW.magacin3++;
  }

  return magacinOut;
}

/* Function for Chart: '<Root>/Chart2' */
static void SortierAlgorithmusV_updateColor(void)
{
  if (SortierAlgorithmusVirtuell_B.colourOut == 3.0) {
    if (SortierAlgorithmusVirtuell_B.b0 == 0.0) {
      SortierAlgorithmusVirtuell_B.b0 = 1.0;
    } else if (SortierAlgorithmusVirtuell_B.b1 == 0.0) {
      SortierAlgorithmusVirtuell_B.b1 = 1.0;
    } else if (SortierAlgorithmusVirtuell_B.b2 == 0.0) {
      SortierAlgorithmusVirtuell_B.b2 = 1.0;
    } else {
      if (SortierAlgorithmusVirtuell_B.b3 == 0.0) {
        SortierAlgorithmusVirtuell_B.b3 = 1.0;
      }
    }
  }
}

/* Model step function for TID0 */
void SortierAlgorithmusVirtuell_step0(void) /* Sample time: [0.0s, 0.0s] */
{
  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* RateTransition: '<Root>/Rate Transition' */
  if (SortierAlgorithmusVirtuell_M->Timing.RateInteraction.TID1_2) {
    SortierAlgorithmusVirtuell_B.RateTransition =
      SortierAlgorithmusVirtuell_DW.RateTransition_Buffer0;
  }

  /* End of RateTransition: '<Root>/Rate Transition' */

  /* Chart: '<Root>/Sortieralgorithmus' incorporates:
   *  UnitDelay: '<Root>/Unit Delay'
   */
  if (SortierAlgorithmusVirtuell_DW.temporalCounter_i1 < 511U) {
    SortierAlgorithmusVirtuell_DW.temporalCounter_i1++;
  }

  if (SortierAlgorithmusVirtuell_DW.is_active_c3_SortierAlgorithmus == 0U) {
    SortierAlgorithmusVirtuell_DW.is_active_c3_SortierAlgorithmus = 1U;
    SortierAlgorithmusVirtuell_DW.is_c3_SortierAlgorithmusVirtuel =
      SortierAlgorit_IN_setupVariable;
    SortierAlgorithmusVirtuell_DW.temporalCounter_i1 = 0U;
    SortierAlgorithmusVirtuell_DW.magacin0 = 0.0;
    SortierAlgorithmusVirtuell_DW.magacin1 = 0.0;
    SortierAlgorithmusVirtuell_DW.magacin2 = 0.0;
    SortierAlgorithmusVirtuell_DW.magacin3 = 0.0;
    SortierAlgorithmusVirtuell_DW.magacin4 = 0.0;
    SortierAlgorithmusVirtuell_DW.magacin5 = 0.0;
    SortierAlgorithmusVirtuell_DW.magacin1_LastCube = 0.0;
    SortierAlgorithmusVirtuell_DW.magacin2_LastCube = 0.0;
    SortierAlgorithmusVirtuell_B.magacin = -1.0;
  } else {
    switch (SortierAlgorithmusVirtuell_DW.is_c3_SortierAlgorithmusVirtuel) {
     case SortierAlgorithmusVirt_IN_Black:
      SortierAlgorithmusVirtuell_DW.is_c3_SortierAlgorithmusVirtuel =
        SortierAlgorith_IN_DetectedCube;
      break;

     case SortierAlgorithmusV_IN_BlueCube:
      SortierAlgorithmusVirtuell_DW.is_c3_SortierAlgorithmusVirtuel =
        SortierAlgorith_IN_DetectedCube;
      break;

     case SortierAlgorith_IN_DetectedCube:
      if (SortierAlgorithmusVirtuell_DW.UnitDelay_DSTATE == 0.0F) {
        SortierAlgorithmusVirtuell_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorithmu_IN_cubeLoaded;
        SortierAlgorithmusVirtuell_B.magacin = -1.0;
      }
      break;

     case SortierAlgorithmusVi_IN_RedCube:
      SortierAlgorithmusVirtuell_DW.is_c3_SortierAlgorithmusVirtuel =
        SortierAlgorith_IN_DetectedCube;
      break;

     case SortierAlgorithmu_IN_cubeLoaded:
      SortierAlgorithmusVirtuell_DW.is_c3_SortierAlgorithmusVirtuel =
        IN_photoelectricBarrierActivate;
      break;

     case IN_photoelectricBarrierActivate:
      if (SortierAlgorithmusVirtuell_B.RateTransition > 2150.0) {
        SortierAlgorithmusVirtuell_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorithmusVirt_IN_Black;
        SortierAlgorithmusVirtuell_B.magacin = 6.0;
        SortierAlgorithmusVirtuell_B.colourOut = 3.0;
      } else if ((SortierAlgorithmusVirtuell_B.RateTransition < 1000.0) &&
                 (SortierAlgorithmusVirtuell_B.RateTransition > 0.0)) {
        SortierAlgorithmusVirtuell_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorithmusVi_IN_RedCube;
        SortierAlgorithmusVirtuell_B.magacin = SortierAlgorith_findPlaceForRed();
        SortierAlgorithmusVirtuell_B.colourOut = 2.0;
      } else {
        if ((SortierAlgorithmusVirtuell_B.RateTransition >= 1000.0) &&
            (SortierAlgorithmusVirtuell_B.RateTransition <= 2150.0)) {
          SortierAlgorithmusVirtuell_DW.is_c3_SortierAlgorithmusVirtuel =
            SortierAlgorithmusV_IN_BlueCube;
          SortierAlgorithmusVirtuell_B.magacin = SortierAlgorit_findPlaceForBlue
            ();
          SortierAlgorithmusVirtuell_B.colourOut = 1.0;
        }
      }
      break;

     default:
      if (SortierAlgorithmusVirtuell_DW.temporalCounter_i1 >= 300U) {
        SortierAlgorithmusVirtuell_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorithmu_IN_cubeLoaded;
        SortierAlgorithmusVirtuell_B.magacin = -1.0;
      } else {
        SortierAlgorithmusVirtuell_DW.magacin0 = 0.0;
        SortierAlgorithmusVirtuell_DW.magacin1 = 0.0;
        SortierAlgorithmusVirtuell_DW.magacin2 = 0.0;
        SortierAlgorithmusVirtuell_DW.magacin3 = 0.0;
        SortierAlgorithmusVirtuell_DW.magacin4 = 0.0;
        SortierAlgorithmusVirtuell_DW.magacin5 = 0.0;
        SortierAlgorithmusVirtuell_DW.magacin1_LastCube = 0.0;
        SortierAlgorithmusVirtuell_DW.magacin2_LastCube = 0.0;
        SortierAlgorithmusVirtuell_B.magacin = -1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Sortieralgorithmus' */

  /* Chart: '<Root>/Chart1' incorporates:
   *  Lookup_n-D: '<Root>/1-D Lookup Table'
   */
  if (SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o < 511U) {
    SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o++;
  }

  if (SortierAlgorithmusVirtuell_DW.is_active_c1_SortierAlgorithmus == 0U) {
    SortierAlgorithmusVirtuell_DW.is_active_c1_SortierAlgorithmus = 1U;
    SortierAlgorithmusVirtuell_DW.is_c1_SortierAlgorithmusVirtuel =
      SortierAlgorithmu_IN_firstEntry;
    SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o = 0U;
  } else {
    switch (SortierAlgorithmusVirtuell_DW.is_c1_SortierAlgorithmusVirtuel) {
     case SortierAlgorithmus_IN_closeGate:
      SortierAlgorithmusVirtuell_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithm_IN_waitForCube;
      break;

     case SortierAlgorithmu_IN_firstEntry:
      if (SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o >= 300U) {
        SortierAlgorithmusVirtuell_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithm_IN_waitForCube;
      }
      break;

     case SortierAlgorithm_IN_goToMagacin:
      if (SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o >= 100U) {
        SortierAlgorithmusVirtuell_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithmusV_IN_openGate;
        SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o = 0U;
        SortierAlgorithmusVirtuell_B.signal = 1.0;
        SortierAlgorithmusVirtuell_B.sortCube = 0.0F;
      }
      break;

     case SortierAlgorithmusV_IN_goToZero:
      if (SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o >= 100U) {
        SortierAlgorithmusVirtuell_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithmusVir_IN_wait_d;
        SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o = 0U;
      } else {
        SortierAlgorithmusVirtuell_B.sortCube = 1.0F;
      }
      break;

     case SortierAlgorithmusV_IN_openGate:
      if (SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o >= 50U) {
        SortierAlgorithmusVirtuell_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithmus_IN_closeGate;
        SortierAlgorithmusVirtuell_B.signal = 0.0;
      } else {
        SortierAlgorithmusVirtuell_B.signal = 1.0;
        SortierAlgorithmusVirtuell_B.sortCube = 0.0F;
      }
      break;

     case SortierAlgorithmusVir_IN_wait_d:
      if (SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o >= 40U) {
        SortierAlgorithmusVirtuell_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithm_IN_goToMagacin;
        SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o = 0U;
      }
      break;

     default:
      if (look1_binlxpw(SortierAlgorithmusVirtuell_B.magacin,
                        SortierAlgorithmusVirtuell_P.uDLookupTable_bp01Data,
                        SortierAlgorithmusVirtuell_P.uDLookupTable_tableData,
                        7UL) != -1.0) {
        SortierAlgorithmusVirtuell_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithmusV_IN_goToZero;
        SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o = 0U;
        SortierAlgorithmusVirtuell_B.sortCube = 1.0F;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart1' */

  /* Chart: '<Root>/Chart' */
  if (SortierAlgorithmusVirtuell_DW.temporalCounter_i1_d < 31U) {
    SortierAlgorithmusVirtuell_DW.temporalCounter_i1_d = ((int16_T)
      SortierAlgorithmusVirtuell_DW.temporalCounter_i1_d + 1) & 255U;
  }

  if (SortierAlgorithmusVirtuell_DW.is_active_c2_SortierAlgorithmus == 0U) {
    SortierAlgorithmusVirtuell_DW.is_active_c2_SortierAlgorithmus = 1U;
    SortierAlgorithmusVirtuell_DW.is_c2_SortierAlgorithmusVirtuel =
      SortierAlgorithmusVirtu_IN_wait;
    SortierAlgorithmusVirtuell_B.cubeFinished = 1.0F;
  } else {
    switch (SortierAlgorithmusVirtuell_DW.is_c2_SortierAlgorithmusVirtuel) {
     case SortierAlgorithmusVirt_IN_close:
      if (SortierAlgorithmusVirtuell_DW.temporalCounter_i1_d >= 30U) {
        SortierAlgorithmusVirtuell_DW.is_c2_SortierAlgorithmusVirtuel =
          SortierAlgorithmusVirtu_IN_wait;
        SortierAlgorithmusVirtuell_B.cubeFinished = 1.0F;
      }
      break;

     case SortierAlgorithmusVirtu_IN_open:
      if (SortierAlgorithmusVirtuell_DW.temporalCounter_i1_d >= 30U) {
        SortierAlgorithmusVirtuell_DW.is_c2_SortierAlgorithmusVirtuel =
          SortierAlgorithmusVirt_IN_close;
        SortierAlgorithmusVirtuell_DW.temporalCounter_i1_d = 0U;
      } else {
        SortierAlgorithmusVirtuell_B.cubeFinished = 0.0F;
      }
      break;

     default:
      if (SortierAlgorithmusVirtuell_B.signal == 1.0) {
        SortierAlgorithmusVirtuell_DW.is_c2_SortierAlgorithmusVirtuel =
          SortierAlgorithmusVirtu_IN_open;
        SortierAlgorithmusVirtuell_DW.temporalCounter_i1_d = 0U;
        SortierAlgorithmusVirtuell_B.cubeFinished = 0.0F;
      } else {
        SortierAlgorithmusVirtuell_B.cubeFinished = 1.0F;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Chart: '<Root>/Chart2' */
  if (SortierAlgorithmusVirtuell_DW.is_active_c5_SortierAlgorithmus == 0U) {
    SortierAlgorithmusVirtuell_DW.is_active_c5_SortierAlgorithmus = 1U;
    SortierAlgorithmusVirtuell_DW.is_c5_SortierAlgorithmusVirtuel =
      SortierAlgorithmusVirt_IN_Entry;
    SortierAlgorithmusVirtuell_B.b1 = 0.0;
    SortierAlgorithmusVirtuell_B.b2 = 0.0;
    SortierAlgorithmusVirtuell_B.b3 = 0.0;
    SortierAlgorithmusVirtuell_B.b0 = 0.0;
  } else if (SortierAlgorithmusVirtuell_DW.is_c5_SortierAlgorithmusVirtuel == 1U)
  {
    SortierAlgorithmusVirtuell_DW.is_c5_SortierAlgorithmusVirtuel =
      SortierAlgorithmusVir_IN_Update;
    SortierAlgorithmusV_updateColor();
  } else {
    SortierAlgorithmusV_updateColor();
  }

  /* End of Chart: '<Root>/Chart2' */

  /* Sum: '<Root>/Sum' incorporates:
   *  UnitDelay: '<Root>/Unit Delay'
   */
  SortierAlgorithmusVirtuell_DW.UnitDelay_DSTATE =
    SortierAlgorithmusVirtuell_B.sortCube +
    SortierAlgorithmusVirtuell_B.cubeFinished;

  /* FromWorkspace: '<S6>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      SortierAlgorithmusVirtuell_DW.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *)
      SortierAlgorithmusVirtuell_DW.FromWs_PWORK.TimePtr;
    int_T currTimeIndex = SortierAlgorithmusVirtuell_DW.FromWs_IWORK.PrevIndex;
    real_T t = SortierAlgorithmusVirtuell_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[29]) {
      currTimeIndex = 28;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    SortierAlgorithmusVirtuell_DW.FromWs_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          SortierAlgorithmusVirtuell_B.FromWs = pDataValues[currTimeIndex];
        } else {
          SortierAlgorithmusVirtuell_B.FromWs = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        SortierAlgorithmusVirtuell_B.FromWs = (real_T) rtInterpolate(d1, d2, f1,
          f2);
        pDataValues += 30;
      }
    }
  }

  /* RateTransition: '<S4>/TmpRTBAtDelayInport1' */
  if (SortierAlgorithmusVirtuell_M->Timing.RateInteraction.TID1_2) {
    SortierAlgorithmusVirtuell_B.TmpRTBAtDelayInport1 =
      SortierAlgorithmusVirtuell_B.FromWs;
  }

  /* End of RateTransition: '<S4>/TmpRTBAtDelayInport1' */

  /* FromWorkspace: '<S7>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      SortierAlgorithmusVirtuell_DW.FromWs_PWORK_g.DataPtr;
    real_T *pTimeValues = (real_T *)
      SortierAlgorithmusVirtuell_DW.FromWs_PWORK_g.TimePtr;
    int_T currTimeIndex = SortierAlgorithmusVirtuell_DW.FromWs_IWORK_h.PrevIndex;
    real_T t = SortierAlgorithmusVirtuell_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[19]) {
      currTimeIndex = 18;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    SortierAlgorithmusVirtuell_DW.FromWs_IWORK_h.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          SortierAlgorithmusVirtuell_B.FromWs_o = pDataValues[currTimeIndex];
        } else {
          SortierAlgorithmusVirtuell_B.FromWs_o = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        SortierAlgorithmusVirtuell_B.FromWs_o = (real_T) rtInterpolate(d1, d2,
          f1, f2);
        pDataValues += 20;
      }
    }
  }

  /* RateTransition: '<S4>/TmpRTBAtDelay4Inport1' */
  if (SortierAlgorithmusVirtuell_M->Timing.RateInteraction.TID1_2) {
    SortierAlgorithmusVirtuell_B.TmpRTBAtDelay4Inport1 =
      SortierAlgorithmusVirtuell_B.FromWs_o;
  }

  /* End of RateTransition: '<S4>/TmpRTBAtDelay4Inport1' */

  /* FromWorkspace: '<S8>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      SortierAlgorithmusVirtuell_DW.FromWs_PWORK_f.DataPtr;
    real_T *pTimeValues = (real_T *)
      SortierAlgorithmusVirtuell_DW.FromWs_PWORK_f.TimePtr;
    int_T currTimeIndex = SortierAlgorithmusVirtuell_DW.FromWs_IWORK_b.PrevIndex;
    real_T t = SortierAlgorithmusVirtuell_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[19]) {
      currTimeIndex = 18;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    SortierAlgorithmusVirtuell_DW.FromWs_IWORK_b.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          SortierAlgorithmusVirtuell_B.FromWs_m = pDataValues[currTimeIndex];
        } else {
          SortierAlgorithmusVirtuell_B.FromWs_m = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        SortierAlgorithmusVirtuell_B.FromWs_m = (real_T) rtInterpolate(d1, d2,
          f1, f2);
        pDataValues += 20;
      }
    }
  }

  /* RateTransition: '<S4>/TmpRTBAtDelay5Inport1' */
  if (SortierAlgorithmusVirtuell_M->Timing.RateInteraction.TID1_2) {
    SortierAlgorithmusVirtuell_B.TmpRTBAtDelay5Inport1 =
      SortierAlgorithmusVirtuell_B.FromWs_m;
  }

  /* End of RateTransition: '<S4>/TmpRTBAtDelay5Inport1' */

  /* FromWorkspace: '<S9>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      SortierAlgorithmusVirtuell_DW.FromWs_PWORK_l.DataPtr;
    real_T *pTimeValues = (real_T *)
      SortierAlgorithmusVirtuell_DW.FromWs_PWORK_l.TimePtr;
    int_T currTimeIndex = SortierAlgorithmusVirtuell_DW.FromWs_IWORK_m.PrevIndex;
    real_T t = SortierAlgorithmusVirtuell_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[12]) {
      currTimeIndex = 11;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    SortierAlgorithmusVirtuell_DW.FromWs_IWORK_m.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          SortierAlgorithmusVirtuell_B.FromWs_j = pDataValues[currTimeIndex];
        } else {
          SortierAlgorithmusVirtuell_B.FromWs_j = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        SortierAlgorithmusVirtuell_B.FromWs_j = (real_T) rtInterpolate(d1, d2,
          f1, f2);
        pDataValues += 13;
      }
    }
  }

  /* RateTransition: '<S4>/TmpRTBAtDelay7Inport1' */
  if (SortierAlgorithmusVirtuell_M->Timing.RateInteraction.TID1_2) {
    SortierAlgorithmusVirtuell_B.TmpRTBAtDelay7Inport1 =
      SortierAlgorithmusVirtuell_B.FromWs_j;
  }

  /* End of RateTransition: '<S4>/TmpRTBAtDelay7Inport1' */

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  SortierAlgorithmusVirtuell_M->Timing.t[0] =
    (++SortierAlgorithmusVirtuell_M->Timing.clockTick0) *
    SortierAlgorithmusVirtuell_M->Timing.stepSize0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.01, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  SortierAlgorithmusVirtuell_M->Timing.clockTick1++;
}

/* Model step function for TID2 */
void SortierAlgorithmusVirtuell_step2(void) /* Sample time: [1.0s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_Delay;
  real_T rtb_Delay1;
  real_T rtb_Delay2;
  real_T rtb_Delay5;
  real_T rtb_Sum6;
  int_T idxDelay;

  /* Delay: '<S4>/Delay' */
  rtb_Delay = SortierAlgorithmusVirtuell_DW.Delay_DSTATE[0];

  /* Delay: '<S4>/Delay1' */
  rtb_Delay1 = SortierAlgorithmusVirtuell_DW.Delay1_DSTATE[0];

  /* Delay: '<S4>/Delay2' */
  rtb_Delay2 = SortierAlgorithmusVirtuell_DW.Delay2_DSTATE[0];

  /* Delay: '<S4>/Delay5' */
  rtb_Delay5 = SortierAlgorithmusVirtuell_DW.Delay5_DSTATE[0];

  /* Sum: '<S4>/Sum6' incorporates:
   *  Delay: '<S4>/Delay3'
   *  Delay: '<S4>/Delay4'
   *  Delay: '<S4>/Delay6'
   *  Delay: '<S4>/Delay7'
   *  Sum: '<S4>/Sum'
   *  Sum: '<S4>/Sum1'
   *  Sum: '<S4>/Sum2'
   *  Sum: '<S4>/Sum3'
   *  Sum: '<S4>/Sum4'
   *  Sum: '<S4>/Sum5'
   */
  rtb_Sum6 = ((((((rtb_Delay + rtb_Delay1) + rtb_Delay2) +
                 SortierAlgorithmusVirtuell_DW.Delay3_DSTATE[0]) +
                SortierAlgorithmusVirtuell_DW.Delay4_DSTATE[0]) + rtb_Delay5) +
              SortierAlgorithmusVirtuell_DW.Delay6_DSTATE[0]) +
    SortierAlgorithmusVirtuell_DW.Delay7_DSTATE[0];

  /* Update for RateTransition: '<Root>/Rate Transition' */
  SortierAlgorithmusVirtuell_DW.RateTransition_Buffer0 = rtb_Sum6;

  /* Update for Delay: '<S4>/Delay' */
  SortierAlgorithmusVirtuell_DW.Delay_DSTATE[0] =
    SortierAlgorithmusVirtuell_DW.Delay_DSTATE[1];
  SortierAlgorithmusVirtuell_DW.Delay_DSTATE[1] =
    SortierAlgorithmusVirtuell_DW.Delay_DSTATE[2];
  SortierAlgorithmusVirtuell_DW.Delay_DSTATE[2] =
    SortierAlgorithmusVirtuell_DW.Delay_DSTATE[3];
  SortierAlgorithmusVirtuell_DW.Delay_DSTATE[3] =
    SortierAlgorithmusVirtuell_B.TmpRTBAtDelayInport1;
  for (idxDelay = 0; idxDelay < 17; idxDelay++) {
    /* Update for Delay: '<S4>/Delay1' */
    SortierAlgorithmusVirtuell_DW.Delay1_DSTATE[idxDelay] =
      SortierAlgorithmusVirtuell_DW.Delay1_DSTATE[idxDelay + 1];

    /* Update for Delay: '<S4>/Delay2' */
    SortierAlgorithmusVirtuell_DW.Delay2_DSTATE[idxDelay] =
      SortierAlgorithmusVirtuell_DW.Delay2_DSTATE[idxDelay + 1];

    /* Update for Delay: '<S4>/Delay3' */
    SortierAlgorithmusVirtuell_DW.Delay3_DSTATE[idxDelay] =
      SortierAlgorithmusVirtuell_DW.Delay3_DSTATE[idxDelay + 1];
  }

  /* Update for Delay: '<S4>/Delay1' */
  SortierAlgorithmusVirtuell_DW.Delay1_DSTATE[17] = rtb_Delay;

  /* Update for Delay: '<S4>/Delay2' */
  SortierAlgorithmusVirtuell_DW.Delay2_DSTATE[17] = rtb_Delay1;

  /* Update for Delay: '<S4>/Delay3' */
  SortierAlgorithmusVirtuell_DW.Delay3_DSTATE[17] = rtb_Delay2;

  /* Update for Delay: '<S4>/Delay4' */
  for (idxDelay = 0; idxDelay < 75; idxDelay++) {
    SortierAlgorithmusVirtuell_DW.Delay4_DSTATE[idxDelay] =
      SortierAlgorithmusVirtuell_DW.Delay4_DSTATE[idxDelay + 1];
  }

  SortierAlgorithmusVirtuell_DW.Delay4_DSTATE[75] =
    SortierAlgorithmusVirtuell_B.TmpRTBAtDelay4Inport1;

  /* End of Update for Delay: '<S4>/Delay4' */

  /* Update for Delay: '<S4>/Delay5' */
  for (idxDelay = 0; idxDelay < 84; idxDelay++) {
    SortierAlgorithmusVirtuell_DW.Delay5_DSTATE[idxDelay] =
      SortierAlgorithmusVirtuell_DW.Delay5_DSTATE[idxDelay + 1];
  }

  SortierAlgorithmusVirtuell_DW.Delay5_DSTATE[84] =
    SortierAlgorithmusVirtuell_B.TmpRTBAtDelay5Inport1;

  /* End of Update for Delay: '<S4>/Delay5' */

  /* Update for Delay: '<S4>/Delay6' */
  for (idxDelay = 0; idxDelay < 9; idxDelay++) {
    SortierAlgorithmusVirtuell_DW.Delay6_DSTATE[idxDelay] =
      SortierAlgorithmusVirtuell_DW.Delay6_DSTATE[idxDelay + 1];
  }

  SortierAlgorithmusVirtuell_DW.Delay6_DSTATE[9] = rtb_Delay5;

  /* End of Update for Delay: '<S4>/Delay6' */

  /* Update for Delay: '<S4>/Delay7' */
  for (idxDelay = 0; idxDelay < 104; idxDelay++) {
    SortierAlgorithmusVirtuell_DW.Delay7_DSTATE[idxDelay] =
      SortierAlgorithmusVirtuell_DW.Delay7_DSTATE[idxDelay + 1];
  }

  SortierAlgorithmusVirtuell_DW.Delay7_DSTATE[104] =
    SortierAlgorithmusVirtuell_B.TmpRTBAtDelay7Inport1;

  /* End of Update for Delay: '<S4>/Delay7' */
}

/* Model initialize function */
void SortierAlgorithmusVirtuell_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)SortierAlgorithmusVirtuell_M, 0,
                sizeof(RT_MODEL_SortierAlgorithmusVi_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&SortierAlgorithmusVirtuell_M->solverInfo,
                          &SortierAlgorithmusVirtuell_M->Timing.simTimeStep);
    rtsiSetTPtr(&SortierAlgorithmusVirtuell_M->solverInfo, &rtmGetTPtr
                (SortierAlgorithmusVirtuell_M));
    rtsiSetStepSizePtr(&SortierAlgorithmusVirtuell_M->solverInfo,
                       &SortierAlgorithmusVirtuell_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&SortierAlgorithmusVirtuell_M->solverInfo,
                          (&rtmGetErrorStatus(SortierAlgorithmusVirtuell_M)));
    rtsiSetRTModelPtr(&SortierAlgorithmusVirtuell_M->solverInfo,
                      SortierAlgorithmusVirtuell_M);
  }

  rtsiSetSimTimeStep(&SortierAlgorithmusVirtuell_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&SortierAlgorithmusVirtuell_M->solverInfo,
                    "FixedStepDiscrete");
  rtmSetTPtr(SortierAlgorithmusVirtuell_M,
             &SortierAlgorithmusVirtuell_M->Timing.tArray[0]);
  SortierAlgorithmusVirtuell_M->Timing.stepSize0 = 0.01;

  /* block I/O */
  (void) memset(((void *) &SortierAlgorithmusVirtuell_B), 0,
                sizeof(B_SortierAlgorithmusVirtuell_T));

  /* states (dwork) */
  (void) memset((void *)&SortierAlgorithmusVirtuell_DW, 0,
                sizeof(DW_SortierAlgorithmusVirtuell_T));

  {
    int16_T i;

    /* Machine initializer */
    SortierAlgorithmusVirtuell_DW.magacin = 0.0;
    SortierAlgorithmusVirtuell_DW.A = 0.0;

    /* Start for RateTransition: '<Root>/Rate Transition' */
    SortierAlgorithmusVirtuell_B.RateTransition =
      SortierAlgorithmusVirtuell_P.RateTransition_InitialCondition;

    /* Start for FromWorkspace: '<S6>/FromWs' */
    {
      static real_T pTimeValues0[] = { 0.0, 1.0, 1.0, 3.0, 3.0, 4.0, 4.0, 6.0,
        6.0, 7.0, 7.0, 9.0, 9.0, 10.0, 10.0, 12.0, 12.0, 13.0, 13.0, 15.0, 15.0,
        16.0, 16.0, 21.5, 23.3, 24.55, 25.55, 26.700000000000003, 28.05, 30.0 } ;

      static real_T pDataValues0[] = { 1800.0, 1800.0, 0.0, 0.0, 1800.0, 1800.0,
        0.0, 0.0, 2700.0, 2700.0, 0.0, 0.0, 200.0, 200.0, 0.0, 0.0, 1800.0,
        1800.0, 0.0, 0.0, 250.0, 250.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      ;

      SortierAlgorithmusVirtuell_DW.FromWs_PWORK.TimePtr = (void *) pTimeValues0;
      SortierAlgorithmusVirtuell_DW.FromWs_PWORK.DataPtr = (void *) pDataValues0;
      SortierAlgorithmusVirtuell_DW.FromWs_IWORK.PrevIndex = 0;
    }

    /* Start for FromWorkspace: '<S7>/FromWs' */
    {
      static real_T pTimeValues0[] = { 0.0, 1.0, 1.0, 3.0, 3.0, 4.0, 4.0, 6.0,
        6.0, 7.0, 7.0, 9.0, 12.0, 21.5, 23.3, 24.55, 25.55, 26.700000000000003,
        28.05, 30.0 } ;

      static real_T pDataValues0[] = { 1800.0, 1800.0, 0.0, 0.0, 1800.0, 1800.0,
        0.0, 0.0, 250.0, 250.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
      } ;

      SortierAlgorithmusVirtuell_DW.FromWs_PWORK_g.TimePtr = (void *)
        pTimeValues0;
      SortierAlgorithmusVirtuell_DW.FromWs_PWORK_g.DataPtr = (void *)
        pDataValues0;
      SortierAlgorithmusVirtuell_DW.FromWs_IWORK_h.PrevIndex = 0;
    }

    /* Start for FromWorkspace: '<S8>/FromWs' */
    {
      static real_T pTimeValues0[] = { 0.0, 1.0, 1.0, 3.0, 3.0, 4.0, 4.0, 6.0,
        6.0, 7.0, 7.0, 9.0, 12.0, 21.5, 23.3, 24.55, 25.55, 26.700000000000003,
        28.05, 30.0 } ;

      static real_T pDataValues0[] = { 1800.0, 1800.0, 0.0, 0.0, 1800.0, 1800.0,
        0.0, 0.0, 1800.0, 1800.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0 } ;

      SortierAlgorithmusVirtuell_DW.FromWs_PWORK_f.TimePtr = (void *)
        pTimeValues0;
      SortierAlgorithmusVirtuell_DW.FromWs_PWORK_f.DataPtr = (void *)
        pDataValues0;
      SortierAlgorithmusVirtuell_DW.FromWs_IWORK_b.PrevIndex = 0;
    }

    /* Start for FromWorkspace: '<S9>/FromWs' */
    {
      static real_T pTimeValues0[] = { 0.0, 1.0, 1.0, 7.0, 9.0, 12.0, 21.5, 23.3,
        24.55, 25.55, 26.700000000000003, 28.05, 30.0 } ;

      static real_T pDataValues0[] = { 1800.0, 1800.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0 } ;

      SortierAlgorithmusVirtuell_DW.FromWs_PWORK_l.TimePtr = (void *)
        pTimeValues0;
      SortierAlgorithmusVirtuell_DW.FromWs_PWORK_l.DataPtr = (void *)
        pDataValues0;
      SortierAlgorithmusVirtuell_DW.FromWs_IWORK_m.PrevIndex = 0;
    }

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
    SortierAlgorithmusVirtuell_DW.UnitDelay_DSTATE =
      SortierAlgorithmusVirtuell_P.UnitDelay_InitialCondition;

    /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
    SortierAlgorithmusVirtuell_DW.RateTransition_Buffer0 =
      SortierAlgorithmusVirtuell_P.RateTransition_InitialCondition;

    /* InitializeConditions for Delay: '<S4>/Delay' */
    SortierAlgorithmusVirtuell_DW.Delay_DSTATE[0] =
      SortierAlgorithmusVirtuell_P.Delay_InitialCondition;
    SortierAlgorithmusVirtuell_DW.Delay_DSTATE[1] =
      SortierAlgorithmusVirtuell_P.Delay_InitialCondition;
    SortierAlgorithmusVirtuell_DW.Delay_DSTATE[2] =
      SortierAlgorithmusVirtuell_P.Delay_InitialCondition;
    SortierAlgorithmusVirtuell_DW.Delay_DSTATE[3] =
      SortierAlgorithmusVirtuell_P.Delay_InitialCondition;
    for (i = 0; i < 18; i++) {
      /* InitializeConditions for Delay: '<S4>/Delay1' */
      SortierAlgorithmusVirtuell_DW.Delay1_DSTATE[i] =
        SortierAlgorithmusVirtuell_P.Delay1_InitialCondition;

      /* InitializeConditions for Delay: '<S4>/Delay2' */
      SortierAlgorithmusVirtuell_DW.Delay2_DSTATE[i] =
        SortierAlgorithmusVirtuell_P.Delay2_InitialCondition;

      /* InitializeConditions for Delay: '<S4>/Delay3' */
      SortierAlgorithmusVirtuell_DW.Delay3_DSTATE[i] =
        SortierAlgorithmusVirtuell_P.Delay3_InitialCondition;
    }

    /* InitializeConditions for Delay: '<S4>/Delay4' */
    for (i = 0; i < 76; i++) {
      SortierAlgorithmusVirtuell_DW.Delay4_DSTATE[i] =
        SortierAlgorithmusVirtuell_P.Delay4_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<S4>/Delay4' */

    /* InitializeConditions for Delay: '<S4>/Delay5' */
    for (i = 0; i < 85; i++) {
      SortierAlgorithmusVirtuell_DW.Delay5_DSTATE[i] =
        SortierAlgorithmusVirtuell_P.Delay5_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<S4>/Delay5' */

    /* InitializeConditions for Delay: '<S4>/Delay6' */
    for (i = 0; i < 10; i++) {
      SortierAlgorithmusVirtuell_DW.Delay6_DSTATE[i] =
        SortierAlgorithmusVirtuell_P.Delay6_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<S4>/Delay6' */

    /* InitializeConditions for Delay: '<S4>/Delay7' */
    for (i = 0; i < 105; i++) {
      SortierAlgorithmusVirtuell_DW.Delay7_DSTATE[i] =
        SortierAlgorithmusVirtuell_P.Delay7_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<S4>/Delay7' */

    /* SystemInitialize for Chart: '<Root>/Sortieralgorithmus' */
    SortierAlgorithmusVirtuell_DW.temporalCounter_i1 = 0U;
    SortierAlgorithmusVirtuell_DW.is_active_c3_SortierAlgorithmus = 0U;
    SortierAlgorithmusVirtuell_DW.is_c3_SortierAlgorithmusVirtuel =
      SortierAlgor_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<Root>/Chart1' */
    SortierAlgorithmusVirtuell_DW.temporalCounter_i1_o = 0U;
    SortierAlgorithmusVirtuell_DW.is_active_c1_SortierAlgorithmus = 0U;
    SortierAlgorithmusVirtuell_DW.is_c1_SortierAlgorithmusVirtuel =
      SortierAlgor_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<Root>/Chart' */
    SortierAlgorithmusVirtuell_DW.temporalCounter_i1_d = 0U;
    SortierAlgorithmusVirtuell_DW.is_active_c2_SortierAlgorithmus = 0U;
    SortierAlgorithmusVirtuell_DW.is_c2_SortierAlgorithmusVirtuel =
      SortierAlgor_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<Root>/Chart2' */
    SortierAlgorithmusVirtuell_DW.is_active_c5_SortierAlgorithmus = 0U;
    SortierAlgorithmusVirtuell_DW.is_c5_SortierAlgorithmusVirtuel =
      SortierAlgor_IN_NO_ACTIVE_CHILD;
  }
}

/* Model terminate function */
void SortierAlgorithmusVirtuell_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
