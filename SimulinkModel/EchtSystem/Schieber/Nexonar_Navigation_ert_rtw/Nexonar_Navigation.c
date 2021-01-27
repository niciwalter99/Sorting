/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Nexonar_Navigation.c
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

#include "Nexonar_Navigation.h"
#include "Nexonar_Navigation_private.h"
#define IN_Anfang_found_Schritt_uebertr (1U)
#define IN_Drehstillstand_mit_Ausrichtu (1U)
#define IN_Fahren_mit_Ausrichtungsregel (5U)
#define IN_Trigonometrische_Auswertun_o (4U)
#define IN_Trigonometrische_Auswertung_ (3U)
#define IN_Weiterleitung_bei_Drehzustan (3U)
#define N_IN_Ausrichtung_ohne_Aenderung (1U)
#define Ne_IN_Uebergabepunkt_x_Richtung (1U)
#define Ne_IN_Uebergabepunkt_y_Richtung (2U)
#define Nexo_IN_Drehen_rechts_gesteuert (3U)
#define Nexon_IN_Drehen_links_gesteuert (1U)
#define Nexon_IN_Start_Einstellung_Init (4U)
#define Nexonar_IN_x5_valid_data_found1 (6U)
#define Nexonar_Na_IN_Drehen_rechts_max (4U)
#define Nexonar_Nav_IN_Drehen_links_max (2U)
#define Nexonar_Nav_IN_Einstellung_Init (2U)
#define Nexonar_Nav_IN_Warten_Uebergabe (3U)
#define Nexonar_Navi_IN_NO_ACTIVE_CHILD (0U)
#define Nexonar_Navi_IN_Start_Warten_og (2U)
#define Nexonar_Navig_IN_Anfahrpunkt_10 (2U)
#define Nexonar_Navig_IN_Anfahrpunkt_11 (3U)
#define Nexonar_Navig_IN_Anfahrpunkt_12 (4U)
#define Nexonar_Navig_IN_Daten_einlesen (1U)
#define Nexonar_Navig_IN_Start_Warten_o (5U)
#define Nexonar_Naviga_IN_Anfahrpunkt_1 (1U)
#define Nexonar_Naviga_IN_Anfahrpunkt_2 (5U)
#define Nexonar_Naviga_IN_Anfahrpunkt_3 (6U)
#define Nexonar_Naviga_IN_Anfahrpunkt_4 (7U)
#define Nexonar_Naviga_IN_Anfahrpunkt_5 (8U)
#define Nexonar_Naviga_IN_Anfahrpunkt_6 (9U)
#define Nexonar_Naviga_IN_Anfahrpunkt_7 (10U)
#define Nexonar_Naviga_IN_Anfahrpunkt_8 (11U)
#define Nexonar_Naviga_IN_Anfahrpunkt_9 (12U)
#define Nexonar_Naviga_IN_wert_erkannt2 (4U)
#define Nexonar_Navigat_IN_Start_Warten (6U)
#define Nexonar_Navigat_IN_wert_erkannt (3U)
#define Nexonar_Navigati_IN_Wechsel_1_o (13U)
#define Nexonar_Navigati_IN_Wechsel_2_o (17U)
#define Nexonar_Navigati_IN_Wechsel_3_o (18U)
#define Nexonar_Navigatio_IN_Quadrant_a (1U)
#define Nexonar_Navigatio_IN_Quadrant_b (2U)
#define Nexonar_Navigatio_IN_Quadrant_c (3U)
#define Nexonar_Navigatio_IN_Quadrant_d (4U)
#define Nexonar_Navigatio_IN_Wechsel_10 (14U)
#define Nexonar_Navigatio_IN_Wechsel_11 (15U)
#define Nexonar_Navigatio_IN_Wechsel_12 (16U)
#define Nexonar_Navigatio_IN_x1_search1 (5U)
#define Nexonar_Navigation_IN_Ende     (1U)
#define Nexonar_Navigation_IN_Parken   (2U)
#define Nexonar_Navigation_IN_Parken_1 (1U)
#define Nexonar_Navigation_IN_Parken_2 (2U)
#define Nexonar_Navigation_IN_Parken_3 (3U)
#define Nexonar_Navigation_IN_Sammeln  (3U)
#define Nexonar_Navigation_IN_Uebergabe (5U)
#define Nexonar_Navigation_IN_Wechsel_1 (4U)
#define Nexonar_Navigation_IN_Wechsel_2 (5U)
#define Nexonar_Navigation_IN_Wechsel_3 (6U)
#define Nexonar_Navigation_IN_Wechsel_4 (19U)
#define Nexonar_Navigation_IN_Wechsel_5 (20U)
#define Nexonar_Navigation_IN_Wechsel_6 (21U)
#define Nexonar_Navigation_IN_Wechsel_7 (22U)
#define Nexonar_Navigation_IN_Wechsel_8 (23U)
#define Nexonar_Navigation_IN_Wechsel_9 (24U)
#define Nexonar_Navigation_IN_init     (2U)
#define Nexonar_Navigation_IN_x0       (2U)
#define Nexonar_Navigation_IN_x1_1     (3U)

/* user code (top of source file) */
#include "i2c_reset.c"

/* Block signals (default storage) */
BlockIO_Nexonar_Navigation Nexonar_Navigation_B;

/* Block states (default storage) */
D_Work_Nexonar_Navigation Nexonar_Navigation_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_Nexonar_Navigat Nexonar_Navigati_PrevZCSigState;

/* Real-time model */
RT_MODEL_Nexonar_Navigation Nexonar_Navigation_M_;
RT_MODEL_Nexonar_Navigation *const Nexonar_Navigation_M = &Nexonar_Navigation_M_;

/* Forward declaration for local functions */
static void Nexon_enter_atomic_wert_erkannt(const uint16_T RateTransition[20]);
static void Nexonar_Navigation_Wechsel_5(void);
static void Nexonar_Navigation_Wechsel_6(void);
static void Nexonar_Navigation_Wechsel_7(void);
static void Nexonar_Navigation_Wechsel_8(void);
static void Nexonar_Navigation_Sammeln(const real_T *RoundingFunction, const
  real_T *RoundingFunction1);
static void enter_atomic_Drehstillstand_mit(const real_T *alpha_diff_intern);
static void Nexonar_Navigation_Start_Warten(const real_T *PWMWertebereich);
static void Nexonar_Naviga_Drehen_links_max(const real_T *PWMWertebereich);

/* Hardware Interrupt Block: '<S4>/C28x Hardware Interrupt' */
void isr_int8pie2_task_fcn(void)
{
  /* Call the system: <S4>/Triggered Subsystem */
  {
    int16_T i;

    /* S-Function (c28xisr_c2000): '<S4>/C28x Hardware Interrupt' */

    /* Output and update for function-call system: '<S4>/Triggered Subsystem' */
    {
      int16_T i;

      /* S-Function (c280xi2c_rx): '<S20>/I2C Receive' */
      {
        int rx_loop= 0;

        /* mode:0 (1:master 0:slave)  Addressing mode:0 (1:10-bit 0:7-bit)
           free data mode:0 (1:enbaled 0:disabled) digital loopback mode:0 (1:enabled 0:disabled)
           bit count:0 (0:8bit) NACK mode:1 (1:enabled 0: disabled) stop condition:0 (1:enabled 0: disabled)*/
        I2caRegs.I2CMDR.all = 57376;

        {
          int_T i1;
          uint8_T *y0 = &Nexonar_Navigation_B.I2CReceive_o1[0];
          for (i1=0; i1 < 10; i1++) {
            rx_loop= 0;
            while (I2caRegs.I2CFFRX.bit.RXFFST==0 && rx_loop<10000)
              rx_loop++;
            if (rx_loop!=10000) {
              y0[i1] = I2caRegs.I2CDRR;
              Nexonar_Navigation_B.I2CReceive_o2 = I2caRegs.I2CSTR.all;/* output i2c status */
            } else
              Nexonar_Navigation_B.I2CReceive_o2 = I2caRegs.I2CSTR.all | 0x40;/* output receive data loss status */
          }
        }
      }

      for (i = 0; i < 10; i++) {
        /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn2' */
        Nexonar_Navigation_B.VectorConcatenate[i + 10] =
          Nexonar_Navigation_B.I2CReceive_o1[i];

        /* Delay: '<S20>/Delay' */
        Nexonar_Navigation_B.VectorConcatenate[i] =
          Nexonar_Navigation_DWork.Delay_DSTATE[i];

        /* Update for Delay: '<S20>/Delay' */
        Nexonar_Navigation_DWork.Delay_DSTATE[i] =
          Nexonar_Navigation_B.I2CReceive_o1[i];
      }
    }

    /* End of Outputs for S-Function (c28xisr_c2000): '<S4>/C28x Hardware Interrupt' */

    /* RateTransition: '<S4>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Nexonar_Navigation_DWork.RateTransition_Buffer[i +
        (Nexonar_Navigation_DWork.RateTransition_semaphoreTaken == 0) * 20] =
        Nexonar_Navigation_B.VectorConcatenate[i];
    }

    Nexonar_Navigation_DWork.RateTransition_ActiveBufIdx =
      (Nexonar_Navigation_DWork.RateTransition_semaphoreTaken == 0);

    /* End of RateTransition: '<S4>/Rate Transition' */
  }
}

/* Function for Chart: '<S4>/Chart8' */
static void Nexon_enter_atomic_wert_erkannt(const uint16_T RateTransition[20])
{
  /* Entry 'wert_erkannt': '<S18>:109' */
  Nexonar_Navigation_DWork.values_out1[0] = (int16_T)RateTransition[0];
  Nexonar_Navigation_DWork.values_out1[1] = (int16_T)RateTransition[1];
  Nexonar_Navigation_DWork.values_out1[2] = (int16_T)RateTransition[2];
  Nexonar_Navigation_DWork.values_out1[3] = (int16_T)RateTransition[3];
  Nexonar_Navigation_DWork.values_out1[4] = (int16_T)RateTransition[4];
  Nexonar_Navigation_DWork.values_out1[5] = (int16_T)RateTransition[5];
  Nexonar_Navigation_DWork.values_out1[6] = (int16_T)RateTransition[6];
  Nexonar_Navigation_DWork.values_out1[7] = (int16_T)RateTransition[7];
  Nexonar_Navigation_DWork.values_out1[8] = (int16_T)RateTransition[8];
  Nexonar_Navigation_DWork.values_out1[9] = (int16_T)RateTransition[9];
  Nexonar_Navigation_DWork.values_out1[10] = (int16_T)RateTransition[10];
  Nexonar_Navigation_DWork.values_out1[11] = (int16_T)RateTransition[11];
  Nexonar_Navigation_DWork.values_out1[12] = (int16_T)RateTransition[12];
  Nexonar_Navigation_DWork.values_out1[13] = (int16_T)RateTransition[13];
  Nexonar_Navigation_DWork.values_out1[14] = (int16_T)RateTransition[14];
  Nexonar_Navigation_DWork.values_out1[15] = (int16_T)RateTransition[15];
  Nexonar_Navigation_DWork.values_out1[16] = (int16_T)RateTransition[16];
  Nexonar_Navigation_DWork.values_out1[17] = (int16_T)RateTransition[17];
  Nexonar_Navigation_DWork.values_out1[18] = (int16_T)RateTransition[18];
  Nexonar_Navigation_DWork.values_out1[19] = (int16_T)RateTransition[19];
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Function for Chart: '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
static void Nexonar_Navigation_Wechsel_5(void)
{
  /* During 'Wechsel_5': '<S1>:617' */
  /* Transition: '<S1>:594' */
  Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_6;

  /* Entry 'Anfahrpunkt_6': '<S1>:618' */
  Nexonar_Navigation_B.x_soll = 600.0;
  Nexonar_Navigation_B.y_soll = 850.0;
}

/* Function for Chart: '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
static void Nexonar_Navigation_Wechsel_6(void)
{
  /* During 'Wechsel_6': '<S1>:619' */
  /* Transition: '<S1>:596' */
  Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_7;

  /* Entry 'Anfahrpunkt_7': '<S1>:620' */
  Nexonar_Navigation_B.x_soll = 500.0;
  Nexonar_Navigation_B.y_soll = 850.0;
}

/* Function for Chart: '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
static void Nexonar_Navigation_Wechsel_7(void)
{
  /* During 'Wechsel_7': '<S1>:621' */
  /* Transition: '<S1>:598' */
  Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_8;

  /* Entry 'Anfahrpunkt_8': '<S1>:622' */
  Nexonar_Navigation_B.x_soll = 325.0;
  Nexonar_Navigation_B.y_soll = 800.0;
}

/* Function for Chart: '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
static void Nexonar_Navigation_Wechsel_8(void)
{
  /* During 'Wechsel_8': '<S1>:623' */
  /* Transition: '<S1>:600' */
  Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_9;

  /* Entry 'Anfahrpunkt_9': '<S1>:624' */
  Nexonar_Navigation_B.x_soll = 240.0;
  Nexonar_Navigation_B.y_soll = 725.0;
}

/* Function for Chart: '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
static void Nexonar_Navigation_Sammeln(const real_T *RoundingFunction, const
  real_T *RoundingFunction1)
{
  /* During 'Sammeln': '<S1>:583' */
  if (Nexonar_Navigation_DWork.Counter == 12.0) {
    /* Transition: '<S1>:645' */
    Nexonar_Navigation_B.Gang = 1.0;
    Nexonar_Navigation_DWork.x_least = Nexonar_Navigation_B.x_soll;

    /* Exit Internal 'Sammeln': '<S1>:583' */
    Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navi_IN_NO_ACTIVE_CHILD;
    Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation =
      Nexonar_Navigation_IN_Uebergabe;

    /* Entry Internal 'Uebergabe': '<S1>:632' */
    /* Transition: '<S1>:633' */
    Nexonar_Navigation_DWork.Counter = 0.0;
    Nexonar_Navigation_DWork.is_Uebergabe = Ne_IN_Uebergabepunkt_x_Richtung;

    /* Entry 'Uebergabepunkt_x_Richtung': '<S1>:638' */
    Nexonar_Navigation_B.x_soll = 1410.0;
  } else {
    switch (Nexonar_Navigation_DWork.is_Sammeln) {
     case Nexonar_Naviga_IN_Anfahrpunkt_1:
      /* During 'Anfahrpunkt_1': '<S1>:608' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:585' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigati_IN_Wechsel_1_o;

        /* Entry 'Wechsel_1': '<S1>:609' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Navig_IN_Anfahrpunkt_10:
      /* During 'Anfahrpunkt_10': '<S1>:626' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:603' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigatio_IN_Wechsel_10;

        /* Entry 'Wechsel_10': '<S1>:627' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Navig_IN_Anfahrpunkt_11:
      /* During 'Anfahrpunkt_11': '<S1>:628' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:605' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigatio_IN_Wechsel_11;

        /* Entry 'Wechsel_11': '<S1>:629' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Navig_IN_Anfahrpunkt_12:
      /* During 'Anfahrpunkt_12': '<S1>:630' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:607' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigatio_IN_Wechsel_12;

        /* Entry 'Wechsel_12': '<S1>:631' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_2:
      /* During 'Anfahrpunkt_2': '<S1>:610' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:587' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigati_IN_Wechsel_2_o;

        /* Entry 'Wechsel_2': '<S1>:611' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_3:
      /* During 'Anfahrpunkt_3': '<S1>:612' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:589' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigati_IN_Wechsel_3_o;

        /* Entry 'Wechsel_3': '<S1>:613' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_4:
      /* During 'Anfahrpunkt_4': '<S1>:614' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:591' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_4;

        /* Entry 'Wechsel_4': '<S1>:615' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_5:
      /* During 'Anfahrpunkt_5': '<S1>:616' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:593' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_5;

        /* Entry 'Wechsel_5': '<S1>:617' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_6:
      /* During 'Anfahrpunkt_6': '<S1>:618' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:595' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_6;

        /* Entry 'Wechsel_6': '<S1>:619' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_7:
      /* During 'Anfahrpunkt_7': '<S1>:620' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:597' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_7;

        /* Entry 'Wechsel_7': '<S1>:621' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_8:
      /* During 'Anfahrpunkt_8': '<S1>:622' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:599' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_8;

        /* Entry 'Wechsel_8': '<S1>:623' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_9:
      /* During 'Anfahrpunkt_9': '<S1>:624' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:601' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_9;

        /* Entry 'Wechsel_9': '<S1>:625' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Navigati_IN_Wechsel_1_o:
      /* During 'Wechsel_1': '<S1>:609' */
      /* Transition: '<S1>:586' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_2;

      /* Entry 'Anfahrpunkt_2': '<S1>:610' */
      Nexonar_Navigation_B.x_soll = 1200.0;
      Nexonar_Navigation_B.y_soll = 40.0;
      break;

     case Nexonar_Navigatio_IN_Wechsel_10:
      /* During 'Wechsel_10': '<S1>:627' */
      /* Transition: '<S1>:604' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navig_IN_Anfahrpunkt_11;

      /* Entry 'Anfahrpunkt_11': '<S1>:628' */
      Nexonar_Navigation_B.x_soll = 1200.0;
      Nexonar_Navigation_B.y_soll = 50.0;
      break;

     case Nexonar_Navigatio_IN_Wechsel_11:
      /* During 'Wechsel_11': '<S1>:629' */
      /* Transition: '<S1>:606' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navig_IN_Anfahrpunkt_12;

      /* Entry 'Anfahrpunkt_12': '<S1>:630' */
      Nexonar_Navigation_B.x_soll = 1420.0;
      Nexonar_Navigation_B.y_soll = -100.0;
      break;

     case Nexonar_Navigatio_IN_Wechsel_12:
      /* During 'Wechsel_12': '<S1>:631' */
      break;

     case Nexonar_Navigati_IN_Wechsel_2_o:
      /* During 'Wechsel_2': '<S1>:611' */
      /* Transition: '<S1>:588' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_3;

      /* Entry 'Anfahrpunkt_3': '<S1>:612' */
      Nexonar_Navigation_B.x_soll = 800.0;
      Nexonar_Navigation_B.y_soll = 400.0;
      break;

     case Nexonar_Navigati_IN_Wechsel_3_o:
      /* During 'Wechsel_3': '<S1>:613' */
      /* Transition: '<S1>:590' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_4;

      /* Entry 'Anfahrpunkt_4': '<S1>:614' */
      Nexonar_Navigation_B.x_soll = 975.0;
      Nexonar_Navigation_B.y_soll = 650.0;
      break;

     case Nexonar_Navigation_IN_Wechsel_4:
      /* During 'Wechsel_4': '<S1>:615' */
      /* Transition: '<S1>:592' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_5;

      /* Entry 'Anfahrpunkt_5': '<S1>:616' */
      Nexonar_Navigation_B.x_soll = 900.0;
      Nexonar_Navigation_B.y_soll = 800.0;
      break;

     case Nexonar_Navigation_IN_Wechsel_5:
      Nexonar_Navigation_Wechsel_5();
      break;

     case Nexonar_Navigation_IN_Wechsel_6:
      Nexonar_Navigation_Wechsel_6();
      break;

     case Nexonar_Navigation_IN_Wechsel_7:
      Nexonar_Navigation_Wechsel_7();
      break;

     case Nexonar_Navigation_IN_Wechsel_8:
      Nexonar_Navigation_Wechsel_8();
      break;

     default:
      /* During 'Wechsel_9': '<S1>:625' */
      /* Transition: '<S1>:602' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navig_IN_Anfahrpunkt_10;

      /* Entry 'Anfahrpunkt_10': '<S1>:626' */
      Nexonar_Navigation_B.x_soll = 400.0;
      Nexonar_Navigation_B.y_soll = 50.0;
      break;
    }
  }
}

/* Function for Chart: '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */
static void enter_atomic_Drehstillstand_mit(const real_T *alpha_diff_intern)
{
  real_T tmp;

  /* Entry 'Drehstillstand_mit_Ausrichtungsregelung': '<S5>:26' */
  Nexonar_Navigation_B.alpha_diff_opt = 0.0;
  tmp = fabs(*alpha_diff_intern);
  if (tmp < 5.0) {
    Nexonar_Navigation_B.pwm_mindern[0] = rt_roundd_snf(tmp);
  } else if (tmp < 15.0) {
    Nexonar_Navigation_B.pwm_mindern[0] = floor((tmp - 5.0) / 2.0) + 5.0;
  } else {
    Nexonar_Navigation_B.pwm_mindern[0] = 10.0;
  }

  if (*alpha_diff_intern < 0.0) {
    Nexonar_Navigation_B.pwm_mindern[1] = 0.0;
  } else if (*alpha_diff_intern > 0.0) {
    Nexonar_Navigation_B.pwm_mindern[1] = 1.0;
  } else {
    Nexonar_Navigation_B.pwm_mindern[1] = 2.0;
  }
}

/* Function for Chart: '<S3>/Fahrsystem' */
static void Nexonar_Navigation_Start_Warten(const real_T *PWMWertebereich)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Start_Warten': '<S6>:92' */
  /* Transition: '<S6>:93' */
  l_mindern = fabs(Nexonar_Navigation_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (*PWMWertebereich > 0.0)) {
    /* Transition: '<S6>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S6>:21' */
      if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S6>:45' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexonar_Nav_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S6>:8' */
        Nexonar_Navigation_B.pwm_out_l = 100.0;
        Nexonar_Navigation_B.pwm_out_r = 100.0;
        Nexonar_Navigation_B.r_l_out_l = 0.0;
        Nexonar_Navigation_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S6>:57' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexonar_Na_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S6>:9' */
        Nexonar_Navigation_B.pwm_out_l = 100.0;
        Nexonar_Navigation_B.pwm_out_r = 100.0;
        Nexonar_Navigation_B.r_l_out_l = 1.0;
        Nexonar_Navigation_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S6>:53' */
      if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S6>:54' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexon_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S6>:43' */
        Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
          (Nexonar_Navigation_B.alpha_diff_opt);
        Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
          (Nexonar_Navigation_B.alpha_diff_opt);
        Nexonar_Navigation_B.r_l_out_l = 0.0;
        Nexonar_Navigation_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S6>:55' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexo_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S6>:51' */
        Nexonar_Navigation_B.pwm_out_l = 59.0 + l_mindern;
        Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
          (Nexonar_Navigation_B.alpha_diff_opt);
        Nexonar_Navigation_B.r_l_out_l = 1.0;
        Nexonar_Navigation_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S6>:82' */
    if (Nexonar_Navigation_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S6>:85' */
      l_mindern = 1.0 - Nexonar_Navigation_B.Gang;
      r_mindern = Nexonar_Navigation_B.Gang;
    } else if (Nexonar_Navigation_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S6>:86' */
      l_mindern = Nexonar_Navigation_B.Gang;
      r_mindern = 1.0 - Nexonar_Navigation_B.Gang;
    } else {
      /* Transition: '<S6>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
      IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S6>:94' */
    a = *PWMWertebereich / 100.0;
    Nexonar_Navigation_B.pwm_out_l = *PWMWertebereich - rt_roundd_snf(a * a *
      Nexonar_Navigation_B.pwm_mindern[0]) * l_mindern;
    l_mindern = *PWMWertebereich / 100.0;
    Nexonar_Navigation_B.pwm_out_r = *PWMWertebereich - rt_roundd_snf(l_mindern *
      l_mindern * Nexonar_Navigation_B.pwm_mindern[0]) * r_mindern;
    Nexonar_Navigation_B.r_l_out_l = 1.0 - Nexonar_Navigation_B.Gang;
    Nexonar_Navigation_B.r_l_out_r = 1.0 - Nexonar_Navigation_B.Gang;
  }
}

/* Function for Chart: '<S3>/Fahrsystem' */
static void Nexonar_Naviga_Drehen_links_max(const real_T *PWMWertebereich)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Drehen_links_max': '<S6>:8' */
  /* Transition: '<S6>:60' */
  /* Transition: '<S6>:75' */
  l_mindern = fabs(Nexonar_Navigation_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (*PWMWertebereich > 0.0)) {
    /* Transition: '<S6>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S6>:21' */
      if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S6>:45' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexonar_Nav_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S6>:8' */
        Nexonar_Navigation_B.pwm_out_l = 100.0;
        Nexonar_Navigation_B.pwm_out_r = 100.0;
        Nexonar_Navigation_B.r_l_out_l = 0.0;
        Nexonar_Navigation_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S6>:57' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexonar_Na_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S6>:9' */
        Nexonar_Navigation_B.pwm_out_l = 100.0;
        Nexonar_Navigation_B.pwm_out_r = 100.0;
        Nexonar_Navigation_B.r_l_out_l = 1.0;
        Nexonar_Navigation_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S6>:53' */
      if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S6>:54' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexon_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S6>:43' */
        Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
          (Nexonar_Navigation_B.alpha_diff_opt);
        Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
          (Nexonar_Navigation_B.alpha_diff_opt);
        Nexonar_Navigation_B.r_l_out_l = 0.0;
        Nexonar_Navigation_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S6>:55' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexo_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S6>:51' */
        Nexonar_Navigation_B.pwm_out_l = 59.0 + l_mindern;
        Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
          (Nexonar_Navigation_B.alpha_diff_opt);
        Nexonar_Navigation_B.r_l_out_l = 1.0;
        Nexonar_Navigation_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S6>:82' */
    if (Nexonar_Navigation_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S6>:85' */
      l_mindern = 1.0 - Nexonar_Navigation_B.Gang;
      r_mindern = Nexonar_Navigation_B.Gang;
    } else if (Nexonar_Navigation_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S6>:86' */
      l_mindern = Nexonar_Navigation_B.Gang;
      r_mindern = 1.0 - Nexonar_Navigation_B.Gang;
    } else {
      /* Transition: '<S6>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
      IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S6>:94' */
    a = *PWMWertebereich / 100.0;
    Nexonar_Navigation_B.pwm_out_l = *PWMWertebereich - rt_roundd_snf(a * a *
      Nexonar_Navigation_B.pwm_mindern[0]) * l_mindern;
    l_mindern = *PWMWertebereich / 100.0;
    Nexonar_Navigation_B.pwm_out_r = *PWMWertebereich - rt_roundd_snf(l_mindern *
      l_mindern * Nexonar_Navigation_B.pwm_mindern[0]) * r_mindern;
    Nexonar_Navigation_B.r_l_out_l = 1.0 - Nexonar_Navigation_B.Gang;
    Nexonar_Navigation_B.r_l_out_r = 1.0 - Nexonar_Navigation_B.Gang;
  }
}

/* Model step function */
void Nexonar_Navigation_step(void)
{
  int32_T bitIdx;
  uint32_T u;
  int16_T j;
  int32_T intVal;
  real_T a;
  real_T rtb_RoundingFunction2;
  ZCEventType zcEvent;
  uint16_T rtb_IntegertoBitConverter2[8];
  uint16_T rtb_IntegertoBitConverter3[8];
  uint16_T rtb_IntegertoBitConverter1[8];
  uint16_T rtb_IntegertoBitConverter4[8];
  uint16_T rtb_IntegertoBitConverter5[8];
  uint16_T rtb_IntegertoBitConverter6[8];
  real_T RoundingFunction;
  real_T RoundingFunction1;
  uint16_T RateTransition[20];
  int16_T i;

  /* RateTransition: '<S4>/Rate Transition' */
  Nexonar_Navigation_DWork.RateTransition_semaphoreTaken =
    Nexonar_Navigation_DWork.RateTransition_ActiveBufIdx;
  j = Nexonar_Navigation_DWork.RateTransition_semaphoreTaken * 20;
  for (i = 0; i < 20; i++) {
    RateTransition[i] = Nexonar_Navigation_DWork.RateTransition_Buffer[i + j];
  }

  /* End of RateTransition: '<S4>/Rate Transition' */

  /* Chart: '<S4>/Chart8' */
  /* Gateway: Nexonar-Positionsbestimmung/Chart8 */
  /* During: Nexonar-Positionsbestimmung/Chart8 */
  if (Nexonar_Navigation_DWork.is_active_c17_Nexonar_Navigatio == 0U) {
    /* Entry: Nexonar-Positionsbestimmung/Chart8 */
    Nexonar_Navigation_DWork.is_active_c17_Nexonar_Navigatio = 1U;

    /* Entry Internal: Nexonar-Positionsbestimmung/Chart8 */
    /* Transition: '<S18>:3' */
    Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
      Nexonar_Navigation_IN_init;

    /* Entry 'init': '<S18>:2' */
    Nexonar_Navigation_DWork.values_out1[0] = 0;
    Nexonar_Navigation_DWork.values_out1[1] = 0;
    Nexonar_Navigation_DWork.values_out1[2] = 0;
    Nexonar_Navigation_DWork.values_out1[3] = 0;
    Nexonar_Navigation_DWork.values_out1[4] = 0;
    Nexonar_Navigation_DWork.values_out1[5] = 0;
    Nexonar_Navigation_DWork.values_out1[6] = 0;
    Nexonar_Navigation_DWork.values_out1[7] = 0;
    Nexonar_Navigation_DWork.values_out1[8] = 0;
    Nexonar_Navigation_DWork.values_out1[9] = 0;
    Nexonar_Navigation_DWork.values_out1[10] = 0;
    Nexonar_Navigation_DWork.values_out1[11] = 0;
    Nexonar_Navigation_DWork.values_out1[12] = 0;
    Nexonar_Navigation_DWork.values_out1[13] = 0;
    Nexonar_Navigation_DWork.values_out1[14] = 0;
    Nexonar_Navigation_DWork.values_out1[15] = 0;
    Nexonar_Navigation_DWork.values_out1[16] = 0;
    Nexonar_Navigation_DWork.values_out1[17] = 0;
    Nexonar_Navigation_DWork.values_out1[18] = 0;
    Nexonar_Navigation_DWork.values_out1[19] = 0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation) {
     case IN_Anfang_found_Schritt_uebertr:
      /* During 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S18>:126' */
      if ((c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
            (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
              (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                  (Nexonar_Navigation_DWork.values_out1[Nexonar_Navigation_DWork.search],
                   Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.search, 1)]),
                  Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Nexonar_Navigation_DWork.search, 2)]),
                 Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Nexonar_Navigation_DWork.search, 3)]),
                Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Nexonar_Navigation_DWork.search, 4)]),
               Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Nexonar_Navigation_DWork.search, 5)]),
              Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Nexonar_Navigation_DWork.search, 6)]),
             Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Nexonar_Navigation_DWork.search, 7)]),
            Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
            (Nexonar_Navigation_DWork.search, 8)]) ==
           Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Nexonar_Navigation_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.values_out1[Nexonar_Navigation_DWork.search],
                    Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Nexonar_Navigation_DWork.search, 1)]),
                   Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.search, 2)]),
                  Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Nexonar_Navigation_DWork.search, 3)]),
                 Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Nexonar_Navigation_DWork.search, 4)]),
                Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Nexonar_Navigation_DWork.search, 5)]),
               Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Nexonar_Navigation_DWork.search, 6)]),
              Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Nexonar_Navigation_DWork.search, 7)]),
             Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Nexonar_Navigation_DWork.search, 8)]), 256) ==
           Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Nexonar_Navigation_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.values_out1[Nexonar_Navigation_DWork.search],
                    Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Nexonar_Navigation_DWork.search, 1)]),
                   Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.search, 2)]),
                  Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Nexonar_Navigation_DWork.search, 3)]),
                 Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Nexonar_Navigation_DWork.search, 4)]),
                Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Nexonar_Navigation_DWork.search, 5)]),
               Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Nexonar_Navigation_DWork.search, 6)]),
              Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Nexonar_Navigation_DWork.search, 7)]),
             Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Nexonar_Navigation_DWork.search, 8)]), 512) ==
           Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Nexonar_Navigation_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.values_out1[Nexonar_Navigation_DWork.search],
                    Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Nexonar_Navigation_DWork.search, 1)]),
                   Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.search, 2)]),
                  Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Nexonar_Navigation_DWork.search, 3)]),
                 Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Nexonar_Navigation_DWork.search, 4)]),
                Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Nexonar_Navigation_DWork.search, 5)]),
               Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Nexonar_Navigation_DWork.search, 6)]),
              Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Nexonar_Navigation_DWork.search, 7)]),
             Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Nexonar_Navigation_DWork.search, 8)]), 1536) ==
           Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Nexonar_Navigation_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.values_out1[Nexonar_Navigation_DWork.search],
                    Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Nexonar_Navigation_DWork.search, 1)]),
                   Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.search, 2)]),
                  Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Nexonar_Navigation_DWork.search, 3)]),
                 Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Nexonar_Navigation_DWork.search, 4)]),
                Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Nexonar_Navigation_DWork.search, 5)]),
               Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Nexonar_Navigation_DWork.search, 6)]),
              Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Nexonar_Navigation_DWork.search, 7)]),
             Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Nexonar_Navigation_DWork.search, 8)]), 1280) ==
           Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Nexonar_Navigation_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.values_out1[Nexonar_Navigation_DWork.search],
                    Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Nexonar_Navigation_DWork.search, 1)]),
                   Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.search, 2)]),
                  Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Nexonar_Navigation_DWork.search, 3)]),
                 Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Nexonar_Navigation_DWork.search, 4)]),
                Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Nexonar_Navigation_DWork.search, 5)]),
               Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Nexonar_Navigation_DWork.search, 6)]),
              Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Nexonar_Navigation_DWork.search, 7)]),
             Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Nexonar_Navigation_DWork.search, 8)]), 1024) ==
           Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Nexonar_Navigation_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.values_out1[Nexonar_Navigation_DWork.search],
                    Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Nexonar_Navigation_DWork.search, 1)]),
                   Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.search, 2)]),
                  Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Nexonar_Navigation_DWork.search, 3)]),
                 Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Nexonar_Navigation_DWork.search, 4)]),
                Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Nexonar_Navigation_DWork.search, 5)]),
               Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Nexonar_Navigation_DWork.search, 6)]),
              Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Nexonar_Navigation_DWork.search, 7)]),
             Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Nexonar_Navigation_DWork.search, 8)]), 768) ==
           Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Nexonar_Navigation_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.values_out1[Nexonar_Navigation_DWork.search],
                    Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Nexonar_Navigation_DWork.search, 1)]),
                   Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Nexonar_Navigation_DWork.search, 2)]),
                  Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Nexonar_Navigation_DWork.search, 3)]),
                 Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Nexonar_Navigation_DWork.search, 4)]),
                Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Nexonar_Navigation_DWork.search, 5)]),
               Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Nexonar_Navigation_DWork.search, 6)]),
              Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Nexonar_Navigation_DWork.search, 7)]),
             Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Nexonar_Navigation_DWork.search, 8)]), 1792) ==
           Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Nexonar_Navigation_DWork.search, 9)])) {
        /* Transition: '<S18>:144' */
        /* Transition: '<S18>:145' */
        /* Transition: '<S18>:146' */
        /* Transition: '<S18>:151' */
        /* Transition: '<S18>:150' */
        /* Transition: '<S18>:149' */
        /* Transition: '<S18>:147' */
        /* Transition: '<S18>:156' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          Nexonar_IN_x5_valid_data_found1;

        /* Entry 'x5_valid_data_found1': '<S18>:148' */
        Nexonar_Navigation_B.valid_values1 =
          Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Nexonar_Navigation_DWork.search, 1)];
        Nexonar_Navigation_B.valid_values2 =
          Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Nexonar_Navigation_DWork.search, 2)];
        Nexonar_Navigation_B.valid_values3 =
          Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Nexonar_Navigation_DWork.search, 3)];
        Nexonar_Navigation_B.valid_values4 =
          Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Nexonar_Navigation_DWork.search, 4)];
        Nexonar_Navigation_B.valid_values5 =
          Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Nexonar_Navigation_DWork.search, 5)];
        Nexonar_Navigation_B.valid_values6 =
          Nexonar_Navigation_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Nexonar_Navigation_DWork.search, 6)];
        Nexonar_Navigation_DWork.zaehler = c28x_add_s32_s32_s32_sat
          (Nexonar_Navigation_DWork.zaehler, 1L);
      } else {
        /* Transition: '<S18>:135' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          Nexonar_Navigatio_IN_x1_search1;

        /* Entry 'x1_search1': '<S18>:125' */
        Nexonar_Navigation_DWork.search = c28x_add_s16_s16_s16_sat
          (Nexonar_Navigation_DWork.search, 1);
      }
      break;

     case Nexonar_Navigation_IN_init:
      /* During 'init': '<S18>:2' */
      /* Transition: '<S18>:112' */
      Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
        Nexonar_Navigat_IN_wert_erkannt;
      Nexon_enter_atomic_wert_erkannt(RateTransition);
      break;

     case Nexonar_Navigat_IN_wert_erkannt:
      /* During 'wert_erkannt': '<S18>:109' */
      /* Transition: '<S18>:116' */
      Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
        Nexonar_Naviga_IN_wert_erkannt2;

      /* Entry 'wert_erkannt2': '<S18>:115' */
      Nexonar_Navigation_DWork.search = 0;
      Nexonar_Navigation_DWork.counter = c28x_add_s32_s32_s32_sat
        (Nexonar_Navigation_DWork.counter, 1L);
      break;

     case Nexonar_Naviga_IN_wert_erkannt2:
      /* During 'wert_erkannt2': '<S18>:115' */
      if (Nexonar_Navigation_DWork.values_out1[Nexonar_Navigation_DWork.search] ==
          88) {
        /* Transition: '<S18>:127' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S18>:126' */
        Nexonar_Navigation_DWork.x_found = c28x_add_s32_s32_s32_sat
          (Nexonar_Navigation_DWork.x_found, 1L);
      } else {
        /* Transition: '<S18>:128' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          Nexonar_Navigatio_IN_x1_search1;

        /* Entry 'x1_search1': '<S18>:125' */
        Nexonar_Navigation_DWork.search = c28x_add_s16_s16_s16_sat
          (Nexonar_Navigation_DWork.search, 1);
      }
      break;

     case Nexonar_Navigatio_IN_x1_search1:
      /* During 'x1_search1': '<S18>:125' */
      if (Nexonar_Navigation_DWork.values_out1[Nexonar_Navigation_DWork.search] ==
          88) {
        /* Transition: '<S18>:129' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S18>:126' */
        Nexonar_Navigation_DWork.x_found = c28x_add_s32_s32_s32_sat
          (Nexonar_Navigation_DWork.x_found, 1L);
      } else if (Nexonar_Navigation_DWork.search < 19) {
        /* Transition: '<S18>:130' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          Nexonar_Navigatio_IN_x1_search1;

        /* Entry 'x1_search1': '<S18>:125' */
        Nexonar_Navigation_DWork.search = c28x_add_s16_s16_s16_sat
          (Nexonar_Navigation_DWork.search, 1);
      } else {
        /* Transition: '<S18>:133' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          Nexonar_Navigat_IN_wert_erkannt;
        Nexon_enter_atomic_wert_erkannt(RateTransition);
      }
      break;

     default:
      /* During 'x5_valid_data_found1': '<S18>:148' */
      /* Transition: '<S18>:152' */
      Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
        Nexonar_Navigat_IN_wert_erkannt;
      Nexon_enter_atomic_wert_erkannt(RateTransition);
      break;
    }
  }

  /* End of Chart: '<S4>/Chart8' */

  /* S-Function (scominttobit): '<S4>/Integer to Bit Converter2' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Nexonar_Navigation_B.valid_values1;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter2[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S4>/Integer to Bit Converter2' */

  /* S-Function (scominttobit): '<S4>/Integer to Bit Converter3' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Nexonar_Navigation_B.valid_values2;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter3[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S4>/Integer to Bit Converter3' */

  /* Chart: '<S4>/Chart6' */
  /* Gateway: Nexonar-Positionsbestimmung/Chart6 */
  /* During: Nexonar-Positionsbestimmung/Chart6 */
  if (Nexonar_Navigation_DWork.is_active_c16_Nexonar_Navigatio == 0U) {
    /* Entry: Nexonar-Positionsbestimmung/Chart6 */
    Nexonar_Navigation_DWork.is_active_c16_Nexonar_Navigatio = 1U;

    /* Entry Internal: Nexonar-Positionsbestimmung/Chart6 */
    /* Transition: '<S17>:3' */
    Nexonar_Navigation_DWork.is_c16_Nexonar_Navigation =
      Nexonar_Navigation_IN_x0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c16_Nexonar_Navigation) {
     case Nexonar_Navig_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S17>:17' */
      /* Transition: '<S17>:24' */
      Nexonar_Navigation_DWork.is_c16_Nexonar_Navigation =
        Nexonar_Navigation_IN_x1_1;

      /* Entry 'x1_1': '<S17>:26' */
      Nexonar_Navigation_B.int16x_bin[0] = rtb_IntegertoBitConverter2[0];
      Nexonar_Navigation_B.int16x_bin[1] = rtb_IntegertoBitConverter2[1];
      Nexonar_Navigation_B.int16x_bin[2] = rtb_IntegertoBitConverter2[2];
      Nexonar_Navigation_B.int16x_bin[3] = rtb_IntegertoBitConverter2[3];
      Nexonar_Navigation_B.int16x_bin[4] = rtb_IntegertoBitConverter2[4];
      Nexonar_Navigation_B.int16x_bin[5] = rtb_IntegertoBitConverter2[5];
      Nexonar_Navigation_B.int16x_bin[6] = rtb_IntegertoBitConverter2[6];
      Nexonar_Navigation_B.int16x_bin[7] = rtb_IntegertoBitConverter2[7];
      Nexonar_Navigation_B.int16x_bin[8] = rtb_IntegertoBitConverter3[0];
      Nexonar_Navigation_B.int16x_bin[9] = rtb_IntegertoBitConverter3[1];
      Nexonar_Navigation_B.int16x_bin[10] = rtb_IntegertoBitConverter3[2];
      Nexonar_Navigation_B.int16x_bin[11] = rtb_IntegertoBitConverter3[3];
      Nexonar_Navigation_B.int16x_bin[12] = rtb_IntegertoBitConverter3[4];
      Nexonar_Navigation_B.int16x_bin[13] = rtb_IntegertoBitConverter3[5];
      Nexonar_Navigation_B.int16x_bin[14] = rtb_IntegertoBitConverter3[6];
      Nexonar_Navigation_B.int16x_bin[15] = rtb_IntegertoBitConverter3[7];
      break;

     case Nexonar_Navigation_IN_x0:
      /* During 'x0': '<S17>:2' */
      /* Transition: '<S17>:7' */
      Nexonar_Navigation_DWork.is_c16_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S17>:26' */
      /* Transition: '<S17>:25' */
      Nexonar_Navigation_DWork.is_c16_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S4>/Chart6' */

  /* S-Function (scominttobit): '<S4>/Bit to Integer Converter' */
  /* Bit to Integer Conversion */
  bitIdx = 0L;
  intVal = 0L;
  for (j = 0; j < 16; j++) {
    /* Input bit order is MSB first */
    intVal <<= 1UL;
    intVal |= (int32_T)(real32_T)floor(Nexonar_Navigation_B.int16x_bin[bitIdx]);
    if ((j == 0) && (intVal != 0L)) {
      /* Output Integer values are signed, do sign extension */
      intVal = -1L;
    }

    bitIdx++;
  }

  /* Rounding: '<S4>/Rounding Function' incorporates:
   *  Gain: '<S4>/x in mm'
   *  S-Function (scominttobit): '<S4>/Bit to Integer Converter'
   */
  RoundingFunction = rt_roundd_snf((real_T)Nexonar_Navigation_P.xinmm_Gain *
    (real32_T)intVal);

  /* S-Function (scominttobit): '<S4>/Integer to Bit Converter1' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Nexonar_Navigation_B.valid_values3;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter1[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S4>/Integer to Bit Converter1' */

  /* S-Function (scominttobit): '<S4>/Integer to Bit Converter4' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Nexonar_Navigation_B.valid_values4;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter4[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S4>/Integer to Bit Converter4' */

  /* Chart: '<S4>/Chart2' */
  /* Gateway: Nexonar-Positionsbestimmung/Chart2 */
  /* During: Nexonar-Positionsbestimmung/Chart2 */
  if (Nexonar_Navigation_DWork.is_active_c13_Nexonar_Navigatio == 0U) {
    /* Entry: Nexonar-Positionsbestimmung/Chart2 */
    Nexonar_Navigation_DWork.is_active_c13_Nexonar_Navigatio = 1U;

    /* Entry Internal: Nexonar-Positionsbestimmung/Chart2 */
    /* Transition: '<S15>:3' */
    Nexonar_Navigation_DWork.is_c13_Nexonar_Navigation =
      Nexonar_Navigation_IN_x0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c13_Nexonar_Navigation) {
     case Nexonar_Navig_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S15>:17' */
      /* Transition: '<S15>:24' */
      Nexonar_Navigation_DWork.is_c13_Nexonar_Navigation =
        Nexonar_Navigation_IN_x1_1;

      /* Entry 'x1_1': '<S15>:26' */
      Nexonar_Navigation_B.int16y_bin[0] = rtb_IntegertoBitConverter1[0];
      Nexonar_Navigation_B.int16y_bin[1] = rtb_IntegertoBitConverter1[1];
      Nexonar_Navigation_B.int16y_bin[2] = rtb_IntegertoBitConverter1[2];
      Nexonar_Navigation_B.int16y_bin[3] = rtb_IntegertoBitConverter1[3];
      Nexonar_Navigation_B.int16y_bin[4] = rtb_IntegertoBitConverter1[4];
      Nexonar_Navigation_B.int16y_bin[5] = rtb_IntegertoBitConverter1[5];
      Nexonar_Navigation_B.int16y_bin[6] = rtb_IntegertoBitConverter1[6];
      Nexonar_Navigation_B.int16y_bin[7] = rtb_IntegertoBitConverter1[7];
      Nexonar_Navigation_B.int16y_bin[8] = rtb_IntegertoBitConverter4[0];
      Nexonar_Navigation_B.int16y_bin[9] = rtb_IntegertoBitConverter4[1];
      Nexonar_Navigation_B.int16y_bin[10] = rtb_IntegertoBitConverter4[2];
      Nexonar_Navigation_B.int16y_bin[11] = rtb_IntegertoBitConverter4[3];
      Nexonar_Navigation_B.int16y_bin[12] = rtb_IntegertoBitConverter4[4];
      Nexonar_Navigation_B.int16y_bin[13] = rtb_IntegertoBitConverter4[5];
      Nexonar_Navigation_B.int16y_bin[14] = rtb_IntegertoBitConverter4[6];
      Nexonar_Navigation_B.int16y_bin[15] = rtb_IntegertoBitConverter4[7];
      break;

     case Nexonar_Navigation_IN_x0:
      /* During 'x0': '<S15>:2' */
      /* Transition: '<S15>:7' */
      Nexonar_Navigation_DWork.is_c13_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S15>:26' */
      /* Transition: '<S15>:25' */
      Nexonar_Navigation_DWork.is_c13_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S4>/Chart2' */

  /* S-Function (scominttobit): '<S4>/Bit to Integer Converter1' */
  /* Bit to Integer Conversion */
  bitIdx = 0L;
  intVal = 0L;
  for (j = 0; j < 16; j++) {
    /* Input bit order is MSB first */
    intVal <<= 1UL;
    intVal |= (int32_T)(real32_T)floor(Nexonar_Navigation_B.int16y_bin[bitIdx]);
    if ((j == 0) && (intVal != 0L)) {
      /* Output Integer values are signed, do sign extension */
      intVal = -1L;
    }

    bitIdx++;
  }

  /* Rounding: '<S4>/Rounding Function1' incorporates:
   *  Gain: '<S4>/y in mm'
   *  S-Function (scominttobit): '<S4>/Bit to Integer Converter1'
   */
  RoundingFunction1 = rt_roundd_snf((real_T)Nexonar_Navigation_P.yinmm_Gain *
    (real32_T)intVal);

  /* S-Function (scominttobit): '<S4>/Integer to Bit Converter5' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Nexonar_Navigation_B.valid_values5;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter5[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S4>/Integer to Bit Converter5' */

  /* S-Function (scominttobit): '<S4>/Integer to Bit Converter6' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Nexonar_Navigation_B.valid_values6;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter6[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S4>/Integer to Bit Converter6' */

  /* Chart: '<S4>/Chart4' */
  /* Gateway: Nexonar-Positionsbestimmung/Chart4 */
  /* During: Nexonar-Positionsbestimmung/Chart4 */
  if (Nexonar_Navigation_DWork.is_active_c14_Nexonar_Navigatio == 0U) {
    /* Entry: Nexonar-Positionsbestimmung/Chart4 */
    Nexonar_Navigation_DWork.is_active_c14_Nexonar_Navigatio = 1U;

    /* Entry Internal: Nexonar-Positionsbestimmung/Chart4 */
    /* Transition: '<S16>:3' */
    Nexonar_Navigation_DWork.is_c14_Nexonar_Navigation =
      Nexonar_Navigation_IN_x0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c14_Nexonar_Navigation) {
     case Nexonar_Navig_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S16>:17' */
      /* Transition: '<S16>:24' */
      Nexonar_Navigation_DWork.is_c14_Nexonar_Navigation =
        Nexonar_Navigation_IN_x1_1;

      /* Entry 'x1_1': '<S16>:26' */
      Nexonar_Navigation_B.int16a1_bin[0] = rtb_IntegertoBitConverter5[0];
      Nexonar_Navigation_B.int16a1_bin[1] = rtb_IntegertoBitConverter5[1];
      Nexonar_Navigation_B.int16a1_bin[2] = rtb_IntegertoBitConverter5[2];
      Nexonar_Navigation_B.int16a1_bin[3] = rtb_IntegertoBitConverter5[3];
      Nexonar_Navigation_B.int16a1_bin[4] = rtb_IntegertoBitConverter5[4];
      Nexonar_Navigation_B.int16a1_bin[5] = rtb_IntegertoBitConverter5[5];
      Nexonar_Navigation_B.int16a1_bin[6] = rtb_IntegertoBitConverter5[6];
      Nexonar_Navigation_B.int16a1_bin[7] = rtb_IntegertoBitConverter5[7];
      Nexonar_Navigation_B.int16a1_bin[8] = rtb_IntegertoBitConverter6[0];
      Nexonar_Navigation_B.int16a1_bin[9] = rtb_IntegertoBitConverter6[1];
      Nexonar_Navigation_B.int16a1_bin[10] = rtb_IntegertoBitConverter6[2];
      Nexonar_Navigation_B.int16a1_bin[11] = rtb_IntegertoBitConverter6[3];
      Nexonar_Navigation_B.int16a1_bin[12] = rtb_IntegertoBitConverter6[4];
      Nexonar_Navigation_B.int16a1_bin[13] = rtb_IntegertoBitConverter6[5];
      Nexonar_Navigation_B.int16a1_bin[14] = rtb_IntegertoBitConverter6[6];
      Nexonar_Navigation_B.int16a1_bin[15] = rtb_IntegertoBitConverter6[7];
      break;

     case Nexonar_Navigation_IN_x0:
      /* During 'x0': '<S16>:2' */
      /* Transition: '<S16>:7' */
      Nexonar_Navigation_DWork.is_c14_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S16>:26' */
      /* Transition: '<S16>:25' */
      Nexonar_Navigation_DWork.is_c14_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S4>/Chart4' */

  /* S-Function (scominttobit): '<S4>/Bit to Integer Converter2' */
  /* Bit to Integer Conversion */
  bitIdx = 0L;
  intVal = 0L;
  for (j = 0; j < 16; j++) {
    /* Input bit order is MSB first */
    intVal <<= 1UL;
    intVal |= (int32_T)(real32_T)floor(Nexonar_Navigation_B.int16a1_bin[bitIdx]);
    if ((j == 0) && (intVal != 0L)) {
      /* Output Integer values are signed, do sign extension */
      intVal = -1L;
    }

    bitIdx++;
  }

  /* Rounding: '<S4>/Rounding Function2' incorporates:
   *  Gain: '<S4>/alpha in °'
   *  S-Function (scominttobit): '<S4>/Bit to Integer Converter2'
   */
  rtb_RoundingFunction2 = rt_roundd_snf((real_T)
    Nexonar_Navigation_P.alphain_Gain * (real32_T)intVal);

  /* Chart: '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
  if (Nexonar_Navigation_DWork.temporalCounter_i1 < 1023U) {
    Nexonar_Navigation_DWork.temporalCounter_i1++;
  }

  /* Gateway: Fahrablaufsteuerung
     [Init: Zielradius = 5mm]
     Gang = 0: vorwaerts
     Gang = 1: rueckwaerts
     Folgende Werte fuer den Ablauf sind einstellbar:
     - Zielkoordinatenwerte
     - Gangwert
     -  */
  /* During: Fahrablaufsteuerung
     [Init: Zielradius = 5mm]
     Gang = 0: vorwaerts
     Gang = 1: rueckwaerts
     Folgende Werte fuer den Ablauf sind einstellbar:
     - Zielkoordinatenwerte
     - Gangwert
     -  */
  if (Nexonar_Navigation_DWork.is_active_c5_Nexonar_Navigation == 0U) {
    /* Entry: Fahrablaufsteuerung
       [Init: Zielradius = 5mm]
       Gang = 0: vorwaerts
       Gang = 1: rueckwaerts
       Folgende Werte fuer den Ablauf sind einstellbar:
       - Zielkoordinatenwerte
       - Gangwert
       -  */
    Nexonar_Navigation_DWork.is_active_c5_Nexonar_Navigation = 1U;

    /* Entry Internal: Fahrablaufsteuerung
       [Init: Zielradius = 5mm]
       Gang = 0: vorwaerts
       Gang = 1: rueckwaerts
       Folgende Werte fuer den Ablauf sind einstellbar:
       - Zielkoordinatenwerte
       - Gangwert
       -  */
    /* Transition: '<S1>:45' */
    Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation =
      Nexon_IN_Start_Einstellung_Init;

    /* Entry 'Start_Einstellung_Init': '<S1>:44' */
    Nexonar_Navigation_B.Zielradius = 7.5;
  } else {
    switch (Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation) {
     case Nexonar_Navigation_IN_Ende:
      /* During 'Ende': '<S1>:132' */
      break;

     case Nexonar_Navigation_IN_Parken:
      /* During 'Parken': '<S1>:570' */
      if (Nexonar_Navigation_DWork.Counter == 3.0) {
        /* Transition: '<S1>:643' */
        /* Exit Internal 'Parken': '<S1>:570' */
        Nexonar_Navigation_DWork.is_Parken = Nexonar_Navi_IN_NO_ACTIVE_CHILD;
        Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation =
          Nexonar_Navigation_IN_Ende;
      } else {
        switch (Nexonar_Navigation_DWork.is_Parken) {
         case Nexonar_Navigation_IN_Parken_1:
          /* During 'Parken_1': '<S1>:577' */
          if ((fabs(Nexonar_Navigation_B.x_soll - RoundingFunction) <=
               Nexonar_Navigation_B.Zielradius) && (fabs
               (Nexonar_Navigation_B.y_soll - RoundingFunction1) <=
               Nexonar_Navigation_B.Zielradius)) {
            /* Transition: '<S1>:572' */
            Nexonar_Navigation_DWork.is_Parken = Nexonar_Navigation_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S1>:578' */
            Nexonar_Navigation_DWork.Counter++;
          }
          break;

         case Nexonar_Navigation_IN_Parken_2:
          /* During 'Parken_2': '<S1>:579' */
          if ((fabs(Nexonar_Navigation_B.x_soll - RoundingFunction) <=
               Nexonar_Navigation_B.Zielradius) && (fabs
               (Nexonar_Navigation_B.y_soll - RoundingFunction1) <=
               Nexonar_Navigation_B.Zielradius)) {
            /* Transition: '<S1>:574' */
            Nexonar_Navigation_DWork.is_Parken = Nexonar_Navigation_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S1>:580' */
            Nexonar_Navigation_DWork.Counter++;
          }
          break;

         case Nexonar_Navigation_IN_Parken_3:
          /* During 'Parken_3': '<S1>:581' */
          if ((fabs(Nexonar_Navigation_B.x_soll - RoundingFunction) <=
               Nexonar_Navigation_B.Zielradius) && (fabs
               (Nexonar_Navigation_B.y_soll - RoundingFunction1) <=
               Nexonar_Navigation_B.Zielradius)) {
            /* Transition: '<S1>:576' */
            Nexonar_Navigation_DWork.is_Parken = Nexonar_Navigation_IN_Wechsel_3;

            /* Entry 'Wechsel_3': '<S1>:582' */
            Nexonar_Navigation_DWork.Counter++;
          }
          break;

         case Nexonar_Navigation_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S1>:578' */
          /* Transition: '<S1>:573' */
          Nexonar_Navigation_DWork.is_Parken = Nexonar_Navigation_IN_Parken_2;

          /* Entry 'Parken_2': '<S1>:579' */
          Nexonar_Navigation_B.x_soll = 1650.0;
          Nexonar_Navigation_B.y_soll = -150.0;
          break;

         case Nexonar_Navigation_IN_Wechsel_2:
          /* During 'Wechsel_2': '<S1>:580' */
          /* Transition: '<S1>:575' */
          Nexonar_Navigation_DWork.is_Parken = Nexonar_Navigation_IN_Parken_3;

          /* Entry 'Parken_3': '<S1>:581' */
          Nexonar_Navigation_B.x_soll = 1675.0;
          Nexonar_Navigation_B.y_soll = -152.0;
          break;

         default:
          /* During 'Wechsel_3': '<S1>:582' */
          break;
        }
      }
      break;

     case Nexonar_Navigation_IN_Sammeln:
      Nexonar_Navigation_Sammeln(&RoundingFunction, &RoundingFunction1);
      break;

     case Nexon_IN_Start_Einstellung_Init:
      Nexonar_Navigation_B.Zielradius = 7.5;

      /* During 'Start_Einstellung_Init': '<S1>:44' */
      /* Transition: '<S1>:244' */
      Nexonar_Navigation_B.Gang = 0.0;
      Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation =
        Nexonar_Navigation_IN_Sammeln;

      /* Entry Internal 'Sammeln': '<S1>:583' */
      /* Transition: '<S1>:584' */
      Nexonar_Navigation_DWork.Counter = 0.0;
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_1;

      /* Entry 'Anfahrpunkt_1': '<S1>:608' */
      Nexonar_Navigation_B.x_soll = 1560.0;
      Nexonar_Navigation_B.y_soll = 40.0;
      break;

     default:
      /* During 'Uebergabe': '<S1>:632' */
      if (Nexonar_Navigation_DWork.Counter == 2.0) {
        /* Transition: '<S1>:644' */
        Nexonar_Navigation_B.Gang = 0.0;

        /* Exit Internal 'Uebergabe': '<S1>:632' */
        Nexonar_Navigation_DWork.is_Uebergabe = Nexonar_Navi_IN_NO_ACTIVE_CHILD;
        Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation =
          Nexonar_Navigation_IN_Parken;

        /* Entry Internal 'Parken': '<S1>:570' */
        /* Transition: '<S1>:571' */
        Nexonar_Navigation_DWork.Counter = 0.0;
        Nexonar_Navigation_DWork.is_Parken = Nexonar_Navigation_IN_Parken_1;

        /* Entry 'Parken_1': '<S1>:577' */
        Nexonar_Navigation_B.x_soll = 1440.0;
        Nexonar_Navigation_B.y_soll = -50.0;
      } else {
        switch (Nexonar_Navigation_DWork.is_Uebergabe) {
         case Ne_IN_Uebergabepunkt_x_Richtung:
          /* During 'Uebergabepunkt_x_Richtung': '<S1>:638' */
          if ((fabs(Nexonar_Navigation_B.x_soll - RoundingFunction) <=
               Nexonar_Navigation_B.Zielradius) && (fabs
               (Nexonar_Navigation_B.y_soll - RoundingFunction1) <=
               Nexonar_Navigation_B.Zielradius)) {
            /* Transition: '<S1>:634' */
            Nexonar_Navigation_DWork.x_least = Nexonar_Navigation_B.x_soll;
            Nexonar_Navigation_DWork.is_Uebergabe =
              Nexonar_Navigation_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S1>:639' */
            Nexonar_Navigation_DWork.Counter++;
          }
          break;

         case Ne_IN_Uebergabepunkt_y_Richtung:
          /* During 'Uebergabepunkt_y_Richtung': '<S1>:640' */
          if ((fabs(Nexonar_Navigation_B.x_soll - RoundingFunction) <=
               Nexonar_Navigation_B.Zielradius) && (fabs
               (Nexonar_Navigation_B.y_soll - RoundingFunction1) <=
               Nexonar_Navigation_B.Zielradius)) {
            /* Transition: '<S1>:636' */
            Nexonar_Navigation_DWork.is_Uebergabe =
              Nexonar_Nav_IN_Warten_Uebergabe;
            Nexonar_Navigation_DWork.temporalCounter_i1 = 0U;
          }
          break;

         case Nexonar_Nav_IN_Warten_Uebergabe:
          /* During 'Warten_Uebergabe': '<S1>:641' */
          if (Nexonar_Navigation_DWork.temporalCounter_i1 >= 1000U) {
            /* Transition: '<S1>:637' */
            Nexonar_Navigation_DWork.is_Uebergabe =
              Nexonar_Navigation_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S1>:642' */
            Nexonar_Navigation_DWork.Counter++;
          }
          break;

         case Nexonar_Navigation_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S1>:639' */
          /* Transition: '<S1>:635' */
          Nexonar_Navigation_DWork.is_Uebergabe =
            Ne_IN_Uebergabepunkt_y_Richtung;

          /* Entry 'Uebergabepunkt_y_Richtung': '<S1>:640' */
          Nexonar_Navigation_B.x_soll = Nexonar_Navigation_DWork.x_least - 5.0;
          Nexonar_Navigation_B.y_soll = 5.0;
          break;

         default:
          /* During 'Wechsel_2': '<S1>:642' */
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */

  /* Outputs for Atomic SubSystem: '<Root>/Navigationssystem [Einstellungen moeglich]' */
  /* Sum: '<S7>/Soll-Ist-Abgleich_x' */
  RoundingFunction = Nexonar_Navigation_B.x_soll - RoundingFunction;

  /* Sum: '<S7>/Soll-Ist-Abgleich_y' */
  RoundingFunction1 = Nexonar_Navigation_B.y_soll - RoundingFunction1;

  /* Chart: '<S8>/Quadrantenteiler' */
  /* Gateway: Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
  /* During: Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
  if (Nexonar_Navigation_DWork.is_active_c11_Nexonar_Navigatio == 0U) {
    /* Entry: Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
    Nexonar_Navigation_DWork.is_active_c11_Nexonar_Navigatio = 1U;

    /* Entry Internal: Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
    /* Transition: '<S12>:28' */
    Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
      Nexonar_Navig_IN_Start_Warten_o;
  } else {
    switch (Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation) {
     case Nexonar_Navigatio_IN_Quadrant_a:
      Nexonar_Navigation_B.Quadrant = 0.0;

      /* During 'Quadrant_a': '<S12>:8' */
      /* Transition: '<S12>:36' */
      /* Transition: '<S12>:40' */
      if ((RoundingFunction >= 0.0) && (RoundingFunction1 >= 0.0)) {
        /* Transition: '<S12>:29' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S12>:8' */
        Nexonar_Navigation_B.Quadrant = 0.0;
      } else if ((RoundingFunction <= 0.0) && (RoundingFunction1 > 0.0)) {
        /* Transition: '<S12>:30' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S12>:9' */
        Nexonar_Navigation_B.Quadrant = 1.0;
      } else if ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0)) {
        /* Transition: '<S12>:31' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S12>:11' */
        Nexonar_Navigation_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S12>:32' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S12>:12' */
        Nexonar_Navigation_B.Quadrant = 3.0;
      }
      break;

     case Nexonar_Navigatio_IN_Quadrant_b:
      Nexonar_Navigation_B.Quadrant = 1.0;

      /* During 'Quadrant_b': '<S12>:9' */
      /* Transition: '<S12>:37' */
      /* Transition: '<S12>:40' */
      if ((RoundingFunction >= 0.0) && (RoundingFunction1 >= 0.0)) {
        /* Transition: '<S12>:29' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S12>:8' */
        Nexonar_Navigation_B.Quadrant = 0.0;
      } else if ((RoundingFunction <= 0.0) && (RoundingFunction1 > 0.0)) {
        /* Transition: '<S12>:30' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S12>:9' */
        Nexonar_Navigation_B.Quadrant = 1.0;
      } else if ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0)) {
        /* Transition: '<S12>:31' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S12>:11' */
        Nexonar_Navigation_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S12>:32' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S12>:12' */
        Nexonar_Navigation_B.Quadrant = 3.0;
      }
      break;

     case Nexonar_Navigatio_IN_Quadrant_c:
      Nexonar_Navigation_B.Quadrant = 2.0;

      /* During 'Quadrant_c': '<S12>:11' */
      /* Transition: '<S12>:38' */
      /* Transition: '<S12>:40' */
      if ((RoundingFunction >= 0.0) && (RoundingFunction1 >= 0.0)) {
        /* Transition: '<S12>:29' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S12>:8' */
        Nexonar_Navigation_B.Quadrant = 0.0;
      } else if ((RoundingFunction <= 0.0) && (RoundingFunction1 > 0.0)) {
        /* Transition: '<S12>:30' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S12>:9' */
        Nexonar_Navigation_B.Quadrant = 1.0;
      } else if ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0)) {
        /* Transition: '<S12>:31' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S12>:11' */
        Nexonar_Navigation_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S12>:32' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S12>:12' */
        Nexonar_Navigation_B.Quadrant = 3.0;
      }
      break;

     case Nexonar_Navigatio_IN_Quadrant_d:
      Nexonar_Navigation_B.Quadrant = 3.0;

      /* During 'Quadrant_d': '<S12>:12' */
      /* Transition: '<S12>:39' */
      /* Transition: '<S12>:40' */
      if ((RoundingFunction >= 0.0) && (RoundingFunction1 >= 0.0)) {
        /* Transition: '<S12>:29' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S12>:8' */
        Nexonar_Navigation_B.Quadrant = 0.0;
      } else if ((RoundingFunction <= 0.0) && (RoundingFunction1 > 0.0)) {
        /* Transition: '<S12>:30' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S12>:9' */
        Nexonar_Navigation_B.Quadrant = 1.0;
      } else if ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0)) {
        /* Transition: '<S12>:31' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S12>:11' */
        Nexonar_Navigation_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S12>:32' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S12>:12' */
        Nexonar_Navigation_B.Quadrant = 3.0;
      }
      break;

     default:
      /* During 'Start_Warten': '<S12>:41' */
      /* Transition: '<S12>:42' */
      if ((RoundingFunction >= 0.0) && (RoundingFunction1 >= 0.0)) {
        /* Transition: '<S12>:29' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S12>:8' */
        Nexonar_Navigation_B.Quadrant = 0.0;
      } else if ((RoundingFunction <= 0.0) && (RoundingFunction1 > 0.0)) {
        /* Transition: '<S12>:30' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S12>:9' */
        Nexonar_Navigation_B.Quadrant = 1.0;
      } else if ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0)) {
        /* Transition: '<S12>:31' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S12>:11' */
        Nexonar_Navigation_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S12>:32' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S12>:12' */
        Nexonar_Navigation_B.Quadrant = 3.0;
      }
      break;
    }
  }

  /* End of Chart: '<S8>/Quadrantenteiler' */

  /* Chart: '<S8>/Winkelausgabe fuer Ausrichtung' */
  /* Gateway: Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
  /* During: Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
  if (Nexonar_Navigation_DWork.is_active_c12_Nexonar_Navigatio == 0U) {
    /* Entry: Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
    Nexonar_Navigation_DWork.is_active_c12_Nexonar_Navigatio = 1U;

    /* Entry Internal: Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
    /* Transition: '<S13>:81' */
    Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
      Nexonar_Navi_IN_Start_Warten_og;
  } else {
    switch (Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation) {
     case N_IN_Ausrichtung_ohne_Aenderung:
      /* During 'Ausrichtung_ohne_Aenderung': '<S13>:52' */
      /* Transition: '<S13>:66' */
      /* Transition: '<S13>:70' */
      if ((RoundingFunction == 0.0) && (RoundingFunction1 == 0.0)) {
        /* Transition: '<S13>:60' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          N_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S13>:52' */
        Nexonar_Navigation_B.alpha_neu = rtb_RoundingFunction2;
      } else if (((RoundingFunction > 0.0) && (RoundingFunction1 >= 0.0)) ||
                 ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0))) {
        /* Transition: '<S13>:76' */
        /* Transition: '<S13>:77' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S13>:24' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction1) / fabs
          (RoundingFunction)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      } else {
        /* Transition: '<S13>:78' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertun_o;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S13>:71' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction) / fabs
          (RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      }
      break;

     case Nexonar_Navi_IN_Start_Warten_og:
      /* During 'Start_Warten': '<S13>:82' */
      /* Transition: '<S13>:83' */
      if ((RoundingFunction == 0.0) && (RoundingFunction1 == 0.0)) {
        /* Transition: '<S13>:60' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          N_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S13>:52' */
        Nexonar_Navigation_B.alpha_neu = rtb_RoundingFunction2;
      } else if (((RoundingFunction > 0.0) && (RoundingFunction1 >= 0.0)) ||
                 ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0))) {
        /* Transition: '<S13>:76' */
        /* Transition: '<S13>:77' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S13>:24' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction1) / fabs
          (RoundingFunction)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      } else {
        /* Transition: '<S13>:78' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertun_o;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S13>:71' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction) / fabs
          (RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      }
      break;

     case IN_Trigonometrische_Auswertung_:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S13>:24' */
      /* Transition: '<S13>:68' */
      /* Transition: '<S13>:70' */
      if ((RoundingFunction == 0.0) && (RoundingFunction1 == 0.0)) {
        /* Transition: '<S13>:60' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          N_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S13>:52' */
        Nexonar_Navigation_B.alpha_neu = rtb_RoundingFunction2;
      } else if (((RoundingFunction > 0.0) && (RoundingFunction1 >= 0.0)) ||
                 ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0))) {
        /* Transition: '<S13>:76' */
        /* Transition: '<S13>:77' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S13>:24' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction1) / fabs
          (RoundingFunction)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      } else {
        /* Transition: '<S13>:78' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertun_o;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S13>:71' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction) / fabs
          (RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      }
      break;

     default:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S13>:71' */
      /* Transition: '<S13>:73' */
      /* Transition: '<S13>:70' */
      if ((RoundingFunction == 0.0) && (RoundingFunction1 == 0.0)) {
        /* Transition: '<S13>:60' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          N_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S13>:52' */
        Nexonar_Navigation_B.alpha_neu = rtb_RoundingFunction2;
      } else if (((RoundingFunction > 0.0) && (RoundingFunction1 >= 0.0)) ||
                 ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0))) {
        /* Transition: '<S13>:76' */
        /* Transition: '<S13>:77' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S13>:24' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction1) / fabs
          (RoundingFunction)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      } else {
        /* Transition: '<S13>:78' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertun_o;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S13>:71' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction) / fabs
          (RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      }
      break;
    }
  }

  /* End of Chart: '<S8>/Winkelausgabe fuer Ausrichtung' */

  /* Sum: '<S8>/Winkeldifferenz' incorporates:
   *  Gain: '<S8>/Quadranten- verschiebung'
   *  Sum: '<S8>/Winkelverschiebung'
   */
  rtb_RoundingFunction2 = (Nexonar_Navigation_P.Quadrantenverschiebung_Gain *
    Nexonar_Navigation_B.Quadrant + Nexonar_Navigation_B.alpha_neu) -
    rtb_RoundingFunction2;

  /* Chart: '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */
  /* Gateway: Navigationssystem
     [Einstellungen moeglich]/Drehweg-Optimierung
     mit Gang-Ausrichtung
     [Init: Stillstandintervall = ±5°] */
  /* During: Navigationssystem
     [Einstellungen moeglich]/Drehweg-Optimierung
     mit Gang-Ausrichtung
     [Init: Stillstandintervall = ±5°] */
  if (Nexonar_Navigation_DWork.is_active_c8_Nexonar_Navigation == 0U) {
    /* Entry: Navigationssystem
       [Einstellungen moeglich]/Drehweg-Optimierung
       mit Gang-Ausrichtung
       [Init: Stillstandintervall = ±5°] */
    Nexonar_Navigation_DWork.is_active_c8_Nexonar_Navigation = 1U;

    /* Entry Internal: Navigationssystem
       [Einstellungen moeglich]/Drehweg-Optimierung
       mit Gang-Ausrichtung
       [Init: Stillstandintervall = ±5°] */
    /* Transition: '<S5>:38' */
    Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
      Nexonar_Nav_IN_Einstellung_Init;

    /* Entry 'Einstellung_Init': '<S5>:44' */
    Nexonar_Navigation_DWork.Stillstandintervall = 10.0;
    Nexonar_Navigation_B.pwm_mindern[0] = 0.0;
    Nexonar_Navigation_B.pwm_mindern[1] = 0.0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation) {
     case IN_Drehstillstand_mit_Ausrichtu:
      /* During 'Drehstillstand_mit_Ausrichtungsregelung': '<S5>:26' */
      /* Transition: '<S5>:96' */
      /* Transition: '<S5>:98' */
      /* Transition: '<S5>:65' */
      rtb_RoundingFunction2 += 180.0 * Nexonar_Navigation_B.Gang;
      if (fabs(rtb_RoundingFunction2) > 180.0) {
        /* Transition: '<S5>:9' */
        if (rtb_RoundingFunction2 > 0.0) {
          /* Transition: '<S5>:15' */
          rtb_RoundingFunction2 += -360.0;
        } else {
          /* Transition: '<S5>:18' */
          rtb_RoundingFunction2 += 360.0;
        }
      } else {
        /* Transition: '<S5>:69' */
      }

      if (fabs(rtb_RoundingFunction2) <=
          Nexonar_Navigation_DWork.Stillstandintervall) {
        /* Transition: '<S5>:27' */
        Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
          IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit(&rtb_RoundingFunction2);
      } else {
        /* Transition: '<S5>:94' */
        Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
          IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S5>:11' */
        Nexonar_Navigation_B.alpha_diff_opt = rtb_RoundingFunction2;
      }
      break;

     case Nexonar_Nav_IN_Einstellung_Init:
      /* During 'Einstellung_Init': '<S5>:44' */
      /* Transition: '<S5>:46' */
      /* Transition: '<S5>:65' */
      rtb_RoundingFunction2 += 180.0 * Nexonar_Navigation_B.Gang;
      if (fabs(rtb_RoundingFunction2) > 180.0) {
        /* Transition: '<S5>:9' */
        if (rtb_RoundingFunction2 > 0.0) {
          /* Transition: '<S5>:15' */
          rtb_RoundingFunction2 += -360.0;
        } else {
          /* Transition: '<S5>:18' */
          rtb_RoundingFunction2 += 360.0;
        }
      } else {
        /* Transition: '<S5>:69' */
      }

      if (fabs(rtb_RoundingFunction2) <=
          Nexonar_Navigation_DWork.Stillstandintervall) {
        /* Transition: '<S5>:27' */
        Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
          IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit(&rtb_RoundingFunction2);
      } else {
        /* Transition: '<S5>:94' */
        Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
          IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S5>:11' */
        Nexonar_Navigation_B.alpha_diff_opt = rtb_RoundingFunction2;
      }
      break;

     default:
      /* During 'Weiterleitung_bei_Drehzustand': '<S5>:11' */
      /* Transition: '<S5>:97' */
      /* Transition: '<S5>:98' */
      /* Transition: '<S5>:65' */
      rtb_RoundingFunction2 += 180.0 * Nexonar_Navigation_B.Gang;
      if (fabs(rtb_RoundingFunction2) > 180.0) {
        /* Transition: '<S5>:9' */
        if (rtb_RoundingFunction2 > 0.0) {
          /* Transition: '<S5>:15' */
          rtb_RoundingFunction2 += -360.0;
        } else {
          /* Transition: '<S5>:18' */
          rtb_RoundingFunction2 += 360.0;
        }
      } else {
        /* Transition: '<S5>:69' */
      }

      if (fabs(rtb_RoundingFunction2) <=
          Nexonar_Navigation_DWork.Stillstandintervall) {
        /* Transition: '<S5>:27' */
        Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
          IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit(&rtb_RoundingFunction2);
      } else {
        /* Transition: '<S5>:94' */
        Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
          IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S5>:11' */
        Nexonar_Navigation_B.alpha_diff_opt = rtb_RoundingFunction2;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */

  /* Abs: '<S7>/Abs x_diff' */
  RoundingFunction = fabs(RoundingFunction);

  /* MATLAB Function: '<S7>/Betrag pwm_x' incorporates:
   *  Abs: '<S7>/Abs x_diff'
   */
  /* MATLAB Function 'Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x': '<S9>:1' */
  if ((Nexonar_Navigation_B.Zielradius < RoundingFunction) && (RoundingFunction <
       60.0 + Nexonar_Navigation_B.Zielradius)) {
    /* '<S9>:1:3' */
    /* '<S9>:1:4' */
    RoundingFunction = 60.0;
  } else if (RoundingFunction <= Nexonar_Navigation_B.Zielradius) {
    /* '<S9>:1:5' */
    /* '<S9>:1:6' */
    RoundingFunction = 0.0;
  } else if (RoundingFunction >= 100.0 + Nexonar_Navigation_B.Zielradius) {
    /* '<S9>:1:7' */
    /* '<S9>:1:8' */
    RoundingFunction = 100.0;
  } else {
    /* '<S9>:1:10' */
  }

  /* End of MATLAB Function: '<S7>/Betrag pwm_x' */

  /* Abs: '<S7>/Abs y_diff' */
  RoundingFunction1 = fabs(RoundingFunction1);

  /* MATLAB Function: '<S7>/Betrag pwm_y' incorporates:
   *  Abs: '<S7>/Abs y_diff'
   */
  /* MATLAB Function 'Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_y': '<S10>:1' */
  if ((Nexonar_Navigation_B.Zielradius < RoundingFunction1) &&
      (RoundingFunction1 < 60.0 + Nexonar_Navigation_B.Zielradius)) {
    /* '<S10>:1:3' */
    /* '<S10>:1:4' */
    RoundingFunction1 = 60.0;
  } else if (RoundingFunction1 <= Nexonar_Navigation_B.Zielradius) {
    /* '<S10>:1:5' */
    /* '<S10>:1:6' */
    RoundingFunction1 = 0.0;
  } else if (RoundingFunction1 >= 100.0 + Nexonar_Navigation_B.Zielradius) {
    /* '<S10>:1:7' */
    /* '<S10>:1:8' */
    RoundingFunction1 = 100.0;
  } else {
    /* '<S10>:1:10' */
  }

  /* End of MATLAB Function: '<S7>/Betrag pwm_y' */

  /* MATLAB Function: '<S7>/PWM-Vektorbetrag' */
  /* MATLAB Function 'Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/PWM-Vektorbetrag': '<S11>:1' */
  /* '<S11>:1:3' */
  RoundingFunction = rt_roundd_snf(sqrt(RoundingFunction * RoundingFunction +
    RoundingFunction1 * RoundingFunction1));

  /* Saturate: '<S7>/PWM-Wertebereich' */
  if (RoundingFunction > Nexonar_Navigation_P.PWMWertebereich_UpperSat) {
    RoundingFunction = Nexonar_Navigation_P.PWMWertebereich_UpperSat;
  } else {
    if (RoundingFunction < Nexonar_Navigation_P.PWMWertebereich_LowerSat) {
      RoundingFunction = Nexonar_Navigation_P.PWMWertebereich_LowerSat;
    }
  }

  /* End of Saturate: '<S7>/PWM-Wertebereich' */

  /* Chart: '<S3>/Fahrsystem' */
  /* Gateway: Navigationssystem
     [Einstellungen moeglich]/Fahrsystem */
  /* During: Navigationssystem
     [Einstellungen moeglich]/Fahrsystem */
  if (Nexonar_Navigation_DWork.is_active_c7_Nexonar_Navigation == 0U) {
    /* Entry: Navigationssystem
       [Einstellungen moeglich]/Fahrsystem */
    Nexonar_Navigation_DWork.is_active_c7_Nexonar_Navigation = 1U;

    /* Entry Internal: Navigationssystem
       [Einstellungen moeglich]/Fahrsystem */
    /* Transition: '<S6>:91' */
    Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
      Nexonar_Navigat_IN_Start_Warten;
  } else {
    switch (Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation) {
     case Nexon_IN_Drehen_links_gesteuert:
      Nexonar_Naviga_Drehen_links_max(&RoundingFunction);
      break;

     case Nexonar_Nav_IN_Drehen_links_max:
      Nexonar_Naviga_Drehen_links_max(&RoundingFunction);
      break;

     case Nexo_IN_Drehen_rechts_gesteuert:
      /* During 'Drehen_rechts_gesteuert': '<S6>:51' */
      /* Transition: '<S6>:63' */
      /* Transition: '<S6>:75' */
      if ((fabs(Nexonar_Navigation_B.alpha_diff_opt) > 0.0) && (RoundingFunction
           > 0.0)) {
        /* Transition: '<S6>:58' */
        if (fabs(Nexonar_Navigation_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S6>:21' */
          if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S6>:45' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexonar_Nav_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S6>:8' */
            Nexonar_Navigation_B.pwm_out_l = 100.0;
            Nexonar_Navigation_B.pwm_out_r = 100.0;
            Nexonar_Navigation_B.r_l_out_l = 0.0;
            Nexonar_Navigation_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S6>:57' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexonar_Na_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S6>:9' */
            Nexonar_Navigation_B.pwm_out_l = 100.0;
            Nexonar_Navigation_B.pwm_out_r = 100.0;
            Nexonar_Navigation_B.r_l_out_l = 1.0;
            Nexonar_Navigation_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S6>:53' */
          if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S6>:54' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexon_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S6>:43' */
            Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.r_l_out_l = 0.0;
            Nexonar_Navigation_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S6>:55' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexo_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S6>:51' */
            RoundingFunction = 59.0 + fabs(Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_l = RoundingFunction;
            Nexonar_Navigation_B.pwm_out_r = RoundingFunction;
            Nexonar_Navigation_B.r_l_out_l = 1.0;
            Nexonar_Navigation_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S6>:82' */
        if (Nexonar_Navigation_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S6>:85' */
          rtb_RoundingFunction2 = 1.0 - Nexonar_Navigation_B.Gang;
          RoundingFunction1 = Nexonar_Navigation_B.Gang;
        } else if (Nexonar_Navigation_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S6>:86' */
          rtb_RoundingFunction2 = Nexonar_Navigation_B.Gang;
          RoundingFunction1 = 1.0 - Nexonar_Navigation_B.Gang;
        } else {
          /* Transition: '<S6>:87' */
          rtb_RoundingFunction2 = 0.0;
          RoundingFunction1 = 0.0;
        }

        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S6>:94' */
        a = RoundingFunction / 100.0;
        Nexonar_Navigation_B.pwm_out_l = RoundingFunction - rt_roundd_snf(a * a *
          Nexonar_Navigation_B.pwm_mindern[0]) * rtb_RoundingFunction2;
        rtb_RoundingFunction2 = RoundingFunction / 100.0;
        Nexonar_Navigation_B.pwm_out_r = RoundingFunction - rt_roundd_snf
          (rtb_RoundingFunction2 * rtb_RoundingFunction2 *
           Nexonar_Navigation_B.pwm_mindern[0]) * RoundingFunction1;
        Nexonar_Navigation_B.r_l_out_l = 1.0 - Nexonar_Navigation_B.Gang;
        Nexonar_Navigation_B.r_l_out_r = 1.0 - Nexonar_Navigation_B.Gang;
      }
      break;

     case Nexonar_Na_IN_Drehen_rechts_max:
      /* During 'Drehen_rechts_max': '<S6>:9' */
      /* Transition: '<S6>:61' */
      /* Transition: '<S6>:75' */
      if ((fabs(Nexonar_Navigation_B.alpha_diff_opt) > 0.0) && (RoundingFunction
           > 0.0)) {
        /* Transition: '<S6>:58' */
        if (fabs(Nexonar_Navigation_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S6>:21' */
          if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S6>:45' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexonar_Nav_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S6>:8' */
            Nexonar_Navigation_B.pwm_out_l = 100.0;
            Nexonar_Navigation_B.pwm_out_r = 100.0;
            Nexonar_Navigation_B.r_l_out_l = 0.0;
            Nexonar_Navigation_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S6>:57' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexonar_Na_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S6>:9' */
            Nexonar_Navigation_B.pwm_out_l = 100.0;
            Nexonar_Navigation_B.pwm_out_r = 100.0;
            Nexonar_Navigation_B.r_l_out_l = 1.0;
            Nexonar_Navigation_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S6>:53' */
          if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S6>:54' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexon_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S6>:43' */
            Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.r_l_out_l = 0.0;
            Nexonar_Navigation_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S6>:55' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexo_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S6>:51' */
            Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.r_l_out_l = 1.0;
            Nexonar_Navigation_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S6>:82' */
        if (Nexonar_Navigation_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S6>:85' */
          rtb_RoundingFunction2 = 1.0 - Nexonar_Navigation_B.Gang;
          RoundingFunction1 = Nexonar_Navigation_B.Gang;
        } else if (Nexonar_Navigation_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S6>:86' */
          rtb_RoundingFunction2 = Nexonar_Navigation_B.Gang;
          RoundingFunction1 = 1.0 - Nexonar_Navigation_B.Gang;
        } else {
          /* Transition: '<S6>:87' */
          rtb_RoundingFunction2 = 0.0;
          RoundingFunction1 = 0.0;
        }

        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S6>:94' */
        a = RoundingFunction / 100.0;
        Nexonar_Navigation_B.pwm_out_l = RoundingFunction - rt_roundd_snf(a * a *
          Nexonar_Navigation_B.pwm_mindern[0]) * rtb_RoundingFunction2;
        rtb_RoundingFunction2 = RoundingFunction / 100.0;
        Nexonar_Navigation_B.pwm_out_r = RoundingFunction - rt_roundd_snf
          (rtb_RoundingFunction2 * rtb_RoundingFunction2 *
           Nexonar_Navigation_B.pwm_mindern[0]) * RoundingFunction1;
        Nexonar_Navigation_B.r_l_out_l = 1.0 - Nexonar_Navigation_B.Gang;
        Nexonar_Navigation_B.r_l_out_r = 1.0 - Nexonar_Navigation_B.Gang;
      }
      break;

     case IN_Fahren_mit_Ausrichtungsregel:
      /* During 'Fahren_mit_Ausrichtungsregelung': '<S6>:94' */
      /* Transition: '<S6>:74' */
      /* Transition: '<S6>:75' */
      if ((fabs(Nexonar_Navigation_B.alpha_diff_opt) > 0.0) && (RoundingFunction
           > 0.0)) {
        /* Transition: '<S6>:58' */
        if (fabs(Nexonar_Navigation_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S6>:21' */
          if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S6>:45' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexonar_Nav_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S6>:8' */
            Nexonar_Navigation_B.pwm_out_l = 100.0;
            Nexonar_Navigation_B.pwm_out_r = 100.0;
            Nexonar_Navigation_B.r_l_out_l = 0.0;
            Nexonar_Navigation_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S6>:57' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexonar_Na_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S6>:9' */
            Nexonar_Navigation_B.pwm_out_l = 100.0;
            Nexonar_Navigation_B.pwm_out_r = 100.0;
            Nexonar_Navigation_B.r_l_out_l = 1.0;
            Nexonar_Navigation_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S6>:53' */
          if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S6>:54' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexon_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S6>:43' */
            Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.r_l_out_l = 0.0;
            Nexonar_Navigation_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S6>:55' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexo_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S6>:51' */
            Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.r_l_out_l = 1.0;
            Nexonar_Navigation_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S6>:82' */
        if (Nexonar_Navigation_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S6>:85' */
          rtb_RoundingFunction2 = 1.0 - Nexonar_Navigation_B.Gang;
          RoundingFunction1 = Nexonar_Navigation_B.Gang;
        } else if (Nexonar_Navigation_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S6>:86' */
          rtb_RoundingFunction2 = Nexonar_Navigation_B.Gang;
          RoundingFunction1 = 1.0 - Nexonar_Navigation_B.Gang;
        } else {
          /* Transition: '<S6>:87' */
          rtb_RoundingFunction2 = 0.0;
          RoundingFunction1 = 0.0;
        }

        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S6>:94' */
        a = RoundingFunction / 100.0;
        Nexonar_Navigation_B.pwm_out_l = RoundingFunction - rt_roundd_snf(a * a *
          Nexonar_Navigation_B.pwm_mindern[0]) * rtb_RoundingFunction2;
        rtb_RoundingFunction2 = RoundingFunction / 100.0;
        Nexonar_Navigation_B.pwm_out_r = RoundingFunction - rt_roundd_snf
          (rtb_RoundingFunction2 * rtb_RoundingFunction2 *
           Nexonar_Navigation_B.pwm_mindern[0]) * RoundingFunction1;
        Nexonar_Navigation_B.r_l_out_l = 1.0 - Nexonar_Navigation_B.Gang;
        Nexonar_Navigation_B.r_l_out_r = 1.0 - Nexonar_Navigation_B.Gang;
      }
      break;

     default:
      Nexonar_Navigation_Start_Warten(&RoundingFunction);
      break;
    }
  }

  /* End of Chart: '<S3>/Fahrsystem' */
  /* End of Outputs for SubSystem: '<Root>/Navigationssystem [Einstellungen moeglich]' */

  /* S-Function (c280xpwm): '<S2>/PWM Vorgabe für Motor_links ' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD *
      Nexonar_Navigation_B.pwm_out_l * 0.01);
  }

  /* S-Function (c280xpwm): '<S2>/PWM Vorgabe für Motor_rechts' */

  /*-- Update CMPB value for ePWM1 --*/
  {
    EPwm1Regs.CMPB = (uint16_T)((uint32_T)EPwm1Regs.TBPRD *
      Nexonar_Navigation_B.pwm_out_r * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S2>/Drehrichtungsvorgabe für Motor_links' */
  {
    if (Nexonar_Navigation_B.r_l_out_l)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* S-Function (c280xgpio_do): '<S2>/Drehrichtungsvorgabe für Motor_rechts' */
  {
    if (Nexonar_Navigation_B.r_l_out_r)
      GpioDataRegs.GPASET.bit.GPIO20 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO20 = 1;
  }

  /* Chart: '<S4>/Chart1' */
  /* Integer to Bit Conversion */
  /* Integer to Bit Conversion */
  /* Gateway: Nexonar-Positionsbestimmung/Chart1 */
  /* During: Nexonar-Positionsbestimmung/Chart1 */
  if (Nexonar_Navigation_DWork.is_active_c1_Nexonar_Navigation == 0U) {
    /* Entry: Nexonar-Positionsbestimmung/Chart1 */
    Nexonar_Navigation_DWork.is_active_c1_Nexonar_Navigation = 1U;

    /* Entry Internal: Nexonar-Positionsbestimmung/Chart1 */
    /* Transition: '<S14>:3' */
    Nexonar_Navigation_DWork.is_c1_Nexonar_Navigation = Nexonar_Navigation_IN_x0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c1_Nexonar_Navigation) {
     case Nexonar_Navig_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S14>:17' */
      /* Transition: '<S14>:24' */
      Nexonar_Navigation_DWork.is_c1_Nexonar_Navigation =
        Nexonar_Navigation_IN_x1_1;

      /* Entry 'x1_1': '<S14>:26' */
      break;

     case Nexonar_Navigation_IN_x0:
      /* During 'x0': '<S14>:2' */
      /* Transition: '<S14>:7' */
      Nexonar_Navigation_DWork.is_c1_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S14>:26' */
      /* Transition: '<S14>:25' */
      Nexonar_Navigation_DWork.is_c1_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S4>/Chart1' */

  /* DiscretePulseGenerator: '<S19>/Pulse Generator' */
  RoundingFunction = (Nexonar_Navigation_DWork.clockTickCounter <
                      Nexonar_Navigation_P.PulseGenerator_Duty) &&
    (Nexonar_Navigation_DWork.clockTickCounter >= 0L) ?
    Nexonar_Navigation_P.PulseGenerator_Amp : 0.0;
  if (Nexonar_Navigation_DWork.clockTickCounter >=
      Nexonar_Navigation_P.PulseGenerator_Period - 1.0) {
    Nexonar_Navigation_DWork.clockTickCounter = 0L;
  } else {
    Nexonar_Navigation_DWork.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S19>/Pulse Generator' */

  /* Outputs for Triggered SubSystem: '<S19>/I2C Reinitialisierung' incorporates:
   *  TriggerPort: '<S21>/Trigger'
   */
  zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                     &Nexonar_Navigati_PrevZCSigState.I2CReinitialisierung_Trig_ZCE,
                     (RoundingFunction));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S21>/I2C Reinitialisierung' */
    /* MATLAB Function 'Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung/I2C Reinitialisierung': '<S23>:1' */
    init_i2c();
  }

  /* End of Outputs for SubSystem: '<S19>/I2C Reinitialisierung' */

  /* Outputs for Triggered SubSystem: '<S19>/I2C Reset' incorporates:
   *  TriggerPort: '<S22>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &Nexonar_Navigati_PrevZCSigState.I2CReset_Trig_ZCE,
                     (RoundingFunction));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S22>/I2C Reset' */
    /* MATLAB Function 'Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset': '<S24>:1' */
    reset_i2c();
  }

  /* End of Outputs for SubSystem: '<S19>/I2C Reset' */
}

/* Model initialize function */
void Nexonar_Navigation_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Nexonar_Navigation_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Nexonar_Navigation_B), 0,
                sizeof(BlockIO_Nexonar_Navigation));

  /* states (dwork) */
  (void) memset((void *)&Nexonar_Navigation_DWork, 0,
                sizeof(D_Work_Nexonar_Navigation));

  {
    int16_T i;

    /* Start for S-Function (c28xisr_c2000): '<S4>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S4>/Triggered Subsystem'
     */
    /* Start for function-call system: '<S4>/Triggered Subsystem' */

    /* Start for S-Function (c280xi2c_rx): '<S20>/I2C Receive' */

    /* Initialize Nexonar_Navigation_B.I2CReceive_o1[0] */
    {
      Nexonar_Navigation_B.I2CReceive_o1[0] = (uint8_T)0.0;
      Nexonar_Navigation_B.I2CReceive_o1[1] = (uint8_T)0.0;
      Nexonar_Navigation_B.I2CReceive_o1[2] = (uint8_T)0.0;
      Nexonar_Navigation_B.I2CReceive_o1[3] = (uint8_T)0.0;
      Nexonar_Navigation_B.I2CReceive_o1[4] = (uint8_T)0.0;
      Nexonar_Navigation_B.I2CReceive_o1[5] = (uint8_T)0.0;
      Nexonar_Navigation_B.I2CReceive_o1[6] = (uint8_T)0.0;
      Nexonar_Navigation_B.I2CReceive_o1[7] = (uint8_T)0.0;
      Nexonar_Navigation_B.I2CReceive_o1[8] = (uint8_T)0.0;
      Nexonar_Navigation_B.I2CReceive_o1[9] = (uint8_T)0.0;
    }

    /* Start for S-Function (c280xpwm): '<S2>/PWM Vorgabe für Motor_links ' */

    /*** Initialize ePWM2 modules ***/
    {
      /*-- Setup Time-Base (TB) Submodule --*/
      EPwm2Regs.TBPRD = 64000;

      /* // Time-Base Control Register
         EPwm2Regs.TBCTL.bit.CTRMODE    = 0;          // Counter Mode
         EPwm2Regs.TBCTL.bit.SYNCOSEL   = 3;          // Sync output select
         EPwm2Regs.TBCTL.bit.PRDLD      = 0;          // Shadow select
         EPwm2Regs.TBCTL.bit.PHSEN      = 0;          // Phase load enable
         EPwm2Regs.TBCTL.bit.PHSDIR     = 0;          // Phase Direction
         EPwm2Regs.TBCTL.bit.HSPCLKDIV  = 0;          // High speed time pre-scale
         EPwm2Regs.TBCTL.bit.CLKDIV     = 0;          // Timebase clock pre-scale
       */
      EPwm2Regs.TBCTL.all = (EPwm2Regs.TBCTL.all & ~0x3FBF) | 0x30;

      /* // Time-Base Phase Register
         EPwm2Regs.TBPHS.half.TBPHS     = 0;          // Phase offset register
       */
      EPwm2Regs.TBPHS.all = (EPwm2Regs.TBPHS.all & ~0xFFFF0000) | 0x0;
      EPwm2Regs.TBCTR = 0x0000;        /* Clear counter*/

      /*-- Setup Counter_Compare (CC) Submodule --*/
      /* // Counter-Compare Control Register
         EPwm2Regs.CMPCTL.bit.SHDWAMODE = 0;  // Compare A block operating mode.
         EPwm2Regs.CMPCTL.bit.SHDWBMODE = 0;  // Compare B block operating mode.
         EPwm2Regs.CMPCTL.bit.LOADAMODE = 0;          // Active compare A
         EPwm2Regs.CMPCTL.bit.LOADBMODE = 0;          // Active compare A
       */
      EPwm2Regs.CMPCTL.all = (EPwm2Regs.CMPCTL.all & ~0x5F) | 0x0;
      EPwm2Regs.CMPA.half.CMPA = 32000;
      EPwm2Regs.CMPB = 0;

      /*-- Setup Action-Qualifier (AQ) Submodule --*/
      EPwm2Regs.AQCTLA.all = 36;
      EPwm2Regs.AQCTLB.all = 264;

      /* // Action-Qualifier Software Force Register
         EPwm2Regs.AQSFRC.bit.RLDCSF    = 0;          // Reload from Shadow options
       */
      EPwm2Regs.AQSFRC.all = (EPwm2Regs.AQSFRC.all & ~0xC0) | 0x0;

      /* // Action-Qualifier Continuous S/W Force Register Set
         EPwm2Regs.AQCSFRC.bit.CSFA     = 0;          // Continuous Software Force on output A
         EPwm2Regs.AQCSFRC.bit.CSFB     = 0;          // Continuous Software Force on output B
       */
      EPwm2Regs.AQCSFRC.all = (EPwm2Regs.AQCSFRC.all & ~0xF) | 0x0;

      /*-- Setup Dead-Band Generator (DB) Submodule --*/
      /* // Dead-Band Generator Control Register
         EPwm2Regs.DBCTL.bit.OUT_MODE   = 0;          // Dead Band Output Mode Control
         EPwm2Regs.DBCTL.bit.IN_MODE    = 0;          // Dead Band Input Select Mode Control
         EPwm2Regs.DBCTL.bit.POLSEL     = 0;          // Polarity Select Control
       */
      EPwm2Regs.DBCTL.all = (EPwm2Regs.DBCTL.all & ~0x3F) | 0x0;
      EPwm2Regs.DBRED = 0;
      EPwm2Regs.DBFED = 0;

      /*-- Setup Event-Trigger (ET) Submodule --*/
      /* // Event-Trigger Selection and Event-Trigger Pre-Scale Register
         EPwm2Regs.ETSEL.bit.SOCAEN     = 0;          // Start of conversion A Enable
         EPwm2Regs.ETSEL.bit.SOCASEL    = 1;          // Start of conversion A Select
         EPwm2Regs.ETPS.bit.SOCAPRD     = 1;          // EPWM2SOCA Period Select
         EPwm2Regs.ETSEL.bit.SOCBEN     = 0;          // Start of conversion B Enable
         EPwm2Regs.ETSEL.bit.SOCBSEL    = 1;          // Start of conversion B Select
         EPwm2Regs.ETPS.bit.SOCBPRD     = 1;          // EPWM2SOCB Period Select
         EPwm2Regs.ETSEL.bit.INTEN      = 0;          // EPWM2INTn Enable
         EPwm2Regs.ETSEL.bit.INTSEL     = 1;          // EPWM2INTn Select
         EPwm2Regs.ETPS.bit.INTPRD      = 1;          // EPWM2INTn Period Select
       */
      EPwm2Regs.ETSEL.all = (EPwm2Regs.ETSEL.all & ~0xFF0F) | 0x1101;
      EPwm2Regs.ETPS.all = (EPwm2Regs.ETPS.all & ~0x3303) | 0x1101;

      /*-- Setup PWM-Chopper (PC) Submodule --*/
      /* // PWM-Chopper Control Register
         EPwm2Regs.PCCTL.bit.CHPEN      = 0;          // PWM chopping enable
         EPwm2Regs.PCCTL.bit.CHPFREQ    = 0;          // Chopping clock frequency
         EPwm2Regs.PCCTL.bit.OSHTWTH    = 0;          // One-shot pulse width
         EPwm2Regs.PCCTL.bit.CHPDUTY    = 0;          // Chopping clock Duty cycle
       */
      EPwm2Regs.PCCTL.all = (EPwm2Regs.PCCTL.all & ~0x7FF) | 0x0;

      /*-- Set up Trip-Zone (TZ) Submodule --*/
      EALLOW;
      EPwm2Regs.TZSEL.all = 0;

      /* // Trip-Zone Control Register
         EPwm2Regs.TZCTL.bit.TZA        = 3;          // TZ1 to TZ6 Trip Action On EPWM2A
         EPwm2Regs.TZCTL.bit.TZB        = 3;          // TZ1 to TZ6 Trip Action On EPWM2B
       */
      EPwm2Regs.TZCTL.all = (EPwm2Regs.TZCTL.all & ~0xF) | 0xF;

      /* // Trip-Zone Enable Interrupt Register
         EPwm2Regs.TZEINT.bit.OST       = 0;          // Trip Zones One Shot Int Enable
         EPwm2Regs.TZEINT.bit.CBC       = 0;          // Trip Zones Cycle By Cycle Int Enable
       */
      EPwm2Regs.TZEINT.all = (EPwm2Regs.TZEINT.all & ~0x6) | 0x0;
      EDIS;
    }

    /* Start for S-Function (c280xpwm): '<S2>/PWM Vorgabe für Motor_rechts' */

    /*** Initialize ePWM1 modules ***/
    {
      /*-- Setup Time-Base (TB) Submodule --*/
      EPwm1Regs.TBPRD = 64000;

      /* // Time-Base Control Register
         EPwm1Regs.TBCTL.bit.CTRMODE    = 0;          // Counter Mode
         EPwm1Regs.TBCTL.bit.SYNCOSEL   = 3;          // Sync output select
         EPwm1Regs.TBCTL.bit.PRDLD      = 0;          // Shadow select
         EPwm1Regs.TBCTL.bit.PHSEN      = 0;          // Phase load enable
         EPwm1Regs.TBCTL.bit.PHSDIR     = 0;          // Phase Direction
         EPwm1Regs.TBCTL.bit.HSPCLKDIV  = 0;          // High speed time pre-scale
         EPwm1Regs.TBCTL.bit.CLKDIV     = 0;          // Timebase clock pre-scale
       */
      EPwm1Regs.TBCTL.all = (EPwm1Regs.TBCTL.all & ~0x3FBF) | 0x30;

      /* // Time-Base Phase Register
         EPwm1Regs.TBPHS.half.TBPHS     = 0;          // Phase offset register
       */
      EPwm1Regs.TBPHS.all = (EPwm1Regs.TBPHS.all & ~0xFFFF0000) | 0x0;
      EPwm1Regs.TBCTR = 0x0000;        /* Clear counter*/

      /*-- Setup Counter_Compare (CC) Submodule --*/
      /* // Counter-Compare Control Register
         EPwm1Regs.CMPCTL.bit.SHDWAMODE = 0;  // Compare A block operating mode.
         EPwm1Regs.CMPCTL.bit.SHDWBMODE = 0;  // Compare B block operating mode.
         EPwm1Regs.CMPCTL.bit.LOADAMODE = 0;          // Active compare A
         EPwm1Regs.CMPCTL.bit.LOADBMODE = 0;          // Active compare A
       */
      EPwm1Regs.CMPCTL.all = (EPwm1Regs.CMPCTL.all & ~0x5F) | 0x0;
      EPwm1Regs.CMPA.half.CMPA = 32000;
      EPwm1Regs.CMPB = 0;

      /*-- Setup Action-Qualifier (AQ) Submodule --*/
      EPwm1Regs.AQCTLA.all = 36;
      EPwm1Regs.AQCTLB.all = 264;

      /* // Action-Qualifier Software Force Register
         EPwm1Regs.AQSFRC.bit.RLDCSF    = 0;          // Reload from Shadow options
       */
      EPwm1Regs.AQSFRC.all = (EPwm1Regs.AQSFRC.all & ~0xC0) | 0x0;

      /* // Action-Qualifier Continuous S/W Force Register Set
         EPwm1Regs.AQCSFRC.bit.CSFA     = 0;          // Continuous Software Force on output A
         EPwm1Regs.AQCSFRC.bit.CSFB     = 0;          // Continuous Software Force on output B
       */
      EPwm1Regs.AQCSFRC.all = (EPwm1Regs.AQCSFRC.all & ~0xF) | 0x0;

      /*-- Setup Dead-Band Generator (DB) Submodule --*/
      /* // Dead-Band Generator Control Register
         EPwm1Regs.DBCTL.bit.OUT_MODE   = 0;          // Dead Band Output Mode Control
         EPwm1Regs.DBCTL.bit.IN_MODE    = 0;          // Dead Band Input Select Mode Control
         EPwm1Regs.DBCTL.bit.POLSEL     = 0;          // Polarity Select Control
       */
      EPwm1Regs.DBCTL.all = (EPwm1Regs.DBCTL.all & ~0x3F) | 0x0;
      EPwm1Regs.DBRED = 0;
      EPwm1Regs.DBFED = 0;

      /*-- Setup Event-Trigger (ET) Submodule --*/
      /* // Event-Trigger Selection and Event-Trigger Pre-Scale Register
         EPwm1Regs.ETSEL.bit.SOCAEN     = 0;          // Start of conversion A Enable
         EPwm1Regs.ETSEL.bit.SOCASEL    = 1;          // Start of conversion A Select
         EPwm1Regs.ETPS.bit.SOCAPRD     = 1;          // EPWM1SOCA Period Select
         EPwm1Regs.ETSEL.bit.SOCBEN     = 0;          // Start of conversion B Enable
         EPwm1Regs.ETSEL.bit.SOCBSEL    = 1;          // Start of conversion B Select
         EPwm1Regs.ETPS.bit.SOCBPRD     = 1;          // EPWM1SOCB Period Select
         EPwm1Regs.ETSEL.bit.INTEN      = 0;          // EPWM1INTn Enable
         EPwm1Regs.ETSEL.bit.INTSEL     = 1;          // EPWM1INTn Select
         EPwm1Regs.ETPS.bit.INTPRD      = 1;          // EPWM1INTn Period Select
       */
      EPwm1Regs.ETSEL.all = (EPwm1Regs.ETSEL.all & ~0xFF0F) | 0x1101;
      EPwm1Regs.ETPS.all = (EPwm1Regs.ETPS.all & ~0x3303) | 0x1101;

      /*-- Setup PWM-Chopper (PC) Submodule --*/
      /* // PWM-Chopper Control Register
         EPwm1Regs.PCCTL.bit.CHPEN      = 0;          // PWM chopping enable
         EPwm1Regs.PCCTL.bit.CHPFREQ    = 0;          // Chopping clock frequency
         EPwm1Regs.PCCTL.bit.OSHTWTH    = 0;          // One-shot pulse width
         EPwm1Regs.PCCTL.bit.CHPDUTY    = 0;          // Chopping clock Duty cycle
       */
      EPwm1Regs.PCCTL.all = (EPwm1Regs.PCCTL.all & ~0x7FF) | 0x0;

      /*-- Set up Trip-Zone (TZ) Submodule --*/
      EALLOW;
      EPwm1Regs.TZSEL.all = 0;

      /* // Trip-Zone Control Register
         EPwm1Regs.TZCTL.bit.TZA        = 3;          // TZ1 to TZ6 Trip Action On EPWM1A
         EPwm1Regs.TZCTL.bit.TZB        = 3;          // TZ1 to TZ6 Trip Action On EPWM1B
       */
      EPwm1Regs.TZCTL.all = (EPwm1Regs.TZCTL.all & ~0xF) | 0xF;

      /* // Trip-Zone Enable Interrupt Register
         EPwm1Regs.TZEINT.bit.OST       = 0;          // Trip Zones One Shot Int Enable
         EPwm1Regs.TZEINT.bit.CBC       = 0;          // Trip Zones Cycle By Cycle Int Enable
       */
      EPwm1Regs.TZEINT.all = (EPwm1Regs.TZEINT.all & ~0x6) | 0x0;
      EDIS;
    }

    /* Start for S-Function (c280xgpio_do): '<S2>/Drehrichtungsvorgabe für Motor_links' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFF3FF;
    GpioCtrlRegs.GPADIR.all |= 0x200000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S2>/Drehrichtungsvorgabe für Motor_rechts' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFCFF;
    GpioCtrlRegs.GPADIR.all |= 0x100000;
    EDIS;
    Nexonar_Navigati_PrevZCSigState.I2CReinitialisierung_Trig_ZCE =
      UNINITIALIZED_ZCSIG;
    Nexonar_Navigati_PrevZCSigState.I2CReset_Trig_ZCE = UNINITIALIZED_ZCSIG;

    /* InitializeConditions for RateTransition: '<S4>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Nexonar_Navigation_DWork.RateTransition_Buffer[i] =
        Nexonar_Navigation_P.RateTransition_InitialCondition;
    }

    /* End of InitializeConditions for RateTransition: '<S4>/Rate Transition' */

    /* InitializeConditions for DiscretePulseGenerator: '<S19>/Pulse Generator' */
    Nexonar_Navigation_DWork.clockTickCounter = 0L;

    /* SystemInitialize for S-Function (c28xisr_c2000): '<S4>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S4>/Triggered Subsystem'
     */
    /* System initialize for function-call system: '<S4>/Triggered Subsystem' */
    {
      int16_T i;

      /* InitializeConditions for Delay: '<S20>/Delay' */
      for (i = 0; i < 10; i++) {
        Nexonar_Navigation_DWork.Delay_DSTATE[i] =
          Nexonar_Navigation_P.Delay_InitialCondition;
      }

      /* End of InitializeConditions for Delay: '<S20>/Delay' */
    }

    /* End of SystemInitialize for S-Function (c28xisr_c2000): '<S4>/C28x Hardware Interrupt' */

    /* SystemInitialize for Chart: '<S4>/Chart8' */
    Nexonar_Navigation_DWork.is_active_c17_Nexonar_Navigatio = 0U;
    Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;
    for (i = 0; i < 20; i++) {
      Nexonar_Navigation_DWork.values_out1[i] = 0;
    }

    Nexonar_Navigation_DWork.zaehler = 0L;
    Nexonar_Navigation_DWork.search = 0;
    Nexonar_Navigation_DWork.counter = 0L;
    Nexonar_Navigation_DWork.x_found = 0L;
    Nexonar_Navigation_B.valid_values1 = 0;
    Nexonar_Navigation_B.valid_values2 = 0;
    Nexonar_Navigation_B.valid_values3 = 0;
    Nexonar_Navigation_B.valid_values4 = 0;
    Nexonar_Navigation_B.valid_values5 = 0;
    Nexonar_Navigation_B.valid_values6 = 0;

    /* End of SystemInitialize for Chart: '<S4>/Chart8' */

    /* SystemInitialize for Chart: '<S4>/Chart6' */
    Nexonar_Navigation_DWork.is_active_c16_Nexonar_Navigatio = 0U;
    Nexonar_Navigation_DWork.is_c16_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S4>/Chart2' */
    Nexonar_Navigation_DWork.is_active_c13_Nexonar_Navigatio = 0U;
    Nexonar_Navigation_DWork.is_c13_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S4>/Chart4' */
    Nexonar_Navigation_DWork.is_active_c14_Nexonar_Navigatio = 0U;
    Nexonar_Navigation_DWork.is_c14_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;
    for (i = 0; i < 16; i++) {
      /* SystemInitialize for Chart: '<S4>/Chart6' */
      Nexonar_Navigation_B.int16x_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S4>/Chart2' */
      Nexonar_Navigation_B.int16y_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S4>/Chart4' */
      Nexonar_Navigation_B.int16a1_bin[i] = 0.0F;
    }

    /* SystemInitialize for Chart: '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */
    Nexonar_Navigation_DWork.is_Parken = Nexonar_Navi_IN_NO_ACTIVE_CHILD;
    Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navi_IN_NO_ACTIVE_CHILD;
    Nexonar_Navigation_DWork.is_Uebergabe = Nexonar_Navi_IN_NO_ACTIVE_CHILD;
    Nexonar_Navigation_DWork.temporalCounter_i1 = 0U;
    Nexonar_Navigation_DWork.is_active_c5_Nexonar_Navigation = 0U;
    Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Atomic SubSystem: '<Root>/Navigationssystem [Einstellungen moeglich]' */
    /* SystemInitialize for Chart: '<S8>/Quadrantenteiler' */
    Nexonar_Navigation_DWork.is_active_c11_Nexonar_Navigatio = 0U;
    Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S8>/Winkelausgabe fuer Ausrichtung' */
    Nexonar_Navigation_DWork.is_active_c12_Nexonar_Navigatio = 0U;
    Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */
    Nexonar_Navigation_DWork.is_active_c8_Nexonar_Navigation = 0U;
    Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Fahrsystem' */
    Nexonar_Navigation_DWork.is_active_c7_Nexonar_Navigation = 0U;
    Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;

    /* End of SystemInitialize for SubSystem: '<Root>/Navigationssystem [Einstellungen moeglich]' */

    /* SystemInitialize for Chart: '<S4>/Chart1' */
    Nexonar_Navigation_DWork.is_active_c1_Nexonar_Navigation = 0U;
    Nexonar_Navigation_DWork.is_c1_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;
  }
}

/* Model terminate function */
void Nexonar_Navigation_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
