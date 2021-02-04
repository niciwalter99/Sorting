/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Gesamtsystem.h
 *
 * Code generated for Simulink model 'Gesamtsystem'.
 *
 * Model version                  : 1.85
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Feb  3 23:24:48 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Gesamtsystem_h_
#define RTW_HEADER_Gesamtsystem_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Gesamtsystem_COMMON_INCLUDES_
# define Gesamtsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Gpio.h"
#include "DSP2833x_Examples.h"
#include "IQmathLib.h"
#endif                                 /* Gesamtsystem_COMMON_INCLUDES_ */

#include "Gesamtsystem_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_zcfcn.h"
#include "mw_C28x_addsub_s32.h"
#include "mw_C28x_s16.h"

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

/* Block signals for system '<S46>/NEGATIVE Edge' */
typedef struct {
  boolean_T RelationalOperator1;       /* '<S51>/Relational Operator1' */
} rtB_NEGATIVEEdge_Gesamtsystem;

/* Block signals for system '<S46>/POSITIVE Edge' */
typedef struct {
  boolean_T RelationalOperator1;       /* '<S52>/Relational Operator1' */
} rtB_POSITIVEEdge_Gesamtsystem;

/* Block signals for system '<S45>/MATLAB Function1' */
typedef struct {
  real32_T y;                          /* '<S45>/MATLAB Function1' */
} rtB_MATLABFunction1_Gesamtsyste;

/* Block signals (default storage) */
typedef struct {
  real_T AnalogDigitalWandlungSampletime;/* '<S3>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  real_T AnalogDigitalWandlungSampleti_e;/* '<S3>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  real_T AnalogDigitalWandlungSampleti_a;/* '<S3>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  real_T RateTransition3;              /* '<S3>/Rate Transition3' */
  real_T RateTransition3_o;            /* '<S41>/Rate Transition3' */
  real_T RL;                           /* '<S45>/MATLAB Function2' */
  real_T magacin;                      /* '<S3>/Sortieralgorithmus2' */
  real_T signal;                       /* '<S3>/Sortieralgorithmus2' */
  real_T lampeCubeLoaded;              /* '<S3>/Sortieralgorithmus2' */
  real_T lampeSortier;                 /* '<S3>/Sortieralgorithmus2' */
  real_T gatePWM;                      /* '<S3>/Chart8' */
  real_T gateDirection;                /* '<S3>/Chart8' */
  real_T panzerMotor;                  /* '<S3>/Chart8' */
  real_T lampe;                        /* '<S3>/Chart8' */
  real_T angle;                        /* '<S3>/Chart7' */
  real_T signal_o;                     /* '<S3>/Chart7' */
  real_T gatePWM_c;                    /* '<S3>/Chart6' */
  real_T gateDirection_i;              /* '<S3>/Chart6' */
  real_T MovingAverage2;               /* '<S3>/Moving Average2' */
  real_T Winkeldifferenz;              /* '<S18>/Winkeldifferenz' */
  real_T PWMWertebereich;              /* '<S17>/PWM-Wertebereich' */
  real_T alpha_neu;                    /* '<S18>/Winkelausgabe fuer Ausrichtung' */
  real_T Quadrant;                     /* '<S18>/Quadrantenteiler' */
  real_T pwm_out_l;                    /* '<S13>/Fahrsystem' */
  real_T pwm_out_r;                    /* '<S13>/Fahrsystem' */
  real_T r_l_out_l;                    /* '<S13>/Fahrsystem' */
  real_T r_l_out_r;                    /* '<S13>/Fahrsystem' */
  real_T pwm_mindern[2];               /* '<S13>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  real_T alpha_diff_opt;               /* '<S13>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  real_T Value;                        /* '<S2>/Motorsteuerung bei der Uebergabe' */
  real_T x_Wagen;                      /* '<S2>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T y_Wagen;                      /* '<S2>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T x_soll;                       /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  real_T y_soll;                       /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  real_T alpha_soll;                   /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  real_T Gang;                         /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  real_T Zielradius;                   /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  real_T ZM_r_l_out;                   /* '<S5>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  real_T aus_an;                       /* '<S4>/Beendigung-Ansteuerung' */
  real_T y;                            /* '<S42>/Richtung' */
  real32_T UnitDelay2;                 /* '<S3>/Unit Delay2' */
  real32_T TmpRTBAtSortieralgorithmus2Inpo;/* '<S3>/Digital Input2' */
  real32_T DigitalInput2;              /* '<S3>/Digital Input2' */
  real32_T TmpRTBAtChart7Inport4;      /* '<S3>/Digital Input2' */
  real32_T movingCube;                 /* '<S3>/Chart7' */
  real32_T movingCube_d;               /* '<S3>/Chart6' */
  real32_T int16x_bin[16];             /* '<S14>/Chart6' */
  real32_T int16a1_bin[16];            /* '<S14>/Chart4' */
  real32_T int16y_bin[16];             /* '<S14>/Chart2' */
  real32_T int16z_bin[16];             /* '<S14>/Chart1' */
  uint16_T I2CReceive_o2;              /* '<S30>/I2C Receive' */
  int16_T valid_values1;               /* '<S14>/Chart8' */
  int16_T valid_values2;               /* '<S14>/Chart8' */
  int16_T valid_values3;               /* '<S14>/Chart8' */
  int16_T valid_values4;               /* '<S14>/Chart8' */
  int16_T valid_values5;               /* '<S14>/Chart8' */
  int16_T valid_values6;               /* '<S14>/Chart8' */
  int16_T valid_values7;               /* '<S14>/Chart8' */
  int16_T valid_values8;               /* '<S14>/Chart8' */
  uint16_T RateTransition[20];         /* '<S14>/Rate Transition' */
  uint16_T I2CReceive_o1[10];          /* '<S30>/I2C Receive' */
  uint16_T VectorConcatenate[20];      /* '<S30>/Vector Concatenate' */
  boolean_T Uebergabeschalter;         /* '<S2>/Uebergabeschalter' */
  rtB_MATLABFunction1_Gesamtsyste sf_MATLABFunction3;/* '<S45>/MATLAB Function3' */
  rtB_MATLABFunction1_Gesamtsyste sf_MATLABFunction1;/* '<S45>/MATLAB Function1' */
  rtB_POSITIVEEdge_Gesamtsystem POSITIVEEdge_m;/* '<S47>/POSITIVE Edge' */
  rtB_NEGATIVEEdge_Gesamtsystem NEGATIVEEdge_n;/* '<S47>/NEGATIVE Edge' */
  rtB_POSITIVEEdge_Gesamtsystem POSITIVEEdge;/* '<S46>/POSITIVE Edge' */
  rtB_NEGATIVEEdge_Gesamtsystem NEGATIVEEdge;/* '<S46>/NEGATIVE Edge' */
} BlockIO_Gesamtsystem;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_simulink_MovingAverage_Gesa obj; /* '<S3>/Moving Average2' */
  dsp_private_ExponentialMovingAv gobj_0;/* '<S3>/Moving Average2' */
  dsp_private_ExponentialMovingAv gobj_1;/* '<S3>/Moving Average2' */
  real_T VerzoegernbisShutdownausgefuehr[10];/* '<S4>/Verzoegern, bis Shutdown ausgefuehrt ist (Abtastzeit: 0.01s)' */
  real_T UnitDelay5_DSTATE;            /* '<S45>/Unit Delay5' */
  real_T magacin6;                     /* '<S3>/Sortieralgorithmus2' */
  real_T magacin2_LastCube;            /* '<S3>/Sortieralgorithmus2' */
  real_T magacin1_LastCube;            /* '<S3>/Sortieralgorithmus2' */
  real_T magacin0;                     /* '<S3>/Sortieralgorithmus2' */
  real_T magacin1;                     /* '<S3>/Sortieralgorithmus2' */
  real_T magacin2;                     /* '<S3>/Sortieralgorithmus2' */
  real_T magacin3;                     /* '<S3>/Sortieralgorithmus2' */
  real_T magacin4;                     /* '<S3>/Sortieralgorithmus2' */
  real_T magacin5;                     /* '<S3>/Sortieralgorithmus2' */
  real_T cubeCounter;                  /* '<S3>/Sortieralgorithmus2' */
  real_T tasterCounter;                /* '<S3>/Chart8' */
  real_T alpha_diff_intern;            /* '<S13>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  real_T Stillstandintervall;          /* '<S13>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  real_T Counter;                      /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  real_T x_least;                      /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  real32_T UnitDelay2_DSTATE;          /* '<S3>/Unit Delay2' */
  real32_T UnitDelay1_DSTATE;          /* '<S45>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE_a;        /* '<S45>/Unit Delay2' */
  real32_T TmpRTBAtSortieralgorithmus2Inpo;/* synthesized block */
  real32_T TmpRTBAtChart7Inport4_Buffer0;/* synthesized block */
  int32_T clockTickCounter;            /* '<S29>/Pulse Generator' */
  int32_T zaehler;                     /* '<S14>/Chart8' */
  int32_T counter;                     /* '<S14>/Chart8' */
  int32_T x_found;                     /* '<S14>/Chart8' */
  volatile int16_T RateTransition_ActiveBufIdx;/* '<S14>/Rate Transition' */
  volatile int16_T RateTransition_semaphoreTaken;/* '<S14>/Rate Transition' */
  int16_T values_out1[20];             /* '<S14>/Chart8' */
  int16_T search;                      /* '<S14>/Chart8' */
  uint16_T temporalCounter_i1;         /* '<S2>/Motorsteuerung bei der Uebergabe' */
  uint16_T temporalCounter_i1_m;       /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  uint16_T Delay_DSTATE[10];           /* '<S30>/Delay' */
  boolean_T UnitDelay3_DSTATE;         /* '<S45>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE;         /* '<S45>/Unit Delay4' */
  volatile uint16_T RateTransition_Buffer[40];/* '<S14>/Rate Transition' */
  uint16_T is_active_c42_Gesamtsystem; /* '<S3>/Sortieralgorithmus2' */
  uint16_T is_c42_Gesamtsystem;        /* '<S3>/Sortieralgorithmus2' */
  uint16_T temporalCounter_i1_o;       /* '<S3>/Sortieralgorithmus2' */
  uint16_T is_active_c39_Gesamtsystem; /* '<S3>/Chart8' */
  uint16_T is_c39_Gesamtsystem;        /* '<S3>/Chart8' */
  uint16_T temporalCounter_i1_a;       /* '<S3>/Chart8' */
  uint16_T is_active_c38_Gesamtsystem; /* '<S3>/Chart7' */
  uint16_T is_c38_Gesamtsystem;        /* '<S3>/Chart7' */
  uint16_T temporalCounter_i1_g;       /* '<S3>/Chart7' */
  uint16_T is_active_c37_Gesamtsystem; /* '<S3>/Chart6' */
  uint16_T is_c37_Gesamtsystem;        /* '<S3>/Chart6' */
  uint16_T temporalCounter_i1_ok;      /* '<S3>/Chart6' */
  uint16_T is_active_c17_Gesamtsystem; /* '<S14>/Chart8' */
  uint16_T is_c17_Gesamtsystem;        /* '<S14>/Chart8' */
  uint16_T is_active_c16_Gesamtsystem; /* '<S14>/Chart6' */
  uint16_T is_c16_Gesamtsystem;        /* '<S14>/Chart6' */
  uint16_T is_active_c14_Gesamtsystem; /* '<S14>/Chart4' */
  uint16_T is_c14_Gesamtsystem;        /* '<S14>/Chart4' */
  uint16_T is_active_c13_Gesamtsystem; /* '<S14>/Chart2' */
  uint16_T is_c13_Gesamtsystem;        /* '<S14>/Chart2' */
  uint16_T is_active_c1_Gesamtsystem;  /* '<S14>/Chart1' */
  uint16_T is_c1_Gesamtsystem;         /* '<S14>/Chart1' */
  uint16_T is_active_c12_Gesamtsystem; /* '<S18>/Winkelausgabe fuer Ausrichtung' */
  uint16_T is_c12_Gesamtsystem;        /* '<S18>/Winkelausgabe fuer Ausrichtung' */
  uint16_T is_active_c11_Gesamtsystem; /* '<S18>/Quadrantenteiler' */
  uint16_T is_c11_Gesamtsystem;        /* '<S18>/Quadrantenteiler' */
  uint16_T is_active_c7_Gesamtsystem;  /* '<S13>/Fahrsystem' */
  uint16_T is_c7_Gesamtsystem;         /* '<S13>/Fahrsystem' */
  uint16_T is_active_c8_Gesamtsystem;  /* '<S13>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  uint16_T is_c8_Gesamtsystem;         /* '<S13>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  uint16_T is_active_c9_Gesamtsystem;  /* '<S2>/Motorsteuerung bei der Uebergabe' */
  uint16_T is_c9_Gesamtsystem;         /* '<S2>/Motorsteuerung bei der Uebergabe' */
  uint16_T is_active_c5_Gesamtsystem;  /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  uint16_T is_c5_Gesamtsystem;         /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  uint16_T is_Parken;                  /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  uint16_T is_Uebergabe;               /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  uint16_T is_Sammeln;                 /* '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  uint16_T is_active_c6_Gesamtsystem;  /* '<S5>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  uint16_T is_c6_Gesamtsystem;         /* '<S5>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  uint16_T temporalCounter_i1_gl;      /* '<S5>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  uint16_T is_active_c3_Gesamtsystem;  /* '<S4>/Beendigung-Ansteuerung' */
  uint16_T is_c3_Gesamtsystem;         /* '<S4>/Beendigung-Ansteuerung' */
  boolean_T Memory_PreviousInput;      /* '<S46>/Memory' */
  boolean_T Memory_PreviousInput_k;    /* '<S47>/Memory' */
  boolean_T objisempty;                /* '<S3>/Moving Average2' */
} D_Work_Gesamtsystem;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState I2CReset_Trig_ZCE;        /* '<S29>/I2C Reset' */
  ZCSigState I2CReinitialisierung_Trig_ZCE;/* '<S29>/I2C Reinitialisierung' */
} PrevZCSigStates_Gesamtsystem;

/* Parameters (default storage) */
struct Parameters_Gesamtsystem_ {
  real_T EdgeDetector1_model;          /* Mask Parameter: EdgeDetector1_model
                                        * Referenced by: '<S46>/Constant1'
                                        */
  real_T EdgeDetector2_model;          /* Mask Parameter: EdgeDetector2_model
                                        * Referenced by: '<S47>/Constant1'
                                        */
  real32_T DauerbiszumShutdowninsec_const;/* Mask Parameter: DauerbiszumShutdowninsec_const
                                           * Referenced by: '<S7>/Constant'
                                           */
  boolean_T EdgeDetector1_ic;          /* Mask Parameter: EdgeDetector1_ic
                                        * Referenced by: '<S46>/Memory'
                                        */
  boolean_T EdgeDetector2_ic;          /* Mask Parameter: EdgeDetector2_ic
                                        * Referenced by: '<S47>/Memory'
                                        */
  real_T Quadrantenverschiebung_Gain;  /* Expression: 90
                                        * Referenced by: '<S18>/Quadranten- verschiebung'
                                        */
  real_T PWMWertebereich_UpperSat;     /* Expression: 100
                                        * Referenced by: '<S17>/PWM-Wertebereich'
                                        */
  real_T PWMWertebereich_LowerSat;     /* Expression: 0
                                        * Referenced by: '<S17>/PWM-Wertebereich'
                                        */
  real_T MovingAverage2_ForgettingFactor;/* Expression: 0.3
                                          * Referenced by: '<S3>/Moving Average2'
                                          */
  real_T eitheredge_Value[2];          /* Expression: [1 1]
                                        * Referenced by: '<S46>/either edge'
                                        */
  real_T negedge_Value[2];             /* Expression: [0 1]
                                        * Referenced by: '<S46>/neg. edge'
                                        */
  real_T posedge_Value[2];             /* Expression: [1 0]
                                        * Referenced by: '<S46>/pos. edge'
                                        */
  real_T eitheredge_Value_h[2];        /* Expression: [1 1]
                                        * Referenced by: '<S47>/either edge'
                                        */
  real_T negedge_Value_n[2];           /* Expression: [0 1]
                                        * Referenced by: '<S47>/neg. edge'
                                        */
  real_T posedge_Value_i[2];           /* Expression: [1 0]
                                        * Referenced by: '<S47>/pos. edge'
                                        */
  real_T VerzoegernbisShutdownausgefuehr;/* Expression: 0
                                          * Referenced by: '<S4>/Verzoegern, bis Shutdown ausgefuehrt ist (Abtastzeit: 0.01s)'
                                          */
  real_T LeistungsoffsetMotor_links_Star;/* Expression: 0
                                          * Referenced by: '<S11>/Leistungsoffset Motor_links'
                                          */
  real_T LeistungsoffsetMotor_links_End;/* Expression: 5
                                         * Referenced by: '<S11>/Leistungsoffset Motor_links'
                                         */
  real_T LeistungsoffsetMotor_rechts_Sta;/* Expression: 0
                                          * Referenced by: '<S11>/Leistungsoffset Motor_rechts'
                                          */
  real_T LeistungsoffsetMotor_rechts_End;/* Expression: 0
                                          * Referenced by: '<S11>/Leistungsoffset Motor_rechts'
                                          */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S29>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 250
                                        * Referenced by: '<S29>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 1
                                        * Referenced by: '<S29>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S29>/Pulse Generator'
                                        */
  real_T WinkelFlankePolulo3416V022Polul;/* Expression: 0.076
                                          * Referenced by: '<S45>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
                                          */
  real_T Constant_Value;               /* Expression: 2000
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T HeuristischermittelterSchwellwe;/* Expression: 2000
                                          * Referenced by: '<S45>/Heuristisch ermittelter Schwellwert'
                                          */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S45>/Unit Delay5'
                                        */
  real_T WinkelFlankePolulo3416V022Pol_l;/* Expression: 0.076
                                          * Referenced by: '<S45>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
                                          */
  real_T uDLookupTable2_tableData[8];  /* Expression: [-1,-440,-295,-170,-40,85,220,430]
                                        * Referenced by: '<S3>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[8];   /* Expression: [-1,0,1,2,3,4,5,6]
                                        * Referenced by: '<S3>/1-D Lookup Table2'
                                        */
  real_T DeadZone_Start;               /* Expression: -0.5
                                        * Referenced by: '<S42>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 0.5
                                        * Referenced by: '<S42>/Dead Zone'
                                        */
  real_T Verstaerkung_Gain;            /* Expression: 1
                                        * Referenced by: '<S42>/Verstaerkung'
                                        */
  real32_T xinmm_Gain;                 /* Computed Parameter: xinmm_Gain
                                        * Referenced by: '<S14>/x in mm'
                                        */
  real32_T yinmm_Gain;                 /* Computed Parameter: yinmm_Gain
                                        * Referenced by: '<S14>/y in mm'
                                        */
  real32_T alphain_Gain;               /* Computed Parameter: alphain_Gain
                                        * Referenced by: '<S14>/alpha in °'
                                        */
  real32_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                        * Referenced by: '<S3>/Unit Delay2'
                                        */
  real32_T TmpRTBAtSortieralgorithmus2Inpo;/* Computed Parameter: TmpRTBAtSortieralgorithmus2Inpo
                                            * Referenced by: synthesized block
                                            */
  real32_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S45>/Unit Delay1'
                                        */
  real32_T UnitDelay2_InitialCondition_h;/* Computed Parameter: UnitDelay2_InitialCondition_h
                                          * Referenced by: '<S45>/Unit Delay2'
                                          */
  real32_T TmpRTBAtChart7Inport4_InitialCo;/* Computed Parameter: TmpRTBAtChart7Inport4_InitialCo
                                            * Referenced by: synthesized block
                                            */
  uint16_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S30>/Delay'
                                        */
  uint16_T VerzoegernbisShutdownausgefue_b;/* Computed Parameter: VerzoegernbisShutdownausgefue_b
                                            * Referenced by: '<S4>/Verzoegern, bis Shutdown ausgefuehrt ist (Abtastzeit: 0.01s)'
                                            */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S45>/Unit Delay3'
                                         */
  boolean_T UnitDelay4_InitialCondition;/* Computed Parameter: UnitDelay4_InitialCondition
                                         * Referenced by: '<S45>/Unit Delay4'
                                         */
  uint16_T Delay_InitialCondition;     /* Computed Parameter: Delay_InitialCondition
                                        * Referenced by: '<S30>/Delay'
                                        */
  uint16_T RateTransition_InitialCondition;/* Computed Parameter: RateTransition_InitialCondition
                                            * Referenced by: '<S14>/Rate Transition'
                                            */
};

/* Real-time Model Data Structure */
struct tag_RTM_Gesamtsystem {
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
extern Parameters_Gesamtsystem Gesamtsystem_P;

/* Block signals (default storage) */
extern BlockIO_Gesamtsystem Gesamtsystem_B;

/* Block states (default storage) */
extern D_Work_Gesamtsystem Gesamtsystem_DWork;

/* External function called from main */
extern void Gesamtsystem_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void Gesamtsystem_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void Gesamtsystem_initialize(void);
extern void Gesamtsystem_step0(void);
extern void Gesamtsystem_step1(void);
extern void Gesamtsystem_step2(void);
extern void Gesamtsystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Gesamtsystem *const Gesamtsystem_M;

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
 * '<Root>' : 'Gesamtsystem'
 * '<S1>'   : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab.'
 * '<S2>'   : 'Gesamtsystem/Nexonar-System'
 * '<S3>'   : 'Gesamtsystem/Subsystem'
 * '<S4>'   : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Beendigung-System [Einstellungen moeglich]'
 * '<S5>'   : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Zylindermotor-System [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen  von den Werten im Nexonar-System ab.'
 * '<S6>'   : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Beendigung-System [Einstellungen moeglich]/Beendigung-Ansteuerung'
 * '<S7>'   : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Beendigung-System [Einstellungen moeglich]/Dauer bis zum Shutdown (in sec)'
 * '<S8>'   : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Zylindermotor-System [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen  von den Werten im Nexonar-System ab./Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.'
 * '<S9>'   : 'Gesamtsystem/Nexonar-System/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert'
 * '<S10>'  : 'Gesamtsystem/Nexonar-System/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)'
 * '<S11>'  : 'Gesamtsystem/Nexonar-System/Motorausgang'
 * '<S12>'  : 'Gesamtsystem/Nexonar-System/Motorsteuerung bei der Uebergabe'
 * '<S13>'  : 'Gesamtsystem/Nexonar-System/Navigationssystem [Einstellungen moeglich]'
 * '<S14>'  : 'Gesamtsystem/Nexonar-System/Nexonar-Positionsbestimmung'
 * '<S15>'  : 'Gesamtsystem/Nexonar-System/Navigationssystem [Einstellungen moeglich]/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]'
 * '<S16>'  : 'Gesamtsystem/Nexonar-System/Navigationssystem [Einstellungen moeglich]/Fahrsystem'
 * '<S17>'  : 'Gesamtsystem/Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)'
 * '<S18>'  : 'Gesamtsystem/Nexonar-System/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)'
 * '<S19>'  : 'Gesamtsystem/Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x'
 * '<S20>'  : 'Gesamtsystem/Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_y'
 * '<S21>'  : 'Gesamtsystem/Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/PWM-Vektorbetrag'
 * '<S22>'  : 'Gesamtsystem/Nexonar-System/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler'
 * '<S23>'  : 'Gesamtsystem/Nexonar-System/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung'
 * '<S24>'  : 'Gesamtsystem/Nexonar-System/Nexonar-Positionsbestimmung/Chart1'
 * '<S25>'  : 'Gesamtsystem/Nexonar-System/Nexonar-Positionsbestimmung/Chart2'
 * '<S26>'  : 'Gesamtsystem/Nexonar-System/Nexonar-Positionsbestimmung/Chart4'
 * '<S27>'  : 'Gesamtsystem/Nexonar-System/Nexonar-Positionsbestimmung/Chart6'
 * '<S28>'  : 'Gesamtsystem/Nexonar-System/Nexonar-Positionsbestimmung/Chart8'
 * '<S29>'  : 'Gesamtsystem/Nexonar-System/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)'
 * '<S30>'  : 'Gesamtsystem/Nexonar-System/Nexonar-Positionsbestimmung/Triggered Subsystem'
 * '<S31>'  : 'Gesamtsystem/Nexonar-System/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung'
 * '<S32>'  : 'Gesamtsystem/Nexonar-System/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset'
 * '<S33>'  : 'Gesamtsystem/Nexonar-System/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung/I2C Reinitialisierung'
 * '<S34>'  : 'Gesamtsystem/Nexonar-System/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset'
 * '<S35>'  : 'Gesamtsystem/Subsystem/Chart6'
 * '<S36>'  : 'Gesamtsystem/Subsystem/Chart7'
 * '<S37>'  : 'Gesamtsystem/Subsystem/Chart8'
 * '<S38>'  : 'Gesamtsystem/Subsystem/P-Regler mit Output2'
 * '<S39>'  : 'Gesamtsystem/Subsystem/Sortieralgorithmus2'
 * '<S40>'  : 'Gesamtsystem/Subsystem/Subsystem2'
 * '<S41>'  : 'Gesamtsystem/Subsystem/getAngle2'
 * '<S42>'  : 'Gesamtsystem/Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01'
 * '<S43>'  : 'Gesamtsystem/Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag'
 * '<S44>'  : 'Gesamtsystem/Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung'
 * '<S45>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale'
 * '<S46>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1'
 * '<S47>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2'
 * '<S48>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1'
 * '<S49>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2'
 * '<S50>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function3'
 * '<S51>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/NEGATIVE Edge'
 * '<S52>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/POSITIVE Edge'
 * '<S53>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/NEGATIVE Edge'
 * '<S54>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/POSITIVE Edge'
 */
#endif                                 /* RTW_HEADER_Gesamtsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
