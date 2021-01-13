/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusVirtuelleTestumgebung.h
 *
 * Code generated for Simulink model 'SortierAlgorithmusVirtuelleTestumgebung'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Dec 16 15:51:27 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SortierAlgorithmusVirtuelleTestumgebung_h_
#define RTW_HEADER_SortierAlgorithmusVirtuelleTestumgebung_h_
#include <string.h>
#include <stddef.h>
#ifndef SortierAlgorithmusVirtuelleTestumgebung_COMMON_INCLUDES_
# define SortierAlgorithmusVirtuelleTestumgebung_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* SortierAlgorithmusVirtuelleTestumgebung_COMMON_INCLUDES_ */

#include "SortierAlgorithmusVirtuelleTestumgebung_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#define SortierAlgorithmusVirtuelleTestumgebung_M (SortierAlgorithmusVirtuelleT_M)

/* Block signals (default storage) */
typedef struct {
  uint32_T uv0[625];
  real_T magacin;                      /* '<Root>/Sortieralgorithmus' */
} B_SortierAlgorithmusVirtuelle_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T state_h[625];               /* '<Root>/Random Integer Generator' */
  real_T magacin;
  uint32_T state;                      /* '<Root>/Random Integer Generator' */
  uint32_T state_a[2];                 /* '<Root>/Random Integer Generator' */
  uint32_T method;                     /* '<Root>/Random Integer Generator' */
  uint16_T is_active_c3_SortierAlgorithmus;/* '<Root>/Sortieralgorithmus' */
  uint16_T is_c3_SortierAlgorithmusVirtuel;/* '<Root>/Sortieralgorithmus' */
  uint16_T temporalCounter_i1;         /* '<Root>/Sortieralgorithmus' */
  uint16_T is_active_c1_SortierAlgorithmus;/* '<Root>/Chart1' */
  uint16_T is_c1_SortierAlgorithmusVirtuel;/* '<Root>/Chart1' */
  uint16_T temporalCounter_i1_f;       /* '<Root>/Chart1' */
  boolean_T state_not_empty_a;         /* '<Root>/Random Integer Generator' */
} DW_SortierAlgorithmusVirtuell_T;

/* Parameters (default storage) */
struct P_SortierAlgorithmusVirtuelle_T_ {
  real_T Constant1_Value;              /* Expression: 1800
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SortierAlgorithmusVir_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_SortierAlgorithmusVirtuelle_T SortierAlgorithmusVirtuelleTe_P;

/* Block signals (default storage) */
extern B_SortierAlgorithmusVirtuelle_T SortierAlgorithmusVirtuelleTe_B;

/* Block states (default storage) */
extern DW_SortierAlgorithmusVirtuell_T SortierAlgorithmusVirtuelleT_DW;

/* Model entry point functions */
extern void SortierAlgorithmusVirtuelleTestumgebung_initialize(void);
extern void SortierAlgorithmusVirtuelleTestumgebung_step(void);
extern void SortierAlgorithmusVirtuelleTestumgebung_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SortierAlgorithmusVi_T *const SortierAlgorithmusVirtuelleT_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SortierAlgorithmusVirtuelleTestumgebung'
 * '<S1>'   : 'SortierAlgorithmusVirtuelleTestumgebung/Chart1'
 * '<S2>'   : 'SortierAlgorithmusVirtuelleTestumgebung/Sortieralgorithmus'
 */
#endif                                 /* RTW_HEADER_SortierAlgorithmusVirtuelleTestumgebung_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
