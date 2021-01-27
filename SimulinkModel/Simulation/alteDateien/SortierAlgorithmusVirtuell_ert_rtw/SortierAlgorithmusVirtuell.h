/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusVirtuell.h
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

#ifndef RTW_HEADER_SortierAlgorithmusVirtuell_h_
#define RTW_HEADER_SortierAlgorithmusVirtuell_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef SortierAlgorithmusVirtuell_COMMON_INCLUDES_
# define SortierAlgorithmusVirtuell_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* SortierAlgorithmusVirtuell_COMMON_INCLUDES_ */

#include "SortierAlgorithmusVirtuell_types.h"
#include "MW_target_hardware_resources.h"

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

/* Block signals (default storage) */
typedef struct {
  real_T RateTransition;               /* '<Root>/Rate Transition' */
  real_T FromWs;                       /* '<S6>/FromWs' */
  real_T TmpRTBAtDelayInport1;         /* '<S4>/Signal Builder' */
  real_T FromWs_o;                     /* '<S7>/FromWs' */
  real_T TmpRTBAtDelay4Inport1;        /* '<S4>/Signal Builder1' */
  real_T FromWs_m;                     /* '<S8>/FromWs' */
  real_T TmpRTBAtDelay5Inport1;        /* '<S4>/Signal Builder2' */
  real_T FromWs_j;                     /* '<S9>/FromWs' */
  real_T TmpRTBAtDelay7Inport1;        /* '<S4>/Signal Builder3' */
  real_T magacin;                      /* '<Root>/Sortieralgorithmus' */
  real_T colourOut;                    /* '<Root>/Sortieralgorithmus' */
  real_T b0;                           /* '<Root>/Chart2' */
  real_T b1;                           /* '<Root>/Chart2' */
  real_T b2;                           /* '<Root>/Chart2' */
  real_T b3;                           /* '<Root>/Chart2' */
  real_T signal;                       /* '<Root>/Chart1' */
  real32_T sortCube;                   /* '<Root>/Chart1' */
  real32_T cubeFinished;               /* '<Root>/Chart' */
} B_SortierAlgorithmusVirtuell_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE[4];              /* '<S4>/Delay' */
  real_T Delay1_DSTATE[18];            /* '<S4>/Delay1' */
  real_T Delay2_DSTATE[18];            /* '<S4>/Delay2' */
  real_T Delay3_DSTATE[18];            /* '<S4>/Delay3' */
  real_T Delay4_DSTATE[76];            /* '<S4>/Delay4' */
  real_T Delay5_DSTATE[85];            /* '<S4>/Delay5' */
  real_T Delay6_DSTATE[10];            /* '<S4>/Delay6' */
  real_T Delay7_DSTATE[105];           /* '<S4>/Delay7' */
  real_T RateTransition_Buffer0;       /* '<Root>/Rate Transition' */
  real_T magacin2_LastCube;            /* '<Root>/Sortieralgorithmus' */
  real_T magacin1_LastCube;            /* '<Root>/Sortieralgorithmus' */
  real_T magacin0;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin1;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin2;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin3;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin4;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin5;                     /* '<Root>/Sortieralgorithmus' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S6>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_g;                    /* '<S7>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_f;                    /* '<S8>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_l;                    /* '<S9>/FromWs' */

  real_T magacin;
  real_T A;
  real32_T UnitDelay_DSTATE;           /* '<Root>/Unit Delay' */
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S6>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_h;                    /* '<S7>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_b;                    /* '<S8>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_m;                    /* '<S9>/FromWs' */

  uint16_T temporalCounter_i1;         /* '<Root>/Sortieralgorithmus' */
  uint16_T temporalCounter_i1_o;       /* '<Root>/Chart1' */
  uint16_T is_active_c3_SortierAlgorithmus;/* '<Root>/Sortieralgorithmus' */
  uint16_T is_c3_SortierAlgorithmusVirtuel;/* '<Root>/Sortieralgorithmus' */
  uint16_T is_active_c5_SortierAlgorithmus;/* '<Root>/Chart2' */
  uint16_T is_c5_SortierAlgorithmusVirtuel;/* '<Root>/Chart2' */
  uint16_T is_active_c1_SortierAlgorithmus;/* '<Root>/Chart1' */
  uint16_T is_c1_SortierAlgorithmusVirtuel;/* '<Root>/Chart1' */
  uint16_T is_active_c2_SortierAlgorithmus;/* '<Root>/Chart' */
  uint16_T is_c2_SortierAlgorithmusVirtuel;/* '<Root>/Chart' */
  uint16_T temporalCounter_i1_d;       /* '<Root>/Chart' */
} DW_SortierAlgorithmusVirtuell_T;

/* Parameters (default storage) */
struct P_SortierAlgorithmusVirtuell_T_ {
  real_T RateTransition_InitialCondition;/* Expression: 1
                                          * Referenced by: '<Root>/Rate Transition'
                                          */
  real_T uDLookupTable_tableData[8];   /* Expression: [-1,-440,-295,-170,-40,85,220,430]
                                        * Referenced by: '<Root>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[8];    /* Expression: [-1,0,1,2,3,4,5,6]
                                        * Referenced by: '<Root>/1-D Lookup Table'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S4>/Delay'
                                        */
  real_T Delay1_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S4>/Delay1'
                                        */
  real_T Delay2_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S4>/Delay2'
                                        */
  real_T Delay3_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S4>/Delay3'
                                        */
  real_T Delay4_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S4>/Delay4'
                                        */
  real_T Delay5_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S4>/Delay5'
                                        */
  real_T Delay6_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S4>/Delay6'
                                        */
  real_T Delay7_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S4>/Delay7'
                                        */
  real32_T UnitDelay_InitialCondition; /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  uint16_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S4>/Delay'
                                        */
  uint16_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S4>/Delay1'
                                        */
  uint16_T Delay2_DelayLength;         /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<S4>/Delay2'
                                        */
  uint16_T Delay3_DelayLength;         /* Computed Parameter: Delay3_DelayLength
                                        * Referenced by: '<S4>/Delay3'
                                        */
  uint16_T Delay4_DelayLength;         /* Computed Parameter: Delay4_DelayLength
                                        * Referenced by: '<S4>/Delay4'
                                        */
  uint16_T Delay5_DelayLength;         /* Computed Parameter: Delay5_DelayLength
                                        * Referenced by: '<S4>/Delay5'
                                        */
  uint16_T Delay6_DelayLength;         /* Computed Parameter: Delay6_DelayLength
                                        * Referenced by: '<S4>/Delay6'
                                        */
  uint16_T Delay7_DelayLength;         /* Computed Parameter: Delay7_DelayLength
                                        * Referenced by: '<S4>/Delay7'
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
extern P_SortierAlgorithmusVirtuell_T SortierAlgorithmusVirtuell_P;

/* Block signals (default storage) */
extern B_SortierAlgorithmusVirtuell_T SortierAlgorithmusVirtuell_B;

/* Block states (default storage) */
extern DW_SortierAlgorithmusVirtuell_T SortierAlgorithmusVirtuell_DW;

/* External function called from main */
extern void SortierAlgorithmusVirtuell_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void SortierAlgorithmusVirtuell_SetEventsForThisBaseStep(boolean_T
  *eventFlags);
extern void SortierAlgorithmusVirtuell_initialize(void);
extern void SortierAlgorithmusVirtuell_step0(void);
extern void SortierAlgorithmusVirtuell_step2(void);
extern void SortierAlgorithmusVirtuell_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SortierAlgorithmusVi_T *const SortierAlgorithmusVirtuell_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<Root>' : 'SortierAlgorithmusVirtuell'
 * '<S1>'   : 'SortierAlgorithmusVirtuell/Chart'
 * '<S2>'   : 'SortierAlgorithmusVirtuell/Chart1'
 * '<S3>'   : 'SortierAlgorithmusVirtuell/Chart2'
 * '<S4>'   : 'SortierAlgorithmusVirtuell/ColorReadOut'
 * '<S5>'   : 'SortierAlgorithmusVirtuell/Sortieralgorithmus'
 * '<S6>'   : 'SortierAlgorithmusVirtuell/ColorReadOut/Signal Builder'
 * '<S7>'   : 'SortierAlgorithmusVirtuell/ColorReadOut/Signal Builder1'
 * '<S8>'   : 'SortierAlgorithmusVirtuell/ColorReadOut/Signal Builder2'
 * '<S9>'   : 'SortierAlgorithmusVirtuell/ColorReadOut/Signal Builder3'
 */
#endif                                 /* RTW_HEADER_SortierAlgorithmusVirtuell_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
