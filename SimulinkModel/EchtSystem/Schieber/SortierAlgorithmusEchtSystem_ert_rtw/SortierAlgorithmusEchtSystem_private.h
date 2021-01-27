/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusEchtSystem_private.h
 *
 * Code generated for Simulink model 'SortierAlgorithmusEchtSystem'.
 *
<<<<<<< HEAD:SimulinkModel/EchtSystem/SortierAlgorithmusEchtSystem_ert_rtw/SortierAlgorithmusEchtSystem_private.h
 * Model version                  : 1.59
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Jan 23 13:33:46 2021
=======
 * Model version                  : 1.56
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan 20 10:48:53 2021
>>>>>>> d9cc46c8cf39ea11377a61abe29ef5dd2a86b746:SimulinkModel/EchtSystem/Schieber/SortierAlgorithmusEchtSystem_ert_rtw/SortierAlgorithmusEchtSystem_private.h
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SortierAlgorithmusEchtSystem_private_h_
#define RTW_HEADER_SortierAlgorithmusEchtSystem_private_h_
#include "rtwtypes.h"
#include "SortierAlgorithmusEchtSystem.h"

void config_ADC_A(uint16_T maxconvReg , uint16_T adcChselSEQ1Reg, uint16_T
                  adcChselSEQ2Reg, uint16_T adcChselSEQ3Reg, uint16_T
                  adcChselSEQ4Reg);
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern void SortierAl_NEGATIVEEdge_Init(boolean_T *rty_OUT,
  P_NEGATIVEEdge_SortierAlgorit_T *localP);
extern void SortierAlgorit_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_INprevious, boolean_T *rty_OUT);
extern void SortierAl_POSITIVEEdge_Init(boolean_T *rty_OUT,
  P_POSITIVEEdge_SortierAlgorit_T *localP);
extern void SortierAlgorit_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_INprevious, boolean_T *rty_OUT);
extern void SortierAlgo_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt,
  real32_T *rty_y);

#endif                                 /* RTW_HEADER_SortierAlgorithmusEchtSystem_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
