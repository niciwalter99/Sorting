/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusEchtSystem.h
 *
 * Code generated for Simulink model 'SortierAlgorithmusEchtSystem'.
 *
 * Model version                  : 1.49
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Jan 15 15:17:20 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SortierAlgorithmusEchtSystem_h_
#define RTW_HEADER_SortierAlgorithmusEchtSystem_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef SortierAlgorithmusEchtSystem_COMMON_INCLUDES_
# define SortierAlgorithmusEchtSystem_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "DSP2833x_Gpio.h"
#include "IQmathLib.h"
#endif                                 /* SortierAlgorithmusEchtSystem_COMMON_INCLUDES_ */

#include "SortierAlgorithmusEchtSystem_types.h"
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
  real_T AnalogDigitalWandlungSampleti_l;/* '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T AnalogDigitalWandlungSampleti_a;/* '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T AnalogDigitalWandlungSampleti_o;/* '<Root>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T RateTransition3;              /* '<S4>/Rate Transition3' */
  real_T RateTransition2;              /* '<Root>/Rate Transition2' */
  real_T RateTransition3_l;            /* '<Root>/Rate Transition3' */
  real_T RL;                           /* '<S8>/MATLAB Function2' */
  real_T magacin;                      /* '<Root>/Sortieralgorithmus' */
  real_T y;                            /* '<S5>/Richtung' */
  real_T angle;                        /* '<Root>/Chart1' */
  real_T gatePWM;                      /* '<Root>/Chart1' */
  real_T gateDirection;                /* '<Root>/Chart1' */
  boolean_T RelationalOperator1;       /* '<S17>/Relational Operator1' */
  boolean_T RelationalOperator1_f;     /* '<S16>/Relational Operator1' */
  boolean_T RelationalOperator1_b;     /* '<S15>/Relational Operator1' */
  boolean_T RelationalOperator1_j;     /* '<S14>/Relational Operator1' */
} B_SortierAlgorithmusEchtSyste_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay5_DSTATE;            /* '<S8>/Unit Delay5' */
  real_T magacin2_LastCube;            /* '<Root>/Sortieralgorithmus' */
  real_T magacin1_LastCube;            /* '<Root>/Sortieralgorithmus' */
  real_T magacin0;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin1;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin2;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin3;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin4;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin;
  real32_T UnitDelay2_DSTATE;          /* '<S8>/Unit Delay2' */
  real32_T UnitDelay1_DSTATE;          /* '<S8>/Unit Delay1' */
  uint16_T temporalCounter_i1;         /* '<Root>/Sortieralgorithmus' */
  uint16_T temporalCounter_i1_o;       /* '<Root>/Chart1' */
  boolean_T UnitDelay3_DSTATE;         /* '<S8>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE;         /* '<S8>/Unit Delay4' */
  uint16_T is_active_c3_SortierAlgorithmus;/* '<Root>/Sortieralgorithmus' */
  uint16_T is_c3_SortierAlgorithmusEchtSys;/* '<Root>/Sortieralgorithmus' */
  uint16_T is_active_c1_SortierAlgorithmus;/* '<Root>/Chart1' */
  uint16_T is_c1_SortierAlgorithmusEchtSys;/* '<Root>/Chart1' */
  boolean_T Memory_PreviousInput;      /* '<S10>/Memory' */
  boolean_T Memory_PreviousInput_b;    /* '<S9>/Memory' */
} DW_SortierAlgorithmusEchtSyst_T;

/* Parameters for system: '<S9>/NEGATIVE Edge' */
struct P_NEGATIVEEdge_SortierAlgorit_T_ {
  boolean_T OUT_Y0;                    /* Computed Parameter: OUT_Y0
                                        * Referenced by: '<S14>/OUT'
                                        */
};

/* Parameters for system: '<S9>/POSITIVE Edge' */
struct P_POSITIVEEdge_SortierAlgorit_T_ {
  boolean_T OUT_Y0;                    /* Computed Parameter: OUT_Y0
                                        * Referenced by: '<S15>/OUT'
                                        */
};

/* Parameters (default storage) */
struct P_SortierAlgorithmusEchtSyste_T_ {
  real_T EdgeDetector1_model;          /* Mask Parameter: EdgeDetector1_model
                                        * Referenced by: '<S9>/Constant1'
                                        */
  real_T EdgeDetector2_model;          /* Mask Parameter: EdgeDetector2_model
                                        * Referenced by: '<S10>/Constant1'
                                        */
  boolean_T EdgeDetector2_ic;          /* Mask Parameter: EdgeDetector2_ic
                                        * Referenced by: '<S10>/Memory'
                                        */
  boolean_T EdgeDetector1_ic;          /* Mask Parameter: EdgeDetector1_ic
                                        * Referenced by: '<S9>/Memory'
                                        */
  real_T eitheredge_Value[2];          /* Expression: [1 1]
                                        * Referenced by: '<S9>/either edge'
                                        */
  real_T negedge_Value[2];             /* Expression: [0 1]
                                        * Referenced by: '<S9>/neg. edge'
                                        */
  real_T posedge_Value[2];             /* Expression: [1 0]
                                        * Referenced by: '<S9>/pos. edge'
                                        */
  real_T eitheredge_Value_b[2];        /* Expression: [1 1]
                                        * Referenced by: '<S10>/either edge'
                                        */
  real_T negedge_Value_d[2];           /* Expression: [0 1]
                                        * Referenced by: '<S10>/neg. edge'
                                        */
  real_T posedge_Value_n[2];           /* Expression: [1 0]
                                        * Referenced by: '<S10>/pos. edge'
                                        */
  real_T HeuristischermittelterSchwellwe;/* Expression: 2000
                                          * Referenced by: '<S8>/Heuristisch ermittelter Schwellwert'
                                          */
  real_T Constant_Value;               /* Expression: 2000
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S8>/Unit Delay5'
                                        */
  real_T WinkelFlankePolulo3416V022Polul;/* Expression: 0.076
                                          * Referenced by: '<S8>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
                                          */
  real_T WinkelFlankePolulo3416V022Pol_o;/* Expression: 0.076
                                          * Referenced by: '<S8>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
                                          */
  real_T uDLookupTable_tableData[8];   /* Expression: [-1,-440,-295,-170,-40,85,220,430]
                                        * Referenced by: '<Root>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[8];    /* Expression: [-1,0,1,2,3,4,5,6]
                                        * Referenced by: '<Root>/1-D Lookup Table'
                                        */
  real_T DeadZone_Start;               /* Expression: -1
                                        * Referenced by: '<S5>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 1
                                        * Referenced by: '<S5>/Dead Zone'
                                        */
  real_T Verstaerkung_Gain;            /* Expression: 1
                                        * Referenced by: '<S5>/Verstaerkung'
                                        */
  real32_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                        * Referenced by: '<S8>/Unit Delay2'
                                        */
  real32_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S8>/Unit Delay1'
                                        */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S8>/Unit Delay3'
                                         */
  boolean_T UnitDelay4_InitialCondition;/* Computed Parameter: UnitDelay4_InitialCondition
                                         * Referenced by: '<S8>/Unit Delay4'
                                         */
  P_POSITIVEEdge_SortierAlgorit_T POSITIVEEdge_n;/* '<S10>/POSITIVE Edge' */
  P_NEGATIVEEdge_SortierAlgorit_T NEGATIVEEdge_o;/* '<S10>/NEGATIVE Edge' */
  P_POSITIVEEdge_SortierAlgorit_T POSITIVEEdge;/* '<S9>/POSITIVE Edge' */
  P_NEGATIVEEdge_SortierAlgorit_T NEGATIVEEdge;/* '<S9>/NEGATIVE Edge' */
};

/* Real-time Model Data Structure */
struct tag_RTM_SortierAlgorithmusEch_T {
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
extern P_SortierAlgorithmusEchtSyste_T SortierAlgorithmusEchtSystem_P;

/* Block signals (default storage) */
extern B_SortierAlgorithmusEchtSyste_T SortierAlgorithmusEchtSystem_B;

/* Block states (default storage) */
extern DW_SortierAlgorithmusEchtSyst_T SortierAlgorithmusEchtSystem_DW;

/* External function called from main */
extern void SortierAlgorithmusEchtSystem_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void SortierAlgorithmusEchtSystem_SetEventsForThisBaseStep(boolean_T
  *eventFlags);
extern void SortierAlgorithmusEchtSystem_initialize(void);
extern void SortierAlgorithmusEchtSystem_step0(void);
extern void SortierAlgorithmusEchtSystem_step1(void);
extern void SortierAlgorithmusEchtSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SortierAlgorithmusEc_T *const SortierAlgorithmusEchtSystem_M;

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
 * '<Root>' : 'SortierAlgorithmusEchtSystem'
 * '<S1>'   : 'SortierAlgorithmusEchtSystem/Chart1'
 * '<S2>'   : 'SortierAlgorithmusEchtSystem/P-Regler mit Output'
 * '<S3>'   : 'SortierAlgorithmusEchtSystem/Sortieralgorithmus'
 * '<S4>'   : 'SortierAlgorithmusEchtSystem/getAngle'
 * '<S5>'   : 'SortierAlgorithmusEchtSystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01'
 * '<S6>'   : 'SortierAlgorithmusEchtSystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag'
 * '<S7>'   : 'SortierAlgorithmusEchtSystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung'
 * '<S8>'   : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale'
 * '<S9>'   : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1'
 * '<S10>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2'
 * '<S11>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1'
 * '<S12>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2'
 * '<S13>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function3'
 * '<S14>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/NEGATIVE Edge'
 * '<S15>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/POSITIVE Edge'
 * '<S16>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/NEGATIVE Edge'
 * '<S17>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/POSITIVE Edge'
 */
#endif                                 /* RTW_HEADER_SortierAlgorithmusEchtSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
