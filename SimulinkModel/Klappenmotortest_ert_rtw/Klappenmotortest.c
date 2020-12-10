/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Klappenmotortest.c
 *
 * Code generated for Simulink model 'Klappenmotortest'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Dec 10 16:25:22 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Klappenmotortest.h"
#include "Klappenmotortest_private.h"

/* Block signals (default storage) */
B_Klappenmotortest_T Klappenmotortest_B;

/* Block states (default storage) */
DW_Klappenmotortest_T Klappenmotortest_DW;

/* Real-time model */
RT_MODEL_Klappenmotortest_T Klappenmotortest_M_;
RT_MODEL_Klappenmotortest_T *const Klappenmotortest_M = &Klappenmotortest_M_;

/* Model step function */
void Klappenmotortest_step(void)
{
  /* local block i/o variables */
  real_T rtb_Product1;
  int_T idxDelay;

  /* Delay: '<Root>/Delay2' */
  Klappenmotortest_B.Delay2 = Klappenmotortest_DW.Delay2_DSTATE[0];

  /* S-Function (c280xgpio_do): '<Root>/Digital Output' */
  {
    if (Klappenmotortest_B.Delay2)
      GpioDataRegs.GPASET.bit.GPIO16 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO16 = 1;
  }

  /* Product: '<Root>/Product1' incorporates:
   *  Delay: '<Root>/Delay1'
   *  Delay: '<Root>/Delay3'
   */
  rtb_Product1 = Klappenmotortest_DW.Delay1_DSTATE[0] *
    Klappenmotortest_DW.Delay3_DSTATE[0];

  /* S-Function (c280xpwm): '<Root>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM6 --*/
  {
    EPwm6Regs.CMPB = (uint16_T)((uint32_T)EPwm6Regs.TBPRD * rtb_Product1 * 0.01);
  }

  /* Update for Delay: '<Root>/Delay2' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  for (idxDelay = 0; idxDelay < 17; idxDelay++) {
    Klappenmotortest_DW.Delay2_DSTATE[idxDelay] =
      Klappenmotortest_DW.Delay2_DSTATE[idxDelay + 1];
  }

  Klappenmotortest_DW.Delay2_DSTATE[17] = Klappenmotortest_P.Constant1_Value;

  /* End of Update for Delay: '<Root>/Delay2' */

  /* Update for Delay: '<Root>/Delay1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  for (idxDelay = 0; idxDelay < 14; idxDelay++) {
    Klappenmotortest_DW.Delay1_DSTATE[idxDelay] =
      Klappenmotortest_DW.Delay1_DSTATE[idxDelay + 1];
  }

  Klappenmotortest_DW.Delay1_DSTATE[14] = Klappenmotortest_P.Constant1_Value;

  /* End of Update for Delay: '<Root>/Delay1' */

  /* Update for Delay: '<Root>/Delay3' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  for (idxDelay = 0; idxDelay < 19; idxDelay++) {
    Klappenmotortest_DW.Delay3_DSTATE[idxDelay] =
      Klappenmotortest_DW.Delay3_DSTATE[idxDelay + 1];
  }

  Klappenmotortest_DW.Delay3_DSTATE[19] = Klappenmotortest_P.Constant2_Value;

  /* End of Update for Delay: '<Root>/Delay3' */
}

/* Model initialize function */
void Klappenmotortest_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Klappenmotortest_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Klappenmotortest_B), 0,
                sizeof(B_Klappenmotortest_T));

  /* states (dwork) */
  (void) memset((void *)&Klappenmotortest_DW, 0,
                sizeof(DW_Klappenmotortest_T));

  {
    int16_T i;

    /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFFFC;
    GpioCtrlRegs.GPADIR.all |= 0x10000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<Root>/PWM Vorgabe für einen Motor ' */

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
      EPwm6Regs.CMPB = 32000;

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

    /* InitializeConditions for Delay: '<Root>/Delay2' */
    for (i = 0; i < 18; i++) {
      Klappenmotortest_DW.Delay2_DSTATE[i] =
        Klappenmotortest_P.Delay2_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<Root>/Delay2' */

    /* InitializeConditions for Delay: '<Root>/Delay1' */
    for (i = 0; i < 15; i++) {
      Klappenmotortest_DW.Delay1_DSTATE[i] =
        Klappenmotortest_P.Delay1_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<Root>/Delay1' */

    /* InitializeConditions for Delay: '<Root>/Delay3' */
    for (i = 0; i < 20; i++) {
      Klappenmotortest_DW.Delay3_DSTATE[i] =
        Klappenmotortest_P.Delay3_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<Root>/Delay3' */
  }
}

/* Model terminate function */
void Klappenmotortest_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
