/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PoluluSortierenTest.c
 *
 * Code generated for Simulink model 'PoluluSortierenTest'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Dec 13 15:11:18 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PoluluSortierenTest.h"
#include "PoluluSortierenTest_private.h"
#define PoluluSortie_IN_NO_ACTIVE_CHILD (0U)
#define PoluluSortierenT_IN_Farbauswahl (1U)
#define PoluluSortierenT_IN_Linksdrehen (2U)
#define PoluluSortierenTes_IN_Startwert (4U)
#define PoluluSortierenTest_IN_Stopende (5U)
#define PoluluSortierenTest_IN_Stoppen (6U)
#define PoluluSortieren_IN_Rechtsdrehen (3U)

/* Block signals (default storage) */
B_PoluluSortierenTest_T PoluluSortierenTest_B;

/* Block states (default storage) */
DW_PoluluSortierenTest_T PoluluSortierenTest_DW;

/* Real-time model */
RT_MODEL_PoluluSortierenTest_T PoluluSortierenTest_M_;
RT_MODEL_PoluluSortierenTest_T *const PoluluSortierenTest_M =
  &PoluluSortierenTest_M_;

/* Forward declaration for local functions */
static real_T PoluluSortierenTes_farbewaehlen(void);
static real_T PoluluSortierenTest_sekunden(void);

/* Function for Chart: '<Root>/Chart' */
static real_T PoluluSortierenTes_farbewaehlen(void)
{
  return PoluluSortierenTest_DW.blau == 0.0;
}

/* Function for Chart: '<Root>/Chart' */
static real_T PoluluSortierenTest_sekunden(void)
{
  real_T sekundenanzahl;
  if ((PoluluSortierenTest_DW.positionLinks == 0.0) &&
      (PoluluSortierenTest_B.rechts == 1.0)) {
    sekundenanzahl = 2.0;
  } else if ((PoluluSortierenTest_DW.positionLinks == 1.0) &&
             (PoluluSortierenTest_B.rechts == 0.0)) {
    sekundenanzahl = 2.0;
  } else {
    sekundenanzahl = 4.0;
  }

  return sekundenanzahl;
}

/* Model step function */
void PoluluSortierenTest_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (PoluluSortierenTest_DW.temporalCounter_i1 < MAX_uint32_T) {
    PoluluSortierenTest_DW.temporalCounter_i1++;
  }

  if (PoluluSortierenTest_DW.is_active_c3_PoluluSortierenTes == 0U) {
    PoluluSortierenTest_DW.is_active_c3_PoluluSortierenTes = 1U;
    PoluluSortierenTest_DW.is_c3_PoluluSortierenTest =
      PoluluSortierenTes_IN_Startwert;
    PoluluSortierenTest_DW.blau = 0.0;
    PoluluSortierenTest_B.stop = 100.0;
    PoluluSortierenTest_DW.positionLinks = 0.0;
  } else {
    switch (PoluluSortierenTest_DW.is_c3_PoluluSortierenTest) {
     case PoluluSortierenT_IN_Farbauswahl:
      if (PoluluSortierenTest_DW.temporalCounter_i1 >= 1UL) {
        PoluluSortierenTest_DW.is_c3_PoluluSortierenTest =
          PoluluSortierenTest_IN_Stopende;
        PoluluSortierenTest_B.stop = 100.0;
      } else {
        PoluluSortierenTest_DW.blau = PoluluSortierenTes_farbewaehlen();
      }
      break;

     case PoluluSortierenT_IN_Linksdrehen:
      if (PoluluSortierenTest_DW.temporalCounter_i1 >= (uint32_T)ceil
          (PoluluSortierenTest_DW.x)) {
        PoluluSortierenTest_DW.positionLinks = 1.0;
        PoluluSortierenTest_DW.is_c3_PoluluSortierenTest =
          PoluluSortierenTest_IN_Stoppen;
        PoluluSortierenTest_DW.temporalCounter_i1 = 0UL;
        PoluluSortierenTest_B.stop = 0.0;
      } else {
        PoluluSortierenTest_B.rechts = 0.0;
        PoluluSortierenTest_DW.x = PoluluSortierenTest_sekunden();
      }
      break;

     case PoluluSortieren_IN_Rechtsdrehen:
      if (PoluluSortierenTest_DW.temporalCounter_i1 >= (uint32_T)ceil
          (PoluluSortierenTest_DW.x)) {
        PoluluSortierenTest_DW.positionLinks = 0.0;
        PoluluSortierenTest_DW.is_c3_PoluluSortierenTest =
          PoluluSortierenTest_IN_Stoppen;
        PoluluSortierenTest_DW.temporalCounter_i1 = 0UL;
        PoluluSortierenTest_B.stop = 0.0;
      } else {
        PoluluSortierenTest_B.rechts = 1.0;
        PoluluSortierenTest_DW.x = PoluluSortierenTest_sekunden();
      }
      break;

     case PoluluSortierenTes_IN_Startwert:
      PoluluSortierenTest_DW.is_c3_PoluluSortierenTest =
        PoluluSortierenT_IN_Farbauswahl;
      PoluluSortierenTest_DW.temporalCounter_i1 = 0UL;
      PoluluSortierenTest_DW.blau = PoluluSortierenTes_farbewaehlen();
      break;

     case PoluluSortierenTest_IN_Stopende:
      if (PoluluSortierenTest_DW.blau == 0.0) {
        PoluluSortierenTest_DW.is_c3_PoluluSortierenTest =
          PoluluSortierenT_IN_Linksdrehen;
        PoluluSortierenTest_DW.temporalCounter_i1 = 0UL;
        PoluluSortierenTest_B.rechts = 0.0;
        PoluluSortierenTest_DW.x = PoluluSortierenTest_sekunden();
      } else if (PoluluSortierenTest_DW.blau == 1.0) {
        PoluluSortierenTest_DW.is_c3_PoluluSortierenTest =
          PoluluSortieren_IN_Rechtsdrehen;
        PoluluSortierenTest_DW.temporalCounter_i1 = 0UL;
        PoluluSortierenTest_B.rechts = 1.0;
        PoluluSortierenTest_DW.x = PoluluSortierenTest_sekunden();
      } else {
        PoluluSortierenTest_B.stop = 100.0;
      }
      break;

     default:
      if (PoluluSortierenTest_DW.temporalCounter_i1 >= 4UL) {
        PoluluSortierenTest_DW.is_c3_PoluluSortierenTest =
          PoluluSortierenT_IN_Farbauswahl;
        PoluluSortierenTest_DW.temporalCounter_i1 = 0UL;
        PoluluSortierenTest_DW.blau = PoluluSortierenTes_farbewaehlen();
      } else {
        PoluluSortierenTest_B.stop = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  {
    if (PoluluSortierenTest_B.rechts)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* S-Function (c280xpwm): '<Root>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD *
      PoluluSortierenTest_B.stop * 0.01);
  }
}

/* Model initialize function */
void PoluluSortierenTest_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(PoluluSortierenTest_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &PoluluSortierenTest_B), 0,
                sizeof(B_PoluluSortierenTest_T));

  /* states (dwork) */
  (void) memset((void *)&PoluluSortierenTest_DW, 0,
                sizeof(DW_PoluluSortierenTest_T));

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

  /* SystemInitialize for Chart: '<Root>/Chart' */
  PoluluSortierenTest_DW.temporalCounter_i1 = 0UL;
  PoluluSortierenTest_DW.is_active_c3_PoluluSortierenTes = 0U;
  PoluluSortierenTest_DW.is_c3_PoluluSortierenTest =
    PoluluSortie_IN_NO_ACTIVE_CHILD;
  PoluluSortierenTest_DW.positionLinks = 0.0;
}

/* Model terminate function */
void PoluluSortierenTest_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
