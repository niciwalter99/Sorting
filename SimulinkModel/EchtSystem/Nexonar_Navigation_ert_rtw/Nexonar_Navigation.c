/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Nexonar_Navigation.c
 *
 * Code generated for Simulink model 'Nexonar_Navigation'.
 *
<<<<<<< HEAD
 * Model version                  : 1.80
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan 20 11:10:53 2021
=======
 * Model version                  : 1.76
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Jan 18 19:13:49 2021
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
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
#define IN_photoelectricBarrierActivate (6U)
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
#define Nexonar_Navi_IN_NO_ACTIVE_CHILD (0U)
#define Nexonar_Navi_IN_Start_Warten_og (2U)
#define Nexonar_Navig_IN_Anfahrpunkt_10 (2U)
#define Nexonar_Navig_IN_Daten_einlesen (1U)
#define Nexonar_Navig_IN_Start_Warten_o (5U)
#define Nexonar_Naviga_IN_Anfahrpunkt_1 (1U)
#define Nexonar_Naviga_IN_Anfahrpunkt_2 (3U)
#define Nexonar_Naviga_IN_Anfahrpunkt_3 (4U)
#define Nexonar_Naviga_IN_Anfahrpunkt_4 (5U)
#define Nexonar_Naviga_IN_Anfahrpunkt_5 (6U)
#define Nexonar_Naviga_IN_Anfahrpunkt_6 (7U)
#define Nexonar_Naviga_IN_Anfahrpunkt_7 (8U)
#define Nexonar_Naviga_IN_Anfahrpunkt_8 (9U)
#define Nexonar_Naviga_IN_Anfahrpunkt_9 (10U)
#define Nexonar_Naviga_IN_setupVariable (7U)
#define Nexonar_Naviga_IN_wert_erkannt2 (4U)
#define Nexonar_Navigat_IN_DetectedCube (3U)
#define Nexonar_Navigat_IN_Start_Warten (6U)
#define Nexonar_Navigat_IN_wert_erkannt (3U)
#define Nexonar_Navigati_IN_Wechsel_1_o (11U)
#define Nexonar_Navigati_IN_Wechsel_2_o (13U)
#define Nexonar_Navigati_IN_goToMagacin (3U)
#define Nexonar_Navigati_IN_throwBlacks (8U)
#define Nexonar_Navigati_IN_waitForCube (7U)
#define Nexonar_Navigatio_IN_Quadrant_a (1U)
#define Nexonar_Navigatio_IN_Quadrant_b (2U)
#define Nexonar_Navigatio_IN_Quadrant_c (3U)
#define Nexonar_Navigatio_IN_Quadrant_d (4U)
#define Nexonar_Navigatio_IN_Wechsel_10 (12U)
#define Nexonar_Navigatio_IN_cubeLoaded (5U)
#define Nexonar_Navigatio_IN_firstEntry (2U)
#define Nexonar_Navigatio_IN_x1_search1 (5U)
#define Nexonar_Navigation_IN_Black    (1U)
#define Nexonar_Navigation_IN_BlueCube (2U)
#define Nexonar_Navigation_IN_Ende     (1U)
#define Nexonar_Navigation_IN_Parken   (2U)
#define Nexonar_Navigation_IN_RedCube  (4U)
#define Nexonar_Navigation_IN_Sammeln  (3U)
#define Nexonar_Navigation_IN_Uebergabe (5U)
#define Nexonar_Navigation_IN_Wechsel_1 (3U)
#define Nexonar_Navigation_IN_Wechsel_2 (4U)
#define Nexonar_Navigation_IN_Wechsel_3 (14U)
#define Nexonar_Navigation_IN_Wechsel_4 (15U)
#define Nexonar_Navigation_IN_Wechsel_5 (16U)
#define Nexonar_Navigation_IN_Wechsel_6 (17U)
#define Nexonar_Navigation_IN_Wechsel_7 (18U)
#define Nexonar_Navigation_IN_Wechsel_8 (19U)
#define Nexonar_Navigation_IN_Wechsel_9 (20U)
#define Nexonar_Navigation_IN_close    (1U)
#define Nexonar_Navigation_IN_closeGate (1U)
#define Nexonar_Navigation_IN_goToZero (4U)
#define Nexonar_Navigation_IN_init     (2U)
#define Nexonar_Navigation_IN_open     (2U)
#define Nexonar_Navigation_IN_openGate (5U)
#define Nexonar_Navigation_IN_wait     (3U)
#define Nexonar_Navigation_IN_wait_o   (6U)
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
static void Nexonar_Navigation_Sammeln(const real_T *RoundingFunction, const
  real_T *RoundingFunction1);
static void enter_atomic_Drehstillstand_mit(const real_T *alpha_diff_intern);
static void Nexonar_Navigation_Start_Warten(const real_T *PWMWertebereich);
static void Nexonar_Naviga_Drehen_links_max(const real_T *PWMWertebereich);
static real_T Nexonar_Naviga_findPlaceForBlue(void);
static real_T Nexonar_Navigat_findPlaceForRed(void);
static void rate_monotonic_scheduler(void);
static uint16_T adcInitFlag = 0;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0UL]) {
    iLeft = 0UL;
    frac = (u0 - bp0[0UL]) / (bp0[1UL] - bp0[0UL]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1UL;
    iLeft = 0UL;
    iRght = maxIndex;
    while (iRght - iLeft > 1UL) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1UL;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1UL] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1UL;
    frac = (u0 - bp0[maxIndex - 1UL]) / (bp0[maxIndex] - bp0[maxIndex - 1UL]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1UL] - table[iLeft]) * frac + table[iLeft];
}

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

      /* S-Function (c280xi2c_rx): '<S21>/I2C Receive' */
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
        /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn2' */
        Nexonar_Navigation_B.VectorConcatenate[i + 10] =
          Nexonar_Navigation_B.I2CReceive_o1[i];

        /* Delay: '<S21>/Delay' */
        Nexonar_Navigation_B.VectorConcatenate[i] =
          Nexonar_Navigation_DWork.Delay_DSTATE[i];

        /* Update for Delay: '<S21>/Delay' */
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

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Nexonar_Navigation_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(Nexonar_Navigation_M, 1));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 0 shares data with slower tid rate: 1 */
  Nexonar_Navigation_M->Timing.RateInteraction.TID0_1 =
    (Nexonar_Navigation_M->Timing.TaskCounters.TID[1] == 0);

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Nexonar_Navigation_M->Timing.TaskCounters.TID[1])++;
  if ((Nexonar_Navigation_M->Timing.TaskCounters.TID[1]) > 499) {/* Sample time: [0.01s, 0.0s] */
    Nexonar_Navigation_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for enable system:
 *    '<S36>/NEGATIVE Edge'
 *    '<S37>/NEGATIVE Edge'
 */
void Nexonar_Naviga_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_NEGATIVEEdge_Nexonar_Naviga *localB)
{
  /* Outputs for Enabled SubSystem: '<S36>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S41>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S41>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S36>/NEGATIVE Edge' */
}

/*
 * Output and update for enable system:
 *    '<S36>/POSITIVE Edge'
 *    '<S37>/POSITIVE Edge'
 */
void Nexonar_Naviga_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_POSITIVEEdge_Nexonar_Naviga *localB)
{
  /* Outputs for Enabled SubSystem: '<S36>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S42>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S42>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S36>/POSITIVE Edge' */
}

/*
 * Output and update for atomic system:
 *    '<S35>/MATLAB Function1'
 *    '<S35>/MATLAB Function3'
 */
void Nexonar_Nav_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt,
  rtB_MATLABFunction1_Nexonar_Nav *localB)
{
  /* MATLAB Function 'Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1': '<S38>:1' */
  /* '<S38>:1:3' */
  localB->y = rtu_yalt + (real32_T)rtu_u;
}

/* Function for Chart: '<S4>/Chart8' */
static void Nexon_enter_atomic_wert_erkannt(const uint16_T RateTransition[20])
{
  /* Entry 'wert_erkannt': '<S19>:109' */
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
static void Nexonar_Navigation_Sammeln(const real_T *RoundingFunction, const
  real_T *RoundingFunction1)
{
  /* During 'Sammeln': '<S1>:70' */
  if (Nexonar_Navigation_DWork.Counter == 10.0) {
    /* Transition: '<S1>:106' */
    Nexonar_Navigation_B.Gang = 1.0;
    Nexonar_Navigation_DWork.x_least = Nexonar_Navigation_B.x_soll;

    /* Exit Internal 'Sammeln': '<S1>:70' */
    Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navi_IN_NO_ACTIVE_CHILD;
    Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation =
      Nexonar_Navigation_IN_Uebergabe;

    /* Entry Internal 'Uebergabe': '<S1>:72' */
    /* Transition: '<S1>:126' */
    Nexonar_Navigation_DWork.Counter = 0.0;
    Nexonar_Navigation_DWork.is_Uebergabe = Ne_IN_Uebergabepunkt_x_Richtung;

    /* Entry 'Uebergabepunkt_x_Richtung': '<S1>:120' */
  } else {
    switch (Nexonar_Navigation_DWork.is_Sammeln) {
     case Nexonar_Naviga_IN_Anfahrpunkt_1:
      /* During 'Anfahrpunkt_1': '<S1>:81' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:84' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigati_IN_Wechsel_1_o;

        /* Entry 'Wechsel_1': '<S1>:109' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Navig_IN_Anfahrpunkt_10:
      /* During 'Anfahrpunkt_10': '<S1>:174' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:177' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigatio_IN_Wechsel_10;

        /* Entry 'Wechsel_10': '<S1>:175' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_2:
      /* During 'Anfahrpunkt_2': '<S1>:83' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:93' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigati_IN_Wechsel_2_o;

        /* Entry 'Wechsel_2': '<S1>:110' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_3:
      /* During 'Anfahrpunkt_3': '<S1>:94' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:97' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_3;

        /* Entry 'Wechsel_3': '<S1>:112' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_4:
      /* During 'Anfahrpunkt_4': '<S1>:140' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:142' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_4;

        /* Entry 'Wechsel_4': '<S1>:141' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_5:
      /* During 'Anfahrpunkt_5': '<S1>:145' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:147' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_5;

        /* Entry 'Wechsel_5': '<S1>:146' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_6:
      /* During 'Anfahrpunkt_6': '<S1>:150' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:152' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_6;

        /* Entry 'Wechsel_6': '<S1>:151' */
        Nexonar_Navigation_DWork.Counter++;
      } else {
        /* Transition: '<S1>:157' */
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_7:
      /* During 'Anfahrpunkt_7': '<S1>:162' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:165' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_7;

        /* Entry 'Wechsel_7': '<S1>:163' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_8:
      /* During 'Anfahrpunkt_8': '<S1>:166' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:169' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_8;

        /* Entry 'Wechsel_8': '<S1>:167' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Naviga_IN_Anfahrpunkt_9:
      /* During 'Anfahrpunkt_9': '<S1>:170' */
      if ((fabs(Nexonar_Navigation_B.x_soll - *RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - *RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:173' */
        Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navigation_IN_Wechsel_9;

        /* Entry 'Wechsel_9': '<S1>:171' */
        Nexonar_Navigation_DWork.Counter++;
      }
      break;

     case Nexonar_Navigati_IN_Wechsel_1_o:
      /* During 'Wechsel_1': '<S1>:109' */
      /* Transition: '<S1>:111' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_2;

      /* Entry 'Anfahrpunkt_2': '<S1>:83' */
      Nexonar_Navigation_B.x_soll = 800.0;
<<<<<<< HEAD
      Nexonar_Navigation_B.y_soll = -100.0;
=======
      Nexonar_Navigation_B.y_soll = -50.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      break;

     case Nexonar_Navigatio_IN_Wechsel_10:
      /* During 'Wechsel_10': '<S1>:175' */
      break;

     case Nexonar_Navigati_IN_Wechsel_2_o:
      /* During 'Wechsel_2': '<S1>:110' */
      /* Transition: '<S1>:114' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_3;

      /* Entry 'Anfahrpunkt_3': '<S1>:94' */
      Nexonar_Navigation_B.x_soll = 800.0;
      Nexonar_Navigation_B.y_soll = 400.0;
      break;

     case Nexonar_Navigation_IN_Wechsel_3:
      /* During 'Wechsel_3': '<S1>:112' */
      /* Transition: '<S1>:143' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_4;

      /* Entry 'Anfahrpunkt_4': '<S1>:140' */
      Nexonar_Navigation_B.x_soll = 950.0;
      Nexonar_Navigation_B.y_soll = 550.0;
      break;

     case Nexonar_Navigation_IN_Wechsel_4:
      /* During 'Wechsel_4': '<S1>:141' */
      /* Transition: '<S1>:148' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_5;

      /* Entry 'Anfahrpunkt_5': '<S1>:145' */
      Nexonar_Navigation_B.x_soll = 950.0;
      Nexonar_Navigation_B.y_soll = 850.0;
      break;

     case Nexonar_Navigation_IN_Wechsel_5:
      /* During 'Wechsel_5': '<S1>:146' */
      /* Transition: '<S1>:153' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_6;

      /* Entry 'Anfahrpunkt_6': '<S1>:150' */
      Nexonar_Navigation_B.x_soll = 400.0;
      Nexonar_Navigation_B.y_soll = 800.0;
      break;

     case Nexonar_Navigation_IN_Wechsel_6:
      /* During 'Wechsel_6': '<S1>:151' */
      /* Transition: '<S1>:164' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_7;

      /* Entry 'Anfahrpunkt_7': '<S1>:162' */
      Nexonar_Navigation_B.x_soll = 300.0;
      Nexonar_Navigation_B.y_soll = 650.0;
      break;

     case Nexonar_Navigation_IN_Wechsel_7:
      /* During 'Wechsel_7': '<S1>:163' */
      /* Transition: '<S1>:168' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_8;

      /* Entry 'Anfahrpunkt_8': '<S1>:166' */
      Nexonar_Navigation_B.x_soll = 300.0;
      Nexonar_Navigation_B.y_soll = 150.0;
      break;

     case Nexonar_Navigation_IN_Wechsel_8:
      /* During 'Wechsel_8': '<S1>:167' */
      /* Transition: '<S1>:172' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_9;

      /* Entry 'Anfahrpunkt_9': '<S1>:170' */
      Nexonar_Navigation_B.x_soll = 200.0;
      Nexonar_Navigation_B.y_soll = -50.0;
      break;

     default:
      /* During 'Wechsel_9': '<S1>:171' */
      /* Transition: '<S1>:176' */
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navig_IN_Anfahrpunkt_10;

      /* Entry 'Anfahrpunkt_10': '<S1>:174' */
<<<<<<< HEAD
      Nexonar_Navigation_B.x_soll = 1450.0;
=======
      Nexonar_Navigation_B.x_soll = 1250.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      Nexonar_Navigation_B.y_soll = 50.0;
      break;
    }
  }
}

/* Function for Chart: '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */
static void enter_atomic_Drehstillstand_mit(const real_T *alpha_diff_intern)
{
  real_T tmp;

  /* Entry 'Drehstillstand_mit_Ausrichtungsregelung': '<S6>:26' */
  Nexonar_Navigation_B.alpha_diff_opt = 0.0;
  tmp = fabs(*alpha_diff_intern);
<<<<<<< HEAD
  if (tmp < 5.0) {
    Nexonar_Navigation_B.pwm_mindern[0] = rt_roundd_snf(tmp / 2.0);
  } else if (tmp < 15.0) {
    Nexonar_Navigation_B.pwm_mindern[0] = floor((tmp - 5.0) / 5.0) + 3.0;
=======
  if (tmp <= 5.0) {
    Nexonar_Navigation_B.pwm_mindern[0] = fabs(*alpha_diff_intern / 2.0);
  } else if (tmp <= 15.0) {
    Nexonar_Navigation_B.pwm_mindern[0] = rt_roundd_snf((tmp - 5.0) / 4.0 + 2.5);
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
  } else {
    Nexonar_Navigation_B.pwm_mindern[0] = 5.0;
  }

  if (*alpha_diff_intern < 0.0) {
    Nexonar_Navigation_B.pwm_mindern[1] = 0.0;
  } else if (*alpha_diff_intern > 0.0) {
    Nexonar_Navigation_B.pwm_mindern[1] = 1.0;
  } else {
    Nexonar_Navigation_B.pwm_mindern[1] = 2.0;
  }
}

<<<<<<< HEAD
real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

=======
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
/* Function for Chart: '<S3>/Fahrsystem' */
static void Nexonar_Navigation_Start_Warten(const real_T *PWMWertebereich)
{
  real_T l_mindern;
  real_T r_mindern;
<<<<<<< HEAD
  real_T pwm_out_l_tmp;
=======
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d

  /* During 'Start_Warten': '<S7>:92' */
  /* Transition: '<S7>:93' */
  l_mindern = fabs(Nexonar_Navigation_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (*PWMWertebereich > 0.0)) {
    /* Transition: '<S7>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S7>:21' */
      if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S7>:45' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexonar_Nav_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S7>:8' */
        Nexonar_Navigation_B.pwm_out_l = 100.0;
        Nexonar_Navigation_B.pwm_out_r = 100.0;
        Nexonar_Navigation_B.r_l_out_l = 0.0;
        Nexonar_Navigation_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S7>:57' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexonar_Na_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S7>:9' */
        Nexonar_Navigation_B.pwm_out_l = 100.0;
        Nexonar_Navigation_B.pwm_out_r = 100.0;
        Nexonar_Navigation_B.r_l_out_l = 1.0;
        Nexonar_Navigation_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S7>:53' */
      if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S7>:54' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexon_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S7>:43' */
        Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
          (Nexonar_Navigation_B.alpha_diff_opt);
        Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
          (Nexonar_Navigation_B.alpha_diff_opt);
        Nexonar_Navigation_B.r_l_out_l = 0.0;
        Nexonar_Navigation_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S7>:55' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexo_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S7>:51' */
        Nexonar_Navigation_B.pwm_out_l = 59.0 + l_mindern;
        Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
          (Nexonar_Navigation_B.alpha_diff_opt);
        Nexonar_Navigation_B.r_l_out_l = 1.0;
        Nexonar_Navigation_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S7>:82' */
    if (Nexonar_Navigation_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S7>:85' */
      l_mindern = 1.0 - Nexonar_Navigation_B.Gang;
      r_mindern = Nexonar_Navigation_B.Gang;
    } else if (Nexonar_Navigation_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S7>:86' */
      l_mindern = Nexonar_Navigation_B.Gang;
      r_mindern = 1.0 - Nexonar_Navigation_B.Gang;
    } else {
      /* Transition: '<S7>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
      IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S7>:94' */
<<<<<<< HEAD
    pwm_out_l_tmp = rt_roundd_snf(rt_powd_snf(*PWMWertebereich / 100.0, 1.9) *
      Nexonar_Navigation_B.pwm_mindern[0]);
    Nexonar_Navigation_B.pwm_out_l = *PWMWertebereich - pwm_out_l_tmp *
      l_mindern;
    Nexonar_Navigation_B.pwm_out_r = *PWMWertebereich - pwm_out_l_tmp *
      r_mindern;
=======
    Nexonar_Navigation_B.pwm_out_l = *PWMWertebereich -
      Nexonar_Navigation_B.pwm_mindern[0] * l_mindern;
    Nexonar_Navigation_B.pwm_out_r = *PWMWertebereich -
      Nexonar_Navigation_B.pwm_mindern[0] * r_mindern;
    if (Nexonar_Navigation_B.pwm_out_l < 0.0) {
      Nexonar_Navigation_B.pwm_out_l = 0.0;
    }

    if (Nexonar_Navigation_B.pwm_out_r < 0.0) {
      Nexonar_Navigation_B.pwm_out_r = 0.0;
    }

>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
    Nexonar_Navigation_B.r_l_out_l = 1.0 - Nexonar_Navigation_B.Gang;
    Nexonar_Navigation_B.r_l_out_r = 1.0 - Nexonar_Navigation_B.Gang;
  }
}

/* Function for Chart: '<S3>/Fahrsystem' */
static void Nexonar_Naviga_Drehen_links_max(const real_T *PWMWertebereich)
{
  real_T l_mindern;
  real_T r_mindern;
<<<<<<< HEAD
  real_T pwm_out_l_tmp;
=======
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d

  /* During 'Drehen_links_max': '<S7>:8' */
  /* Transition: '<S7>:60' */
  /* Transition: '<S7>:75' */
  l_mindern = fabs(Nexonar_Navigation_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (*PWMWertebereich > 0.0)) {
    /* Transition: '<S7>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S7>:21' */
      if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S7>:45' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexonar_Nav_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S7>:8' */
        Nexonar_Navigation_B.pwm_out_l = 100.0;
        Nexonar_Navigation_B.pwm_out_r = 100.0;
        Nexonar_Navigation_B.r_l_out_l = 0.0;
        Nexonar_Navigation_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S7>:57' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexonar_Na_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S7>:9' */
        Nexonar_Navigation_B.pwm_out_l = 100.0;
        Nexonar_Navigation_B.pwm_out_r = 100.0;
        Nexonar_Navigation_B.r_l_out_l = 1.0;
        Nexonar_Navigation_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S7>:53' */
      if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S7>:54' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexon_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S7>:43' */
        Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
          (Nexonar_Navigation_B.alpha_diff_opt);
        Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
          (Nexonar_Navigation_B.alpha_diff_opt);
        Nexonar_Navigation_B.r_l_out_l = 0.0;
        Nexonar_Navigation_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S7>:55' */
        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          Nexo_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S7>:51' */
        Nexonar_Navigation_B.pwm_out_l = 59.0 + l_mindern;
        Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
          (Nexonar_Navigation_B.alpha_diff_opt);
        Nexonar_Navigation_B.r_l_out_l = 1.0;
        Nexonar_Navigation_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S7>:82' */
    if (Nexonar_Navigation_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S7>:85' */
      l_mindern = 1.0 - Nexonar_Navigation_B.Gang;
      r_mindern = Nexonar_Navigation_B.Gang;
    } else if (Nexonar_Navigation_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S7>:86' */
      l_mindern = Nexonar_Navigation_B.Gang;
      r_mindern = 1.0 - Nexonar_Navigation_B.Gang;
    } else {
      /* Transition: '<S7>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
      IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S7>:94' */
<<<<<<< HEAD
    pwm_out_l_tmp = rt_roundd_snf(rt_powd_snf(*PWMWertebereich / 100.0, 1.9) *
      Nexonar_Navigation_B.pwm_mindern[0]);
    Nexonar_Navigation_B.pwm_out_l = *PWMWertebereich - pwm_out_l_tmp *
      l_mindern;
    Nexonar_Navigation_B.pwm_out_r = *PWMWertebereich - pwm_out_l_tmp *
      r_mindern;
=======
    Nexonar_Navigation_B.pwm_out_l = *PWMWertebereich -
      Nexonar_Navigation_B.pwm_mindern[0] * l_mindern;
    Nexonar_Navigation_B.pwm_out_r = *PWMWertebereich -
      Nexonar_Navigation_B.pwm_mindern[0] * r_mindern;
    if (Nexonar_Navigation_B.pwm_out_l < 0.0) {
      Nexonar_Navigation_B.pwm_out_l = 0.0;
    }

    if (Nexonar_Navigation_B.pwm_out_r < 0.0) {
      Nexonar_Navigation_B.pwm_out_r = 0.0;
    }

>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
    Nexonar_Navigation_B.r_l_out_l = 1.0 - Nexonar_Navigation_B.Gang;
    Nexonar_Navigation_B.r_l_out_r = 1.0 - Nexonar_Navigation_B.Gang;
  }
}

/* Function for Chart: '<S5>/Sortieralgorithmus' */
static real_T Nexonar_Naviga_findPlaceForBlue(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForBlue': '<S30>:177' */
  /* '<S30>:177:4' */
  magacinOut = 5.0;
  if (Nexonar_Navigation_DWork.magacin0 == 0.0) {
    /* '<S30>:177:5' */
    /* '<S30>:177:6' */
    magacinOut = 0.0;

    /* '<S30>:177:7' */
    Nexonar_Navigation_DWork.magacin0++;

    /* '<S30>:177:8' */
  } else if ((Nexonar_Navigation_DWork.magacin2 == 0.0) ||
             ((Nexonar_Navigation_DWork.magacin2_LastCube == 2.0) &&
              (Nexonar_Navigation_DWork.magacin2 < 5.0))) {
    /* '<S30>:177:9' */
    /* '<S30>:177:10' */
    magacinOut = 2.0;

    /* '<S30>:177:11' */
    Nexonar_Navigation_DWork.magacin2++;

    /* '<S30>:177:12' */
    Nexonar_Navigation_DWork.magacin2_LastCube = 1.0;
  } else if ((Nexonar_Navigation_DWork.magacin1_LastCube == 2.0) &&
             (Nexonar_Navigation_DWork.magacin1 < 5.0)) {
    /* '<S30>:177:13' */
    /* '<S30>:177:14' */
    magacinOut = 1.0;

    /* '<S30>:177:15' */
    Nexonar_Navigation_DWork.magacin1++;

    /* '<S30>:177:16' */
    Nexonar_Navigation_DWork.magacin1_LastCube = 1.0;
  } else if (Nexonar_Navigation_DWork.magacin3 < 5.0) {
    /* '<S30>:177:17' */
    /* '<S30>:177:18' */
    magacinOut = 3.0;

    /* '<S30>:177:19' */
    Nexonar_Navigation_DWork.magacin3++;
  } else {
    if (Nexonar_Navigation_DWork.magacin4 < 5.0) {
      /* '<S30>:177:20' */
      /* '<S30>:177:21' */
      magacinOut = 4.0;

      /* '<S30>:177:22' */
      Nexonar_Navigation_DWork.magacin4++;
    }
  }

  return magacinOut;
}

/* Function for Chart: '<S5>/Sortieralgorithmus' */
static real_T Nexonar_Navigat_findPlaceForRed(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForRed': '<S30>:174' */
  if ((Nexonar_Navigation_DWork.magacin1 == 0.0) ||
      ((Nexonar_Navigation_DWork.magacin1_LastCube == 1.0) &&
       (Nexonar_Navigation_DWork.magacin1 < 5.0))) {
    /* '<S30>:174:3' */
    /* '<S30>:174:4' */
    magacinOut = 1.0;

    /* '<S30>:174:5' */
    Nexonar_Navigation_DWork.magacin1++;

    /* '<S30>:174:6' */
    Nexonar_Navigation_DWork.magacin1_LastCube = 2.0;
  } else if ((Nexonar_Navigation_DWork.magacin2_LastCube == 1.0) &&
             (Nexonar_Navigation_DWork.magacin2 < 5.0)) {
    /* '<S30>:174:7' */
    /* '<S30>:174:8' */
    magacinOut = 2.0;

    /* '<S30>:174:9' */
    Nexonar_Navigation_DWork.magacin2++;

    /* '<S30>:174:10' */
    Nexonar_Navigation_DWork.magacin2_LastCube = 2.0;
  } else if ((Nexonar_Navigation_DWork.magacin0 < 5.0) &&
             (Nexonar_Navigation_DWork.magacin0 > 0.0)) {
    /* '<S30>:174:11' */
    /* '<S30>:174:12' */
    magacinOut = 0.0;

    /* '<S30>:174:13' */
    Nexonar_Navigation_DWork.magacin0++;

    /* '<S30>:174:14' */
  } else {
    /* '<S30>:174:16' */
    magacinOut = 5.0;

    /* '<S30>:174:17' */
    Nexonar_Navigation_DWork.magacin5++;

    /* '<S30>:174:18' */
    if (Nexonar_Navigation_DWork.magacin3_LastCube < 5.0) {
      /* '<S30>:174:20' */
      /* '<S30>:174:21' */
      magacinOut = 3.0;

      /* '<S30>:174:22' */
      Nexonar_Navigation_DWork.magacin3++;

      /* '<S30>:174:23' */
      Nexonar_Navigation_DWork.magacin3_LastCube = 2.0;
    } else {
      if (Nexonar_Navigation_DWork.magacin4_LastCube < 5.0) {
        /* '<S30>:174:25' */
        /* '<S30>:174:26' */
        magacinOut = 4.0;

        /* '<S30>:174:27' */
        Nexonar_Navigation_DWork.magacin4++;

        /* '<S30>:174:28' */
        Nexonar_Navigation_DWork.magacin4_LastCube = 2.0;
      }
    }
  }

  return magacinOut;
}

/* Model step function for TID0 */
void Nexonar_Navigation_step0(void)    /* Sample time: [2.0E-5s, 0.0s] */
{
  real_T y;
  boolean_T rtb_VergleichmitSchwellwert;
  boolean_T rtb_VergleichmitSchwellwert_c;
  real_T rtb_Sum;
  real_T rtb_MultiportSwitch_idx_0;
  real_T rtb_MultiportSwitch_idx_1;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_1;

  {                                    /* Sample time: [2.0E-5s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (c280xadc): '<S5>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  {
    AdcRegs.ADCTRL2.bit.RST_SEQ1 = 1;  /* Reset SEQ1 module*/
    AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;/*clear INT sequencer*/
    AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;  /* Software Trigger*/
    while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {
    }                                  /*Wait for Sequencer INT bit to clear */

    asm(" RPT #11 || NOP");
    Nexonar_Navigation_B.AnalogDigitalWandlungSampletime = (AdcRegs.ADCRESULT0) >>
      4;
    Nexonar_Navigation_B.AnalogDigitalWandlungSampleti_c = (AdcRegs.ADCRESULT1) >>
      4;
    Nexonar_Navigation_B.AnalogDigitalWandlungSampleti_f = (AdcRegs.ADCRESULT2) >>
      4;
    Nexonar_Navigation_B.AnalogDigitalWandlungSampleti_n = (AdcRegs.ADCRESULT3) >>
      4;
  }

  /* RelationalOperator: '<S35>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S35>/Constant'
   */
  rtb_VergleichmitSchwellwert = (Nexonar_Navigation_P.Constant_Value <=
    Nexonar_Navigation_B.AnalogDigitalWandlungSampletime);

  /* MultiPortSwitch: '<S36>/Multiport Switch' incorporates:
   *  Constant: '<S36>/Constant1'
   *  Constant: '<S36>/either edge'
   *  Constant: '<S36>/neg. edge'
   *  Constant: '<S36>/pos. edge'
   */
  switch ((int16_T)Nexonar_Navigation_P.EdgeDetector1_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = Nexonar_Navigation_P.posedge_Value[0];
    rtb_MultiportSwitch_idx_1 = Nexonar_Navigation_P.posedge_Value[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = Nexonar_Navigation_P.negedge_Value[0];
    rtb_MultiportSwitch_idx_1 = Nexonar_Navigation_P.negedge_Value[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = Nexonar_Navigation_P.eitheredge_Value[0];
    rtb_MultiportSwitch_idx_1 = Nexonar_Navigation_P.eitheredge_Value[1];
    break;
  }

  /* End of MultiPortSwitch: '<S36>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S36>/POSITIVE Edge' */
  /* Memory: '<S36>/Memory' */
  Nexonar_Naviga_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert, Nexonar_Navigation_DWork.Memory_PreviousInput,
    &Nexonar_Navigation_B.POSITIVEEdge);

  /* End of Outputs for SubSystem: '<S36>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S36>/NEGATIVE Edge' */
  Nexonar_Naviga_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert, Nexonar_Navigation_DWork.Memory_PreviousInput,
    &Nexonar_Navigation_B.NEGATIVEEdge);

  /* End of Outputs for SubSystem: '<S36>/NEGATIVE Edge' */

  /* RelationalOperator: '<S35>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S35>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert_c =
    (Nexonar_Navigation_B.AnalogDigitalWandlungSampleti_c <=
     Nexonar_Navigation_P.HeuristischermittelterSchwellwe);

  /* MATLAB Function: '<S35>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S35>/Unit Delay3'
   *  UnitDelay: '<S35>/Unit Delay4'
   *  UnitDelay: '<S35>/Unit Delay5'
   */
  /* MATLAB Function 'Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2': '<S39>:1' */
  /* '<S39>:1:3' */
  y = 1.0;
  tmp_0 = !Nexonar_Navigation_DWork.UnitDelay3_DSTATE;
  tmp_1 = !Nexonar_Navigation_DWork.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_c))
  {
    /* '<S39>:1:7' */
    y = Nexonar_Navigation_DWork.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_c) {
    /* '<S39>:1:10' */
    /* '<S39>:1:11' */
    y = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_c)) {
    /* '<S39>:1:14' */
    /* '<S39>:1:15' */
    y = -1.0;
  }

  tmp_0 = (tmp_0 && Nexonar_Navigation_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_c))
  {
    /* '<S39>:1:22' */
    /* '<S39>:1:23' */
    y = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_c)
  {
    /* '<S39>:1:26' */
    /* '<S39>:1:27' */
    y = Nexonar_Navigation_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_c) {
    /* '<S39>:1:34' */
    /* '<S39>:1:35' */
    y = 1.0;
  }

  tmp_0 = (Nexonar_Navigation_DWork.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_c))
  {
    /* '<S39>:1:38' */
    /* '<S39>:1:39' */
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_c))
  {
    /* '<S39>:1:46' */
    /* '<S39>:1:47' */
    y = Nexonar_Navigation_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_c) {
    /* '<S39>:1:50' */
    /* '<S39>:1:51' */
    y = -1.0;
  }

  tmp_0 = (Nexonar_Navigation_DWork.UnitDelay3_DSTATE &&
           Nexonar_Navigation_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_c)
  {
    /* '<S39>:1:58' */
    /* '<S39>:1:59' */
    y = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_c))
  {
    /* '<S39>:1:62' */
    /* '<S39>:1:63' */
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_c) {
    /* '<S39>:1:66' */
    /* '<S39>:1:67' */
    y = Nexonar_Navigation_DWork.UnitDelay5_DSTATE;
  }

  if (y == 1.0) {
    /* '<S39>:1:70' */
    /* '<S39>:1:71' */
    Nexonar_Navigation_B.RL = 1.0;
  } else {
    /* '<S39>:1:73' */
    Nexonar_Navigation_B.RL = 0.0;
  }

  /* MATLAB Function: '<S35>/MATLAB Function1' incorporates:
   *  Logic: '<S36>/Logical Operator1'
   *  MATLAB Function: '<S35>/MATLAB Function2'
   *  Product: '<S35>/Product3'
   *  UnitDelay: '<S35>/Unit Delay1'
   */
  Nexonar_Nav_MATLABFunction1((real_T)
    (Nexonar_Navigation_B.POSITIVEEdge.RelationalOperator1 ||
     Nexonar_Navigation_B.NEGATIVEEdge.RelationalOperator1) * y,
    Nexonar_Navigation_DWork.UnitDelay1_DSTATE,
    &Nexonar_Navigation_B.sf_MATLABFunction1);

  /* Product: '<S35>/Product1' incorporates:
   *  Constant: '<S35>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  rtb_Sum = Nexonar_Navigation_P.WinkelFlankePolulo3416V022Polul *
    Nexonar_Navigation_B.sf_MATLABFunction1.y;

  /* MultiPortSwitch: '<S37>/Multiport Switch' incorporates:
   *  Constant: '<S37>/Constant1'
   *  Constant: '<S37>/either edge'
   *  Constant: '<S37>/neg. edge'
   *  Constant: '<S37>/pos. edge'
   */
  switch ((int16_T)Nexonar_Navigation_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = Nexonar_Navigation_P.posedge_Value_m[0];
    rtb_MultiportSwitch_idx_1 = Nexonar_Navigation_P.posedge_Value_m[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = Nexonar_Navigation_P.negedge_Value_g[0];
    rtb_MultiportSwitch_idx_1 = Nexonar_Navigation_P.negedge_Value_g[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = Nexonar_Navigation_P.eitheredge_Value_e[0];
    rtb_MultiportSwitch_idx_1 = Nexonar_Navigation_P.eitheredge_Value_e[1];
    break;
  }

  /* End of MultiPortSwitch: '<S37>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S37>/POSITIVE Edge' */
  /* Memory: '<S37>/Memory' */
  Nexonar_Naviga_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_c,
    Nexonar_Navigation_DWork.Memory_PreviousInput_e,
    &Nexonar_Navigation_B.POSITIVEEdge_i);

  /* End of Outputs for SubSystem: '<S37>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S37>/NEGATIVE Edge' */
  Nexonar_Naviga_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_c,
    Nexonar_Navigation_DWork.Memory_PreviousInput_e,
    &Nexonar_Navigation_B.NEGATIVEEdge_h);

  /* End of Outputs for SubSystem: '<S37>/NEGATIVE Edge' */

  /* MATLAB Function: '<S35>/MATLAB Function3' incorporates:
   *  Logic: '<S37>/Logical Operator1'
   *  MATLAB Function: '<S35>/MATLAB Function2'
   *  Product: '<S35>/Product'
   *  UnitDelay: '<S35>/Unit Delay2'
   */
  Nexonar_Nav_MATLABFunction1(y * (real_T)
    (Nexonar_Navigation_B.POSITIVEEdge_i.RelationalOperator1 ||
     Nexonar_Navigation_B.NEGATIVEEdge_h.RelationalOperator1),
    Nexonar_Navigation_DWork.UnitDelay2_DSTATE,
    &Nexonar_Navigation_B.sf_MATLABFunction3);

  /* Sum: '<S35>/Sum' incorporates:
   *  Constant: '<S35>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S35>/Product2'
   */
  rtb_Sum += Nexonar_Navigation_B.sf_MATLABFunction3.y *
    Nexonar_Navigation_P.WinkelFlankePolulo3416V022Pol_j;

  /* RateTransition: '<S31>/Rate Transition3' */
  if (Nexonar_Navigation_M->Timing.RateInteraction.TID0_1) {
    Nexonar_Navigation_B.RateTransition3 = rtb_Sum;

    /* RateTransition: '<S5>/Rate Transition2' */
    Nexonar_Navigation_B.RateTransition2 =
      Nexonar_Navigation_B.AnalogDigitalWandlungSampleti_f;

    /* RateTransition: '<S5>/Rate Transition3' */
    Nexonar_Navigation_B.RateTransition3_l =
      Nexonar_Navigation_B.AnalogDigitalWandlungSampleti_n;
  }

  /* End of RateTransition: '<S31>/Rate Transition3' */

  /* S-Function (c280xgpio_do): '<S31>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (Nexonar_Navigation_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Update for Memory: '<S36>/Memory' */
  Nexonar_Navigation_DWork.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S35>/Unit Delay3' */
  Nexonar_Navigation_DWork.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S35>/Unit Delay4' */
  Nexonar_Navigation_DWork.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert_c;

  /* Update for UnitDelay: '<S35>/Unit Delay5' incorporates:
   *  MATLAB Function: '<S35>/MATLAB Function2'
   */
  Nexonar_Navigation_DWork.UnitDelay5_DSTATE = y;

  /* Update for UnitDelay: '<S35>/Unit Delay1' */
  Nexonar_Navigation_DWork.UnitDelay1_DSTATE =
    Nexonar_Navigation_B.sf_MATLABFunction1.y;

  /* Update for Memory: '<S37>/Memory' */
  Nexonar_Navigation_DWork.Memory_PreviousInput_e =
    rtb_VergleichmitSchwellwert_c;

  /* Update for UnitDelay: '<S35>/Unit Delay2' */
  Nexonar_Navigation_DWork.UnitDelay2_DSTATE =
    Nexonar_Navigation_B.sf_MATLABFunction3.y;
}

/* Model step function for TID1 */
void Nexonar_Navigation_step1(void)    /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_y_l;
<<<<<<< HEAD
=======
  real_T rtb_gatePWM;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
  int32_T bitIdx;
  uint32_T u;
  int16_T j;
  int32_T intVal;
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
<<<<<<< HEAD
  real_T pwm_out_l_tmp;
=======
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d

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
    /* Transition: '<S19>:3' */
    Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
      Nexonar_Navigation_IN_init;

    /* Entry 'init': '<S19>:2' */
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
      /* During 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S19>:126' */
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
        /* Transition: '<S19>:144' */
        /* Transition: '<S19>:145' */
        /* Transition: '<S19>:146' */
        /* Transition: '<S19>:151' */
        /* Transition: '<S19>:150' */
        /* Transition: '<S19>:149' */
        /* Transition: '<S19>:147' */
        /* Transition: '<S19>:156' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          Nexonar_IN_x5_valid_data_found1;

        /* Entry 'x5_valid_data_found1': '<S19>:148' */
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
        /* Transition: '<S19>:135' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          Nexonar_Navigatio_IN_x1_search1;

        /* Entry 'x1_search1': '<S19>:125' */
        Nexonar_Navigation_DWork.search = c28x_add_s16_s16_s16_sat
          (Nexonar_Navigation_DWork.search, 1);
      }
      break;

     case Nexonar_Navigation_IN_init:
      /* During 'init': '<S19>:2' */
      /* Transition: '<S19>:112' */
      Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
        Nexonar_Navigat_IN_wert_erkannt;
      Nexon_enter_atomic_wert_erkannt(RateTransition);
      break;

     case Nexonar_Navigat_IN_wert_erkannt:
      /* During 'wert_erkannt': '<S19>:109' */
      /* Transition: '<S19>:116' */
      Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
        Nexonar_Naviga_IN_wert_erkannt2;

      /* Entry 'wert_erkannt2': '<S19>:115' */
      Nexonar_Navigation_DWork.search = 0;
      Nexonar_Navigation_DWork.counter = c28x_add_s32_s32_s32_sat
        (Nexonar_Navigation_DWork.counter, 1L);
      break;

     case Nexonar_Naviga_IN_wert_erkannt2:
      /* During 'wert_erkannt2': '<S19>:115' */
      if (Nexonar_Navigation_DWork.values_out1[Nexonar_Navigation_DWork.search] ==
          88) {
        /* Transition: '<S19>:127' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S19>:126' */
        Nexonar_Navigation_DWork.x_found = c28x_add_s32_s32_s32_sat
          (Nexonar_Navigation_DWork.x_found, 1L);
      } else {
        /* Transition: '<S19>:128' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          Nexonar_Navigatio_IN_x1_search1;

        /* Entry 'x1_search1': '<S19>:125' */
        Nexonar_Navigation_DWork.search = c28x_add_s16_s16_s16_sat
          (Nexonar_Navigation_DWork.search, 1);
      }
      break;

     case Nexonar_Navigatio_IN_x1_search1:
      /* During 'x1_search1': '<S19>:125' */
      if (Nexonar_Navigation_DWork.values_out1[Nexonar_Navigation_DWork.search] ==
          88) {
        /* Transition: '<S19>:129' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S19>:126' */
        Nexonar_Navigation_DWork.x_found = c28x_add_s32_s32_s32_sat
          (Nexonar_Navigation_DWork.x_found, 1L);
      } else if (Nexonar_Navigation_DWork.search < 19) {
        /* Transition: '<S19>:130' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          Nexonar_Navigatio_IN_x1_search1;

        /* Entry 'x1_search1': '<S19>:125' */
        Nexonar_Navigation_DWork.search = c28x_add_s16_s16_s16_sat
          (Nexonar_Navigation_DWork.search, 1);
      } else {
        /* Transition: '<S19>:133' */
        Nexonar_Navigation_DWork.is_c17_Nexonar_Navigation =
          Nexonar_Navigat_IN_wert_erkannt;
        Nexon_enter_atomic_wert_erkannt(RateTransition);
      }
      break;

     default:
      /* During 'x5_valid_data_found1': '<S19>:148' */
      /* Transition: '<S19>:152' */
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
    /* Transition: '<S18>:3' */
    Nexonar_Navigation_DWork.is_c16_Nexonar_Navigation =
      Nexonar_Navigation_IN_x0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c16_Nexonar_Navigation) {
     case Nexonar_Navig_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S18>:17' */
      /* Transition: '<S18>:24' */
      Nexonar_Navigation_DWork.is_c16_Nexonar_Navigation =
        Nexonar_Navigation_IN_x1_1;

      /* Entry 'x1_1': '<S18>:26' */
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
      /* During 'x0': '<S18>:2' */
      /* Transition: '<S18>:7' */
      Nexonar_Navigation_DWork.is_c16_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S18>:26' */
      /* Transition: '<S18>:25' */
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
    /* Transition: '<S16>:3' */
    Nexonar_Navigation_DWork.is_c13_Nexonar_Navigation =
      Nexonar_Navigation_IN_x0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c13_Nexonar_Navigation) {
     case Nexonar_Navig_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S16>:17' */
      /* Transition: '<S16>:24' */
      Nexonar_Navigation_DWork.is_c13_Nexonar_Navigation =
        Nexonar_Navigation_IN_x1_1;

      /* Entry 'x1_1': '<S16>:26' */
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
      /* During 'x0': '<S16>:2' */
      /* Transition: '<S16>:7' */
      Nexonar_Navigation_DWork.is_c13_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S16>:26' */
      /* Transition: '<S16>:25' */
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
    /* Transition: '<S17>:3' */
    Nexonar_Navigation_DWork.is_c14_Nexonar_Navigation =
      Nexonar_Navigation_IN_x0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c14_Nexonar_Navigation) {
     case Nexonar_Navig_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S17>:17' */
      /* Transition: '<S17>:24' */
      Nexonar_Navigation_DWork.is_c14_Nexonar_Navigation =
        Nexonar_Navigation_IN_x1_1;

      /* Entry 'x1_1': '<S17>:26' */
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
      /* During 'x0': '<S17>:2' */
      /* Transition: '<S17>:7' */
      Nexonar_Navigation_DWork.is_c14_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S17>:26' */
      /* Transition: '<S17>:25' */
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
<<<<<<< HEAD
    Nexonar_Navigation_B.Zielradius = 40.0;
=======
    Nexonar_Navigation_B.Zielradius = 25.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
  } else {
    switch (Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation) {
     case Nexonar_Navigation_IN_Ende:
      /* During 'Ende': '<S1>:132' */
      break;

     case Nexonar_Navigation_IN_Parken:
      /* During 'Parken': '<S1>:73' */
      if ((fabs(Nexonar_Navigation_B.x_soll - RoundingFunction) <=
           Nexonar_Navigation_B.Zielradius) && (fabs(Nexonar_Navigation_B.y_soll
            - RoundingFunction1) <= Nexonar_Navigation_B.Zielradius)) {
        /* Transition: '<S1>:134' */
        Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation =
          Nexonar_Navigation_IN_Ende;
      }
      break;

     case Nexonar_Navigation_IN_Sammeln:
      Nexonar_Navigation_Sammeln(&RoundingFunction, &RoundingFunction1);
      break;

     case Nexon_IN_Start_Einstellung_Init:
<<<<<<< HEAD
      Nexonar_Navigation_B.Zielradius = 40.0;
=======
      Nexonar_Navigation_B.Zielradius = 25.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d

      /* During 'Start_Einstellung_Init': '<S1>:44' */
      /* Transition: '<S1>:74' */
      Nexonar_Navigation_B.Gang = 0.0;
      Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation =
        Nexonar_Navigation_IN_Sammeln;

      /* Entry Internal 'Sammeln': '<S1>:70' */
      /* Transition: '<S1>:82' */
      Nexonar_Navigation_DWork.Counter = 0.0;
      Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Naviga_IN_Anfahrpunkt_1;

      /* Entry 'Anfahrpunkt_1': '<S1>:81' */
<<<<<<< HEAD
      Nexonar_Navigation_B.x_soll = 1400.0;
      Nexonar_Navigation_B.y_soll = 50.0;
=======
      Nexonar_Navigation_B.x_soll = 700.0;
      Nexonar_Navigation_B.y_soll = 700.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      break;

     default:
      /* During 'Uebergabe': '<S1>:72' */
      if (Nexonar_Navigation_DWork.Counter == 2.0) {
        /* Transition: '<S1>:77' */
        Nexonar_Navigation_B.Gang = 0.0;

        /* Exit Internal 'Uebergabe': '<S1>:72' */
        Nexonar_Navigation_DWork.is_Uebergabe = Nexonar_Navi_IN_NO_ACTIVE_CHILD;
        Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation =
          Nexonar_Navigation_IN_Parken;

        /* Entry 'Parken': '<S1>:73' */
        Nexonar_Navigation_B.x_soll = Nexonar_Navigation_DWork.x_least;
<<<<<<< HEAD
        Nexonar_Navigation_B.y_soll = -100.0;
=======
        Nexonar_Navigation_B.y_soll = -50.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      } else {
        switch (Nexonar_Navigation_DWork.is_Uebergabe) {
         case Ne_IN_Uebergabepunkt_x_Richtung:
          /* During 'Uebergabepunkt_x_Richtung': '<S1>:120' */
          if ((fabs(Nexonar_Navigation_B.x_soll - RoundingFunction) <=
               Nexonar_Navigation_B.Zielradius) && (fabs
               (Nexonar_Navigation_B.y_soll - RoundingFunction1) <=
               Nexonar_Navigation_B.Zielradius)) {
            /* Transition: '<S1>:119' */
            Nexonar_Navigation_DWork.x_least = Nexonar_Navigation_B.x_soll;
            Nexonar_Navigation_DWork.is_Uebergabe =
              Nexonar_Navigation_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S1>:118' */
            Nexonar_Navigation_DWork.Counter++;
          }
          break;

         case Ne_IN_Uebergabepunkt_y_Richtung:
          /* During 'Uebergabepunkt_y_Richtung': '<S1>:121' */
          if ((fabs(Nexonar_Navigation_B.x_soll - RoundingFunction) <=
               Nexonar_Navigation_B.Zielradius) && (fabs
               (Nexonar_Navigation_B.y_soll - RoundingFunction1) <=
               Nexonar_Navigation_B.Zielradius)) {
            /* Transition: '<S1>:122' */
            Nexonar_Navigation_DWork.is_Uebergabe =
              Nexonar_Navigation_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S1>:125' */
            Nexonar_Navigation_DWork.Counter++;
          }
          break;

         case Nexonar_Navigation_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S1>:118' */
          /* Transition: '<S1>:127' */
          Nexonar_Navigation_DWork.is_Uebergabe =
            Ne_IN_Uebergabepunkt_y_Richtung;

          /* Entry 'Uebergabepunkt_y_Richtung': '<S1>:121' */
          Nexonar_Navigation_B.x_soll = Nexonar_Navigation_DWork.x_least;
          Nexonar_Navigation_B.y_soll = 100.0;
          break;

         default:
          /* During 'Wechsel_2': '<S1>:125' */
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Fahrablaufsteuerung [Init: Zielradius = 5mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert - ' */

  /* Outputs for Atomic SubSystem: '<Root>/Navigationssystem [Einstellungen moeglich]' */
  /* Sum: '<S8>/Soll-Ist-Abgleich_x' */
  RoundingFunction = Nexonar_Navigation_B.x_soll - RoundingFunction;

  /* Sum: '<S8>/Soll-Ist-Abgleich_y' */
  RoundingFunction1 = Nexonar_Navigation_B.y_soll - RoundingFunction1;

  /* Chart: '<S9>/Quadrantenteiler' */
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
    /* Transition: '<S13>:28' */
    Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
      Nexonar_Navig_IN_Start_Warten_o;
  } else {
    switch (Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation) {
     case Nexonar_Navigatio_IN_Quadrant_a:
      Nexonar_Navigation_B.Quadrant = 0.0;

      /* During 'Quadrant_a': '<S13>:8' */
      /* Transition: '<S13>:36' */
      /* Transition: '<S13>:40' */
      if ((RoundingFunction >= 0.0) && (RoundingFunction1 >= 0.0)) {
        /* Transition: '<S13>:29' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S13>:8' */
        Nexonar_Navigation_B.Quadrant = 0.0;
      } else if ((RoundingFunction <= 0.0) && (RoundingFunction1 > 0.0)) {
        /* Transition: '<S13>:30' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S13>:9' */
        Nexonar_Navigation_B.Quadrant = 1.0;
      } else if ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0)) {
        /* Transition: '<S13>:31' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S13>:11' */
        Nexonar_Navigation_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S13>:32' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S13>:12' */
        Nexonar_Navigation_B.Quadrant = 3.0;
      }
      break;

     case Nexonar_Navigatio_IN_Quadrant_b:
      Nexonar_Navigation_B.Quadrant = 1.0;

      /* During 'Quadrant_b': '<S13>:9' */
      /* Transition: '<S13>:37' */
      /* Transition: '<S13>:40' */
      if ((RoundingFunction >= 0.0) && (RoundingFunction1 >= 0.0)) {
        /* Transition: '<S13>:29' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S13>:8' */
        Nexonar_Navigation_B.Quadrant = 0.0;
      } else if ((RoundingFunction <= 0.0) && (RoundingFunction1 > 0.0)) {
        /* Transition: '<S13>:30' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S13>:9' */
        Nexonar_Navigation_B.Quadrant = 1.0;
      } else if ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0)) {
        /* Transition: '<S13>:31' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S13>:11' */
        Nexonar_Navigation_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S13>:32' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S13>:12' */
        Nexonar_Navigation_B.Quadrant = 3.0;
      }
      break;

     case Nexonar_Navigatio_IN_Quadrant_c:
      Nexonar_Navigation_B.Quadrant = 2.0;

      /* During 'Quadrant_c': '<S13>:11' */
      /* Transition: '<S13>:38' */
      /* Transition: '<S13>:40' */
      if ((RoundingFunction >= 0.0) && (RoundingFunction1 >= 0.0)) {
        /* Transition: '<S13>:29' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S13>:8' */
        Nexonar_Navigation_B.Quadrant = 0.0;
      } else if ((RoundingFunction <= 0.0) && (RoundingFunction1 > 0.0)) {
        /* Transition: '<S13>:30' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S13>:9' */
        Nexonar_Navigation_B.Quadrant = 1.0;
      } else if ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0)) {
        /* Transition: '<S13>:31' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S13>:11' */
        Nexonar_Navigation_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S13>:32' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S13>:12' */
        Nexonar_Navigation_B.Quadrant = 3.0;
      }
      break;

     case Nexonar_Navigatio_IN_Quadrant_d:
      Nexonar_Navigation_B.Quadrant = 3.0;

      /* During 'Quadrant_d': '<S13>:12' */
      /* Transition: '<S13>:39' */
      /* Transition: '<S13>:40' */
      if ((RoundingFunction >= 0.0) && (RoundingFunction1 >= 0.0)) {
        /* Transition: '<S13>:29' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S13>:8' */
        Nexonar_Navigation_B.Quadrant = 0.0;
      } else if ((RoundingFunction <= 0.0) && (RoundingFunction1 > 0.0)) {
        /* Transition: '<S13>:30' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S13>:9' */
        Nexonar_Navigation_B.Quadrant = 1.0;
      } else if ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0)) {
        /* Transition: '<S13>:31' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S13>:11' */
        Nexonar_Navigation_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S13>:32' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S13>:12' */
        Nexonar_Navigation_B.Quadrant = 3.0;
      }
      break;

     default:
      /* During 'Start_Warten': '<S13>:41' */
      /* Transition: '<S13>:42' */
      if ((RoundingFunction >= 0.0) && (RoundingFunction1 >= 0.0)) {
        /* Transition: '<S13>:29' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S13>:8' */
        Nexonar_Navigation_B.Quadrant = 0.0;
      } else if ((RoundingFunction <= 0.0) && (RoundingFunction1 > 0.0)) {
        /* Transition: '<S13>:30' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S13>:9' */
        Nexonar_Navigation_B.Quadrant = 1.0;
      } else if ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0)) {
        /* Transition: '<S13>:31' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S13>:11' */
        Nexonar_Navigation_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S13>:32' */
        Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
          Nexonar_Navigatio_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S13>:12' */
        Nexonar_Navigation_B.Quadrant = 3.0;
      }
      break;
    }
  }

  /* End of Chart: '<S9>/Quadrantenteiler' */

  /* Chart: '<S9>/Winkelausgabe fuer Ausrichtung' */
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
    /* Transition: '<S14>:81' */
    Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
      Nexonar_Navi_IN_Start_Warten_og;
  } else {
    switch (Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation) {
     case N_IN_Ausrichtung_ohne_Aenderung:
      /* During 'Ausrichtung_ohne_Aenderung': '<S14>:52' */
      /* Transition: '<S14>:66' */
      /* Transition: '<S14>:70' */
      if ((RoundingFunction == 0.0) && (RoundingFunction1 == 0.0)) {
        /* Transition: '<S14>:60' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          N_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S14>:52' */
        Nexonar_Navigation_B.alpha_neu = rtb_RoundingFunction2;
      } else if (((RoundingFunction > 0.0) && (RoundingFunction1 >= 0.0)) ||
                 ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0))) {
        /* Transition: '<S14>:76' */
        /* Transition: '<S14>:77' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S14>:24' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction1) / fabs
          (RoundingFunction)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      } else {
        /* Transition: '<S14>:78' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertun_o;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S14>:71' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction) / fabs
          (RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      }
      break;

     case Nexonar_Navi_IN_Start_Warten_og:
      /* During 'Start_Warten': '<S14>:82' */
      /* Transition: '<S14>:83' */
      if ((RoundingFunction == 0.0) && (RoundingFunction1 == 0.0)) {
        /* Transition: '<S14>:60' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          N_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S14>:52' */
        Nexonar_Navigation_B.alpha_neu = rtb_RoundingFunction2;
      } else if (((RoundingFunction > 0.0) && (RoundingFunction1 >= 0.0)) ||
                 ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0))) {
        /* Transition: '<S14>:76' */
        /* Transition: '<S14>:77' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S14>:24' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction1) / fabs
          (RoundingFunction)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      } else {
        /* Transition: '<S14>:78' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertun_o;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S14>:71' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction) / fabs
          (RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      }
      break;

     case IN_Trigonometrische_Auswertung_:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S14>:24' */
      /* Transition: '<S14>:68' */
      /* Transition: '<S14>:70' */
      if ((RoundingFunction == 0.0) && (RoundingFunction1 == 0.0)) {
        /* Transition: '<S14>:60' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          N_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S14>:52' */
        Nexonar_Navigation_B.alpha_neu = rtb_RoundingFunction2;
      } else if (((RoundingFunction > 0.0) && (RoundingFunction1 >= 0.0)) ||
                 ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0))) {
        /* Transition: '<S14>:76' */
        /* Transition: '<S14>:77' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S14>:24' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction1) / fabs
          (RoundingFunction)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      } else {
        /* Transition: '<S14>:78' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertun_o;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S14>:71' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction) / fabs
          (RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      }
      break;

     default:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S14>:71' */
      /* Transition: '<S14>:73' */
      /* Transition: '<S14>:70' */
      if ((RoundingFunction == 0.0) && (RoundingFunction1 == 0.0)) {
        /* Transition: '<S14>:60' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          N_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S14>:52' */
        Nexonar_Navigation_B.alpha_neu = rtb_RoundingFunction2;
      } else if (((RoundingFunction > 0.0) && (RoundingFunction1 >= 0.0)) ||
                 ((RoundingFunction < 0.0) && (RoundingFunction1 <= 0.0))) {
        /* Transition: '<S14>:76' */
        /* Transition: '<S14>:77' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S14>:24' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction1) / fabs
          (RoundingFunction)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      } else {
        /* Transition: '<S14>:78' */
        Nexonar_Navigation_DWork.is_c12_Nexonar_Navigation =
          IN_Trigonometrische_Auswertun_o;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S14>:71' */
        Nexonar_Navigation_B.alpha_neu = atan(fabs(RoundingFunction) / fabs
          (RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Nexonar_Navigation_B.alpha_neu = rt_roundd_snf
          (Nexonar_Navigation_B.alpha_neu);
      }
      break;
    }
  }

  /* End of Chart: '<S9>/Winkelausgabe fuer Ausrichtung' */

  /* Sum: '<S9>/Winkeldifferenz' incorporates:
   *  Gain: '<S9>/Quadranten- verschiebung'
   *  Sum: '<S9>/Winkelverschiebung'
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
    /* Transition: '<S6>:38' */
    Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
      Nexonar_Nav_IN_Einstellung_Init;

    /* Entry 'Einstellung_Init': '<S6>:44' */
    Nexonar_Navigation_DWork.Stillstandintervall = 5.0;
    Nexonar_Navigation_B.pwm_mindern[0] = 0.0;
    Nexonar_Navigation_B.pwm_mindern[1] = 0.0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation) {
     case IN_Drehstillstand_mit_Ausrichtu:
      /* During 'Drehstillstand_mit_Ausrichtungsregelung': '<S6>:26' */
      /* Transition: '<S6>:96' */
      /* Transition: '<S6>:98' */
      /* Transition: '<S6>:65' */
      rtb_RoundingFunction2 += 180.0 * Nexonar_Navigation_B.Gang;
      if (fabs(rtb_RoundingFunction2) > 180.0) {
        /* Transition: '<S6>:9' */
        if (rtb_RoundingFunction2 > 0.0) {
          /* Transition: '<S6>:15' */
          rtb_RoundingFunction2 += -360.0;
        } else {
          /* Transition: '<S6>:18' */
          rtb_RoundingFunction2 += 360.0;
        }
      } else {
        /* Transition: '<S6>:69' */
      }

      if (fabs(rtb_RoundingFunction2) <=
          Nexonar_Navigation_DWork.Stillstandintervall) {
        /* Transition: '<S6>:27' */
        Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
          IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit(&rtb_RoundingFunction2);
      } else {
        /* Transition: '<S6>:94' */
        Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
          IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S6>:11' */
        Nexonar_Navigation_B.alpha_diff_opt = rtb_RoundingFunction2;
      }
      break;

     case Nexonar_Nav_IN_Einstellung_Init:
      /* During 'Einstellung_Init': '<S6>:44' */
      /* Transition: '<S6>:46' */
      /* Transition: '<S6>:65' */
      rtb_RoundingFunction2 += 180.0 * Nexonar_Navigation_B.Gang;
      if (fabs(rtb_RoundingFunction2) > 180.0) {
        /* Transition: '<S6>:9' */
        if (rtb_RoundingFunction2 > 0.0) {
          /* Transition: '<S6>:15' */
          rtb_RoundingFunction2 += -360.0;
        } else {
          /* Transition: '<S6>:18' */
          rtb_RoundingFunction2 += 360.0;
        }
      } else {
        /* Transition: '<S6>:69' */
      }

      if (fabs(rtb_RoundingFunction2) <=
          Nexonar_Navigation_DWork.Stillstandintervall) {
        /* Transition: '<S6>:27' */
        Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
          IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit(&rtb_RoundingFunction2);
      } else {
        /* Transition: '<S6>:94' */
        Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
          IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S6>:11' */
        Nexonar_Navigation_B.alpha_diff_opt = rtb_RoundingFunction2;
      }
      break;

     default:
      /* During 'Weiterleitung_bei_Drehzustand': '<S6>:11' */
      /* Transition: '<S6>:97' */
      /* Transition: '<S6>:98' */
      /* Transition: '<S6>:65' */
      rtb_RoundingFunction2 += 180.0 * Nexonar_Navigation_B.Gang;
      if (fabs(rtb_RoundingFunction2) > 180.0) {
        /* Transition: '<S6>:9' */
        if (rtb_RoundingFunction2 > 0.0) {
          /* Transition: '<S6>:15' */
          rtb_RoundingFunction2 += -360.0;
        } else {
          /* Transition: '<S6>:18' */
          rtb_RoundingFunction2 += 360.0;
        }
      } else {
        /* Transition: '<S6>:69' */
      }

      if (fabs(rtb_RoundingFunction2) <=
          Nexonar_Navigation_DWork.Stillstandintervall) {
        /* Transition: '<S6>:27' */
        Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
          IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit(&rtb_RoundingFunction2);
      } else {
        /* Transition: '<S6>:94' */
        Nexonar_Navigation_DWork.is_c8_Nexonar_Navigation =
          IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S6>:11' */
        Nexonar_Navigation_B.alpha_diff_opt = rtb_RoundingFunction2;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±5°]' */

  /* Abs: '<S8>/Abs x_diff' */
  RoundingFunction = fabs(RoundingFunction);

  /* MATLAB Function: '<S8>/Betrag pwm_x' incorporates:
   *  Abs: '<S8>/Abs x_diff'
   */
  /* MATLAB Function 'Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x': '<S10>:1' */
  if ((Nexonar_Navigation_B.Zielradius < RoundingFunction) && (RoundingFunction <
       60.0 + Nexonar_Navigation_B.Zielradius)) {
    /* '<S10>:1:3' */
    /* '<S10>:1:4' */
    RoundingFunction = 60.0;
  } else if (RoundingFunction <= Nexonar_Navigation_B.Zielradius) {
    /* '<S10>:1:5' */
    /* '<S10>:1:6' */
    RoundingFunction = 0.0;
  } else if (RoundingFunction >= 100.0 + Nexonar_Navigation_B.Zielradius) {
    /* '<S10>:1:7' */
    /* '<S10>:1:8' */
    RoundingFunction = 100.0;
  } else {
    /* '<S10>:1:10' */
  }

  /* End of MATLAB Function: '<S8>/Betrag pwm_x' */

  /* Abs: '<S8>/Abs y_diff' */
  RoundingFunction1 = fabs(RoundingFunction1);

  /* MATLAB Function: '<S8>/Betrag pwm_y' incorporates:
   *  Abs: '<S8>/Abs y_diff'
   */
  /* MATLAB Function 'Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_y': '<S11>:1' */
  if ((Nexonar_Navigation_B.Zielradius < RoundingFunction1) &&
      (RoundingFunction1 < 60.0 + Nexonar_Navigation_B.Zielradius)) {
    /* '<S11>:1:3' */
    /* '<S11>:1:4' */
    RoundingFunction1 = 60.0;
  } else if (RoundingFunction1 <= Nexonar_Navigation_B.Zielradius) {
    /* '<S11>:1:5' */
    /* '<S11>:1:6' */
    RoundingFunction1 = 0.0;
  } else if (RoundingFunction1 >= 100.0 + Nexonar_Navigation_B.Zielradius) {
    /* '<S11>:1:7' */
    /* '<S11>:1:8' */
    RoundingFunction1 = 100.0;
  } else {
    /* '<S11>:1:10' */
  }

  /* End of MATLAB Function: '<S8>/Betrag pwm_y' */

  /* MATLAB Function: '<S8>/PWM-Vektorbetrag' */
  /* MATLAB Function 'Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/PWM-Vektorbetrag': '<S12>:1' */
  /* '<S12>:1:3' */
  RoundingFunction = rt_roundd_snf(sqrt(RoundingFunction * RoundingFunction +
    RoundingFunction1 * RoundingFunction1));

  /* Saturate: '<S8>/PWM-Wertebereich' */
  if (RoundingFunction > Nexonar_Navigation_P.PWMWertebereich_UpperSat) {
    RoundingFunction = Nexonar_Navigation_P.PWMWertebereich_UpperSat;
  } else {
    if (RoundingFunction < Nexonar_Navigation_P.PWMWertebereich_LowerSat) {
      RoundingFunction = Nexonar_Navigation_P.PWMWertebereich_LowerSat;
    }
  }

  /* End of Saturate: '<S8>/PWM-Wertebereich' */

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
    /* Transition: '<S7>:91' */
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
      /* During 'Drehen_rechts_gesteuert': '<S7>:51' */
      /* Transition: '<S7>:63' */
      /* Transition: '<S7>:75' */
      if ((fabs(Nexonar_Navigation_B.alpha_diff_opt) > 0.0) && (RoundingFunction
           > 0.0)) {
        /* Transition: '<S7>:58' */
        if (fabs(Nexonar_Navigation_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S7>:21' */
          if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S7>:45' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexonar_Nav_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S7>:8' */
            Nexonar_Navigation_B.pwm_out_l = 100.0;
            Nexonar_Navigation_B.pwm_out_r = 100.0;
            Nexonar_Navigation_B.r_l_out_l = 0.0;
            Nexonar_Navigation_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S7>:57' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexonar_Na_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S7>:9' */
            Nexonar_Navigation_B.pwm_out_l = 100.0;
            Nexonar_Navigation_B.pwm_out_r = 100.0;
            Nexonar_Navigation_B.r_l_out_l = 1.0;
            Nexonar_Navigation_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S7>:53' */
          if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S7>:54' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexon_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S7>:43' */
            Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.r_l_out_l = 0.0;
            Nexonar_Navigation_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S7>:55' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexo_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S7>:51' */
<<<<<<< HEAD
            pwm_out_l_tmp = 59.0 + fabs(Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_l = pwm_out_l_tmp;
            Nexonar_Navigation_B.pwm_out_r = pwm_out_l_tmp;
=======
            RoundingFunction = 59.0 + fabs(Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_l = RoundingFunction;
            Nexonar_Navigation_B.pwm_out_r = RoundingFunction;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
            Nexonar_Navigation_B.r_l_out_l = 1.0;
            Nexonar_Navigation_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S7>:82' */
        if (Nexonar_Navigation_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S7>:85' */
          RoundingFunction1 = 1.0 - Nexonar_Navigation_B.Gang;
          rtb_RoundingFunction2 = Nexonar_Navigation_B.Gang;
        } else if (Nexonar_Navigation_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S7>:86' */
          RoundingFunction1 = Nexonar_Navigation_B.Gang;
          rtb_RoundingFunction2 = 1.0 - Nexonar_Navigation_B.Gang;
        } else {
          /* Transition: '<S7>:87' */
          RoundingFunction1 = 0.0;
          rtb_RoundingFunction2 = 0.0;
        }

        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S7>:94' */
<<<<<<< HEAD
        pwm_out_l_tmp = rt_roundd_snf(rt_powd_snf(RoundingFunction / 100.0, 1.9)
          * Nexonar_Navigation_B.pwm_mindern[0]);
        Nexonar_Navigation_B.pwm_out_l = RoundingFunction - pwm_out_l_tmp *
          RoundingFunction1;
        Nexonar_Navigation_B.pwm_out_r = RoundingFunction - pwm_out_l_tmp *
          rtb_RoundingFunction2;
=======
        Nexonar_Navigation_B.pwm_out_l = RoundingFunction -
          Nexonar_Navigation_B.pwm_mindern[0] * RoundingFunction1;
        Nexonar_Navigation_B.pwm_out_r = RoundingFunction -
          Nexonar_Navigation_B.pwm_mindern[0] * rtb_RoundingFunction2;
        if (Nexonar_Navigation_B.pwm_out_l < 0.0) {
          Nexonar_Navigation_B.pwm_out_l = 0.0;
        }

        if (Nexonar_Navigation_B.pwm_out_r < 0.0) {
          Nexonar_Navigation_B.pwm_out_r = 0.0;
        }

>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
        Nexonar_Navigation_B.r_l_out_l = 1.0 - Nexonar_Navigation_B.Gang;
        Nexonar_Navigation_B.r_l_out_r = 1.0 - Nexonar_Navigation_B.Gang;
      }
      break;

     case Nexonar_Na_IN_Drehen_rechts_max:
      /* During 'Drehen_rechts_max': '<S7>:9' */
      /* Transition: '<S7>:61' */
      /* Transition: '<S7>:75' */
      if ((fabs(Nexonar_Navigation_B.alpha_diff_opt) > 0.0) && (RoundingFunction
           > 0.0)) {
        /* Transition: '<S7>:58' */
        if (fabs(Nexonar_Navigation_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S7>:21' */
          if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S7>:45' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexonar_Nav_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S7>:8' */
            Nexonar_Navigation_B.pwm_out_l = 100.0;
            Nexonar_Navigation_B.pwm_out_r = 100.0;
            Nexonar_Navigation_B.r_l_out_l = 0.0;
            Nexonar_Navigation_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S7>:57' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexonar_Na_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S7>:9' */
            Nexonar_Navigation_B.pwm_out_l = 100.0;
            Nexonar_Navigation_B.pwm_out_r = 100.0;
            Nexonar_Navigation_B.r_l_out_l = 1.0;
            Nexonar_Navigation_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S7>:53' */
          if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S7>:54' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexon_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S7>:43' */
            Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.r_l_out_l = 0.0;
            Nexonar_Navigation_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S7>:55' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexo_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S7>:51' */
            Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.r_l_out_l = 1.0;
            Nexonar_Navigation_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S7>:82' */
        if (Nexonar_Navigation_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S7>:85' */
          RoundingFunction1 = 1.0 - Nexonar_Navigation_B.Gang;
          rtb_RoundingFunction2 = Nexonar_Navigation_B.Gang;
        } else if (Nexonar_Navigation_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S7>:86' */
          RoundingFunction1 = Nexonar_Navigation_B.Gang;
          rtb_RoundingFunction2 = 1.0 - Nexonar_Navigation_B.Gang;
        } else {
          /* Transition: '<S7>:87' */
          RoundingFunction1 = 0.0;
          rtb_RoundingFunction2 = 0.0;
        }

        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S7>:94' */
<<<<<<< HEAD
        Nexonar_Navigation_B.pwm_out_l = RoundingFunction - rt_roundd_snf
          (rt_powd_snf(RoundingFunction / 100.0, 1.9) *
           Nexonar_Navigation_B.pwm_mindern[0]) * RoundingFunction1;
        Nexonar_Navigation_B.pwm_out_r = RoundingFunction - rt_roundd_snf
          (rt_powd_snf(RoundingFunction / 100.0, 1.9) *
           Nexonar_Navigation_B.pwm_mindern[0]) * rtb_RoundingFunction2;
=======
        Nexonar_Navigation_B.pwm_out_l = RoundingFunction -
          Nexonar_Navigation_B.pwm_mindern[0] * RoundingFunction1;
        Nexonar_Navigation_B.pwm_out_r = RoundingFunction -
          Nexonar_Navigation_B.pwm_mindern[0] * rtb_RoundingFunction2;
        if (Nexonar_Navigation_B.pwm_out_l < 0.0) {
          Nexonar_Navigation_B.pwm_out_l = 0.0;
        }

        if (Nexonar_Navigation_B.pwm_out_r < 0.0) {
          Nexonar_Navigation_B.pwm_out_r = 0.0;
        }

>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
        Nexonar_Navigation_B.r_l_out_l = 1.0 - Nexonar_Navigation_B.Gang;
        Nexonar_Navigation_B.r_l_out_r = 1.0 - Nexonar_Navigation_B.Gang;
      }
      break;

     case IN_Fahren_mit_Ausrichtungsregel:
      /* During 'Fahren_mit_Ausrichtungsregelung': '<S7>:94' */
      /* Transition: '<S7>:74' */
      /* Transition: '<S7>:75' */
      if ((fabs(Nexonar_Navigation_B.alpha_diff_opt) > 0.0) && (RoundingFunction
           > 0.0)) {
        /* Transition: '<S7>:58' */
        if (fabs(Nexonar_Navigation_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S7>:21' */
          if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S7>:45' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexonar_Nav_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S7>:8' */
            Nexonar_Navigation_B.pwm_out_l = 100.0;
            Nexonar_Navigation_B.pwm_out_r = 100.0;
            Nexonar_Navigation_B.r_l_out_l = 0.0;
            Nexonar_Navigation_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S7>:57' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexonar_Na_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S7>:9' */
            Nexonar_Navigation_B.pwm_out_l = 100.0;
            Nexonar_Navigation_B.pwm_out_r = 100.0;
            Nexonar_Navigation_B.r_l_out_l = 1.0;
            Nexonar_Navigation_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S7>:53' */
          if (Nexonar_Navigation_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S7>:54' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexon_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S7>:43' */
            Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.r_l_out_l = 0.0;
            Nexonar_Navigation_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S7>:55' */
            Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
              Nexo_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S7>:51' */
            Nexonar_Navigation_B.pwm_out_l = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.pwm_out_r = 59.0 + fabs
              (Nexonar_Navigation_B.alpha_diff_opt);
            Nexonar_Navigation_B.r_l_out_l = 1.0;
            Nexonar_Navigation_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S7>:82' */
        if (Nexonar_Navigation_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S7>:85' */
          RoundingFunction1 = 1.0 - Nexonar_Navigation_B.Gang;
          rtb_RoundingFunction2 = Nexonar_Navigation_B.Gang;
        } else if (Nexonar_Navigation_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S7>:86' */
          RoundingFunction1 = Nexonar_Navigation_B.Gang;
          rtb_RoundingFunction2 = 1.0 - Nexonar_Navigation_B.Gang;
        } else {
          /* Transition: '<S7>:87' */
          RoundingFunction1 = 0.0;
          rtb_RoundingFunction2 = 0.0;
        }

        Nexonar_Navigation_DWork.is_c7_Nexonar_Navigation =
          IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S7>:94' */
<<<<<<< HEAD
        Nexonar_Navigation_B.pwm_out_l = RoundingFunction - rt_roundd_snf
          (rt_powd_snf(RoundingFunction / 100.0, 1.9) *
           Nexonar_Navigation_B.pwm_mindern[0]) * RoundingFunction1;
        Nexonar_Navigation_B.pwm_out_r = RoundingFunction - rt_roundd_snf
          (rt_powd_snf(RoundingFunction / 100.0, 1.9) *
           Nexonar_Navigation_B.pwm_mindern[0]) * rtb_RoundingFunction2;
=======
        Nexonar_Navigation_B.pwm_out_l = RoundingFunction -
          Nexonar_Navigation_B.pwm_mindern[0] * RoundingFunction1;
        Nexonar_Navigation_B.pwm_out_r = RoundingFunction -
          Nexonar_Navigation_B.pwm_mindern[0] * rtb_RoundingFunction2;
        if (Nexonar_Navigation_B.pwm_out_l < 0.0) {
          Nexonar_Navigation_B.pwm_out_l = 0.0;
        }

        if (Nexonar_Navigation_B.pwm_out_r < 0.0) {
          Nexonar_Navigation_B.pwm_out_r = 0.0;
        }

>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
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

  /*-- Update CMPB value for ePWM1 --*/
  {
    EPwm1Regs.CMPB = (uint16_T)((uint32_T)EPwm1Regs.TBPRD *
      Nexonar_Navigation_B.pwm_out_l * 0.01);
  }

  /* S-Function (c280xpwm): '<S2>/PWM Vorgabe für Motor_rechts' */

  /*-- Update CMPB value for ePWM6 --*/
  {
    EPwm6Regs.CMPB = (uint16_T)((uint32_T)EPwm6Regs.TBPRD *
      Nexonar_Navigation_B.pwm_out_r * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S2>/Drehrichtungsvorgabe für Motor_links' */
  {
    if (Nexonar_Navigation_B.r_l_out_l)
      GpioDataRegs.GPASET.bit.GPIO20 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO20 = 1;
  }

  /* S-Function (c280xgpio_do): '<S2>/Drehrichtungsvorgabe für Motor_rechts' */
  {
    if (Nexonar_Navigation_B.r_l_out_r)
      GpioDataRegs.GPASET.bit.GPIO16 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO16 = 1;
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
    /* Transition: '<S15>:3' */
    Nexonar_Navigation_DWork.is_c1_Nexonar_Navigation = Nexonar_Navigation_IN_x0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c1_Nexonar_Navigation) {
     case Nexonar_Navig_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S15>:17' */
      /* Transition: '<S15>:24' */
      Nexonar_Navigation_DWork.is_c1_Nexonar_Navigation =
        Nexonar_Navigation_IN_x1_1;

      /* Entry 'x1_1': '<S15>:26' */
      break;

     case Nexonar_Navigation_IN_x0:
      /* During 'x0': '<S15>:2' */
      /* Transition: '<S15>:7' */
      Nexonar_Navigation_DWork.is_c1_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S15>:26' */
      /* Transition: '<S15>:25' */
      Nexonar_Navigation_DWork.is_c1_Nexonar_Navigation =
        Nexonar_Navig_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S4>/Chart1' */

  /* DiscretePulseGenerator: '<S20>/Pulse Generator' */
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

  /* End of DiscretePulseGenerator: '<S20>/Pulse Generator' */

  /* Outputs for Triggered SubSystem: '<S20>/I2C Reinitialisierung' incorporates:
   *  TriggerPort: '<S22>/Trigger'
   */
  zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                     &Nexonar_Navigati_PrevZCSigState.I2CReinitialisierung_Trig_ZCE,
                     (RoundingFunction));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S22>/I2C Reinitialisierung' */
    /* MATLAB Function 'Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung/I2C Reinitialisierung': '<S24>:1' */
    init_i2c();
  }

  /* End of Outputs for SubSystem: '<S20>/I2C Reinitialisierung' */

  /* Outputs for Triggered SubSystem: '<S20>/I2C Reset' incorporates:
   *  TriggerPort: '<S23>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &Nexonar_Navigati_PrevZCSigState.I2CReset_Trig_ZCE,
                     (RoundingFunction));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S23>/I2C Reset' */
    /* MATLAB Function 'Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset': '<S25>:1' */
    reset_i2c();
  }

  /* End of Outputs for SubSystem: '<S20>/I2C Reset' */

  /* Chart: '<S5>/Sortieralgorithmus' incorporates:
   *  UnitDelay: '<S5>/Unit Delay'
   */
  if (Nexonar_Navigation_DWork.temporalCounter_i1 < 511U) {
    Nexonar_Navigation_DWork.temporalCounter_i1++;
  }

  /* Gateway: Subsystem/Sortieralgorithmus */
  /* During: Subsystem/Sortieralgorithmus */
  if (Nexonar_Navigation_DWork.is_active_c15_Nexonar_Navigatio == 0U) {
    /* Entry: Subsystem/Sortieralgorithmus */
    Nexonar_Navigation_DWork.is_active_c15_Nexonar_Navigatio = 1U;

    /* Entry Internal: Subsystem/Sortieralgorithmus */
    /* Transition: '<S30>:182' */
    Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
      Nexonar_Naviga_IN_setupVariable;
    Nexonar_Navigation_DWork.temporalCounter_i1 = 0U;

    /* Entry 'setupVariable': '<S30>:175' */
    Nexonar_Navigation_DWork.magacin0 = 0.0;
    Nexonar_Navigation_DWork.magacin1 = 0.0;
    Nexonar_Navigation_DWork.magacin2 = 0.0;
    Nexonar_Navigation_DWork.magacin3 = 0.0;
    Nexonar_Navigation_DWork.magacin4 = 0.0;
    Nexonar_Navigation_DWork.magacin5 = 0.0;
    Nexonar_Navigation_DWork.magacin1_LastCube = 0.0;
    Nexonar_Navigation_DWork.magacin2_LastCube = 0.0;
    Nexonar_Navigation_DWork.magacin3_LastCube = 0.0;
    Nexonar_Navigation_DWork.magacin4_LastCube = 0.0;
    Nexonar_Navigation_B.magacin = -1.0;
    Nexonar_Navigation_DWork.cubeCounter = 0.0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation) {
     case Nexonar_Navigation_IN_Black:
      /* During 'Black': '<S30>:187' */
      /* Transition: '<S30>:188' */
      Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
        Nexonar_Navigat_IN_DetectedCube;

      /* Entry 'DetectedCube': '<S30>:180' */
      Nexonar_Navigation_DWork.cubeCounter++;
      break;

     case Nexonar_Navigation_IN_BlueCube:
      /* During 'BlueCube': '<S30>:185' */
      /* Transition: '<S30>:189' */
      Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
        Nexonar_Navigat_IN_DetectedCube;

      /* Entry 'DetectedCube': '<S30>:180' */
      Nexonar_Navigation_DWork.cubeCounter++;
      break;

     case Nexonar_Navigat_IN_DetectedCube:
      /* During 'DetectedCube': '<S30>:180' */
      if (Nexonar_Navigation_DWork.UnitDelay_DSTATE == 0.0F) {
        /* Transition: '<S30>:168' */
        Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
          Nexonar_Navigatio_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S30>:183' */
        Nexonar_Navigation_B.magacin = -1.0;
<<<<<<< HEAD
      } else {
        if (Nexonar_Navigation_DWork.cubeCounter > 0.0) {
          /* Transition: '<S30>:199' */
          Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
            Nexonar_Navigati_IN_throwBlacks;

          /* Entry 'throwBlacks': '<S30>:198' */
          Nexonar_Navigation_B.signal = 1.0;
        }
=======
        Nexonar_Navigation_B.signal = 1.0;
      } else {
        /* Transition: '<S30>:199' */
        Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
          Nexonar_Navigati_IN_throwBlacks;

        /* Entry 'throwBlacks': '<S30>:198' */
        Nexonar_Navigation_B.signal = 1.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      }
      break;

     case Nexonar_Navigation_IN_RedCube:
      /* During 'RedCube': '<S30>:186' */
      /* Transition: '<S30>:190' */
      Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
        Nexonar_Navigat_IN_DetectedCube;

      /* Entry 'DetectedCube': '<S30>:180' */
      Nexonar_Navigation_DWork.cubeCounter++;
      break;

     case Nexonar_Navigatio_IN_cubeLoaded:
      /* During 'cubeLoaded': '<S30>:183' */
      if (Nexonar_Navigation_B.RateTransition3_l < 400.0) {
        /* Transition: '<S30>:169' */
        Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
          IN_photoelectricBarrierActivate;

        /* Entry 'photoelectricBarrierActivated': '<S30>:184' */
      } else {
        Nexonar_Navigation_B.magacin = -1.0;
<<<<<<< HEAD
=======
        Nexonar_Navigation_B.signal = 1.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      }
      break;

     case IN_photoelectricBarrierActivate:
      /* During 'photoelectricBarrierActivated': '<S30>:184' */
      if (Nexonar_Navigation_B.RateTransition2 > 2150.0) {
        /* Transition: '<S30>:172' */
        Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
          Nexonar_Navigation_IN_Black;

        /* Entry 'Black': '<S30>:187' */
        Nexonar_Navigation_B.magacin = 6.0;
      } else if (Nexonar_Navigation_B.RateTransition2 < 1000.0) {
        /* Transition: '<S30>:171' */
        Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
          Nexonar_Navigation_IN_RedCube;

        /* Entry 'RedCube': '<S30>:186' */
        Nexonar_Navigation_B.magacin = Nexonar_Navigat_findPlaceForRed();
      } else {
        if ((Nexonar_Navigation_B.RateTransition2 >= 1000.0) &&
            (Nexonar_Navigation_B.RateTransition2 <= 2150.0)) {
          /* Transition: '<S30>:170' */
          Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
            Nexonar_Navigation_IN_BlueCube;

          /* Entry 'BlueCube': '<S30>:185' */
          Nexonar_Navigation_B.magacin = Nexonar_Naviga_findPlaceForBlue();
        }
      }
      break;

     case Nexonar_Naviga_IN_setupVariable:
      /* During 'setupVariable': '<S30>:175' */
      if (Nexonar_Navigation_DWork.temporalCounter_i1 >= 300U) {
        /* Transition: '<S30>:181' */
        Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
          Nexonar_Navigatio_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S30>:183' */
        Nexonar_Navigation_B.magacin = -1.0;
<<<<<<< HEAD
=======
        Nexonar_Navigation_B.signal = 1.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      } else {
        Nexonar_Navigation_DWork.magacin0 = 0.0;
        Nexonar_Navigation_DWork.magacin1 = 0.0;
        Nexonar_Navigation_DWork.magacin2 = 0.0;
        Nexonar_Navigation_DWork.magacin3 = 0.0;
        Nexonar_Navigation_DWork.magacin4 = 0.0;
        Nexonar_Navigation_DWork.magacin5 = 0.0;
        Nexonar_Navigation_DWork.magacin1_LastCube = 0.0;
        Nexonar_Navigation_DWork.magacin2_LastCube = 0.0;
        Nexonar_Navigation_DWork.magacin3_LastCube = 0.0;
        Nexonar_Navigation_DWork.magacin4_LastCube = 0.0;
        Nexonar_Navigation_B.magacin = -1.0;
        Nexonar_Navigation_DWork.cubeCounter = 0.0;
      }
      break;

     default:
      /* During 'throwBlacks': '<S30>:198' */
      if (Nexonar_Navigation_DWork.UnitDelay_DSTATE == 0.0F) {
        /* Transition: '<S30>:200' */
        Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
          Nexonar_Navigatio_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S30>:183' */
        Nexonar_Navigation_B.magacin = -1.0;
<<<<<<< HEAD
=======
        Nexonar_Navigation_B.signal = 1.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      } else {
        Nexonar_Navigation_B.signal = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Sortieralgorithmus' */

  /* Lookup_n-D: '<S5>/1-D Lookup Table' */
  RoundingFunction = look1_binlxpw(Nexonar_Navigation_B.magacin,
    Nexonar_Navigation_P.uDLookupTable_bp01Data,
    Nexonar_Navigation_P.uDLookupTable_tableData, 7UL);

  /* Chart: '<S5>/Chart1' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  UnitDelay: '<S5>/Unit Delay'
   */
  if (Nexonar_Navigation_DWork.temporalCounter_i1_l < 511U) {
    Nexonar_Navigation_DWork.temporalCounter_i1_l++;
  }

  /* Gateway: Subsystem/Chart1 */
  /* During: Subsystem/Chart1 */
  if (Nexonar_Navigation_DWork.is_active_c4_Nexonar_Navigation == 0U) {
    /* Entry: Subsystem/Chart1 */
    Nexonar_Navigation_DWork.is_active_c4_Nexonar_Navigation = 1U;

    /* Entry Internal: Subsystem/Chart1 */
    /* Transition: '<S27>:70' */
    Nexonar_Navigation_DWork.is_c4_Nexonar_Navigation =
      Nexonar_Navigatio_IN_firstEntry;
    Nexonar_Navigation_DWork.temporalCounter_i1_l = 0U;

    /* Entry 'firstEntry': '<S27>:69' */
    Nexonar_Navigation_B.angle = 300.0;
  } else {
    switch (Nexonar_Navigation_DWork.is_c4_Nexonar_Navigation) {
     case Nexonar_Navigation_IN_closeGate:
      /* During 'closeGate': '<S27>:73' */
      if (Nexonar_Navigation_DWork.UnitDelay_DSTATE == 0.0F) {
        /* Transition: '<S27>:98' */
        Nexonar_Navigation_DWork.is_c4_Nexonar_Navigation =
          Nexonar_Navigati_IN_waitForCube;
      } else {
        Nexonar_Navigation_B.signal_n = 0.0;
      }
      break;

     case Nexonar_Navigatio_IN_firstEntry:
      /* During 'firstEntry': '<S27>:69' */
      if (Nexonar_Navigation_DWork.temporalCounter_i1_l >= 300U) {
        /* Transition: '<S27>:71' */
        Nexonar_Navigation_DWork.is_c4_Nexonar_Navigation =
          Nexonar_Navigati_IN_waitForCube;
      }
      break;

     case Nexonar_Navigati_IN_goToMagacin:
      /* During 'goToMagacin': '<S27>:3' */
      if (((real32_T)Nexonar_Navigation_B.RateTransition3 >
           Nexonar_Navigation_B.angle - 2.0) && ((real32_T)
           Nexonar_Navigation_B.RateTransition3 < Nexonar_Navigation_B.angle +
           2.0)) {
        /* Transition: '<S27>:66' */
        Nexonar_Navigation_DWork.is_c4_Nexonar_Navigation =
          Nexonar_Navigation_IN_openGate;
        Nexonar_Navigation_DWork.temporalCounter_i1_l = 0U;

        /* Entry 'openGate': '<S27>:72' */
        Nexonar_Navigation_B.signal_n = 1.0;
        Nexonar_Navigation_B.movingCube_m = 0.0F;
      }
      break;

     case Nexonar_Navigation_IN_goToZero:
      /* During 'goToZero': '<S27>:59' */
      if (((real32_T)Nexonar_Navigation_B.RateTransition3 > -2.0F) && ((real32_T)
           Nexonar_Navigation_B.RateTransition3 < 2.0F)) {
        /* Transition: '<S27>:61' */
        Nexonar_Navigation_DWork.is_c4_Nexonar_Navigation =
          Nexonar_Navigation_IN_wait_o;
        Nexonar_Navigation_DWork.temporalCounter_i1_l = 0U;
      } else {
        Nexonar_Navigation_B.angle = 0.0;
        Nexonar_Navigation_B.movingCube_m = 1.0F;
      }
      break;

     case Nexonar_Navigation_IN_openGate:
      /* During 'openGate': '<S27>:72' */
      if (Nexonar_Navigation_DWork.temporalCounter_i1_l >= 50U) {
        /* Transition: '<S27>:75' */
        Nexonar_Navigation_DWork.is_c4_Nexonar_Navigation =
          Nexonar_Navigation_IN_closeGate;

        /* Entry 'closeGate': '<S27>:73' */
        Nexonar_Navigation_B.signal_n = 0.0;
      } else {
        Nexonar_Navigation_B.signal_n = 1.0;
        Nexonar_Navigation_B.movingCube_m = 0.0F;
      }
      break;

     case Nexonar_Navigation_IN_wait_o:
      /* During 'wait': '<S27>:101' */
      if (Nexonar_Navigation_DWork.temporalCounter_i1_l >= 40U) {
        /* Transition: '<S27>:102' */
        Nexonar_Navigation_DWork.is_c4_Nexonar_Navigation =
          Nexonar_Navigati_IN_goToMagacin;

        /* Entry 'goToMagacin': '<S27>:3' */
        Nexonar_Navigation_B.angle = RoundingFunction;
      }
      break;

     default:
      /* During 'waitForCube': '<S27>:29' */
      if (RoundingFunction != -1.0) {
        /* Transition: '<S27>:60' */
        Nexonar_Navigation_DWork.is_c4_Nexonar_Navigation =
          Nexonar_Navigation_IN_goToZero;

        /* Entry 'goToZero': '<S27>:59' */
        Nexonar_Navigation_B.angle = 0.0;
        Nexonar_Navigation_B.movingCube_m = 1.0F;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Chart1' */

  /* Chart: '<S5>/Chart' */
  if (Nexonar_Navigation_DWork.temporalCounter_i1_e < 31U) {
    Nexonar_Navigation_DWork.temporalCounter_i1_e = ((int16_T)
      Nexonar_Navigation_DWork.temporalCounter_i1_e + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart */
  /* During: Subsystem/Chart */
  if (Nexonar_Navigation_DWork.is_active_c3_Nexonar_Navigation == 0U) {
    /* Entry: Subsystem/Chart */
    Nexonar_Navigation_DWork.is_active_c3_Nexonar_Navigation = 1U;

    /* Entry Internal: Subsystem/Chart */
    /* Transition: '<S26>:11' */
    Nexonar_Navigation_DWork.is_c3_Nexonar_Navigation =
      Nexonar_Navigation_IN_wait;

    /* Entry 'wait': '<S26>:4' */
<<<<<<< HEAD
    Nexonar_Navigation_B.gatePWM_d = 0.0;
    Nexonar_Navigation_B.gateDirection = 1.0;
=======
    Nexonar_Navigation_B.gatePWM = 0.0;
    Nexonar_Navigation_B.gateDirection_d = 1.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
    Nexonar_Navigation_B.movingCube_j = 0.0F;
  } else {
    switch (Nexonar_Navigation_DWork.is_c3_Nexonar_Navigation) {
     case Nexonar_Navigation_IN_close:
      /* During 'close': '<S26>:3' */
      if (Nexonar_Navigation_DWork.temporalCounter_i1_e >= 30U) {
        /* Transition: '<S26>:7' */
        Nexonar_Navigation_DWork.is_c3_Nexonar_Navigation =
          Nexonar_Navigation_IN_wait;

        /* Entry 'wait': '<S26>:4' */
<<<<<<< HEAD
        Nexonar_Navigation_B.gatePWM_d = 0.0;
        Nexonar_Navigation_B.gateDirection = 1.0;
        Nexonar_Navigation_B.movingCube_j = 0.0F;
      } else {
        Nexonar_Navigation_B.gateDirection = 0.0;
=======
        Nexonar_Navigation_B.gatePWM = 0.0;
        Nexonar_Navigation_B.gateDirection_d = 1.0;
        Nexonar_Navigation_B.movingCube_j = 0.0F;
      } else {
        Nexonar_Navigation_B.gateDirection_d = 0.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      }
      break;

     case Nexonar_Navigation_IN_open:
      /* During 'open': '<S26>:1' */
      if (Nexonar_Navigation_DWork.temporalCounter_i1_e >= 30U) {
        /* Transition: '<S26>:6' */
        Nexonar_Navigation_DWork.is_c3_Nexonar_Navigation =
          Nexonar_Navigation_IN_close;
        Nexonar_Navigation_DWork.temporalCounter_i1_e = 0U;

        /* Entry 'close': '<S26>:3' */
<<<<<<< HEAD
        Nexonar_Navigation_B.gateDirection = 0.0;
      } else {
        Nexonar_Navigation_B.gatePWM_d = 50.0;
=======
        Nexonar_Navigation_B.gateDirection_d = 0.0;
      } else {
        Nexonar_Navigation_B.gatePWM = 50.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
        Nexonar_Navigation_B.movingCube_j = 1.0F;
      }
      break;

     default:
      /* During 'wait': '<S26>:4' */
      if (Nexonar_Navigation_B.signal_n == 1.0) {
        /* Transition: '<S26>:5' */
        Nexonar_Navigation_DWork.is_c3_Nexonar_Navigation =
          Nexonar_Navigation_IN_open;
        Nexonar_Navigation_DWork.temporalCounter_i1_e = 0U;

        /* Entry 'open': '<S26>:1' */
<<<<<<< HEAD
        Nexonar_Navigation_B.gatePWM_d = 50.0;
        Nexonar_Navigation_B.movingCube_j = 1.0F;
      } else {
        Nexonar_Navigation_B.gatePWM_d = 0.0;
        Nexonar_Navigation_B.gateDirection = 1.0;
=======
        Nexonar_Navigation_B.gatePWM = 50.0;
        Nexonar_Navigation_B.movingCube_j = 1.0F;
      } else {
        Nexonar_Navigation_B.gatePWM = 0.0;
        Nexonar_Navigation_B.gateDirection_d = 1.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
        Nexonar_Navigation_B.movingCube_j = 0.0F;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Chart' */

  /* S-Function (c280xgpio_do): '<S5>/Drehrichtungsvorgabe für einen Motor1' */
  {
<<<<<<< HEAD
    if (Nexonar_Navigation_B.gateDirection)
=======
    if (Nexonar_Navigation_B.gateDirection_d)
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      GpioDataRegs.GPASET.bit.GPIO17 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO17 = 1;
  }

  /* Sum: '<S32>/Sum' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   */
  RoundingFunction = Nexonar_Navigation_B.angle - (real32_T)
    Nexonar_Navigation_B.RateTransition3;

  /* DeadZone: '<S32>/Dead Zone' */
  if (RoundingFunction > Nexonar_Navigation_P.DeadZone_End) {
    RoundingFunction -= Nexonar_Navigation_P.DeadZone_End;
  } else if (RoundingFunction >= Nexonar_Navigation_P.DeadZone_Start) {
    RoundingFunction = 0.0;
  } else {
    RoundingFunction -= Nexonar_Navigation_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S32>/Dead Zone' */

  /* Gain: '<S32>/Verstaerkung' */
  RoundingFunction *= Nexonar_Navigation_P.Verstaerkung_Gain;

  /* MATLAB Function: '<S32>/Richtung' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung': '<S34>:1' */
  if (RoundingFunction > 0.0) {
    /* '<S34>:1:3' */
    /* '<S34>:1:4' */
    Nexonar_Navigation_B.y = 1.0;
  } else {
    /* '<S34>:1:6' */
    Nexonar_Navigation_B.y = 0.0;
  }

  /* End of MATLAB Function: '<S32>/Richtung' */

  /* S-Function (c280xgpio_do): '<S29>/Drehrichtungsvorgabe für einen Motor' */
  {
    if (Nexonar_Navigation_B.y)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* Abs: '<S32>/Abs' */
  RoundingFunction = fabs(RoundingFunction);

  /* MATLAB Function: '<S32>/Betrag' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag': '<S33>:1' */
  if ((0.5 < RoundingFunction) && (RoundingFunction < 60.0)) {
    /* '<S33>:1:3' */
    /* '<S33>:1:4' */
    rtb_y_l = 60.0;
  } else if (RoundingFunction <= 0.5) {
    /* '<S33>:1:5' */
    /* '<S33>:1:6' */
    rtb_y_l = 0.0;
  } else if (RoundingFunction >= 100.0) {
    /* '<S33>:1:7' */
    /* '<S33>:1:8' */
    rtb_y_l = 100.0;
  } else {
    /* '<S33>:1:10' */
    rtb_y_l = RoundingFunction;
  }

  /* End of MATLAB Function: '<S32>/Betrag' */

  /* S-Function (c280xpwm): '<S29>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD * rtb_y_l * 0.01);
  }

  /* S-Function (c280xpwm): '<S5>/PWM Vorgabe für einen Motor 1' */

  /*-- Update CMPB value for ePWM3 --*/
  {
    EPwm3Regs.CMPB = (uint16_T)((uint32_T)EPwm3Regs.TBPRD *
<<<<<<< HEAD
      Nexonar_Navigation_B.gatePWM_d * 0.01);
=======
      Nexonar_Navigation_B.gatePWM * 0.01);
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
  }

  /* Chart: '<S5>/Chart2' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion1'
   */
<<<<<<< HEAD
  if (Nexonar_Navigation_DWork.temporalCounter_i1_k < 127U) {
=======
  if (Nexonar_Navigation_DWork.temporalCounter_i1_k < 31U) {
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
    Nexonar_Navigation_DWork.temporalCounter_i1_k = ((int16_T)
      Nexonar_Navigation_DWork.temporalCounter_i1_k + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart2 */
  /* During: Subsystem/Chart2 */
  if (Nexonar_Navigation_DWork.is_active_c6_Nexonar_Navigation == 0U) {
    /* Entry: Subsystem/Chart2 */
    Nexonar_Navigation_DWork.is_active_c6_Nexonar_Navigation = 1U;

    /* Entry Internal: Subsystem/Chart2 */
    /* Transition: '<S28>:11' */
    Nexonar_Navigation_DWork.is_c6_Nexonar_Navigation =
      Nexonar_Navigation_IN_wait;

    /* Entry 'wait': '<S28>:4' */
<<<<<<< HEAD
=======
    rtb_gatePWM = 0.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
  } else {
    switch (Nexonar_Navigation_DWork.is_c6_Nexonar_Navigation) {
     case Nexonar_Navigation_IN_close:
      /* During 'close': '<S28>:3' */
<<<<<<< HEAD
      Nexonar_Navigation_B.gatePWM = 0.0;
=======
      rtb_gatePWM = 0.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      break;

     case Nexonar_Navigation_IN_open:
      /* During 'open': '<S28>:1' */
<<<<<<< HEAD
      if (Nexonar_Navigation_DWork.temporalCounter_i1_k >= 100U) {
=======
      if (Nexonar_Navigation_DWork.temporalCounter_i1_k >= 30U) {
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
        /* Transition: '<S28>:6' */
        Nexonar_Navigation_DWork.is_c6_Nexonar_Navigation =
          Nexonar_Navigation_IN_close;

        /* Entry 'close': '<S28>:3' */
<<<<<<< HEAD
        Nexonar_Navigation_B.gatePWM = 0.0;
      } else {
        Nexonar_Navigation_B.gatePWM = 50.0;
=======
        rtb_gatePWM = 0.0;
      } else {
        rtb_gatePWM = 50.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      }
      break;

     default:
      /* During 'wait': '<S28>:4' */
      if ((real32_T)Nexonar_Navigation_B.signal == 1.0F) {
        /* Transition: '<S28>:5' */
        Nexonar_Navigation_DWork.is_c6_Nexonar_Navigation =
          Nexonar_Navigation_IN_open;
        Nexonar_Navigation_DWork.temporalCounter_i1_k = 0U;

        /* Entry 'open': '<S28>:1' */
<<<<<<< HEAD
        Nexonar_Navigation_B.gatePWM = 50.0;
=======
        rtb_gatePWM = 50.0;
      } else {
        rtb_gatePWM = 0.0;
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Chart2' */

  /* S-Function (c280xpwm): '<S5>/PWM Vorgabe für einen Motor 2' */

  /*-- Update CMPB value for ePWM5 --*/
  {
<<<<<<< HEAD
    EPwm5Regs.CMPB = (uint16_T)((uint32_T)EPwm5Regs.TBPRD *
      Nexonar_Navigation_B.gatePWM * 0.01);
=======
    EPwm5Regs.CMPB = (uint16_T)((uint32_T)EPwm5Regs.TBPRD * rtb_gatePWM * 0.01);
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
  }

  /* Update for UnitDelay: '<S5>/Unit Delay' incorporates:
   *  Sum: '<S5>/Sum'
   */
  Nexonar_Navigation_DWork.UnitDelay_DSTATE = Nexonar_Navigation_B.movingCube_m
    + Nexonar_Navigation_B.movingCube_j;
}

/* Model initialize function */
void Nexonar_Navigation_initialize(void)
{
  /* Registration code */

<<<<<<< HEAD
  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

=======
>>>>>>> 0d6976cc58bfb98cc8551aaa0d8c51af6654d43d
  /* initialize real-time model */
  (void) memset((void *)Nexonar_Navigation_M, 0,
                sizeof(RT_MODEL_Nexonar_Navigation));

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

    /* Start for S-Function (c280xi2c_rx): '<S21>/I2C Receive' */

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

    /* Start for S-Function (c280xpwm): '<S2>/PWM Vorgabe für Motor_rechts' */

    /*** Initialize ePWM6 modules ***/
    {
      /*-- Setup Time-Base (TB) Submodule --*/
      EPwm6Regs.TBPRD = 64000;

      /* // Time-Base Control Register
         EPwm6Regs.TBCTL.bit.CTRMODE    = 0;          // Counter Mode
         EPwm6Regs.TBCTL.bit.SYNCOSEL   = 3;          // Sync output select
         EPwm6Regs.TBCTL.bit.PRDLD      = 0;          // Shadow select
         EPwm6Regs.TBCTL.bit.PHSEN      = 0;          // Phase load enable
         EPwm6Regs.TBCTL.bit.PHSDIR     = 0;          // Phase Direction
         EPwm6Regs.TBCTL.bit.HSPCLKDIV  = 0;          // High speed time pre-scale
         EPwm6Regs.TBCTL.bit.CLKDIV     = 0;          // Timebase clock pre-scale
       */
      EPwm6Regs.TBCTL.all = (EPwm6Regs.TBCTL.all & ~0x3FBF) | 0x30;

      /* // Time-Base Phase Register
         EPwm6Regs.TBPHS.half.TBPHS     = 0;          // Phase offset register
       */
      EPwm6Regs.TBPHS.all = (EPwm6Regs.TBPHS.all & ~0xFFFF0000) | 0x0;
      EPwm6Regs.TBCTR = 0x0000;        /* Clear counter*/

      /*-- Setup Counter_Compare (CC) Submodule --*/
      /* // Counter-Compare Control Register
         EPwm6Regs.CMPCTL.bit.SHDWAMODE = 0;  // Compare A block operating mode.
         EPwm6Regs.CMPCTL.bit.SHDWBMODE = 0;  // Compare B block operating mode.
         EPwm6Regs.CMPCTL.bit.LOADAMODE = 0;          // Active compare A
         EPwm6Regs.CMPCTL.bit.LOADBMODE = 0;          // Active compare A
       */
      EPwm6Regs.CMPCTL.all = (EPwm6Regs.CMPCTL.all & ~0x5F) | 0x0;
      EPwm6Regs.CMPA.half.CMPA = 32000;
      EPwm6Regs.CMPB = 0;

      /*-- Setup Action-Qualifier (AQ) Submodule --*/
      EPwm6Regs.AQCTLA.all = 36;
      EPwm6Regs.AQCTLB.all = 264;

      /* // Action-Qualifier Software Force Register
         EPwm6Regs.AQSFRC.bit.RLDCSF    = 0;          // Reload from Shadow options
       */
      EPwm6Regs.AQSFRC.all = (EPwm6Regs.AQSFRC.all & ~0xC0) | 0x0;

      /* // Action-Qualifier Continuous S/W Force Register Set
         EPwm6Regs.AQCSFRC.bit.CSFA     = 0;          // Continuous Software Force on output A
         EPwm6Regs.AQCSFRC.bit.CSFB     = 0;          // Continuous Software Force on output B
       */
      EPwm6Regs.AQCSFRC.all = (EPwm6Regs.AQCSFRC.all & ~0xF) | 0x0;

      /*-- Setup Dead-Band Generator (DB) Submodule --*/
      /* // Dead-Band Generator Control Register
         EPwm6Regs.DBCTL.bit.OUT_MODE   = 0;          // Dead Band Output Mode Control
         EPwm6Regs.DBCTL.bit.IN_MODE    = 0;          // Dead Band Input Select Mode Control
         EPwm6Regs.DBCTL.bit.POLSEL     = 0;          // Polarity Select Control
       */
      EPwm6Regs.DBCTL.all = (EPwm6Regs.DBCTL.all & ~0x3F) | 0x0;
      EPwm6Regs.DBRED = 0;
      EPwm6Regs.DBFED = 0;

      /*-- Setup Event-Trigger (ET) Submodule --*/
      /* // Event-Trigger Selection and Event-Trigger Pre-Scale Register
         EPwm6Regs.ETSEL.bit.SOCAEN     = 0;          // Start of conversion A Enable
         EPwm6Regs.ETSEL.bit.SOCASEL    = 1;          // Start of conversion A Select
         EPwm6Regs.ETPS.bit.SOCAPRD     = 1;          // EPWM6SOCA Period Select
         EPwm6Regs.ETSEL.bit.SOCBEN     = 0;          // Start of conversion B Enable
         EPwm6Regs.ETSEL.bit.SOCBSEL    = 1;          // Start of conversion B Select
         EPwm6Regs.ETPS.bit.SOCBPRD     = 1;          // EPWM6SOCB Period Select
         EPwm6Regs.ETSEL.bit.INTEN      = 0;          // EPWM6INTn Enable
         EPwm6Regs.ETSEL.bit.INTSEL     = 1;          // EPWM6INTn Select
         EPwm6Regs.ETPS.bit.INTPRD      = 1;          // EPWM6INTn Period Select
       */
      EPwm6Regs.ETSEL.all = (EPwm6Regs.ETSEL.all & ~0xFF0F) | 0x1101;
      EPwm6Regs.ETPS.all = (EPwm6Regs.ETPS.all & ~0x3303) | 0x1101;

      /*-- Setup PWM-Chopper (PC) Submodule --*/
      /* // PWM-Chopper Control Register
         EPwm6Regs.PCCTL.bit.CHPEN      = 0;          // PWM chopping enable
         EPwm6Regs.PCCTL.bit.CHPFREQ    = 0;          // Chopping clock frequency
         EPwm6Regs.PCCTL.bit.OSHTWTH    = 0;          // One-shot pulse width
         EPwm6Regs.PCCTL.bit.CHPDUTY    = 0;          // Chopping clock Duty cycle
       */
      EPwm6Regs.PCCTL.all = (EPwm6Regs.PCCTL.all & ~0x7FF) | 0x0;

      /*-- Set up Trip-Zone (TZ) Submodule --*/
      EALLOW;
      EPwm6Regs.TZSEL.all = 0;

      /* // Trip-Zone Control Register
         EPwm6Regs.TZCTL.bit.TZA        = 3;          // TZ1 to TZ6 Trip Action On EPWM6A
         EPwm6Regs.TZCTL.bit.TZB        = 3;          // TZ1 to TZ6 Trip Action On EPWM6B
       */
      EPwm6Regs.TZCTL.all = (EPwm6Regs.TZCTL.all & ~0xF) | 0xF;

      /* // Trip-Zone Enable Interrupt Register
         EPwm6Regs.TZEINT.bit.OST       = 0;          // Trip Zones One Shot Int Enable
         EPwm6Regs.TZEINT.bit.CBC       = 0;          // Trip Zones Cycle By Cycle Int Enable
       */
      EPwm6Regs.TZEINT.all = (EPwm6Regs.TZEINT.all & ~0x6) | 0x0;
      EDIS;
    }

    /* Start for S-Function (c280xgpio_do): '<S2>/Drehrichtungsvorgabe für Motor_links' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFCFF;
    GpioCtrlRegs.GPADIR.all |= 0x100000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S2>/Drehrichtungsvorgabe für Motor_rechts' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFFFC;
    GpioCtrlRegs.GPADIR.all |= 0x10000;
    EDIS;

    /* Start for S-Function (c280xadc): '<S5>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
    if (adcInitFlag == 0) {
      InitAdc();
      adcInitFlag = 1;
    }

    config_ADC_A (3U, 4146U, 0U, 0U, 0U);

    /* Start for S-Function (c280xgpio_do): '<S5>/Drehrichtungsvorgabe für einen Motor1' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFFF3;
    GpioCtrlRegs.GPADIR.all |= 0x20000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S29>/Drehrichtungsvorgabe für einen Motor' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFF3FF;
    GpioCtrlRegs.GPADIR.all |= 0x200000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S29>/PWM Vorgabe für einen Motor ' */

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

    /* Start for S-Function (c280xpwm): '<S5>/PWM Vorgabe für einen Motor 1' */

    /*** Initialize ePWM3 modules ***/
    {
      /*-- Setup Time-Base (TB) Submodule --*/
      EPwm3Regs.TBPRD = 64000;

      /* // Time-Base Control Register
         EPwm3Regs.TBCTL.bit.CTRMODE    = 0;          // Counter Mode
         EPwm3Regs.TBCTL.bit.SYNCOSEL   = 3;          // Sync output select
         EPwm3Regs.TBCTL.bit.PRDLD      = 0;          // Shadow select
         EPwm3Regs.TBCTL.bit.PHSEN      = 0;          // Phase load enable
         EPwm3Regs.TBCTL.bit.PHSDIR     = 0;          // Phase Direction
         EPwm3Regs.TBCTL.bit.HSPCLKDIV  = 0;          // High speed time pre-scale
         EPwm3Regs.TBCTL.bit.CLKDIV     = 0;          // Timebase clock pre-scale
       */
      EPwm3Regs.TBCTL.all = (EPwm3Regs.TBCTL.all & ~0x3FBF) | 0x30;

      /* // Time-Base Phase Register
         EPwm3Regs.TBPHS.half.TBPHS     = 0;          // Phase offset register
       */
      EPwm3Regs.TBPHS.all = (EPwm3Regs.TBPHS.all & ~0xFFFF0000) | 0x0;
      EPwm3Regs.TBCTR = 0x0000;        /* Clear counter*/

      /*-- Setup Counter_Compare (CC) Submodule --*/
      /* // Counter-Compare Control Register
         EPwm3Regs.CMPCTL.bit.SHDWAMODE = 0;  // Compare A block operating mode.
         EPwm3Regs.CMPCTL.bit.SHDWBMODE = 0;  // Compare B block operating mode.
         EPwm3Regs.CMPCTL.bit.LOADAMODE = 0;          // Active compare A
         EPwm3Regs.CMPCTL.bit.LOADBMODE = 0;          // Active compare A
       */
      EPwm3Regs.CMPCTL.all = (EPwm3Regs.CMPCTL.all & ~0x5F) | 0x0;
      EPwm3Regs.CMPA.half.CMPA = 32000;
      EPwm3Regs.CMPB = 0;

      /*-- Setup Action-Qualifier (AQ) Submodule --*/
      EPwm3Regs.AQCTLA.all = 36;
      EPwm3Regs.AQCTLB.all = 264;

      /* // Action-Qualifier Software Force Register
         EPwm3Regs.AQSFRC.bit.RLDCSF    = 0;          // Reload from Shadow options
       */
      EPwm3Regs.AQSFRC.all = (EPwm3Regs.AQSFRC.all & ~0xC0) | 0x0;

      /* // Action-Qualifier Continuous S/W Force Register Set
         EPwm3Regs.AQCSFRC.bit.CSFA     = 0;          // Continuous Software Force on output A
         EPwm3Regs.AQCSFRC.bit.CSFB     = 0;          // Continuous Software Force on output B
       */
      EPwm3Regs.AQCSFRC.all = (EPwm3Regs.AQCSFRC.all & ~0xF) | 0x0;

      /*-- Setup Dead-Band Generator (DB) Submodule --*/
      /* // Dead-Band Generator Control Register
         EPwm3Regs.DBCTL.bit.OUT_MODE   = 0;          // Dead Band Output Mode Control
         EPwm3Regs.DBCTL.bit.IN_MODE    = 0;          // Dead Band Input Select Mode Control
         EPwm3Regs.DBCTL.bit.POLSEL     = 0;          // Polarity Select Control
       */
      EPwm3Regs.DBCTL.all = (EPwm3Regs.DBCTL.all & ~0x3F) | 0x0;
      EPwm3Regs.DBRED = 0;
      EPwm3Regs.DBFED = 0;

      /*-- Setup Event-Trigger (ET) Submodule --*/
      /* // Event-Trigger Selection and Event-Trigger Pre-Scale Register
         EPwm3Regs.ETSEL.bit.SOCAEN     = 0;          // Start of conversion A Enable
         EPwm3Regs.ETSEL.bit.SOCASEL    = 1;          // Start of conversion A Select
         EPwm3Regs.ETPS.bit.SOCAPRD     = 1;          // EPWM3SOCA Period Select
         EPwm3Regs.ETSEL.bit.SOCBEN     = 0;          // Start of conversion B Enable
         EPwm3Regs.ETSEL.bit.SOCBSEL    = 1;          // Start of conversion B Select
         EPwm3Regs.ETPS.bit.SOCBPRD     = 1;          // EPWM3SOCB Period Select
         EPwm3Regs.ETSEL.bit.INTEN      = 0;          // EPWM3INTn Enable
         EPwm3Regs.ETSEL.bit.INTSEL     = 1;          // EPWM3INTn Select
         EPwm3Regs.ETPS.bit.INTPRD      = 1;          // EPWM3INTn Period Select
       */
      EPwm3Regs.ETSEL.all = (EPwm3Regs.ETSEL.all & ~0xFF0F) | 0x1101;
      EPwm3Regs.ETPS.all = (EPwm3Regs.ETPS.all & ~0x3303) | 0x1101;

      /*-- Setup PWM-Chopper (PC) Submodule --*/
      /* // PWM-Chopper Control Register
         EPwm3Regs.PCCTL.bit.CHPEN      = 0;          // PWM chopping enable
         EPwm3Regs.PCCTL.bit.CHPFREQ    = 0;          // Chopping clock frequency
         EPwm3Regs.PCCTL.bit.OSHTWTH    = 0;          // One-shot pulse width
         EPwm3Regs.PCCTL.bit.CHPDUTY    = 0;          // Chopping clock Duty cycle
       */
      EPwm3Regs.PCCTL.all = (EPwm3Regs.PCCTL.all & ~0x7FF) | 0x0;

      /*-- Set up Trip-Zone (TZ) Submodule --*/
      EALLOW;
      EPwm3Regs.TZSEL.all = 0;

      /* // Trip-Zone Control Register
         EPwm3Regs.TZCTL.bit.TZA        = 3;          // TZ1 to TZ6 Trip Action On EPWM3A
         EPwm3Regs.TZCTL.bit.TZB        = 3;          // TZ1 to TZ6 Trip Action On EPWM3B
       */
      EPwm3Regs.TZCTL.all = (EPwm3Regs.TZCTL.all & ~0xF) | 0xF;

      /* // Trip-Zone Enable Interrupt Register
         EPwm3Regs.TZEINT.bit.OST       = 0;          // Trip Zones One Shot Int Enable
         EPwm3Regs.TZEINT.bit.CBC       = 0;          // Trip Zones Cycle By Cycle Int Enable
       */
      EPwm3Regs.TZEINT.all = (EPwm3Regs.TZEINT.all & ~0x6) | 0x0;
      EDIS;
    }

    /* Start for S-Function (c280xpwm): '<S5>/PWM Vorgabe für einen Motor 2' */

    /*** Initialize ePWM5 modules ***/
    {
      /*-- Setup Time-Base (TB) Submodule --*/
      EPwm5Regs.TBPRD = 64000;

      /* // Time-Base Control Register
         EPwm5Regs.TBCTL.bit.CTRMODE    = 0;          // Counter Mode
         EPwm5Regs.TBCTL.bit.SYNCOSEL   = 3;          // Sync output select
         EPwm5Regs.TBCTL.bit.PRDLD      = 0;          // Shadow select
         EPwm5Regs.TBCTL.bit.PHSEN      = 0;          // Phase load enable
         EPwm5Regs.TBCTL.bit.PHSDIR     = 0;          // Phase Direction
         EPwm5Regs.TBCTL.bit.HSPCLKDIV  = 0;          // High speed time pre-scale
         EPwm5Regs.TBCTL.bit.CLKDIV     = 0;          // Timebase clock pre-scale
       */
      EPwm5Regs.TBCTL.all = (EPwm5Regs.TBCTL.all & ~0x3FBF) | 0x30;

      /* // Time-Base Phase Register
         EPwm5Regs.TBPHS.half.TBPHS     = 0;          // Phase offset register
       */
      EPwm5Regs.TBPHS.all = (EPwm5Regs.TBPHS.all & ~0xFFFF0000) | 0x0;
      EPwm5Regs.TBCTR = 0x0000;        /* Clear counter*/

      /*-- Setup Counter_Compare (CC) Submodule --*/
      /* // Counter-Compare Control Register
         EPwm5Regs.CMPCTL.bit.SHDWAMODE = 0;  // Compare A block operating mode.
         EPwm5Regs.CMPCTL.bit.SHDWBMODE = 0;  // Compare B block operating mode.
         EPwm5Regs.CMPCTL.bit.LOADAMODE = 0;          // Active compare A
         EPwm5Regs.CMPCTL.bit.LOADBMODE = 0;          // Active compare A
       */
      EPwm5Regs.CMPCTL.all = (EPwm5Regs.CMPCTL.all & ~0x5F) | 0x0;
      EPwm5Regs.CMPA.half.CMPA = 32000;
      EPwm5Regs.CMPB = 0;

      /*-- Setup Action-Qualifier (AQ) Submodule --*/
      EPwm5Regs.AQCTLA.all = 36;
      EPwm5Regs.AQCTLB.all = 264;

      /* // Action-Qualifier Software Force Register
         EPwm5Regs.AQSFRC.bit.RLDCSF    = 0;          // Reload from Shadow options
       */
      EPwm5Regs.AQSFRC.all = (EPwm5Regs.AQSFRC.all & ~0xC0) | 0x0;

      /* // Action-Qualifier Continuous S/W Force Register Set
         EPwm5Regs.AQCSFRC.bit.CSFA     = 0;          // Continuous Software Force on output A
         EPwm5Regs.AQCSFRC.bit.CSFB     = 0;          // Continuous Software Force on output B
       */
      EPwm5Regs.AQCSFRC.all = (EPwm5Regs.AQCSFRC.all & ~0xF) | 0x0;

      /*-- Setup Dead-Band Generator (DB) Submodule --*/
      /* // Dead-Band Generator Control Register
         EPwm5Regs.DBCTL.bit.OUT_MODE   = 0;          // Dead Band Output Mode Control
         EPwm5Regs.DBCTL.bit.IN_MODE    = 0;          // Dead Band Input Select Mode Control
         EPwm5Regs.DBCTL.bit.POLSEL     = 0;          // Polarity Select Control
       */
      EPwm5Regs.DBCTL.all = (EPwm5Regs.DBCTL.all & ~0x3F) | 0x0;
      EPwm5Regs.DBRED = 0;
      EPwm5Regs.DBFED = 0;

      /*-- Setup Event-Trigger (ET) Submodule --*/
      /* // Event-Trigger Selection and Event-Trigger Pre-Scale Register
         EPwm5Regs.ETSEL.bit.SOCAEN     = 0;          // Start of conversion A Enable
         EPwm5Regs.ETSEL.bit.SOCASEL    = 1;          // Start of conversion A Select
         EPwm5Regs.ETPS.bit.SOCAPRD     = 1;          // EPWM5SOCA Period Select
         EPwm5Regs.ETSEL.bit.SOCBEN     = 0;          // Start of conversion B Enable
         EPwm5Regs.ETSEL.bit.SOCBSEL    = 1;          // Start of conversion B Select
         EPwm5Regs.ETPS.bit.SOCBPRD     = 1;          // EPWM5SOCB Period Select
         EPwm5Regs.ETSEL.bit.INTEN      = 0;          // EPWM5INTn Enable
         EPwm5Regs.ETSEL.bit.INTSEL     = 1;          // EPWM5INTn Select
         EPwm5Regs.ETPS.bit.INTPRD      = 1;          // EPWM5INTn Period Select
       */
      EPwm5Regs.ETSEL.all = (EPwm5Regs.ETSEL.all & ~0xFF0F) | 0x1101;
      EPwm5Regs.ETPS.all = (EPwm5Regs.ETPS.all & ~0x3303) | 0x1101;

      /*-- Setup PWM-Chopper (PC) Submodule --*/
      /* // PWM-Chopper Control Register
         EPwm5Regs.PCCTL.bit.CHPEN      = 0;          // PWM chopping enable
         EPwm5Regs.PCCTL.bit.CHPFREQ    = 0;          // Chopping clock frequency
         EPwm5Regs.PCCTL.bit.OSHTWTH    = 0;          // One-shot pulse width
         EPwm5Regs.PCCTL.bit.CHPDUTY    = 0;          // Chopping clock Duty cycle
       */
      EPwm5Regs.PCCTL.all = (EPwm5Regs.PCCTL.all & ~0x7FF) | 0x0;

      /*-- Set up Trip-Zone (TZ) Submodule --*/
      EALLOW;
      EPwm5Regs.TZSEL.all = 0;

      /* // Trip-Zone Control Register
         EPwm5Regs.TZCTL.bit.TZA        = 3;          // TZ1 to TZ6 Trip Action On EPWM5A
         EPwm5Regs.TZCTL.bit.TZB        = 3;          // TZ1 to TZ6 Trip Action On EPWM5B
       */
      EPwm5Regs.TZCTL.all = (EPwm5Regs.TZCTL.all & ~0xF) | 0xF;

      /* // Trip-Zone Enable Interrupt Register
         EPwm5Regs.TZEINT.bit.OST       = 0;          // Trip Zones One Shot Int Enable
         EPwm5Regs.TZEINT.bit.CBC       = 0;          // Trip Zones Cycle By Cycle Int Enable
       */
      EPwm5Regs.TZEINT.all = (EPwm5Regs.TZEINT.all & ~0x6) | 0x0;
      EDIS;
    }

    /* Start for S-Function (c280xgpio_do): '<S31>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
    EALLOW;
    GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
    GpioCtrlRegs.GPBDIR.all |= 0x4;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S5>/ePWM' */

    /*** Initialize ePWM4 modules ***/
    {
      /*-- Setup Time-Base (TB) Submodule --*/
      EPwm4Regs.TBPRD = 64000;

      /* // Time-Base Control Register
         EPwm4Regs.TBCTL.bit.CTRMODE    = 0;          // Counter Mode
         EPwm4Regs.TBCTL.bit.SYNCOSEL   = 3;          // Sync output select
         EPwm4Regs.TBCTL.bit.PRDLD      = 0;          // Shadow select
         EPwm4Regs.TBCTL.bit.PHSEN      = 0;          // Phase load enable
         EPwm4Regs.TBCTL.bit.PHSDIR     = 0;          // Phase Direction
         EPwm4Regs.TBCTL.bit.HSPCLKDIV  = 0;          // High speed time pre-scale
         EPwm4Regs.TBCTL.bit.CLKDIV     = 0;          // Timebase clock pre-scale
       */
      EPwm4Regs.TBCTL.all = (EPwm4Regs.TBCTL.all & ~0x3FBF) | 0x30;

      /* // Time-Base Phase Register
         EPwm4Regs.TBPHS.half.TBPHS     = 0;          // Phase offset register
       */
      EPwm4Regs.TBPHS.all = (EPwm4Regs.TBPHS.all & ~0xFFFF0000) | 0x0;
      EPwm4Regs.TBCTR = 0x0000;        /* Clear counter*/

      /*-- Setup Counter_Compare (CC) Submodule --*/
      /* // Counter-Compare Control Register
         EPwm4Regs.CMPCTL.bit.SHDWAMODE = 0;  // Compare A block operating mode.
         EPwm4Regs.CMPCTL.bit.SHDWBMODE = 0;  // Compare B block operating mode.
         EPwm4Regs.CMPCTL.bit.LOADAMODE = 0;          // Active compare A
         EPwm4Regs.CMPCTL.bit.LOADBMODE = 0;          // Active compare A
       */
      EPwm4Regs.CMPCTL.all = (EPwm4Regs.CMPCTL.all & ~0x5F) | 0x0;
      EPwm4Regs.CMPA.half.CMPA = 19200;
      EPwm4Regs.CMPB = 51200;

      /*-- Setup Action-Qualifier (AQ) Submodule --*/
      EPwm4Regs.AQCTLA.all = 36;
      EPwm4Regs.AQCTLB.all = 264;

      /* // Action-Qualifier Software Force Register
         EPwm4Regs.AQSFRC.bit.RLDCSF    = 0;          // Reload from Shadow options
       */
      EPwm4Regs.AQSFRC.all = (EPwm4Regs.AQSFRC.all & ~0xC0) | 0x0;

      /* // Action-Qualifier Continuous S/W Force Register Set
         EPwm4Regs.AQCSFRC.bit.CSFA     = 0;          // Continuous Software Force on output A
         EPwm4Regs.AQCSFRC.bit.CSFB     = 0;          // Continuous Software Force on output B
       */
      EPwm4Regs.AQCSFRC.all = (EPwm4Regs.AQCSFRC.all & ~0xF) | 0x0;

      /*-- Setup Dead-Band Generator (DB) Submodule --*/
      /* // Dead-Band Generator Control Register
         EPwm4Regs.DBCTL.bit.OUT_MODE   = 0;          // Dead Band Output Mode Control
         EPwm4Regs.DBCTL.bit.IN_MODE    = 0;          // Dead Band Input Select Mode Control
         EPwm4Regs.DBCTL.bit.POLSEL     = 0;          // Polarity Select Control
       */
      EPwm4Regs.DBCTL.all = (EPwm4Regs.DBCTL.all & ~0x3F) | 0x0;
      EPwm4Regs.DBRED = 0;
      EPwm4Regs.DBFED = 0;

      /*-- Setup Event-Trigger (ET) Submodule --*/
      /* // Event-Trigger Selection and Event-Trigger Pre-Scale Register
         EPwm4Regs.ETSEL.bit.SOCAEN     = 0;          // Start of conversion A Enable
         EPwm4Regs.ETSEL.bit.SOCASEL    = 1;          // Start of conversion A Select
         EPwm4Regs.ETPS.bit.SOCAPRD     = 1;          // EPWM4SOCA Period Select
         EPwm4Regs.ETSEL.bit.SOCBEN     = 0;          // Start of conversion B Enable
         EPwm4Regs.ETSEL.bit.SOCBSEL    = 1;          // Start of conversion B Select
         EPwm4Regs.ETPS.bit.SOCBPRD     = 1;          // EPWM4SOCB Period Select
         EPwm4Regs.ETSEL.bit.INTEN      = 0;          // EPWM4INTn Enable
         EPwm4Regs.ETSEL.bit.INTSEL     = 1;          // EPWM4INTn Select
         EPwm4Regs.ETPS.bit.INTPRD      = 1;          // EPWM4INTn Period Select
       */
      EPwm4Regs.ETSEL.all = (EPwm4Regs.ETSEL.all & ~0xFF0F) | 0x1101;
      EPwm4Regs.ETPS.all = (EPwm4Regs.ETPS.all & ~0x3303) | 0x1101;

      /*-- Setup PWM-Chopper (PC) Submodule --*/
      /* // PWM-Chopper Control Register
         EPwm4Regs.PCCTL.bit.CHPEN      = 0;          // PWM chopping enable
         EPwm4Regs.PCCTL.bit.CHPFREQ    = 0;          // Chopping clock frequency
         EPwm4Regs.PCCTL.bit.OSHTWTH    = 0;          // One-shot pulse width
         EPwm4Regs.PCCTL.bit.CHPDUTY    = 0;          // Chopping clock Duty cycle
       */
      EPwm4Regs.PCCTL.all = (EPwm4Regs.PCCTL.all & ~0x7FF) | 0x0;

      /*-- Set up Trip-Zone (TZ) Submodule --*/
      EALLOW;
      EPwm4Regs.TZSEL.all = 0;

      /* // Trip-Zone Control Register
         EPwm4Regs.TZCTL.bit.TZA        = 3;          // TZ1 to TZ6 Trip Action On EPWM4A
         EPwm4Regs.TZCTL.bit.TZB        = 3;          // TZ1 to TZ6 Trip Action On EPWM4B
       */
      EPwm4Regs.TZCTL.all = (EPwm4Regs.TZCTL.all & ~0xF) | 0xF;

      /* // Trip-Zone Enable Interrupt Register
         EPwm4Regs.TZEINT.bit.OST       = 0;          // Trip Zones One Shot Int Enable
         EPwm4Regs.TZEINT.bit.CBC       = 0;          // Trip Zones Cycle By Cycle Int Enable
       */
      EPwm4Regs.TZEINT.all = (EPwm4Regs.TZEINT.all & ~0x6) | 0x0;
      EDIS;
    }

    Nexonar_Navigati_PrevZCSigState.I2CReinitialisierung_Trig_ZCE =
      UNINITIALIZED_ZCSIG;
    Nexonar_Navigati_PrevZCSigState.I2CReset_Trig_ZCE = UNINITIALIZED_ZCSIG;

    /* InitializeConditions for RateTransition: '<S4>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Nexonar_Navigation_DWork.RateTransition_Buffer[i] =
        Nexonar_Navigation_P.RateTransition_InitialCondition;
    }

    /* End of InitializeConditions for RateTransition: '<S4>/Rate Transition' */

    /* InitializeConditions for DiscretePulseGenerator: '<S20>/Pulse Generator' */
    Nexonar_Navigation_DWork.clockTickCounter = 0L;

    /* InitializeConditions for Memory: '<S36>/Memory' */
    Nexonar_Navigation_DWork.Memory_PreviousInput =
      Nexonar_Navigation_P.EdgeDetector1_ic;

    /* InitializeConditions for UnitDelay: '<S35>/Unit Delay3' */
    Nexonar_Navigation_DWork.UnitDelay3_DSTATE =
      Nexonar_Navigation_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S35>/Unit Delay4' */
    Nexonar_Navigation_DWork.UnitDelay4_DSTATE =
      Nexonar_Navigation_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S35>/Unit Delay5' */
    Nexonar_Navigation_DWork.UnitDelay5_DSTATE =
      Nexonar_Navigation_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S35>/Unit Delay1' */
    Nexonar_Navigation_DWork.UnitDelay1_DSTATE =
      Nexonar_Navigation_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Memory: '<S37>/Memory' */
    Nexonar_Navigation_DWork.Memory_PreviousInput_e =
      Nexonar_Navigation_P.EdgeDetector2_ic;

    /* InitializeConditions for UnitDelay: '<S35>/Unit Delay2' */
    Nexonar_Navigation_DWork.UnitDelay2_DSTATE =
      Nexonar_Navigation_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
    Nexonar_Navigation_DWork.UnitDelay_DSTATE =
      Nexonar_Navigation_P.UnitDelay_InitialCondition;

    /* SystemInitialize for S-Function (c28xisr_c2000): '<S4>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S4>/Triggered Subsystem'
     */
    /* System initialize for function-call system: '<S4>/Triggered Subsystem' */
    {
      int16_T i;

      /* InitializeConditions for Delay: '<S21>/Delay' */
      for (i = 0; i < 10; i++) {
        Nexonar_Navigation_DWork.Delay_DSTATE[i] =
          Nexonar_Navigation_P.Delay_InitialCondition;
      }

      /* End of InitializeConditions for Delay: '<S21>/Delay' */
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
    Nexonar_Navigation_DWork.is_Sammeln = Nexonar_Navi_IN_NO_ACTIVE_CHILD;
    Nexonar_Navigation_DWork.is_Uebergabe = Nexonar_Navi_IN_NO_ACTIVE_CHILD;
    Nexonar_Navigation_DWork.is_active_c5_Nexonar_Navigation = 0U;
    Nexonar_Navigation_DWork.is_c5_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Atomic SubSystem: '<Root>/Navigationssystem [Einstellungen moeglich]' */
    /* SystemInitialize for Chart: '<S9>/Quadrantenteiler' */
    Nexonar_Navigation_DWork.is_active_c11_Nexonar_Navigatio = 0U;
    Nexonar_Navigation_DWork.is_c11_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S9>/Winkelausgabe fuer Ausrichtung' */
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

    /* SystemInitialize for Chart: '<S5>/Sortieralgorithmus' */
    Nexonar_Navigation_DWork.temporalCounter_i1 = 0U;
    Nexonar_Navigation_DWork.is_active_c15_Nexonar_Navigatio = 0U;
    Nexonar_Navigation_DWork.is_c15_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S5>/Chart1' */
    Nexonar_Navigation_DWork.temporalCounter_i1_l = 0U;
    Nexonar_Navigation_DWork.is_active_c4_Nexonar_Navigation = 0U;
    Nexonar_Navigation_DWork.is_c4_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S5>/Chart' */
    Nexonar_Navigation_DWork.temporalCounter_i1_e = 0U;
    Nexonar_Navigation_DWork.is_active_c3_Nexonar_Navigation = 0U;
    Nexonar_Navigation_DWork.is_c3_Nexonar_Navigation =
      Nexonar_Navi_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S5>/Chart2' */
    Nexonar_Navigation_DWork.temporalCounter_i1_k = 0U;
    Nexonar_Navigation_DWork.is_active_c6_Nexonar_Navigation = 0U;
    Nexonar_Navigation_DWork.is_c6_Nexonar_Navigation =
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
