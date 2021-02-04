/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Gesamtsystem.c
 *
 * Code generated for Simulink model 'Gesamtsystem'.
 *
 * Model version                  : 1.85
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Feb  4 13:59:33 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Gesamtsystem.h"
#include "Gesamtsystem_private.h"
#define G_IN_Ausrichtung_ohne_Aenderung (1U)
#define Ge_IN_Uebergabepunkt_x_Richtung (1U)
#define Ge_IN_Uebergabepunkt_y_Richtung (2U)
#define Gesa_IN_Drehen_rechts_gesteuert (3U)
#define Gesam_IN_Drehen_links_gesteuert (1U)
#define Gesam_IN_Start_Einstellung_Init (4U)
#define Gesam_IN_Zeitausgabe_mit_Offset (2U)
#define Gesamts_IN_x5_valid_data_found1 (6U)
#define Gesamtsy_IN_betterRightPosition (2U)
#define Gesamtsys_IN_Einstellung_Init_b (2U)
#define Gesamtsys_IN_betterLeftPosition (1U)
#define Gesamtsyst_IN_Drehen_rechts_max (4U)
#define Gesamtsyste_IN_Drehen_links_max (2U)
#define Gesamtsyste_IN_Einstellung_Init (1U)
#define Gesamtsyste_IN_Start_Warten_bax (2U)
#define Gesamtsyste_IN_Warten_Uebergabe (3U)
#define Gesamtsystem_IN_Anfahrpunkt_1  (1U)
#define Gesamtsystem_IN_Anfahrpunkt_10 (2U)
#define Gesamtsystem_IN_Anfahrpunkt_11 (3U)
#define Gesamtsystem_IN_Anfahrpunkt_12 (4U)
#define Gesamtsystem_IN_Anfahrpunkt_13 (5U)
#define Gesamtsystem_IN_Anfahrpunkt_14 (6U)
#define Gesamtsystem_IN_Anfahrpunkt_2  (7U)
#define Gesamtsystem_IN_Anfahrpunkt_3  (8U)
#define Gesamtsystem_IN_Anfahrpunkt_4  (9U)
#define Gesamtsystem_IN_Anfahrpunkt_5  (10U)
#define Gesamtsystem_IN_Anfahrpunkt_6  (11U)
#define Gesamtsystem_IN_Anfahrpunkt_7  (12U)
#define Gesamtsystem_IN_Anfahrpunkt_8  (13U)
#define Gesamtsystem_IN_Anfahrpunkt_9  (14U)
#define Gesamtsystem_IN_Anschalten     (1U)
#define Gesamtsystem_IN_Aus_Zustand    (2U)
#define Gesamtsystem_IN_Ausfuehrung    (1U)
#define Gesamtsystem_IN_Beendet        (2U)
#define Gesamtsystem_IN_Black          (1U)
#define Gesamtsystem_IN_BlueCube       (2U)
#define Gesamtsystem_IN_CloseRegular   (1U)
#define Gesamtsystem_IN_Daten_einlesen (1U)
#define Gesamtsystem_IN_DetectedCube   (3U)
#define Gesamtsystem_IN_Ende           (1U)
#define Gesamtsystem_IN_Init_Warten    (1U)
#define Gesamtsystem_IN_Init_und_Warten (3U)
#define Gesamtsystem_IN_Konvertierung  (2U)
#define Gesamtsystem_IN_Lampe          (1U)
#define Gesamtsystem_IN_NO_ACTIVE_CHILD (0U)
#define Gesamtsystem_IN_Parken         (2U)
#define Gesamtsystem_IN_Parken_1       (1U)
#define Gesamtsystem_IN_Parken_2       (2U)
#define Gesamtsystem_IN_Parken_3       (3U)
#define Gesamtsystem_IN_Quadrant_a     (1U)
#define Gesamtsystem_IN_Quadrant_b     (2U)
#define Gesamtsystem_IN_Quadrant_c     (3U)
#define Gesamtsystem_IN_Quadrant_d     (4U)
#define Gesamtsystem_IN_RedCube        (4U)
#define Gesamtsystem_IN_Sammeln        (3U)
#define Gesamtsystem_IN_Start          (1U)
#define Gesamtsystem_IN_Start_Warten   (3U)
#define Gesamtsystem_IN_Start_Warten_b (6U)
#define Gesamtsystem_IN_Start_Warten_ba (5U)
#define Gesamtsystem_IN_Stillstand     (2U)
#define Gesamtsystem_IN_Uebergabe      (5U)
#define Gesamtsystem_IN_Warten         (2U)
#define Gesamtsystem_IN_Wechsel_1      (4U)
#define Gesamtsystem_IN_Wechsel_10     (16U)
#define Gesamtsystem_IN_Wechsel_11     (17U)
#define Gesamtsystem_IN_Wechsel_12     (18U)
#define Gesamtsystem_IN_Wechsel_13     (19U)
#define Gesamtsystem_IN_Wechsel_14     (20U)
#define Gesamtsystem_IN_Wechsel_1_b    (15U)
#define Gesamtsystem_IN_Wechsel_2      (5U)
#define Gesamtsystem_IN_Wechsel_2_b    (21U)
#define Gesamtsystem_IN_Wechsel_3      (6U)
#define Gesamtsystem_IN_Wechsel_3_b    (22U)
#define Gesamtsystem_IN_Wechsel_4      (23U)
#define Gesamtsystem_IN_Wechsel_5      (24U)
#define Gesamtsystem_IN_Wechsel_6      (25U)
#define Gesamtsystem_IN_Wechsel_7      (26U)
#define Gesamtsystem_IN_Wechsel_8      (27U)
#define Gesamtsystem_IN_Wechsel_9      (28U)
#define Gesamtsystem_IN_Weiter1        (3U)
#define Gesamtsystem_IN_Weiter2        (4U)
#define Gesamtsystem_IN_close          (2U)
#define Gesamtsystem_IN_closeGate      (3U)
#define Gesamtsystem_IN_closeKlappe    (3U)
#define Gesamtsystem_IN_closeKlappe_b  (4U)
#define Gesamtsystem_IN_cubeLoaded     (5U)
#define Gesamtsystem_IN_end            (3U)
#define Gesamtsystem_IN_entry          (4U)
#define Gesamtsystem_IN_firstEntry     (5U)
#define Gesamtsystem_IN_goToMagacin    (6U)
#define Gesamtsystem_IN_goToZero       (7U)
#define Gesamtsystem_IN_init           (2U)
#define Gesamtsystem_IN_open           (4U)
#define Gesamtsystem_IN_openGate       (8U)
#define Gesamtsystem_IN_open_b         (5U)
#define Gesamtsystem_IN_setupVariable  (7U)
#define Gesamtsystem_IN_startPosition  (9U)
#define Gesamtsystem_IN_wait           (5U)
#define Gesamtsystem_IN_wait1          (7U)
#define Gesamtsystem_IN_waitForCube    (11U)
#define Gesamtsystem_IN_wait_b         (10U)
#define Gesamtsystem_IN_wait_ba        (6U)
#define Gesamtsystem_IN_wait_bax       (8U)
#define Gesamtsystem_IN_wert_erkannt   (3U)
#define Gesamtsystem_IN_wert_erkannt2  (4U)
#define Gesamtsystem_IN_x0             (2U)
#define Gesamtsystem_IN_x1_1           (3U)
#define Gesamtsystem_IN_x1_search1     (5U)
#define IN_Anfang_found_Schritt_uebertr (1U)
#define IN_Drehstillstand_mit_Ausrichtu (1U)
#define IN_Fahren_mit_Ausrichtungsregel (5U)
#define IN_Trigonometrische_Auswertun_b (4U)
#define IN_Trigonometrische_Auswertung_ (3U)
#define IN_Weiterleitung_bei_Drehzustan (3U)
#define IN_photoelectricBarrierActivate (6U)

/* user code (top of source file) */
#include "i2c_reset.c"

/* Block signals (default storage) */
BlockIO_Gesamtsystem Gesamtsystem_B;

/* Block states (default storage) */
D_Work_Gesamtsystem Gesamtsystem_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_Gesamtsystem Gesamtsystem_PrevZCSigState;

/* Real-time model */
RT_MODEL_Gesamtsystem Gesamtsystem_M_;
RT_MODEL_Gesamtsystem *const Gesamtsystem_M = &Gesamtsystem_M_;

/* Forward declaration for local functions */
static void Gesam_enter_atomic_wert_erkannt(void);
static void Gesamtsystem_Anfahrpunkt_8(void);
static void Gesamtsystem_Anfahrpunkt_9(void);
static void Gesamtsystem_Wechsel_3(void);
static void Gesamtsystem_Wechsel_11(void);
static void Gesamtsystem_Wechsel_12(void);
static void Gesamtsystem_Wechsel_13(void);
static void Gesamtsystem_Wechsel_4(void);
static void Gesamtsystem_Wechsel_5(void);
static void Gesamtsystem_Wechsel_6(void);
static void Gesamtsystem_Wechsel_7(void);
static void Gesamtsystem_Wechsel_8(void);
static void Gesamtsystem_Sammeln(void);
static void enter_atomic_Drehstillstand_mit(void);
static void Gesamtsystem_Start_Warten(void);
static void Gesamtsystem_Drehen_links_max(void);
static real_T Gesamtsystem_findPlaceForBlue(void);
static real_T Gesamtsystem_findPlaceForRed(void);
static void Gesamtsystem_SystemCore_release(dsp_simulink_MovingAverage_Gesa *obj);
static void Gesamtsystem_SystemCore_delete(dsp_simulink_MovingAverage_Gesa *obj);
static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingAverage_Gesa *obj);
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

/* Hardware Interrupt Block: '<S17>/C28x Hardware Interrupt' */
void isr_int8pie2_task_fcn(void)
{
  /* Call the system: <S17>/Triggered Subsystem */
  {
    int16_T i;

    /* S-Function (c28xisr_c2000): '<S17>/C28x Hardware Interrupt' */

    /* Output and update for function-call system: '<S17>/Triggered Subsystem' */
    {
      int16_T i;

      /* S-Function (c280xi2c_rx): '<S34>/I2C Receive' */
      {
        int rx_loop= 0;

        /* mode:0 (1:master 0:slave)  Addressing mode:0 (1:10-bit 0:7-bit)
           free data mode:0 (1:enbaled 0:disabled) digital loopback mode:0 (1:enabled 0:disabled)
           bit count:0 (0:8bit) NACK mode:1 (1:enabled 0: disabled) stop condition:0 (1:enabled 0: disabled)*/
        I2caRegs.I2CMDR.all = 57376;

        {
          int_T i1;
          uint8_T *y0 = &Gesamtsystem_B.I2CReceive_o1[0];
          for (i1=0; i1 < 10; i1++) {
            rx_loop= 0;
            while (I2caRegs.I2CFFRX.bit.RXFFST==0 && rx_loop<10000)
              rx_loop++;
            if (rx_loop!=10000) {
              y0[i1] = I2caRegs.I2CDRR;
              Gesamtsystem_B.I2CReceive_o2 = I2caRegs.I2CSTR.all;/* output i2c status */
            } else
              Gesamtsystem_B.I2CReceive_o2 = I2caRegs.I2CSTR.all | 0x40;/* output receive data loss status */
          }
        }
      }

      for (i = 0; i < 10; i++) {
        /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn2' */
        Gesamtsystem_B.VectorConcatenate[i + 10] =
          Gesamtsystem_B.I2CReceive_o1[i];

        /* Delay: '<S34>/Delay' */
        Gesamtsystem_B.VectorConcatenate[i] =
          Gesamtsystem_DWork.Delay_DSTATE_m[i];

        /* Update for Delay: '<S34>/Delay' */
        Gesamtsystem_DWork.Delay_DSTATE_m[i] = Gesamtsystem_B.I2CReceive_o1[i];
      }
    }

    /* End of Outputs for S-Function (c28xisr_c2000): '<S17>/C28x Hardware Interrupt' */

    /* RateTransition: '<S17>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Gesamtsystem_DWork.RateTransition_Buffer[i +
        (Gesamtsystem_DWork.RateTransition_semaphoreTaken == 0) * 20] =
        Gesamtsystem_B.VectorConcatenate[i];
    }

    Gesamtsystem_DWork.RateTransition_ActiveBufIdx =
      (Gesamtsystem_DWork.RateTransition_semaphoreTaken == 0);

    /* End of RateTransition: '<S17>/Rate Transition' */
  }
}

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Gesamtsystem_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(Gesamtsystem_M, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(Gesamtsystem_M, 2));
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
  Gesamtsystem_M->Timing.RateInteraction.TID0_1 =
    (Gesamtsystem_M->Timing.TaskCounters.TID[1] == 0);

  /* tid 1 shares data with slower tid rate: 2 */
  if (Gesamtsystem_M->Timing.TaskCounters.TID[1] == 0) {
    Gesamtsystem_M->Timing.RateInteraction.TID1_2 =
      (Gesamtsystem_M->Timing.TaskCounters.TID[2] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Gesamtsystem_M->Timing.TaskCounters.TID[1])++;
  if ((Gesamtsystem_M->Timing.TaskCounters.TID[1]) > 499) {/* Sample time: [0.01s, 0.0s] */
    Gesamtsystem_M->Timing.TaskCounters.TID[1] = 0;
  }

  (Gesamtsystem_M->Timing.TaskCounters.TID[2])++;
  if ((Gesamtsystem_M->Timing.TaskCounters.TID[2]) > 4999) {/* Sample time: [0.1s, 0.0s] */
    Gesamtsystem_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/*
 * Output and update for enable system:
 *    '<S50>/NEGATIVE Edge'
 *    '<S51>/NEGATIVE Edge'
 */
void Gesamtsystem_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_NEGATIVEEdge_Gesamtsystem *localB)
{
  /* Outputs for Enabled SubSystem: '<S50>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S55>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S55>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S50>/NEGATIVE Edge' */
}

/*
 * Output and update for enable system:
 *    '<S50>/POSITIVE Edge'
 *    '<S51>/POSITIVE Edge'
 */
void Gesamtsystem_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_POSITIVEEdge_Gesamtsystem *localB)
{
  /* Outputs for Enabled SubSystem: '<S50>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S56>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S56>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S50>/POSITIVE Edge' */
}

/*
 * Output and update for atomic system:
 *    '<S49>/MATLAB Function1'
 *    '<S49>/MATLAB Function3'
 */
void Gesamtsyste_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt,
  rtB_MATLABFunction1_Gesamtsyste *localB)
{
  /* MATLAB Function 'Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1': '<S52>:1' */
  /* '<S52>:1:3' */
  localB->y = rtu_yalt + (real32_T)rtu_u;
}

/* Function for Chart: '<S17>/Chart8' */
static void Gesam_enter_atomic_wert_erkannt(void)
{
  /* Entry 'wert_erkannt': '<S32>:109' */
  Gesamtsystem_DWork.values_out1[0] = (int16_T)Gesamtsystem_B.RateTransition[0];
  Gesamtsystem_DWork.values_out1[1] = (int16_T)Gesamtsystem_B.RateTransition[1];
  Gesamtsystem_DWork.values_out1[2] = (int16_T)Gesamtsystem_B.RateTransition[2];
  Gesamtsystem_DWork.values_out1[3] = (int16_T)Gesamtsystem_B.RateTransition[3];
  Gesamtsystem_DWork.values_out1[4] = (int16_T)Gesamtsystem_B.RateTransition[4];
  Gesamtsystem_DWork.values_out1[5] = (int16_T)Gesamtsystem_B.RateTransition[5];
  Gesamtsystem_DWork.values_out1[6] = (int16_T)Gesamtsystem_B.RateTransition[6];
  Gesamtsystem_DWork.values_out1[7] = (int16_T)Gesamtsystem_B.RateTransition[7];
  Gesamtsystem_DWork.values_out1[8] = (int16_T)Gesamtsystem_B.RateTransition[8];
  Gesamtsystem_DWork.values_out1[9] = (int16_T)Gesamtsystem_B.RateTransition[9];
  Gesamtsystem_DWork.values_out1[10] = (int16_T)Gesamtsystem_B.RateTransition[10];
  Gesamtsystem_DWork.values_out1[11] = (int16_T)Gesamtsystem_B.RateTransition[11];
  Gesamtsystem_DWork.values_out1[12] = (int16_T)Gesamtsystem_B.RateTransition[12];
  Gesamtsystem_DWork.values_out1[13] = (int16_T)Gesamtsystem_B.RateTransition[13];
  Gesamtsystem_DWork.values_out1[14] = (int16_T)Gesamtsystem_B.RateTransition[14];
  Gesamtsystem_DWork.values_out1[15] = (int16_T)Gesamtsystem_B.RateTransition[15];
  Gesamtsystem_DWork.values_out1[16] = (int16_T)Gesamtsystem_B.RateTransition[16];
  Gesamtsystem_DWork.values_out1[17] = (int16_T)Gesamtsystem_B.RateTransition[17];
  Gesamtsystem_DWork.values_out1[18] = (int16_T)Gesamtsystem_B.RateTransition[18];
  Gesamtsystem_DWork.values_out1[19] = (int16_T)Gesamtsystem_B.RateTransition[19];
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

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void Gesamtsystem_Anfahrpunkt_8(void)
{
  /* During 'Anfahrpunkt_8': '<S13>:1304' */
  if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
       Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
        Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
    /* Transition: '<S13>:1277' */
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_8;

    /* Entry 'Wechsel_8': '<S13>:1305' */
    Gesamtsystem_DWork.Counter++;
  }
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void Gesamtsystem_Anfahrpunkt_9(void)
{
  /* During 'Anfahrpunkt_9': '<S13>:1306' */
  if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
       Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
        Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
    /* Transition: '<S13>:1279' */
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_9;

    /* Entry 'Wechsel_9': '<S13>:1307' */
    Gesamtsystem_DWork.Counter++;
  }
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void Gesamtsystem_Wechsel_3(void)
{
  /* During 'Wechsel_3': '<S13>:1293' */
  /* Transition: '<S13>:1265' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_4;

  /* Entry 'Anfahrpunkt_4': '<S13>:1294' */
  Gesamtsystem_B.x_soll = 850.0;
  Gesamtsystem_B.y_soll = 650.0;
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void Gesamtsystem_Wechsel_11(void)
{
  /* During 'Wechsel_11': '<S13>:1309' */
  /* Transition: '<S13>:1282' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_12;

  /* Entry 'Anfahrpunkt_12': '<S13>:1310' */
  Gesamtsystem_B.x_soll = 900.0;
  Gesamtsystem_B.y_soll = 0.0;
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void Gesamtsystem_Wechsel_12(void)
{
  /* During 'Wechsel_12': '<S13>:1311' */
  /* Transition: '<S13>:1284' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_13;

  /* Entry 'Anfahrpunkt_13': '<S13>:1312' */
  Gesamtsystem_B.x_soll = 1200.0;
  Gesamtsystem_B.y_soll = 0.0;
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void Gesamtsystem_Wechsel_13(void)
{
  /* During 'Wechsel_13': '<S13>:1313' */
  /* Transition: '<S13>:1286' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_14;

  /* Entry 'Anfahrpunkt_14': '<S13>:1314' */
  Gesamtsystem_B.x_soll = 1350.0;
  Gesamtsystem_B.y_soll = -100.0;
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void Gesamtsystem_Wechsel_4(void)
{
  /* During 'Wechsel_4': '<S13>:1295' */
  /* Transition: '<S13>:1268' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_5;

  /* Entry 'Anfahrpunkt_5': '<S13>:1296' */
  Gesamtsystem_B.x_soll = 850.0;
  Gesamtsystem_B.y_soll = 750.0;
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void Gesamtsystem_Wechsel_5(void)
{
  /* During 'Wechsel_5': '<S13>:1297' */
  /* Transition: '<S13>:1270' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_6;

  /* Entry 'Anfahrpunkt_6': '<S13>:1299' */
  Gesamtsystem_B.x_soll = 600.0;
  Gesamtsystem_B.y_soll = 800.0;
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void Gesamtsystem_Wechsel_6(void)
{
  /* During 'Wechsel_6': '<S13>:1301' */
  /* Transition: '<S13>:1274' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_7;

  /* Entry 'Anfahrpunkt_7': '<S13>:1302' */
  Gesamtsystem_B.x_soll = 500.0;
  Gesamtsystem_B.y_soll = 800.0;
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void Gesamtsystem_Wechsel_7(void)
{
  /* During 'Wechsel_7': '<S13>:1303' */
  /* Transition: '<S13>:1276' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_8;

  /* Entry 'Anfahrpunkt_8': '<S13>:1304' */
  Gesamtsystem_B.x_soll = 325.0;
  Gesamtsystem_B.y_soll = 725.0;
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void Gesamtsystem_Wechsel_8(void)
{
  /* During 'Wechsel_8': '<S13>:1305' */
  /* Transition: '<S13>:1278' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_9;

  /* Entry 'Anfahrpunkt_9': '<S13>:1306' */
  Gesamtsystem_B.x_soll = 400.0;
  Gesamtsystem_B.y_soll = 300.0;
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void Gesamtsystem_Sammeln(void)
{
  /* During 'Sammeln': '<S13>:1258' */
  if (Gesamtsystem_DWork.Counter == 20.0) {
    /* Transition: '<S13>:1257' */
    Gesamtsystem_B.Gang = 1.0;
    Gesamtsystem_DWork.x_least = Gesamtsystem_B.x_soll;

    /* Exit Internal 'Sammeln': '<S13>:1258' */
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Uebergabe;

    /* Entry Internal 'Uebergabe': '<S13>:1340' */
    /* Transition: '<S13>:1341' */
    Gesamtsystem_DWork.Counter = 0.0;
    Gesamtsystem_DWork.is_Uebergabe = Ge_IN_Uebergabepunkt_x_Richtung;

    /* Entry 'Uebergabepunkt_x_Richtung': '<S13>:1346' */
  } else {
    switch (Gesamtsystem_DWork.is_Sammeln) {
     case Gesamtsystem_IN_Anfahrpunkt_1:
      /* During 'Anfahrpunkt_1': '<S13>:1288' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S13>:1260' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_1_b;

        /* Entry 'Wechsel_1': '<S13>:1289' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_10:
      /* During 'Anfahrpunkt_10': '<S13>:1300' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S13>:1271' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_10;

        /* Entry 'Wechsel_10': '<S13>:1298' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_11:
      /* During 'Anfahrpunkt_11': '<S13>:1308' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S13>:1281' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_11;

        /* Entry 'Wechsel_11': '<S13>:1309' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_12:
      /* During 'Anfahrpunkt_12': '<S13>:1310' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S13>:1283' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_12;

        /* Entry 'Wechsel_12': '<S13>:1311' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_13:
      /* During 'Anfahrpunkt_13': '<S13>:1312' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S13>:1285' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_13;

        /* Entry 'Wechsel_13': '<S13>:1313' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_14:
      /* During 'Anfahrpunkt_14': '<S13>:1314' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S13>:1287' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_14;

        /* Entry 'Wechsel_14': '<S13>:1315' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_2:
      /* During 'Anfahrpunkt_2': '<S13>:1290' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S13>:1262' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_2_b;

        /* Entry 'Wechsel_2': '<S13>:1291' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_3:
      /* During 'Anfahrpunkt_3': '<S13>:1292' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S13>:1264' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_3_b;

        /* Entry 'Wechsel_3': '<S13>:1293' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_4:
      /* During 'Anfahrpunkt_4': '<S13>:1294' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S13>:1267' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_4;

        /* Entry 'Wechsel_4': '<S13>:1295' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_5:
      /* During 'Anfahrpunkt_5': '<S13>:1296' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S13>:1269' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_5;

        /* Entry 'Wechsel_5': '<S13>:1297' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_6:
      /* During 'Anfahrpunkt_6': '<S13>:1299' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S13>:1272' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_6;

        /* Entry 'Wechsel_6': '<S13>:1301' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_7:
      /* During 'Anfahrpunkt_7': '<S13>:1302' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S13>:1275' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_7;

        /* Entry 'Wechsel_7': '<S13>:1303' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_8:
      Gesamtsystem_Anfahrpunkt_8();
      break;

     case Gesamtsystem_IN_Anfahrpunkt_9:
      Gesamtsystem_Anfahrpunkt_9();
      break;

     case Gesamtsystem_IN_Wechsel_1_b:
      /* During 'Wechsel_1': '<S13>:1289' */
      /* Transition: '<S13>:1261' */
      Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_2;

      /* Entry 'Anfahrpunkt_2': '<S13>:1290' */
      Gesamtsystem_B.x_soll = 1200.0;
      Gesamtsystem_B.y_soll = 100.0;
      break;

     case Gesamtsystem_IN_Wechsel_10:
      Gesamtsystem_Wechsel_3();
      break;

     case Gesamtsystem_IN_Wechsel_11:
      Gesamtsystem_Wechsel_11();
      break;

     case Gesamtsystem_IN_Wechsel_12:
      Gesamtsystem_Wechsel_12();
      break;

     case Gesamtsystem_IN_Wechsel_13:
      Gesamtsystem_Wechsel_13();
      break;

     case Gesamtsystem_IN_Wechsel_14:
      /* During 'Wechsel_14': '<S13>:1315' */
      break;

     case Gesamtsystem_IN_Wechsel_2_b:
      /* During 'Wechsel_2': '<S13>:1291' */
      /* Transition: '<S13>:1263' */
      Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_3;

      /* Entry 'Anfahrpunkt_3': '<S13>:1292' */
      Gesamtsystem_B.x_soll = 1000.0;
      Gesamtsystem_B.y_soll = 250.0;
      break;

     case Gesamtsystem_IN_Wechsel_3_b:
      Gesamtsystem_Wechsel_3();
      break;

     case Gesamtsystem_IN_Wechsel_4:
      Gesamtsystem_Wechsel_4();
      break;

     case Gesamtsystem_IN_Wechsel_5:
      Gesamtsystem_Wechsel_5();
      break;

     case Gesamtsystem_IN_Wechsel_6:
      Gesamtsystem_Wechsel_6();
      break;

     case Gesamtsystem_IN_Wechsel_7:
      Gesamtsystem_Wechsel_7();
      break;

     case Gesamtsystem_IN_Wechsel_8:
      Gesamtsystem_Wechsel_8();
      break;

     default:
      /* During 'Wechsel_9': '<S13>:1307' */
      if (Gesamtsystem_DWork.Counter == 9.0) {
        /* Transition: '<S13>:1273' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_10;

        /* Entry 'Anfahrpunkt_10': '<S13>:1300' */
        Gesamtsystem_B.x_soll = 880.0;
        Gesamtsystem_B.y_soll = 0.0;
      } else {
        /* Transition: '<S13>:1280' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_11;

        /* Entry 'Anfahrpunkt_11': '<S13>:1308' */
        Gesamtsystem_B.x_soll = 600.0;
        Gesamtsystem_B.y_soll = 0.0;
      }
      break;
    }
  }
}

/* Function for Chart: '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
static void enter_atomic_Drehstillstand_mit(void)
{
  real_T tmp;

  /* Entry 'Drehstillstand_mit_Ausrichtungsregelung': '<S19>:26' */
  Gesamtsystem_B.alpha_diff_opt = 0.0;
  tmp = fabs(Gesamtsystem_DWork.alpha_diff_intern);
  if (tmp < 5.0) {
    Gesamtsystem_B.pwm_mindern[0] = rt_roundd_snf(tmp);
  } else if (tmp < 15.0) {
    Gesamtsystem_B.pwm_mindern[0] = floor((tmp - 5.0) / 2.0) + 5.0;
  } else {
    Gesamtsystem_B.pwm_mindern[0] = 10.0;
  }

  if (Gesamtsystem_DWork.alpha_diff_intern < 0.0) {
    Gesamtsystem_B.pwm_mindern[1] = 0.0;
  } else if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
    Gesamtsystem_B.pwm_mindern[1] = 1.0;
  } else {
    Gesamtsystem_B.pwm_mindern[1] = 2.0;
  }
}

/* Function for Chart: '<S16>/Fahrsystem' */
static void Gesamtsystem_Start_Warten(void)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Start_Warten': '<S20>:92' */
  /* Transition: '<S20>:93' */
  l_mindern = fabs(Gesamtsystem_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (Gesamtsystem_B.PWMWertebereich > 0.0)) {
    /* Transition: '<S20>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S20>:21' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S20>:45' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsyste_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S20>:8' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S20>:57' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsyst_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S20>:9' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S20>:53' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S20>:54' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesam_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S20>:43' */
        Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S20>:55' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesa_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S20>:51' */
        Gesamtsystem_B.pwm_out_l = 59.0 + l_mindern;
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S20>:82' */
    if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S20>:85' */
      l_mindern = 1.0 - Gesamtsystem_B.Gang;
      r_mindern = Gesamtsystem_B.Gang;
    } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S20>:86' */
      l_mindern = Gesamtsystem_B.Gang;
      r_mindern = 1.0 - Gesamtsystem_B.Gang;
    } else {
      /* Transition: '<S20>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S20>:94' */
    a = Gesamtsystem_B.PWMWertebereich / 100.0;
    Gesamtsystem_B.pwm_out_l = Gesamtsystem_B.PWMWertebereich - rt_roundd_snf(a *
      a * Gesamtsystem_B.pwm_mindern[0]) * l_mindern;
    l_mindern = Gesamtsystem_B.PWMWertebereich / 100.0;
    Gesamtsystem_B.pwm_out_r = Gesamtsystem_B.PWMWertebereich - rt_roundd_snf
      (l_mindern * l_mindern * Gesamtsystem_B.pwm_mindern[0]) * r_mindern;
    Gesamtsystem_B.r_l_out_l = 1.0 - Gesamtsystem_B.Gang;
    Gesamtsystem_B.r_l_out_r = 1.0 - Gesamtsystem_B.Gang;
  }
}

/* Function for Chart: '<S16>/Fahrsystem' */
static void Gesamtsystem_Drehen_links_max(void)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Drehen_links_max': '<S20>:8' */
  /* Transition: '<S20>:60' */
  /* Transition: '<S20>:75' */
  l_mindern = fabs(Gesamtsystem_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (Gesamtsystem_B.PWMWertebereich > 0.0)) {
    /* Transition: '<S20>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S20>:21' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S20>:45' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsyste_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S20>:8' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S20>:57' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsyst_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S20>:9' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S20>:53' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S20>:54' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesam_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S20>:43' */
        Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S20>:55' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesa_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S20>:51' */
        Gesamtsystem_B.pwm_out_l = 59.0 + l_mindern;
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S20>:82' */
    if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S20>:85' */
      l_mindern = 1.0 - Gesamtsystem_B.Gang;
      r_mindern = Gesamtsystem_B.Gang;
    } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S20>:86' */
      l_mindern = Gesamtsystem_B.Gang;
      r_mindern = 1.0 - Gesamtsystem_B.Gang;
    } else {
      /* Transition: '<S20>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S20>:94' */
    a = Gesamtsystem_B.PWMWertebereich / 100.0;
    Gesamtsystem_B.pwm_out_l = Gesamtsystem_B.PWMWertebereich - rt_roundd_snf(a *
      a * Gesamtsystem_B.pwm_mindern[0]) * l_mindern;
    l_mindern = Gesamtsystem_B.PWMWertebereich / 100.0;
    Gesamtsystem_B.pwm_out_r = Gesamtsystem_B.PWMWertebereich - rt_roundd_snf
      (l_mindern * l_mindern * Gesamtsystem_B.pwm_mindern[0]) * r_mindern;
    Gesamtsystem_B.r_l_out_l = 1.0 - Gesamtsystem_B.Gang;
    Gesamtsystem_B.r_l_out_r = 1.0 - Gesamtsystem_B.Gang;
  }
}

/* Function for Chart: '<S4>/Sortieralgorithmus2' */
static real_T Gesamtsystem_findPlaceForBlue(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForBlue': '<S43>:206' */
  if (Gesamtsystem_DWork.magacin0 == 4.0) {
    /* '<S43>:206:4' */
    /* '<S43>:206:5' */
    magacinOut = 0.0;

    /* '<S43>:206:6' */
    Gesamtsystem_DWork.magacin0++;

    /* '<S43>:206:7' */
  } else if ((Gesamtsystem_DWork.magacin2 == 0.0) ||
             ((Gesamtsystem_DWork.magacin2_LastCube == 2.0) &&
              (Gesamtsystem_DWork.magacin2 < 5.0))) {
    /* '<S43>:206:9' */
    /* '<S43>:206:10' */
    magacinOut = 2.0;

    /* '<S43>:206:11' */
    Gesamtsystem_DWork.magacin2++;

    /* '<S43>:206:12' */
    Gesamtsystem_DWork.magacin2_LastCube = 1.0;
  } else if ((Gesamtsystem_DWork.magacin1_LastCube == 2.0) &&
             (Gesamtsystem_DWork.magacin1 < 5.0)) {
    /* '<S43>:206:14' */
    /* '<S43>:206:15' */
    magacinOut = 1.0;

    /* '<S43>:206:16' */
    Gesamtsystem_DWork.magacin1++;

    /* '<S43>:206:17' */
    Gesamtsystem_DWork.magacin1_LastCube = 1.0;
  } else if (Gesamtsystem_DWork.magacin3 < 5.0) {
    /* '<S43>:206:19' */
    /* '<S43>:206:20' */
    magacinOut = 3.0;

    /* '<S43>:206:21' */
    Gesamtsystem_DWork.magacin3++;
  } else if (Gesamtsystem_DWork.magacin4 < 5.0) {
    /* '<S43>:206:23' */
    /* '<S43>:206:24' */
    magacinOut = 4.0;

    /* '<S43>:206:25' */
    Gesamtsystem_DWork.magacin4++;
  } else if (Gesamtsystem_DWork.magacin5 < 5.0) {
    /* '<S43>:206:27' */
    /* '<S43>:206:28' */
    magacinOut = 5.0;

    /* '<S43>:206:29' */
    Gesamtsystem_DWork.magacin5++;
  } else if (Gesamtsystem_DWork.magacin6 < 4.0) {
    /* '<S43>:206:31' */
    /* '<S43>:206:32' */
    magacinOut = 6.0;
  } else {
    /* '<S43>:206:35' */
    magacinOut = -1.0;
  }

  return magacinOut;
}

/* Function for Chart: '<S4>/Sortieralgorithmus2' */
static real_T Gesamtsystem_findPlaceForRed(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForRed': '<S43>:204' */
  if ((Gesamtsystem_DWork.magacin1 == 0.0) ||
      ((Gesamtsystem_DWork.magacin1_LastCube == 1.0) &&
       (Gesamtsystem_DWork.magacin1 < 5.0))) {
    /* '<S43>:204:3' */
    /* '<S43>:204:4' */
    magacinOut = 1.0;

    /* '<S43>:204:5' */
    Gesamtsystem_DWork.magacin1++;

    /* '<S43>:204:6' */
    Gesamtsystem_DWork.magacin1_LastCube = 2.0;
  } else if ((Gesamtsystem_DWork.magacin2_LastCube == 1.0) &&
             (Gesamtsystem_DWork.magacin2 < 5.0)) {
    /* '<S43>:204:8' */
    /* '<S43>:204:9' */
    magacinOut = 2.0;

    /* '<S43>:204:10' */
    Gesamtsystem_DWork.magacin2++;

    /* '<S43>:204:11' */
    Gesamtsystem_DWork.magacin2_LastCube = 2.0;
  } else if (Gesamtsystem_DWork.magacin0 != 5.0) {
    /* '<S43>:204:13' */
    /* '<S43>:204:14' */
    magacinOut = 0.0;

    /* '<S43>:204:15' */
    Gesamtsystem_DWork.magacin0++;

    /* '<S43>:204:16' */
  } else if (Gesamtsystem_DWork.magacin6 < 4.0) {
    /* '<S43>:204:18' */
    /* '<S43>:204:19' */
    magacinOut = 6.0;
  } else if (Gesamtsystem_DWork.magacin3 != 5.0) {
    /* '<S43>:204:22' */
    /* '<S43>:204:23' */
    magacinOut = 3.0;

    /* '<S43>:204:24' */
    Gesamtsystem_DWork.magacin3++;

    /* '<S43>:204:25' */
  } else if ((Gesamtsystem_DWork.magacin1 <= Gesamtsystem_DWork.magacin4) &&
             (Gesamtsystem_DWork.magacin1 != 5.0)) {
    /* '<S43>:204:27' */
    /* '<S43>:204:28' */
    magacinOut = 1.0;

    /* '<S43>:204:29' */
    Gesamtsystem_DWork.magacin1++;

    /* '<S43>:204:30' */
    Gesamtsystem_DWork.magacin1_LastCube = 2.0;
  } else if (Gesamtsystem_DWork.magacin1 > Gesamtsystem_DWork.magacin4) {
    /* '<S43>:204:32' */
    /* '<S43>:204:33' */
    magacinOut = 4.0;

    /* '<S43>:204:34' */
    Gesamtsystem_DWork.magacin4++;
  } else if ((Gesamtsystem_DWork.magacin2 <= Gesamtsystem_DWork.magacin5) &&
             (Gesamtsystem_DWork.magacin2 != 5.0)) {
    /* '<S43>:204:37' */
    /* '<S43>:204:38' */
    magacinOut = 2.0;

    /* '<S43>:204:39' */
    Gesamtsystem_DWork.magacin2++;

    /* '<S43>:204:40' */
    Gesamtsystem_DWork.magacin2_LastCube = 2.0;
  } else if (Gesamtsystem_DWork.magacin2 > Gesamtsystem_DWork.magacin5) {
    /* '<S43>:204:42' */
    /* '<S43>:204:44' */
    magacinOut = 5.0;

    /* '<S43>:204:45' */
    Gesamtsystem_DWork.magacin5++;

    /* '<S43>:204:46' */
  } else {
    /* '<S43>:204:49' */
    magacinOut = -1.0;
  }

  return magacinOut;
}

static void Gesamtsystem_SystemCore_release(dsp_simulink_MovingAverage_Gesa *obj)
{
  dsp_private_ExponentialMovingAv *obj_0;
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj_0 = obj->pStatistic;
    if (obj_0->isInitialized == 1L) {
      obj_0->isInitialized = 2L;
    }

    obj->NumChannels = -1L;
  }
}

static void Gesamtsystem_SystemCore_delete(dsp_simulink_MovingAverage_Gesa *obj)
{
  Gesamtsystem_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingAverage_Gesa *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Gesamtsystem_SystemCore_delete(obj);
  }
}

/* Model step function for TID0 */
void Gesamtsystem_step0(void)          /* Sample time: [2.0E-5s, 0.0s] */
{
  real_T y;
  boolean_T rtb_VergleichmitSchwellwert;
  boolean_T rtb_VergleichmitSchwellwert_b;
  real_T rtb_Sum;
  real_T rtb_MultiportSwitch_idx_0;
  real_T rtb_MultiportSwitch_idx_1;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_1;

  {                                    /* Sample time: [2.0E-5s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* RateTransition: '<S9>/Takter (0.01s)' incorporates:
   *  Constant: '<S9>/Inkrement'
   */
  if (Gesamtsystem_M->Timing.RateInteraction.TID0_1) {
    Gesamtsystem_B.Takter001s = Gesamtsystem_P.Inkrement_Value;
  }

  /* End of RateTransition: '<S9>/Takter (0.01s)' */

  /* S-Function (c280xadc): '<S4>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  {
    AdcRegs.ADCTRL2.bit.RST_SEQ1 = 1;  /* Reset SEQ1 module*/
    AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;/*clear INT sequencer*/
    AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;  /* Software Trigger*/
    while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {
    }                                  /*Wait for Sequencer INT bit to clear */

    asm(" RPT #11 || NOP");
    Gesamtsystem_B.AnalogDigitalWandlungSampletime = (AdcRegs.ADCRESULT0) >> 4;
    Gesamtsystem_B.AnalogDigitalWandlungSampleti_e = (AdcRegs.ADCRESULT1) >> 4;
    Gesamtsystem_B.AnalogDigitalWandlungSampleti_a = (AdcRegs.ADCRESULT2) >> 4;
  }

  /* RateTransition: '<S4>/Rate Transition3' */
  if (Gesamtsystem_M->Timing.RateInteraction.TID0_1) {
    Gesamtsystem_B.RateTransition3 =
      Gesamtsystem_B.AnalogDigitalWandlungSampleti_e;
  }

  /* End of RateTransition: '<S4>/Rate Transition3' */

  /* RelationalOperator: '<S49>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S49>/Constant'
   */
  rtb_VergleichmitSchwellwert = (Gesamtsystem_P.Constant_Value <=
    Gesamtsystem_B.AnalogDigitalWandlungSampleti_a);

  /* MultiPortSwitch: '<S50>/Multiport Switch' incorporates:
   *  Constant: '<S50>/Constant1'
   *  Constant: '<S50>/either edge'
   *  Constant: '<S50>/neg. edge'
   *  Constant: '<S50>/pos. edge'
   */
  switch ((int16_T)Gesamtsystem_P.EdgeDetector1_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = Gesamtsystem_P.posedge_Value[0];
    rtb_MultiportSwitch_idx_1 = Gesamtsystem_P.posedge_Value[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = Gesamtsystem_P.negedge_Value[0];
    rtb_MultiportSwitch_idx_1 = Gesamtsystem_P.negedge_Value[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = Gesamtsystem_P.eitheredge_Value[0];
    rtb_MultiportSwitch_idx_1 = Gesamtsystem_P.eitheredge_Value[1];
    break;
  }

  /* End of MultiPortSwitch: '<S50>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S50>/POSITIVE Edge' */
  /* Memory: '<S50>/Memory' */
  Gesamtsystem_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert, Gesamtsystem_DWork.Memory_PreviousInput,
    &Gesamtsystem_B.POSITIVEEdge);

  /* End of Outputs for SubSystem: '<S50>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S50>/NEGATIVE Edge' */
  Gesamtsystem_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert, Gesamtsystem_DWork.Memory_PreviousInput,
    &Gesamtsystem_B.NEGATIVEEdge);

  /* End of Outputs for SubSystem: '<S50>/NEGATIVE Edge' */

  /* RelationalOperator: '<S49>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S49>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert_b =
    (Gesamtsystem_B.AnalogDigitalWandlungSampletime <=
     Gesamtsystem_P.HeuristischermittelterSchwellwe);

  /* MATLAB Function: '<S49>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S49>/Unit Delay3'
   *  UnitDelay: '<S49>/Unit Delay4'
   *  UnitDelay: '<S49>/Unit Delay5'
   */
  /* MATLAB Function 'Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2': '<S53>:1' */
  /* '<S53>:1:3' */
  y = 1.0;
  tmp_0 = !Gesamtsystem_DWork.UnitDelay3_DSTATE;
  tmp_1 = !Gesamtsystem_DWork.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S53>:1:7' */
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_b) {
    /* '<S53>:1:10' */
    /* '<S53>:1:11' */
    y = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_b)) {
    /* '<S53>:1:14' */
    /* '<S53>:1:15' */
    y = -1.0;
  }

  tmp_0 = (tmp_0 && Gesamtsystem_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S53>:1:22' */
    /* '<S53>:1:23' */
    y = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_b)
  {
    /* '<S53>:1:26' */
    /* '<S53>:1:27' */
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_b) {
    /* '<S53>:1:34' */
    /* '<S53>:1:35' */
    y = 1.0;
  }

  tmp_0 = (Gesamtsystem_DWork.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S53>:1:38' */
    /* '<S53>:1:39' */
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S53>:1:46' */
    /* '<S53>:1:47' */
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_b) {
    /* '<S53>:1:50' */
    /* '<S53>:1:51' */
    y = -1.0;
  }

  tmp_0 = (Gesamtsystem_DWork.UnitDelay3_DSTATE &&
           Gesamtsystem_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_b)
  {
    /* '<S53>:1:58' */
    /* '<S53>:1:59' */
    y = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S53>:1:62' */
    /* '<S53>:1:63' */
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_b) {
    /* '<S53>:1:66' */
    /* '<S53>:1:67' */
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (y == 1.0) {
    /* '<S53>:1:70' */
    /* '<S53>:1:71' */
    Gesamtsystem_B.RL = 1.0;
  } else {
    /* '<S53>:1:73' */
    Gesamtsystem_B.RL = 0.0;
  }

  /* MATLAB Function: '<S49>/MATLAB Function1' incorporates:
   *  Logic: '<S50>/Logical Operator1'
   *  MATLAB Function: '<S49>/MATLAB Function2'
   *  Product: '<S49>/Product3'
   *  UnitDelay: '<S49>/Unit Delay1'
   */
  Gesamtsyste_MATLABFunction1((real_T)
    (Gesamtsystem_B.POSITIVEEdge.RelationalOperator1 ||
     Gesamtsystem_B.NEGATIVEEdge.RelationalOperator1) * y,
    Gesamtsystem_DWork.UnitDelay1_DSTATE, &Gesamtsystem_B.sf_MATLABFunction1);

  /* Product: '<S49>/Product1' incorporates:
   *  Constant: '<S49>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  rtb_Sum = Gesamtsystem_P.WinkelFlankePolulo3416V022Polul *
    Gesamtsystem_B.sf_MATLABFunction1.y;

  /* MultiPortSwitch: '<S51>/Multiport Switch' incorporates:
   *  Constant: '<S51>/Constant1'
   *  Constant: '<S51>/either edge'
   *  Constant: '<S51>/neg. edge'
   *  Constant: '<S51>/pos. edge'
   */
  switch ((int16_T)Gesamtsystem_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = Gesamtsystem_P.posedge_Value_i[0];
    rtb_MultiportSwitch_idx_1 = Gesamtsystem_P.posedge_Value_i[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = Gesamtsystem_P.negedge_Value_n[0];
    rtb_MultiportSwitch_idx_1 = Gesamtsystem_P.negedge_Value_n[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = Gesamtsystem_P.eitheredge_Value_h[0];
    rtb_MultiportSwitch_idx_1 = Gesamtsystem_P.eitheredge_Value_h[1];
    break;
  }

  /* End of MultiPortSwitch: '<S51>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S51>/POSITIVE Edge' */
  /* Memory: '<S51>/Memory' */
  Gesamtsystem_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_b, Gesamtsystem_DWork.Memory_PreviousInput_k,
    &Gesamtsystem_B.POSITIVEEdge_m);

  /* End of Outputs for SubSystem: '<S51>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S51>/NEGATIVE Edge' */
  Gesamtsystem_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_b, Gesamtsystem_DWork.Memory_PreviousInput_k,
    &Gesamtsystem_B.NEGATIVEEdge_n);

  /* End of Outputs for SubSystem: '<S51>/NEGATIVE Edge' */

  /* MATLAB Function: '<S49>/MATLAB Function3' incorporates:
   *  Logic: '<S51>/Logical Operator1'
   *  MATLAB Function: '<S49>/MATLAB Function2'
   *  Product: '<S49>/Product'
   *  UnitDelay: '<S49>/Unit Delay2'
   */
  Gesamtsyste_MATLABFunction1(y * (real_T)
    (Gesamtsystem_B.POSITIVEEdge_m.RelationalOperator1 ||
     Gesamtsystem_B.NEGATIVEEdge_n.RelationalOperator1),
    Gesamtsystem_DWork.UnitDelay2_DSTATE_a, &Gesamtsystem_B.sf_MATLABFunction3);

  /* Sum: '<S49>/Sum' incorporates:
   *  Constant: '<S49>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S49>/Product2'
   */
  rtb_Sum += Gesamtsystem_B.sf_MATLABFunction3.y *
    Gesamtsystem_P.WinkelFlankePolulo3416V022Pol_l;

  /* RateTransition: '<S45>/Rate Transition3' */
  if (Gesamtsystem_M->Timing.RateInteraction.TID0_1) {
    Gesamtsystem_B.RateTransition3_o = rtb_Sum;
  }

  /* End of RateTransition: '<S45>/Rate Transition3' */

  /* S-Function (c280xgpio_do): '<S45>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (Gesamtsystem_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Update for Memory: '<S50>/Memory' */
  Gesamtsystem_DWork.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S49>/Unit Delay3' */
  Gesamtsystem_DWork.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S49>/Unit Delay4' */
  Gesamtsystem_DWork.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert_b;

  /* Update for UnitDelay: '<S49>/Unit Delay5' incorporates:
   *  MATLAB Function: '<S49>/MATLAB Function2'
   */
  Gesamtsystem_DWork.UnitDelay5_DSTATE = y;

  /* Update for UnitDelay: '<S49>/Unit Delay1' */
  Gesamtsystem_DWork.UnitDelay1_DSTATE = Gesamtsystem_B.sf_MATLABFunction1.y;

  /* Update for Memory: '<S51>/Memory' */
  Gesamtsystem_DWork.Memory_PreviousInput_k = rtb_VergleichmitSchwellwert_b;

  /* Update for UnitDelay: '<S49>/Unit Delay2' */
  Gesamtsystem_DWork.UnitDelay2_DSTATE_a = Gesamtsystem_B.sf_MATLABFunction3.y;
}

/* Model step function for TID1 */
void Gesamtsystem_step1(void)          /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_y_b;
  real_T rtb_ZM_pwm_out;
  real_T rtb_DeadZone;
  int32_T bitIdx;
  int32_T intVal;
  int16_T j;
  uint32_T u;
  boolean_T sf_internal_predicateOutput;
  real_T a;
  real_T rtb_SollIstAbgleich_x;
  uint16_T rtb_IntegertoBitConverter8[8];
  uint16_T rtb_IntegertoBitConverter7[8];
  uint16_T rtb_IntegertoBitConverter6[8];
  uint16_T rtb_IntegertoBitConverter5[8];
  uint16_T rtb_IntegertoBitConverter4[8];
  uint16_T rtb_IntegertoBitConverter1[8];
  uint16_T rtb_IntegertoBitConverter3[8];
  uint16_T rtb_IntegertoBitConverter2[8];
  real_T rtb_Zeitinsec;
  real_T rtb_RoundingFunction1;
  real_T rtb_RoundingFunction;
  ZCEventType zcEvent;
  int16_T i;

  /* RateTransition: '<S17>/Rate Transition' */
  Gesamtsystem_DWork.RateTransition_semaphoreTaken =
    Gesamtsystem_DWork.RateTransition_ActiveBufIdx;
  j = Gesamtsystem_DWork.RateTransition_semaphoreTaken * 20;
  for (i = 0; i < 20; i++) {
    Gesamtsystem_B.RateTransition[i] =
      Gesamtsystem_DWork.RateTransition_Buffer[i + j];
  }

  /* End of RateTransition: '<S17>/Rate Transition' */

  /* Chart: '<S17>/Chart8' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8 */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8 */
  if (Gesamtsystem_DWork.is_active_c17_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8 */
    Gesamtsystem_DWork.is_active_c17_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8 */
    /* Transition: '<S32>:3' */
    Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_init;

    /* Entry 'init': '<S32>:2' */
    Gesamtsystem_DWork.values_out1[0] = 0;
    Gesamtsystem_DWork.values_out1[1] = 0;
    Gesamtsystem_DWork.values_out1[2] = 0;
    Gesamtsystem_DWork.values_out1[3] = 0;
    Gesamtsystem_DWork.values_out1[4] = 0;
    Gesamtsystem_DWork.values_out1[5] = 0;
    Gesamtsystem_DWork.values_out1[6] = 0;
    Gesamtsystem_DWork.values_out1[7] = 0;
    Gesamtsystem_DWork.values_out1[8] = 0;
    Gesamtsystem_DWork.values_out1[9] = 0;
    Gesamtsystem_DWork.values_out1[10] = 0;
    Gesamtsystem_DWork.values_out1[11] = 0;
    Gesamtsystem_DWork.values_out1[12] = 0;
    Gesamtsystem_DWork.values_out1[13] = 0;
    Gesamtsystem_DWork.values_out1[14] = 0;
    Gesamtsystem_DWork.values_out1[15] = 0;
    Gesamtsystem_DWork.values_out1[16] = 0;
    Gesamtsystem_DWork.values_out1[17] = 0;
    Gesamtsystem_DWork.values_out1[18] = 0;
    Gesamtsystem_DWork.values_out1[19] = 0;
  } else {
    switch (Gesamtsystem_DWork.is_c17_Gesamtsystem) {
     case IN_Anfang_found_Schritt_uebertr:
      /* During 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S32>:126' */
      if ((c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
            (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
              (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                  (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search],
                   Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.search, 1)]),
                  Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Gesamtsystem_DWork.search, 2)]),
                 Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Gesamtsystem_DWork.search, 3)]),
                Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Gesamtsystem_DWork.search, 4)]),
               Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Gesamtsystem_DWork.search, 5)]),
              Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Gesamtsystem_DWork.search, 6)]),
             Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Gesamtsystem_DWork.search, 7)]),
            Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
            (Gesamtsystem_DWork.search, 8)]) ==
           Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Gesamtsystem_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search],
                    Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Gesamtsystem_DWork.search, 1)]),
                   Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.search, 2)]),
                  Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Gesamtsystem_DWork.search, 3)]),
                 Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Gesamtsystem_DWork.search, 4)]),
                Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Gesamtsystem_DWork.search, 5)]),
               Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Gesamtsystem_DWork.search, 6)]),
              Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Gesamtsystem_DWork.search, 7)]),
             Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Gesamtsystem_DWork.search, 8)]), 256) ==
           Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Gesamtsystem_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search],
                    Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Gesamtsystem_DWork.search, 1)]),
                   Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.search, 2)]),
                  Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Gesamtsystem_DWork.search, 3)]),
                 Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Gesamtsystem_DWork.search, 4)]),
                Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Gesamtsystem_DWork.search, 5)]),
               Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Gesamtsystem_DWork.search, 6)]),
              Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Gesamtsystem_DWork.search, 7)]),
             Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Gesamtsystem_DWork.search, 8)]), 512) ==
           Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Gesamtsystem_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search],
                    Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Gesamtsystem_DWork.search, 1)]),
                   Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.search, 2)]),
                  Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Gesamtsystem_DWork.search, 3)]),
                 Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Gesamtsystem_DWork.search, 4)]),
                Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Gesamtsystem_DWork.search, 5)]),
               Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Gesamtsystem_DWork.search, 6)]),
              Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Gesamtsystem_DWork.search, 7)]),
             Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Gesamtsystem_DWork.search, 8)]), 1536) ==
           Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Gesamtsystem_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search],
                    Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Gesamtsystem_DWork.search, 1)]),
                   Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.search, 2)]),
                  Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Gesamtsystem_DWork.search, 3)]),
                 Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Gesamtsystem_DWork.search, 4)]),
                Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Gesamtsystem_DWork.search, 5)]),
               Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Gesamtsystem_DWork.search, 6)]),
              Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Gesamtsystem_DWork.search, 7)]),
             Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Gesamtsystem_DWork.search, 8)]), 1280) ==
           Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Gesamtsystem_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search],
                    Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Gesamtsystem_DWork.search, 1)]),
                   Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.search, 2)]),
                  Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Gesamtsystem_DWork.search, 3)]),
                 Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Gesamtsystem_DWork.search, 4)]),
                Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Gesamtsystem_DWork.search, 5)]),
               Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Gesamtsystem_DWork.search, 6)]),
              Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Gesamtsystem_DWork.search, 7)]),
             Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Gesamtsystem_DWork.search, 8)]), 1024) ==
           Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Gesamtsystem_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search],
                    Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Gesamtsystem_DWork.search, 1)]),
                   Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.search, 2)]),
                  Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Gesamtsystem_DWork.search, 3)]),
                 Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Gesamtsystem_DWork.search, 4)]),
                Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Gesamtsystem_DWork.search, 5)]),
               Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Gesamtsystem_DWork.search, 6)]),
              Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Gesamtsystem_DWork.search, 7)]),
             Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Gesamtsystem_DWork.search, 8)]), 768) ==
           Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Gesamtsystem_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search],
                    Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (Gesamtsystem_DWork.search, 1)]),
                   Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (Gesamtsystem_DWork.search, 2)]),
                  Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (Gesamtsystem_DWork.search, 3)]),
                 Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (Gesamtsystem_DWork.search, 4)]),
                Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (Gesamtsystem_DWork.search, 5)]),
               Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (Gesamtsystem_DWork.search, 6)]),
              Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (Gesamtsystem_DWork.search, 7)]),
             Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (Gesamtsystem_DWork.search, 8)]), 1792) ==
           Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (Gesamtsystem_DWork.search, 9)])) {
        /* Transition: '<S32>:144' */
        /* Transition: '<S32>:145' */
        /* Transition: '<S32>:146' */
        /* Transition: '<S32>:151' */
        /* Transition: '<S32>:150' */
        /* Transition: '<S32>:149' */
        /* Transition: '<S32>:147' */
        /* Transition: '<S32>:156' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamts_IN_x5_valid_data_found1;

        /* Entry 'x5_valid_data_found1': '<S32>:148' */
        Gesamtsystem_B.valid_values1 =
          Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1)];
        Gesamtsystem_B.valid_values2 =
          Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 2)];
        Gesamtsystem_B.valid_values3 =
          Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 3)];
        Gesamtsystem_B.valid_values4 =
          Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 4)];
        Gesamtsystem_B.valid_values5 =
          Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 5)];
        Gesamtsystem_B.valid_values6 =
          Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 6)];
        Gesamtsystem_B.valid_values7 =
          Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 7)];
        Gesamtsystem_B.valid_values8 =
          Gesamtsystem_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 8)];
        Gesamtsystem_DWork.zaehler = c28x_add_s32_s32_s32_sat
          (Gesamtsystem_DWork.zaehler, 1L);
      } else {
        /* Transition: '<S32>:135' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_x1_search1;

        /* Entry 'x1_search1': '<S32>:125' */
        Gesamtsystem_DWork.search = c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1);
      }
      break;

     case Gesamtsystem_IN_init:
      /* During 'init': '<S32>:2' */
      /* Transition: '<S32>:112' */
      Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_wert_erkannt;
      Gesam_enter_atomic_wert_erkannt();
      break;

     case Gesamtsystem_IN_wert_erkannt:
      /* During 'wert_erkannt': '<S32>:109' */
      /* Transition: '<S32>:116' */
      Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_wert_erkannt2;

      /* Entry 'wert_erkannt2': '<S32>:115' */
      Gesamtsystem_DWork.search = 0;
      Gesamtsystem_DWork.counter = c28x_add_s32_s32_s32_sat
        (Gesamtsystem_DWork.counter, 1L);
      break;

     case Gesamtsystem_IN_wert_erkannt2:
      /* During 'wert_erkannt2': '<S32>:115' */
      if (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search] == 88) {
        /* Transition: '<S32>:127' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S32>:126' */
        Gesamtsystem_DWork.x_found = c28x_add_s32_s32_s32_sat
          (Gesamtsystem_DWork.x_found, 1L);
      } else {
        /* Transition: '<S32>:128' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_x1_search1;

        /* Entry 'x1_search1': '<S32>:125' */
        Gesamtsystem_DWork.search = c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1);
      }
      break;

     case Gesamtsystem_IN_x1_search1:
      /* During 'x1_search1': '<S32>:125' */
      if (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search] == 88) {
        /* Transition: '<S32>:129' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S32>:126' */
        Gesamtsystem_DWork.x_found = c28x_add_s32_s32_s32_sat
          (Gesamtsystem_DWork.x_found, 1L);
      } else if (Gesamtsystem_DWork.search < 19) {
        /* Transition: '<S32>:130' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_x1_search1;

        /* Entry 'x1_search1': '<S32>:125' */
        Gesamtsystem_DWork.search = c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1);
      } else {
        /* Transition: '<S32>:133' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_wert_erkannt;
        Gesam_enter_atomic_wert_erkannt();
      }
      break;

     default:
      /* During 'x5_valid_data_found1': '<S32>:148' */
      /* Transition: '<S32>:152' */
      Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_wert_erkannt;
      Gesam_enter_atomic_wert_erkannt();
      break;
    }
  }

  /* End of Chart: '<S17>/Chart8' */

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter2' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values1;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter2[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S17>/Integer to Bit Converter2' */

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter3' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values2;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter3[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S17>/Integer to Bit Converter3' */

  /* Chart: '<S17>/Chart6' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart6 */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart6 */
  if (Gesamtsystem_DWork.is_active_c16_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart6 */
    Gesamtsystem_DWork.is_active_c16_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart6 */
    /* Transition: '<S31>:3' */
    Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c16_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S31>:17' */
      /* Transition: '<S31>:24' */
      Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S31>:26' */
      Gesamtsystem_B.int16x_bin[0] = rtb_IntegertoBitConverter2[0];
      Gesamtsystem_B.int16x_bin[1] = rtb_IntegertoBitConverter2[1];
      Gesamtsystem_B.int16x_bin[2] = rtb_IntegertoBitConverter2[2];
      Gesamtsystem_B.int16x_bin[3] = rtb_IntegertoBitConverter2[3];
      Gesamtsystem_B.int16x_bin[4] = rtb_IntegertoBitConverter2[4];
      Gesamtsystem_B.int16x_bin[5] = rtb_IntegertoBitConverter2[5];
      Gesamtsystem_B.int16x_bin[6] = rtb_IntegertoBitConverter2[6];
      Gesamtsystem_B.int16x_bin[7] = rtb_IntegertoBitConverter2[7];
      Gesamtsystem_B.int16x_bin[8] = rtb_IntegertoBitConverter3[0];
      Gesamtsystem_B.int16x_bin[9] = rtb_IntegertoBitConverter3[1];
      Gesamtsystem_B.int16x_bin[10] = rtb_IntegertoBitConverter3[2];
      Gesamtsystem_B.int16x_bin[11] = rtb_IntegertoBitConverter3[3];
      Gesamtsystem_B.int16x_bin[12] = rtb_IntegertoBitConverter3[4];
      Gesamtsystem_B.int16x_bin[13] = rtb_IntegertoBitConverter3[5];
      Gesamtsystem_B.int16x_bin[14] = rtb_IntegertoBitConverter3[6];
      Gesamtsystem_B.int16x_bin[15] = rtb_IntegertoBitConverter3[7];
      break;

     case Gesamtsystem_IN_x0:
      /* During 'x0': '<S31>:2' */
      /* Transition: '<S31>:7' */
      Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S31>:26' */
      /* Transition: '<S31>:25' */
      Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S17>/Chart6' */

  /* S-Function (scominttobit): '<S17>/Bit to Integer Converter' */
  /* Bit to Integer Conversion */
  bitIdx = 0L;
  intVal = 0L;
  for (j = 0; j < 16; j++) {
    /* Input bit order is MSB first */
    intVal <<= 1UL;
    intVal |= (int32_T)(real32_T)floor(Gesamtsystem_B.int16x_bin[bitIdx]);
    if ((j == 0) && (intVal != 0L)) {
      /* Output Integer values are signed, do sign extension */
      intVal = -1L;
    }

    bitIdx++;
  }

  /* Gain: '<S17>/x in mm' incorporates:
   *  S-Function (scominttobit): '<S17>/Bit to Integer Converter'
   */
  rtb_DeadZone = (real_T)Gesamtsystem_P.xinmm_Gain * (real32_T)intVal;

  /* Rounding: '<S17>/Rounding Function' */
  rtb_RoundingFunction = rt_roundd_snf(rtb_DeadZone);

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter1' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values3;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter1[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S17>/Integer to Bit Converter1' */

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter4' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values4;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter4[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S17>/Integer to Bit Converter4' */

  /* Chart: '<S17>/Chart2' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart2 */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart2 */
  if (Gesamtsystem_DWork.is_active_c13_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart2 */
    Gesamtsystem_DWork.is_active_c13_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart2 */
    /* Transition: '<S29>:3' */
    Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c13_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S29>:17' */
      /* Transition: '<S29>:24' */
      Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S29>:26' */
      Gesamtsystem_B.int16y_bin[0] = rtb_IntegertoBitConverter1[0];
      Gesamtsystem_B.int16y_bin[1] = rtb_IntegertoBitConverter1[1];
      Gesamtsystem_B.int16y_bin[2] = rtb_IntegertoBitConverter1[2];
      Gesamtsystem_B.int16y_bin[3] = rtb_IntegertoBitConverter1[3];
      Gesamtsystem_B.int16y_bin[4] = rtb_IntegertoBitConverter1[4];
      Gesamtsystem_B.int16y_bin[5] = rtb_IntegertoBitConverter1[5];
      Gesamtsystem_B.int16y_bin[6] = rtb_IntegertoBitConverter1[6];
      Gesamtsystem_B.int16y_bin[7] = rtb_IntegertoBitConverter1[7];
      Gesamtsystem_B.int16y_bin[8] = rtb_IntegertoBitConverter4[0];
      Gesamtsystem_B.int16y_bin[9] = rtb_IntegertoBitConverter4[1];
      Gesamtsystem_B.int16y_bin[10] = rtb_IntegertoBitConverter4[2];
      Gesamtsystem_B.int16y_bin[11] = rtb_IntegertoBitConverter4[3];
      Gesamtsystem_B.int16y_bin[12] = rtb_IntegertoBitConverter4[4];
      Gesamtsystem_B.int16y_bin[13] = rtb_IntegertoBitConverter4[5];
      Gesamtsystem_B.int16y_bin[14] = rtb_IntegertoBitConverter4[6];
      Gesamtsystem_B.int16y_bin[15] = rtb_IntegertoBitConverter4[7];
      break;

     case Gesamtsystem_IN_x0:
      /* During 'x0': '<S29>:2' */
      /* Transition: '<S29>:7' */
      Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S29>:26' */
      /* Transition: '<S29>:25' */
      Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S17>/Chart2' */

  /* S-Function (scominttobit): '<S17>/Bit to Integer Converter1' */
  /* Bit to Integer Conversion */
  bitIdx = 0L;
  intVal = 0L;
  for (j = 0; j < 16; j++) {
    /* Input bit order is MSB first */
    intVal <<= 1UL;
    intVal |= (int32_T)(real32_T)floor(Gesamtsystem_B.int16y_bin[bitIdx]);
    if ((j == 0) && (intVal != 0L)) {
      /* Output Integer values are signed, do sign extension */
      intVal = -1L;
    }

    bitIdx++;
  }

  /* Gain: '<S17>/y in mm' incorporates:
   *  S-Function (scominttobit): '<S17>/Bit to Integer Converter1'
   */
  rtb_DeadZone = (real_T)Gesamtsystem_P.yinmm_Gain * (real32_T)intVal;

  /* Rounding: '<S17>/Rounding Function1' */
  rtb_RoundingFunction1 = rt_roundd_snf(rtb_DeadZone);

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter5' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values5;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter5[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S17>/Integer to Bit Converter5' */

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter6' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values6;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter6[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S17>/Integer to Bit Converter6' */

  /* Chart: '<S17>/Chart4' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart4 */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart4 */
  if (Gesamtsystem_DWork.is_active_c14_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart4 */
    Gesamtsystem_DWork.is_active_c14_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart4 */
    /* Transition: '<S30>:3' */
    Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c14_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S30>:17' */
      /* Transition: '<S30>:24' */
      Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S30>:26' */
      Gesamtsystem_B.int16a1_bin[0] = rtb_IntegertoBitConverter5[0];
      Gesamtsystem_B.int16a1_bin[1] = rtb_IntegertoBitConverter5[1];
      Gesamtsystem_B.int16a1_bin[2] = rtb_IntegertoBitConverter5[2];
      Gesamtsystem_B.int16a1_bin[3] = rtb_IntegertoBitConverter5[3];
      Gesamtsystem_B.int16a1_bin[4] = rtb_IntegertoBitConverter5[4];
      Gesamtsystem_B.int16a1_bin[5] = rtb_IntegertoBitConverter5[5];
      Gesamtsystem_B.int16a1_bin[6] = rtb_IntegertoBitConverter5[6];
      Gesamtsystem_B.int16a1_bin[7] = rtb_IntegertoBitConverter5[7];
      Gesamtsystem_B.int16a1_bin[8] = rtb_IntegertoBitConverter6[0];
      Gesamtsystem_B.int16a1_bin[9] = rtb_IntegertoBitConverter6[1];
      Gesamtsystem_B.int16a1_bin[10] = rtb_IntegertoBitConverter6[2];
      Gesamtsystem_B.int16a1_bin[11] = rtb_IntegertoBitConverter6[3];
      Gesamtsystem_B.int16a1_bin[12] = rtb_IntegertoBitConverter6[4];
      Gesamtsystem_B.int16a1_bin[13] = rtb_IntegertoBitConverter6[5];
      Gesamtsystem_B.int16a1_bin[14] = rtb_IntegertoBitConverter6[6];
      Gesamtsystem_B.int16a1_bin[15] = rtb_IntegertoBitConverter6[7];
      break;

     case Gesamtsystem_IN_x0:
      /* During 'x0': '<S30>:2' */
      /* Transition: '<S30>:7' */
      Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S30>:26' */
      /* Transition: '<S30>:25' */
      Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S17>/Chart4' */

  /* S-Function (scominttobit): '<S17>/Bit to Integer Converter2' */
  /* Bit to Integer Conversion */
  bitIdx = 0L;
  intVal = 0L;
  for (j = 0; j < 16; j++) {
    /* Input bit order is MSB first */
    intVal <<= 1UL;
    intVal |= (int32_T)(real32_T)floor(Gesamtsystem_B.int16a1_bin[bitIdx]);
    if ((j == 0) && (intVal != 0L)) {
      /* Output Integer values are signed, do sign extension */
      intVal = -1L;
    }

    bitIdx++;
  }

  /* Gain: '<S17>/alpha in °' incorporates:
   *  S-Function (scominttobit): '<S17>/Bit to Integer Converter2'
   */
  rtb_DeadZone = (real_T)Gesamtsystem_P.alphain_Gain * (real32_T)intVal;

  /* Chart: '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' incorporates:
   *  Rounding: '<S17>/Rounding Function2'
   */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Konvertierung Nexonar -> Fahrzeug
     Folgende Werte koennen
     für Nexonar eingestellt werden:
     - r_Versatz_Nexo:
     Radialer Versatz des Nexonars
     zur Rotationsachse des Fahrzeugs
     - phi_Versatz_Nexo:
     Winkelversatz des Nexonars
     gegenüber der x-Achse
     (Mittelpunkt: Rotationspunkt des Fahrzeugs)
     - psi_Offset_Nexo:
     Winkelversatz des Nexonars
     gegenüber der x-Achse
     (Mittelpunkt: Nexonar-Empfangstelle) */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Konvertierung Nexonar -> Fahrzeug
     Folgende Werte koennen
     für Nexonar eingestellt werden:
     - r_Versatz_Nexo:
     Radialer Versatz des Nexonars
     zur Rotationsachse des Fahrzeugs
     - phi_Versatz_Nexo:
     Winkelversatz des Nexonars
     gegenüber der x-Achse
     (Mittelpunkt: Rotationspunkt des Fahrzeugs)
     - psi_Offset_Nexo:
     Winkelversatz des Nexonars
     gegenüber der x-Achse
     (Mittelpunkt: Nexonar-Empfangstelle) */
  if (Gesamtsystem_DWork.is_active_c4_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Konvertierung Nexonar -> Fahrzeug
       Folgende Werte koennen
       für Nexonar eingestellt werden:
       - r_Versatz_Nexo:
       Radialer Versatz des Nexonars
       zur Rotationsachse des Fahrzeugs
       - phi_Versatz_Nexo:
       Winkelversatz des Nexonars
       gegenüber der x-Achse
       (Mittelpunkt: Rotationspunkt des Fahrzeugs)
       - psi_Offset_Nexo:
       Winkelversatz des Nexonars
       gegenüber der x-Achse
       (Mittelpunkt: Nexonar-Empfangstelle) */
    Gesamtsystem_DWork.is_active_c4_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Konvertierung Nexonar -> Fahrzeug
       Folgende Werte koennen
       für Nexonar eingestellt werden:
       - r_Versatz_Nexo:
       Radialer Versatz des Nexonars
       zur Rotationsachse des Fahrzeugs
       - phi_Versatz_Nexo:
       Winkelversatz des Nexonars
       gegenüber der x-Achse
       (Mittelpunkt: Rotationspunkt des Fahrzeugs)
       - psi_Offset_Nexo:
       Winkelversatz des Nexonars
       gegenüber der x-Achse
       (Mittelpunkt: Nexonar-Empfangstelle) */
    /* Transition: '<S14>:1427' */
    Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsyste_IN_Einstellung_Init;

    /* Entry 'Einstellung_Init': '<S14>:1430' */
    Gesamtsystem_DWork.r_Versatz_Nexo = 2.5;
    Gesamtsystem_DWork.phi_Versatz_Nexo = 30.0;
    Gesamtsystem_DWork.psi_Offset_Nexo = 15.0;
  } else if (Gesamtsystem_DWork.is_c4_Gesamtsystem == 1U) {
    /* During 'Einstellung_Init': '<S14>:1430' */
    /* Transition: '<S14>:1429' */
    Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_Konvertierung;

    /* Entry 'Konvertierung': '<S14>:1428' */
    Gesamtsystem_B.alpha_Wagen = rt_roundd_snf(rtb_DeadZone) -
      Gesamtsystem_DWork.psi_Offset_Nexo;
    Gesamtsystem_B.x_Wagen = rtb_RoundingFunction - rt_roundd_snf(cos
      ((Gesamtsystem_DWork.phi_Versatz_Nexo + Gesamtsystem_B.alpha_Wagen) * 2.0 *
       3.1415926535897931 / 360.0) * Gesamtsystem_DWork.r_Versatz_Nexo);
    Gesamtsystem_B.y_Wagen = rtb_RoundingFunction1 - rt_roundd_snf(sin
      ((Gesamtsystem_DWork.phi_Versatz_Nexo + Gesamtsystem_B.alpha_Wagen) * 2.0 *
       3.1415926535897931 / 360.0) * Gesamtsystem_DWork.r_Versatz_Nexo);
  } else {
    /* During 'Konvertierung': '<S14>:1428' */
    Gesamtsystem_B.alpha_Wagen = rt_roundd_snf(rtb_DeadZone) -
      Gesamtsystem_DWork.psi_Offset_Nexo;
    rtb_Zeitinsec = (Gesamtsystem_DWork.phi_Versatz_Nexo +
                     Gesamtsystem_B.alpha_Wagen) * 2.0 * 3.1415926535897931 /
      360.0;
    Gesamtsystem_B.x_Wagen = rtb_RoundingFunction - rt_roundd_snf(cos
      (rtb_Zeitinsec) * Gesamtsystem_DWork.r_Versatz_Nexo);
    Gesamtsystem_B.y_Wagen = rtb_RoundingFunction1 - rt_roundd_snf(sin
      (rtb_Zeitinsec) * Gesamtsystem_DWork.r_Versatz_Nexo);
  }

  /* End of Chart: '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */

  /* S-Function (c280xgpio_di): '<S12>/Signaleingang fuer Heckschalter' */
  {
    Gesamtsystem_B.SignaleingangfuerHeckschalter =
      GpioDataRegs.GPADAT.bit.GPIO24;
  }

  /* Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  if (Gesamtsystem_DWork.temporalCounter_i1_a < MAX_uint32_T) {
    Gesamtsystem_DWork.temporalCounter_i1_a++;
  }

  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Fahrablaufsteuerung
     [Init: Zielradius = 10mm]
     Gang = 0: vorwaerts
     Gang = 1: rueckwaerts
     Folgende Werte fuer den Ablauf
     sind einstellbar:
     - Zielkoordinatenwerte
     - Gangwert (außer bei "Ende") */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Fahrablaufsteuerung
     [Init: Zielradius = 10mm]
     Gang = 0: vorwaerts
     Gang = 1: rueckwaerts
     Folgende Werte fuer den Ablauf
     sind einstellbar:
     - Zielkoordinatenwerte
     - Gangwert (außer bei "Ende") */
  if (Gesamtsystem_DWork.is_active_c5_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Fahrablaufsteuerung
       [Init: Zielradius = 10mm]
       Gang = 0: vorwaerts
       Gang = 1: rueckwaerts
       Folgende Werte fuer den Ablauf
       sind einstellbar:
       - Zielkoordinatenwerte
       - Gangwert (außer bei "Ende") */
    Gesamtsystem_DWork.is_active_c5_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Fahrablaufsteuerung
       [Init: Zielradius = 10mm]
       Gang = 0: vorwaerts
       Gang = 1: rueckwaerts
       Folgende Werte fuer den Ablauf
       sind einstellbar:
       - Zielkoordinatenwerte
       - Gangwert (außer bei "Ende") */
    /* Transition: '<S13>:1325' */
    Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesam_IN_Start_Einstellung_Init;

    /* Entry 'Start_Einstellung_Init': '<S13>:1324' */
    Gesamtsystem_B.Zielradius = 20.0;
    Gesamtsystem_B.Wartezeit = 10.0;
    Gesamtsystem_DWork.x_Uebergabe = 1350.0;
    Gesamtsystem_DWork.y_Uebergabe = 50.0;
  } else {
    switch (Gesamtsystem_DWork.is_c5_Gesamtsystem) {
     case Gesamtsystem_IN_Ende:
      /* During 'Ende': '<S13>:132' */
      break;

     case Gesamtsystem_IN_Parken:
      /* During 'Parken': '<S13>:1327' */
      if (Gesamtsystem_DWork.Counter == 3.0) {
        /* Transition: '<S13>:795' */
        /* Exit Internal 'Parken': '<S13>:1327' */
        Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_NO_ACTIVE_CHILD;
        Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Ende;

        /* Entry 'Ende': '<S13>:132' */
        Gesamtsystem_B.Gang = 2.0;
      } else {
        switch (Gesamtsystem_DWork.is_Parken) {
         case Gesamtsystem_IN_Parken_1:
          /* During 'Parken_1': '<S13>:1334' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S13>:1329' */
            Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S13>:1335' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Parken_2:
          /* During 'Parken_2': '<S13>:1336' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S13>:1331' */
            Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S13>:1337' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Parken_3:
          /* During 'Parken_3': '<S13>:1338' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S13>:1333' */
            Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Wechsel_3;

            /* Entry 'Wechsel_3': '<S13>:1339' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S13>:1335' */
          /* Transition: '<S13>:1330' */
          Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Parken_2;

          /* Entry 'Parken_2': '<S13>:1336' */
          Gesamtsystem_B.x_soll = 1620.0;
          Gesamtsystem_B.y_soll = -135.0;
          break;

         case Gesamtsystem_IN_Wechsel_2:
          /* During 'Wechsel_2': '<S13>:1337' */
          /* Transition: '<S13>:1332' */
          Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Parken_3;

          /* Entry 'Parken_3': '<S13>:1338' */
          Gesamtsystem_B.x_soll = 1640.0;
          Gesamtsystem_B.y_soll = -131.0;
          break;

         default:
          /* During 'Wechsel_3': '<S13>:1339' */
          break;
        }
      }
      break;

     case Gesamtsystem_IN_Sammeln:
      Gesamtsystem_Sammeln();
      break;

     case Gesam_IN_Start_Einstellung_Init:
      Gesamtsystem_B.Zielradius = 20.0;

      /* During 'Start_Einstellung_Init': '<S13>:1324' */
      /* Transition: '<S13>:244' */
      Gesamtsystem_B.Gang = 0.0;
      Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Sammeln;

      /* Entry Internal 'Sammeln': '<S13>:1258' */
      /* Transition: '<S13>:1259' */
      Gesamtsystem_DWork.Counter = 0.0;
      Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_1;

      /* Entry 'Anfahrpunkt_1': '<S13>:1288' */
      Gesamtsystem_B.x_soll = 1500.0;
      Gesamtsystem_B.y_soll = 0.0;
      break;

     default:
      /* During 'Uebergabe': '<S13>:1340' */
      if (Gesamtsystem_DWork.Counter == 2.0) {
        /* Transition: '<S13>:1326' */
        Gesamtsystem_B.Gang = 0.0;

        /* Exit Internal 'Uebergabe': '<S13>:1340' */
        Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_NO_ACTIVE_CHILD;
        Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Parken;

        /* Entry Internal 'Parken': '<S13>:1327' */
        /* Transition: '<S13>:1328' */
        Gesamtsystem_DWork.Counter = 0.0;
        Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Parken_1;

        /* Entry 'Parken_1': '<S13>:1334' */
        Gesamtsystem_B.x_soll = 1330.0;
        Gesamtsystem_B.y_soll = -50.0;
      } else {
        switch (Gesamtsystem_DWork.is_Uebergabe) {
         case Ge_IN_Uebergabepunkt_x_Richtung:
          /* During 'Uebergabepunkt_x_Richtung': '<S13>:1346' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S13>:1342' */
            Gesamtsystem_DWork.x_least = Gesamtsystem_B.x_soll;
            Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S13>:1347' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Ge_IN_Uebergabepunkt_y_Richtung:
          /* During 'Uebergabepunkt_y_Richtung': '<S13>:1348' */
          if (Gesamtsystem_B.SignaleingangfuerHeckschalter) {
            /* Transition: '<S13>:1344' */
            Gesamtsystem_DWork.is_Uebergabe = Gesamtsyste_IN_Warten_Uebergabe;
            Gesamtsystem_DWork.temporalCounter_i1_a = 0UL;

            /* Entry 'Warten_Uebergabe': '<S13>:1349' */
            Gesamtsystem_B.x_soll = Gesamtsystem_DWork.x_Uebergabe;
            Gesamtsystem_B.y_soll = Gesamtsystem_DWork.y_Uebergabe;
          }
          break;

         case Gesamtsyste_IN_Warten_Uebergabe:
          /* During 'Warten_Uebergabe': '<S13>:1349' */
          if (Gesamtsystem_DWork.temporalCounter_i1_a >= (uint32_T)ceil
              (Gesamtsystem_B.Wartezeit * 100.0)) {
            /* Transition: '<S13>:1345' */
            Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S13>:1350' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S13>:1347' */
          /* Transition: '<S13>:1343' */
          Gesamtsystem_DWork.is_Uebergabe = Ge_IN_Uebergabepunkt_y_Richtung;

          /* Entry 'Uebergabepunkt_y_Richtung': '<S13>:1348' */
          Gesamtsystem_B.x_soll = Gesamtsystem_DWork.x_least;
          Gesamtsystem_B.y_soll = 1000.0;
          break;

         default:
          /* During 'Wechsel_2': '<S13>:1350' */
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */

  /* Chart: '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  if (Gesamtsystem_DWork.temporalCounter_i1_p < 15U) {
    Gesamtsystem_DWork.temporalCounter_i1_p = ((int16_T)
      Gesamtsystem_DWork.temporalCounter_i1_p + 1) & 255U;
  }

  /* Gateway: Add-Ons-Ansteuerung
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Zylindermotor-System
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Zylindermotor-Ansteuerung
     Folgende Werte sind einstellbar:
     - Drehstaerke (in %)
     (-> ZM_pwm_out in "Ausfuerung")
     - Drehrichtung (rechts = 0, links = 1)
     (-> ZM_r_l_out in "Init_und_Warten")
     - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet")
     - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position]
     (-> zwischen "Init_und_Start" und "Ausfuehrung)
     Wichtig!
     Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten
     aus der Fahrablaufsteuerung im Nexonar-System ab. */
  /* During: Add-Ons-Ansteuerung
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Zylindermotor-System
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Zylindermotor-Ansteuerung
     Folgende Werte sind einstellbar:
     - Drehstaerke (in %)
     (-> ZM_pwm_out in "Ausfuerung")
     - Drehrichtung (rechts = 0, links = 1)
     (-> ZM_r_l_out in "Init_und_Warten")
     - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet")
     - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position]
     (-> zwischen "Init_und_Start" und "Ausfuehrung)
     Wichtig!
     Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten
     aus der Fahrablaufsteuerung im Nexonar-System ab. */
  if (Gesamtsystem_DWork.is_active_c6_Gesamtsystem == 0U) {
    /* Entry: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Zylindermotor-System
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Zylindermotor-Ansteuerung
       Folgende Werte sind einstellbar:
       - Drehstaerke (in %)
       (-> ZM_pwm_out in "Ausfuerung")
       - Drehrichtung (rechts = 0, links = 1)
       (-> ZM_r_l_out in "Init_und_Warten")
       - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet")
       - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position]
       (-> zwischen "Init_und_Start" und "Ausfuehrung)
       Wichtig!
       Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten
       aus der Fahrablaufsteuerung im Nexonar-System ab. */
    Gesamtsystem_DWork.is_active_c6_Gesamtsystem = 1U;

    /* Entry Internal: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Zylindermotor-System
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Zylindermotor-Ansteuerung
       Folgende Werte sind einstellbar:
       - Drehstaerke (in %)
       (-> ZM_pwm_out in "Ausfuerung")
       - Drehrichtung (rechts = 0, links = 1)
       (-> ZM_r_l_out in "Init_und_Warten")
       - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet")
       - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position]
       (-> zwischen "Init_und_Start" und "Ausfuehrung)
       Wichtig!
       Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten
       aus der Fahrablaufsteuerung im Nexonar-System ab. */
    /* Transition: '<S11>:1008' */
    Gesamtsystem_DWork.is_c6_Gesamtsystem = Gesamtsystem_IN_Init_und_Warten;

    /* Entry 'Init_und_Warten': '<S11>:1009' */
    rtb_ZM_pwm_out = 0.0;
    Gesamtsystem_B.ZM_r_l_out = 1.0;
  } else {
    switch (Gesamtsystem_DWork.is_c6_Gesamtsystem) {
     case Gesamtsystem_IN_Ausfuehrung:
      rtb_ZM_pwm_out = 75.0;

      /* During 'Ausfuehrung': '<S11>:1011' */
      if (Gesamtsystem_DWork.temporalCounter_i1_p >= 10U) {
        /* Transition: '<S11>:1013' */
        Gesamtsystem_DWork.is_c6_Gesamtsystem = Gesamtsystem_IN_Beendet;

        /* Entry 'Beendet': '<S11>:1014' */
        rtb_ZM_pwm_out = 0.0;
      }
      break;

     case Gesamtsystem_IN_Beendet:
      rtb_ZM_pwm_out = 0.0;

      /* During 'Beendet': '<S11>:1014' */
      break;

     default:
      rtb_ZM_pwm_out = 0.0;
      Gesamtsystem_B.ZM_r_l_out = 1.0;

      /* During 'Init_und_Warten': '<S11>:1009' */
      if ((Gesamtsystem_B.x_soll == 1200.0) && (Gesamtsystem_B.y_soll == 0.0)) {
        /* Transition: '<S11>:1012' */
        Gesamtsystem_DWork.is_c6_Gesamtsystem = Gesamtsystem_IN_Ausfuehrung;
        Gesamtsystem_DWork.temporalCounter_i1_p = 0U;

        /* Entry 'Ausfuehrung': '<S11>:1011' */
        rtb_ZM_pwm_out = 75.0;
      }
      break;
    }
  }

  /* End of Chart: '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */

  /* S-Function (c280xgpio_do): '<S6>/Drehrichtungsvorgabe für Zylindermotor' */
  {
    if (Gesamtsystem_B.ZM_r_l_out)
      GpioDataRegs.GPASET.bit.GPIO17 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO17 = 1;
  }

  /* S-Function (c280xpwm): '<S6>/PWM Vorgabe für Zylindermotor' */

  /*-- Update CMPB value for ePWM3 --*/
  {
    EPwm3Regs.CMPB = (uint16_T)((uint32_T)EPwm3Regs.TBPRD * rtb_ZM_pwm_out *
      0.01);
  }

  /* Chart: '<S3>/Steuersystem fuer Heckschalter' */
  if (Gesamtsystem_DWork.temporalCounter_i1 < MAX_uint32_T) {
    Gesamtsystem_DWork.temporalCounter_i1++;
  }

  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Steuersystem fuer Heckschalter */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Steuersystem fuer Heckschalter */
  if (Gesamtsystem_DWork.is_active_c9_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Steuersystem fuer Heckschalter */
    Gesamtsystem_DWork.is_active_c9_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Steuersystem fuer Heckschalter */
    /* Transition: '<S18>:1410' */
    Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_Start;

    /* Entry 'Start': '<S18>:1411' */
    rtb_RoundingFunction1 = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c9_Gesamtsystem) {
     case Gesamtsystem_IN_Start:
      rtb_RoundingFunction1 = 0.0;

      /* During 'Start': '<S18>:1411' */
      if (Gesamtsystem_B.SignaleingangfuerHeckschalter) {
        /* Transition: '<S18>:1415' */
        Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_Weiter1;
        Gesamtsystem_DWork.temporalCounter_i1 = 0UL;

        /* Entry 'Weiter1': '<S18>:1413' */
        rtb_RoundingFunction1 = 1.0;
      }
      break;

     case Gesamtsystem_IN_Warten:
      rtb_RoundingFunction1 = 0.0;

      /* During 'Warten': '<S18>:1412' */
      if (Gesamtsystem_DWork.temporalCounter_i1 >= (uint32_T)ceil
          (Gesamtsystem_B.Wartezeit * 100.0)) {
        /* Transition: '<S18>:1417' */
        Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_Weiter2;

        /* Entry 'Weiter2': '<S18>:1414' */
        rtb_RoundingFunction1 = 1.0;
      }
      break;

     case Gesamtsystem_IN_Weiter1:
      rtb_RoundingFunction1 = 1.0;

      /* During 'Weiter1': '<S18>:1413' */
      if (Gesamtsystem_B.SignaleingangfuerHeckschalter &&
          (Gesamtsystem_DWork.temporalCounter_i1 >= 200UL)) {
        /* Transition: '<S18>:1416' */
        Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_Warten;
        Gesamtsystem_DWork.temporalCounter_i1 = 0UL;

        /* Entry 'Warten': '<S18>:1412' */
        rtb_RoundingFunction1 = 0.0;
      }
      break;

     default:
      rtb_RoundingFunction1 = 1.0;

      /* During 'Weiter2': '<S18>:1414' */
      break;
    }
  }

  /* End of Chart: '<S3>/Steuersystem fuer Heckschalter' */

  /* Sum: '<S9>/Zaehladdition' incorporates:
   *  Delay: '<S9>/Delay'
   */
  rtb_RoundingFunction = Gesamtsystem_B.Takter001s +
    Gesamtsystem_DWork.Delay_DSTATE;

  /* Gain: '<S9>/Zeit in sec' */
  rtb_Zeitinsec = Gesamtsystem_P.Zeitinsec_Gain * rtb_RoundingFunction;

  /* Chart: '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Notschalter zum ersten Mal gedrückt wird' */
  /* Gateway: Add-Ons-Ansteuerung
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Endsignal-System
     [Einstellungen moeglich]/Zeitverzoegerungsblock
     Die eigentliche Zeitmessung startet,
     wenn der Notschalter zum ersten Mal
     gedrückt wird */
  /* During: Add-Ons-Ansteuerung
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Endsignal-System
     [Einstellungen moeglich]/Zeitverzoegerungsblock
     Die eigentliche Zeitmessung startet,
     wenn der Notschalter zum ersten Mal
     gedrückt wird */
  if (Gesamtsystem_DWork.is_active_c15_Gesamtsystem == 0U) {
    /* Entry: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Zeitverzoegerungsblock
       Die eigentliche Zeitmessung startet,
       wenn der Notschalter zum ersten Mal
       gedrückt wird */
    Gesamtsystem_DWork.is_active_c15_Gesamtsystem = 1U;

    /* Entry Internal: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Zeitverzoegerungsblock
       Die eigentliche Zeitmessung startet,
       wenn der Notschalter zum ersten Mal
       gedrückt wird */
    /* Transition: '<S10>:1016' */
    Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesamtsystem_IN_Init_Warten;

    /* Entry 'Init_Warten': '<S10>:1034' */
    Gesamtsystem_B.Timer = 0.0;
  } else if ((Gesamtsystem_DWork.is_c15_Gesamtsystem == 1U) &&
             (rtb_RoundingFunction1 == 1.0)) {
    /* During 'Init_Warten': '<S10>:1034' */
    /* Transition: '<S10>:1038' */
    Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesam_IN_Zeitausgabe_mit_Offset;

    /* Entry 'Zeitausgabe_mit_Offset': '<S10>:1039' */
    Gesamtsystem_B.Timer = rtb_Zeitinsec - rtb_Zeitinsec;
    Gesamtsystem_B.Timer = ceil(Gesamtsystem_B.Timer);
  } else {
    /* During 'Zeitausgabe_mit_Offset': '<S10>:1039' */
  }

  /* End of Chart: '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Notschalter zum ersten Mal gedrückt wird' */

  /* Chart: '<S5>/Beendigung-Ansteuerung' incorporates:
   *  Constant: '<S8>/Constant'
   *  RelationalOperator: '<S8>/Compare'
   */
  /* Gateway: Add-Ons-Ansteuerung
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Endsignal-System
     [Einstellungen moeglich]/Beendigung-Ansteuerung */
  /* During: Add-Ons-Ansteuerung
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Endsignal-System
     [Einstellungen moeglich]/Beendigung-Ansteuerung */
  if (Gesamtsystem_DWork.is_active_c3_Gesamtsystem == 0U) {
    /* Entry: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Beendigung-Ansteuerung */
    Gesamtsystem_DWork.is_active_c3_Gesamtsystem = 1U;

    /* Entry Internal: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Beendigung-Ansteuerung */
    /* Transition: '<S7>:1016' */
    Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_Start_Warten;
  } else {
    switch (Gesamtsystem_DWork.is_c3_Gesamtsystem) {
     case Gesamtsystem_IN_Anschalten:
      Gesamtsystem_B.aus_an = 1.0;

      /* During 'Anschalten': '<S7>:1017' */
      break;

     case Gesamtsystem_IN_Aus_Zustand:
      Gesamtsystem_B.aus_an = 0.0;

      /* During 'Aus_Zustand': '<S7>:1019' */
      if ((Gesamtsystem_B.Timer >= Gesamtsystem_P.DauerbiszumShutdowninsec_const)
          || (Gesamtsystem_B.Gang == 2.0)) {
        /* Transition: '<S7>:1022' */
        /* Transition: '<S7>:1020' */
        Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_Anschalten;

        /* Entry 'Anschalten': '<S7>:1017' */
        Gesamtsystem_B.aus_an = 1.0;
      }
      break;

     default:
      /* During 'Start_Warten': '<S7>:1015' */
      /* Transition: '<S7>:1033' */
      Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_Aus_Zustand;

      /* Entry 'Aus_Zustand': '<S7>:1019' */
      Gesamtsystem_B.aus_an = 0.0;
      break;
    }
  }

  /* End of Chart: '<S5>/Beendigung-Ansteuerung' */

  /* S-Function (c280xgpio_do): '<S5>/Signalaussgang fuer Endsignallampe' */
  {
    if (Gesamtsystem_B.aus_an)
      GpioDataRegs.GPBSET.bit.GPIO58 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO58 = 1;
  }

  /* Outputs for Atomic SubSystem: '<S3>/Navigationssystem [Einstellungen moeglich]' */
  /* Sum: '<S21>/Soll-Ist-Abgleich_x' */
  rtb_SollIstAbgleich_x = Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen;

  /* Sum: '<S21>/Soll-Ist-Abgleich_y' */
  rtb_Zeitinsec = Gesamtsystem_B.y_soll - Gesamtsystem_B.y_Wagen;

  /* Chart: '<S22>/Quadrantenteiler' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
  if (Gesamtsystem_DWork.is_active_c11_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
    Gesamtsystem_DWork.is_active_c11_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
    /* Transition: '<S26>:28' */
    Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Start_Warten_ba;
  } else {
    switch (Gesamtsystem_DWork.is_c11_Gesamtsystem) {
     case Gesamtsystem_IN_Quadrant_a:
      Gesamtsystem_B.Quadrant = 0.0;

      /* During 'Quadrant_a': '<S26>:8' */
      /* Transition: '<S26>:36' */
      /* Transition: '<S26>:40' */
      if ((rtb_SollIstAbgleich_x >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S26>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S26>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_SollIstAbgleich_x <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S26>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S26>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S26>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S26>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S26>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S26>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     case Gesamtsystem_IN_Quadrant_b:
      Gesamtsystem_B.Quadrant = 1.0;

      /* During 'Quadrant_b': '<S26>:9' */
      /* Transition: '<S26>:37' */
      /* Transition: '<S26>:40' */
      if ((rtb_SollIstAbgleich_x >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S26>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S26>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_SollIstAbgleich_x <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S26>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S26>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S26>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S26>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S26>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S26>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     case Gesamtsystem_IN_Quadrant_c:
      Gesamtsystem_B.Quadrant = 2.0;

      /* During 'Quadrant_c': '<S26>:11' */
      /* Transition: '<S26>:38' */
      /* Transition: '<S26>:40' */
      if ((rtb_SollIstAbgleich_x >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S26>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S26>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_SollIstAbgleich_x <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S26>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S26>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S26>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S26>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S26>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S26>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     case Gesamtsystem_IN_Quadrant_d:
      Gesamtsystem_B.Quadrant = 3.0;

      /* During 'Quadrant_d': '<S26>:12' */
      /* Transition: '<S26>:39' */
      /* Transition: '<S26>:40' */
      if ((rtb_SollIstAbgleich_x >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S26>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S26>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_SollIstAbgleich_x <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S26>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S26>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S26>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S26>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S26>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S26>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     default:
      /* During 'Start_Warten': '<S26>:41' */
      /* Transition: '<S26>:42' */
      if ((rtb_SollIstAbgleich_x >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S26>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S26>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_SollIstAbgleich_x <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S26>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S26>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S26>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S26>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S26>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S26>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;
    }
  }

  /* End of Chart: '<S22>/Quadrantenteiler' */

  /* Chart: '<S22>/Winkelausgabe fuer Ausrichtung' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
  if (Gesamtsystem_DWork.is_active_c12_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
    Gesamtsystem_DWork.is_active_c12_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
    /* Transition: '<S27>:81' */
    Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsyste_IN_Start_Warten_bax;
  } else {
    switch (Gesamtsystem_DWork.is_c12_Gesamtsystem) {
     case G_IN_Ausrichtung_ohne_Aenderung:
      /* During 'Ausrichtung_ohne_Aenderung': '<S27>:52' */
      /* Transition: '<S27>:66' */
      /* Transition: '<S27>:70' */
      if ((rtb_SollIstAbgleich_x == 0.0) && (rtb_Zeitinsec == 0.0)) {
        /* Transition: '<S27>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S27>:52' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_Wagen;
      } else if (((rtb_SollIstAbgleich_x > 0.0) && (rtb_Zeitinsec >= 0.0)) ||
                 ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0))) {
        /* Transition: '<S27>:76' */
        /* Transition: '<S27>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S27>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_Zeitinsec) / fabs
          (rtb_SollIstAbgleich_x)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S27>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S27>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_SollIstAbgleich_x) / fabs
          (rtb_Zeitinsec)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     case Gesamtsyste_IN_Start_Warten_bax:
      /* During 'Start_Warten': '<S27>:82' */
      /* Transition: '<S27>:83' */
      if ((rtb_SollIstAbgleich_x == 0.0) && (rtb_Zeitinsec == 0.0)) {
        /* Transition: '<S27>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S27>:52' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_Wagen;
      } else if (((rtb_SollIstAbgleich_x > 0.0) && (rtb_Zeitinsec >= 0.0)) ||
                 ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0))) {
        /* Transition: '<S27>:76' */
        /* Transition: '<S27>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S27>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_Zeitinsec) / fabs
          (rtb_SollIstAbgleich_x)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S27>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S27>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_SollIstAbgleich_x) / fabs
          (rtb_Zeitinsec)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     case IN_Trigonometrische_Auswertung_:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S27>:24' */
      /* Transition: '<S27>:68' */
      /* Transition: '<S27>:70' */
      if ((rtb_SollIstAbgleich_x == 0.0) && (rtb_Zeitinsec == 0.0)) {
        /* Transition: '<S27>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S27>:52' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_Wagen;
      } else if (((rtb_SollIstAbgleich_x > 0.0) && (rtb_Zeitinsec >= 0.0)) ||
                 ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0))) {
        /* Transition: '<S27>:76' */
        /* Transition: '<S27>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S27>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_Zeitinsec) / fabs
          (rtb_SollIstAbgleich_x)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S27>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S27>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_SollIstAbgleich_x) / fabs
          (rtb_Zeitinsec)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     default:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S27>:71' */
      /* Transition: '<S27>:73' */
      /* Transition: '<S27>:70' */
      if ((rtb_SollIstAbgleich_x == 0.0) && (rtb_Zeitinsec == 0.0)) {
        /* Transition: '<S27>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S27>:52' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_Wagen;
      } else if (((rtb_SollIstAbgleich_x > 0.0) && (rtb_Zeitinsec >= 0.0)) ||
                 ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0))) {
        /* Transition: '<S27>:76' */
        /* Transition: '<S27>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S27>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_Zeitinsec) / fabs
          (rtb_SollIstAbgleich_x)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S27>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S27>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_SollIstAbgleich_x) / fabs
          (rtb_Zeitinsec)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;
    }
  }

  /* End of Chart: '<S22>/Winkelausgabe fuer Ausrichtung' */

  /* Sum: '<S22>/Winkeldifferenz' incorporates:
   *  Gain: '<S22>/Quadranten- verschiebung'
   *  Sum: '<S22>/Winkelverschiebung'
   */
  Gesamtsystem_B.Winkeldifferenz = (Gesamtsystem_P.Quadrantenverschiebung_Gain *
    Gesamtsystem_B.Quadrant + Gesamtsystem_B.alpha_neu) -
    Gesamtsystem_B.alpha_Wagen;

  /* Chart: '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Drehweg-Optimierung
     mit Gang-Ausrichtung
     [Init: Stillstandintervall = ±15°] */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Drehweg-Optimierung
     mit Gang-Ausrichtung
     [Init: Stillstandintervall = ±15°] */
  if (Gesamtsystem_DWork.is_active_c8_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Drehweg-Optimierung
       mit Gang-Ausrichtung
       [Init: Stillstandintervall = ±15°] */
    Gesamtsystem_DWork.is_active_c8_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Drehweg-Optimierung
       mit Gang-Ausrichtung
       [Init: Stillstandintervall = ±15°] */
    /* Transition: '<S19>:38' */
    Gesamtsystem_DWork.is_c8_Gesamtsystem = Gesamtsys_IN_Einstellung_Init_b;

    /* Entry 'Einstellung_Init': '<S19>:44' */
    Gesamtsystem_DWork.Stillstandintervall = 15.0;
    Gesamtsystem_B.pwm_mindern[0] = 0.0;
    Gesamtsystem_B.pwm_mindern[1] = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c8_Gesamtsystem) {
     case IN_Drehstillstand_mit_Ausrichtu:
      /* During 'Drehstillstand_mit_Ausrichtungsregelung': '<S19>:26' */
      /* Transition: '<S19>:96' */
      /* Transition: '<S19>:98' */
      /* Transition: '<S19>:65' */
      Gesamtsystem_DWork.alpha_diff_intern = 180.0 * Gesamtsystem_B.Gang +
        Gesamtsystem_B.Winkeldifferenz;
      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S19>:9' */
        if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S19>:15' */
          Gesamtsystem_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S19>:18' */
          Gesamtsystem_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S19>:69' */
      }

      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) <=
          Gesamtsystem_DWork.Stillstandintervall) {
        /* Transition: '<S19>:27' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S19>:94' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S19>:11' */
        Gesamtsystem_B.alpha_diff_opt = Gesamtsystem_DWork.alpha_diff_intern;
      }
      break;

     case Gesamtsys_IN_Einstellung_Init_b:
      /* During 'Einstellung_Init': '<S19>:44' */
      /* Transition: '<S19>:46' */
      /* Transition: '<S19>:65' */
      Gesamtsystem_DWork.alpha_diff_intern = 180.0 * Gesamtsystem_B.Gang +
        Gesamtsystem_B.Winkeldifferenz;
      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S19>:9' */
        if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S19>:15' */
          Gesamtsystem_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S19>:18' */
          Gesamtsystem_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S19>:69' */
      }

      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) <=
          Gesamtsystem_DWork.Stillstandintervall) {
        /* Transition: '<S19>:27' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S19>:94' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S19>:11' */
        Gesamtsystem_B.alpha_diff_opt = Gesamtsystem_DWork.alpha_diff_intern;
      }
      break;

     default:
      /* During 'Weiterleitung_bei_Drehzustand': '<S19>:11' */
      /* Transition: '<S19>:97' */
      /* Transition: '<S19>:98' */
      /* Transition: '<S19>:65' */
      Gesamtsystem_DWork.alpha_diff_intern = 180.0 * Gesamtsystem_B.Gang +
        Gesamtsystem_B.Winkeldifferenz;
      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S19>:9' */
        if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S19>:15' */
          Gesamtsystem_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S19>:18' */
          Gesamtsystem_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S19>:69' */
      }

      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) <=
          Gesamtsystem_DWork.Stillstandintervall) {
        /* Transition: '<S19>:27' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S19>:94' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S19>:11' */
        Gesamtsystem_B.alpha_diff_opt = Gesamtsystem_DWork.alpha_diff_intern;
      }
      break;
    }
  }

  /* End of Chart: '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */

  /* Abs: '<S21>/Abs x_diff' */
  rtb_SollIstAbgleich_x = fabs(rtb_SollIstAbgleich_x);

  /* MATLAB Function: '<S21>/Betrag pwm_x' incorporates:
   *  Abs: '<S21>/Abs x_diff'
   */
  /* MATLAB Function 'Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x': '<S23>:1' */
  if ((Gesamtsystem_B.Zielradius < rtb_SollIstAbgleich_x) &&
      (rtb_SollIstAbgleich_x < 60.0 + Gesamtsystem_B.Zielradius)) {
    /* '<S23>:1:3' */
    /* '<S23>:1:4' */
    rtb_SollIstAbgleich_x = 60.0;
  } else if (rtb_SollIstAbgleich_x <= Gesamtsystem_B.Zielradius) {
    /* '<S23>:1:5' */
    /* '<S23>:1:6' */
    rtb_SollIstAbgleich_x = 0.0;
  } else if (rtb_SollIstAbgleich_x >= 100.0 + Gesamtsystem_B.Zielradius) {
    /* '<S23>:1:7' */
    /* '<S23>:1:8' */
    rtb_SollIstAbgleich_x = 100.0;
  } else {
    /* '<S23>:1:10' */
  }

  /* End of MATLAB Function: '<S21>/Betrag pwm_x' */

  /* Abs: '<S21>/Abs y_diff' */
  rtb_Zeitinsec = fabs(rtb_Zeitinsec);

  /* MATLAB Function: '<S21>/Betrag pwm_y' incorporates:
   *  Abs: '<S21>/Abs y_diff'
   */
  /* MATLAB Function 'Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_y': '<S24>:1' */
  if ((Gesamtsystem_B.Zielradius < rtb_Zeitinsec) && (rtb_Zeitinsec < 60.0 +
       Gesamtsystem_B.Zielradius)) {
    /* '<S24>:1:3' */
    /* '<S24>:1:4' */
    rtb_Zeitinsec = 60.0;
  } else if (rtb_Zeitinsec <= Gesamtsystem_B.Zielradius) {
    /* '<S24>:1:5' */
    /* '<S24>:1:6' */
    rtb_Zeitinsec = 0.0;
  } else if (rtb_Zeitinsec >= 100.0 + Gesamtsystem_B.Zielradius) {
    /* '<S24>:1:7' */
    /* '<S24>:1:8' */
    rtb_Zeitinsec = 100.0;
  } else {
    /* '<S24>:1:10' */
  }

  /* End of MATLAB Function: '<S21>/Betrag pwm_y' */

  /* MATLAB Function: '<S21>/PWM-Vektorbetrag' */
  /* MATLAB Function 'Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/PWM-Vektorbetrag': '<S25>:1' */
  /* '<S25>:1:3' */
  rtb_Zeitinsec = rt_roundd_snf(sqrt(rtb_SollIstAbgleich_x *
    rtb_SollIstAbgleich_x + rtb_Zeitinsec * rtb_Zeitinsec));

  /* Saturate: '<S21>/PWM-Wertebereich' */
  if (rtb_Zeitinsec > Gesamtsystem_P.PWMWertebereich_UpperSat) {
    Gesamtsystem_B.PWMWertebereich = Gesamtsystem_P.PWMWertebereich_UpperSat;
  } else if (rtb_Zeitinsec < Gesamtsystem_P.PWMWertebereich_LowerSat) {
    Gesamtsystem_B.PWMWertebereich = Gesamtsystem_P.PWMWertebereich_LowerSat;
  } else {
    Gesamtsystem_B.PWMWertebereich = rtb_Zeitinsec;
  }

  /* End of Saturate: '<S21>/PWM-Wertebereich' */

  /* Chart: '<S16>/Fahrsystem' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Fahrsystem */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Fahrsystem */
  if (Gesamtsystem_DWork.is_active_c7_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Fahrsystem */
    Gesamtsystem_DWork.is_active_c7_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Fahrsystem */
    /* Transition: '<S20>:91' */
    Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsystem_IN_Start_Warten_b;
  } else {
    switch (Gesamtsystem_DWork.is_c7_Gesamtsystem) {
     case Gesam_IN_Drehen_links_gesteuert:
      Gesamtsystem_Drehen_links_max();
      break;

     case Gesamtsyste_IN_Drehen_links_max:
      Gesamtsystem_Drehen_links_max();
      break;

     case Gesa_IN_Drehen_rechts_gesteuert:
      /* During 'Drehen_rechts_gesteuert': '<S20>:51' */
      /* Transition: '<S20>:63' */
      /* Transition: '<S20>:75' */
      if ((fabs(Gesamtsystem_B.alpha_diff_opt) > 0.0) &&
          (Gesamtsystem_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S20>:58' */
        if (fabs(Gesamtsystem_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S20>:21' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S20>:45' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S20>:8' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S20>:57' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S20>:9' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S20>:53' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S20>:54' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S20>:43' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S20>:55' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S20>:51' */
            rtb_Zeitinsec = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_l = rtb_Zeitinsec;
            Gesamtsystem_B.pwm_out_r = rtb_Zeitinsec;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S20>:82' */
        if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S20>:85' */
          rtb_SollIstAbgleich_x = 1.0 - Gesamtsystem_B.Gang;
          rtb_Zeitinsec = Gesamtsystem_B.Gang;
        } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S20>:86' */
          rtb_SollIstAbgleich_x = Gesamtsystem_B.Gang;
          rtb_Zeitinsec = 1.0 - Gesamtsystem_B.Gang;
        } else {
          /* Transition: '<S20>:87' */
          rtb_SollIstAbgleich_x = 0.0;
          rtb_Zeitinsec = 0.0;
        }

        Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S20>:94' */
        a = Gesamtsystem_B.PWMWertebereich / 100.0;
        Gesamtsystem_B.pwm_out_l = Gesamtsystem_B.PWMWertebereich -
          rt_roundd_snf(a * a * Gesamtsystem_B.pwm_mindern[0]) *
          rtb_SollIstAbgleich_x;
        rtb_SollIstAbgleich_x = Gesamtsystem_B.PWMWertebereich / 100.0;
        Gesamtsystem_B.pwm_out_r = Gesamtsystem_B.PWMWertebereich -
          rt_roundd_snf(rtb_SollIstAbgleich_x * rtb_SollIstAbgleich_x *
                        Gesamtsystem_B.pwm_mindern[0]) * rtb_Zeitinsec;
        Gesamtsystem_B.r_l_out_l = 1.0 - Gesamtsystem_B.Gang;
        Gesamtsystem_B.r_l_out_r = 1.0 - Gesamtsystem_B.Gang;
      }
      break;

     case Gesamtsyst_IN_Drehen_rechts_max:
      /* During 'Drehen_rechts_max': '<S20>:9' */
      /* Transition: '<S20>:61' */
      /* Transition: '<S20>:75' */
      if ((fabs(Gesamtsystem_B.alpha_diff_opt) > 0.0) &&
          (Gesamtsystem_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S20>:58' */
        if (fabs(Gesamtsystem_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S20>:21' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S20>:45' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S20>:8' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S20>:57' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S20>:9' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S20>:53' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S20>:54' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S20>:43' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S20>:55' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S20>:51' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S20>:82' */
        if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S20>:85' */
          rtb_SollIstAbgleich_x = 1.0 - Gesamtsystem_B.Gang;
          rtb_Zeitinsec = Gesamtsystem_B.Gang;
        } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S20>:86' */
          rtb_SollIstAbgleich_x = Gesamtsystem_B.Gang;
          rtb_Zeitinsec = 1.0 - Gesamtsystem_B.Gang;
        } else {
          /* Transition: '<S20>:87' */
          rtb_SollIstAbgleich_x = 0.0;
          rtb_Zeitinsec = 0.0;
        }

        Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S20>:94' */
        a = Gesamtsystem_B.PWMWertebereich / 100.0;
        Gesamtsystem_B.pwm_out_l = Gesamtsystem_B.PWMWertebereich -
          rt_roundd_snf(a * a * Gesamtsystem_B.pwm_mindern[0]) *
          rtb_SollIstAbgleich_x;
        rtb_SollIstAbgleich_x = Gesamtsystem_B.PWMWertebereich / 100.0;
        Gesamtsystem_B.pwm_out_r = Gesamtsystem_B.PWMWertebereich -
          rt_roundd_snf(rtb_SollIstAbgleich_x * rtb_SollIstAbgleich_x *
                        Gesamtsystem_B.pwm_mindern[0]) * rtb_Zeitinsec;
        Gesamtsystem_B.r_l_out_l = 1.0 - Gesamtsystem_B.Gang;
        Gesamtsystem_B.r_l_out_r = 1.0 - Gesamtsystem_B.Gang;
      }
      break;

     case IN_Fahren_mit_Ausrichtungsregel:
      /* During 'Fahren_mit_Ausrichtungsregelung': '<S20>:94' */
      /* Transition: '<S20>:74' */
      /* Transition: '<S20>:75' */
      if ((fabs(Gesamtsystem_B.alpha_diff_opt) > 0.0) &&
          (Gesamtsystem_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S20>:58' */
        if (fabs(Gesamtsystem_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S20>:21' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S20>:45' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S20>:8' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S20>:57' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S20>:9' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S20>:53' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S20>:54' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S20>:43' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S20>:55' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S20>:51' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S20>:82' */
        if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S20>:85' */
          rtb_SollIstAbgleich_x = 1.0 - Gesamtsystem_B.Gang;
          rtb_Zeitinsec = Gesamtsystem_B.Gang;
        } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S20>:86' */
          rtb_SollIstAbgleich_x = Gesamtsystem_B.Gang;
          rtb_Zeitinsec = 1.0 - Gesamtsystem_B.Gang;
        } else {
          /* Transition: '<S20>:87' */
          rtb_SollIstAbgleich_x = 0.0;
          rtb_Zeitinsec = 0.0;
        }

        Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S20>:94' */
        a = Gesamtsystem_B.PWMWertebereich / 100.0;
        Gesamtsystem_B.pwm_out_l = Gesamtsystem_B.PWMWertebereich -
          rt_roundd_snf(a * a * Gesamtsystem_B.pwm_mindern[0]) *
          rtb_SollIstAbgleich_x;
        rtb_SollIstAbgleich_x = Gesamtsystem_B.PWMWertebereich / 100.0;
        Gesamtsystem_B.pwm_out_r = Gesamtsystem_B.PWMWertebereich -
          rt_roundd_snf(rtb_SollIstAbgleich_x * rtb_SollIstAbgleich_x *
                        Gesamtsystem_B.pwm_mindern[0]) * rtb_Zeitinsec;
        Gesamtsystem_B.r_l_out_l = 1.0 - Gesamtsystem_B.Gang;
        Gesamtsystem_B.r_l_out_r = 1.0 - Gesamtsystem_B.Gang;
      }
      break;

     default:
      Gesamtsystem_Start_Warten();
      break;
    }
  }

  /* End of Chart: '<S16>/Fahrsystem' */
  /* End of Outputs for SubSystem: '<S3>/Navigationssystem [Einstellungen moeglich]' */

  /* Product: '<S15>/Ansteuerung Motor_links' */
  rtb_DeadZone = Gesamtsystem_B.pwm_out_l * rtb_RoundingFunction1;

  /* DeadZone: '<S15>/Leistungsoffset Motor_links' */
  if (rtb_DeadZone > Gesamtsystem_P.LeistungsoffsetMotor_links_End) {
    rtb_DeadZone -= Gesamtsystem_P.LeistungsoffsetMotor_links_End;
  } else if (rtb_DeadZone >= Gesamtsystem_P.LeistungsoffsetMotor_links_Star) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= Gesamtsystem_P.LeistungsoffsetMotor_links_Star;
  }

  /* End of DeadZone: '<S15>/Leistungsoffset Motor_links' */

  /* S-Function (c280xpwm): '<S15>/PWM Vorgabe fuer Motor_links ' */

  /*-- Update CMPB value for ePWM1 --*/
  {
    EPwm1Regs.CMPB = (uint16_T)((uint32_T)EPwm1Regs.TBPRD * rtb_DeadZone * 0.01);
  }

  /* Product: '<S15>/Ansteuerung Motor_rechts' */
  rtb_DeadZone = rtb_RoundingFunction1 * Gesamtsystem_B.pwm_out_r;

  /* DeadZone: '<S15>/Leistungsoffset Motor_rechts' */
  if (rtb_DeadZone > Gesamtsystem_P.LeistungsoffsetMotor_rechts_End) {
    rtb_DeadZone -= Gesamtsystem_P.LeistungsoffsetMotor_rechts_End;
  } else if (rtb_DeadZone >= Gesamtsystem_P.LeistungsoffsetMotor_rechts_Sta) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= Gesamtsystem_P.LeistungsoffsetMotor_rechts_Sta;
  }

  /* End of DeadZone: '<S15>/Leistungsoffset Motor_rechts' */

  /* S-Function (c280xpwm): '<S15>/PWM Vorgabe fuer Motor_rechts' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD * rtb_DeadZone * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S15>/Drehrichtungsvorgabe fuer Motor_links' */
  {
    if (Gesamtsystem_B.r_l_out_l)
      GpioDataRegs.GPASET.bit.GPIO20 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO20 = 1;
  }

  /* S-Function (c280xgpio_do): '<S15>/Drehrichtungsvorgabe fuer Motor_rechts' */
  {
    if (Gesamtsystem_B.r_l_out_r)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter7' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values7;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter7[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S17>/Integer to Bit Converter7' */

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter8' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values8;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter8[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S17>/Integer to Bit Converter8' */

  /* Chart: '<S17>/Chart1' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart1 */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart1 */
  if (Gesamtsystem_DWork.is_active_c1_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart1 */
    Gesamtsystem_DWork.is_active_c1_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart1 */
    /* Transition: '<S28>:3' */
    Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c1_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S28>:17' */
      /* Transition: '<S28>:24' */
      Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S28>:26' */
      Gesamtsystem_B.int16z_bin[0] = rtb_IntegertoBitConverter7[0];
      Gesamtsystem_B.int16z_bin[1] = rtb_IntegertoBitConverter7[1];
      Gesamtsystem_B.int16z_bin[2] = rtb_IntegertoBitConverter7[2];
      Gesamtsystem_B.int16z_bin[3] = rtb_IntegertoBitConverter7[3];
      Gesamtsystem_B.int16z_bin[4] = rtb_IntegertoBitConverter7[4];
      Gesamtsystem_B.int16z_bin[5] = rtb_IntegertoBitConverter7[5];
      Gesamtsystem_B.int16z_bin[6] = rtb_IntegertoBitConverter7[6];
      Gesamtsystem_B.int16z_bin[7] = rtb_IntegertoBitConverter7[7];
      Gesamtsystem_B.int16z_bin[8] = rtb_IntegertoBitConverter8[0];
      Gesamtsystem_B.int16z_bin[9] = rtb_IntegertoBitConverter8[1];
      Gesamtsystem_B.int16z_bin[10] = rtb_IntegertoBitConverter8[2];
      Gesamtsystem_B.int16z_bin[11] = rtb_IntegertoBitConverter8[3];
      Gesamtsystem_B.int16z_bin[12] = rtb_IntegertoBitConverter8[4];
      Gesamtsystem_B.int16z_bin[13] = rtb_IntegertoBitConverter8[5];
      Gesamtsystem_B.int16z_bin[14] = rtb_IntegertoBitConverter8[6];
      Gesamtsystem_B.int16z_bin[15] = rtb_IntegertoBitConverter8[7];
      break;

     case Gesamtsystem_IN_x0:
      /* During 'x0': '<S28>:2' */
      /* Transition: '<S28>:7' */
      Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S28>:26' */
      /* Transition: '<S28>:25' */
      Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S17>/Chart1' */

  /* DiscretePulseGenerator: '<S33>/Pulse Generator' */
  rtb_RoundingFunction1 = (Gesamtsystem_DWork.clockTickCounter <
    Gesamtsystem_P.PulseGenerator_Duty) && (Gesamtsystem_DWork.clockTickCounter >=
    0L) ? Gesamtsystem_P.PulseGenerator_Amp : 0.0;
  if (Gesamtsystem_DWork.clockTickCounter >=
      Gesamtsystem_P.PulseGenerator_Period - 1.0) {
    Gesamtsystem_DWork.clockTickCounter = 0L;
  } else {
    Gesamtsystem_DWork.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S33>/Pulse Generator' */

  /* Outputs for Triggered SubSystem: '<S33>/I2C Reinitialisierung' incorporates:
   *  TriggerPort: '<S35>/Trigger'
   */
  zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                     &Gesamtsystem_PrevZCSigState.I2CReinitialisierung_Trig_ZCE,
                     (rtb_RoundingFunction1));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S35>/I2C Reinitialisierung' */
    /* MATLAB Function 'Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung/I2C Reinitialisierung': '<S37>:1' */
    init_i2c();
  }

  /* End of Outputs for SubSystem: '<S33>/I2C Reinitialisierung' */

  /* Outputs for Triggered SubSystem: '<S33>/I2C Reset' incorporates:
   *  TriggerPort: '<S36>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &Gesamtsystem_PrevZCSigState.I2CReset_Trig_ZCE,
                     (rtb_RoundingFunction1));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S36>/I2C Reset' */
    /* MATLAB Function 'Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset': '<S38>:1' */
    reset_i2c();
  }

  /* End of Outputs for SubSystem: '<S33>/I2C Reset' */

  /* MATLABSystem: '<S4>/Moving Average2' */
  if (Gesamtsystem_DWork.obj.ForgettingFactor !=
      Gesamtsystem_P.MovingAverage2_ForgettingFactor) {
    if (Gesamtsystem_DWork.obj.isInitialized == 1L) {
      Gesamtsystem_DWork.obj.TunablePropsChanged = true;
    }

    Gesamtsystem_DWork.obj.ForgettingFactor =
      Gesamtsystem_P.MovingAverage2_ForgettingFactor;
  }

  if (Gesamtsystem_DWork.obj.TunablePropsChanged) {
    Gesamtsystem_DWork.obj.TunablePropsChanged = false;
    sf_internal_predicateOutput =
      (Gesamtsystem_DWork.obj.pStatistic->isInitialized == 1L);
    if (sf_internal_predicateOutput) {
      Gesamtsystem_DWork.obj.pStatistic->TunablePropsChanged = true;
    }

    Gesamtsystem_DWork.obj.pStatistic->ForgettingFactor =
      Gesamtsystem_DWork.obj.ForgettingFactor;
  }

  if (Gesamtsystem_DWork.obj.pStatistic->isInitialized != 1L) {
    Gesamtsystem_DWork.obj.pStatistic->isSetupComplete = false;
    Gesamtsystem_DWork.obj.pStatistic->isInitialized = 1L;
    Gesamtsystem_DWork.obj.pStatistic->pwN = 1.0;
    Gesamtsystem_DWork.obj.pStatistic->pmN = 0.0;
    Gesamtsystem_DWork.obj.pStatistic->plambda =
      Gesamtsystem_DWork.obj.pStatistic->ForgettingFactor;
    Gesamtsystem_DWork.obj.pStatistic->isSetupComplete = true;
    Gesamtsystem_DWork.obj.pStatistic->TunablePropsChanged = false;
    Gesamtsystem_DWork.obj.pStatistic->pwN = 1.0;
    Gesamtsystem_DWork.obj.pStatistic->pmN = 0.0;
  }

  if (Gesamtsystem_DWork.obj.pStatistic->TunablePropsChanged) {
    Gesamtsystem_DWork.obj.pStatistic->TunablePropsChanged = false;
    Gesamtsystem_DWork.obj.pStatistic->plambda =
      Gesamtsystem_DWork.obj.pStatistic->ForgettingFactor;
  }

  rtb_RoundingFunction1 = Gesamtsystem_DWork.obj.pStatistic->pwN;
  rtb_SollIstAbgleich_x = Gesamtsystem_DWork.obj.pStatistic->pmN;
  rtb_Zeitinsec = Gesamtsystem_DWork.obj.pStatistic->plambda;
  rtb_SollIstAbgleich_x = (1.0 - 1.0 / rtb_RoundingFunction1) *
    rtb_SollIstAbgleich_x + 1.0 / rtb_RoundingFunction1 *
    Gesamtsystem_B.RateTransition3;
  Gesamtsystem_DWork.obj.pStatistic->pwN = rtb_Zeitinsec * rtb_RoundingFunction1
    + 1.0;
  Gesamtsystem_DWork.obj.pStatistic->pmN = rtb_SollIstAbgleich_x;
  Gesamtsystem_B.MovingAverage2 = rtb_SollIstAbgleich_x;

  /* End of MATLABSystem: '<S4>/Moving Average2' */

  /* UnitDelay: '<S4>/Unit Delay2' */
  Gesamtsystem_B.UnitDelay2 = Gesamtsystem_DWork.UnitDelay2_DSTATE;

  /* RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */
  if (Gesamtsystem_M->Timing.RateInteraction.TID1_2) {
    Gesamtsystem_B.TmpRTBAtSortieralgorithmus2Inpo =
      Gesamtsystem_DWork.TmpRTBAtSortieralgorithmus2Inpo;
  }

  /* End of RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */

  /* Chart: '<S4>/Sortieralgorithmus2' */
  if (Gesamtsystem_DWork.temporalCounter_i1_o < 255U) {
    Gesamtsystem_DWork.temporalCounter_i1_o = ((int16_T)
      Gesamtsystem_DWork.temporalCounter_i1_o + 1) & 255U;
  }

  /* Gateway: Subsystem/Sortieralgorithmus2 */
  /* During: Subsystem/Sortieralgorithmus2 */
  if (Gesamtsystem_DWork.is_active_c42_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Sortieralgorithmus2 */
    Gesamtsystem_DWork.is_active_c42_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Sortieralgorithmus2 */
    /* Transition: '<S43>:182' */
    Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_setupVariable;

    /* Entry 'setupVariable': '<S43>:175' */
    Gesamtsystem_DWork.magacin0 = 0.0;
    Gesamtsystem_DWork.magacin1 = 0.0;
    Gesamtsystem_DWork.magacin2 = 0.0;
    Gesamtsystem_DWork.magacin3 = 0.0;
    Gesamtsystem_DWork.magacin4 = 0.0;
    Gesamtsystem_DWork.magacin5 = 0.0;
    Gesamtsystem_DWork.magacin6 = 0.0;
    Gesamtsystem_DWork.magacin1_LastCube = 0.0;
    Gesamtsystem_DWork.magacin2_LastCube = 0.0;
    Gesamtsystem_B.magacin = -1.0;
    Gesamtsystem_DWork.cubeCounter = 0.0;
    Gesamtsystem_B.signal = 0.0;
    Gesamtsystem_B.lampeSortier = 0.0;
    Gesamtsystem_B.lampeCubeLoaded = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c42_Gesamtsystem) {
     case Gesamtsystem_IN_Black:
      /* During 'Black': '<S43>:187' */
      if (Gesamtsystem_DWork.temporalCounter_i1_o >= 100U) {
        /* Transition: '<S43>:188' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_DetectedCube;

        /* Entry 'DetectedCube': '<S43>:180' */
        Gesamtsystem_DWork.cubeCounter++;
      } else {
        Gesamtsystem_B.magacin = 6.0;
      }
      break;

     case Gesamtsystem_IN_BlueCube:
      /* During 'BlueCube': '<S43>:185' */
      if (Gesamtsystem_DWork.temporalCounter_i1_o >= 100U) {
        /* Transition: '<S43>:189' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_DetectedCube;

        /* Entry 'DetectedCube': '<S43>:180' */
        Gesamtsystem_DWork.cubeCounter++;
      }
      break;

     case Gesamtsystem_IN_DetectedCube:
      /* During 'DetectedCube': '<S43>:180' */
      if (Gesamtsystem_B.UnitDelay2 == 0.0F) {
        /* Transition: '<S43>:168' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S43>:183' */
        Gesamtsystem_B.magacin = -1.0;
        Gesamtsystem_B.lampeCubeLoaded = 1.0;
      }
      break;

     case Gesamtsystem_IN_RedCube:
      /* During 'RedCube': '<S43>:186' */
      if (Gesamtsystem_DWork.temporalCounter_i1_o >= 100U) {
        /* Transition: '<S43>:190' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_DetectedCube;

        /* Entry 'DetectedCube': '<S43>:180' */
        Gesamtsystem_DWork.cubeCounter++;
      }
      break;

     case Gesamtsystem_IN_cubeLoaded:
      /* During 'cubeLoaded': '<S43>:183' */
      if ((Gesamtsystem_B.MovingAverage2 < 400.0) ||
          (Gesamtsystem_B.MovingAverage2 > 1300.0) ||
          (Gesamtsystem_B.TmpRTBAtSortieralgorithmus2Inpo > 0.0F)) {
        /* Transition: '<S43>:169' */
        /* Transition: '<S43>:217' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = IN_photoelectricBarrierActivate;

        /* Entry 'photoelectricBarrierActivated': '<S43>:184' */
        Gesamtsystem_B.lampeCubeLoaded = 0.0;
      } else {
        Gesamtsystem_B.magacin = -1.0;
      }
      break;

     case IN_photoelectricBarrierActivate:
      /* During 'photoelectricBarrierActivated': '<S43>:184' */
      if (Gesamtsystem_B.MovingAverage2 > 2150.0) {
        /* Transition: '<S43>:172' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_Black;
        Gesamtsystem_DWork.temporalCounter_i1_o = 0U;

        /* Entry 'Black': '<S43>:187' */
        Gesamtsystem_B.magacin = 6.0;
        Gesamtsystem_DWork.magacin6++;
      } else if (Gesamtsystem_B.MovingAverage2 < 1000.0) {
        /* Transition: '<S43>:171' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_RedCube;
        Gesamtsystem_DWork.temporalCounter_i1_o = 0U;

        /* Entry 'RedCube': '<S43>:186' */
        Gesamtsystem_B.magacin = Gesamtsystem_findPlaceForRed();
      } else {
        if ((Gesamtsystem_B.MovingAverage2 >= 1000.0) &&
            (Gesamtsystem_B.MovingAverage2 <= 2150.0)) {
          /* Transition: '<S43>:170' */
          Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_BlueCube;
          Gesamtsystem_DWork.temporalCounter_i1_o = 0U;

          /* Entry 'BlueCube': '<S43>:185' */
          Gesamtsystem_B.magacin = Gesamtsystem_findPlaceForBlue();
        }
      }
      break;

     case Gesamtsystem_IN_setupVariable:
      /* During 'setupVariable': '<S43>:175' */
      if (Gesamtsystem_B.TmpRTBAtSortieralgorithmus2Inpo > 0.0F) {
        /* Transition: '<S43>:219' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_wait_bax;
        Gesamtsystem_DWork.temporalCounter_i1_o = 0U;

        /* Entry 'wait': '<S43>:218' */
      } else {
        Gesamtsystem_DWork.magacin0 = 0.0;
        Gesamtsystem_DWork.magacin1 = 0.0;
        Gesamtsystem_DWork.magacin2 = 0.0;
        Gesamtsystem_DWork.magacin3 = 0.0;
        Gesamtsystem_DWork.magacin4 = 0.0;
        Gesamtsystem_DWork.magacin5 = 0.0;
        Gesamtsystem_DWork.magacin6 = 0.0;
        Gesamtsystem_DWork.magacin1_LastCube = 0.0;
        Gesamtsystem_DWork.magacin2_LastCube = 0.0;
        Gesamtsystem_B.magacin = -1.0;
        Gesamtsystem_DWork.cubeCounter = 0.0;
        Gesamtsystem_B.signal = 0.0;
        Gesamtsystem_B.lampeSortier = 0.0;
        Gesamtsystem_B.lampeCubeLoaded = 0.0;
      }
      break;

     default:
      /* During 'wait': '<S43>:218' */
      if (Gesamtsystem_DWork.temporalCounter_i1_o >= 200U) {
        /* Transition: '<S43>:220' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S43>:183' */
        Gesamtsystem_B.magacin = -1.0;
        Gesamtsystem_B.lampeCubeLoaded = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Sortieralgorithmus2' */

  /* S-Function (c280xgpio_do): '<S4>/Digital Output1' */
  {
    if (Gesamtsystem_B.lampeCubeLoaded)
      GpioDataRegs.GPBSET.bit.GPIO58 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO58 = 1;
  }

  /* Lookup_n-D: '<S4>/1-D Lookup Table2' */
  rtb_RoundingFunction1 = look1_binlxpw(Gesamtsystem_B.magacin,
    Gesamtsystem_P.uDLookupTable2_bp01Data,
    Gesamtsystem_P.uDLookupTable2_tableData, 7UL);

  /* RateTransition: '<S4>/TmpRTBAtChart7Inport4' */
  if (Gesamtsystem_M->Timing.RateInteraction.TID1_2) {
    Gesamtsystem_B.TmpRTBAtChart7Inport4 =
      Gesamtsystem_DWork.TmpRTBAtChart7Inport4_Buffer0;
  }

  /* End of RateTransition: '<S4>/TmpRTBAtChart7Inport4' */

  /* Chart: '<S4>/Chart7' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion2'
   */
  if (Gesamtsystem_DWork.temporalCounter_i1_g < 255U) {
    Gesamtsystem_DWork.temporalCounter_i1_g = ((int16_T)
      Gesamtsystem_DWork.temporalCounter_i1_g + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart7 */
  /* During: Subsystem/Chart7 */
  if (Gesamtsystem_DWork.is_active_c38_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Chart7 */
    Gesamtsystem_DWork.is_active_c38_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Chart7 */
    /* Transition: '<S40>:70' */
    Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_startPosition;

    /* Entry 'startPosition': '<S40>:157' */
    Gesamtsystem_B.angle = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c38_Gesamtsystem) {
     case Gesamtsys_IN_betterLeftPosition:
      /* During 'betterLeftPosition': '<S40>:151' */
      /* Transition: '<S40>:153' */
      Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

      /* Entry 'waitForCube': '<S40>:29' */
      break;

     case Gesamtsy_IN_betterRightPosition:
      /* During 'betterRightPosition': '<S40>:150' */
      /* Transition: '<S40>:155' */
      Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

      /* Entry 'waitForCube': '<S40>:29' */
      break;

     case Gesamtsystem_IN_closeGate:
      /* During 'closeGate': '<S40>:73' */
      if (Gesamtsystem_B.UnitDelay2 == 0.0F) {
        /* Transition: '<S40>:98' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

        /* Entry 'waitForCube': '<S40>:29' */
      } else {
        Gesamtsystem_B.signal_o = 0.0;
      }
      break;

     case Gesamtsystem_IN_closeKlappe_b:
      /* During 'closeKlappe': '<S40>:159' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 230U) {
        /* Transition: '<S40>:161' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

        /* Entry 'waitForCube': '<S40>:29' */
      } else {
        Gesamtsystem_B.signal_o = 0.0;
      }
      break;

     case Gesamtsystem_IN_firstEntry:
      /* During 'firstEntry': '<S40>:69' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 70U) {
        /* Transition: '<S40>:160' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_closeKlappe_b;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'closeKlappe': '<S40>:159' */
        Gesamtsystem_B.signal_o = 0.0;
      }
      break;

     case Gesamtsystem_IN_goToMagacin:
      /* During 'goToMagacin': '<S40>:3' */
      if (((real32_T)Gesamtsystem_B.RateTransition3_o > Gesamtsystem_B.angle -
           2.0) && ((real32_T)Gesamtsystem_B.RateTransition3_o <
                    Gesamtsystem_B.angle + 2.0)) {
        /* Transition: '<S40>:66' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_openGate;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'openGate': '<S40>:72' */
        Gesamtsystem_B.signal_o = 1.0;
        Gesamtsystem_B.movingCube = 0.0F;
      }
      break;

     case Gesamtsystem_IN_goToZero:
      /* During 'goToZero': '<S40>:59' */
      if (((real32_T)Gesamtsystem_B.RateTransition3_o > -2.0F) && ((real32_T)
           Gesamtsystem_B.RateTransition3_o < 2.0F)) {
        /* Transition: '<S40>:61' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_wait_b;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;
      } else {
        Gesamtsystem_B.angle = 0.0;
        Gesamtsystem_B.movingCube = 1.0F;
      }
      break;

     case Gesamtsystem_IN_openGate:
      /* During 'openGate': '<S40>:72' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 50U) {
        /* Transition: '<S40>:75' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_closeGate;

        /* Entry 'closeGate': '<S40>:73' */
        Gesamtsystem_B.signal_o = 0.0;
      } else {
        Gesamtsystem_B.signal_o = 1.0;
        Gesamtsystem_B.movingCube = 0.0F;
      }
      break;

     case Gesamtsystem_IN_startPosition:
      /* During 'startPosition': '<S40>:157' */
      if (Gesamtsystem_B.TmpRTBAtChart7Inport4 > 0.0F) {
        /* Transition: '<S40>:158' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_firstEntry;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'firstEntry': '<S40>:69' */
        Gesamtsystem_B.angle = 300.0;
        Gesamtsystem_B.signal_o = -1.0;
      }
      break;

     case Gesamtsystem_IN_wait_b:
      /* During 'wait': '<S40>:101' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 40U) {
        /* Transition: '<S40>:102' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_goToMagacin;

        /* Entry 'goToMagacin': '<S40>:3' */
        Gesamtsystem_B.angle = rtb_RoundingFunction1;
      }
      break;

     default:
      /* During 'waitForCube': '<S40>:29' */
      if (Gesamtsystem_B.angle == 85.0) {
        /* Transition: '<S40>:154' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsy_IN_betterRightPosition;

        /* Entry 'betterRightPosition': '<S40>:150' */
        Gesamtsystem_B.angle = 220.0;
      } else if (Gesamtsystem_B.angle == -40.0) {
        /* Transition: '<S40>:152' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsys_IN_betterLeftPosition;

        /* Entry 'betterLeftPosition': '<S40>:151' */
        Gesamtsystem_B.angle = -170.0;
      } else {
        if (rtb_RoundingFunction1 != -1.0) {
          /* Transition: '<S40>:60' */
          Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_goToZero;

          /* Entry 'goToZero': '<S40>:59' */
          Gesamtsystem_B.angle = 0.0;
          Gesamtsystem_B.movingCube = 1.0F;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart7' */

  /* Sum: '<S46>/Sum' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion2'
   */
  rtb_DeadZone = Gesamtsystem_B.angle - (real32_T)
    Gesamtsystem_B.RateTransition3_o;

  /* DeadZone: '<S46>/Dead Zone' */
  if (rtb_DeadZone > Gesamtsystem_P.DeadZone_End) {
    rtb_DeadZone -= Gesamtsystem_P.DeadZone_End;
  } else if (rtb_DeadZone >= Gesamtsystem_P.DeadZone_Start) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= Gesamtsystem_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S46>/Dead Zone' */

  /* Gain: '<S46>/Verstaerkung' */
  rtb_RoundingFunction1 = Gesamtsystem_P.Verstaerkung_Gain * rtb_DeadZone;

  /* MATLAB Function: '<S46>/Richtung' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung': '<S48>:1' */
  if (rtb_RoundingFunction1 > 0.0) {
    /* '<S48>:1:3' */
    /* '<S48>:1:4' */
    Gesamtsystem_B.y = 1.0;
  } else {
    /* '<S48>:1:6' */
    Gesamtsystem_B.y = 0.0;
  }

  /* End of MATLAB Function: '<S46>/Richtung' */

  /* S-Function (c280xgpio_do): '<S42>/Drehrichtungsvorgabe für einen Motor' */
  {
    if (Gesamtsystem_B.y)
      GpioDataRegs.GPASET.bit.GPIO19 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO19 = 1;
  }

  /* Abs: '<S46>/Abs' */
  rtb_RoundingFunction1 = fabs(rtb_RoundingFunction1);

  /* MATLAB Function: '<S46>/Betrag' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag': '<S47>:1' */
  if ((0.5 < rtb_RoundingFunction1) && (rtb_RoundingFunction1 < 60.0)) {
    /* '<S47>:1:3' */
    /* '<S47>:1:4' */
    rtb_y_b = 60.0;
  } else if (rtb_RoundingFunction1 <= 0.5) {
    /* '<S47>:1:5' */
    /* '<S47>:1:6' */
    rtb_y_b = 0.0;
  } else if (rtb_RoundingFunction1 >= 100.0) {
    /* '<S47>:1:7' */
    /* '<S47>:1:8' */
    rtb_y_b = 100.0;
  } else {
    /* '<S47>:1:10' */
    rtb_y_b = rtb_RoundingFunction1;
  }

  /* End of MATLAB Function: '<S46>/Betrag' */

  /* S-Function (c280xpwm): '<S42>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM4 --*/
  {
    EPwm4Regs.CMPB = (uint16_T)((uint32_T)EPwm4Regs.TBPRD * rtb_y_b * 0.01);
  }

  /* Chart: '<S4>/Chart6' */
  if (Gesamtsystem_DWork.temporalCounter_i1_ok < 127U) {
    Gesamtsystem_DWork.temporalCounter_i1_ok = ((int16_T)
      Gesamtsystem_DWork.temporalCounter_i1_ok + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart6 */
  /* During: Subsystem/Chart6 */
  if (Gesamtsystem_DWork.is_active_c37_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Chart6 */
    Gesamtsystem_DWork.is_active_c37_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Chart6 */
    /* Transition: '<S39>:16' */
    Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_wait;

    /* Entry 'wait': '<S39>:4' */
    Gesamtsystem_B.gateDirection_i = 0.0;
    Gesamtsystem_B.gatePWM_c = 50.0;
    Gesamtsystem_B.movingCube_d = 0.0F;
  } else {
    switch (Gesamtsystem_DWork.is_c37_Gesamtsystem) {
     case Gesamtsystem_IN_CloseRegular:
      /* During 'CloseRegular': '<S39>:22' */
      Gesamtsystem_B.gatePWM_c = 100.0;
      Gesamtsystem_B.gateDirection_i = 0.0;
      break;

     case Gesamtsystem_IN_close:
      /* During 'close': '<S39>:3' */
      if (Gesamtsystem_DWork.temporalCounter_i1_ok >= 40U) {
        /* Transition: '<S39>:7' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_wait;

        /* Entry 'wait': '<S39>:4' */
        Gesamtsystem_B.gateDirection_i = 0.0;
        Gesamtsystem_B.gatePWM_c = 50.0;
        Gesamtsystem_B.movingCube_d = 0.0F;
      } else {
        Gesamtsystem_B.gateDirection_i = 0.0;
      }
      break;

     case Gesamtsystem_IN_closeKlappe:
      /* During 'closeKlappe': '<S39>:17' */
      if (Gesamtsystem_DWork.temporalCounter_i1_ok >= 100U) {
        /* Transition: '<S39>:19' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_wait;

        /* Entry 'wait': '<S39>:4' */
        Gesamtsystem_B.gateDirection_i = 0.0;
        Gesamtsystem_B.gatePWM_c = 50.0;
        Gesamtsystem_B.movingCube_d = 0.0F;
      } else {
        Gesamtsystem_B.gatePWM_c = 100.0;
        Gesamtsystem_B.gateDirection_i = 0.0;
      }
      break;

     case Gesamtsystem_IN_open:
      /* During 'open': '<S39>:1' */
      if (Gesamtsystem_DWork.temporalCounter_i1_ok >= 50U) {
        /* Transition: '<S39>:6' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_close;
        Gesamtsystem_DWork.temporalCounter_i1_ok = 0U;

        /* Entry 'close': '<S39>:3' */
        Gesamtsystem_B.gateDirection_i = 0.0;
      } else {
        Gesamtsystem_B.gateDirection_i = 1.0;
        Gesamtsystem_B.gatePWM_c = 100.0;
        Gesamtsystem_B.movingCube_d = 1.0F;
      }
      break;

     default:
      /* During 'wait': '<S39>:4' */
      if (Gesamtsystem_B.signal_o == 1.0) {
        /* Transition: '<S39>:5' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_open;
        Gesamtsystem_DWork.temporalCounter_i1_ok = 0U;

        /* Entry 'open': '<S39>:1' */
        Gesamtsystem_B.gateDirection_i = 1.0;
        Gesamtsystem_B.gatePWM_c = 100.0;
        Gesamtsystem_B.movingCube_d = 1.0F;
      } else if (Gesamtsystem_B.signal_o == -1.0) {
        /* Transition: '<S39>:18' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_closeKlappe;
        Gesamtsystem_DWork.temporalCounter_i1_ok = 0U;

        /* Entry 'closeKlappe': '<S39>:17' */
        Gesamtsystem_B.gatePWM_c = 100.0;
        Gesamtsystem_B.gateDirection_i = 0.0;
      } else {
        Gesamtsystem_B.gateDirection_i = 0.0;
        Gesamtsystem_B.gatePWM_c = 50.0;
        Gesamtsystem_B.movingCube_d = 0.0F;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart6' */

  /* S-Function (c280xpwm): '<S44>/PWM Vorgabe für einen Motor 1' */

  /*-- Update CMPB value for ePWM6 --*/
  {
    EPwm6Regs.CMPB = (uint16_T)((uint32_T)EPwm6Regs.TBPRD *
      Gesamtsystem_B.gatePWM_c * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S44>/Drehrichtungsvorgabe für einen Motor1' */
  {
    if (Gesamtsystem_B.gateDirection_i)
      GpioDataRegs.GPASET.bit.GPIO16 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO16 = 1;
  }

  /* Update for Delay: '<S9>/Delay' */
  Gesamtsystem_DWork.Delay_DSTATE = rtb_RoundingFunction;

  /* Update for UnitDelay: '<S4>/Unit Delay2' incorporates:
   *  Sum: '<S4>/Sum2'
   */
  Gesamtsystem_DWork.UnitDelay2_DSTATE = Gesamtsystem_B.movingCube +
    Gesamtsystem_B.movingCube_d;
}

/* Model step function for TID2 */
void Gesamtsystem_step2(void)          /* Sample time: [0.1s, 0.0s] */
{
  /* S-Function (c280xgpio_di): '<S4>/Digital Input2' */
  {
    Gesamtsystem_B.DigitalInput2 = GpioDataRegs.GPADAT.bit.GPIO24;
  }

  /* Chart: '<S4>/Chart8' */
  if (Gesamtsystem_DWork.temporalCounter_i1_ax < 31U) {
    Gesamtsystem_DWork.temporalCounter_i1_ax = ((int16_T)
      Gesamtsystem_DWork.temporalCounter_i1_ax + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart8 */
  /* During: Subsystem/Chart8 */
  if (Gesamtsystem_DWork.is_active_c39_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Chart8 */
    Gesamtsystem_DWork.is_active_c39_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Chart8 */
    /* Transition: '<S41>:16' */
    Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_entry;

    /* Entry 'entry': '<S41>:20' */
    Gesamtsystem_DWork.tasterCounter = 0.0;
    Gesamtsystem_B.panzerMotor = 0.0;
    Gesamtsystem_B.lampe = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c39_Gesamtsystem) {
     case Gesamtsystem_IN_Lampe:
      /* During 'Lampe': '<S41>:35' */
      Gesamtsystem_B.lampe = 1.0;
      break;

     case Gesamtsystem_IN_Stillstand:
      /* During 'Stillstand': '<S41>:25' */
      if (Gesamtsystem_DWork.temporalCounter_i1_ax >= 10U) {
        /* Transition: '<S41>:36' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_Lampe;

        /* Entry 'Lampe': '<S41>:35' */
        Gesamtsystem_B.lampe = 1.0;
      } else {
        Gesamtsystem_B.gatePWM = 0.0;
      }
      break;

     case Gesamtsystem_IN_end:
      /* During 'end': '<S41>:23' */
      if (Gesamtsystem_DWork.temporalCounter_i1_ax >= 5U) {
        /* Transition: '<S41>:26' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_Stillstand;
        Gesamtsystem_DWork.temporalCounter_i1_ax = 0U;

        /* Entry 'Stillstand': '<S41>:25' */
        Gesamtsystem_B.gatePWM = 0.0;
      } else {
        Gesamtsystem_B.gatePWM = 100.0;
        Gesamtsystem_B.gateDirection = 1.0;
        Gesamtsystem_B.panzerMotor = 0.0;
      }
      break;

     case Gesamtsystem_IN_entry:
      /* During 'entry': '<S41>:20' */
      /* Transition: '<S41>:21' */
      Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait_ba;

      /* Entry 'wait': '<S41>:4' */
      Gesamtsystem_B.gatePWM = 0.0;
      Gesamtsystem_B.gateDirection = 0.0;
      break;

     case Gesamtsystem_IN_open_b:
      /* During 'open': '<S41>:1' */
      if (Gesamtsystem_DWork.temporalCounter_i1_ax >= 5U) {
        /* Transition: '<S41>:6' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait1;
        Gesamtsystem_DWork.temporalCounter_i1_ax = 0U;

        /* Entry 'wait1': '<S41>:3' */
        Gesamtsystem_B.gatePWM = 0.0;
      }
      break;

     case Gesamtsystem_IN_wait_ba:
      /* During 'wait': '<S41>:4' */
      if ((Gesamtsystem_B.DigitalInput2 > 0.0F) &&
          (Gesamtsystem_DWork.tasterCounter >= 1.0)) {
        /* Transition: '<S41>:24' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_end;
        Gesamtsystem_DWork.temporalCounter_i1_ax = 0U;

        /* Entry 'end': '<S41>:23' */
        Gesamtsystem_B.gatePWM = 100.0;
        Gesamtsystem_B.gateDirection = 1.0;
        Gesamtsystem_B.panzerMotor = 0.0;
      } else if ((Gesamtsystem_B.DigitalInput2 > 0.0F) &&
                 (Gesamtsystem_DWork.tasterCounter == 0.0)) {
        /* Transition: '<S41>:5' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_open_b;
        Gesamtsystem_DWork.temporalCounter_i1_ax = 0U;

        /* Entry 'open': '<S41>:1' */
        Gesamtsystem_DWork.tasterCounter++;
        Gesamtsystem_B.gatePWM = 100.0;
        Gesamtsystem_B.gateDirection = 0.0;
        Gesamtsystem_B.panzerMotor = 1.0;
      } else {
        Gesamtsystem_B.gatePWM = 0.0;
        Gesamtsystem_B.gateDirection = 0.0;
      }
      break;

     default:
      /* During 'wait1': '<S41>:3' */
      if (Gesamtsystem_DWork.temporalCounter_i1_ax >= 20U) {
        /* Transition: '<S41>:22' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait_ba;

        /* Entry 'wait': '<S41>:4' */
        Gesamtsystem_B.gatePWM = 0.0;
        Gesamtsystem_B.gateDirection = 0.0;
      } else {
        Gesamtsystem_B.gatePWM = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart8' */

  /* S-Function (c280xgpio_do): '<S4>/Drehrichtungsvorgabe für einen Motor3' */
  {
    if (Gesamtsystem_B.gateDirection)
      GpioDataRegs.GPASET.bit.GPIO15 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO15 = 1;
  }

  /* S-Function (c280xpwm): '<S4>/ePWM2' */

  /*-- Update CMPB value for ePWM5 --*/
  {
    EPwm5Regs.CMPB = (uint16_T)((uint32_T)EPwm5Regs.TBPRD *
      Gesamtsystem_B.gatePWM * 0.01);
  }

  /* Update for RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */
  Gesamtsystem_DWork.TmpRTBAtSortieralgorithmus2Inpo =
    Gesamtsystem_B.DigitalInput2;

  /* Update for RateTransition: '<S4>/TmpRTBAtChart7Inport4' */
  Gesamtsystem_DWork.TmpRTBAtChart7Inport4_Buffer0 =
    Gesamtsystem_B.DigitalInput2;
}

/* Model initialize function */
void Gesamtsystem_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Gesamtsystem_M, 0,
                sizeof(RT_MODEL_Gesamtsystem));

  /* block I/O */
  (void) memset(((void *) &Gesamtsystem_B), 0,
                sizeof(BlockIO_Gesamtsystem));

  /* states (dwork) */
  (void) memset((void *)&Gesamtsystem_DWork, 0,
                sizeof(D_Work_Gesamtsystem));

  {
    boolean_T flag;
    int16_T i;

    /* Start for S-Function (c28xisr_c2000): '<S17>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S17>/Triggered Subsystem'
     */
    /* Start for function-call system: '<S17>/Triggered Subsystem' */

    /* Start for S-Function (c280xi2c_rx): '<S34>/I2C Receive' */

    /* Initialize Gesamtsystem_B.I2CReceive_o1[0] */
    {
      Gesamtsystem_B.I2CReceive_o1[0] = (uint8_T)0.0;
      Gesamtsystem_B.I2CReceive_o1[1] = (uint8_T)0.0;
      Gesamtsystem_B.I2CReceive_o1[2] = (uint8_T)0.0;
      Gesamtsystem_B.I2CReceive_o1[3] = (uint8_T)0.0;
      Gesamtsystem_B.I2CReceive_o1[4] = (uint8_T)0.0;
      Gesamtsystem_B.I2CReceive_o1[5] = (uint8_T)0.0;
      Gesamtsystem_B.I2CReceive_o1[6] = (uint8_T)0.0;
      Gesamtsystem_B.I2CReceive_o1[7] = (uint8_T)0.0;
      Gesamtsystem_B.I2CReceive_o1[8] = (uint8_T)0.0;
      Gesamtsystem_B.I2CReceive_o1[9] = (uint8_T)0.0;
    }

    /* Start for RateTransition: '<S17>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Gesamtsystem_B.RateTransition[i] =
        Gesamtsystem_P.RateTransition_InitialCondition;
    }

    /* End of Start for RateTransition: '<S17>/Rate Transition' */

    /* Start for S-Function (c280xgpio_di): '<S12>/Signaleingang fuer Heckschalter' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFCFFFF;
    GpioCtrlRegs.GPADIR.all &= 0xFEFFFFFF;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S6>/Drehrichtungsvorgabe für Zylindermotor' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFFF3;
    GpioCtrlRegs.GPADIR.all |= 0x20000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S6>/PWM Vorgabe für Zylindermotor' */

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

    /* Start for S-Function (c280xgpio_do): '<S5>/Signalaussgang fuer Endsignallampe' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFCFFFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x4000000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S15>/PWM Vorgabe fuer Motor_links ' */

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

    /* Start for S-Function (c280xpwm): '<S15>/PWM Vorgabe fuer Motor_rechts' */

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

    /* Start for S-Function (c280xgpio_do): '<S15>/Drehrichtungsvorgabe fuer Motor_links' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFCFF;
    GpioCtrlRegs.GPADIR.all |= 0x100000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S15>/Drehrichtungsvorgabe fuer Motor_rechts' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFF3FF;
    GpioCtrlRegs.GPADIR.all |= 0x200000;
    EDIS;

    /* Start for S-Function (c280xadc): '<S4>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
    if (adcInitFlag == 0) {
      InitAdc();
      adcInitFlag = 1;
    }

    config_ADC_A (2U, 33U, 0U, 0U, 0U);

    /* Start for MATLABSystem: '<S4>/Moving Average2' */
    Gesamtsystem_DWork.obj.matlabCodegenIsDeleted = true;
    Gesamtsystem_DWork.obj.isInitialized = 0L;
    Gesamtsystem_DWork.obj.NumChannels = -1L;
    Gesamtsystem_DWork.obj.matlabCodegenIsDeleted = false;
    Gesamtsystem_DWork.objisempty = true;
    if (Gesamtsystem_DWork.obj.isInitialized == 1L) {
      Gesamtsystem_DWork.obj.TunablePropsChanged = true;
    }

    Gesamtsystem_DWork.obj.ForgettingFactor =
      Gesamtsystem_P.MovingAverage2_ForgettingFactor;
    Gesamtsystem_DWork.obj.isSetupComplete = false;
    Gesamtsystem_DWork.obj.isInitialized = 1L;
    Gesamtsystem_DWork.obj.NumChannels = 1L;
    Gesamtsystem_DWork.gobj_0.isInitialized = 0L;
    flag = (Gesamtsystem_DWork.gobj_0.isInitialized == 1L);
    if (flag) {
      Gesamtsystem_DWork.gobj_0.TunablePropsChanged = true;
    }

    Gesamtsystem_DWork.gobj_0.ForgettingFactor =
      Gesamtsystem_DWork.obj.ForgettingFactor;
    Gesamtsystem_DWork.obj.pStatistic = &Gesamtsystem_DWork.gobj_0;
    Gesamtsystem_DWork.obj.isSetupComplete = true;
    Gesamtsystem_DWork.obj.TunablePropsChanged = false;

    /* End of Start for MATLABSystem: '<S4>/Moving Average2' */

    /* Start for RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */
    Gesamtsystem_B.TmpRTBAtSortieralgorithmus2Inpo =
      Gesamtsystem_P.TmpRTBAtSortieralgorithmus2Inpo;

    /* Start for S-Function (c280xgpio_do): '<S4>/Digital Output1' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFCFFFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x4000000;
    EDIS;

    /* Start for S-Function (c280xgpio_di): '<S4>/Digital Input2' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFCFFFF;
    GpioCtrlRegs.GPADIR.all &= 0xFEFFFFFF;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S4>/Drehrichtungsvorgabe für einen Motor3' */
    EALLOW;
    GpioCtrlRegs.GPAMUX1.all &= 0x3FFFFFFF;
    GpioCtrlRegs.GPADIR.all |= 0x8000;
    EDIS;

    /* Start for RateTransition: '<S4>/TmpRTBAtChart7Inport4' */
    Gesamtsystem_B.TmpRTBAtChart7Inport4 =
      Gesamtsystem_P.TmpRTBAtChart7Inport4_InitialCo;

    /* Start for S-Function (c280xgpio_do): '<S42>/Drehrichtungsvorgabe für einen Motor' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFF3F;
    GpioCtrlRegs.GPADIR.all |= 0x80000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S42>/PWM Vorgabe für einen Motor ' */

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
      EPwm4Regs.CMPA.half.CMPA = 32000;
      EPwm4Regs.CMPB = 0;

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

    /* Start for S-Function (c280xpwm): '<S44>/PWM Vorgabe für einen Motor 1' */

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

    /* Start for S-Function (c280xgpio_do): '<S44>/Drehrichtungsvorgabe für einen Motor1' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFFFC;
    GpioCtrlRegs.GPADIR.all |= 0x10000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S4>/ePWM2' */

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
      EPwm5Regs.CMPB = 32000;

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

    /* Start for S-Function (c280xgpio_do): '<S45>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
    EALLOW;
    GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
    GpioCtrlRegs.GPBDIR.all |= 0x4;
    EDIS;
    Gesamtsystem_PrevZCSigState.I2CReinitialisierung_Trig_ZCE =
      UNINITIALIZED_ZCSIG;
    Gesamtsystem_PrevZCSigState.I2CReset_Trig_ZCE = UNINITIALIZED_ZCSIG;

    /* InitializeConditions for RateTransition: '<S17>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Gesamtsystem_DWork.RateTransition_Buffer[i] =
        Gesamtsystem_P.RateTransition_InitialCondition;
    }

    /* End of InitializeConditions for RateTransition: '<S17>/Rate Transition' */

    /* InitializeConditions for Delay: '<S9>/Delay' */
    Gesamtsystem_DWork.Delay_DSTATE = Gesamtsystem_P.Delay_InitialCondition;

    /* InitializeConditions for DiscretePulseGenerator: '<S33>/Pulse Generator' */
    Gesamtsystem_DWork.clockTickCounter = 0L;

    /* InitializeConditions for UnitDelay: '<S4>/Unit Delay2' */
    Gesamtsystem_DWork.UnitDelay2_DSTATE =
      Gesamtsystem_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */
    Gesamtsystem_DWork.TmpRTBAtSortieralgorithmus2Inpo =
      Gesamtsystem_P.TmpRTBAtSortieralgorithmus2Inpo;

    /* InitializeConditions for Memory: '<S50>/Memory' */
    Gesamtsystem_DWork.Memory_PreviousInput = Gesamtsystem_P.EdgeDetector1_ic;

    /* InitializeConditions for UnitDelay: '<S49>/Unit Delay3' */
    Gesamtsystem_DWork.UnitDelay3_DSTATE =
      Gesamtsystem_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S49>/Unit Delay4' */
    Gesamtsystem_DWork.UnitDelay4_DSTATE =
      Gesamtsystem_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S49>/Unit Delay5' */
    Gesamtsystem_DWork.UnitDelay5_DSTATE =
      Gesamtsystem_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S49>/Unit Delay1' */
    Gesamtsystem_DWork.UnitDelay1_DSTATE =
      Gesamtsystem_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Memory: '<S51>/Memory' */
    Gesamtsystem_DWork.Memory_PreviousInput_k = Gesamtsystem_P.EdgeDetector2_ic;

    /* InitializeConditions for UnitDelay: '<S49>/Unit Delay2' */
    Gesamtsystem_DWork.UnitDelay2_DSTATE_a =
      Gesamtsystem_P.UnitDelay2_InitialCondition_h;

    /* InitializeConditions for RateTransition: '<S4>/TmpRTBAtChart7Inport4' */
    Gesamtsystem_DWork.TmpRTBAtChart7Inport4_Buffer0 =
      Gesamtsystem_P.TmpRTBAtChart7Inport4_InitialCo;

    /* SystemInitialize for S-Function (c28xisr_c2000): '<S17>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S17>/Triggered Subsystem'
     */
    /* System initialize for function-call system: '<S17>/Triggered Subsystem' */
    {
      int16_T i;

      /* InitializeConditions for Delay: '<S34>/Delay' */
      for (i = 0; i < 10; i++) {
        Gesamtsystem_DWork.Delay_DSTATE_m[i] =
          Gesamtsystem_P.Delay_InitialCondition_g;
      }

      /* End of InitializeConditions for Delay: '<S34>/Delay' */
    }

    /* End of SystemInitialize for S-Function (c28xisr_c2000): '<S17>/C28x Hardware Interrupt' */

    /* SystemInitialize for Chart: '<S17>/Chart8' */
    Gesamtsystem_DWork.is_active_c17_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    for (i = 0; i < 20; i++) {
      Gesamtsystem_DWork.values_out1[i] = 0;
    }

    Gesamtsystem_DWork.zaehler = 0L;
    Gesamtsystem_DWork.search = 0;
    Gesamtsystem_DWork.counter = 0L;
    Gesamtsystem_DWork.x_found = 0L;
    Gesamtsystem_B.valid_values1 = 0;
    Gesamtsystem_B.valid_values2 = 0;
    Gesamtsystem_B.valid_values3 = 0;
    Gesamtsystem_B.valid_values4 = 0;
    Gesamtsystem_B.valid_values5 = 0;
    Gesamtsystem_B.valid_values6 = 0;
    Gesamtsystem_B.valid_values7 = 0;
    Gesamtsystem_B.valid_values8 = 0;

    /* End of SystemInitialize for Chart: '<S17>/Chart8' */

    /* SystemInitialize for Chart: '<S17>/Chart6' */
    Gesamtsystem_DWork.is_active_c16_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S17>/Chart2' */
    Gesamtsystem_DWork.is_active_c13_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S17>/Chart4' */
    Gesamtsystem_DWork.is_active_c14_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
    Gesamtsystem_DWork.is_active_c4_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
    Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.temporalCounter_i1_a = 0UL;
    Gesamtsystem_DWork.is_active_c5_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
    Gesamtsystem_DWork.temporalCounter_i1_p = 0U;
    Gesamtsystem_DWork.is_active_c6_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c6_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Steuersystem fuer Heckschalter' */
    Gesamtsystem_DWork.temporalCounter_i1 = 0UL;
    Gesamtsystem_DWork.is_active_c9_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Notschalter zum ersten Mal gedrückt wird' */
    Gesamtsystem_DWork.is_active_c15_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S5>/Beendigung-Ansteuerung' */
    Gesamtsystem_DWork.is_active_c3_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Atomic SubSystem: '<S3>/Navigationssystem [Einstellungen moeglich]' */
    /* SystemInitialize for Chart: '<S22>/Quadrantenteiler' */
    Gesamtsystem_DWork.is_active_c11_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S22>/Winkelausgabe fuer Ausrichtung' */
    Gesamtsystem_DWork.is_active_c12_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
    Gesamtsystem_DWork.is_active_c8_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c8_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S16>/Fahrsystem' */
    Gesamtsystem_DWork.is_active_c7_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* End of SystemInitialize for SubSystem: '<S3>/Navigationssystem [Einstellungen moeglich]' */

    /* SystemInitialize for Chart: '<S17>/Chart1' */
    Gesamtsystem_DWork.is_active_c1_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    for (i = 0; i < 16; i++) {
      /* SystemInitialize for Chart: '<S17>/Chart6' */
      Gesamtsystem_B.int16x_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S17>/Chart2' */
      Gesamtsystem_B.int16y_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S17>/Chart4' */
      Gesamtsystem_B.int16a1_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S17>/Chart1' */
      Gesamtsystem_B.int16z_bin[i] = 0.0F;
    }

    /* InitializeConditions for MATLABSystem: '<S4>/Moving Average2' */
    if (Gesamtsystem_DWork.obj.pStatistic->isInitialized == 1L) {
      Gesamtsystem_DWork.obj.pStatistic->pwN = 1.0;
      Gesamtsystem_DWork.obj.pStatistic->pmN = 0.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S4>/Moving Average2' */

    /* SystemInitialize for Chart: '<S4>/Sortieralgorithmus2' */
    Gesamtsystem_DWork.temporalCounter_i1_o = 0U;
    Gesamtsystem_DWork.is_active_c42_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S4>/Chart8' */
    Gesamtsystem_DWork.temporalCounter_i1_ax = 0U;
    Gesamtsystem_DWork.is_active_c39_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S4>/Chart7' */
    Gesamtsystem_DWork.temporalCounter_i1_g = 0U;
    Gesamtsystem_DWork.is_active_c38_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S4>/Chart6' */
    Gesamtsystem_DWork.temporalCounter_i1_ok = 0U;
    Gesamtsystem_DWork.is_active_c37_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;
  }
}

/* Model terminate function */
void Gesamtsystem_terminate(void)
{
  /* Terminate for MATLABSystem: '<S4>/Moving Average2' */
  matlabCodegenHandle_matlabCodeg(&Gesamtsystem_DWork.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
