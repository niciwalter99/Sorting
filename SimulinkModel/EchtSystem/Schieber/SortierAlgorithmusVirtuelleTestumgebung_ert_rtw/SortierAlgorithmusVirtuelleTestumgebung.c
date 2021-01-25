/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusVirtuelleTestumgebung.c
 *
 * Code generated for Simulink model 'SortierAlgorithmusVirtuelleTestumgebung'.
 *
 * Model version                  : 1.37
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan 13 17:12:00 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SortierAlgorithmusVirtuelleTestumgebung.h"
#include "SortierAlgorithmusVirtuelleTestumgebung_private.h"
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
#define SortierAlgorithmusVirt_IN_Black (1U)
#define SortierAlgorithmusVirtu_IN_wait (6U)
#define SortierAlgorithmus_IN_closeGate (1U)

/* Block signals (default storage) */
B_SortierAlgorithmusVirtuelle_T SortierAlgorithmusVirtuelleTe_B;

/* Block states (default storage) */
DW_SortierAlgorithmusVirtuell_T SortierAlgorithmusVirtuelleT_DW;

/* Real-time model */
RT_MODEL_SortierAlgorithmusVi_T SortierAlgorithmusVirtuelleT_M_;
RT_MODEL_SortierAlgorithmusVi_T *const SortierAlgorithmusVirtuelleT_M =
  &SortierAlgorithmusVirtuelleT_M_;

/* Forward declaration for local functions */
static real_T SortierAlgorit_findPlaceForBlue(void);
static real_T SortierAlgorith_findPlaceForRed(void);
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void SortierAlgorithmusVirtuelleTestumgebung_SetEventsForThisBaseStep(boolean_T *
  eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[2] = ((boolean_T)rtmStepTask(SortierAlgorithmusVirtuelleT_M, 2));
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
  if (SortierAlgorithmusVirtuelleT_M->Timing.TaskCounters.TID[1] == 0) {
    SortierAlgorithmusVirtuelleT_M->Timing.RateInteraction.TID1_2 =
      (SortierAlgorithmusVirtuelleT_M->Timing.TaskCounters.TID[2] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (SortierAlgorithmusVirtuelleT_M->Timing.TaskCounters.TID[2])++;
  if ((SortierAlgorithmusVirtuelleT_M->Timing.TaskCounters.TID[2]) > 99) {/* Sample time: [1.0s, 0.0s] */
    SortierAlgorithmusVirtuelleT_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Function for Chart: '<Root>/Sortieralgorithmus' */
static real_T SortierAlgorit_findPlaceForBlue(void)
{
  real_T magacinOut;
  magacinOut = 5.0;
  if (SortierAlgorithmusVirtuelleT_DW.magacin0 == 0.0) {
    magacinOut = 0.0;
    SortierAlgorithmusVirtuelleT_DW.magacin0++;
  } else if ((SortierAlgorithmusVirtuelleT_DW.magacin2 == 0L) ||
             ((SortierAlgorithmusVirtuelleT_DW.magacin2_LastCube == 2.0) &&
              (SortierAlgorithmusVirtuelleT_DW.magacin2 < 5L))) {
    magacinOut = 2.0;
    SortierAlgorithmusVirtuelleT_DW.magacin2 = c28x_add_s32_s32_s32_sat
      (SortierAlgorithmusVirtuelleT_DW.magacin2, 1L);
    SortierAlgorithmusVirtuelleT_DW.magacin2_LastCube = 1.0;
  } else if ((SortierAlgorithmusVirtuelleT_DW.magacin1_LastCube == 2.0) &&
             (SortierAlgorithmusVirtuelleT_DW.magacin1 < 5L)) {
    magacinOut = 1.0;
    SortierAlgorithmusVirtuelleT_DW.magacin1 = c28x_add_s32_s32_s32_sat
      (SortierAlgorithmusVirtuelleT_DW.magacin1, 1L);
    SortierAlgorithmusVirtuelleT_DW.magacin1_LastCube = 1.0;
  } else if (SortierAlgorithmusVirtuelleT_DW.magacin3 < 5.0) {
    magacinOut = 3.0;
    SortierAlgorithmusVirtuelleT_DW.magacin3++;
  } else {
    if (SortierAlgorithmusVirtuelleT_DW.magacin4 < 5.0) {
      magacinOut = 4.0;
      SortierAlgorithmusVirtuelleT_DW.magacin4++;
    }
  }

  return magacinOut;
}

/* Function for Chart: '<Root>/Sortieralgorithmus' */
static real_T SortierAlgorith_findPlaceForRed(void)
{
  real_T magacinOut;
  if ((SortierAlgorithmusVirtuelleT_DW.magacin1 == 0L) ||
      ((SortierAlgorithmusVirtuelleT_DW.magacin1_LastCube == 1.0) &&
       (SortierAlgorithmusVirtuelleT_DW.magacin1 < 5L))) {
    magacinOut = 1.0;
    SortierAlgorithmusVirtuelleT_DW.magacin1 = c28x_add_s32_s32_s32_sat
      (SortierAlgorithmusVirtuelleT_DW.magacin1, 1L);
    SortierAlgorithmusVirtuelleT_DW.magacin1_LastCube = 2.0;
  } else if ((SortierAlgorithmusVirtuelleT_DW.magacin2_LastCube == 1.0) &&
             (SortierAlgorithmusVirtuelleT_DW.magacin2 < 5L)) {
    magacinOut = 2.0;
    SortierAlgorithmusVirtuelleT_DW.magacin2 = c28x_add_s32_s32_s32_sat
      (SortierAlgorithmusVirtuelleT_DW.magacin2, 1L);
    SortierAlgorithmusVirtuelleT_DW.magacin2_LastCube = 2.0;
  } else if ((SortierAlgorithmusVirtuelleT_DW.magacin0 < 5.0) &&
             (SortierAlgorithmusVirtuelleT_DW.magacin0 > 0.0)) {
    magacinOut = 0.0;
    SortierAlgorithmusVirtuelleT_DW.magacin0++;
  } else {
    magacinOut = 3.0;
    SortierAlgorithmusVirtuelleT_DW.magacin3++;
  }

  return magacinOut;
}

/* Model step function for TID0 */
void SortierAlgorithmusVirtuelleTestumgebung_step0(void) /* Sample time: [0.0s, 0.0s] */
{
  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* RateTransition: '<Root>/Rate Transition' */
  if (SortierAlgorithmusVirtuelleT_M->Timing.RateInteraction.TID1_2) {
    SortierAlgorithmusVirtuelleTe_B.RateTransition =
      SortierAlgorithmusVirtuelleT_DW.RateTransition_Buffer0;
  }

  /* End of RateTransition: '<Root>/Rate Transition' */

  /* Chart: '<Root>/Sortieralgorithmus' incorporates:
   *  Constant: '<Root>/Constant'
   */
  if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_a < 255U) {
    SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_a = ((int16_T)
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_a + 1) & 255U;
  }

  if (SortierAlgorithmusVirtuelleT_DW.is_active_c3_SortierAlgorithmus == 0U) {
    SortierAlgorithmusVirtuelleT_DW.is_active_c3_SortierAlgorithmus = 1U;
    SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
      SortierAlgorit_IN_setupVariable;
    SortierAlgorithmusVirtuelleT_DW.magacin0 = 0.0;
    SortierAlgorithmusVirtuelleT_DW.magacin1 = 0L;
    SortierAlgorithmusVirtuelleT_DW.magacin2 = 0L;
    SortierAlgorithmusVirtuelleT_DW.magacin3 = 0.0;
    SortierAlgorithmusVirtuelleT_DW.magacin4 = 0.0;
    SortierAlgorithmusVirtuelleT_DW.magacin1_LastCube = 0.0;
    SortierAlgorithmusVirtuelleT_DW.magacin2_LastCube = 0.0;
  } else {
    switch (SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel) {
     case SortierAlgorithmusVirt_IN_Black:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_a >= 150U) {
        SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorith_IN_DetectedCube;
      }
      break;

     case SortierAlgorithmusV_IN_BlueCube:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_a >= 150U) {
        SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorith_IN_DetectedCube;
      }
      break;

     case SortierAlgorith_IN_DetectedCube:
      SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
        SortierAlgorithmu_IN_cubeLoaded;
      break;

     case SortierAlgorithmusVi_IN_RedCube:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_a >= 150U) {
        SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorith_IN_DetectedCube;
      }
      break;

     case SortierAlgorithmu_IN_cubeLoaded:
      if (SortierAlgorithmusVirtuelleTe_P.Constant_Value < 400.0) {
        SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
          IN_photoelectricBarrierActivate;
      }
      break;

     case IN_photoelectricBarrierActivate:
      if (SortierAlgorithmusVirtuelleTe_B.RateTransition > 2050.0) {
        SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorithmusVirt_IN_Black;
        SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_a = 0U;
      } else if ((SortierAlgorithmusVirtuelleTe_B.RateTransition > 0.0) &&
                 (SortierAlgorithmusVirtuelleTe_B.RateTransition < 1000.0)) {
        SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
          SortierAlgorithmusVi_IN_RedCube;
        SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_a = 0U;
        SortierAlgorith_findPlaceForRed();
      } else {
        if ((SortierAlgorithmusVirtuelleTe_B.RateTransition >= 1000.0) &&
            (SortierAlgorithmusVirtuelleTe_B.RateTransition <= 2050.0)) {
          SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
            SortierAlgorithmusV_IN_BlueCube;
          SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_a = 0U;
          SortierAlgorit_findPlaceForBlue();
        }
      }
      break;

     default:
      SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
        SortierAlgorithmu_IN_cubeLoaded;
      break;
    }
  }

  /* End of Chart: '<Root>/Sortieralgorithmus' */

  /* Chart: '<Root>/Schieberbewegung' */
  if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 < 511U) {
    SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1++;
  }

  if (SortierAlgorithmusVirtuelleT_DW.is_active_c1_SortierAlgorithmus == 0U) {
    SortierAlgorithmusVirtuelleT_DW.is_active_c1_SortierAlgorithmus = 1U;
    SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
      SortierAlgorithmu_IN_firstEntry;
    SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 = 0U;
  } else {
    switch (SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel) {
     case SortierAlgorithmus_IN_closeGate:
      SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithm_IN_waitForCube;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 = 0U;
      break;

     case SortierAlgorithmu_IN_firstEntry:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 >= 300U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithm_IN_waitForCube;
        SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 = 0U;
      }
      break;

     case SortierAlgorithm_IN_goToMagacin:
      SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithmusV_IN_openGate;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 = 0U;
      break;

     case SortierAlgorithmusV_IN_goToZero:
      SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithmusVirtu_IN_wait;
      SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 = 0U;
      break;

     case SortierAlgorithmusV_IN_openGate:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 >= 70U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithmus_IN_closeGate;
      }
      break;

     case SortierAlgorithmusVirtu_IN_wait:
      if (SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 >= 10U) {
        SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
          SortierAlgorithm_IN_goToMagacin;
      }
      break;

     default:
      SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
        SortierAlgorithmusV_IN_goToZero;
      break;
    }
  }

  /* End of Chart: '<Root>/Schieberbewegung' */

  /* FromWorkspace: '<S4>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      SortierAlgorithmusVirtuelleT_DW.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *)
      SortierAlgorithmusVirtuelleT_DW.FromWs_PWORK.TimePtr;
    int_T currTimeIndex = SortierAlgorithmusVirtuelleT_DW.FromWs_IWORK.PrevIndex;
    real_T t = SortierAlgorithmusVirtuelleT_M->Timing.t[0];

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

    SortierAlgorithmusVirtuelleT_DW.FromWs_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          SortierAlgorithmusVirtuelleTe_B.FromWs = pDataValues[currTimeIndex];
        } else {
          SortierAlgorithmusVirtuelleTe_B.FromWs = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        SortierAlgorithmusVirtuelleTe_B.FromWs = (real_T) rtInterpolate(d1, d2,
          f1, f2);
        pDataValues += 30;
      }
    }
  }

  /* RateTransition: '<S1>/TmpRTBAtDelayInport1' */
  if (SortierAlgorithmusVirtuelleT_M->Timing.RateInteraction.TID1_2) {
    SortierAlgorithmusVirtuelleTe_B.TmpRTBAtDelayInport1 =
      SortierAlgorithmusVirtuelleTe_B.FromWs;
  }

  /* End of RateTransition: '<S1>/TmpRTBAtDelayInport1' */

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  SortierAlgorithmusVirtuelleT_M->Timing.t[0] =
    (++SortierAlgorithmusVirtuelleT_M->Timing.clockTick0) *
    SortierAlgorithmusVirtuelleT_M->Timing.stepSize0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.01, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  SortierAlgorithmusVirtuelleT_M->Timing.clockTick1++;
}

/* Model step function for TID2 */
void SortierAlgorithmusVirtuelleTestumgebung_step2(void) /* Sample time: [1.0s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_Delay;
  real_T rtb_Delay1;
  real_T rtb_Delay2;
  real_T rtb_Delay3;
  real_T rtb_Sum3;
  int_T idxDelay;

  /* Delay: '<S1>/Delay' */
  rtb_Delay = SortierAlgorithmusVirtuelleT_DW.Delay_DSTATE[0];

  /* Delay: '<S1>/Delay1' */
  rtb_Delay1 = SortierAlgorithmusVirtuelleT_DW.Delay1_DSTATE[0];

  /* Delay: '<S1>/Delay2' */
  rtb_Delay2 = SortierAlgorithmusVirtuelleT_DW.Delay2_DSTATE[0];

  /* Delay: '<S1>/Delay3' */
  rtb_Delay3 = SortierAlgorithmusVirtuelleT_DW.Delay3_DSTATE[0];

  /* Sum: '<S1>/Sum3' incorporates:
   *  Delay: '<S1>/Delay4'
   *  Sum: '<S1>/Sum'
   *  Sum: '<S1>/Sum1'
   *  Sum: '<S1>/Sum2'
   */
  rtb_Sum3 = (((rtb_Delay + rtb_Delay1) + rtb_Delay2) + rtb_Delay3) +
    SortierAlgorithmusVirtuelleT_DW.Delay4_DSTATE[0];

  /* Update for RateTransition: '<Root>/Rate Transition' */
  SortierAlgorithmusVirtuelleT_DW.RateTransition_Buffer0 = rtb_Sum3;

  /* Update for Delay: '<S1>/Delay' */
  SortierAlgorithmusVirtuelleT_DW.Delay_DSTATE[0] =
    SortierAlgorithmusVirtuelleT_DW.Delay_DSTATE[1];
  SortierAlgorithmusVirtuelleT_DW.Delay_DSTATE[1] =
    SortierAlgorithmusVirtuelleT_DW.Delay_DSTATE[2];
  SortierAlgorithmusVirtuelleT_DW.Delay_DSTATE[2] =
    SortierAlgorithmusVirtuelleT_DW.Delay_DSTATE[3];
  SortierAlgorithmusVirtuelleT_DW.Delay_DSTATE[3] =
    SortierAlgorithmusVirtuelleTe_B.TmpRTBAtDelayInport1;
  for (idxDelay = 0; idxDelay < 17; idxDelay++) {
    /* Update for Delay: '<S1>/Delay1' */
    SortierAlgorithmusVirtuelleT_DW.Delay1_DSTATE[idxDelay] =
      SortierAlgorithmusVirtuelleT_DW.Delay1_DSTATE[idxDelay + 1];

    /* Update for Delay: '<S1>/Delay2' */
    SortierAlgorithmusVirtuelleT_DW.Delay2_DSTATE[idxDelay] =
      SortierAlgorithmusVirtuelleT_DW.Delay2_DSTATE[idxDelay + 1];

    /* Update for Delay: '<S1>/Delay3' */
    SortierAlgorithmusVirtuelleT_DW.Delay3_DSTATE[idxDelay] =
      SortierAlgorithmusVirtuelleT_DW.Delay3_DSTATE[idxDelay + 1];

    /* Update for Delay: '<S1>/Delay4' */
    SortierAlgorithmusVirtuelleT_DW.Delay4_DSTATE[idxDelay] =
      SortierAlgorithmusVirtuelleT_DW.Delay4_DSTATE[idxDelay + 1];
  }

  /* Update for Delay: '<S1>/Delay1' */
  SortierAlgorithmusVirtuelleT_DW.Delay1_DSTATE[17] = rtb_Delay;

  /* Update for Delay: '<S1>/Delay2' */
  SortierAlgorithmusVirtuelleT_DW.Delay2_DSTATE[17] = rtb_Delay1;

  /* Update for Delay: '<S1>/Delay3' */
  SortierAlgorithmusVirtuelleT_DW.Delay3_DSTATE[17] = rtb_Delay2;

  /* Update for Delay: '<S1>/Delay4' */
  SortierAlgorithmusVirtuelleT_DW.Delay4_DSTATE[17] = rtb_Delay3;
}

/* Model initialize function */
void SortierAlgorithmusVirtuelleTestumgebung_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)SortierAlgorithmusVirtuelleT_M, 0,
                sizeof(RT_MODEL_SortierAlgorithmusVi_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&SortierAlgorithmusVirtuelleT_M->solverInfo,
                          &SortierAlgorithmusVirtuelleT_M->Timing.simTimeStep);
    rtsiSetTPtr(&SortierAlgorithmusVirtuelleT_M->solverInfo, &rtmGetTPtr
                (SortierAlgorithmusVirtuelleT_M));
    rtsiSetStepSizePtr(&SortierAlgorithmusVirtuelleT_M->solverInfo,
                       &SortierAlgorithmusVirtuelleT_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&SortierAlgorithmusVirtuelleT_M->solverInfo,
                          (&rtmGetErrorStatus(SortierAlgorithmusVirtuelleT_M)));
    rtsiSetRTModelPtr(&SortierAlgorithmusVirtuelleT_M->solverInfo,
                      SortierAlgorithmusVirtuelleT_M);
  }

  rtsiSetSimTimeStep(&SortierAlgorithmusVirtuelleT_M->solverInfo,
                     MAJOR_TIME_STEP);
  rtsiSetSolverName(&SortierAlgorithmusVirtuelleT_M->solverInfo,
                    "FixedStepDiscrete");
  rtmSetTPtr(SortierAlgorithmusVirtuelleT_M,
             &SortierAlgorithmusVirtuelleT_M->Timing.tArray[0]);
  SortierAlgorithmusVirtuelleT_M->Timing.stepSize0 = 0.01;

  /* block I/O */
  (void) memset(((void *) &SortierAlgorithmusVirtuelleTe_B), 0,
                sizeof(B_SortierAlgorithmusVirtuelle_T));

  /* states (dwork) */
  (void) memset((void *)&SortierAlgorithmusVirtuelleT_DW, 0,
                sizeof(DW_SortierAlgorithmusVirtuell_T));

  {
    int16_T i;

    /* Machine initializer */
    SortierAlgorithmusVirtuelleT_DW.magacin = 0.0;

    /* Start for RateTransition: '<Root>/Rate Transition' */
    SortierAlgorithmusVirtuelleTe_B.RateTransition =
      SortierAlgorithmusVirtuelleTe_P.RateTransition_InitialCondition;

    /* Start for FromWorkspace: '<S4>/FromWs' */
    {
      static real_T pTimeValues0[] = { 0.0, 1.0, 1.0, 3.0, 3.0, 4.0, 4.0, 6.0,
        6.0, 7.0, 7.0, 9.0, 9.0, 10.0, 10.0, 12.0, 12.0, 13.0, 13.0, 15.0, 15.0,
        16.0, 16.0, 21.5, 23.3, 24.55, 25.55, 26.700000000000003, 28.05, 30.0 } ;

      static real_T pDataValues0[] = { 1800.0, 1800.0, 0.0, 0.0, 1800.0, 1800.0,
        0.0, 0.0, 2700.0, 2700.0, 0.0, 0.0, 200.0, 200.0, 0.0, 0.0, 1800.0,
        1800.0, 0.0, 0.0, 1800.0, 1800.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
      } ;

      SortierAlgorithmusVirtuelleT_DW.FromWs_PWORK.TimePtr = (void *)
        pTimeValues0;
      SortierAlgorithmusVirtuelleT_DW.FromWs_PWORK.DataPtr = (void *)
        pDataValues0;
      SortierAlgorithmusVirtuelleT_DW.FromWs_IWORK.PrevIndex = 0;
    }

    /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
    SortierAlgorithmusVirtuelleT_DW.RateTransition_Buffer0 =
      SortierAlgorithmusVirtuelleTe_P.RateTransition_InitialCondition;

    /* InitializeConditions for Delay: '<S1>/Delay' */
    SortierAlgorithmusVirtuelleT_DW.Delay_DSTATE[0] =
      SortierAlgorithmusVirtuelleTe_P.Delay_InitialCondition;
    SortierAlgorithmusVirtuelleT_DW.Delay_DSTATE[1] =
      SortierAlgorithmusVirtuelleTe_P.Delay_InitialCondition;
    SortierAlgorithmusVirtuelleT_DW.Delay_DSTATE[2] =
      SortierAlgorithmusVirtuelleTe_P.Delay_InitialCondition;
    SortierAlgorithmusVirtuelleT_DW.Delay_DSTATE[3] =
      SortierAlgorithmusVirtuelleTe_P.Delay_InitialCondition;
    for (i = 0; i < 18; i++) {
      /* InitializeConditions for Delay: '<S1>/Delay1' */
      SortierAlgorithmusVirtuelleT_DW.Delay1_DSTATE[i] =
        SortierAlgorithmusVirtuelleTe_P.Delay1_InitialCondition;

      /* InitializeConditions for Delay: '<S1>/Delay2' */
      SortierAlgorithmusVirtuelleT_DW.Delay2_DSTATE[i] =
        SortierAlgorithmusVirtuelleTe_P.Delay2_InitialCondition;

      /* InitializeConditions for Delay: '<S1>/Delay3' */
      SortierAlgorithmusVirtuelleT_DW.Delay3_DSTATE[i] =
        SortierAlgorithmusVirtuelleTe_P.Delay3_InitialCondition;

      /* InitializeConditions for Delay: '<S1>/Delay4' */
      SortierAlgorithmusVirtuelleT_DW.Delay4_DSTATE[i] =
        SortierAlgorithmusVirtuelleTe_P.Delay4_InitialCondition;
    }

    /* SystemInitialize for Chart: '<Root>/Sortieralgorithmus' */
    SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1_a = 0U;
    SortierAlgorithmusVirtuelleT_DW.is_active_c3_SortierAlgorithmus = 0U;
    SortierAlgorithmusVirtuelleT_DW.is_c3_SortierAlgorithmusVirtuel =
      SortierAlgor_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<Root>/Schieberbewegung' */
    SortierAlgorithmusVirtuelleT_DW.temporalCounter_i1 = 0U;
    SortierAlgorithmusVirtuelleT_DW.is_active_c1_SortierAlgorithmus = 0U;
    SortierAlgorithmusVirtuelleT_DW.is_c1_SortierAlgorithmusVirtuel =
      SortierAlgor_IN_NO_ACTIVE_CHILD;
  }
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
