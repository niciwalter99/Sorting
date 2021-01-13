/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: KaliberierungsTest_private.h
 *
 * Code generated for Simulink model 'KaliberierungsTest'.
 *
 * Model version                  : 1.41
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan 13 17:27:49 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_KaliberierungsTest_private_h_
#define RTW_HEADER_KaliberierungsTest_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "KaliberierungsTest.h"

void config_ADC_A(uint16_T maxconvReg , uint16_T adcChselSEQ1Reg, uint16_T
                  adcChselSEQ2Reg, uint16_T adcChselSEQ3Reg, uint16_T
                  adcChselSEQ4Reg);
extern void Kaliberie_NEGATIVEEdge_Init(boolean_T *rty_OUT,
  P_NEGATIVEEdge_Kaliberierungs_T *localP);
extern void Kaliberierungs_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_INprevious, boolean_T *rty_OUT);
extern void Kaliberie_POSITIVEEdge_Init(boolean_T *rty_OUT,
  P_POSITIVEEdge_Kaliberierungs_T *localP);
extern void Kaliberierungs_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_INprevious, boolean_T *rty_OUT);
extern void Kaliberieru_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt,
  real32_T *rty_y);

#endif                                 /* RTW_HEADER_KaliberierungsTest_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
