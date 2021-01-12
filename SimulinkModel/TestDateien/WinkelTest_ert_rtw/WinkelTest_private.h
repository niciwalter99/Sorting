/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: WinkelTest_private.h
 *
 * Code generated for Simulink model 'WinkelTest'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Dec 14 13:17:49 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_WinkelTest_private_h_
#define RTW_HEADER_WinkelTest_private_h_
#include "rtwtypes.h"
#include "WinkelTest.h"

void config_ADC_A(uint16_T maxconvReg , uint16_T adcChselSEQ1Reg, uint16_T
                  adcChselSEQ2Reg, uint16_T adcChselSEQ3Reg, uint16_T
                  adcChselSEQ4Reg);
extern void WinkelTes_NEGATIVEEdge_Init(boolean_T *rty_OUT,
  P_NEGATIVEEdge_WinkelTest_T *localP);
extern void WinkelTest_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_INprevious, boolean_T *rty_OUT);
extern void WinkelTes_POSITIVEEdge_Init(boolean_T *rty_OUT,
  P_POSITIVEEdge_WinkelTest_T *localP);
extern void WinkelTest_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_INprevious, boolean_T *rty_OUT);
extern void WinkelTest_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt, real32_T
  *rty_y);

#endif                                 /* RTW_HEADER_WinkelTest_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
