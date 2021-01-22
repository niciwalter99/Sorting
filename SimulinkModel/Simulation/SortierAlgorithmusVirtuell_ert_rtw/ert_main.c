/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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
#include "rtwtypes.h"

volatile int IsrOverrun = 0;
boolean_T isRateRunning[3] = { 0, 0, 0 };

boolean_T need2runFlags[3] = { 0, 0, 0 };

void rt_OneStep(void)
{
  boolean_T eventFlags[3];

  /* Check base rate for overrun */
  if (isRateRunning[0]++) {
    IsrOverrun = 1;
    isRateRunning[0]--;                /* allow future iterations to succeed*/
    return;
  }

  /*
   * For a bare-board target (i.e., no operating system), the rates
   * that execute this base step are buffered locally to allow for
   * overlapping preemption.  The generated code includes function
   * writeCodeInfoFcn() which sets the rates
   * that need to run this time step.  The return values are 1 and 0
   * for true and false, respectively.
   */
  SortierAlgorithmusVirtuell_SetEventsForThisBaseStep(eventFlags);
  enableTimer0Interrupt();
  SortierAlgorithmusVirtuell_step0();

  /* Get model outputs here */
  disableTimer0Interrupt();
  isRateRunning[0]--;
  if (eventFlags[2]) {
    if (need2runFlags[2]++) {
      IsrOverrun = 1;
      need2runFlags[2]--;              /* allow future iterations to succeed*/
      return;
    }
  }

  if (need2runFlags[2]) {
    if (isRateRunning[1]) {
      /* Yield to higher priority*/
      return;
    }

    isRateRunning[2]++;
    enableTimer0Interrupt();

    /* Step the model for subrate "2" */
    switch (2)
    {
     case 2 :
      SortierAlgorithmusVirtuell_step2();

      /* Get model outputs here */
      break;

     default :
      break;
    }

    disableTimer0Interrupt();
    need2runFlags[2]--;
    isRateRunning[2]--;
  }
}

volatile boolean_T stopRequested = false;
int main(void)
{
  volatile boolean_T runModel = true;
  float modelBaseRate = 0.01;
  float systemClock = 150;
  c2000_flash_init();
  init_board();

#ifdef MW_EXEC_PROFILER_ON

  config_profilerTimer();

#endif

  ;
  rtmSetErrorStatus(SortierAlgorithmusVirtuell_M, 0);
  SortierAlgorithmusVirtuell_initialize();
  configureTimer0(modelBaseRate, systemClock);
  runModel =
    rtmGetErrorStatus(SortierAlgorithmusVirtuell_M) == (NULL);
  enableTimer0Interrupt();
  globalInterruptEnable();
  while (runModel) {
    stopRequested = !(
                      rtmGetErrorStatus(SortierAlgorithmusVirtuell_M) == (NULL));
    runModel = !(stopRequested);
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  SortierAlgorithmusVirtuell_terminate();
  globalInterruptDisable();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
