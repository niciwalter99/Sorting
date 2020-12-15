/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: testFarbe.c
 *
 * Code generated for Simulink model 'testFarbe'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Dec 14 17:13:49 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "testFarbe.h"
#include "testFarbe_private.h"

/* Block signals (default storage) */
B_testFarbe_T testFarbe_B;

/* Real-time model */
RT_MODEL_testFarbe_T testFarbe_M_;
RT_MODEL_testFarbe_T *const testFarbe_M = &testFarbe_M_;
static uint16_T adcInitFlag = 0;

/* Model step function */
void testFarbe_step(void)
{
  /* S-Function (c280xadc): '<Root>/ADC' */
  {
    AdcRegs.ADCTRL2.bit.RST_SEQ1 = 1;  /* Reset SEQ1 module*/
    AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;/*clear INT sequencer*/
    AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;  /* Software Trigger*/
    while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {
    }                                  /*Wait for Sequencer INT bit to clear */

    asm(" RPT #11 || NOP");
    testFarbe_B.ADC = (AdcRegs.ADCRESULT0) >> 4;
  }
}

/* Model initialize function */
void testFarbe_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(testFarbe_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &testFarbe_B), 0,
                sizeof(B_testFarbe_T));

  /* Start for S-Function (c280xadc): '<Root>/ADC' */
  if (adcInitFlag == 0) {
    InitAdc();
    adcInitFlag = 1;
  }

  config_ADC_A (0U, 0U, 0U, 0U, 0U);
}

/* Model terminate function */
void testFarbe_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
