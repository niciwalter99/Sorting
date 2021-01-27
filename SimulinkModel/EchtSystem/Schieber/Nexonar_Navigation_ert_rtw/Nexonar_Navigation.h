/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Nexonar_Navigation.h
 *
 * Code generated for Simulink model 'Nexonar_Navigation'.
 *
 * Model version                  : 1.94
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan 27 10:06:59 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Nexonar_Navigation_h_
#define RTW_HEADER_Nexonar_Navigation_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
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

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

extern void config_ePWM_GPIO (void);
extern void init_I2C_GPIO(void);
extern void init_I2C_A(void);

/* user code (top of header file) */
#include "i2c_reset.h"

/* Block signals (default storage) */
typedef struct {
  real_T alpha_neu;                    /* '<S8>/Winkelausgabe fuer Ausrichtung' */
  real_T Quadrant;                     /* '<S8>/Quadrantenteiler' */
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
  real32_T int16x_bin[16];             /* '<S4>/Chart6' */
  real32_T int16a1_bin[16];            /* '<S4>/Chart4' */
  real32_T int16y_bin[16];             /* '<S4>/Chart2' */
  uint16_T I2CReceive_o2;              /* '<S20>/I2C Receive' */
  int16_T valid_values1;               /* '<S4>/Chart8' */
  int16_T valid_values2;               /* '<S4>/Chart8' */
  int16_T valid_values3;               /* '<S4>/Chart8' */
  int16_T valid_values4;               /* '<S4>/Chart8' */
  int16_T valid_values5;               /* '<S4>/Chart8' */
  int16_T valid_values6;               /* '<S4>/Chart8' */
  uint16_T I2CReceive_o1[10];          /* '<S20>/I2C Receive' */
  uint16_T VectorConcatenate[20];      /* '<S20>/Vector Concatenate' */
} BlockIO_Nexonar_Navigation;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Stillstandintervall;          /* '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */
  real_T Counter;                      /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  real_T x_least;                      /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  int32_T clockTickCounter;            /* '<S19>/Pulse Generator' */
  int32_T zaehler;                     /* '<S4>/Chart8' */
  int32_T counter;                     /* '<S4>/Chart8' */
  int32_T x_found;                     /* '<S4>/Chart8' */
  volatile int16_T RateTransition_ActiveBufIdx;/* '<S4>/Rate Transition' */
  volatile int16_T RateTransition_semaphoreTaken;/* '<S4>/Rate Transition' */
  int16_T values_out1[20];             /* '<S4>/Chart8' */
  int16_T search;                      /* '<S4>/Chart8' */
  uint16_T temporalCounter_i1;         /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  uint16_T Delay_DSTATE[10];           /* '<S20>/Delay' */
  volatile uint16_T RateTransition_Buffer[40];/* '<S4>/Rate Transition' */
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
  uint16_T is_active_c12_Nexonar_Navigatio;/* '<S8>/Winkelausgabe fuer Ausrichtung' */
  uint16_T is_c12_Nexonar_Navigation;  /* '<S8>/Winkelausgabe fuer Ausrichtung' */
  uint16_T is_active_c11_Nexonar_Navigatio;/* '<S8>/Quadrantenteiler' */
  uint16_T is_c11_Nexonar_Navigation;  /* '<S8>/Quadrantenteiler' */
  uint16_T is_active_c7_Nexonar_Navigation;/* '<S3>/Fahrsystem' */
  uint16_T is_c7_Nexonar_Navigation;   /* '<S3>/Fahrsystem' */
  uint16_T is_active_c8_Nexonar_Navigation;/* '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */
  uint16_T is_c8_Nexonar_Navigation;   /* '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */
  uint16_T is_active_c5_Nexonar_Navigation;/* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  uint16_T is_c5_Nexonar_Navigation;   /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  uint16_T is_Parken;                  /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  uint16_T is_Uebergabe;               /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  uint16_T is_Sammeln;                 /* '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
} D_Work_Nexonar_Navigation;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState I2CReset_Trig_ZCE;        /* '<S19>/I2C Reset' */
  ZCSigState I2CReinitialisierung_Trig_ZCE;/* '<S19>/I2C Reinitialisierung' */
} PrevZCSigStates_Nexonar_Navigat;

/* Parameters (default storage) */
struct Parameters_Nexonar_Navigation_ {
  real_T Quadrantenverschiebung_Gain;  /* Expression: 90
                                        * Referenced by: '<S8>/Quadranten- verschiebung'
                                        */
  real_T PWMWertebereich_UpperSat;     /* Expression: 100
                                        * Referenced by: '<S7>/PWM-Wertebereich'
                                        */
  real_T PWMWertebereich_LowerSat;     /* Expression: 0
                                        * Referenced by: '<S7>/PWM-Wertebereich'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S19>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 250
                                        * Referenced by: '<S19>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 1
                                        * Referenced by: '<S19>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S19>/Pulse Generator'
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
  uint16_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S20>/Delay'
                                        */
  uint16_T Delay_InitialCondition;     /* Computed Parameter: Delay_InitialCondition
                                        * Referenced by: '<S20>/Delay'
                                        */
  uint16_T RateTransition_InitialCondition;/* Computed Parameter: RateTransition_InitialCondition
                                            * Referenced by: '<S4>/Rate Transition'
                                            */
};

/* Real-time Model Data Structure */
struct tag_RTM_Nexonar_Navigation {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern Parameters_Nexonar_Navigation Nexonar_Navigation_P;

/* Block signals (default storage) */
extern BlockIO_Nexonar_Navigation Nexonar_Navigation_B;

/* Block states (default storage) */
extern D_Work_Nexonar_Navigation Nexonar_Navigation_DWork;

/* Model entry point functions */
extern void Nexonar_Navigation_initialize(void);
extern void Nexonar_Navigation_step(void);
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
 * '<S5>'   : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]'
 * '<S6>'   : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Fahrsystem'
 * '<S7>'   : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)'
 * '<S8>'   : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)'
 * '<S9>'   : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x'
 * '<S10>'  : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_y'
 * '<S11>'  : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/PWM-Vektorbetrag'
 * '<S12>'  : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler'
 * '<S13>'  : 'Nexonar_Navigation/Navigationssystem [Einstellungen moeglich]/Winkelregelungssystem (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung'
 * '<S14>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/Chart1'
 * '<S15>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/Chart2'
 * '<S16>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/Chart4'
 * '<S17>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/Chart6'
 * '<S18>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/Chart8'
 * '<S19>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)'
 * '<S20>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/Triggered Subsystem'
 * '<S21>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung'
 * '<S22>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset'
 * '<S23>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung/I2C Reinitialisierung'
 * '<S24>'  : 'Nexonar_Navigation/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset'
 */
#endif                                 /* RTW_HEADER_Nexonar_Navigation_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
