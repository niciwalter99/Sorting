/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusVirtuelleTestumgebung.h
 *
 * Code generated for Simulink model 'SortierAlgorithmusVirtuelleTestumgebung'.
 *
 * Model version                  : 1.37
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan 13 17:12:00 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SortierAlgorithmusVirtuelleTestumgebung_h_
#define RTW_HEADER_SortierAlgorithmusVirtuelleTestumgebung_h_
#include <math.h>
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
#include "mw_C28x_addsub_s32.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#define SortierAlgorithmusVirtuelleTestumgebung_M (SortierAlgorithmusVirtuelleT_M)

/* Block signals (default storage) */
typedef struct {
  real_T RateTransition;               /* '<Root>/Rate Transition' */
  real_T FromWs;                       /* '<S4>/FromWs' */
  real_T TmpRTBAtDelayInport1;         /* '<S1>/Signal Builder' */
} B_SortierAlgorithmusVirtuelle_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE[4];              /* '<S1>/Delay' */
  real_T Delay1_DSTATE[18];            /* '<S1>/Delay1' */
  real_T Delay2_DSTATE[18];            /* '<S1>/Delay2' */
  real_T Delay3_DSTATE[18];            /* '<S1>/Delay3' */
  real_T Delay4_DSTATE[18];            /* '<S1>/Delay4' */
  real_T RateTransition_Buffer0;       /* '<Root>/Rate Transition' */
  real_T magacin2_LastCube;            /* '<Root>/Sortieralgorithmus' */
  real_T magacin1_LastCube;            /* '<Root>/Sortieralgorithmus' */
  real_T magacin0;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin3;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin4;                     /* '<Root>/Sortieralgorithmus' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S4>/FromWs' */

  real_T magacin;
  int32_T magacin1;                    /* '<Root>/Sortieralgorithmus' */
  int32_T magacin2;                    /* '<Root>/Sortieralgorithmus' */
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S4>/FromWs' */

  uint16_T temporalCounter_i1;         /* '<Root>/Schieberbewegung' */
  uint16_T is_active_c3_SortierAlgorithmus;/* '<Root>/Sortieralgorithmus' */
  uint16_T is_c3_SortierAlgorithmusVirtuel;/* '<Root>/Sortieralgorithmus' */
  uint16_T temporalCounter_i1_a;       /* '<Root>/Sortieralgorithmus' */
  uint16_T is_active_c1_SortierAlgorithmus;/* '<Root>/Schieberbewegung' */
  uint16_T is_c1_SortierAlgorithmusVirtuel;/* '<Root>/Schieberbewegung' */
} DW_SortierAlgorithmusVirtuell_T;

/* Parameters (default storage) */
struct P_SortierAlgorithmusVirtuelle_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 1
                                          * Referenced by: '<Root>/Rate Transition'
                                          */
  real_T uDLookupTable1_tableData[7];  /* Expression: [-440,-295,-170,-40,85,220,430]
                                        * Referenced by: '<Root>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp01Data[7];   /* Expression: [0,1,2,3,4,5,6]
                                        * Referenced by: '<Root>/1-D Lookup Table1'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S1>/Delay'
                                        */
  real_T Delay1_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S1>/Delay1'
                                        */
  real_T Delay2_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S1>/Delay2'
                                        */
  real_T Delay3_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S1>/Delay3'
                                        */
  real_T Delay4_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S1>/Delay4'
                                        */
  uint16_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S1>/Delay'
                                        */
  uint16_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S1>/Delay1'
                                        */
  uint16_T Delay2_DelayLength;         /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<S1>/Delay2'
                                        */
  uint16_T Delay3_DelayLength;         /* Computed Parameter: Delay3_DelayLength
                                        * Referenced by: '<S1>/Delay3'
                                        */
  uint16_T Delay4_DelayLength;         /* Computed Parameter: Delay4_DelayLength
                                        * Referenced by: '<S1>/Delay4'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SortierAlgorithmusVir_T {
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
    struct {
      uint8_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
    } RateInteraction;

    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[3];
  } Timing;
};

/* Block parameters (default storage) */
extern P_SortierAlgorithmusVirtuelle_T SortierAlgorithmusVirtuelleTe_P;

/* Block signals (default storage) */
extern B_SortierAlgorithmusVirtuelle_T SortierAlgorithmusVirtuelleTe_B;

/* Block states (default storage) */
extern DW_SortierAlgorithmusVirtuell_T SortierAlgorithmusVirtuelleT_DW;

/* External function called from main */
extern void SortierAlgorithmusVirtuelleTestumgebung_SetEventsForThisBaseStep
  (boolean_T *eventFlags);

/* Model entry point functions */
extern void SortierAlgorithmusVirtuelleTestumgebung_SetEventsForThisBaseStep
  (boolean_T *eventFlags);
extern void SortierAlgorithmusVirtuelleTestumgebung_initialize(void);
extern void SortierAlgorithmusVirtuelleTestumgebung_step0(void);
extern void SortierAlgorithmusVirtuelleTestumgebung_step2(void);
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
 * '<S1>'   : 'SortierAlgorithmusVirtuelleTestumgebung/ColorReadOut'
 * '<S2>'   : 'SortierAlgorithmusVirtuelleTestumgebung/Schieberbewegung'
 * '<S3>'   : 'SortierAlgorithmusVirtuelleTestumgebung/Sortieralgorithmus'
 * '<S4>'   : 'SortierAlgorithmusVirtuelleTestumgebung/ColorReadOut/Signal Builder'
 */
#endif                                 /* RTW_HEADER_SortierAlgorithmusVirtuelleTestumgebung_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
