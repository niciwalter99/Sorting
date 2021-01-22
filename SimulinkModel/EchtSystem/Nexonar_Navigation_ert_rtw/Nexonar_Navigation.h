/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Nexonar_Navigation.h
 *
 * Code generated for Simulink model 'Nexonar_Navigation'.
 *
 * Model version                  : 1.80
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan 20 11:10:53 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Nexonar_Navigation_h_
#define RTW_HEADER_Nexonar_Navigation_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Nexonar_Navigation_COMMON_INCLUDES_
# define Nexonar_Navigation_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "IQmathLib.h"
#include "DSP2833x_Gpio.h"
#endif                                 /* Nexonar_Navigation_COMMON_INCLUDES_ */

#include "Nexonar_Navigation_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_zcfcn.h"
#include "mw_C28x_addsub_s32.h"
#include "mw_C28x_s16.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

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
extern void init_I2C_GPIO(void);
extern void init_I2C_A(void);

/* user code (top of header file) */
#include "i2c_reset.h"

/* Block signals for system '<S36>/NEGATIVE Edge' */
typedef struct {
  boolean_T RelationalOperator1;       /* '<S41>/Relational Operator1' */
} rtB_NEGATIVEEdge_Nexonar_Naviga;

/* Block signals for system '<S36>/POSITIVE Edge' */
typedef struct {
  boolean_T RelationalOperator1;       /* '<S42>/Relational Operator1' */
} rtB_POSITIVEEdge_Nexonar_Naviga;

/* Block signals for system '<S35>/MATLAB Function1' */
typedef struct {
  real32_T y;                          /* '<S35>/MATLAB Function1' */
} rtB_MATLABFunction1_Nexonar_Nav;

/* Block signals (default storage) */
typedef struct {
  real_T AnalogDigitalWandlungSampletime;/* '<S5>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T AnalogDigitalWandlungSampleti_c;/* '<S5>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T AnalogDigitalWandlungSampleti_f;/* '<S5>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T AnalogDigitalWandlungSampleti_n;/* '<S5>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  real_T RateTransition3;              /* '<S31>/Rate Transition3' */
  real_T RateTransition2;              /* '<S5>/Rate Transition2' */
  real_T RateTransition3_l;            /* '<S5>/Rate Transition3' */
  real_T RL;                           /* '<S35>/MATLAB Function2' */
  real_T magacin;                      /* '<S5>/Sortieralgorithmus' */
  real_T signal;                       /* '<S5>/Sortieralgorithmus' */
  real_T y;                            /* '<S32>/Richtung' */
  real_T gatePWM;                      /* '<S5>/Chart2' */
  real_T angle;                        /* '<S5>/Chart1' */
  real_T signal_n;                     /* '<S5>/Chart1' */
  real_T gatePWM_d;                    /* '<S5>/Chart' */
  real_T gateDirection;                /* '<S5>/Chart' */
  real_T alpha_neu;                    /* '<S9>/Winkelausgabe fuer Ausrichtung' */
  real_T Quadrant;                     /* '<S9>/Quadrantenteiler' */
  real_T pwm_out_l;                    /* '<S3>/Fahrsystem' */
  real_T pwm_out_r;                    /* '<S3>/Fahrsystem' */
  real_T r_l_out_l;                    /* '<S3>/Fahrsystem' */
  real_T r_l_out_r;                    /* '<S3>/Fahrsystem' */
  real_T pwm_mindern[2];               /* '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */
  real_T alpha_diff_opt;               /* '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */
  real_T x_soll;                       /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  real_T y_soll;                       /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  real_T Zielradius;                   /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  real_T Gang;                         /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  real32_T movingCube_m;               /* '<S5>/Chart1' */
  real32_T movingCube_j;               /* '<S5>/Chart' */
  real32_T int16x_bin[16];             /* '<S4>/Chart6' */
  real32_T int16a1_bin[16];            /* '<S4>/Chart4' */
  real32_T int16y_bin[16];             /* '<S4>/Chart2' */
  uint16_T I2CReceive_o2;              /* '<S21>/I2C Receive' */
  int16_T valid_values1;               /* '<S4>/Chart8' */
  int16_T valid_values2;               /* '<S4>/Chart8' */
  int16_T valid_values3;               /* '<S4>/Chart8' */
  int16_T valid_values4;               /* '<S4>/Chart8' */
  int16_T valid_values5;               /* '<S4>/Chart8' */
  int16_T valid_values6;               /* '<S4>/Chart8' */
  uint16_T I2CReceive_o1[10];          /* '<S21>/I2C Receive' */
  uint16_T VectorConcatenate[20];      /* '<S21>/Vector Concatenate' */
  rtB_MATLABFunction1_Nexonar_Nav sf_MATLABFunction3;/* '<S35>/MATLAB Function3' */
  rtB_MATLABFunction1_Nexonar_Nav sf_MATLABFunction1;/* '<S35>/MATLAB Function1' */
  rtB_POSITIVEEdge_Nexonar_Naviga POSITIVEEdge_i;/* '<S37>/POSITIVE Edge' */
  rtB_NEGATIVEEdge_Nexonar_Naviga NEGATIVEEdge_h;/* '<S37>/NEGATIVE Edge' */
  rtB_POSITIVEEdge_Nexonar_Naviga POSITIVEEdge;/* '<S36>/POSITIVE Edge' */
  rtB_NEGATIVEEdge_Nexonar_Naviga NEGATIVEEdge;/* '<S36>/NEGATIVE Edge' */
} BlockIO_Nexonar_Navigation;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay5_DSTATE;            /* '<S35>/Unit Delay5' */
  real_T magacin3_LastCube;            /* '<S5>/Sortieralgorithmus' */
  real_T magacin2_LastCube;            /* '<S5>/Sortieralgorithmus' */
  real_T magacin1_LastCube;            /* '<S5>/Sortieralgorithmus' */
  real_T magacin4_LastCube;            /* '<S5>/Sortieralgorithmus' */
  real_T magacin0;                     /* '<S5>/Sortieralgorithmus' */
  real_T magacin1;                     /* '<S5>/Sortieralgorithmus' */
  real_T magacin2;                     /* '<S5>/Sortieralgorithmus' */
  real_T magacin3;                     /* '<S5>/Sortieralgorithmus' */
  real_T magacin4;                     /* '<S5>/Sortieralgorithmus' */
  real_T magacin5;                     /* '<S5>/Sortieralgorithmus' */
  real_T cubeCounter;                  /* '<S5>/Sortieralgorithmus' */
  real_T Stillstandintervall;          /* '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */
  real_T Counter;                      /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  real_T x_least;                      /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  real32_T UnitDelay1_DSTATE;          /* '<S35>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE;          /* '<S35>/Unit Delay2' */
  real32_T UnitDelay_DSTATE;           /* '<S5>/Unit Delay' */
  int32_T clockTickCounter;            /* '<S20>/Pulse Generator' */
  int32_T zaehler;                     /* '<S4>/Chart8' */
  int32_T counter;                     /* '<S4>/Chart8' */
  int32_T x_found;                     /* '<S4>/Chart8' */
  volatile int16_T RateTransition_ActiveBufIdx;/* '<S4>/Rate Transition' */
  volatile int16_T RateTransition_semaphoreTaken;/* '<S4>/Rate Transition' */
  int16_T values_out1[20];             /* '<S4>/Chart8' */
  int16_T search;                      /* '<S4>/Chart8' */
  uint16_T temporalCounter_i1;         /* '<S5>/Sortieralgorithmus' */
  uint16_T temporalCounter_i1_l;       /* '<S5>/Chart1' */
  uint16_T Delay_DSTATE[10];           /* '<S21>/Delay' */
  boolean_T UnitDelay3_DSTATE;         /* '<S35>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE;         /* '<S35>/Unit Delay4' */
  volatile uint16_T RateTransition_Buffer[40];/* '<S4>/Rate Transition' */
  uint16_T is_active_c15_Nexonar_Navigatio;/* '<S5>/Sortieralgorithmus' */
  uint16_T is_c15_Nexonar_Navigation;  /* '<S5>/Sortieralgorithmus' */
  uint16_T is_active_c6_Nexonar_Navigation;/* '<S5>/Chart2' */
  uint16_T is_c6_Nexonar_Navigation;   /* '<S5>/Chart2' */
  uint16_T temporalCounter_i1_k;       /* '<S5>/Chart2' */
  uint16_T is_active_c4_Nexonar_Navigation;/* '<S5>/Chart1' */
  uint16_T is_c4_Nexonar_Navigation;   /* '<S5>/Chart1' */
  uint16_T is_active_c3_Nexonar_Navigation;/* '<S5>/Chart' */
  uint16_T is_c3_Nexonar_Navigation;   /* '<S5>/Chart' */
  uint16_T temporalCounter_i1_e;       /* '<S5>/Chart' */
  uint16_T is_active_c17_Nexonar_Navigatio;/* '<S4>/Chart8' */
  uint16_T is_c17_Nexonar_Navigation;  /* '<S4>/Chart8' */
  uint16_T is_active_c16_Nexonar_Navigatio;/* '<S4>/Chart6' */
  uint16_T is_c16_Nexonar_Navigation;  /* '<S4>/Chart6' */
  uint16_T is_active_c14_Nexonar_Navigatio;/* '<S4>/Chart4' */
  uint16_T is_c14_Nexonar_Navigation;  /* '<S4>/Chart4' */
  uint16_T is_active_c13_Nexonar_Navigatio;/* '<S4>/Chart2' */
  uint16_T is_c13_Nexonar_Navigation;  /* '<S4>/Chart2' */
  uint16_T is_active_c1_Nexonar_Navigation;/* '<S4>/Chart1' */
  uint16_T is_c1_Nexonar_Navigation;   /* '<S4>/Chart1' */
  uint16_T is_active_c12_Nexonar_Navigatio;/* '<S9>/Winkelausgabe fuer Ausrichtung' */
  uint16_T is_c12_Nexonar_Navigation;  /* '<S9>/Winkelausgabe fuer Ausrichtung' */
  uint16_T is_active_c11_Nexonar_Navigatio;/* '<S9>/Quadrantenteiler' */
  uint16_T is_c11_Nexonar_Navigation;  /* '<S9>/Quadrantenteiler' */
  uint16_T is_active_c7_Nexonar_Navigation;/* '<S3>/Fahrsystem' */
  uint16_T is_c7_Nexonar_Navigation;   /* '<S3>/Fahrsystem' */
  uint16_T is_active_c8_Nexonar_Navigation;/* '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */
  uint16_T is_c8_Nexonar_Navigation;   /* '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */
  uint16_T is_active_c5_Nexonar_Navigation;/* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  uint16_T is_c5_Nexonar_Navigation;   /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  uint16_T is_Uebergabe;               /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  uint16_T is_Sammeln;                 /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  boolean_T Memory_PreviousInput;      /* '<S36>/Memory' */
  boolean_T Memory_PreviousInput_e;    /* '<S37>/Memory' */
} D_Work_Nexonar_Navigation;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState I2CReset_Trig_ZCE;        /* '<S20>/I2C Reset' */
  ZCSigState I2CReinitialisierung_Trig_ZCE;/* '<S20>/I2C Reinitialisierung' */
} PrevZCSigStates_Nexonar_Navigat;

/* Parameters (default storage) */
struct Parameters_Nexonar_Navigation_ {
  real_T EdgeDetector1_model;          /* Mask Parameter: EdgeDetector1_model
                                        * Referenced by: '<S36>/Constant1'
                                        */
  real_T EdgeDetector2_model;          /* Mask Parameter: EdgeDetector2_model
                                        * Referenced by: '<S37>/Constant1'
                                        */
  boolean_T EdgeDetector1_ic;          /* Mask Parameter: EdgeDetector1_ic
                                        * Referenced by: '<S36>/Memory'
                                        */
  boolean_T EdgeDetector2_ic;          /* Mask Parameter: EdgeDetector2_ic
                                        * Referenced by: '<S37>/Memory'
                                        */
  real_T Quadrantenverschiebung_Gain;  /* Expression: 90
                                        * Referenced by: '<S9>/Quadranten- verschiebung'
                                        */
  real_T PWMWertebereich_UpperSat;     /* Expression: 100
                                        * Referenced by: '<S8>/PWM-Wertebereich'
                                        */
  real_T PWMWertebereich_LowerSat;     /* Expression: 0
                                        * Referenced by: '<S8>/PWM-Wertebereich'
                                        */
  real_T eitheredge_Value[2];          /* Expression: [1 1]
                                        * Referenced by: '<S36>/either edge'
                                        */
  real_T negedge_Value[2];             /* Expression: [0 1]
                                        * Referenced by: '<S36>/neg. edge'
                                        */
  real_T posedge_Value[2];             /* Expression: [1 0]
                                        * Referenced by: '<S36>/pos. edge'
                                        */
  real_T eitheredge_Value_e[2];        /* Expression: [1 1]
                                        * Referenced by: '<S37>/either edge'
                                        */
  real_T negedge_Value_g[2];           /* Expression: [0 1]
                                        * Referenced by: '<S37>/neg. edge'
                                        */
  real_T posedge_Value_m[2];           /* Expression: [1 0]
                                        * Referenced by: '<S37>/pos. edge'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S20>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 250
                                        * Referenced by: '<S20>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 1
                                        * Referenced by: '<S20>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S20>/Pulse Generator'
                                        */
  real_T WinkelFlankePolulo3416V022Polul;/* Expression: 0.076
                                          * Referenced by: '<S35>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
                                          */
  real_T Constant_Value;               /* Expression: 2000
                                        * Referenced by: '<S35>/Constant'
                                        */
  real_T HeuristischermittelterSchwellwe;/* Expression: 2000
                                          * Referenced by: '<S35>/Heuristisch ermittelter Schwellwert'
                                          */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S35>/Unit Delay5'
                                        */
  real_T WinkelFlankePolulo3416V022Pol_j;/* Expression: 0.076
                                          * Referenced by: '<S35>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
                                          */
  real_T uDLookupTable_tableData[8];   /* Expression: [-1,-440,-295,-170,-40,85,220,430]
                                        * Referenced by: '<S5>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[8];    /* Expression: [-1,0,1,2,3,4,5,6]
                                        * Referenced by: '<S5>/1-D Lookup Table'
                                        */
  real_T DeadZone_Start;               /* Expression: -0.5
                                        * Referenced by: '<S32>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 0.5
                                        * Referenced by: '<S32>/Dead Zone'
                                        */
  real_T Verstaerkung_Gain;            /* Expression: 1
                                        * Referenced by: '<S32>/Verstaerkung'
                                        */
  real32_T xinmm_Gain;                 /* Computed Parameter: xinmm_Gain
                                        * Referenced by: '<S4>/x in mm'
                                        */
  real32_T yinmm_Gain;                 /* Computed Parameter: yinmm_Gain
                                        * Referenced by: '<S4>/y in mm'
                                        */
  real32_T alphain_Gain;               /* Computed Parameter: alphain_Gain
                                        * Referenced by: '<S4>/alpha in °'
                                        */
  real32_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S35>/Unit Delay1'
                                        */
  real32_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                        * Referenced by: '<S35>/Unit Delay2'
                                        */
  real32_T UnitDelay_InitialCondition; /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S5>/Unit Delay'
                                        */
  uint16_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S21>/Delay'
                                        */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S35>/Unit Delay3'
                                         */
  boolean_T UnitDelay4_InitialCondition;/* Computed Parameter: UnitDelay4_InitialCondition
                                         * Referenced by: '<S35>/Unit Delay4'
                                         */
  uint16_T Delay_InitialCondition;     /* Computed Parameter: Delay_InitialCondition
                                        * Referenced by: '<S21>/Delay'
                                        */
  uint16_T RateTransition_InitialCondition;/* Computed Parameter: RateTransition_InitialCondition
                                            * Referenced by: '<S4>/Rate Transition'
                                            */
};

/* Real-time Model Data Structure */
struct tag_RTM_Nexonar_Navigation {
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
extern Parameters_Nexonar_Navigation Nexonar_Navigation_P;

/* Block signals (default storage) */
extern BlockIO_Nexonar_Navigation Nexonar_Navigation_B;

/* Block states (default storage) */
extern D_Work_Nexonar_Navigation Nexonar_Navigation_DWork;

/* External function called from main */
extern void Nexonar_Navigation_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void Nexonar_Navigation_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void Nexonar_Navigation_initialize(void);
extern void Nexonar_Navigation_step0(void);
extern void Nexonar_Navigation_step1(void);
extern void Nexonar_Navigation_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Nexonar_Navigation *const Nexonar_Navigation_M;

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
 * '<Root>' : 'Nexonar_Navigation'
 * '<S1>'   : 'Nexonar_Navigation/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - '
 * '<S2>'   : 'Nexonar_Navigation/Motorausgang'
 * '<S3>'   : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]'
 * '<S4>'   : 'Nexonar_Navigation/Nexonar-Positionsbestimmung'
 * '<S5>'   : 'Nexonar_Navigation/Subsystem'
 * '<S6>'   : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]'
 * '<S7>'   : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Fahrsystem'
 * '<S8>'   : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)'
 * '<S9>'   : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)'
 * '<S10>'  : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x'
 * '<S11>'  : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_y'
 * '<S12>'  : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/PWM-Vektorbetrag'
 * '<S13>'  : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler'
 * '<S14>'  : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung'
 * '<S15>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/Chart1'
 * '<S16>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/Chart2'
 * '<S17>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/Chart4'
 * '<S18>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/Chart6'
 * '<S19>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/Chart8'
 * '<S20>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)'
 * '<S21>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/Triggered Subsystem'
 * '<S22>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung'
 * '<S23>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset'
 * '<S24>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung/I2C Reinitialisierung'
 * '<S25>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset'
 * '<S26>'  : 'Nexonar_Navigation/Subsystem/Chart'
 * '<S27>'  : 'Nexonar_Navigation/Subsystem/Chart1'
 * '<S28>'  : 'Nexonar_Navigation/Subsystem/Chart2'
 * '<S29>'  : 'Nexonar_Navigation/Subsystem/P-Regler mit Output'
 * '<S30>'  : 'Nexonar_Navigation/Subsystem/Sortieralgorithmus'
 * '<S31>'  : 'Nexonar_Navigation/Subsystem/getAngle'
 * '<S32>'  : 'Nexonar_Navigation/Subsystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01'
 * '<S33>'  : 'Nexonar_Navigation/Subsystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag'
 * '<S34>'  : 'Nexonar_Navigation/Subsystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung'
 * '<S35>'  : 'Nexonar_Navigation/Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale'
 * '<S36>'  : 'Nexonar_Navigation/Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1'
 * '<S37>'  : 'Nexonar_Navigation/Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2'
 * '<S38>'  : 'Nexonar_Navigation/Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1'
 * '<S39>'  : 'Nexonar_Navigation/Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2'
 * '<S40>'  : 'Nexonar_Navigation/Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function3'
 * '<S41>'  : 'Nexonar_Navigation/Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/NEGATIVE Edge'
 * '<S42>'  : 'Nexonar_Navigation/Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/POSITIVE Edge'
 * '<S43>'  : 'Nexonar_Navigation/Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/NEGATIVE Edge'
 * '<S44>'  : 'Nexonar_Navigation/Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/POSITIVE Edge'
 */
#endif                                 /* RTW_HEADER_Nexonar_Navigation_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
