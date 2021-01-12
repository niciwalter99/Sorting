/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortingAlgorithm.c
 *
 * Code generated for Simulink model 'SortingAlgorithm'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Dec 10 17:39:51 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SortingAlgorithm.h"
#include "SortingAlgorithm_private.h"
#define SortingAlgo_IN_findPlaceForRed1 (4U)
#define SortingAlgor_IN_NO_ACTIVE_CHILD (0U)
#define SortingAlgorit_IN_setupVariable (6U)
#define SortingAlgorith_IN_noCubeLoaded (5U)
#define SortingAlgorithm_IN_BlueCube   (1U)
#define SortingAlgorithm_IN_RedCube    (2U)
#define SortingAlgorithm_IN_cubeLoaded (3U)

/* Block signals (default storage) */
B_SortingAlgorithm_T SortingAlgorithm_B;

/* Block states (default storage) */
DW_SortingAlgorithm_T SortingAlgorithm_DW;

/* Real-time model */
RT_MODEL_SortingAlgorithm_T SortingAlgorithm_M_;
RT_MODEL_SortingAlgorithm_T *const SortingAlgorithm_M = &SortingAlgorithm_M_;

/* Forward declaration for local functions */
static real_T SortingAlgorith_findPlaceForRed(void);
static real_T SortingAlgorit_findPlaceForBlue(void);
static uint16_T adcInitFlag = 0;

/* Function for Chart: '<Root>/Chart' */
static real_T SortingAlgorith_findPlaceForRed(void)
{
  real_T magacinOut;
  if (((SortingAlgorithm_B.m1 == 0.0) || (SortingAlgorithm_DW.m1_LC == 1.0)) &&
      (SortingAlgorithm_B.m1 < 5.0)) {
    magacinOut = 1.0;
    SortingAlgorithm_B.m1++;
    SortingAlgorithm_DW.m1_LC = 2.0;
  } else if ((SortingAlgorithm_B.m2 == 0.0) || ((SortingAlgorithm_DW.m2_LC ==
               1.0) && (SortingAlgorithm_B.m2 < 5.0))) {
    magacinOut = 2.0;
    SortingAlgorithm_B.m2++;
    SortingAlgorithm_DW.m2_LC = 2.0;
  } else if ((SortingAlgorithm_B.m0 < 5.0) && (SortingAlgorithm_B.m1 > 0.0)) {
    magacinOut = 0.0;
    SortingAlgorithm_B.m0++;
  } else {
    magacinOut = 3.0;
    SortingAlgorithm_B.m3++;
  }

  return magacinOut;
}

/* Function for Chart: '<Root>/Chart' */
static real_T SortingAlgorit_findPlaceForBlue(void)
{
  real_T magacinOut;
  if (SortingAlgorithm_B.m0 == 0.0) {
    magacinOut = 0.0;
    SortingAlgorithm_B.m0++;
  } else if ((SortingAlgorithm_B.m2 == 0.0) || ((SortingAlgorithm_DW.m2_LC ==
               2.0) && (SortingAlgorithm_B.m2 < 5.0))) {
    magacinOut = 2.0;
    SortingAlgorithm_B.m2++;
    SortingAlgorithm_DW.m2_LC = 1.0;
  } else if ((SortingAlgorithm_DW.m1_LC == 2.0) && (SortingAlgorithm_B.m1 < 5.0))
  {
    magacinOut = 1.0;
    SortingAlgorithm_B.m0++;
  } else if (SortingAlgorithm_B.m3 < 5.0) {
    magacinOut = 3.0;
    SortingAlgorithm_B.m3++;
  } else if (SortingAlgorithm_B.m4 < 5.0) {
    magacinOut = 4.0;
    SortingAlgorithm_B.m4++;
  } else {
    magacinOut = 5.0;
    SortingAlgorithm_B.m5++;
  }

  return magacinOut;
}

/* Model step function */
void SortingAlgorithm_step(void)
{
  /* S-Function (c280xadc): '<Root>/ADC' */
  {
    AdcRegs.ADCTRL2.bit.RST_SEQ1 = 1;  /* Reset SEQ1 module*/
    AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;/*clear INT sequencer*/
    AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;  /* Software Trigger*/
    while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {
    }                                  /*Wait for Sequencer INT bit to clear */

    asm(" RPT #11 || NOP");
    SortingAlgorithm_B.ADC = (AdcRegs.ADCRESULT0) >> 4;
  }

  /* Chart: '<Root>/Chart' */
  if (SortingAlgorithm_DW.is_active_c3_SortingAlgorithm == 0U) {
    SortingAlgorithm_DW.is_active_c3_SortingAlgorithm = 1U;
    SortingAlgorithm_DW.is_c3_SortingAlgorithm = SortingAlgorit_IN_setupVariable;
    SortingAlgorithm_B.m0 = 0.0;
    SortingAlgorithm_B.m1 = 0.0;
    SortingAlgorithm_B.m2 = 0.0;
    SortingAlgorithm_B.m3 = 0.0;
    SortingAlgorithm_B.m4 = 0.0;
    SortingAlgorithm_B.m5 = 0.0;
    SortingAlgorithm_DW.m1_LC = 0.0;
    SortingAlgorithm_DW.m2_LC = 0.0;
  } else {
    switch (SortingAlgorithm_DW.is_c3_SortingAlgorithm) {
     case SortingAlgorithm_IN_BlueCube:
      SortingAlgorithm_DW.is_c3_SortingAlgorithm =
        SortingAlgorith_IN_noCubeLoaded;
      break;

     case SortingAlgorithm_IN_RedCube:
      SortingAlgorithm_DW.is_c3_SortingAlgorithm =
        SortingAlgorith_IN_noCubeLoaded;
      break;

     case SortingAlgorithm_IN_cubeLoaded:
      if ((SortingAlgorithm_B.ADC > 1800U) && (SortingAlgorithm_B.ADC < 1950U))
      {
        SortingAlgorithm_DW.is_c3_SortingAlgorithm =
          SortingAlgorithm_IN_BlueCube;
        SortingAlgorit_findPlaceForBlue();
      } else if ((SortingAlgorithm_B.ADC > 150U) && (SortingAlgorithm_B.ADC <
                  250U)) {
        SortingAlgorithm_DW.is_c3_SortingAlgorithm = SortingAlgorithm_IN_RedCube;
        SortingAlgorith_findPlaceForRed();
      } else {
        if ((SortingAlgorithm_B.ADC > 2000U) && (SortingAlgorithm_B.ADC < 2200U))
        {
          SortingAlgorithm_DW.is_c3_SortingAlgorithm =
            SortingAlgo_IN_findPlaceForRed1;
          SortingAlgorithm_B.m1++;
        }
      }
      break;

     case SortingAlgo_IN_findPlaceForRed1:
      SortingAlgorithm_B.m1++;
      break;

     case SortingAlgorith_IN_noCubeLoaded:
      SortingAlgorithm_DW.is_c3_SortingAlgorithm =
        SortingAlgorithm_IN_cubeLoaded;
      break;

     default:
      SortingAlgorithm_DW.is_c3_SortingAlgorithm =
        SortingAlgorith_IN_noCubeLoaded;
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  SortingAlgorithm_M->Timing.t[0] =
    (++SortingAlgorithm_M->Timing.clockTick0) *
    SortingAlgorithm_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.001, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    SortingAlgorithm_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void SortingAlgorithm_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)SortingAlgorithm_M, 0,
                sizeof(RT_MODEL_SortingAlgorithm_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&SortingAlgorithm_M->solverInfo,
                          &SortingAlgorithm_M->Timing.simTimeStep);
    rtsiSetTPtr(&SortingAlgorithm_M->solverInfo, &rtmGetTPtr(SortingAlgorithm_M));
    rtsiSetStepSizePtr(&SortingAlgorithm_M->solverInfo,
                       &SortingAlgorithm_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&SortingAlgorithm_M->solverInfo, (&rtmGetErrorStatus
      (SortingAlgorithm_M)));
    rtsiSetRTModelPtr(&SortingAlgorithm_M->solverInfo, SortingAlgorithm_M);
  }

  rtsiSetSimTimeStep(&SortingAlgorithm_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&SortingAlgorithm_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(SortingAlgorithm_M, &SortingAlgorithm_M->Timing.tArray[0]);
  SortingAlgorithm_M->Timing.stepSize0 = 0.001;

  /* block I/O */
  (void) memset(((void *) &SortingAlgorithm_B), 0,
                sizeof(B_SortingAlgorithm_T));

  /* states (dwork) */
  (void) memset((void *)&SortingAlgorithm_DW, 0,
                sizeof(DW_SortingAlgorithm_T));

  /* Machine initializer */
  SortingAlgorithm_DW.magacin = 0.0;

  /* Start for S-Function (c280xadc): '<Root>/ADC' */
  if (adcInitFlag == 0) {
    InitAdc();
    adcInitFlag = 1;
  }

  config_ADC_A (0U, 0U, 0U, 0U, 0U);

  /* SystemInitialize for Chart: '<Root>/Chart' */
  SortingAlgorithm_DW.is_active_c3_SortingAlgorithm = 0U;
  SortingAlgorithm_DW.is_c3_SortingAlgorithm = SortingAlgor_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void SortingAlgorithm_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
