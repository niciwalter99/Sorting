/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SortierAlgorithmusEchtSystem.h
 *
 * Code generated for Simulink model 'SortierAlgorithmusEchtSystem'.
 *
 * Model version                  : 1.73
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Feb  3 02:16:31 2021
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
#include "DSP2833x_Gpio.h"
#include "DSP2833x_Examples.h"
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
  real_T RateTransition3;              /* '<S7>/Rate Transition3' */
  real_T RateTransition2;              /* '<Root>/Rate Transition2' */
  real_T RL;                           /* '<S11>/MATLAB Function2' */
  real_T magacin;                      /* '<Root>/Sortieralgorithmus' */
  real_T signal;                       /* '<Root>/Sortieralgorithmus' */
  real_T y;                            /* '<S8>/Richtung' */
  real_T gatePWM;                      /* '<Root>/Chart2' */
  real_T gateDirection;                /* '<Root>/Chart2' */
  real_T angle;                        /* '<Root>/Chart1' */
  real_T signal_m;                     /* '<Root>/Chart1' */
  real_T gatePWM_e;                    /* '<Root>/Chart' */
  real_T gateDirection_h;              /* '<Root>/Chart' */
  real_T MovingAverage;                /* '<Root>/Moving Average' */
  real32_T DigitalInput;               /* '<Root>/Digital Input' */
  real32_T TmpRTBAtChart1Inport4;      /* '<Root>/Digital Input' */
  real32_T TmpRTBAtSortieralgorithmusInpor;/* '<Root>/Digital Input' */
  real32_T movingCube;                 /* '<Root>/Chart1' */
  real32_T movingCube_m;               /* '<Root>/Chart' */
  boolean_T RelationalOperator1;       /* '<S20>/Relational Operator1' */
  boolean_T RelationalOperator1_f;     /* '<S19>/Relational Operator1' */
  boolean_T RelationalOperator1_b;     /* '<S18>/Relational Operator1' */
  boolean_T RelationalOperator1_j;     /* '<S17>/Relational Operator1' */
} B_SortierAlgorithmusEchtSyste_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_simulink_MovingAverage_So_T obj; /* '<Root>/Moving Average' */
  dsp_private_ExponentialMoving_T gobj_0;/* '<Root>/Moving Average' */
  dsp_private_ExponentialMoving_T gobj_1;/* '<Root>/Moving Average' */
  real_T UnitDelay5_DSTATE;            /* '<S11>/Unit Delay5' */
  real_T magacin2_LastCube;            /* '<Root>/Sortieralgorithmus' */
  real_T magacin1_LastCube;            /* '<Root>/Sortieralgorithmus' */
  real_T magacin0;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin1;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin2;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin3;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin4;                     /* '<Root>/Sortieralgorithmus' */
  real_T magacin5;                     /* '<Root>/Sortieralgorithmus' */
  real_T cubeCounter;                  /* '<Root>/Sortieralgorithmus' */
  real_T tasterCounter;                /* '<Root>/Chart2' */
  real_T magacin;
  real32_T UnitDelay2_DSTATE;          /* '<S11>/Unit Delay2' */
  real32_T UnitDelay1_DSTATE;          /* '<S11>/Unit Delay1' */
  real32_T UnitDelay_DSTATE;           /* '<Root>/Unit Delay' */
  real32_T TmpRTBAtChart1Inport4_Buffer0;/* synthesized block */
  real32_T TmpRTBAtSortieralgorithmusInpor;/* synthesized block */
  boolean_T UnitDelay3_DSTATE;         /* '<S11>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE;         /* '<S11>/Unit Delay4' */
  uint16_T is_active_c3_SortierAlgorithmus;/* '<Root>/Sortieralgorithmus' */
  uint16_T is_c3_SortierAlgorithmusEchtSys;/* '<Root>/Sortieralgorithmus' */
  uint16_T is_active_c5_SortierAlgorithmus;/* '<Root>/Chart2' */
  uint16_T is_c5_SortierAlgorithmusEchtSys;/* '<Root>/Chart2' */
  uint16_T temporalCounter_i1;         /* '<Root>/Chart2' */
  uint16_T is_active_c1_SortierAlgorithmus;/* '<Root>/Chart1' */
  uint16_T is_c1_SortierAlgorithmusEchtSys;/* '<Root>/Chart1' */
  uint16_T temporalCounter_i1_o;       /* '<Root>/Chart1' */
  uint16_T is_active_c2_SortierAlgorithmus;/* '<Root>/Chart' */
  uint16_T is_c2_SortierAlgorithmusEchtSys;/* '<Root>/Chart' */
  uint16_T temporalCounter_i1_d;       /* '<Root>/Chart' */
  boolean_T Memory_PreviousInput;      /* '<S13>/Memory' */
  boolean_T Memory_PreviousInput_b;    /* '<S12>/Memory' */
  boolean_T objisempty;                /* '<Root>/Moving Average' */
} DW_SortierAlgorithmusEchtSyst_T;

/* Parameters for system: '<S12>/NEGATIVE Edge' */
struct P_NEGATIVEEdge_SortierAlgorit_T_ {
  boolean_T OUT_Y0;                    /* Computed Parameter: OUT_Y0
                                        * Referenced by: '<S17>/OUT'
                                        */
};

/* Parameters for system: '<S12>/POSITIVE Edge' */
struct P_POSITIVEEdge_SortierAlgorit_T_ {
  boolean_T OUT_Y0;                    /* Computed Parameter: OUT_Y0
                                        * Referenced by: '<S18>/OUT'
                                        */
};

/* Parameters (default storage) */
struct P_SortierAlgorithmusEchtSyste_T_ {
  real_T EdgeDetector1_model;          /* Mask Parameter: EdgeDetector1_model
                                        * Referenced by: '<S12>/Constant1'
                                        */
  real_T EdgeDetector2_model;          /* Mask Parameter: EdgeDetector2_model
                                        * Referenced by: '<S13>/Constant1'
                                        */
  boolean_T EdgeDetector2_ic;          /* Mask Parameter: EdgeDetector2_ic
                                        * Referenced by: '<S13>/Memory'
                                        */
  boolean_T EdgeDetector1_ic;          /* Mask Parameter: EdgeDetector1_ic
                                        * Referenced by: '<S12>/Memory'
                                        */
  real_T MovingAverage_ForgettingFactor;/* Expression: 0.3
                                         * Referenced by: '<Root>/Moving Average'
                                         */
  real_T eitheredge_Value[2];          /* Expression: [1 1]
                                        * Referenced by: '<S12>/either edge'
                                        */
  real_T negedge_Value[2];             /* Expression: [0 1]
                                        * Referenced by: '<S12>/neg. edge'
                                        */
  real_T posedge_Value[2];             /* Expression: [1 0]
                                        * Referenced by: '<S12>/pos. edge'
                                        */
  real_T eitheredge_Value_b[2];        /* Expression: [1 1]
                                        * Referenced by: '<S13>/either edge'
                                        */
  real_T negedge_Value_d[2];           /* Expression: [0 1]
                                        * Referenced by: '<S13>/neg. edge'
                                        */
  real_T posedge_Value_n[2];           /* Expression: [1 0]
                                        * Referenced by: '<S13>/pos. edge'
                                        */
  real_T HeuristischermittelterSchwellwe;/* Expression: 2000
                                          * Referenced by: '<S11>/Heuristisch ermittelter Schwellwert'
                                          */
  real_T Constant_Value;               /* Expression: 2000
                                        * Referenced by: '<S11>/Constant'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S11>/Unit Delay5'
                                        */
  real_T WinkelFlankePolulo3416V022Polul;/* Expression: 0.076
                                          * Referenced by: '<S11>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
                                          */
  real_T WinkelFlankePolulo3416V022Pol_o;/* Expression: 0.076
                                          * Referenced by: '<S11>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
                                          */
  real_T uDLookupTable_tableData[8];   /* Expression: [-1,-440,-295,-170,-40,85,220,430]
                                        * Referenced by: '<Root>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[8];    /* Expression: [-1,0,1,2,3,4,5,6]
                                        * Referenced by: '<Root>/1-D Lookup Table'
                                        */
  real_T DeadZone_Start;               /* Expression: -0.5
                                        * Referenced by: '<S8>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 0.5
                                        * Referenced by: '<S8>/Dead Zone'
                                        */
  real_T Verstaerkung_Gain;            /* Expression: 1
                                        * Referenced by: '<S8>/Verstaerkung'
                                        */
  real32_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                        * Referenced by: '<S11>/Unit Delay2'
                                        */
  real32_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S11>/Unit Delay1'
                                        */
  real32_T TmpRTBAtChart1Inport4_InitialCo;/* Computed Parameter: TmpRTBAtChart1Inport4_InitialCo
                                            * Referenced by: synthesized block
                                            */
  real32_T UnitDelay_InitialCondition; /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real32_T TmpRTBAtSortieralgorithmusInpor;/* Computed Parameter: TmpRTBAtSortieralgorithmusInpor
                                            * Referenced by: synthesized block
                                            */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S11>/Unit Delay3'
                                         */
  boolean_T UnitDelay4_InitialCondition;/* Computed Parameter: UnitDelay4_InitialCondition
                                         * Referenced by: '<S11>/Unit Delay4'
                                         */
  P_POSITIVEEdge_SortierAlgorit_T POSITIVEEdge_n;/* '<S13>/POSITIVE Edge' */
  P_NEGATIVEEdge_SortierAlgorit_T NEGATIVEEdge_o;/* '<S13>/NEGATIVE Edge' */
  P_POSITIVEEdge_SortierAlgorit_T POSITIVEEdge;/* '<S12>/POSITIVE Edge' */
  P_NEGATIVEEdge_SortierAlgorit_T NEGATIVEEdge;/* '<S12>/NEGATIVE Edge' */
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
      uint16_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID0_1;
      boolean_T TID1_2;
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
extern void SortierAlgorithmusEchtSystem_step2(void);
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
 * '<S1>'   : 'SortierAlgorithmusEchtSystem/Chart'
 * '<S2>'   : 'SortierAlgorithmusEchtSystem/Chart1'
 * '<S3>'   : 'SortierAlgorithmusEchtSystem/Chart2'
 * '<S4>'   : 'SortierAlgorithmusEchtSystem/P-Regler mit Output'
 * '<S5>'   : 'SortierAlgorithmusEchtSystem/Sortieralgorithmus'
 * '<S6>'   : 'SortierAlgorithmusEchtSystem/Subsystem'
 * '<S7>'   : 'SortierAlgorithmusEchtSystem/getAngle'
 * '<S8>'   : 'SortierAlgorithmusEchtSystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01'
 * '<S9>'   : 'SortierAlgorithmusEchtSystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag'
 * '<S10>'  : 'SortierAlgorithmusEchtSystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung'
 * '<S11>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale'
 * '<S12>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1'
 * '<S13>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2'
 * '<S14>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1'
 * '<S15>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2'
 * '<S16>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function3'
 * '<S17>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/NEGATIVE Edge'
 * '<S18>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/POSITIVE Edge'
 * '<S19>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/NEGATIVE Edge'
 * '<S20>'  : 'SortierAlgorithmusEchtSystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/POSITIVE Edge'
 */
#endif                                 /* RTW_HEADER_SortierAlgorithmusEchtSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
