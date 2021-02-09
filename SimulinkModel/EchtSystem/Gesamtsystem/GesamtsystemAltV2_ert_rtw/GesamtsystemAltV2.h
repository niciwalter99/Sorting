/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: GesamtsystemAltV2.h
 *
 * Code generated for Simulink model 'GesamtsystemAltV2'.
 *
 * Model version                  : 1.88
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb  9 09:51:15 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_GesamtsystemAltV2_h_
#define RTW_HEADER_GesamtsystemAltV2_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef GesamtsystemAltV2_COMMON_INCLUDES_
# define GesamtsystemAltV2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Gpio.h"
#include "DSP2833x_Examples.h"
#include "IQmathLib.h"
#endif                                 /* GesamtsystemAltV2_COMMON_INCLUDES_ */

#include "GesamtsystemAltV2_types.h"

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

/* Block signals for system '<S53>/NEGATIVE Edge' */
typedef struct {
  boolean_T RelationalOperator1;       /* '<S58>/Relational Operator1' */
} rtB_NEGATIVEEdge_GesamtsystemAl;

/* Block signals for system '<S53>/POSITIVE Edge' */
typedef struct {
  boolean_T RelationalOperator1;       /* '<S59>/Relational Operator1' */
} rtB_POSITIVEEdge_GesamtsystemAl;

/* Block signals for system '<S52>/MATLAB Function1' */
typedef struct {
  real32_T y;                          /* '<S52>/MATLAB Function1' */
} rtB_MATLABFunction1_Gesamtsyste;

/* Block signals (default storage) */
typedef struct {
  real_T AnalogDigitalWandlungSampletime;/* '<S4>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  real_T AnalogDigitalWandlungSampleti_e;/* '<S4>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  real_T AnalogDigitalWandlungSampleti_a;/* '<S4>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  real_T RateTransition3;              /* '<S48>/Rate Transition3' */
  real_T RateTransition3_d;            /* '<S4>/Rate Transition3' */
  real_T TmpRTBAtProductOutport1;      /* '<S4>/Product' */
  real_T RL;                           /* '<S52>/MATLAB Function2' */
  real_T magacin;                      /* '<S4>/Sortieralgorithmus2' */
  real_T y;                            /* '<S49>/Richtung' */
  real_T gatePWM;                      /* '<S4>/Chart8' */
  real_T gateDirection;                /* '<S4>/Chart8' */
  real_T panzerMotor;                  /* '<S4>/Chart8' */
  real_T klappe;                       /* '<S4>/Chart8' */
  real_T angle;                        /* '<S4>/Chart7' */
  real_T signal;                       /* '<S4>/Chart7' */
  real_T gatePWM_c;                    /* '<S4>/Chart6' */
  real_T gateDirection_i;              /* '<S4>/Chart6' */
  real_T stopp;                        /* '<S4>/Chart' */
  real_T MovingAverage2;               /* '<S4>/Moving Average2' */
  real_T x_soll;                       /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T y_soll;                       /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T Gang;                         /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T Zielradius;                   /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T Wartezeit;                    /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T BinaererWertebereich;         /* '<S16>/Binaerer Wertebereich' */
  real_T Winkeldifferenz;              /* '<S23>/Winkeldifferenz' */
  real_T PWMWertebereich;              /* '<S22>/PWM-Wertebereich' */
  real_T alpha_neu;                    /* '<S23>/Winkelausgabe fuer Ausrichtung' */
  real_T Quadrant;                     /* '<S23>/Quadrantenteiler' */
  real_T pwm_out_l;                    /* '<S16>/Fahrsystem' */
  real_T pwm_out_r;                    /* '<S16>/Fahrsystem' */
  real_T r_l_out_l;                    /* '<S16>/Fahrsystem' */
  real_T r_l_out_r;                    /* '<S16>/Fahrsystem' */
  real_T pwm_mindern[2];               /* '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  real_T alpha_diff_opt;               /* '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  real_T x_Wagen;                      /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T y_Wagen;                      /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T alpha_Wagen;                  /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T ZM_r_l_out;                   /* '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  real_T Timer;                        /* '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Heckschalter zum ersten Mal gedrückt wird' */
  real_T Shutdown;                     /* '<S5>/Shutdown-Eingriff' */
  real_T Endsignal;                    /* '<S5>/Beendigung-Ansteuerung' */
  real32_T DigitalInput2;              /* '<S4>/Digital Input2' */
  real32_T UnitDelay2;                 /* '<S4>/Unit Delay2' */
  real32_T TmpRTBAtSortieralgorithmus2Inpo;/* '<S4>/Digital Input2' */
  real32_T TmpRTBAtChart7Inport4;      /* '<S4>/Digital Input2' */
  real32_T movingCube;                 /* '<S4>/Chart7' */
  real32_T movingCube_d;               /* '<S4>/Chart6' */
  real32_T int16x_bin[16];             /* '<S17>/Chart6' */
  real32_T int16a1_bin[16];            /* '<S17>/Chart4' */
  real32_T int16y_bin[16];             /* '<S17>/Chart2' */
  real32_T int16z_bin[16];             /* '<S17>/Chart1' */
  uint16_T I2CReceive_o2;              /* '<S35>/I2C Receive' */
  int16_T valid_values1;               /* '<S17>/Chart8' */
  int16_T valid_values2;               /* '<S17>/Chart8' */
  int16_T valid_values3;               /* '<S17>/Chart8' */
  int16_T valid_values4;               /* '<S17>/Chart8' */
  int16_T valid_values5;               /* '<S17>/Chart8' */
  int16_T valid_values6;               /* '<S17>/Chart8' */
  int16_T valid_values7;               /* '<S17>/Chart8' */
  int16_T valid_values8;               /* '<S17>/Chart8' */
  uint16_T RateTransition[20];         /* '<S17>/Rate Transition' */
  uint16_T I2CReceive_o1[10];          /* '<S35>/I2C Receive' */
  uint16_T VectorConcatenate[20];      /* '<S35>/Vector Concatenate' */
  boolean_T SignaleingangfuerHeckschalter;/* '<S13>/Signaleingang fuer Heckschalter' */
  rtB_MATLABFunction1_Gesamtsyste sf_MATLABFunction3;/* '<S52>/MATLAB Function3' */
  rtB_MATLABFunction1_Gesamtsyste sf_MATLABFunction1;/* '<S52>/MATLAB Function1' */
  rtB_POSITIVEEdge_GesamtsystemAl POSITIVEEdge_m;/* '<S54>/POSITIVE Edge' */
  rtB_NEGATIVEEdge_GesamtsystemAl NEGATIVEEdge_n;/* '<S54>/NEGATIVE Edge' */
  rtB_POSITIVEEdge_GesamtsystemAl POSITIVEEdge;/* '<S53>/POSITIVE Edge' */
  rtB_NEGATIVEEdge_GesamtsystemAl NEGATIVEEdge;/* '<S53>/NEGATIVE Edge' */
} BlockIO_GesamtsystemAltV2;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_simulink_MovingAverage_Gesa obj; /* '<S4>/Moving Average2' */
  dsp_private_ExponentialMovingAv gobj_0;/* '<S4>/Moving Average2' */
  dsp_private_ExponentialMovingAv gobj_1;/* '<S4>/Moving Average2' */
  real_T Delay_DSTATE;                 /* '<S5>/Delay' */
  real_T Delay_DSTATE_b;               /* '<S10>/Delay' */
  real_T UnitDelay5_DSTATE;            /* '<S52>/Unit Delay5' */
  real_T TmpRTBAtProductOutport1_Buffer0;/* synthesized block */
  real_T magacin6;                     /* '<S4>/Sortieralgorithmus2' */
  real_T magacin0;                     /* '<S4>/Sortieralgorithmus2' */
  real_T magacin1;                     /* '<S4>/Sortieralgorithmus2' */
  real_T magacin2;                     /* '<S4>/Sortieralgorithmus2' */
  real_T magacin3;                     /* '<S4>/Sortieralgorithmus2' */
  real_T magacin4;                     /* '<S4>/Sortieralgorithmus2' */
  real_T magacin5;                     /* '<S4>/Sortieralgorithmus2' */
  real_T cubeCounter;                  /* '<S4>/Sortieralgorithmus2' */
  real_T blue;                         /* '<S4>/Sortieralgorithmus2' */
  real_T tasterCounter;                /* '<S4>/Chart8' */
  real_T Counter;                      /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T x_least;                      /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T x_Uebergabe;                  /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T y_Uebergabe;                  /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T alpha_diff_intern;            /* '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  real_T Stillstandintervall;          /* '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  real_T psi_Offset_Nexo;              /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T r_Versatz_Nexo;               /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T phi_Versatz_Nexo;             /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T Counter_i;                    /* '<S5>/Shutdown-Eingriff' */
  real32_T UnitDelay1_DSTATE;          /* '<S52>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE;          /* '<S52>/Unit Delay2' */
  real32_T UnitDelay2_DSTATE_p;        /* '<S4>/Unit Delay2' */
  real32_T TmpRTBAtSortieralgorithmus2Inpo;/* synthesized block */
  real32_T TmpRTBAtChart7Inport4_Buffer0;/* synthesized block */
  int32_T clockTickCounter;            /* '<S34>/Pulse Generator' */
  int32_T zaehler;                     /* '<S17>/Chart8' */
  int32_T counter;                     /* '<S17>/Chart8' */
  int32_T x_found;                     /* '<S17>/Chart8' */
  uint32_T temporalCounter_i1;         /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  uint32_T temporalCounter_i1_p;       /* '<S3>/Steuersystem fuer Heckschalter' */
  volatile int16_T RateTransition_ActiveBufIdx;/* '<S17>/Rate Transition' */
  volatile int16_T RateTransition_semaphoreTaken;/* '<S17>/Rate Transition' */
  int16_T values_out1[20];             /* '<S17>/Chart8' */
  int16_T search;                      /* '<S17>/Chart8' */
  uint16_T temporalCounter_i1_b;       /* '<S4>/Chart' */
  uint16_T Delay_DSTATE_bl[10];        /* '<S35>/Delay' */
  boolean_T UnitDelay3_DSTATE;         /* '<S52>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE;         /* '<S52>/Unit Delay4' */
  volatile uint16_T RateTransition_Buffer[40];/* '<S17>/Rate Transition' */
  uint16_T is_active_c42_GesamtsystemAltV2;/* '<S4>/Sortieralgorithmus2' */
  uint16_T is_c42_GesamtsystemAltV2;   /* '<S4>/Sortieralgorithmus2' */
  uint16_T temporalCounter_i1_n;       /* '<S4>/Sortieralgorithmus2' */
  uint16_T is_active_c39_GesamtsystemAltV2;/* '<S4>/Chart8' */
  uint16_T is_c39_GesamtsystemAltV2;   /* '<S4>/Chart8' */
  uint16_T temporalCounter_i1_a;       /* '<S4>/Chart8' */
  uint16_T is_active_c38_GesamtsystemAltV2;/* '<S4>/Chart7' */
  uint16_T is_c38_GesamtsystemAltV2;   /* '<S4>/Chart7' */
  uint16_T temporalCounter_i1_g;       /* '<S4>/Chart7' */
  uint16_T is_active_c37_GesamtsystemAltV2;/* '<S4>/Chart6' */
  uint16_T is_c37_GesamtsystemAltV2;   /* '<S4>/Chart6' */
  uint16_T temporalCounter_i1_o;       /* '<S4>/Chart6' */
  uint16_T is_active_c20_GesamtsystemAltV2;/* '<S4>/Chart' */
  uint16_T is_c20_GesamtsystemAltV2;   /* '<S4>/Chart' */
  uint16_T is_active_c5_GesamtsystemAltV2;/* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  uint16_T is_c5_GesamtsystemAltV2;    /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  uint16_T is_Parken;                  /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  uint16_T is_Uebergabe;               /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  uint16_T is_Sammeln;                 /* '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  uint16_T is_active_c9_GesamtsystemAltV2;/* '<S3>/Steuersystem fuer Heckschalter' */
  uint16_T is_c9_GesamtsystemAltV2;    /* '<S3>/Steuersystem fuer Heckschalter' */
  uint16_T is_active_c17_GesamtsystemAltV2;/* '<S17>/Chart8' */
  uint16_T is_c17_GesamtsystemAltV2;   /* '<S17>/Chart8' */
  uint16_T is_active_c16_GesamtsystemAltV2;/* '<S17>/Chart6' */
  uint16_T is_c16_GesamtsystemAltV2;   /* '<S17>/Chart6' */
  uint16_T is_active_c14_GesamtsystemAltV2;/* '<S17>/Chart4' */
  uint16_T is_c14_GesamtsystemAltV2;   /* '<S17>/Chart4' */
  uint16_T is_active_c13_GesamtsystemAltV2;/* '<S17>/Chart2' */
  uint16_T is_c13_GesamtsystemAltV2;   /* '<S17>/Chart2' */
  uint16_T is_active_c1_GesamtsystemAltV2;/* '<S17>/Chart1' */
  uint16_T is_c1_GesamtsystemAltV2;    /* '<S17>/Chart1' */
  uint16_T is_active_c12_GesamtsystemAltV2;/* '<S23>/Winkelausgabe fuer Ausrichtung' */
  uint16_T is_c12_GesamtsystemAltV2;   /* '<S23>/Winkelausgabe fuer Ausrichtung' */
  uint16_T is_active_c11_GesamtsystemAltV2;/* '<S23>/Quadrantenteiler' */
  uint16_T is_c11_GesamtsystemAltV2;   /* '<S23>/Quadrantenteiler' */
  uint16_T is_active_c7_GesamtsystemAltV2;/* '<S16>/Fahrsystem' */
  uint16_T is_c7_GesamtsystemAltV2;    /* '<S16>/Fahrsystem' */
  uint16_T is_active_c8_GesamtsystemAltV2;/* '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  uint16_T is_c8_GesamtsystemAltV2;    /* '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  uint16_T is_active_c4_GesamtsystemAltV2;/* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  uint16_T is_c4_GesamtsystemAltV2;    /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  uint16_T is_active_c6_GesamtsystemAltV2;/* '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  uint16_T is_c6_GesamtsystemAltV2;    /* '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  uint16_T temporalCounter_i1_c;       /* '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  uint16_T is_active_c15_GesamtsystemAltV2;/* '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Heckschalter zum ersten Mal gedrückt wird' */
  uint16_T is_c15_GesamtsystemAltV2;   /* '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Heckschalter zum ersten Mal gedrückt wird' */
  uint16_T is_active_c10_GesamtsystemAltV2;/* '<S5>/Shutdown-Eingriff' */
  uint16_T is_c10_GesamtsystemAltV2;   /* '<S5>/Shutdown-Eingriff' */
  uint16_T is_active_c3_GesamtsystemAltV2;/* '<S5>/Beendigung-Ansteuerung' */
  uint16_T is_c3_GesamtsystemAltV2;    /* '<S5>/Beendigung-Ansteuerung' */
  boolean_T Memory_PreviousInput;      /* '<S53>/Memory' */
  boolean_T Memory_PreviousInput_k;    /* '<S54>/Memory' */
  boolean_T objisempty;                /* '<S4>/Moving Average2' */
} D_Work_GesamtsystemAltV2;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState I2CReset_Trig_ZCE;        /* '<S34>/I2C Reset' */
  ZCSigState I2CReinitialisierung_Trig_ZCE;/* '<S34>/I2C Reinitialisierung' */
} PrevZCSigStates_GesamtsystemAlt;

/* Parameters (default storage) */
struct Parameters_GesamtsystemAltV2_ {
  real_T DauerbiszumShutdowninsec_const;/* Mask Parameter: DauerbiszumShutdowninsec_const
                                         * Referenced by: '<S8>/Constant'
                                         */
  real_T EdgeDetector1_model;          /* Mask Parameter: EdgeDetector1_model
                                        * Referenced by: '<S53>/Constant1'
                                        */
  real_T EdgeDetector2_model;          /* Mask Parameter: EdgeDetector2_model
                                        * Referenced by: '<S54>/Constant1'
                                        */
  boolean_T EdgeDetector1_ic;          /* Mask Parameter: EdgeDetector1_ic
                                        * Referenced by: '<S53>/Memory'
                                        */
  boolean_T EdgeDetector2_ic;          /* Mask Parameter: EdgeDetector2_ic
                                        * Referenced by: '<S54>/Memory'
                                        */
  real_T BinaererWertebereich_UpperSat;/* Expression: 1
                                        * Referenced by: '<S16>/Binaerer Wertebereich'
                                        */
  real_T BinaererWertebereich_LowerSat;/* Expression: 0
                                        * Referenced by: '<S16>/Binaerer Wertebereich'
                                        */
  real_T Quadrantenverschiebung_Gain;  /* Expression: 90
                                        * Referenced by: '<S23>/Quadranten- verschiebung'
                                        */
  real_T PWMWertebereich_UpperSat;     /* Expression: 100
                                        * Referenced by: '<S22>/PWM-Wertebereich'
                                        */
  real_T PWMWertebereich_LowerSat;     /* Expression: 0
                                        * Referenced by: '<S22>/PWM-Wertebereich'
                                        */
  real_T MovingAverage2_ForgettingFactor;/* Expression: 0.3
                                          * Referenced by: '<S4>/Moving Average2'
                                          */
  real_T eitheredge_Value[2];          /* Expression: [1 1]
                                        * Referenced by: '<S53>/either edge'
                                        */
  real_T negedge_Value[2];             /* Expression: [0 1]
                                        * Referenced by: '<S53>/neg. edge'
                                        */
  real_T posedge_Value[2];             /* Expression: [1 0]
                                        * Referenced by: '<S53>/pos. edge'
                                        */
  real_T eitheredge_Value_h[2];        /* Expression: [1 1]
                                        * Referenced by: '<S54>/either edge'
                                        */
  real_T negedge_Value_n[2];           /* Expression: [0 1]
                                        * Referenced by: '<S54>/neg. edge'
                                        */
  real_T posedge_Value_i[2];           /* Expression: [1 0]
                                        * Referenced by: '<S54>/pos. edge'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S5>/Delay'
                                        */
  real_T Inkrement_Value;              /* Expression: 1
                                        * Referenced by: '<S10>/Inkrement'
                                        */
  real_T Delay_InitialCondition_g;     /* Expression: 0
                                        * Referenced by: '<S10>/Delay'
                                        */
  real_T Zeitinsec_Gain;               /* Expression: 0.01
                                        * Referenced by: '<S10>/Zeit in sec'
                                        */
  real_T xSollkoordinatenOffsetinmm_Valu;/* Expression: 0
                                          * Referenced by: '<S19>/x-Sollkoordinaten-Offset (in mm)'
                                          */
  real_T ySollkoordinatenOffsetinmm_Valu;/* Expression: 0
                                          * Referenced by: '<S19>/y-Sollkoordinaten-Offset (in mm)'
                                          */
  real_T LeistungsbereichMotor_links_Upp;/* Expression: 85
                                          * Referenced by: '<S15>/Leistungsbereich Motor_links'
                                          */
  real_T LeistungsbereichMotor_links_Low;/* Expression: 0
                                          * Referenced by: '<S15>/Leistungsbereich Motor_links'
                                          */
  real_T LeistungsoffsetMotor_links_Star;/* Expression: 0
                                          * Referenced by: '<S15>/Leistungsoffset Motor_links'
                                          */
  real_T LeistungsoffsetMotor_links_End;/* Expression: 0
                                         * Referenced by: '<S15>/Leistungsoffset Motor_links'
                                         */
  real_T LeistungsbereichMotor_rechts_Up;/* Expression: 85
                                          * Referenced by: '<S15>/Leistungsbereich Motor_rechts'
                                          */
  real_T LeistungsbereichMotor_rechts_Lo;/* Expression: 0
                                          * Referenced by: '<S15>/Leistungsbereich Motor_rechts'
                                          */
  real_T LeistungsoffsetMotor_rechts_Sta;/* Expression: 0
                                          * Referenced by: '<S15>/Leistungsoffset Motor_rechts'
                                          */
  real_T LeistungsoffsetMotor_rechts_End;/* Expression: 0
                                          * Referenced by: '<S15>/Leistungsoffset Motor_rechts'
                                          */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S34>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 250
                                        * Referenced by: '<S34>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 1
                                        * Referenced by: '<S34>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S34>/Pulse Generator'
                                        */
  real_T WinkelFlankePolulo3416V022Polul;/* Expression: 0.076
                                          * Referenced by: '<S52>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
                                          */
  real_T Constant_Value;               /* Expression: 2000
                                        * Referenced by: '<S52>/Constant'
                                        */
  real_T HeuristischermittelterSchwellwe;/* Expression: 2000
                                          * Referenced by: '<S52>/Heuristisch ermittelter Schwellwert'
                                          */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S52>/Unit Delay5'
                                        */
  real_T WinkelFlankePolulo3416V022Pol_l;/* Expression: 0.076
                                          * Referenced by: '<S52>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
                                          */
  real_T uDLookupTable2_tableData[8];  /* Expression: [-1,-440,-295,-170,-40,85,220,430]
                                        * Referenced by: '<S4>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[8];   /* Expression: [-1,0,1,2,3,4,5,6]
                                        * Referenced by: '<S4>/1-D Lookup Table2'
                                        */
  real_T DeadZone_Start;               /* Expression: -0.5
                                        * Referenced by: '<S49>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 0.5
                                        * Referenced by: '<S49>/Dead Zone'
                                        */
  real_T Verstaerkung_Gain;            /* Expression: 1
                                        * Referenced by: '<S49>/Verstaerkung'
                                        */
  real_T TmpRTBAtProductOutport1_Initial;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real32_T xinmm_Gain;                 /* Computed Parameter: xinmm_Gain
                                        * Referenced by: '<S17>/x in mm'
                                        */
  real32_T yinmm_Gain;                 /* Computed Parameter: yinmm_Gain
                                        * Referenced by: '<S17>/y in mm'
                                        */
  real32_T alphain_Gain;               /* Computed Parameter: alphain_Gain
                                        * Referenced by: '<S17>/alpha in °'
                                        */
  real32_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S52>/Unit Delay1'
                                        */
  real32_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                        * Referenced by: '<S52>/Unit Delay2'
                                        */
  real32_T UnitDelay2_InitialCondition_j;/* Computed Parameter: UnitDelay2_InitialCondition_j
                                          * Referenced by: '<S4>/Unit Delay2'
                                          */
  real32_T TmpRTBAtSortieralgorithmus2Inpo;/* Computed Parameter: TmpRTBAtSortieralgorithmus2Inpo
                                            * Referenced by: synthesized block
                                            */
  real32_T TmpRTBAtChart7Inport4_InitialCo;/* Computed Parameter: TmpRTBAtChart7Inport4_InitialCo
                                            * Referenced by: synthesized block
                                            */
  uint16_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S35>/Delay'
                                        */
  uint16_T Delay_DelayLength_j;        /* Computed Parameter: Delay_DelayLength_j
                                        * Referenced by: '<S5>/Delay'
                                        */
  uint16_T Delay_DelayLength_d;        /* Computed Parameter: Delay_DelayLength_d
                                        * Referenced by: '<S10>/Delay'
                                        */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S52>/Unit Delay3'
                                         */
  boolean_T UnitDelay4_InitialCondition;/* Computed Parameter: UnitDelay4_InitialCondition
                                         * Referenced by: '<S52>/Unit Delay4'
                                         */
  uint16_T Delay_InitialCondition_k;   /* Computed Parameter: Delay_InitialCondition_k
                                        * Referenced by: '<S35>/Delay'
                                        */
  uint16_T RateTransition_InitialCondition;/* Computed Parameter: RateTransition_InitialCondition
                                            * Referenced by: '<S17>/Rate Transition'
                                            */
};

/* Real-time Model Data Structure */
struct tag_RTM_GesamtsystemAltV2 {
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
extern Parameters_GesamtsystemAltV2 GesamtsystemAltV2_P;

/* Block signals (default storage) */
extern BlockIO_GesamtsystemAltV2 GesamtsystemAltV2_B;

/* Block states (default storage) */
extern D_Work_GesamtsystemAltV2 GesamtsystemAltV2_DWork;

/* External function called from main */
extern void GesamtsystemAltV2_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void GesamtsystemAltV2_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void GesamtsystemAltV2_initialize(void);
extern void GesamtsystemAltV2_step0(void);
extern void GesamtsystemAltV2_step1(void);
extern void GesamtsystemAltV2_step2(void);
extern void GesamtsystemAltV2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_GesamtsystemAltV2 *const GesamtsystemAltV2_M;

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
 * '<Root>' : 'GesamtsystemAltV2'
 * '<S1>'   : 'GesamtsystemAltV2/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab.'
 * '<S2>'   : 'GesamtsystemAltV2/Add-Ons-Eingang'
 * '<S3>'   : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]'
 * '<S4>'   : 'GesamtsystemAltV2/Subsystem'
 * '<S5>'   : 'GesamtsystemAltV2/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Endsignal-System [Einstellungen moeglich]'
 * '<S6>'   : 'GesamtsystemAltV2/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Zylindermotor-System [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen  von den Werten im Nexonar-System ab.'
 * '<S7>'   : 'GesamtsystemAltV2/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Endsignal-System [Einstellungen moeglich]/Beendigung-Ansteuerung'
 * '<S8>'   : 'GesamtsystemAltV2/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Endsignal-System [Einstellungen moeglich]/Dauer bis zum Shutdown (in sec)'
 * '<S9>'   : 'GesamtsystemAltV2/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Endsignal-System [Einstellungen moeglich]/Shutdown-Eingriff'
 * '<S10>'  : 'GesamtsystemAltV2/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Endsignal-System [Einstellungen moeglich]/Zeitmessblock (in sec)'
 * '<S11>'  : 'GesamtsystemAltV2/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Endsignal-System [Einstellungen moeglich]/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Heckschalter zum ersten Mal gedrückt wird'
 * '<S12>'  : 'GesamtsystemAltV2/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Zylindermotor-System [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen  von den Werten im Nexonar-System ab./Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.'
 * '<S13>'  : 'GesamtsystemAltV2/Add-Ons-Eingang/Heckschalter-System'
 * '<S14>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)'
 * '<S15>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Motorausgang mit Ansteuerung, Leistungsoffset und Leistungsregulierung'
 * '<S16>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]'
 * '<S17>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung'
 * '<S18>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Steuersystem fuer Heckschalter'
 * '<S19>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Trajektorie-System [Einstellungen moeglich]'
 * '<S20>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]'
 * '<S21>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Fahrsystem'
 * '<S22>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)'
 * '<S23>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)'
 * '<S24>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x'
 * '<S25>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_y'
 * '<S26>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/PWM-Vektorbetrag'
 * '<S27>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler'
 * '<S28>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung'
 * '<S29>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart1'
 * '<S30>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart2'
 * '<S31>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart4'
 * '<S32>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart6'
 * '<S33>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8'
 * '<S34>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)'
 * '<S35>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Triggered Subsystem'
 * '<S36>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung'
 * '<S37>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset'
 * '<S38>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung/I2C Reinitialisierung'
 * '<S39>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset'
 * '<S40>'  : 'GesamtsystemAltV2/Nexonar-System [Einstellungen moeglich]/Trajektorie-System [Einstellungen moeglich]/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")'
 * '<S41>'  : 'GesamtsystemAltV2/Subsystem/Chart'
 * '<S42>'  : 'GesamtsystemAltV2/Subsystem/Chart6'
 * '<S43>'  : 'GesamtsystemAltV2/Subsystem/Chart7'
 * '<S44>'  : 'GesamtsystemAltV2/Subsystem/Chart8'
 * '<S45>'  : 'GesamtsystemAltV2/Subsystem/P-Regler mit Output2'
 * '<S46>'  : 'GesamtsystemAltV2/Subsystem/Sortieralgorithmus2'
 * '<S47>'  : 'GesamtsystemAltV2/Subsystem/Subsystem2'
 * '<S48>'  : 'GesamtsystemAltV2/Subsystem/getAngle2'
 * '<S49>'  : 'GesamtsystemAltV2/Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01'
 * '<S50>'  : 'GesamtsystemAltV2/Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag'
 * '<S51>'  : 'GesamtsystemAltV2/Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung'
 * '<S52>'  : 'GesamtsystemAltV2/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale'
 * '<S53>'  : 'GesamtsystemAltV2/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1'
 * '<S54>'  : 'GesamtsystemAltV2/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2'
 * '<S55>'  : 'GesamtsystemAltV2/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1'
 * '<S56>'  : 'GesamtsystemAltV2/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2'
 * '<S57>'  : 'GesamtsystemAltV2/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function3'
 * '<S58>'  : 'GesamtsystemAltV2/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/NEGATIVE Edge'
 * '<S59>'  : 'GesamtsystemAltV2/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/POSITIVE Edge'
 * '<S60>'  : 'GesamtsystemAltV2/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/NEGATIVE Edge'
 * '<S61>'  : 'GesamtsystemAltV2/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/POSITIVE Edge'
 */
#endif                                 /* RTW_HEADER_GesamtsystemAltV2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
