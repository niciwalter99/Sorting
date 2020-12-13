/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PoluluSortierenMitRandom.h
 *
 * Code generated for Simulink model 'PoluluSortierenMitRandom'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Dec 13 15:52:47 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PoluluSortierenMitRandom_h_
#define RTW_HEADER_PoluluSortierenMitRandom_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef PoluluSortierenMitRandom_COMMON_INCLUDES_
# define PoluluSortierenMitRandom_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "DSP2833x_Gpio.h"
#include "IQmathLib.h"
#endif                                 /* PoluluSortierenMitRandom_COMMON_INCLUDES_ */

#include "PoluluSortierenMitRandom_types.h"
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

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

extern void config_ePWM_GPIO (void);

/* Block signals (default storage) */
typedef struct {
  uint32_T uv0[625];
  real_T AnalogDigitalWandlungSampletime;/* '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T AnalogDigitalWandlungSampleti_b;/* '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T RL;                           /* '<S2>/MATLAB Function2' */
  real_T rechts;                       /* '<Root>/Chart' */
  real_T stop;                         /* '<Root>/Chart' */
  boolean_T RelationalOperator1;       /* '<S11>/Relational Operator1' */
  boolean_T RelationalOperator1_e;     /* '<S10>/Relational Operator1' */
  boolean_T RelationalOperator1_c;     /* '<S9>/Relational Operator1' */
  boolean_T RelationalOperator1_h;     /* '<S8>/Relational Operator1' */
} B_PoluluSortierenMitRandom_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay5_DSTATE;            /* '<S2>/Unit Delay5' */
  real_T x;                            /* '<Root>/Chart' */
  real_T positionLinks;                /* '<Root>/Chart' */
  real32_T UnitDelay2_DSTATE;          /* '<S2>/Unit Delay2' */
  real32_T UnitDelay1_DSTATE;          /* '<S2>/Unit Delay1' */
  uint32_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint32_T state;                      /* '<Root>/Random Integer Generator' */
  uint32_T state_c[2];                 /* '<Root>/Random Integer Generator' */
  uint32_T state_p[625];               /* '<Root>/Random Integer Generator' */
  uint32_T method;                     /* '<Root>/Random Integer Generator' */
  boolean_T UnitDelay3_DSTATE;         /* '<S2>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE;         /* '<S2>/Unit Delay4' */
  uint16_T is_active_c3_PoluluSortierenMit;/* '<Root>/Chart' */
  uint16_T is_c3_PoluluSortierenMitRandom;/* '<Root>/Chart' */
  boolean_T Memory_PreviousInput;      /* '<S4>/Memory' */
  boolean_T Memory_PreviousInput_p;    /* '<S3>/Memory' */
  boolean_T state_not_empty_m;         /* '<Root>/Random Integer Generator' */
} DW_PoluluSortierenMitRandom_T;

/* Parameters for system: '<S3>/NEGATIVE Edge' */
struct P_NEGATIVEEdge_PoluluSortiere_T_ {
  boolean_T OUT_Y0;                    /* Computed Parameter: OUT_Y0
                                        * Referenced by: '<S8>/OUT'
                                        */
};

/* Parameters for system: '<S3>/POSITIVE Edge' */
struct P_POSITIVEEdge_PoluluSortiere_T_ {
  boolean_T OUT_Y0;                    /* Computed Parameter: OUT_Y0
                                        * Referenced by: '<S9>/OUT'
                                        */
};

/* Parameters (default storage) */
struct P_PoluluSortierenMitRandom_T_ {
  real_T EdgeDetector1_model;          /* Mask Parameter: EdgeDetector1_model
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T EdgeDetector2_model;          /* Mask Parameter: EdgeDetector2_model
                                        * Referenced by: '<S4>/Constant1'
                                        */
  boolean_T EdgeDetector2_ic;          /* Mask Parameter: EdgeDetector2_ic
                                        * Referenced by: '<S4>/Memory'
                                        */
  boolean_T EdgeDetector1_ic;          /* Mask Parameter: EdgeDetector1_ic
                                        * Referenced by: '<S3>/Memory'
                                        */
  real_T eitheredge_Value[2];          /* Expression: [1 1]
                                        * Referenced by: '<S3>/either edge'
                                        */
  real_T negedge_Value[2];             /* Expression: [0 1]
                                        * Referenced by: '<S3>/neg. edge'
                                        */
  real_T posedge_Value[2];             /* Expression: [1 0]
                                        * Referenced by: '<S3>/pos. edge'
                                        */
  real_T eitheredge_Value_k[2];        /* Expression: [1 1]
                                        * Referenced by: '<S4>/either edge'
                                        */
  real_T negedge_Value_i[2];           /* Expression: [0 1]
                                        * Referenced by: '<S4>/neg. edge'
                                        */
  real_T posedge_Value_c[2];           /* Expression: [1 0]
                                        * Referenced by: '<S4>/pos. edge'
                                        */
  real_T HeuristischermittelterSchwellwe;/* Expression: 2000
                                          * Referenced by: '<S2>/Heuristisch ermittelter Schwellwert'
                                          */
  real_T Constant_Value;               /* Expression: 2000
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay5'
                                        */
  real32_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                        * Referenced by: '<S2>/Unit Delay2'
                                        */
  real32_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S2>/Unit Delay1'
                                        */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S2>/Unit Delay3'
                                         */
  boolean_T UnitDelay4_InitialCondition;/* Computed Parameter: UnitDelay4_InitialCondition
                                         * Referenced by: '<S2>/Unit Delay4'
                                         */
  P_POSITIVEEdge_PoluluSortiere_T POSITIVEEdge_b;/* '<S4>/POSITIVE Edge' */
  P_NEGATIVEEdge_PoluluSortiere_T NEGATIVEEdge_a;/* '<S4>/NEGATIVE Edge' */
  P_POSITIVEEdge_PoluluSortiere_T POSITIVEEdge;/* '<S3>/POSITIVE Edge' */
  P_NEGATIVEEdge_PoluluSortiere_T NEGATIVEEdge;/* '<S3>/NEGATIVE Edge' */
};

/* Real-time Model Data Structure */
struct tag_RTM_PoluluSortierenMitRan_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint16_T TID[3];
    } TaskCounters;
  } Timing;
};

/* Block parameters (default storage) */
extern P_PoluluSortierenMitRandom_T PoluluSortierenMitRandom_P;

/* Block signals (default storage) */
extern B_PoluluSortierenMitRandom_T PoluluSortierenMitRandom_B;

/* Block states (default storage) */
extern DW_PoluluSortierenMitRandom_T PoluluSortierenMitRandom_DW;

/* External function called from main */
extern void PoluluSortierenMitRandom_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void PoluluSortierenMitRandom_SetEventsForThisBaseStep(boolean_T
  *eventFlags);
extern void PoluluSortierenMitRandom_initialize(void);
extern void PoluluSortierenMitRandom_step0(void);
extern void PoluluSortierenMitRandom_step1(void);
extern void PoluluSortierenMitRandom_step2(void);
extern void PoluluSortierenMitRandom_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PoluluSortierenMitRa_T *const PoluluSortierenMitRandom_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Product1' : Unused code path elimination
 * Block '<S2>/Product2' : Unused code path elimination
 * Block '<S2>/Sum' : Unused code path elimination
 * Block '<S2>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043' : Unused code path elimination
 * Block '<S2>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1' : Unused code path elimination
 * Block '<Root>/Rate Transition4' : Unused code path elimination
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
 * '<Root>' : 'PoluluSortierenMitRandom'
 * '<S1>'   : 'PoluluSortierenMitRandom/Chart'
 * '<S2>'   : 'PoluluSortierenMitRandom/Messung des absoluten Winkels -  Auswertung der Encodersignale'
 * '<S3>'   : 'PoluluSortierenMitRandom/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1'
 * '<S4>'   : 'PoluluSortierenMitRandom/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2'
 * '<S5>'   : 'PoluluSortierenMitRandom/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1'
 * '<S6>'   : 'PoluluSortierenMitRandom/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2'
 * '<S7>'   : 'PoluluSortierenMitRandom/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function3'
 * '<S8>'   : 'PoluluSortierenMitRandom/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/NEGATIVE Edge'
 * '<S9>'   : 'PoluluSortierenMitRandom/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/POSITIVE Edge'
 * '<S10>'  : 'PoluluSortierenMitRandom/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/NEGATIVE Edge'
 * '<S11>'  : 'PoluluSortierenMitRandom/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/POSITIVE Edge'
 */
#endif                                 /* RTW_HEADER_PoluluSortierenMitRandom_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
