/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortingAlgorithm.c
 *
 * Code generated for Simulink model 'SortingAlgorithm'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Dec 13 12:42:36 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SortingAlgorithm.h"
#include "SortingAlgorithm_private.h"
#define SortingAlgor_IN_NO_ACTIVE_CHILD (0U)
#define SortingAlgorit_IN_setupVariable (10U)
#define SortingAlgorith_IN_moveSchieber (6U)
#define SortingAlgorith_IN_noCubeLoaded (8U)
#define SortingAlgorithm_IN_Black      (1U)
#define SortingAlgorithm_IN_BlueCube   (2U)
#define SortingAlgorithm_IN_RedCube    (3U)
#define SortingAlgorithm_IN_closeKlappe (4U)
#define SortingAlgorithm_IN_cubeLoaded (5U)
#define SortingAlgorithm_IN_openKlappe (9U)
#define Sorting_IN_moveSchieberUrsrpung (7U)

/* Block signals (default storage) */
B_SortingAlgorithm_T SortingAlgorithm_B;

/* Block states (default storage) */
DW_SortingAlgorithm_T SortingAlgorithm_DW;

/* Real-time model */
RT_MODEL_SortingAlgorithm_T SortingAlgorithm_M_;
RT_MODEL_SortingAlgorithm_T *const SortingAlgorithm_M = &SortingAlgorithm_M_;

/* Forward declaration for local functions */
static real_T SortingAlgorit_findPlaceForBlue(void);
static real_T SortingAlgorith_findPlaceForRed(void);
static uint16_T adcInitFlag = 0;

/* Function for Chart: '<Root>/Chart' */
static real_T SortingAlgorit_findPlaceForBlue(void)
{
  real_T magacinOut;
  if (SortingAlgorithm_B.m0 == 0.0) {
    magacinOut = 0.0;
    SortingAlgorithm_B.m0++;
  } else if ((SortingAlgorithm_B.m2 == 0L) || ((SortingAlgorithm_DW.m2_LC == 2.0)
              && (SortingAlgorithm_B.m2 < 5L))) {
    magacinOut = 2.0;
    SortingAlgorithm_B.m2 = c28x_add_s32_s32_s32_sat(SortingAlgorithm_B.m2, 1L);
    SortingAlgorithm_DW.m2_LC = 1.0;
  } else if ((SortingAlgorithm_DW.m1_LC == 2.0) && (SortingAlgorithm_B.m1 < 5L))
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

/* Function for Chart: '<Root>/Chart' */
static real_T SortingAlgorith_findPlaceForRed(void)
{
  real_T magacinOut;
  if (((SortingAlgorithm_B.m1 == 0L) || (SortingAlgorithm_DW.m1_LC == 1.0)) &&
      (SortingAlgorithm_B.m1 < 5L)) {
    magacinOut = 1.0;
    SortingAlgorithm_B.m1 = c28x_add_s32_s32_s32_sat(SortingAlgorithm_B.m1, 1L);
    SortingAlgorithm_DW.m1_LC = 2.0;
  } else if ((SortingAlgorithm_B.m2 == 0L) || ((SortingAlgorithm_DW.m2_LC == 1.0)
              && (SortingAlgorithm_B.m2 < 5L))) {
    magacinOut = 2.0;
    SortingAlgorithm_B.m2 = c28x_add_s32_s32_s32_sat(SortingAlgorithm_B.m2, 1L);
    SortingAlgorithm_DW.m2_LC = 2.0;
  } else if ((SortingAlgorithm_B.m0 < 5.0) && (SortingAlgorithm_B.m1 > 0L)) {
    magacinOut = 0.0;
    SortingAlgorithm_B.m0++;
  } else {
    magacinOut = 3.0;
    SortingAlgorithm_B.m3++;
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

  /* FromWorkspace: '<S2>/FromWs' */
  {
    real_T *pDataValues = (real_T *) SortingAlgorithm_DW.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *) SortingAlgorithm_DW.FromWs_PWORK.TimePtr;
    int_T currTimeIndex = SortingAlgorithm_DW.FromWs_IWORK.PrevIndex;
    real_T t = SortingAlgorithm_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[7]) {
      currTimeIndex = 6;
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

    SortingAlgorithm_DW.FromWs_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          SortingAlgorithm_B.FromWs = pDataValues[currTimeIndex];
        } else {
          SortingAlgorithm_B.FromWs = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        SortingAlgorithm_B.FromWs = (real_T) rtInterpolate(d1, d2, f1, f2);
        pDataValues += 8;
      }
    }
  }

  /* Chart: '<Root>/Chart' incorporates:
   *  Constant: '<Root>/Constant1'
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  if (SortingAlgorithm_DW.temporalCounter_i1 < 1023U) {
    SortingAlgorithm_DW.temporalCounter_i1++;
  }

  if (SortingAlgorithm_DW.is_active_c3_SortingAlgorithm == 0U) {
    SortingAlgorithm_DW.is_active_c3_SortingAlgorithm = 1U;
    SortingAlgorithm_DW.is_c3_SortingAlgorithm = SortingAlgorit_IN_setupVariable;
    SortingAlgorithm_B.m0 = 0.0;
    SortingAlgorithm_B.m1 = 0L;
    SortingAlgorithm_B.m2 = 0L;
    SortingAlgorithm_B.m3 = 0.0;
    SortingAlgorithm_B.m4 = 0.0;
    SortingAlgorithm_B.m5 = 0.0;
    SortingAlgorithm_DW.m1_LC = 0.0;
    SortingAlgorithm_DW.m2_LC = 0.0;
  } else {
    switch (SortingAlgorithm_DW.is_c3_SortingAlgorithm) {
     case SortingAlgorithm_IN_Black:
      SortingAlgorithm_DW.is_c3_SortingAlgorithm =
        SortingAlgorith_IN_moveSchieber;
      break;

     case SortingAlgorithm_IN_BlueCube:
      SortingAlgorithm_DW.is_c3_SortingAlgorithm =
        SortingAlgorith_IN_moveSchieber;
      break;

     case SortingAlgorithm_IN_RedCube:
      SortingAlgorithm_DW.is_c3_SortingAlgorithm =
        SortingAlgorith_IN_moveSchieber;
      break;

     case SortingAlgorithm_IN_closeKlappe:
      SortingAlgorithm_DW.is_c3_SortingAlgorithm =
        Sorting_IN_moveSchieberUrsrpung;
      SortingAlgorithm_DW.temporalCounter_i1 = 0U;
      break;

     case SortingAlgorithm_IN_cubeLoaded:
      if ((SortingAlgorithm_B.FromWs > 150.0) && (SortingAlgorithm_B.FromWs <
           250.0)) {
        SortingAlgorithm_DW.is_c3_SortingAlgorithm = SortingAlgorithm_IN_RedCube;
        SortingAlgorith_findPlaceForRed();
      } else if ((SortingAlgorithm_B.FromWs > 2000.0) &&
                 (SortingAlgorithm_B.FromWs < 2200.0)) {
        SortingAlgorithm_DW.is_c3_SortingAlgorithm = SortingAlgorithm_IN_Black;
      } else if ((SortingAlgorithm_B.FromWs > 1800.0) &&
                 (SortingAlgorithm_B.FromWs < 1950.0)) {
        SortingAlgorithm_DW.is_c3_SortingAlgorithm =
          SortingAlgorithm_IN_BlueCube;
        SortingAlgorit_findPlaceForBlue();
      } else {
        SortingAlgorithm_B.kPWM = 0.0;
      }
      break;

     case SortingAlgorith_IN_moveSchieber:
      if (SortingAlgorithm_P.Constant1_Value != 0.0) {
        SortingAlgorithm_DW.is_c3_SortingAlgorithm =
          SortingAlgorithm_IN_openKlappe;
        SortingAlgorithm_DW.temporalCounter_i1 = 0U;
        SortingAlgorithm_B.kDirection = 0.0;
        SortingAlgorithm_B.kPWM = 100.0;
      }
      break;

     case Sorting_IN_moveSchieberUrsrpung:
      if (SortingAlgorithm_DW.temporalCounter_i1 >= 1000U) {
        SortingAlgorithm_DW.is_c3_SortingAlgorithm =
          SortingAlgorithm_IN_cubeLoaded;
        SortingAlgorithm_B.kPWM = 0.0;
      }
      break;

     case SortingAlgorith_IN_noCubeLoaded:
      SortingAlgorithm_DW.is_c3_SortingAlgorithm =
        SortingAlgorithm_IN_cubeLoaded;
      SortingAlgorithm_B.kPWM = 0.0;
      break;

     case SortingAlgorithm_IN_openKlappe:
      if (SortingAlgorithm_DW.temporalCounter_i1 >= 1000U) {
        SortingAlgorithm_DW.is_c3_SortingAlgorithm =
          SortingAlgorithm_IN_closeKlappe;
        SortingAlgorithm_B.kDirection = 1.0;
      } else {
        SortingAlgorithm_B.kDirection = 0.0;
        SortingAlgorithm_B.kPWM = 100.0;
      }
      break;

     default:
      SortingAlgorithm_DW.is_c3_SortingAlgorithm =
        SortingAlgorith_IN_noCubeLoaded;
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* S-Function (c280xgpio_do): '<Root>/Digital Output' */
  {
    if (SortingAlgorithm_B.kDirection)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* S-Function (c280xpwm): '<Root>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD *
      SortingAlgorithm_B.kPWM * 0.01);
  }

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

  /* Start for FromWorkspace: '<S2>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 1.0, 1.0, 4.0, 4.0, 5.0, 5.0, 40.0 } ;

    static real_T pDataValues0[] = { 200.0, 250.0, 2400.0, 2396.7179487179487,
      1850.0, 1850.8888888888889, 2660.0, 2460.0 } ;

    SortingAlgorithm_DW.FromWs_PWORK.TimePtr = (void *) pTimeValues0;
    SortingAlgorithm_DW.FromWs_PWORK.DataPtr = (void *) pDataValues0;
    SortingAlgorithm_DW.FromWs_IWORK.PrevIndex = 0;
  }

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output' */
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

  /* SystemInitialize for Chart: '<Root>/Chart' */
  SortingAlgorithm_DW.temporalCounter_i1 = 0U;
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
