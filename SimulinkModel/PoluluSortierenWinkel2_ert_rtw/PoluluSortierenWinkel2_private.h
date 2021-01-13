/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PoluluSortierenWinkel2_private.h
 *
 * Code generated for Simulink model 'PoluluSortierenWinkel2'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jan 12 18:50:08 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PoluluSortierenWinkel2_private_h_
#define RTW_HEADER_PoluluSortierenWinkel2_private_h_
#include "rtwtypes.h"
#include "PoluluSortierenWinkel2.h"

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
extern void PoluluSor_NEGATIVEEdge_Init(boolean_T *rty_OUT,
  P_NEGATIVEEdge_PoluluSortiere_T *localP);
extern void PoluluSortiere_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_INprevious, boolean_T *rty_OUT);
extern void PoluluSor_POSITIVEEdge_Init(boolean_T *rty_OUT,
  P_POSITIVEEdge_PoluluSortiere_T *localP);
extern void PoluluSortiere_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_INprevious, boolean_T *rty_OUT);
extern void PoluluSorti_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt,
  real32_T *rty_y);

#endif                                 /* RTW_HEADER_PoluluSortierenWinkel2_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
