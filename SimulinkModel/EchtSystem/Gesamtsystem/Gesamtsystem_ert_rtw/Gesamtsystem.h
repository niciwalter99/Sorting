/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Gesamtsystem.h
 *
 * Code generated for Simulink model 'Gesamtsystem'.
 *
 * Model version                  : 1.89
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Feb  7 13:00:49 2021
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

/* Block signals for system '<S50>/NEGATIVE Edge' */
typedef struct {
  boolean_T RelationalOperator1;       /* '<S55>/Relational Operator1' */
} rtB_NEGATIVEEdge_Gesamtsystem;

/* Block signals for system '<S50>/POSITIVE Edge' */
typedef struct {
  boolean_T RelationalOperator1;       /* '<S56>/Relational Operator1' */
} rtB_POSITIVEEdge_Gesamtsystem;

/* Block signals for system '<S49>/MATLAB Function1' */
typedef struct {
  real32_T y;                          /* '<S49>/MATLAB Function1' */
} rtB_MATLABFunction1_Gesamtsyste;

/* Block signals (default storage) */
typedef struct {
  real_T AnalogDigitalWandlungSampletime;/* '<S4>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  real_T AnalogDigitalWandlungSampleti_c;/* '<S4>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  real_T AnalogDigitalWandlungSampleti_l;/* '<S4>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  real_T RateTransition3;              /* '<S45>/Rate Transition3' */
  real_T RateTransition3_f;            /* '<S4>/Rate Transition3' */
  real_T TmpRTBAtProductInport1;       /* '<S4>/Chart8' */
  real_T RL;                           /* '<S49>/MATLAB Function2' */
  real_T magacin;                      /* '<S4>/Sortieralgorithmus2' */
  real_T signal;                       /* '<S4>/Sortieralgorithmus2' */
  real_T lampeCubeLoaded;              /* '<S4>/Sortieralgorithmus2' */
  real_T lampeSortier;                 /* '<S4>/Sortieralgorithmus2' */
  real_T y;                            /* '<S46>/Richtung' */
  real_T gatePWM;                      /* '<S4>/Chart8' */
  real_T gateDirection;                /* '<S4>/Chart8' */
  real_T panzerMotor;                  /* '<S4>/Chart8' */
  real_T lampe;                        /* '<S4>/Chart8' */
  real_T schieber;                     /* '<S4>/Chart8' */
  real_T klappe;                       /* '<S4>/Chart8' */
  real_T angle;                        /* '<S4>/Chart7' */
  real_T signal_o;                     /* '<S4>/Chart7' */
  real_T gatePWM_k;                    /* '<S4>/Chart6' */
  real_T gateDirection_b;              /* '<S4>/Chart6' */
  real_T MovingAverage2;               /* '<S4>/Moving Average2' */
  real_T BinaererWertebereich;         /* '<S16>/Binaerer Wertebereich' */
  real_T Winkeldifferenz;              /* '<S22>/Winkeldifferenz' */
  real_T PWMWertebereich;              /* '<S21>/PWM-Wertebereich' */
  real_T alpha_neu;                    /* '<S22>/Winkelausgabe fuer Ausrichtung' */
  real_T Quadrant;                     /* '<S22>/Quadrantenteiler' */
  real_T pwm_out_l;                    /* '<S16>/Fahrsystem' */
  real_T pwm_out_r;                    /* '<S16>/Fahrsystem' */
  real_T r_l_out_l;                    /* '<S16>/Fahrsystem' */
  real_T r_l_out_r;                    /* '<S16>/Fahrsystem' */
  real_T pwm_mindern[2];               /* '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  real_T alpha_diff_opt;               /* '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  real_T x_Wagen;                      /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T y_Wagen;                      /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T alpha_Wagen;                  /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T x_soll;                       /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T y_soll;                       /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T Gang;                         /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T Zielradius;                   /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T Wartezeit;                    /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T ZM_r_l_out;                   /* '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  real_T Timer;                        /* '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Notschalter zum ersten Mal gedrückt wird' */
  real_T Endsignal;                    /* '<S5>/Beendigung-Ansteuerung' */
  real32_T DigitalInput2;              /* '<S4>/Digital Input2' */
  real32_T TmpRTBAtSortieralgorithmus2Inpo;/* '<S4>/Digital Input2' */
  real32_T UnitDelay2;                 /* '<S4>/Unit Delay2' */
  real32_T TmpRTBAtChart7Inport4;      /* '<S4>/Digital Input2' */
  real32_T movingCube;                 /* '<S4>/Chart7' */
  real32_T movingCube_i;               /* '<S4>/Chart6' */
  real32_T int16x_bin[16];             /* '<S17>/Chart6' */
  real32_T int16a1_bin[16];            /* '<S17>/Chart4' */
  real32_T int16y_bin[16];             /* '<S17>/Chart2' */
  real32_T int16z_bin[16];             /* '<S17>/Chart1' */
  uint16_T I2CReceive_o2;              /* '<S34>/I2C Receive' */
  int16_T valid_values1;               /* '<S17>/Chart8' */
  int16_T valid_values2;               /* '<S17>/Chart8' */
  int16_T valid_values3;               /* '<S17>/Chart8' */
  int16_T valid_values4;               /* '<S17>/Chart8' */
  int16_T valid_values5;               /* '<S17>/Chart8' */
  int16_T valid_values6;               /* '<S17>/Chart8' */
  int16_T valid_values7;               /* '<S17>/Chart8' */
  int16_T valid_values8;               /* '<S17>/Chart8' */
  uint16_T RateTransition[20];         /* '<S17>/Rate Transition' */
  uint16_T I2CReceive_o1[10];          /* '<S34>/I2C Receive' */
  uint16_T VectorConcatenate[20];      /* '<S34>/Vector Concatenate' */
  boolean_T SignaleingangfuerHeckschalter;/* '<S12>/Signaleingang fuer Heckschalter' */
  rtB_MATLABFunction1_Gesamtsyste sf_MATLABFunction3;/* '<S49>/MATLAB Function3' */
  rtB_MATLABFunction1_Gesamtsyste sf_MATLABFunction1;/* '<S49>/MATLAB Function1' */
  rtB_POSITIVEEdge_Gesamtsystem POSITIVEEdge_f;/* '<S51>/POSITIVE Edge' */
  rtB_NEGATIVEEdge_Gesamtsystem NEGATIVEEdge_h;/* '<S51>/NEGATIVE Edge' */
  rtB_POSITIVEEdge_Gesamtsystem POSITIVEEdge;/* '<S50>/POSITIVE Edge' */
  rtB_NEGATIVEEdge_Gesamtsystem NEGATIVEEdge;/* '<S50>/NEGATIVE Edge' */
} BlockIO_Gesamtsystem;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_simulink_MovingAverage_Gesa obj; /* '<S4>/Moving Average2' */
  dsp_private_ExponentialMovingAv gobj_0;/* '<S4>/Moving Average2' */
  dsp_private_ExponentialMovingAv gobj_1;/* '<S4>/Moving Average2' */
  real_T Delay_DSTATE;                 /* '<S5>/Delay' */
  real_T Delay_DSTATE_e;               /* '<S9>/Delay' */
  real_T UnitDelay5_DSTATE;            /* '<S49>/Unit Delay5' */
  real_T TmpRTBAtProductInport1_Buffer0;/* synthesized block */
  real_T magacin6;                     /* '<S4>/Sortieralgorithmus2' */
  real_T magacin2_LastCube;            /* '<S4>/Sortieralgorithmus2' */
  real_T magacin1_LastCube;            /* '<S4>/Sortieralgorithmus2' */
  real_T magacin0;                     /* '<S4>/Sortieralgorithmus2' */
  real_T magacin1;                     /* '<S4>/Sortieralgorithmus2' */
  real_T magacin2;                     /* '<S4>/Sortieralgorithmus2' */
  real_T magacin3;                     /* '<S4>/Sortieralgorithmus2' */
  real_T magacin4;                     /* '<S4>/Sortieralgorithmus2' */
  real_T magacin5;                     /* '<S4>/Sortieralgorithmus2' */
  real_T cubeCounter;                  /* '<S4>/Sortieralgorithmus2' */
  real_T tasterCounter;                /* '<S4>/Chart8' */
  real_T position;                     /* '<S4>/Chart7' */
  real_T alpha_diff_intern;            /* '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  real_T Stillstandintervall;          /* '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  real_T psi_Offset_Nexo;              /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T r_Versatz_Nexo;               /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T phi_Versatz_Nexo;             /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  real_T Counter;                      /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T x_least;                      /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T x_Uebergabe;                  /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real_T y_Uebergabe;                  /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  real32_T UnitDelay1_DSTATE;          /* '<S49>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE;          /* '<S49>/Unit Delay2' */
  real32_T UnitDelay2_DSTATE_a;        /* '<S4>/Unit Delay2' */
  real32_T TmpRTBAtSortieralgorithmus2Inpo;/* synthesized block */
  real32_T TmpRTBAtChart7Inport4_Buffer0;/* synthesized block */
  int32_T clockTickCounter;            /* '<S33>/Pulse Generator' */
  int32_T zaehler;                     /* '<S17>/Chart8' */
  int32_T counter;                     /* '<S17>/Chart8' */
  int32_T x_found;                     /* '<S17>/Chart8' */
  uint32_T temporalCounter_i1;         /* '<S3>/Steuersystem fuer Heckschalter' */
  uint32_T temporalCounter_i1_f;       /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  volatile int16_T RateTransition_ActiveBufIdx;/* '<S17>/Rate Transition' */
  volatile int16_T RateTransition_semaphoreTaken;/* '<S17>/Rate Transition' */
  int16_T values_out1[20];             /* '<S17>/Chart8' */
  int16_T search;                      /* '<S17>/Chart8' */
  uint16_T Delay_DSTATE_k[10];         /* '<S34>/Delay' */
  boolean_T UnitDelay3_DSTATE;         /* '<S49>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE;         /* '<S49>/Unit Delay4' */
  volatile uint16_T RateTransition_Buffer[40];/* '<S17>/Rate Transition' */
  uint16_T is_active_c42_Gesamtsystem; /* '<S4>/Sortieralgorithmus2' */
  uint16_T is_c42_Gesamtsystem;        /* '<S4>/Sortieralgorithmus2' */
  uint16_T temporalCounter_i1_a;       /* '<S4>/Sortieralgorithmus2' */
  uint16_T is_active_c39_Gesamtsystem; /* '<S4>/Chart8' */
  uint16_T is_c39_Gesamtsystem;        /* '<S4>/Chart8' */
  uint16_T temporalCounter_i1_e;       /* '<S4>/Chart8' */
  uint16_T is_active_c38_Gesamtsystem; /* '<S4>/Chart7' */
  uint16_T is_c38_Gesamtsystem;        /* '<S4>/Chart7' */
  uint16_T temporalCounter_i1_k;       /* '<S4>/Chart7' */
  uint16_T is_active_c37_Gesamtsystem; /* '<S4>/Chart6' */
  uint16_T is_c37_Gesamtsystem;        /* '<S4>/Chart6' */
  uint16_T temporalCounter_i1_i;       /* '<S4>/Chart6' */
  uint16_T is_active_c9_Gesamtsystem;  /* '<S3>/Steuersystem fuer Heckschalter' */
  uint16_T is_c9_Gesamtsystem;         /* '<S3>/Steuersystem fuer Heckschalter' */
  uint16_T is_active_c17_Gesamtsystem; /* '<S17>/Chart8' */
  uint16_T is_c17_Gesamtsystem;        /* '<S17>/Chart8' */
  uint16_T is_active_c16_Gesamtsystem; /* '<S17>/Chart6' */
  uint16_T is_c16_Gesamtsystem;        /* '<S17>/Chart6' */
  uint16_T is_active_c14_Gesamtsystem; /* '<S17>/Chart4' */
  uint16_T is_c14_Gesamtsystem;        /* '<S17>/Chart4' */
  uint16_T is_active_c13_Gesamtsystem; /* '<S17>/Chart2' */
  uint16_T is_c13_Gesamtsystem;        /* '<S17>/Chart2' */
  uint16_T is_active_c1_Gesamtsystem;  /* '<S17>/Chart1' */
  uint16_T is_c1_Gesamtsystem;         /* '<S17>/Chart1' */
  uint16_T is_active_c12_Gesamtsystem; /* '<S22>/Winkelausgabe fuer Ausrichtung' */
  uint16_T is_c12_Gesamtsystem;        /* '<S22>/Winkelausgabe fuer Ausrichtung' */
  uint16_T is_active_c11_Gesamtsystem; /* '<S22>/Quadrantenteiler' */
  uint16_T is_c11_Gesamtsystem;        /* '<S22>/Quadrantenteiler' */
  uint16_T is_active_c7_Gesamtsystem;  /* '<S16>/Fahrsystem' */
  uint16_T is_c7_Gesamtsystem;         /* '<S16>/Fahrsystem' */
  uint16_T is_active_c8_Gesamtsystem;  /* '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  uint16_T is_c8_Gesamtsystem;         /* '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  uint16_T is_active_c4_Gesamtsystem;  /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  uint16_T is_c4_Gesamtsystem;         /* '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  uint16_T is_active_c5_Gesamtsystem;  /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  uint16_T is_c5_Gesamtsystem;         /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  uint16_T is_Parken;                  /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  uint16_T is_Uebergabe;               /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  uint16_T is_Sammeln;                 /* '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  uint16_T is_active_c6_Gesamtsystem;  /* '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  uint16_T is_c6_Gesamtsystem;         /* '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  uint16_T temporalCounter_i1_aq;      /* '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  uint16_T is_active_c15_Gesamtsystem; /* '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Notschalter zum ersten Mal gedrückt wird' */
  uint16_T is_c15_Gesamtsystem;        /* '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Notschalter zum ersten Mal gedrückt wird' */
  uint16_T is_active_c3_Gesamtsystem;  /* '<S5>/Beendigung-Ansteuerung' */
  uint16_T is_c3_Gesamtsystem;         /* '<S5>/Beendigung-Ansteuerung' */
  boolean_T Memory_PreviousInput;      /* '<S50>/Memory' */
  boolean_T Memory_PreviousInput_o;    /* '<S51>/Memory' */
  boolean_T objisempty;                /* '<S4>/Moving Average2' */
} D_Work_Gesamtsystem;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState I2CReset_Trig_ZCE;        /* '<S33>/I2C Reset' */
  ZCSigState I2CReinitialisierung_Trig_ZCE;/* '<S33>/I2C Reinitialisierung' */
} PrevZCSigStates_Gesamtsystem;

/* Parameters (default storage) */
struct Parameters_Gesamtsystem_ {
  real_T DauerbiszumShutdowninsec_const;/* Mask Parameter: DauerbiszumShutdowninsec_const
                                         * Referenced by: '<S8>/Constant'
                                         */
  real_T EdgeDetector1_model;          /* Mask Parameter: EdgeDetector1_model
                                        * Referenced by: '<S50>/Constant1'
                                        */
  real_T EdgeDetector2_model;          /* Mask Parameter: EdgeDetector2_model
                                        * Referenced by: '<S51>/Constant1'
                                        */
  boolean_T EdgeDetector1_ic;          /* Mask Parameter: EdgeDetector1_ic
                                        * Referenced by: '<S50>/Memory'
                                        */
  boolean_T EdgeDetector2_ic;          /* Mask Parameter: EdgeDetector2_ic
                                        * Referenced by: '<S51>/Memory'
                                        */
  real_T BinaererWertebereich_UpperSat;/* Expression: 1
                                        * Referenced by: '<S16>/Binaerer Wertebereich'
                                        */
  real_T BinaererWertebereich_LowerSat;/* Expression: 0
                                        * Referenced by: '<S16>/Binaerer Wertebereich'
                                        */
  real_T Quadrantenverschiebung_Gain;  /* Expression: 90
                                        * Referenced by: '<S22>/Quadranten- verschiebung'
                                        */
  real_T PWMWertebereich_UpperSat;     /* Expression: 90
                                        * Referenced by: '<S21>/PWM-Wertebereich'
                                        */
  real_T PWMWertebereich_LowerSat;     /* Expression: 0
                                        * Referenced by: '<S21>/PWM-Wertebereich'
                                        */
  real_T MovingAverage2_ForgettingFactor;/* Expression: 0.3
                                          * Referenced by: '<S4>/Moving Average2'
                                          */
  real_T eitheredge_Value[2];          /* Expression: [1 1]
                                        * Referenced by: '<S50>/either edge'
                                        */
  real_T negedge_Value[2];             /* Expression: [0 1]
                                        * Referenced by: '<S50>/neg. edge'
                                        */
  real_T posedge_Value[2];             /* Expression: [1 0]
                                        * Referenced by: '<S50>/pos. edge'
                                        */
  real_T eitheredge_Value_m[2];        /* Expression: [1 1]
                                        * Referenced by: '<S51>/either edge'
                                        */
  real_T negedge_Value_c[2];           /* Expression: [0 1]
                                        * Referenced by: '<S51>/neg. edge'
                                        */
  real_T posedge_Value_p[2];           /* Expression: [1 0]
                                        * Referenced by: '<S51>/pos. edge'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S5>/Delay'
                                        */
  real_T Inkrement_Value;              /* Expression: 1
                                        * Referenced by: '<S9>/Inkrement'
                                        */
  real_T Delay_InitialCondition_j;     /* Expression: 0
                                        * Referenced by: '<S9>/Delay'
                                        */
  real_T Zeitinsec_Gain;               /* Expression: 0.01
                                        * Referenced by: '<S9>/Zeit in sec'
                                        */
  real_T LeistungsoffsetMotor_links_Star;/* Expression: 0
                                          * Referenced by: '<S15>/Leistungsoffset Motor_links'
                                          */
  real_T LeistungsoffsetMotor_links_End;/* Expression: 0
                                         * Referenced by: '<S15>/Leistungsoffset Motor_links'
                                         */
  real_T LeistungsoffsetMotor_rechts_Sta;/* Expression: 0
                                          * Referenced by: '<S15>/Leistungsoffset Motor_rechts'
                                          */
  real_T LeistungsoffsetMotor_rechts_End;/* Expression: 0
                                          * Referenced by: '<S15>/Leistungsoffset Motor_rechts'
                                          */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S33>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 250
                                        * Referenced by: '<S33>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 1
                                        * Referenced by: '<S33>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S33>/Pulse Generator'
                                        */
  real_T WinkelFlankePolulo3416V022Polul;/* Expression: 0.076
                                          * Referenced by: '<S49>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
                                          */
  real_T Constant_Value;               /* Expression: 2000
                                        * Referenced by: '<S49>/Constant'
                                        */
  real_T HeuristischermittelterSchwellwe;/* Expression: 2000
                                          * Referenced by: '<S49>/Heuristisch ermittelter Schwellwert'
                                          */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S49>/Unit Delay5'
                                        */
  real_T WinkelFlankePolulo3416V022Pol_j;/* Expression: 0.076
                                          * Referenced by: '<S49>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
                                          */
  real_T uDLookupTable2_tableData[8];  /* Expression: [-1,-440,-295,-170,-40,85,220,430]
                                        * Referenced by: '<S4>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[8];   /* Expression: [-1,0,1,2,3,4,5,6]
                                        * Referenced by: '<S4>/1-D Lookup Table2'
                                        */
  real_T DeadZone_Start;               /* Expression: -0.5
                                        * Referenced by: '<S46>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 0.5
                                        * Referenced by: '<S46>/Dead Zone'
                                        */
  real_T Verstaerkung_Gain;            /* Expression: 1
                                        * Referenced by: '<S46>/Verstaerkung'
                                        */
  real_T TmpRTBAtProductInport1_InitialC;/* Expression: 0
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
                                        * Referenced by: '<S49>/Unit Delay1'
                                        */
  real32_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                        * Referenced by: '<S49>/Unit Delay2'
                                        */
  real32_T TmpRTBAtSortieralgorithmus2Inpo;/* Computed Parameter: TmpRTBAtSortieralgorithmus2Inpo
                                            * Referenced by: synthesized block
                                            */
  real32_T UnitDelay2_InitialCondition_d;/* Computed Parameter: UnitDelay2_InitialCondition_d
                                          * Referenced by: '<S4>/Unit Delay2'
                                          */
  real32_T TmpRTBAtChart7Inport4_InitialCo;/* Computed Parameter: TmpRTBAtChart7Inport4_InitialCo
                                            * Referenced by: synthesized block
                                            */
  uint16_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S34>/Delay'
                                        */
  uint16_T Delay_DelayLength_h;        /* Computed Parameter: Delay_DelayLength_h
                                        * Referenced by: '<S5>/Delay'
                                        */
  uint16_T Delay_DelayLength_o;        /* Computed Parameter: Delay_DelayLength_o
                                        * Referenced by: '<S9>/Delay'
                                        */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S49>/Unit Delay3'
                                         */
  boolean_T UnitDelay4_InitialCondition;/* Computed Parameter: UnitDelay4_InitialCondition
                                         * Referenced by: '<S49>/Unit Delay4'
                                         */
  uint16_T Delay_InitialCondition_g;   /* Computed Parameter: Delay_InitialCondition_g
                                        * Referenced by: '<S34>/Delay'
                                        */
  uint16_T RateTransition_InitialCondition;/* Computed Parameter: RateTransition_InitialCondition
                                            * Referenced by: '<S17>/Rate Transition'
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
 * '<S2>'   : 'Gesamtsystem/Add-Ons-Eingang'
 * '<S3>'   : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]'
 * '<S4>'   : 'Gesamtsystem/Subsystem'
 * '<S5>'   : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Endsignal-System [Einstellungen moeglich]'
 * '<S6>'   : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Zylindermotor-System [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen  von den Werten im Nexonar-System ab.'
 * '<S7>'   : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Endsignal-System [Einstellungen moeglich]/Beendigung-Ansteuerung'
 * '<S8>'   : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Endsignal-System [Einstellungen moeglich]/Dauer bis zum Shutdown (in sec)'
 * '<S9>'   : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Endsignal-System [Einstellungen moeglich]/Zeitmessblock (in sec)'
 * '<S10>'  : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Endsignal-System [Einstellungen moeglich]/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Notschalter zum ersten Mal gedrückt wird'
 * '<S11>'  : 'Gesamtsystem/Add-Ons-Ansteuerung [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen von den Werten im Nexonar-System ab./Zylindermotor-System [Einstellungen moeglich] Achtung! Einige Einstellungswerte haengen  von den Werten im Nexonar-System ab./Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.'
 * '<S12>'  : 'Gesamtsystem/Add-Ons-Eingang/Heckschalter-System'
 * '<S13>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")'
 * '<S14>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)'
 * '<S15>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Motorausgang mit Ansteuerung und Leistungsoffset'
 * '<S16>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]'
 * '<S17>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung'
 * '<S18>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Steuersystem fuer Heckschalter'
 * '<S19>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]'
 * '<S20>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Fahrsystem'
 * '<S21>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)'
 * '<S22>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)'
 * '<S23>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x'
 * '<S24>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_y'
 * '<S25>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/PWM-Vektorbetrag'
 * '<S26>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler'
 * '<S27>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung'
 * '<S28>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart1'
 * '<S29>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart2'
 * '<S30>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart4'
 * '<S31>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart6'
 * '<S32>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8'
 * '<S33>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)'
 * '<S34>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Triggered Subsystem'
 * '<S35>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung'
 * '<S36>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset'
 * '<S37>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung/I2C Reinitialisierung'
 * '<S38>'  : 'Gesamtsystem/Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset'
 * '<S39>'  : 'Gesamtsystem/Subsystem/Chart6'
 * '<S40>'  : 'Gesamtsystem/Subsystem/Chart7'
 * '<S41>'  : 'Gesamtsystem/Subsystem/Chart8'
 * '<S42>'  : 'Gesamtsystem/Subsystem/P-Regler mit Output2'
 * '<S43>'  : 'Gesamtsystem/Subsystem/Sortieralgorithmus2'
 * '<S44>'  : 'Gesamtsystem/Subsystem/Subsystem2'
 * '<S45>'  : 'Gesamtsystem/Subsystem/getAngle2'
 * '<S46>'  : 'Gesamtsystem/Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01'
 * '<S47>'  : 'Gesamtsystem/Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag'
 * '<S48>'  : 'Gesamtsystem/Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung'
 * '<S49>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale'
 * '<S50>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1'
 * '<S51>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2'
 * '<S52>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1'
 * '<S53>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2'
 * '<S54>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function3'
 * '<S55>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/NEGATIVE Edge'
 * '<S56>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector1/POSITIVE Edge'
 * '<S57>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/NEGATIVE Edge'
 * '<S58>'  : 'Gesamtsystem/Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/Edge Detector2/POSITIVE Edge'
 */
#endif                                 /* RTW_HEADER_Gesamtsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
