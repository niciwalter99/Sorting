/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: WinkelTest.h
 *
 * Code generated for Simulink model 'WinkelTest'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Dec 14 13:17:49 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_WinkelTest_h_
#define RTW_HEADER_WinkelTest_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef WinkelTest_COMMON_INCLUDES_
# define WinkelTest_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "DSP2833x_Gpio.h"
#include "IQmathLib.h"
#endif                                 /* WinkelTest_COMMON_INCLUDES_ */

#include "WinkelTest_types.h"
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
  real_T AnalogDigitalWandlungSampletime;/* '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T AnalogDigitalWandlungSampleti_g;/* '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T RateTransition4;              /* '<Root>/Rate Transition4' */
  real_T y;                            /* '<S2>/Richtung' */
  real_T RL;                           /* '<S1>/MATLAB Function2' */
  boolean_T RelationalOperator1;       /* '<S11>/Relational Operator1' */
  boolean_T RelationalOperator1_j;     /* '<S10>/Relational Operator1' */
  boolean_T RelationalOperator1_o;     /* '<S9>/Relational Operator1' */
  boolean_T RelationalOperator1_f;     /* '<S8>/Relational Operator1' */
} B_WinkelTest_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay5_DSTATE;            /* '<S1>/Unit Delay5' */
  real32_T UnitDelay2_DSTATE;          /* '<S1>/Unit Delay2' */
  real32_T UnitDelay1_DSTATE;          /* '<S1>/Unit Delay1' */
  boolean_T UnitDelay3_DSTATE;         /* '<S1>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE;         /* '<S1>/Unit Delay4' */
  boolean_T Memory_PreviousInput;      /* '<S4>/Memory' */
  boolean_T Memory_PreviousInput_k;    /* '<S3>/Memory' */
} DW_WinkelTest_T;

/* Parameters for system: '<S3>/NEGATIVE Edge' */
struct P_NEGATIVEEdge_WinkelTest_T_ {
  boolean_T OUT_Y0;                    /* Computed Parameter: OUT_Y0
                                        * Referenced by: '<S8>/OUT'
                                        */
};

/* Parameters for system: '<S3>/POSITIVE Edge' */
struct P_POSITIVEEdge_WinkelTest_T_ {
  boolean_T OUT_Y0;                    /* Computed Parameter: OUT_Y0
                                        * Referenced by: '<S9>/OUT'
                                        */
};

/* Parameters (default storage) */
struct P_WinkelTest_T_ {
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
  real_T eitheredge_Value_j[2];        /* Expression: [1 1]
                                        * Referenced by: '<S4>/either edge'
                                        */
  real_T negedge_Value_b[2];           /* Expression: [0 1]
                                        * Referenced by: '<S4>/neg. edge'
                                        */
  real_T posedge_Value_g[2];           /* Expression: [1 0]
                                        * Referenced by: '<S4>/pos. edge'
                                        */
  real_T HeuristischermittelterSchwellwe;/* Expression: 2000
                                          * Referenced by: '<S1>/Heuristisch ermittelter Schwellwert'
                                          */
  real_T Constant_Value;               /* Expression: 2000
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay5'
                                        */
  real_T WinkelFlankePolulo3416V022Polul;/* Expression: 0.076
                                          * Referenced by: '<S1>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
                                          */
  real_T WinkelFlankePolulo3416V022Pol_f;/* Expression: 0.076
                                          * Referenced by: '<S1>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
                                          */
  real_T Constant_Value_g;             /* Expression: 360
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T DeadZone_Start;               /* Expression: -1
                                        * Referenced by: '<S2>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 1
                                        * Referenced by: '<S2>/Dead Zone'
                                        */
  real_T Verstaerkung_Gain;            /* Expression: 0.1
                                        * Referenced by: '<S2>/Verstaerkung'
                                        */
  real32_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                        * Referenced by: '<S1>/Unit Delay2'
                                        */
  real32_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S1>/Unit Delay1'
                                        */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S1>/Unit Delay3'
                                         */
  boolean_T UnitDelay4_InitialCondition;/* Computed Parameter: UnitDelay4_InitialCondition
                                         * Referenced by: '<S1>/Unit Delay4'
                                         */
  P_POSITIVEEdge_WinkelTest_T POSITIVEEdge_j;/* '<S4>/POSITIVE Edge' */
  P_NEGATIVEEdge_WinkelTest_T NEGATIVEEdge_o;/* '<S4>/NEGATIVE Edge' */
  P_POSITIVEEdge_WinkelTest_T POSITIVEEdge;/* '<S3>/POSITIVE Edge' */
  P_NEGATIVEEdge_WinkelTest_T NEGATIVEEdge;/* '<S3>/NEGATIVE Edge' */
};

/* Real-time Model Data Structure */
struct tag_RTM_WinkelTest_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint16_T TID[2];
    } TaskCounters;

    struct {
      boolean_T TID0_1;
    } RateInteraction;
  } Timing;
};

/* Block parameters (default storage) */
extern P_WinkelTest_T WinkelTest_P;

/* Block signals (default storage) */
extern B_WinkelTest_T WinkelTest_B;

/* Block states (default storage) */
extern DW_WinkelTest_T WinkelTest_DW;

/* External function called from main */
extern void WinkelTest_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void WinkelTest_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void WinkelTest_initialize(void);
extern void WinkelTest_step0(void);
extern void WinkelTest_step1(void);
extern void WinkelTest_terminate(void);

/* Real-time Model object */
extern RT_MODEL_WinkelTest_T *const WinkelTest_M;

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
 * '<Root>' : 'WinkelTest'
 * '<S1>'   : 'WinkelTest/Messung des absoluten Winkels -  Auswertung der Encodersignale'
 * '<S2>'   : 'WinkelTest/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01'
 * '<S3>'   : 'WinkelTest/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1'
 * '<S4>'   : 'WinkelTest/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2'
 * '<S5>'   : 'WinkelTest/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1'
 * '<S6>'   : 'WinkelTest/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2'
 * '<S7>'   : 'WinkelTest/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function3'
 * '<S8>'   : 'WinkelTest/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/NEGATIVE Edge'
 * '<S9>'   : 'WinkelTest/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/POSITIVE Edge'
 * '<S10>'  : 'WinkelTest/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/NEGATIVE Edge'
 * '<S11>'  : 'WinkelTest/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/POSITIVE Edge'
 * '<S12>'  : 'WinkelTest/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag'
 * '<S13>'  : 'WinkelTest/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung'
 */
#endif                                 /* RTW_HEADER_WinkelTest_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
