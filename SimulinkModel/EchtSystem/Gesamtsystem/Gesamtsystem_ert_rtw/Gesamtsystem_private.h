/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Gesamtsystem_private.h
 *
 * Code generated for Simulink model 'Gesamtsystem'.
 *
 * Model version                  : 1.85
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Feb  3 23:24:48 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Gesamtsystem_private_h_
#define RTW_HEADER_Gesamtsystem_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "Gesamtsystem.h"

void config_ADC_A(uint16_T maxconvReg , uint16_T adcChselSEQ1Reg, uint16_T
                  adcChselSEQ2Reg, uint16_T adcChselSEQ3Reg, uint16_T
                  adcChselSEQ4Reg);
extern real_T rt_roundd_snf(real_T u);
void isr_int8pie2_task_fcn(void);
extern void configureGPIOExtInterrupt(void);
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern void Gesamtsystem_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_INprevious, rtB_NEGATIVEEdge_Gesamtsystem *localB);
extern void Gesamtsystem_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_INprevious, rtB_POSITIVEEdge_Gesamtsystem *localB);
extern void Gesamtsyste_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt,
  rtB_MATLABFunction1_Gesamtsyste *localB);
void isr_int8pie2_task_fcn(void);

#endif                                 /* RTW_HEADER_Gesamtsystem_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
