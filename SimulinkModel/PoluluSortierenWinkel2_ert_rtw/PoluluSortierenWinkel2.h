/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PoluluSortierenWinkel2.h
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

#ifndef RTW_HEADER_PoluluSortierenWinkel2_h_
#define RTW_HEADER_PoluluSortierenWinkel2_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef PoluluSortierenWinkel2_COMMON_INCLUDES_
# define PoluluSortierenWinkel2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "DSP2833x_Gpio.h"
#include "IQmathLib.h"
#endif                                 /* PoluluSortierenWinkel2_COMMON_INCLUDES_ */

#include "PoluluSortierenWinkel2_types.h"
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

extern void config_ePWM_GPIO (void);

/* Block signals (default storage) */
typedef struct {
  real_T AnalogDigitalWandlungSampletime;/* '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! F�r korrekte Winkelmessung nicht die Sampletime vergr��ern Weitere Ports k�nnen hinzugef�gt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T AnalogDigitalWandlungSampleti_k;/* '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! F�r korrekte Winkelmessung nicht die Sampletime vergr��ern Weitere Ports k�nnen hinzugef�gt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T RateTransition4;              /* '<Root>/Rate Transition4' */
  real_T y;                            /* '<S4>/Richtung' */
  real_T RL;                           /* '<S3>/MATLAB Function2' */
  boolean_T RelationalOperator1;       /* '<S14>/Relational Operator1' */
  boolean_T RelationalOperator1_h;     /* '<S13>/Relational Operator1' */
  boolean_T RelationalOperator1_m;     /* '<S12>/Relational Operator1' */
  boolean_T RelationalOperator1_l;     /* '<S11>/Relational Operator1' */
} B_PoluluSortierenWinkel2_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay5_DSTATE;            /* '<S3>/Unit Delay5' */
  real32_T UnitDelay2_DSTATE;          /* '<S3>/Unit Delay2' */
  real32_T UnitDelay1_DSTATE;          /* '<S3>/Unit Delay1' */
  uint32_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint16_T temporalCounter_i1_c;       /* '<Root>/Chart1' */
  boolean_T UnitDelay3_DSTATE;         /* '<S3>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE;         /* '<S3>/Unit Delay4' */
  uint16_T is_active_c1_PoluluSortierenWin;/* '<Root>/Chart1' */
  uint16_T is_c1_PoluluSortierenWinkel2;/* '<Root>/Chart1' */
  uint16_T is_active_c3_PoluluSortierenWin;/* '<Root>/Chart' */
  uint16_T is_c3_PoluluSortierenWinkel2;/* '<Root>/Chart' */
  boolean_T Memory_PreviousInput;      /* '<S7>/Memory' */
  boolean_T Memory_PreviousInput_a;    /* '<S6>/Memory' */
} DW_PoluluSortierenWinkel2_T;

/* Parameters for system: '<S6>/NEGATIVE Edge' */
struct P_NEGATIVEEdge_PoluluSortiere_T_ {
  boolean_T OUT_Y0;                    /* Computed Parameter: OUT_Y0
                                        * Referenced by: '<S11>/OUT'
                                        */
};

/* Parameters for system: '<S6>/POSITIVE Edge' */
struct P_POSITIVEEdge_PoluluSortiere_T_ {
  boolean_T OUT_Y0;                    /* Computed Parameter: OUT_Y0
                                        * Referenced by: '<S12>/OUT'
                                        */
};

/* Parameters (default storage) */
struct P_PoluluSortierenWinkel2_T_ {
  real_T EdgeDetector1_model;          /* Mask Parameter: EdgeDetector1_model
                                        * Referenced by: '<S6>/Constant1'
                                        */
  real_T EdgeDetector2_model;          /* Mask Parameter: EdgeDetector2_model
                                        * Referenced by: '<S7>/Constant1'
                                        */
  boolean_T EdgeDetector2_ic;          /* Mask Parameter: EdgeDetector2_ic
                                        * Referenced by: '<S7>/Memory'
                                        */
  boolean_T EdgeDetector1_ic;          /* Mask Parameter: EdgeDetector1_ic
                                        * Referenced by: '<S6>/Memory'
                                        */
  real_T eitheredge_Value[2];          /* Expression: [1 1]
                                        * Referenced by: '<S6>/either edge'
                                        */
  real_T negedge_Value[2];             /* Expression: [0 1]
                                        * Referenced by: '<S6>/neg. edge'
                                        */
  real_T posedge_Value[2];             /* Expression: [1 0]
                                        * Referenced by: '<S6>/pos. edge'
                                        */
  real_T eitheredge_Value_n[2];        /* Expression: [1 1]
                                        * Referenced by: '<S7>/either edge'
                                        */
  real_T negedge_Value_i[2];           /* Expression: [0 1]
                                        * Referenced by: '<S7>/neg. edge'
                                        */
  real_T posedge_Value_m[2];           /* Expression: [1 0]
                                        * Referenced by: '<S7>/pos. edge'
                                        */
  real_T HeuristischermittelterSchwellwe;/* Expression: 2000
                                          * Referenced by: '<S3>/Heuristisch ermittelter Schwellwert'
                                          */
  real_T Constant_Value;               /* Expression: 2000
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S3>/Unit Delay5'
                                        */
  real_T WinkelFlankePolulo3416V022Polul;/* Expression: 0.076
                                          * Referenced by: '<S3>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
                                          */
  real_T WinkelFlankePolulo3416V022Pol_a;/* Expression: 0.076
                                          * Referenced by: '<S3>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
                                          */
  real_T DeadZone_Start;               /* Expression: -1
                                        * Referenced by: '<S4>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 1
                                        * Referenced by: '<S4>/Dead Zone'
                                        */
  real_T Verstaerkung_Gain;            /* Expression: 0.1
                                        * Referenced by: '<S4>/Verstaerkung'
                                        */
  real32_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                        * Referenced by: '<S3>/Unit Delay2'
                                        */
  real32_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S3>/Unit Delay1'
                                        */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S3>/Unit Delay3'
                                         */
  boolean_T UnitDelay4_InitialCondition;/* Computed Parameter: UnitDelay4_InitialCondition
                                         * Referenced by: '<S3>/Unit Delay4'
                                         */
  P_POSITIVEEdge_PoluluSortiere_T POSITIVEEdge_c;/* '<S7>/POSITIVE Edge' */
  P_NEGATIVEEdge_PoluluSortiere_T NEGATIVEEdge_b;/* '<S7>/NEGATIVE Edge' */
  P_POSITIVEEdge_PoluluSortiere_T POSITIVEEdge;/* '<S6>/POSITIVE Edge' */
  P_NEGATIVEEdge_PoluluSortiere_T NEGATIVEEdge;/* '<S6>/NEGATIVE Edge' */
};

/* Real-time Model Data Structure */
struct tag_RTM_PoluluSortierenWinkel_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    struct {
      uint16_T TID[3];
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
extern P_PoluluSortierenWinkel2_T PoluluSortierenWinkel2_P;

/* Block signals (default storage) */
extern B_PoluluSortierenWinkel2_T PoluluSortierenWinkel2_B;

/* Block states (default storage) */
extern DW_PoluluSortierenWinkel2_T PoluluSortierenWinkel2_DW;

/* External function called from main */
extern void PoluluSortierenWinkel2_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void PoluluSortierenWinkel2_SetEventsForThisBaseStep(boolean_T
  *eventFlags);
extern void PoluluSortierenWinkel2_initialize(void);
extern void PoluluSortierenWinkel2_step0(void);
extern void PoluluSortierenWinkel2_step2(void);
extern void PoluluSortierenWinkel2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PoluluSortierenWinke_T *const PoluluSortierenWinkel2_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S5>/FromWs' : Unused code path elimination
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
 * '<Root>' : 'PoluluSortierenWinkel2'
 * '<S1>'   : 'PoluluSortierenWinkel2/Chart'
 * '<S2>'   : 'PoluluSortierenWinkel2/Chart1'
 * '<S3>'   : 'PoluluSortierenWinkel2/Messung des absoluten Winkels -  Auswertung der Encodersignale'
 * '<S4>'   : 'PoluluSortierenWinkel2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01'
 * '<S5>'   : 'PoluluSortierenWinkel2/Signal Builder'
 * '<S6>'   : 'PoluluSortierenWinkel2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1'
 * '<S7>'   : 'PoluluSortierenWinkel2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2'
 * '<S8>'   : 'PoluluSortierenWinkel2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1'
 * '<S9>'   : 'PoluluSortierenWinkel2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2'
 * '<S10>'  : 'PoluluSortierenWinkel2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function3'
 * '<S11>'  : 'PoluluSortierenWinkel2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/NEGATIVE Edge'
 * '<S12>'  : 'PoluluSortierenWinkel2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/POSITIVE Edge'
 * '<S13>'  : 'PoluluSortierenWinkel2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/NEGATIVE Edge'
 * '<S14>'  : 'PoluluSortierenWinkel2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/POSITIVE Edge'
 * '<S15>'  : 'PoluluSortierenWinkel2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag'
 * '<S16>'  : 'PoluluSortierenWinkel2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung'
 */
#endif                                 /* RTW_HEADER_PoluluSortierenWinkel2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
