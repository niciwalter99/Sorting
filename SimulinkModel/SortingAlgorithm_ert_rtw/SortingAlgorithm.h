/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortingAlgorithm.h
 *
 * Code generated for Simulink model 'SortingAlgorithm'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Dec 13 12:42:36 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SortingAlgorithm_h_
#define RTW_HEADER_SortingAlgorithm_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef SortingAlgorithm_COMMON_INCLUDES_
# define SortingAlgorithm_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "DSP2833x_Gpio.h"
#include "IQmathLib.h"
#endif                                 /* SortingAlgorithm_COMMON_INCLUDES_ */

#include "SortingAlgorithm_types.h"
#include "MW_target_hardware_resources.h"
#include "mw_C28x_addsub_s32.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

extern void config_ePWM_GPIO (void);

/* Block signals (default storage) */
typedef struct {
  real_T FromWs;                       /* '<S2>/FromWs' */
  real_T m5;                           /* '<Root>/Chart' */
  real_T m4;                           /* '<Root>/Chart' */
  real_T m3;                           /* '<Root>/Chart' */
  real_T m0;                           /* '<Root>/Chart' */
  real_T kDirection;                   /* '<Root>/Chart' */
  real_T kPWM;                         /* '<Root>/Chart' */
  int32_T m1;                          /* '<Root>/Chart' */
  int32_T m2;                          /* '<Root>/Chart' */
  uint16_T ADC;                        /* '<Root>/ADC' */
} B_SortingAlgorithm_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T m2_LC;                        /* '<Root>/Chart' */
  real_T m1_LC;                        /* '<Root>/Chart' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S2>/FromWs' */

  real_T magacin;
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S2>/FromWs' */

  uint16_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint16_T is_active_c3_SortingAlgorithm;/* '<Root>/Chart' */
  uint16_T is_c3_SortingAlgorithm;     /* '<Root>/Chart' */
} DW_SortingAlgorithm_T;

/* Parameters (default storage) */
struct P_SortingAlgorithm_T_ {
  real_T Constant1_Value;              /* Expression: 200
                                        * Referenced by: '<Root>/Constant1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SortingAlgorithm_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_SortingAlgorithm_T SortingAlgorithm_P;

/* Block signals (default storage) */
extern B_SortingAlgorithm_T SortingAlgorithm_B;

/* Block states (default storage) */
extern DW_SortingAlgorithm_T SortingAlgorithm_DW;

/* Model entry point functions */
extern void SortingAlgorithm_initialize(void);
extern void SortingAlgorithm_step(void);
extern void SortingAlgorithm_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SortingAlgorithm_T *const SortingAlgorithm_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
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
 * '<Root>' : 'SortingAlgorithm'
 * '<S1>'   : 'SortingAlgorithm/Chart'
 * '<S2>'   : 'SortingAlgorithm/Signal Builder1'
 */
#endif                                 /* RTW_HEADER_SortingAlgorithm_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
