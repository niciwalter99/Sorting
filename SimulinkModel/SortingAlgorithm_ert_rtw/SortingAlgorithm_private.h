/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortingAlgorithm_private.h
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

#ifndef RTW_HEADER_SortingAlgorithm_private_h_
#define RTW_HEADER_SortingAlgorithm_private_h_
#include "rtwtypes.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

void config_ADC_A(uint16_T maxconvReg , uint16_T adcChselSEQ1Reg, uint16_T
                  adcChselSEQ2Reg, uint16_T adcChselSEQ3Reg, uint16_T
                  adcChselSEQ4Reg);

#endif                                 /* RTW_HEADER_SortingAlgorithm_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
