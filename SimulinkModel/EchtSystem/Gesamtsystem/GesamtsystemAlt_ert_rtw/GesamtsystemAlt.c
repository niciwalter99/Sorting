/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: GesamtsystemAlt.c
 *
 * Code generated for Simulink model 'GesamtsystemAlt'.
 *
 * Model version                  : 1.85
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Feb  5 15:31:11 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GesamtsystemAlt.h"
#include "GesamtsystemAlt_private.h"
#define G_IN_Ausrichtung_ohne_Aenderung (1U)
#define Ge_IN_Uebergabepunkt_x_Richtung (1U)
#define Ge_IN_Uebergabepunkt_y_Richtung (2U)
#define Gesa_IN_Drehen_rechts_gesteuert (3U)
#define Gesam_IN_Drehen_links_gesteuert (1U)
#define Gesam_IN_Start_Einstellung_Init (4U)
#define Gesam_IN_Zeitausgabe_mit_Offset (2U)
#define Gesamts_IN_Shutdown_Ausfuehrung (2U)
#define Gesamts_IN_x5_valid_data_found1 (6U)
#define Gesamtsy_IN_betterRightPosition (2U)
#define Gesamtsys_IN_Einstellung_Init_j (2U)
#define Gesamtsys_IN_betterLeftPosition (1U)
#define Gesamtsyst_IN_Drehen_rechts_max (4U)
#define Gesamtsyste_IN_Drehen_links_max (2U)
#define Gesamtsyste_IN_Einstellung_Init (1U)
#define Gesamtsyste_IN_Start_Warten_jcl (2U)
#define Gesamtsyste_IN_Warten_Uebergabe (3U)
#define Gesamtsyste_IN_Warten_loslassen (5U)
#define GesamtsystemA_IN_Anfahrpunkt_10 (2U)
#define GesamtsystemA_IN_Anfahrpunkt_11 (3U)
#define GesamtsystemA_IN_Anfahrpunkt_12 (4U)
#define GesamtsystemA_IN_Daten_einlesen (1U)
#define GesamtsystemA_IN_Start_Warten_j (6U)
#define GesamtsystemAl_IN_Anfahrpunkt_1 (1U)
#define GesamtsystemAl_IN_Anfahrpunkt_2 (5U)
#define GesamtsystemAl_IN_Anfahrpunkt_3 (6U)
#define GesamtsystemAl_IN_Anfahrpunkt_4 (7U)
#define GesamtsystemAl_IN_Anfahrpunkt_5 (8U)
#define GesamtsystemAl_IN_Anfahrpunkt_6 (9U)
#define GesamtsystemAl_IN_Anfahrpunkt_7 (10U)
#define GesamtsystemAl_IN_Anfahrpunkt_8 (11U)
#define GesamtsystemAl_IN_Anfahrpunkt_9 (12U)
#define GesamtsystemAl_IN_Konvertierung (2U)
#define GesamtsystemAl_IN_closeKlappe_j (4U)
#define GesamtsystemAl_IN_setupVariable (7U)
#define GesamtsystemAl_IN_startPosition (9U)
#define GesamtsystemAl_IN_wert_erkannt2 (4U)
#define GesamtsystemAlt_IN_Anschalten  (1U)
#define GesamtsystemAlt_IN_Aus_Zustand (2U)
#define GesamtsystemAlt_IN_Ausfuehrung (1U)
#define GesamtsystemAlt_IN_Beendet     (2U)
#define GesamtsystemAlt_IN_Black       (1U)
#define GesamtsystemAlt_IN_BlueCube    (2U)
#define GesamtsystemAlt_IN_CloseRegular (1U)
#define GesamtsystemAlt_IN_DetectedCube (3U)
#define GesamtsystemAlt_IN_Ende        (1U)
#define GesamtsystemAlt_IN_Hochzaehlen (1U)
#define GesamtsystemAlt_IN_Init_Warten (1U)
#define GesamtsystemAlt_IN_Lampe       (1U)
#define GesamtsystemAlt_IN_Parken      (2U)
#define GesamtsystemAlt_IN_Parken_1    (1U)
#define GesamtsystemAlt_IN_Parken_2    (2U)
#define GesamtsystemAlt_IN_Parken_3    (3U)
#define GesamtsystemAlt_IN_Quadrant_a  (1U)
#define GesamtsystemAlt_IN_Quadrant_b  (2U)
#define GesamtsystemAlt_IN_Quadrant_c  (3U)
#define GesamtsystemAlt_IN_Quadrant_d  (4U)
#define GesamtsystemAlt_IN_RedCube     (4U)
#define GesamtsystemAlt_IN_Sammeln     (3U)
#define GesamtsystemAlt_IN_Start       (2U)
#define GesamtsystemAlt_IN_Start_Init  (3U)
#define GesamtsystemAlt_IN_Start_Warten (3U)
#define GesamtsystemAlt_IN_Stillstand  (2U)
#define GesamtsystemAlt_IN_Uebergabe   (5U)
#define GesamtsystemAlt_IN_Warten      (3U)
#define GesamtsystemAlt_IN_Wechsel_1   (4U)
#define GesamtsystemAlt_IN_Wechsel_10  (14U)
#define GesamtsystemAlt_IN_Wechsel_11  (15U)
#define GesamtsystemAlt_IN_Wechsel_12  (16U)
#define GesamtsystemAlt_IN_Wechsel_1_j (13U)
#define GesamtsystemAlt_IN_Wechsel_2   (5U)
#define GesamtsystemAlt_IN_Wechsel_2_j (17U)
#define GesamtsystemAlt_IN_Wechsel_3   (6U)
#define GesamtsystemAlt_IN_Wechsel_3_j (18U)
#define GesamtsystemAlt_IN_Wechsel_4   (19U)
#define GesamtsystemAlt_IN_Wechsel_5   (20U)
#define GesamtsystemAlt_IN_Wechsel_6   (21U)
#define GesamtsystemAlt_IN_Wechsel_7   (22U)
#define GesamtsystemAlt_IN_Wechsel_8   (23U)
#define GesamtsystemAlt_IN_Wechsel_9   (24U)
#define GesamtsystemAlt_IN_Weiter1     (4U)
#define GesamtsystemAlt_IN_Weiter2     (5U)
#define GesamtsystemAlt_IN_close       (2U)
#define GesamtsystemAlt_IN_closeGate   (3U)
#define GesamtsystemAlt_IN_closeKlappe (3U)
#define GesamtsystemAlt_IN_cubeLoaded  (5U)
#define GesamtsystemAlt_IN_end         (3U)
#define GesamtsystemAlt_IN_entry       (4U)
#define GesamtsystemAlt_IN_firstEntry  (5U)
#define GesamtsystemAlt_IN_goToMagacin (6U)
#define GesamtsystemAlt_IN_goToZero    (7U)
#define GesamtsystemAlt_IN_init        (2U)
#define GesamtsystemAlt_IN_open        (4U)
#define GesamtsystemAlt_IN_openGate    (8U)
#define GesamtsystemAlt_IN_open_j      (5U)
#define GesamtsystemAlt_IN_wait        (5U)
#define GesamtsystemAlt_IN_wait1       (7U)
#define GesamtsystemAlt_IN_waitForCube (11U)
#define GesamtsystemAlt_IN_wait_j      (10U)
#define GesamtsystemAlt_IN_wait_jc     (6U)
#define GesamtsystemAlt_IN_wait_jcl    (8U)
#define GesamtsystemAlt_IN_wert_erkannt (3U)
#define GesamtsystemAlt_IN_x0          (2U)
#define GesamtsystemAlt_IN_x1_1        (3U)
#define GesamtsystemAlt_IN_x1_search1  (5U)
#define Gesamtsystem_IN_Init_und_Warten (3U)
#define Gesamtsystem_IN_NO_ACTIVE_CHILD (0U)
#define Gesamtsystem_IN_Start_Warten_jc (5U)
#define Gesamtsystem_IN_Warten_druecken (4U)
#define IN_Anfang_found_Schritt_uebertr (1U)
#define IN_Drehstillstand_mit_Ausrichtu (1U)
#define IN_Fahren_mit_Ausrichtungsregel (5U)
#define IN_Trigonometrische_Auswertun_j (4U)
#define IN_Trigonometrische_Auswertung_ (3U)
#define IN_Weiterleitung_bei_Drehzustan (3U)
#define IN_photoelectricBarrierActivate (6U)

/* user code (top of source file) */
#include "i2c_reset.c"

/* Block signals (default storage) */
BlockIO_GesamtsystemAlt GesamtsystemAlt_B;

/* Block states (default storage) */
D_Work_GesamtsystemAlt GesamtsystemAlt_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_GesamtsystemAlt GesamtsystemAlt_PrevZCSigState;

/* Real-time model */
RT_MODEL_GesamtsystemAlt GesamtsystemAlt_M_;
RT_MODEL_GesamtsystemAlt *const GesamtsystemAlt_M = &GesamtsystemAlt_M_;

/* Forward declaration for local functions */
static void Gesam_enter_atomic_wert_erkannt(void);
static void GesamtsystemAlt_Wechsel_5(void);
static void GesamtsystemAlt_Wechsel_6(void);
static void GesamtsystemAlt_Wechsel_7(void);
static void GesamtsystemAlt_Wechsel_8(void);
static void GesamtsystemAlt_Sammeln(void);
static void enter_atomic_Drehstillstand_mit(void);
static void GesamtsystemAlt_Start_Warten(void);
static void GesamtsystemAl_Drehen_links_max(void);
static real_T GesamtsystemAl_findPlaceForBlue(void);
static real_T GesamtsystemAlt_findPlaceForRed(void);
static void Gesamtsystem_SystemCore_release(dsp_simulink_MovingAverage_Gesa *obj);
static void GesamtsystemA_SystemCore_delete(dsp_simulink_MovingAverage_Gesa *obj);
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

/* Hardware Interrupt Block: '<S18>/C28x Hardware Interrupt' */
void isr_int8pie2_task_fcn(void)
{
  /* Call the system: <S18>/Triggered Subsystem */
  {
    int16_T i;

    /* S-Function (c28xisr_c2000): '<S18>/C28x Hardware Interrupt' */

    /* Output and update for function-call system: '<S18>/Triggered Subsystem' */
    {
      int16_T i;

      /* S-Function (c280xi2c_rx): '<S35>/I2C Receive' */
      {
        int rx_loop= 0;

        /* mode:0 (1:master 0:slave)  Addressing mode:0 (1:10-bit 0:7-bit)
           free data mode:0 (1:enbaled 0:disabled) digital loopback mode:0 (1:enabled 0:disabled)
           bit count:0 (0:8bit) NACK mode:1 (1:enabled 0: disabled) stop condition:0 (1:enabled 0: disabled)*/
        I2caRegs.I2CMDR.all = 57376;

        {
          int_T i1;
          uint8_T *y0 = &GesamtsystemAlt_B.I2CReceive_o1[0];
          for (i1=0; i1 < 10; i1++) {
            rx_loop= 0;
            while (I2caRegs.I2CFFRX.bit.RXFFST==0 && rx_loop<10000)
              rx_loop++;
            if (rx_loop!=10000) {
              y0[i1] = I2caRegs.I2CDRR;
              GesamtsystemAlt_B.I2CReceive_o2 = I2caRegs.I2CSTR.all;/* output i2c status */
            } else
              GesamtsystemAlt_B.I2CReceive_o2 = I2caRegs.I2CSTR.all | 0x40;/* output receive data loss status */
          }
        }
      }

      for (i = 0; i < 10; i++) {
        /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn2' */
        GesamtsystemAlt_B.VectorConcatenate[i + 10] =
          GesamtsystemAlt_B.I2CReceive_o1[i];

        /* Delay: '<S35>/Delay' */
        GesamtsystemAlt_B.VectorConcatenate[i] =
          GesamtsystemAlt_DWork.Delay_DSTATE_g[i];

        /* Update for Delay: '<S35>/Delay' */
        GesamtsystemAlt_DWork.Delay_DSTATE_g[i] =
          GesamtsystemAlt_B.I2CReceive_o1[i];
      }
    }

    /* End of Outputs for S-Function (c28xisr_c2000): '<S18>/C28x Hardware Interrupt' */

    /* RateTransition: '<S18>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      GesamtsystemAlt_DWork.RateTransition_Buffer[i +
        (GesamtsystemAlt_DWork.RateTransition_semaphoreTaken == 0) * 20] =
        GesamtsystemAlt_B.VectorConcatenate[i];
    }

    GesamtsystemAlt_DWork.RateTransition_ActiveBufIdx =
      (GesamtsystemAlt_DWork.RateTransition_semaphoreTaken == 0);

    /* End of RateTransition: '<S18>/Rate Transition' */
  }
}

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void GesamtsystemAlt_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(GesamtsystemAlt_M, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(GesamtsystemAlt_M, 2));
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
  GesamtsystemAlt_M->Timing.RateInteraction.TID0_1 =
    (GesamtsystemAlt_M->Timing.TaskCounters.TID[1] == 0);

  /* tid 1 shares data with slower tid rate: 2 */
  if (GesamtsystemAlt_M->Timing.TaskCounters.TID[1] == 0) {
    GesamtsystemAlt_M->Timing.RateInteraction.TID1_2 =
      (GesamtsystemAlt_M->Timing.TaskCounters.TID[2] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (GesamtsystemAlt_M->Timing.TaskCounters.TID[1])++;
  if ((GesamtsystemAlt_M->Timing.TaskCounters.TID[1]) > 499) {/* Sample time: [0.01s, 0.0s] */
    GesamtsystemAlt_M->Timing.TaskCounters.TID[1] = 0;
  }

  (GesamtsystemAlt_M->Timing.TaskCounters.TID[2])++;
  if ((GesamtsystemAlt_M->Timing.TaskCounters.TID[2]) > 4999) {/* Sample time: [0.1s, 0.0s] */
    GesamtsystemAlt_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/*
 * Output and update for enable system:
 *    '<S51>/NEGATIVE Edge'
 *    '<S52>/NEGATIVE Edge'
 */
void GesamtsystemAl_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_NEGATIVEEdge_GesamtsystemAl *localB)
{
  /* Outputs for Enabled SubSystem: '<S51>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S56>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S56>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S51>/NEGATIVE Edge' */
}

/*
 * Output and update for enable system:
 *    '<S51>/POSITIVE Edge'
 *    '<S52>/POSITIVE Edge'
 */
void GesamtsystemAl_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_POSITIVEEdge_GesamtsystemAl *localB)
{
  /* Outputs for Enabled SubSystem: '<S51>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S57>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S57>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S51>/POSITIVE Edge' */
}

/*
 * Output and update for atomic system:
 *    '<S50>/MATLAB Function1'
 *    '<S50>/MATLAB Function3'
 */
void Gesamtsyste_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt,
  rtB_MATLABFunction1_Gesamtsyste *localB)
{
  /* MATLAB Function 'Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1': '<S53>:1' */
  /* '<S53>:1:3' */
  localB->y = rtu_yalt + (real32_T)rtu_u;
}

/* Function for Chart: '<S18>/Chart8' */
static void Gesam_enter_atomic_wert_erkannt(void)
{
  /* Entry 'wert_erkannt': '<S33>:109' */
  GesamtsystemAlt_DWork.values_out1[0] = (int16_T)
    GesamtsystemAlt_B.RateTransition[0];
  GesamtsystemAlt_DWork.values_out1[1] = (int16_T)
    GesamtsystemAlt_B.RateTransition[1];
  GesamtsystemAlt_DWork.values_out1[2] = (int16_T)
    GesamtsystemAlt_B.RateTransition[2];
  GesamtsystemAlt_DWork.values_out1[3] = (int16_T)
    GesamtsystemAlt_B.RateTransition[3];
  GesamtsystemAlt_DWork.values_out1[4] = (int16_T)
    GesamtsystemAlt_B.RateTransition[4];
  GesamtsystemAlt_DWork.values_out1[5] = (int16_T)
    GesamtsystemAlt_B.RateTransition[5];
  GesamtsystemAlt_DWork.values_out1[6] = (int16_T)
    GesamtsystemAlt_B.RateTransition[6];
  GesamtsystemAlt_DWork.values_out1[7] = (int16_T)
    GesamtsystemAlt_B.RateTransition[7];
  GesamtsystemAlt_DWork.values_out1[8] = (int16_T)
    GesamtsystemAlt_B.RateTransition[8];
  GesamtsystemAlt_DWork.values_out1[9] = (int16_T)
    GesamtsystemAlt_B.RateTransition[9];
  GesamtsystemAlt_DWork.values_out1[10] = (int16_T)
    GesamtsystemAlt_B.RateTransition[10];
  GesamtsystemAlt_DWork.values_out1[11] = (int16_T)
    GesamtsystemAlt_B.RateTransition[11];
  GesamtsystemAlt_DWork.values_out1[12] = (int16_T)
    GesamtsystemAlt_B.RateTransition[12];
  GesamtsystemAlt_DWork.values_out1[13] = (int16_T)
    GesamtsystemAlt_B.RateTransition[13];
  GesamtsystemAlt_DWork.values_out1[14] = (int16_T)
    GesamtsystemAlt_B.RateTransition[14];
  GesamtsystemAlt_DWork.values_out1[15] = (int16_T)
    GesamtsystemAlt_B.RateTransition[15];
  GesamtsystemAlt_DWork.values_out1[16] = (int16_T)
    GesamtsystemAlt_B.RateTransition[16];
  GesamtsystemAlt_DWork.values_out1[17] = (int16_T)
    GesamtsystemAlt_B.RateTransition[17];
  GesamtsystemAlt_DWork.values_out1[18] = (int16_T)
    GesamtsystemAlt_B.RateTransition[18];
  GesamtsystemAlt_DWork.values_out1[19] = (int16_T)
    GesamtsystemAlt_B.RateTransition[19];
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
static void GesamtsystemAlt_Wechsel_5(void)
{
  /* During 'Wechsel_5': '<S14>:1758' */
  if (GesamtsystemAlt_DWork.Counter == 5.0) {
    /* Transition: '<S14>:1735' */
    GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_6;

    /* Entry 'Anfahrpunkt_6': '<S14>:1759' */
    GesamtsystemAlt_B.x_soll = 395.0;
    GesamtsystemAlt_B.y_soll = 825.0;
  } else {
    /* Transition: '<S14>:1734' */
    GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_8;

    /* Entry 'Anfahrpunkt_8': '<S14>:1760' */
    GesamtsystemAlt_B.x_soll = 875.0;
    GesamtsystemAlt_B.y_soll = 690.0;
  }
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void GesamtsystemAlt_Wechsel_6(void)
{
  /* During 'Wechsel_6': '<S14>:1761' */
  if (GesamtsystemAlt_DWork.Counter == 6.0) {
    /* Transition: '<S14>:1739' */
    GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_7;

    /* Entry 'Anfahrpunkt_7': '<S14>:1763' */
    GesamtsystemAlt_B.x_soll = 400.0;
    GesamtsystemAlt_B.y_soll = 50.0;
  } else {
    /* Transition: '<S14>:1732' */
    GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_5;

    /* Entry 'Anfahrpunkt_5': '<S14>:1757' */
    GesamtsystemAlt_B.x_soll = 500.0;
    GesamtsystemAlt_B.y_soll = 825.0;
  }
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void GesamtsystemAlt_Wechsel_7(void)
{
  /* During 'Wechsel_7': '<S14>:1765' */
  /* Transition: '<S14>:1736' */
  GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_6;

  /* Entry 'Anfahrpunkt_6': '<S14>:1759' */
  GesamtsystemAlt_B.x_soll = 395.0;
  GesamtsystemAlt_B.y_soll = 825.0;
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void GesamtsystemAlt_Wechsel_8(void)
{
  /* During 'Wechsel_8': '<S14>:1762' */
  /* Transition: '<S14>:1740' */
  GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_9;

  /* Entry 'Anfahrpunkt_9': '<S14>:1764' */
  GesamtsystemAlt_B.x_soll = 450.0;
  GesamtsystemAlt_B.y_soll = 0.0;
}

/* Function for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void GesamtsystemAlt_Sammeln(void)
{
  /* During 'Sammeln': '<S14>:1722' */
  if (GesamtsystemAlt_DWork.Counter == 14.0) {
    /* Transition: '<S14>:1476' */
    GesamtsystemAlt_B.Gang = 1.0;
    GesamtsystemAlt_DWork.x_least = GesamtsystemAlt_B.x_soll;

    /* Exit Internal 'Sammeln': '<S14>:1722' */
    GesamtsystemAlt_DWork.is_Sammeln = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    GesamtsystemAlt_DWork.is_c5_GesamtsystemAlt = GesamtsystemAlt_IN_Uebergabe;

    /* Entry Internal 'Uebergabe': '<S14>:1340' */
    /* Transition: '<S14>:1341' */
    GesamtsystemAlt_DWork.Counter = 0.0;
    GesamtsystemAlt_DWork.is_Uebergabe = Ge_IN_Uebergabepunkt_x_Richtung;

    /* Entry 'Uebergabepunkt_x_Richtung': '<S14>:1346' */
  } else {
    switch (GesamtsystemAlt_DWork.is_Sammeln) {
     case GesamtsystemAl_IN_Anfahrpunkt_1:
      /* During 'Anfahrpunkt_1': '<S14>:1749' */
      if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
           GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
            GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
        /* Transition: '<S14>:1724' */
        GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAlt_IN_Wechsel_1_j;

        /* Entry 'Wechsel_1': '<S14>:1750' */
        GesamtsystemAlt_DWork.Counter++;
      }
      break;

     case GesamtsystemA_IN_Anfahrpunkt_10:
      /* During 'Anfahrpunkt_10': '<S14>:1767' */
      if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
           GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
            GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
        /* Transition: '<S14>:1744' */
        GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAlt_IN_Wechsel_10;

        /* Entry 'Wechsel_10': '<S14>:1768' */
        GesamtsystemAlt_DWork.Counter++;
      }
      break;

     case GesamtsystemA_IN_Anfahrpunkt_11:
      /* During 'Anfahrpunkt_11': '<S14>:1769' */
      if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
           GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
            GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
        /* Transition: '<S14>:1746' */
        GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAlt_IN_Wechsel_11;

        /* Entry 'Wechsel_11': '<S14>:1770' */
        GesamtsystemAlt_DWork.Counter++;
      }
      break;

     case GesamtsystemA_IN_Anfahrpunkt_12:
      /* During 'Anfahrpunkt_12': '<S14>:1771' */
      if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
           GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
            GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
        /* Transition: '<S14>:1748' */
        GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAlt_IN_Wechsel_12;

        /* Entry 'Wechsel_12': '<S14>:1772' */
        GesamtsystemAlt_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_2:
      /* During 'Anfahrpunkt_2': '<S14>:1751' */
      if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
           GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
            GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
        /* Transition: '<S14>:1726' */
        GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAlt_IN_Wechsel_2_j;

        /* Entry 'Wechsel_2': '<S14>:1752' */
        GesamtsystemAlt_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_3:
      /* During 'Anfahrpunkt_3': '<S14>:1753' */
      if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
           GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
            GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
        /* Transition: '<S14>:1728' */
        GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAlt_IN_Wechsel_3_j;

        /* Entry 'Wechsel_3': '<S14>:1754' */
        GesamtsystemAlt_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_4:
      /* During 'Anfahrpunkt_4': '<S14>:1755' */
      if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
           GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
            GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
        /* Transition: '<S14>:1730' */
        GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAlt_IN_Wechsel_4;

        /* Entry 'Wechsel_4': '<S14>:1756' */
        GesamtsystemAlt_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_5:
      /* During 'Anfahrpunkt_5': '<S14>:1757' */
      if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
           GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
            GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
        /* Transition: '<S14>:1733' */
        GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAlt_IN_Wechsel_5;

        /* Entry 'Wechsel_5': '<S14>:1758' */
        GesamtsystemAlt_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_6:
      /* During 'Anfahrpunkt_6': '<S14>:1759' */
      if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
           GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
            GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
        /* Transition: '<S14>:1737' */
        GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAlt_IN_Wechsel_6;

        /* Entry 'Wechsel_6': '<S14>:1761' */
        GesamtsystemAlt_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_7:
      /* During 'Anfahrpunkt_7': '<S14>:1763' */
      if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
           GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
            GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
        /* Transition: '<S14>:1741' */
        GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAlt_IN_Wechsel_7;

        /* Entry 'Wechsel_7': '<S14>:1765' */
        GesamtsystemAlt_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_8:
      /* During 'Anfahrpunkt_8': '<S14>:1760' */
      if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
           GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
            GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
        /* Transition: '<S14>:1738' */
        GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAlt_IN_Wechsel_8;

        /* Entry 'Wechsel_8': '<S14>:1762' */
        GesamtsystemAlt_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_9:
      /* During 'Anfahrpunkt_9': '<S14>:1764' */
      if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
           GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
            GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
        /* Transition: '<S14>:1742' */
        GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAlt_IN_Wechsel_9;

        /* Entry 'Wechsel_9': '<S14>:1766' */
        GesamtsystemAlt_DWork.Counter++;
      }
      break;

     case GesamtsystemAlt_IN_Wechsel_1_j:
      /* During 'Wechsel_1': '<S14>:1750' */
      /* Transition: '<S14>:1725' */
      GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_2;

      /* Entry 'Anfahrpunkt_2': '<S14>:1751' */
      GesamtsystemAlt_B.x_soll = 895.0;
      GesamtsystemAlt_B.y_soll = 50.0;
      break;

     case GesamtsystemAlt_IN_Wechsel_10:
      /* During 'Wechsel_10': '<S14>:1768' */
      /* Transition: '<S14>:1745' */
      GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemA_IN_Anfahrpunkt_11;

      /* Entry 'Anfahrpunkt_11': '<S14>:1769' */
      GesamtsystemAlt_B.x_soll = 1200.0;
      GesamtsystemAlt_B.y_soll = -50.0;
      break;

     case GesamtsystemAlt_IN_Wechsel_11:
      /* During 'Wechsel_11': '<S14>:1770' */
      /* Transition: '<S14>:1747' */
      GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemA_IN_Anfahrpunkt_12;

      /* Entry 'Anfahrpunkt_12': '<S14>:1771' */
      GesamtsystemAlt_B.x_soll = GesamtsystemAlt_DWork.x_Uebergabe;
      GesamtsystemAlt_B.y_soll = -75.0;
      break;

     case GesamtsystemAlt_IN_Wechsel_12:
      /* During 'Wechsel_12': '<S14>:1772' */
      break;

     case GesamtsystemAlt_IN_Wechsel_2_j:
      /* During 'Wechsel_2': '<S14>:1752' */
      /* Transition: '<S14>:1727' */
      GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_3;

      /* Entry 'Anfahrpunkt_3': '<S14>:1753' */
      GesamtsystemAlt_B.x_soll = 925.0;
      GesamtsystemAlt_B.y_soll = 600.0;
      break;

     case GesamtsystemAlt_IN_Wechsel_3_j:
      /* During 'Wechsel_3': '<S14>:1754' */
      /* Transition: '<S14>:1729' */
      GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_4;

      /* Entry 'Anfahrpunkt_4': '<S14>:1755' */
      GesamtsystemAlt_B.x_soll = 600.0;
      GesamtsystemAlt_B.y_soll = 775.0;
      break;

     case GesamtsystemAlt_IN_Wechsel_4:
      /* During 'Wechsel_4': '<S14>:1756' */
      /* Transition: '<S14>:1731' */
      GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_5;

      /* Entry 'Anfahrpunkt_5': '<S14>:1757' */
      GesamtsystemAlt_B.x_soll = 500.0;
      GesamtsystemAlt_B.y_soll = 825.0;
      break;

     case GesamtsystemAlt_IN_Wechsel_5:
      GesamtsystemAlt_Wechsel_5();
      break;

     case GesamtsystemAlt_IN_Wechsel_6:
      GesamtsystemAlt_Wechsel_6();
      break;

     case GesamtsystemAlt_IN_Wechsel_7:
      GesamtsystemAlt_Wechsel_7();
      break;

     case GesamtsystemAlt_IN_Wechsel_8:
      GesamtsystemAlt_Wechsel_8();
      break;

     default:
      /* During 'Wechsel_9': '<S14>:1766' */
      /* Transition: '<S14>:1743' */
      GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemA_IN_Anfahrpunkt_10;

      /* Entry 'Anfahrpunkt_10': '<S14>:1767' */
      GesamtsystemAlt_B.x_soll = 1050.0;
      GesamtsystemAlt_B.y_soll = 20.0;
      break;
    }
  }
}

/* Function for Chart: '<S17>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
static void enter_atomic_Drehstillstand_mit(void)
{
  real_T tmp;

  /* Entry 'Drehstillstand_mit_Ausrichtungsregelung': '<S20>:26' */
  GesamtsystemAlt_B.alpha_diff_opt = 0.0;
  tmp = fabs(GesamtsystemAlt_DWork.alpha_diff_intern);
  if (tmp < 5.0) {
    GesamtsystemAlt_B.pwm_mindern[0] = rt_roundd_snf(tmp);
  } else if (tmp < 15.0) {
    GesamtsystemAlt_B.pwm_mindern[0] = floor((tmp - 5.0) / 2.0) + 5.0;
  } else {
    GesamtsystemAlt_B.pwm_mindern[0] = 10.0;
  }

  if (GesamtsystemAlt_DWork.alpha_diff_intern < 0.0) {
    GesamtsystemAlt_B.pwm_mindern[1] = 0.0;
  } else if (GesamtsystemAlt_DWork.alpha_diff_intern > 0.0) {
    GesamtsystemAlt_B.pwm_mindern[1] = 1.0;
  } else {
    GesamtsystemAlt_B.pwm_mindern[1] = 2.0;
  }
}

/* Function for Chart: '<S17>/Fahrsystem' */
static void GesamtsystemAlt_Start_Warten(void)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Start_Warten': '<S21>:92' */
  /* Transition: '<S21>:93' */
  l_mindern = fabs(GesamtsystemAlt_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (GesamtsystemAlt_B.PWMWertebereich > 0.0)) {
    /* Transition: '<S21>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S21>:21' */
      if (GesamtsystemAlt_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S21>:45' */
        GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
          Gesamtsyste_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S21>:8' */
        GesamtsystemAlt_B.pwm_out_l = 100.0;
        GesamtsystemAlt_B.pwm_out_r = 100.0;
        GesamtsystemAlt_B.r_l_out_l = 0.0;
        GesamtsystemAlt_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S21>:57' */
        GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
          Gesamtsyst_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S21>:9' */
        GesamtsystemAlt_B.pwm_out_l = 100.0;
        GesamtsystemAlt_B.pwm_out_r = 100.0;
        GesamtsystemAlt_B.r_l_out_l = 1.0;
        GesamtsystemAlt_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S21>:53' */
      if (GesamtsystemAlt_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S21>:54' */
        GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
          Gesam_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S21>:43' */
        GesamtsystemAlt_B.pwm_out_l = 59.0 + fabs
          (GesamtsystemAlt_B.alpha_diff_opt);
        GesamtsystemAlt_B.pwm_out_r = 59.0 + fabs
          (GesamtsystemAlt_B.alpha_diff_opt);
        GesamtsystemAlt_B.r_l_out_l = 0.0;
        GesamtsystemAlt_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S21>:55' */
        GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
          Gesa_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S21>:51' */
        GesamtsystemAlt_B.pwm_out_l = 59.0 + l_mindern;
        GesamtsystemAlt_B.pwm_out_r = 59.0 + fabs
          (GesamtsystemAlt_B.alpha_diff_opt);
        GesamtsystemAlt_B.r_l_out_l = 1.0;
        GesamtsystemAlt_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S21>:82' */
    if (GesamtsystemAlt_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S21>:85' */
      l_mindern = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
      r_mindern = GesamtsystemAlt_B.BinaererWertebereich;
    } else if (GesamtsystemAlt_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S21>:86' */
      l_mindern = GesamtsystemAlt_B.BinaererWertebereich;
      r_mindern = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
    } else {
      /* Transition: '<S21>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
      IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S21>:94' */
    a = GesamtsystemAlt_B.PWMWertebereich / 100.0;
    GesamtsystemAlt_B.pwm_out_l = GesamtsystemAlt_B.PWMWertebereich -
      rt_roundd_snf(a * a * GesamtsystemAlt_B.pwm_mindern[0]) * l_mindern;
    l_mindern = GesamtsystemAlt_B.PWMWertebereich / 100.0;
    GesamtsystemAlt_B.pwm_out_r = GesamtsystemAlt_B.PWMWertebereich -
      rt_roundd_snf(l_mindern * l_mindern * GesamtsystemAlt_B.pwm_mindern[0]) *
      r_mindern;
    GesamtsystemAlt_B.r_l_out_l = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
    GesamtsystemAlt_B.r_l_out_r = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
  }
}

/* Function for Chart: '<S17>/Fahrsystem' */
static void GesamtsystemAl_Drehen_links_max(void)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Drehen_links_max': '<S21>:8' */
  /* Transition: '<S21>:60' */
  /* Transition: '<S21>:75' */
  l_mindern = fabs(GesamtsystemAlt_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (GesamtsystemAlt_B.PWMWertebereich > 0.0)) {
    /* Transition: '<S21>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S21>:21' */
      if (GesamtsystemAlt_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S21>:45' */
        GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
          Gesamtsyste_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S21>:8' */
        GesamtsystemAlt_B.pwm_out_l = 100.0;
        GesamtsystemAlt_B.pwm_out_r = 100.0;
        GesamtsystemAlt_B.r_l_out_l = 0.0;
        GesamtsystemAlt_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S21>:57' */
        GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
          Gesamtsyst_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S21>:9' */
        GesamtsystemAlt_B.pwm_out_l = 100.0;
        GesamtsystemAlt_B.pwm_out_r = 100.0;
        GesamtsystemAlt_B.r_l_out_l = 1.0;
        GesamtsystemAlt_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S21>:53' */
      if (GesamtsystemAlt_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S21>:54' */
        GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
          Gesam_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S21>:43' */
        GesamtsystemAlt_B.pwm_out_l = 59.0 + fabs
          (GesamtsystemAlt_B.alpha_diff_opt);
        GesamtsystemAlt_B.pwm_out_r = 59.0 + fabs
          (GesamtsystemAlt_B.alpha_diff_opt);
        GesamtsystemAlt_B.r_l_out_l = 0.0;
        GesamtsystemAlt_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S21>:55' */
        GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
          Gesa_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S21>:51' */
        GesamtsystemAlt_B.pwm_out_l = 59.0 + l_mindern;
        GesamtsystemAlt_B.pwm_out_r = 59.0 + fabs
          (GesamtsystemAlt_B.alpha_diff_opt);
        GesamtsystemAlt_B.r_l_out_l = 1.0;
        GesamtsystemAlt_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S21>:82' */
    if (GesamtsystemAlt_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S21>:85' */
      l_mindern = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
      r_mindern = GesamtsystemAlt_B.BinaererWertebereich;
    } else if (GesamtsystemAlt_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S21>:86' */
      l_mindern = GesamtsystemAlt_B.BinaererWertebereich;
      r_mindern = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
    } else {
      /* Transition: '<S21>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
      IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S21>:94' */
    a = GesamtsystemAlt_B.PWMWertebereich / 100.0;
    GesamtsystemAlt_B.pwm_out_l = GesamtsystemAlt_B.PWMWertebereich -
      rt_roundd_snf(a * a * GesamtsystemAlt_B.pwm_mindern[0]) * l_mindern;
    l_mindern = GesamtsystemAlt_B.PWMWertebereich / 100.0;
    GesamtsystemAlt_B.pwm_out_r = GesamtsystemAlt_B.PWMWertebereich -
      rt_roundd_snf(l_mindern * l_mindern * GesamtsystemAlt_B.pwm_mindern[0]) *
      r_mindern;
    GesamtsystemAlt_B.r_l_out_l = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
    GesamtsystemAlt_B.r_l_out_r = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
  }
}

/* Function for Chart: '<S4>/Sortieralgorithmus2' */
static real_T GesamtsystemAl_findPlaceForBlue(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForBlue': '<S44>:206' */
  if (GesamtsystemAlt_DWork.magacin2 < 2.0) {
    /* '<S44>:206:3' */
    /* '<S44>:206:4' */
    magacinOut = 2.0;

    /* '<S44>:206:5' */
    GesamtsystemAlt_DWork.magacin2++;

    /* '<S44>:206:6' */
  } else if ((GesamtsystemAlt_DWork.magacin1 == 1.0) ||
             (GesamtsystemAlt_DWork.magacin1 == 2.0)) {
    /* '<S44>:206:8' */
    /* '<S44>:206:9' */
    magacinOut = 1.0;

    /* '<S44>:206:10' */
    GesamtsystemAlt_DWork.magacin1++;

    /* '<S44>:206:11' */
  } else if (GesamtsystemAlt_DWork.magacin2 == 4.0) {
    /* '<S44>:206:13' */
    /* '<S44>:206:14' */
    magacinOut = 2.0;

    /* '<S44>:206:15' */
    GesamtsystemAlt_DWork.magacin2++;

    /* '<S44>:206:16' */
  } else if (GesamtsystemAlt_DWork.magacin0 == 4.0) {
    /* '<S44>:206:18' */
    /* '<S44>:206:19' */
    magacinOut = 0.0;

    /* '<S44>:206:20' */
    GesamtsystemAlt_DWork.magacin0++;

    /* '<S44>:206:21' */
  } else if (GesamtsystemAlt_DWork.magacin3 < 5.0) {
    /* '<S44>:206:23' */
    /* '<S44>:206:24' */
    magacinOut = 3.0;

    /* '<S44>:206:25' */
    GesamtsystemAlt_DWork.magacin3++;
  } else if (GesamtsystemAlt_DWork.magacin4 < 5.0) {
    /* '<S44>:206:27' */
    /* '<S44>:206:28' */
    magacinOut = 4.0;

    /* '<S44>:206:29' */
    GesamtsystemAlt_DWork.magacin4++;
  } else if (GesamtsystemAlt_DWork.magacin5 < 5.0) {
    /* '<S44>:206:31' */
    /* '<S44>:206:32' */
    magacinOut = 5.0;

    /* '<S44>:206:33' */
    GesamtsystemAlt_DWork.magacin5++;
  } else if (GesamtsystemAlt_DWork.magacin6 < 4.0) {
    /* '<S44>:206:35' */
    /* '<S44>:206:36' */
    magacinOut = 6.0;
  } else {
    /* '<S44>:206:39' */
    magacinOut = -1.0;
  }

  return magacinOut;
}

/* Function for Chart: '<S4>/Sortieralgorithmus2' */
static real_T GesamtsystemAlt_findPlaceForRed(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForRed': '<S44>:204' */
  if (GesamtsystemAlt_DWork.magacin1 == 0.0) {
    /* '<S44>:204:3' */
    /* '<S44>:204:4' */
    magacinOut = 1.0;

    /* '<S44>:204:5' */
    GesamtsystemAlt_DWork.magacin1++;

    /* '<S44>:204:6' */
  } else if ((GesamtsystemAlt_DWork.magacin2 == 2.0) ||
             (GesamtsystemAlt_DWork.magacin2 == 3.0)) {
    /* '<S44>:204:8' */
    /* '<S44>:204:9' */
    magacinOut = 2.0;

    /* '<S44>:204:10' */
    GesamtsystemAlt_DWork.magacin2++;

    /* '<S44>:204:11' */
  } else if (GesamtsystemAlt_DWork.magacin0 < 5.0) {
    /* '<S44>:204:13' */
    /* '<S44>:204:14' */
    magacinOut = 0.0;

    /* '<S44>:204:15' */
    GesamtsystemAlt_DWork.magacin0++;

    /* '<S44>:204:16' */
  } else if (GesamtsystemAlt_DWork.magacin1 >= 2.0) {
    /* '<S44>:204:19' */
    /* '<S44>:204:20' */
    magacinOut = 1.0;

    /* '<S44>:204:21' */
    GesamtsystemAlt_DWork.magacin1++;

    /* '<S44>:204:22' */
  } else if (GesamtsystemAlt_DWork.magacin3 != 5.0) {
    /* '<S44>:204:25' */
    /* '<S44>:204:26' */
    magacinOut = 3.0;

    /* '<S44>:204:27' */
    GesamtsystemAlt_DWork.magacin3++;

    /* '<S44>:204:28' */
  } else if ((GesamtsystemAlt_DWork.magacin1 <= GesamtsystemAlt_DWork.magacin4) &&
             (GesamtsystemAlt_DWork.magacin1 != 5.0)) {
    /* '<S44>:204:30' */
    /* '<S44>:204:31' */
    magacinOut = 1.0;

    /* '<S44>:204:32' */
    GesamtsystemAlt_DWork.magacin1++;

    /* '<S44>:204:33' */
  } else if (GesamtsystemAlt_DWork.magacin1 > GesamtsystemAlt_DWork.magacin4) {
    /* '<S44>:204:35' */
    /* '<S44>:204:36' */
    magacinOut = 4.0;

    /* '<S44>:204:37' */
    GesamtsystemAlt_DWork.magacin4++;
  } else if ((GesamtsystemAlt_DWork.magacin2 <= GesamtsystemAlt_DWork.magacin5) &&
             (GesamtsystemAlt_DWork.magacin2 != 5.0)) {
    /* '<S44>:204:40' */
    /* '<S44>:204:41' */
    magacinOut = 2.0;

    /* '<S44>:204:42' */
    GesamtsystemAlt_DWork.magacin2++;

    /* '<S44>:204:43' */
  } else if (GesamtsystemAlt_DWork.magacin2 > GesamtsystemAlt_DWork.magacin5) {
    /* '<S44>:204:45' */
    /* '<S44>:204:47' */
    magacinOut = 5.0;

    /* '<S44>:204:48' */
    GesamtsystemAlt_DWork.magacin5++;

    /* '<S44>:204:49' */
  } else if (GesamtsystemAlt_DWork.magacin6 < 4.0) {
    /* '<S44>:204:52' */
    /* '<S44>:204:53' */
    magacinOut = 6.0;
  } else {
    /* '<S44>:204:57' */
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

static void GesamtsystemA_SystemCore_delete(dsp_simulink_MovingAverage_Gesa *obj)
{
  Gesamtsystem_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingAverage_Gesa *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    GesamtsystemA_SystemCore_delete(obj);
  }
}

/* Model step function for TID0 */
void GesamtsystemAlt_step0(void)       /* Sample time: [2.0E-5s, 0.0s] */
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

  /* S-Function (c280xadc): '<S4>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  {
    AdcRegs.ADCTRL2.bit.RST_SEQ1 = 1;  /* Reset SEQ1 module*/
    AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;/*clear INT sequencer*/
    AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;  /* Software Trigger*/
    while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {
    }                                  /*Wait for Sequencer INT bit to clear */

    asm(" RPT #11 || NOP");
    GesamtsystemAlt_B.AnalogDigitalWandlungSampletime = (AdcRegs.ADCRESULT0) >>
      4;
    GesamtsystemAlt_B.AnalogDigitalWandlungSampleti_e = (AdcRegs.ADCRESULT1) >>
      4;
    GesamtsystemAlt_B.AnalogDigitalWandlungSampleti_a = (AdcRegs.ADCRESULT2) >>
      4;
  }

  /* RelationalOperator: '<S50>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S50>/Constant'
   */
  rtb_VergleichmitSchwellwert = (GesamtsystemAlt_P.Constant_Value <=
    GesamtsystemAlt_B.AnalogDigitalWandlungSampleti_a);

  /* MultiPortSwitch: '<S51>/Multiport Switch' incorporates:
   *  Constant: '<S51>/Constant1'
   *  Constant: '<S51>/either edge'
   *  Constant: '<S51>/neg. edge'
   *  Constant: '<S51>/pos. edge'
   */
  switch ((int16_T)GesamtsystemAlt_P.EdgeDetector1_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = GesamtsystemAlt_P.posedge_Value[0];
    rtb_MultiportSwitch_idx_1 = GesamtsystemAlt_P.posedge_Value[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = GesamtsystemAlt_P.negedge_Value[0];
    rtb_MultiportSwitch_idx_1 = GesamtsystemAlt_P.negedge_Value[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = GesamtsystemAlt_P.eitheredge_Value[0];
    rtb_MultiportSwitch_idx_1 = GesamtsystemAlt_P.eitheredge_Value[1];
    break;
  }

  /* End of MultiPortSwitch: '<S51>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S51>/POSITIVE Edge' */
  /* Memory: '<S51>/Memory' */
  GesamtsystemAl_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert, GesamtsystemAlt_DWork.Memory_PreviousInput,
    &GesamtsystemAlt_B.POSITIVEEdge);

  /* End of Outputs for SubSystem: '<S51>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S51>/NEGATIVE Edge' */
  GesamtsystemAl_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert, GesamtsystemAlt_DWork.Memory_PreviousInput,
    &GesamtsystemAlt_B.NEGATIVEEdge);

  /* End of Outputs for SubSystem: '<S51>/NEGATIVE Edge' */

  /* RelationalOperator: '<S50>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S50>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert_b =
    (GesamtsystemAlt_B.AnalogDigitalWandlungSampletime <=
     GesamtsystemAlt_P.HeuristischermittelterSchwellwe);

  /* MATLAB Function: '<S50>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S50>/Unit Delay3'
   *  UnitDelay: '<S50>/Unit Delay4'
   *  UnitDelay: '<S50>/Unit Delay5'
   */
  /* MATLAB Function 'Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2': '<S54>:1' */
  /* '<S54>:1:3' */
  y = 1.0;
  tmp_0 = !GesamtsystemAlt_DWork.UnitDelay3_DSTATE;
  tmp_1 = !GesamtsystemAlt_DWork.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S54>:1:7' */
    y = GesamtsystemAlt_DWork.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_b) {
    /* '<S54>:1:10' */
    /* '<S54>:1:11' */
    y = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_b)) {
    /* '<S54>:1:14' */
    /* '<S54>:1:15' */
    y = -1.0;
  }

  tmp_0 = (tmp_0 && GesamtsystemAlt_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S54>:1:22' */
    /* '<S54>:1:23' */
    y = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_b)
  {
    /* '<S54>:1:26' */
    /* '<S54>:1:27' */
    y = GesamtsystemAlt_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_b) {
    /* '<S54>:1:34' */
    /* '<S54>:1:35' */
    y = 1.0;
  }

  tmp_0 = (GesamtsystemAlt_DWork.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S54>:1:38' */
    /* '<S54>:1:39' */
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S54>:1:46' */
    /* '<S54>:1:47' */
    y = GesamtsystemAlt_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_b) {
    /* '<S54>:1:50' */
    /* '<S54>:1:51' */
    y = -1.0;
  }

  tmp_0 = (GesamtsystemAlt_DWork.UnitDelay3_DSTATE &&
           GesamtsystemAlt_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_b)
  {
    /* '<S54>:1:58' */
    /* '<S54>:1:59' */
    y = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S54>:1:62' */
    /* '<S54>:1:63' */
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_b) {
    /* '<S54>:1:66' */
    /* '<S54>:1:67' */
    y = GesamtsystemAlt_DWork.UnitDelay5_DSTATE;
  }

  if (y == 1.0) {
    /* '<S54>:1:70' */
    /* '<S54>:1:71' */
    GesamtsystemAlt_B.RL = 1.0;
  } else {
    /* '<S54>:1:73' */
    GesamtsystemAlt_B.RL = 0.0;
  }

  /* MATLAB Function: '<S50>/MATLAB Function1' incorporates:
   *  Logic: '<S51>/Logical Operator1'
   *  MATLAB Function: '<S50>/MATLAB Function2'
   *  Product: '<S50>/Product3'
   *  UnitDelay: '<S50>/Unit Delay1'
   */
  Gesamtsyste_MATLABFunction1((real_T)
    (GesamtsystemAlt_B.POSITIVEEdge.RelationalOperator1 ||
     GesamtsystemAlt_B.NEGATIVEEdge.RelationalOperator1) * y,
    GesamtsystemAlt_DWork.UnitDelay1_DSTATE,
    &GesamtsystemAlt_B.sf_MATLABFunction1);

  /* Product: '<S50>/Product1' incorporates:
   *  Constant: '<S50>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  rtb_Sum = GesamtsystemAlt_P.WinkelFlankePolulo3416V022Polul *
    GesamtsystemAlt_B.sf_MATLABFunction1.y;

  /* MultiPortSwitch: '<S52>/Multiport Switch' incorporates:
   *  Constant: '<S52>/Constant1'
   *  Constant: '<S52>/either edge'
   *  Constant: '<S52>/neg. edge'
   *  Constant: '<S52>/pos. edge'
   */
  switch ((int16_T)GesamtsystemAlt_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = GesamtsystemAlt_P.posedge_Value_i[0];
    rtb_MultiportSwitch_idx_1 = GesamtsystemAlt_P.posedge_Value_i[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = GesamtsystemAlt_P.negedge_Value_n[0];
    rtb_MultiportSwitch_idx_1 = GesamtsystemAlt_P.negedge_Value_n[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = GesamtsystemAlt_P.eitheredge_Value_h[0];
    rtb_MultiportSwitch_idx_1 = GesamtsystemAlt_P.eitheredge_Value_h[1];
    break;
  }

  /* End of MultiPortSwitch: '<S52>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S52>/POSITIVE Edge' */
  /* Memory: '<S52>/Memory' */
  GesamtsystemAl_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_b, GesamtsystemAlt_DWork.Memory_PreviousInput_k,
    &GesamtsystemAlt_B.POSITIVEEdge_m);

  /* End of Outputs for SubSystem: '<S52>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S52>/NEGATIVE Edge' */
  GesamtsystemAl_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_b, GesamtsystemAlt_DWork.Memory_PreviousInput_k,
    &GesamtsystemAlt_B.NEGATIVEEdge_n);

  /* End of Outputs for SubSystem: '<S52>/NEGATIVE Edge' */

  /* MATLAB Function: '<S50>/MATLAB Function3' incorporates:
   *  Logic: '<S52>/Logical Operator1'
   *  MATLAB Function: '<S50>/MATLAB Function2'
   *  Product: '<S50>/Product'
   *  UnitDelay: '<S50>/Unit Delay2'
   */
  Gesamtsyste_MATLABFunction1(y * (real_T)
    (GesamtsystemAlt_B.POSITIVEEdge_m.RelationalOperator1 ||
     GesamtsystemAlt_B.NEGATIVEEdge_n.RelationalOperator1),
    GesamtsystemAlt_DWork.UnitDelay2_DSTATE,
    &GesamtsystemAlt_B.sf_MATLABFunction3);

  /* Sum: '<S50>/Sum' incorporates:
   *  Constant: '<S50>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S50>/Product2'
   */
  rtb_Sum += GesamtsystemAlt_B.sf_MATLABFunction3.y *
    GesamtsystemAlt_P.WinkelFlankePolulo3416V022Pol_l;

  /* RateTransition: '<S46>/Rate Transition3' */
  if (GesamtsystemAlt_M->Timing.RateInteraction.TID0_1) {
    GesamtsystemAlt_B.RateTransition3 = rtb_Sum;

    /* RateTransition: '<S4>/Rate Transition3' */
    GesamtsystemAlt_B.RateTransition3_d =
      GesamtsystemAlt_B.AnalogDigitalWandlungSampleti_e;
  }

  /* End of RateTransition: '<S46>/Rate Transition3' */

  /* S-Function (c280xgpio_do): '<S46>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (GesamtsystemAlt_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Update for Memory: '<S51>/Memory' */
  GesamtsystemAlt_DWork.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S50>/Unit Delay3' */
  GesamtsystemAlt_DWork.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S50>/Unit Delay4' */
  GesamtsystemAlt_DWork.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert_b;

  /* Update for UnitDelay: '<S50>/Unit Delay5' incorporates:
   *  MATLAB Function: '<S50>/MATLAB Function2'
   */
  GesamtsystemAlt_DWork.UnitDelay5_DSTATE = y;

  /* Update for UnitDelay: '<S50>/Unit Delay1' */
  GesamtsystemAlt_DWork.UnitDelay1_DSTATE =
    GesamtsystemAlt_B.sf_MATLABFunction1.y;

  /* Update for Memory: '<S52>/Memory' */
  GesamtsystemAlt_DWork.Memory_PreviousInput_k = rtb_VergleichmitSchwellwert_b;

  /* Update for UnitDelay: '<S50>/Unit Delay2' */
  GesamtsystemAlt_DWork.UnitDelay2_DSTATE =
    GesamtsystemAlt_B.sf_MATLABFunction3.y;
}

/* Model step function for TID1 */
void GesamtsystemAlt_step1(void)       /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_y_b;
  real_T rtb_ZM_pwm_out;
  real_T rtb_Product_i;
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

  /* RateTransition: '<S18>/Rate Transition' */
  GesamtsystemAlt_DWork.RateTransition_semaphoreTaken =
    GesamtsystemAlt_DWork.RateTransition_ActiveBufIdx;
  j = GesamtsystemAlt_DWork.RateTransition_semaphoreTaken * 20;
  for (i = 0; i < 20; i++) {
    GesamtsystemAlt_B.RateTransition[i] =
      GesamtsystemAlt_DWork.RateTransition_Buffer[i + j];
  }

  /* End of RateTransition: '<S18>/Rate Transition' */

  /* Chart: '<S18>/Chart8' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8 */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8 */
  if (GesamtsystemAlt_DWork.is_active_c17_GesamtsystemAlt == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8 */
    GesamtsystemAlt_DWork.is_active_c17_GesamtsystemAlt = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8 */
    /* Transition: '<S33>:3' */
    GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt = GesamtsystemAlt_IN_init;

    /* Entry 'init': '<S33>:2' */
    GesamtsystemAlt_DWork.values_out1[0] = 0;
    GesamtsystemAlt_DWork.values_out1[1] = 0;
    GesamtsystemAlt_DWork.values_out1[2] = 0;
    GesamtsystemAlt_DWork.values_out1[3] = 0;
    GesamtsystemAlt_DWork.values_out1[4] = 0;
    GesamtsystemAlt_DWork.values_out1[5] = 0;
    GesamtsystemAlt_DWork.values_out1[6] = 0;
    GesamtsystemAlt_DWork.values_out1[7] = 0;
    GesamtsystemAlt_DWork.values_out1[8] = 0;
    GesamtsystemAlt_DWork.values_out1[9] = 0;
    GesamtsystemAlt_DWork.values_out1[10] = 0;
    GesamtsystemAlt_DWork.values_out1[11] = 0;
    GesamtsystemAlt_DWork.values_out1[12] = 0;
    GesamtsystemAlt_DWork.values_out1[13] = 0;
    GesamtsystemAlt_DWork.values_out1[14] = 0;
    GesamtsystemAlt_DWork.values_out1[15] = 0;
    GesamtsystemAlt_DWork.values_out1[16] = 0;
    GesamtsystemAlt_DWork.values_out1[17] = 0;
    GesamtsystemAlt_DWork.values_out1[18] = 0;
    GesamtsystemAlt_DWork.values_out1[19] = 0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt) {
     case IN_Anfang_found_Schritt_uebertr:
      /* During 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S33>:126' */
      if ((c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
            (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
              (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                  (GesamtsystemAlt_DWork.values_out1[GesamtsystemAlt_DWork.search],
                   GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.search, 1)]),
                  GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAlt_DWork.search, 2)]),
                 GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAlt_DWork.search, 3)]),
                GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAlt_DWork.search, 4)]),
               GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAlt_DWork.search, 5)]),
              GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAlt_DWork.search, 6)]),
             GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAlt_DWork.search, 7)]),
            GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
            (GesamtsystemAlt_DWork.search, 8)]) ==
           GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAlt_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.values_out1[GesamtsystemAlt_DWork.search],
                    GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAlt_DWork.search, 1)]),
                   GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.search, 2)]),
                  GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAlt_DWork.search, 3)]),
                 GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAlt_DWork.search, 4)]),
                GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAlt_DWork.search, 5)]),
               GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAlt_DWork.search, 6)]),
              GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAlt_DWork.search, 7)]),
             GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAlt_DWork.search, 8)]), 256) ==
           GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAlt_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.values_out1[GesamtsystemAlt_DWork.search],
                    GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAlt_DWork.search, 1)]),
                   GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.search, 2)]),
                  GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAlt_DWork.search, 3)]),
                 GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAlt_DWork.search, 4)]),
                GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAlt_DWork.search, 5)]),
               GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAlt_DWork.search, 6)]),
              GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAlt_DWork.search, 7)]),
             GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAlt_DWork.search, 8)]), 512) ==
           GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAlt_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.values_out1[GesamtsystemAlt_DWork.search],
                    GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAlt_DWork.search, 1)]),
                   GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.search, 2)]),
                  GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAlt_DWork.search, 3)]),
                 GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAlt_DWork.search, 4)]),
                GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAlt_DWork.search, 5)]),
               GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAlt_DWork.search, 6)]),
              GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAlt_DWork.search, 7)]),
             GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAlt_DWork.search, 8)]), 1536) ==
           GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAlt_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.values_out1[GesamtsystemAlt_DWork.search],
                    GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAlt_DWork.search, 1)]),
                   GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.search, 2)]),
                  GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAlt_DWork.search, 3)]),
                 GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAlt_DWork.search, 4)]),
                GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAlt_DWork.search, 5)]),
               GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAlt_DWork.search, 6)]),
              GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAlt_DWork.search, 7)]),
             GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAlt_DWork.search, 8)]), 1280) ==
           GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAlt_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.values_out1[GesamtsystemAlt_DWork.search],
                    GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAlt_DWork.search, 1)]),
                   GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.search, 2)]),
                  GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAlt_DWork.search, 3)]),
                 GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAlt_DWork.search, 4)]),
                GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAlt_DWork.search, 5)]),
               GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAlt_DWork.search, 6)]),
              GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAlt_DWork.search, 7)]),
             GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAlt_DWork.search, 8)]), 1024) ==
           GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAlt_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.values_out1[GesamtsystemAlt_DWork.search],
                    GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAlt_DWork.search, 1)]),
                   GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.search, 2)]),
                  GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAlt_DWork.search, 3)]),
                 GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAlt_DWork.search, 4)]),
                GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAlt_DWork.search, 5)]),
               GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAlt_DWork.search, 6)]),
              GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAlt_DWork.search, 7)]),
             GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAlt_DWork.search, 8)]), 768) ==
           GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAlt_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.values_out1[GesamtsystemAlt_DWork.search],
                    GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAlt_DWork.search, 1)]),
                   GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAlt_DWork.search, 2)]),
                  GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAlt_DWork.search, 3)]),
                 GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAlt_DWork.search, 4)]),
                GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAlt_DWork.search, 5)]),
               GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAlt_DWork.search, 6)]),
              GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAlt_DWork.search, 7)]),
             GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAlt_DWork.search, 8)]), 1792) ==
           GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAlt_DWork.search, 9)])) {
        /* Transition: '<S33>:144' */
        /* Transition: '<S33>:145' */
        /* Transition: '<S33>:146' */
        /* Transition: '<S33>:151' */
        /* Transition: '<S33>:150' */
        /* Transition: '<S33>:149' */
        /* Transition: '<S33>:147' */
        /* Transition: '<S33>:156' */
        GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt =
          Gesamts_IN_x5_valid_data_found1;

        /* Entry 'x5_valid_data_found1': '<S33>:148' */
        GesamtsystemAlt_B.valid_values1 =
          GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAlt_DWork.search, 1)];
        GesamtsystemAlt_B.valid_values2 =
          GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAlt_DWork.search, 2)];
        GesamtsystemAlt_B.valid_values3 =
          GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAlt_DWork.search, 3)];
        GesamtsystemAlt_B.valid_values4 =
          GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAlt_DWork.search, 4)];
        GesamtsystemAlt_B.valid_values5 =
          GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAlt_DWork.search, 5)];
        GesamtsystemAlt_B.valid_values6 =
          GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAlt_DWork.search, 6)];
        GesamtsystemAlt_B.valid_values7 =
          GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAlt_DWork.search, 7)];
        GesamtsystemAlt_B.valid_values8 =
          GesamtsystemAlt_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAlt_DWork.search, 8)];
        GesamtsystemAlt_DWork.zaehler = c28x_add_s32_s32_s32_sat
          (GesamtsystemAlt_DWork.zaehler, 1L);
      } else {
        /* Transition: '<S33>:135' */
        GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt =
          GesamtsystemAlt_IN_x1_search1;

        /* Entry 'x1_search1': '<S33>:125' */
        GesamtsystemAlt_DWork.search = c28x_add_s16_s16_s16_sat
          (GesamtsystemAlt_DWork.search, 1);
      }
      break;

     case GesamtsystemAlt_IN_init:
      /* During 'init': '<S33>:2' */
      /* Transition: '<S33>:112' */
      GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt =
        GesamtsystemAlt_IN_wert_erkannt;
      Gesam_enter_atomic_wert_erkannt();
      break;

     case GesamtsystemAlt_IN_wert_erkannt:
      /* During 'wert_erkannt': '<S33>:109' */
      /* Transition: '<S33>:116' */
      GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt =
        GesamtsystemAl_IN_wert_erkannt2;

      /* Entry 'wert_erkannt2': '<S33>:115' */
      GesamtsystemAlt_DWork.search = 0;
      GesamtsystemAlt_DWork.counter = c28x_add_s32_s32_s32_sat
        (GesamtsystemAlt_DWork.counter, 1L);
      break;

     case GesamtsystemAl_IN_wert_erkannt2:
      /* During 'wert_erkannt2': '<S33>:115' */
      if (GesamtsystemAlt_DWork.values_out1[GesamtsystemAlt_DWork.search] == 88)
      {
        /* Transition: '<S33>:127' */
        GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt =
          IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S33>:126' */
        GesamtsystemAlt_DWork.x_found = c28x_add_s32_s32_s32_sat
          (GesamtsystemAlt_DWork.x_found, 1L);
      } else {
        /* Transition: '<S33>:128' */
        GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt =
          GesamtsystemAlt_IN_x1_search1;

        /* Entry 'x1_search1': '<S33>:125' */
        GesamtsystemAlt_DWork.search = c28x_add_s16_s16_s16_sat
          (GesamtsystemAlt_DWork.search, 1);
      }
      break;

     case GesamtsystemAlt_IN_x1_search1:
      /* During 'x1_search1': '<S33>:125' */
      if (GesamtsystemAlt_DWork.values_out1[GesamtsystemAlt_DWork.search] == 88)
      {
        /* Transition: '<S33>:129' */
        GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt =
          IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S33>:126' */
        GesamtsystemAlt_DWork.x_found = c28x_add_s32_s32_s32_sat
          (GesamtsystemAlt_DWork.x_found, 1L);
      } else if (GesamtsystemAlt_DWork.search < 19) {
        /* Transition: '<S33>:130' */
        GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt =
          GesamtsystemAlt_IN_x1_search1;

        /* Entry 'x1_search1': '<S33>:125' */
        GesamtsystemAlt_DWork.search = c28x_add_s16_s16_s16_sat
          (GesamtsystemAlt_DWork.search, 1);
      } else {
        /* Transition: '<S33>:133' */
        GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt =
          GesamtsystemAlt_IN_wert_erkannt;
        Gesam_enter_atomic_wert_erkannt();
      }
      break;

     default:
      /* During 'x5_valid_data_found1': '<S33>:148' */
      /* Transition: '<S33>:152' */
      GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt =
        GesamtsystemAlt_IN_wert_erkannt;
      Gesam_enter_atomic_wert_erkannt();
      break;
    }
  }

  /* End of Chart: '<S18>/Chart8' */

  /* S-Function (scominttobit): '<S18>/Integer to Bit Converter2' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAlt_B.valid_values1;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter2[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S18>/Integer to Bit Converter2' */

  /* S-Function (scominttobit): '<S18>/Integer to Bit Converter3' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAlt_B.valid_values2;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter3[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S18>/Integer to Bit Converter3' */

  /* Chart: '<S18>/Chart6' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart6 */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart6 */
  if (GesamtsystemAlt_DWork.is_active_c16_GesamtsystemAlt == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart6 */
    GesamtsystemAlt_DWork.is_active_c16_GesamtsystemAlt = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart6 */
    /* Transition: '<S32>:3' */
    GesamtsystemAlt_DWork.is_c16_GesamtsystemAlt = GesamtsystemAlt_IN_x0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c16_GesamtsystemAlt) {
     case GesamtsystemA_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S32>:17' */
      /* Transition: '<S32>:24' */
      GesamtsystemAlt_DWork.is_c16_GesamtsystemAlt = GesamtsystemAlt_IN_x1_1;

      /* Entry 'x1_1': '<S32>:26' */
      GesamtsystemAlt_B.int16x_bin[0] = rtb_IntegertoBitConverter2[0];
      GesamtsystemAlt_B.int16x_bin[1] = rtb_IntegertoBitConverter2[1];
      GesamtsystemAlt_B.int16x_bin[2] = rtb_IntegertoBitConverter2[2];
      GesamtsystemAlt_B.int16x_bin[3] = rtb_IntegertoBitConverter2[3];
      GesamtsystemAlt_B.int16x_bin[4] = rtb_IntegertoBitConverter2[4];
      GesamtsystemAlt_B.int16x_bin[5] = rtb_IntegertoBitConverter2[5];
      GesamtsystemAlt_B.int16x_bin[6] = rtb_IntegertoBitConverter2[6];
      GesamtsystemAlt_B.int16x_bin[7] = rtb_IntegertoBitConverter2[7];
      GesamtsystemAlt_B.int16x_bin[8] = rtb_IntegertoBitConverter3[0];
      GesamtsystemAlt_B.int16x_bin[9] = rtb_IntegertoBitConverter3[1];
      GesamtsystemAlt_B.int16x_bin[10] = rtb_IntegertoBitConverter3[2];
      GesamtsystemAlt_B.int16x_bin[11] = rtb_IntegertoBitConverter3[3];
      GesamtsystemAlt_B.int16x_bin[12] = rtb_IntegertoBitConverter3[4];
      GesamtsystemAlt_B.int16x_bin[13] = rtb_IntegertoBitConverter3[5];
      GesamtsystemAlt_B.int16x_bin[14] = rtb_IntegertoBitConverter3[6];
      GesamtsystemAlt_B.int16x_bin[15] = rtb_IntegertoBitConverter3[7];
      break;

     case GesamtsystemAlt_IN_x0:
      /* During 'x0': '<S32>:2' */
      /* Transition: '<S32>:7' */
      GesamtsystemAlt_DWork.is_c16_GesamtsystemAlt =
        GesamtsystemA_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S32>:26' */
      /* Transition: '<S32>:25' */
      GesamtsystemAlt_DWork.is_c16_GesamtsystemAlt =
        GesamtsystemA_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S18>/Chart6' */

  /* S-Function (scominttobit): '<S18>/Bit to Integer Converter' */
  /* Bit to Integer Conversion */
  bitIdx = 0L;
  intVal = 0L;
  for (j = 0; j < 16; j++) {
    /* Input bit order is MSB first */
    intVal <<= 1UL;
    intVal |= (int32_T)(real32_T)floor(GesamtsystemAlt_B.int16x_bin[bitIdx]);
    if ((j == 0) && (intVal != 0L)) {
      /* Output Integer values are signed, do sign extension */
      intVal = -1L;
    }

    bitIdx++;
  }

  /* Gain: '<S18>/x in mm' incorporates:
   *  S-Function (scominttobit): '<S18>/Bit to Integer Converter'
   */
  rtb_Product_i = (real_T)GesamtsystemAlt_P.xinmm_Gain * (real32_T)intVal;

  /* Rounding: '<S18>/Rounding Function' */
  rtb_RoundingFunction = rt_roundd_snf(rtb_Product_i);

  /* S-Function (scominttobit): '<S18>/Integer to Bit Converter1' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAlt_B.valid_values3;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter1[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S18>/Integer to Bit Converter1' */

  /* S-Function (scominttobit): '<S18>/Integer to Bit Converter4' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAlt_B.valid_values4;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter4[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S18>/Integer to Bit Converter4' */

  /* Chart: '<S18>/Chart2' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart2 */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart2 */
  if (GesamtsystemAlt_DWork.is_active_c13_GesamtsystemAlt == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart2 */
    GesamtsystemAlt_DWork.is_active_c13_GesamtsystemAlt = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart2 */
    /* Transition: '<S30>:3' */
    GesamtsystemAlt_DWork.is_c13_GesamtsystemAlt = GesamtsystemAlt_IN_x0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c13_GesamtsystemAlt) {
     case GesamtsystemA_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S30>:17' */
      /* Transition: '<S30>:24' */
      GesamtsystemAlt_DWork.is_c13_GesamtsystemAlt = GesamtsystemAlt_IN_x1_1;

      /* Entry 'x1_1': '<S30>:26' */
      GesamtsystemAlt_B.int16y_bin[0] = rtb_IntegertoBitConverter1[0];
      GesamtsystemAlt_B.int16y_bin[1] = rtb_IntegertoBitConverter1[1];
      GesamtsystemAlt_B.int16y_bin[2] = rtb_IntegertoBitConverter1[2];
      GesamtsystemAlt_B.int16y_bin[3] = rtb_IntegertoBitConverter1[3];
      GesamtsystemAlt_B.int16y_bin[4] = rtb_IntegertoBitConverter1[4];
      GesamtsystemAlt_B.int16y_bin[5] = rtb_IntegertoBitConverter1[5];
      GesamtsystemAlt_B.int16y_bin[6] = rtb_IntegertoBitConverter1[6];
      GesamtsystemAlt_B.int16y_bin[7] = rtb_IntegertoBitConverter1[7];
      GesamtsystemAlt_B.int16y_bin[8] = rtb_IntegertoBitConverter4[0];
      GesamtsystemAlt_B.int16y_bin[9] = rtb_IntegertoBitConverter4[1];
      GesamtsystemAlt_B.int16y_bin[10] = rtb_IntegertoBitConverter4[2];
      GesamtsystemAlt_B.int16y_bin[11] = rtb_IntegertoBitConverter4[3];
      GesamtsystemAlt_B.int16y_bin[12] = rtb_IntegertoBitConverter4[4];
      GesamtsystemAlt_B.int16y_bin[13] = rtb_IntegertoBitConverter4[5];
      GesamtsystemAlt_B.int16y_bin[14] = rtb_IntegertoBitConverter4[6];
      GesamtsystemAlt_B.int16y_bin[15] = rtb_IntegertoBitConverter4[7];
      break;

     case GesamtsystemAlt_IN_x0:
      /* During 'x0': '<S30>:2' */
      /* Transition: '<S30>:7' */
      GesamtsystemAlt_DWork.is_c13_GesamtsystemAlt =
        GesamtsystemA_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S30>:26' */
      /* Transition: '<S30>:25' */
      GesamtsystemAlt_DWork.is_c13_GesamtsystemAlt =
        GesamtsystemA_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S18>/Chart2' */

  /* S-Function (scominttobit): '<S18>/Bit to Integer Converter1' */
  /* Bit to Integer Conversion */
  bitIdx = 0L;
  intVal = 0L;
  for (j = 0; j < 16; j++) {
    /* Input bit order is MSB first */
    intVal <<= 1UL;
    intVal |= (int32_T)(real32_T)floor(GesamtsystemAlt_B.int16y_bin[bitIdx]);
    if ((j == 0) && (intVal != 0L)) {
      /* Output Integer values are signed, do sign extension */
      intVal = -1L;
    }

    bitIdx++;
  }

  /* Gain: '<S18>/y in mm' incorporates:
   *  S-Function (scominttobit): '<S18>/Bit to Integer Converter1'
   */
  rtb_Product_i = (real_T)GesamtsystemAlt_P.yinmm_Gain * (real32_T)intVal;

  /* Rounding: '<S18>/Rounding Function1' */
  rtb_RoundingFunction1 = rt_roundd_snf(rtb_Product_i);

  /* S-Function (scominttobit): '<S18>/Integer to Bit Converter5' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAlt_B.valid_values5;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter5[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S18>/Integer to Bit Converter5' */

  /* S-Function (scominttobit): '<S18>/Integer to Bit Converter6' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAlt_B.valid_values6;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter6[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S18>/Integer to Bit Converter6' */

  /* Chart: '<S18>/Chart4' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart4 */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart4 */
  if (GesamtsystemAlt_DWork.is_active_c14_GesamtsystemAlt == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart4 */
    GesamtsystemAlt_DWork.is_active_c14_GesamtsystemAlt = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart4 */
    /* Transition: '<S31>:3' */
    GesamtsystemAlt_DWork.is_c14_GesamtsystemAlt = GesamtsystemAlt_IN_x0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c14_GesamtsystemAlt) {
     case GesamtsystemA_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S31>:17' */
      /* Transition: '<S31>:24' */
      GesamtsystemAlt_DWork.is_c14_GesamtsystemAlt = GesamtsystemAlt_IN_x1_1;

      /* Entry 'x1_1': '<S31>:26' */
      GesamtsystemAlt_B.int16a1_bin[0] = rtb_IntegertoBitConverter5[0];
      GesamtsystemAlt_B.int16a1_bin[1] = rtb_IntegertoBitConverter5[1];
      GesamtsystemAlt_B.int16a1_bin[2] = rtb_IntegertoBitConverter5[2];
      GesamtsystemAlt_B.int16a1_bin[3] = rtb_IntegertoBitConverter5[3];
      GesamtsystemAlt_B.int16a1_bin[4] = rtb_IntegertoBitConverter5[4];
      GesamtsystemAlt_B.int16a1_bin[5] = rtb_IntegertoBitConverter5[5];
      GesamtsystemAlt_B.int16a1_bin[6] = rtb_IntegertoBitConverter5[6];
      GesamtsystemAlt_B.int16a1_bin[7] = rtb_IntegertoBitConverter5[7];
      GesamtsystemAlt_B.int16a1_bin[8] = rtb_IntegertoBitConverter6[0];
      GesamtsystemAlt_B.int16a1_bin[9] = rtb_IntegertoBitConverter6[1];
      GesamtsystemAlt_B.int16a1_bin[10] = rtb_IntegertoBitConverter6[2];
      GesamtsystemAlt_B.int16a1_bin[11] = rtb_IntegertoBitConverter6[3];
      GesamtsystemAlt_B.int16a1_bin[12] = rtb_IntegertoBitConverter6[4];
      GesamtsystemAlt_B.int16a1_bin[13] = rtb_IntegertoBitConverter6[5];
      GesamtsystemAlt_B.int16a1_bin[14] = rtb_IntegertoBitConverter6[6];
      GesamtsystemAlt_B.int16a1_bin[15] = rtb_IntegertoBitConverter6[7];
      break;

     case GesamtsystemAlt_IN_x0:
      /* During 'x0': '<S31>:2' */
      /* Transition: '<S31>:7' */
      GesamtsystemAlt_DWork.is_c14_GesamtsystemAlt =
        GesamtsystemA_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S31>:26' */
      /* Transition: '<S31>:25' */
      GesamtsystemAlt_DWork.is_c14_GesamtsystemAlt =
        GesamtsystemA_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S18>/Chart4' */

  /* S-Function (scominttobit): '<S18>/Bit to Integer Converter2' */
  /* Bit to Integer Conversion */
  bitIdx = 0L;
  intVal = 0L;
  for (j = 0; j < 16; j++) {
    /* Input bit order is MSB first */
    intVal <<= 1UL;
    intVal |= (int32_T)(real32_T)floor(GesamtsystemAlt_B.int16a1_bin[bitIdx]);
    if ((j == 0) && (intVal != 0L)) {
      /* Output Integer values are signed, do sign extension */
      intVal = -1L;
    }

    bitIdx++;
  }

  /* Gain: '<S18>/alpha in °' incorporates:
   *  S-Function (scominttobit): '<S18>/Bit to Integer Converter2'
   */
  rtb_Product_i = (real_T)GesamtsystemAlt_P.alphain_Gain * (real32_T)intVal;

  /* Chart: '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' incorporates:
   *  Rounding: '<S18>/Rounding Function2'
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
  if (GesamtsystemAlt_DWork.is_active_c4_GesamtsystemAlt == 0U) {
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
    GesamtsystemAlt_DWork.is_active_c4_GesamtsystemAlt = 1U;

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
    /* Transition: '<S15>:1427' */
    GesamtsystemAlt_DWork.is_c4_GesamtsystemAlt =
      Gesamtsyste_IN_Einstellung_Init;

    /* Entry 'Einstellung_Init': '<S15>:1430' */
    GesamtsystemAlt_DWork.r_Versatz_Nexo = 10.0;
    GesamtsystemAlt_DWork.phi_Versatz_Nexo = 30.0;
    GesamtsystemAlt_DWork.psi_Offset_Nexo = 13.0;
  } else if (GesamtsystemAlt_DWork.is_c4_GesamtsystemAlt == 1U) {
    /* During 'Einstellung_Init': '<S15>:1430' */
    /* Transition: '<S15>:1429' */
    GesamtsystemAlt_DWork.is_c4_GesamtsystemAlt =
      GesamtsystemAl_IN_Konvertierung;

    /* Entry 'Konvertierung': '<S15>:1428' */
    GesamtsystemAlt_B.alpha_Wagen = rt_roundd_snf(rtb_Product_i) -
      GesamtsystemAlt_DWork.psi_Offset_Nexo;
    GesamtsystemAlt_B.x_Wagen = rtb_RoundingFunction - rt_roundd_snf(cos
      ((GesamtsystemAlt_DWork.phi_Versatz_Nexo + GesamtsystemAlt_B.alpha_Wagen) *
       2.0 * 3.1415926535897931 / 360.0) * GesamtsystemAlt_DWork.r_Versatz_Nexo);
    GesamtsystemAlt_B.y_Wagen = rtb_RoundingFunction1 - rt_roundd_snf(sin
      ((GesamtsystemAlt_DWork.phi_Versatz_Nexo + GesamtsystemAlt_B.alpha_Wagen) *
       2.0 * 3.1415926535897931 / 360.0) * GesamtsystemAlt_DWork.r_Versatz_Nexo);
  } else {
    /* During 'Konvertierung': '<S15>:1428' */
    GesamtsystemAlt_B.alpha_Wagen = rt_roundd_snf(rtb_Product_i) -
      GesamtsystemAlt_DWork.psi_Offset_Nexo;
    rtb_Zeitinsec = (GesamtsystemAlt_DWork.phi_Versatz_Nexo +
                     GesamtsystemAlt_B.alpha_Wagen) * 2.0 * 3.1415926535897931 /
      360.0;
    GesamtsystemAlt_B.x_Wagen = rtb_RoundingFunction - rt_roundd_snf(cos
      (rtb_Zeitinsec) * GesamtsystemAlt_DWork.r_Versatz_Nexo);
    GesamtsystemAlt_B.y_Wagen = rtb_RoundingFunction1 - rt_roundd_snf(sin
      (rtb_Zeitinsec) * GesamtsystemAlt_DWork.r_Versatz_Nexo);
  }

  /* End of Chart: '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */

  /* S-Function (c280xgpio_di): '<S13>/Signaleingang fuer Heckschalter' */
  {
    GesamtsystemAlt_B.SignaleingangfuerHeckschalter =
      GpioDataRegs.GPADAT.bit.GPIO24;
  }

  /* Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  if (GesamtsystemAlt_DWork.temporalCounter_i1_g < MAX_uint32_T) {
    GesamtsystemAlt_DWork.temporalCounter_i1_g++;
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
  if (GesamtsystemAlt_DWork.is_active_c5_GesamtsystemAlt == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Fahrablaufsteuerung
       [Init: Zielradius = 10mm]
       Gang = 0: vorwaerts
       Gang = 1: rueckwaerts
       Folgende Werte fuer den Ablauf
       sind einstellbar:
       - Zielkoordinatenwerte
       - Gangwert (außer bei "Ende") */
    GesamtsystemAlt_DWork.is_active_c5_GesamtsystemAlt = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Fahrablaufsteuerung
       [Init: Zielradius = 10mm]
       Gang = 0: vorwaerts
       Gang = 1: rueckwaerts
       Folgende Werte fuer den Ablauf
       sind einstellbar:
       - Zielkoordinatenwerte
       - Gangwert (außer bei "Ende") */
    /* Transition: '<S14>:1325' */
    GesamtsystemAlt_DWork.is_c5_GesamtsystemAlt =
      Gesam_IN_Start_Einstellung_Init;

    /* Entry 'Start_Einstellung_Init': '<S14>:1324' */
    GesamtsystemAlt_B.Zielradius = 30.0;
    GesamtsystemAlt_B.Wartezeit = 10.0;
    GesamtsystemAlt_DWork.x_Uebergabe = 1390.0;
    GesamtsystemAlt_DWork.y_Uebergabe = 50.0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c5_GesamtsystemAlt) {
     case GesamtsystemAlt_IN_Ende:
      /* During 'Ende': '<S14>:132' */
      break;

     case GesamtsystemAlt_IN_Parken:
      /* During 'Parken': '<S14>:1773' */
      if (GesamtsystemAlt_DWork.Counter == 3.0) {
        /* Transition: '<S14>:795' */
        /* Exit Internal 'Parken': '<S14>:1773' */
        GesamtsystemAlt_DWork.is_Parken = Gesamtsystem_IN_NO_ACTIVE_CHILD;
        GesamtsystemAlt_DWork.is_c5_GesamtsystemAlt = GesamtsystemAlt_IN_Ende;

        /* Entry 'Ende': '<S14>:132' */
        GesamtsystemAlt_B.Gang = 2.0;
      } else {
        switch (GesamtsystemAlt_DWork.is_Parken) {
         case GesamtsystemAlt_IN_Parken_1:
          /* During 'Parken_1': '<S14>:1780' */
          if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
               GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
                GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
            /* Transition: '<S14>:1775' */
            GesamtsystemAlt_DWork.is_Parken = GesamtsystemAlt_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S14>:1781' */
            GesamtsystemAlt_DWork.Counter++;
          }
          break;

         case GesamtsystemAlt_IN_Parken_2:
          /* During 'Parken_2': '<S14>:1782' */
          if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
               GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
                GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
            /* Transition: '<S14>:1777' */
            GesamtsystemAlt_DWork.is_Parken = GesamtsystemAlt_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S14>:1783' */
            GesamtsystemAlt_DWork.Counter++;
          }
          break;

         case GesamtsystemAlt_IN_Parken_3:
          /* During 'Parken_3': '<S14>:1784' */
          if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
               GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
                GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
            /* Transition: '<S14>:1779' */
            GesamtsystemAlt_DWork.is_Parken = GesamtsystemAlt_IN_Wechsel_3;

            /* Entry 'Wechsel_3': '<S14>:1785' */
            GesamtsystemAlt_DWork.Counter++;
          }
          break;

         case GesamtsystemAlt_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S14>:1781' */
          /* Transition: '<S14>:1776' */
          GesamtsystemAlt_DWork.is_Parken = GesamtsystemAlt_IN_Parken_2;

          /* Entry 'Parken_2': '<S14>:1782' */
          GesamtsystemAlt_B.x_soll = 1610.0;
          GesamtsystemAlt_B.y_soll = -190.0;
          break;

         case GesamtsystemAlt_IN_Wechsel_2:
          /* During 'Wechsel_2': '<S14>:1783' */
          /* Transition: '<S14>:1778' */
          GesamtsystemAlt_DWork.is_Parken = GesamtsystemAlt_IN_Parken_3;

          /* Entry 'Parken_3': '<S14>:1784' */
          GesamtsystemAlt_B.x_soll = 1660.0;
          GesamtsystemAlt_B.y_soll = -175.0;
          break;

         default:
          /* During 'Wechsel_3': '<S14>:1785' */
          break;
        }
      }
      break;

     case GesamtsystemAlt_IN_Sammeln:
      GesamtsystemAlt_Sammeln();
      break;

     case Gesam_IN_Start_Einstellung_Init:
      GesamtsystemAlt_B.Zielradius = 30.0;

      /* During 'Start_Einstellung_Init': '<S14>:1324' */
      /* Transition: '<S14>:244' */
      GesamtsystemAlt_B.Gang = 0.0;
      GesamtsystemAlt_DWork.is_c5_GesamtsystemAlt = GesamtsystemAlt_IN_Sammeln;

      /* Entry Internal 'Sammeln': '<S14>:1722' */
      /* Transition: '<S14>:1723' */
      GesamtsystemAlt_DWork.Counter = 0.0;
      GesamtsystemAlt_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_1;

      /* Entry 'Anfahrpunkt_1': '<S14>:1749' */
      GesamtsystemAlt_B.x_soll = 1500.0;
      GesamtsystemAlt_B.y_soll = 0.0;
      break;

     default:
      /* During 'Uebergabe': '<S14>:1340' */
      if (GesamtsystemAlt_DWork.Counter == 2.0) {
        /* Transition: '<S14>:1326' */
        GesamtsystemAlt_B.Gang = 0.0;

        /* Exit Internal 'Uebergabe': '<S14>:1340' */
        GesamtsystemAlt_DWork.is_Uebergabe = Gesamtsystem_IN_NO_ACTIVE_CHILD;
        GesamtsystemAlt_DWork.is_c5_GesamtsystemAlt = GesamtsystemAlt_IN_Parken;

        /* Entry Internal 'Parken': '<S14>:1773' */
        /* Transition: '<S14>:1774' */
        GesamtsystemAlt_DWork.Counter = 0.0;
        GesamtsystemAlt_DWork.is_Parken = GesamtsystemAlt_IN_Parken_1;

        /* Entry 'Parken_1': '<S14>:1780' */
        GesamtsystemAlt_B.x_soll = GesamtsystemAlt_DWork.x_Uebergabe;
        GesamtsystemAlt_B.y_soll = -50.0;
      } else {
        switch (GesamtsystemAlt_DWork.is_Uebergabe) {
         case Ge_IN_Uebergabepunkt_x_Richtung:
          /* During 'Uebergabepunkt_x_Richtung': '<S14>:1346' */
          if ((fabs(GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen) <=
               GesamtsystemAlt_B.Zielradius) && (fabs(GesamtsystemAlt_B.y_soll -
                GesamtsystemAlt_B.y_Wagen) <= GesamtsystemAlt_B.Zielradius)) {
            /* Transition: '<S14>:1342' */
            GesamtsystemAlt_DWork.x_least = GesamtsystemAlt_B.x_soll;
            GesamtsystemAlt_DWork.is_Uebergabe = GesamtsystemAlt_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S14>:1347' */
            GesamtsystemAlt_DWork.Counter++;
          }
          break;

         case Ge_IN_Uebergabepunkt_y_Richtung:
          /* During 'Uebergabepunkt_y_Richtung': '<S14>:1348' */
          if (GesamtsystemAlt_B.SignaleingangfuerHeckschalter) {
            /* Transition: '<S14>:1344' */
            GesamtsystemAlt_DWork.is_Uebergabe = Gesamtsyste_IN_Warten_Uebergabe;
            GesamtsystemAlt_DWork.temporalCounter_i1_g = 0UL;

            /* Entry 'Warten_Uebergabe': '<S14>:1349' */
            GesamtsystemAlt_B.x_soll = GesamtsystemAlt_DWork.x_Uebergabe;
            GesamtsystemAlt_B.y_soll = GesamtsystemAlt_DWork.y_Uebergabe;
          }
          break;

         case Gesamtsyste_IN_Warten_Uebergabe:
          /* During 'Warten_Uebergabe': '<S14>:1349' */
          if (GesamtsystemAlt_DWork.temporalCounter_i1_g >= (uint32_T)ceil
              (GesamtsystemAlt_B.Wartezeit * 100.0)) {
            /* Transition: '<S14>:1345' */
            GesamtsystemAlt_DWork.is_Uebergabe = GesamtsystemAlt_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S14>:1350' */
            GesamtsystemAlt_DWork.Counter++;
          }
          break;

         case GesamtsystemAlt_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S14>:1347' */
          /* Transition: '<S14>:1343' */
          GesamtsystemAlt_DWork.is_Uebergabe = Ge_IN_Uebergabepunkt_y_Richtung;

          /* Entry 'Uebergabepunkt_y_Richtung': '<S14>:1348' */
          GesamtsystemAlt_B.x_soll = GesamtsystemAlt_DWork.x_least;
          GesamtsystemAlt_B.y_soll = 3000.0;
          break;

         default:
          /* During 'Wechsel_2': '<S14>:1350' */
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */

  /* Chart: '<S3>/Steuersystem fuer Heckschalter' incorporates:
   *  Delay: '<S5>/Delay'
   */
  if (GesamtsystemAlt_DWork.temporalCounter_i1 < MAX_uint32_T) {
    GesamtsystemAlt_DWork.temporalCounter_i1++;
  }

  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Steuersystem fuer Heckschalter */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Steuersystem fuer Heckschalter */
  if (GesamtsystemAlt_DWork.is_active_c9_GesamtsystemAlt == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Steuersystem fuer Heckschalter */
    GesamtsystemAlt_DWork.is_active_c9_GesamtsystemAlt = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Steuersystem fuer Heckschalter */
    /* Transition: '<S19>:1410' */
    GesamtsystemAlt_DWork.is_c9_GesamtsystemAlt = GesamtsystemAlt_IN_Start;

    /* Entry 'Start': '<S19>:1411' */
    rtb_RoundingFunction1 = 0.0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c9_GesamtsystemAlt) {
     case GesamtsystemAlt_IN_Ende:
      rtb_RoundingFunction1 = 0.0;

      /* During 'Ende': '<S19>:1419' */
      break;

     case GesamtsystemAlt_IN_Start:
      rtb_RoundingFunction1 = 0.0;

      /* During 'Start': '<S19>:1411' */
      if (GesamtsystemAlt_B.SignaleingangfuerHeckschalter) {
        /* Transition: '<S19>:1415' */
        GesamtsystemAlt_DWork.is_c9_GesamtsystemAlt = GesamtsystemAlt_IN_Weiter1;
        GesamtsystemAlt_DWork.temporalCounter_i1 = 0UL;

        /* Entry 'Weiter1': '<S19>:1413' */
        rtb_RoundingFunction1 = 1.0;
      }
      break;

     case GesamtsystemAlt_IN_Warten:
      rtb_RoundingFunction1 = 0.0;

      /* During 'Warten': '<S19>:1412' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1 >= (uint32_T)ceil
          (GesamtsystemAlt_B.Wartezeit * 100.0)) {
        /* Transition: '<S19>:1417' */
        GesamtsystemAlt_DWork.is_c9_GesamtsystemAlt = GesamtsystemAlt_IN_Weiter2;
        GesamtsystemAlt_DWork.temporalCounter_i1 = 0UL;

        /* Entry 'Weiter2': '<S19>:1414' */
        rtb_RoundingFunction1 = 1.0;
      }
      break;

     case GesamtsystemAlt_IN_Weiter1:
      rtb_RoundingFunction1 = 1.0;

      /* During 'Weiter1': '<S19>:1413' */
      if (GesamtsystemAlt_B.SignaleingangfuerHeckschalter &&
          (GesamtsystemAlt_DWork.temporalCounter_i1 >= 200UL)) {
        /* Transition: '<S19>:1416' */
        GesamtsystemAlt_DWork.is_c9_GesamtsystemAlt = GesamtsystemAlt_IN_Warten;
        GesamtsystemAlt_DWork.temporalCounter_i1 = 0UL;

        /* Entry 'Warten': '<S19>:1412' */
        rtb_RoundingFunction1 = 0.0;
      }
      break;

     default:
      rtb_RoundingFunction1 = 1.0;

      /* During 'Weiter2': '<S19>:1414' */
      if ((GesamtsystemAlt_DWork.Delay_DSTATE == 1.0) ||
          (GesamtsystemAlt_B.SignaleingangfuerHeckschalter &&
           (GesamtsystemAlt_DWork.temporalCounter_i1 >= 200UL))) {
        /* Transition: '<S19>:1420' */
        /* Transition: '<S19>:1422' */
        GesamtsystemAlt_DWork.is_c9_GesamtsystemAlt = GesamtsystemAlt_IN_Ende;

        /* Entry 'Ende': '<S19>:1419' */
        rtb_RoundingFunction1 = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Steuersystem fuer Heckschalter' */

  /* Chart: '<S5>/Shutdown-Eingriff' */
  /* Gateway: Add-Ons-Ansteuerung
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Endsignal-System
     [Einstellungen moeglich]/Shutdown-Eingriff */
  /* During: Add-Ons-Ansteuerung
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Endsignal-System
     [Einstellungen moeglich]/Shutdown-Eingriff */
  if (GesamtsystemAlt_DWork.is_active_c10_GesamtsystemAlt == 0U) {
    /* Entry: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Shutdown-Eingriff */
    GesamtsystemAlt_DWork.is_active_c10_GesamtsystemAlt = 1U;

    /* Entry Internal: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Shutdown-Eingriff */
    /* Transition: '<S9>:1016' */
    GesamtsystemAlt_DWork.is_c10_GesamtsystemAlt = GesamtsystemAlt_IN_Start_Init;

    /* Entry 'Start_Init': '<S9>:1034' */
    GesamtsystemAlt_DWork.Counter_a = 0.0;
    GesamtsystemAlt_B.Shutdown = 0.0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c10_GesamtsystemAlt) {
     case GesamtsystemAlt_IN_Hochzaehlen:
      /* During 'Hochzaehlen': '<S9>:1040' */
      if (GesamtsystemAlt_DWork.Counter_a == 2.0) {
        /* Transition: '<S9>:1044' */
        GesamtsystemAlt_DWork.is_c10_GesamtsystemAlt =
          Gesamts_IN_Shutdown_Ausfuehrung;

        /* Entry 'Shutdown_Ausfuehrung': '<S9>:1039' */
        GesamtsystemAlt_B.Shutdown = 1.0;
      } else {
        /* Transition: '<S9>:1050' */
        GesamtsystemAlt_DWork.is_c10_GesamtsystemAlt =
          Gesamtsyste_IN_Warten_loslassen;
      }
      break;

     case Gesamts_IN_Shutdown_Ausfuehrung:
      GesamtsystemAlt_B.Shutdown = 1.0;

      /* During 'Shutdown_Ausfuehrung': '<S9>:1039' */
      break;

     case GesamtsystemAlt_IN_Start_Init:
      GesamtsystemAlt_B.Shutdown = 0.0;

      /* During 'Start_Init': '<S9>:1034' */
      /* Transition: '<S9>:1054' */
      if (rtb_RoundingFunction1 == 1.0) {
        /* Transition: '<S9>:1042' */
        GesamtsystemAlt_DWork.is_c10_GesamtsystemAlt =
          Gesamtsystem_IN_Warten_druecken;
      }
      break;

     case Gesamtsystem_IN_Warten_druecken:
      /* During 'Warten_druecken': '<S9>:1041' */
      if (rtb_RoundingFunction1 == 0.0) {
        /* Transition: '<S9>:1043' */
        GesamtsystemAlt_DWork.is_c10_GesamtsystemAlt =
          GesamtsystemAlt_IN_Hochzaehlen;

        /* Entry 'Hochzaehlen': '<S9>:1040' */
        GesamtsystemAlt_DWork.Counter_a++;
      }
      break;

     default:
      /* During 'Warten_loslassen': '<S9>:1049' */
      /* Transition: '<S9>:1053' */
      if (rtb_RoundingFunction1 == 1.0) {
        /* Transition: '<S9>:1042' */
        GesamtsystemAlt_DWork.is_c10_GesamtsystemAlt =
          Gesamtsystem_IN_Warten_druecken;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Shutdown-Eingriff' */

  /* Sum: '<S10>/Zaehladdition' incorporates:
   *  Constant: '<S10>/Inkrement'
   *  Delay: '<S10>/Delay'
   */
  rtb_RoundingFunction = GesamtsystemAlt_P.Inkrement_Value +
    GesamtsystemAlt_DWork.Delay_DSTATE_m;

  /* Gain: '<S10>/Zeit in sec' */
  rtb_Zeitinsec = GesamtsystemAlt_P.Zeitinsec_Gain * rtb_RoundingFunction;

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
  if (GesamtsystemAlt_DWork.is_active_c15_GesamtsystemAlt == 0U) {
    /* Entry: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Zeitverzoegerungsblock
       Die eigentliche Zeitmessung startet,
       wenn der Notschalter zum ersten Mal
       gedrückt wird */
    GesamtsystemAlt_DWork.is_active_c15_GesamtsystemAlt = 1U;

    /* Entry Internal: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Zeitverzoegerungsblock
       Die eigentliche Zeitmessung startet,
       wenn der Notschalter zum ersten Mal
       gedrückt wird */
    /* Transition: '<S11>:1016' */
    GesamtsystemAlt_DWork.is_c15_GesamtsystemAlt =
      GesamtsystemAlt_IN_Init_Warten;

    /* Entry 'Init_Warten': '<S11>:1034' */
    GesamtsystemAlt_B.Timer = 0.0;
  } else if ((GesamtsystemAlt_DWork.is_c15_GesamtsystemAlt == 1U) &&
             (rtb_RoundingFunction1 == 1.0)) {
    /* During 'Init_Warten': '<S11>:1034' */
    /* Transition: '<S11>:1038' */
    GesamtsystemAlt_DWork.is_c15_GesamtsystemAlt =
      Gesam_IN_Zeitausgabe_mit_Offset;

    /* Entry 'Zeitausgabe_mit_Offset': '<S11>:1039' */
    GesamtsystemAlt_B.Timer = rtb_Zeitinsec - rtb_Zeitinsec;
    GesamtsystemAlt_B.Timer = ceil(GesamtsystemAlt_B.Timer);
  } else {
    /* During 'Zeitausgabe_mit_Offset': '<S11>:1039' */
  }

  /* End of Chart: '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Notschalter zum ersten Mal gedrückt wird' */

  /* Chart: '<S5>/Beendigung-Ansteuerung' incorporates:
   *  Constant: '<S8>/Constant'
   *  Logic: '<S5>/Shutdown- Weiterleitung'
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
  if (GesamtsystemAlt_DWork.is_active_c3_GesamtsystemAlt == 0U) {
    /* Entry: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Beendigung-Ansteuerung */
    GesamtsystemAlt_DWork.is_active_c3_GesamtsystemAlt = 1U;

    /* Entry Internal: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Beendigung-Ansteuerung */
    /* Transition: '<S7>:1016' */
    GesamtsystemAlt_DWork.is_c3_GesamtsystemAlt =
      GesamtsystemAlt_IN_Start_Warten;
  } else {
    switch (GesamtsystemAlt_DWork.is_c3_GesamtsystemAlt) {
     case GesamtsystemAlt_IN_Anschalten:
      GesamtsystemAlt_B.Endsignal = 1.0;

      /* During 'Anschalten': '<S7>:1017' */
      break;

     case GesamtsystemAlt_IN_Aus_Zustand:
      GesamtsystemAlt_B.Endsignal = 0.0;

      /* During 'Aus_Zustand': '<S7>:1019' */
      if ((GesamtsystemAlt_B.Shutdown != 0.0) || (GesamtsystemAlt_B.Timer >=
           GesamtsystemAlt_P.DauerbiszumShutdowninsec_const) ||
          (GesamtsystemAlt_B.Gang == 2.0)) {
        /* Transition: '<S7>:1022' */
        /* Transition: '<S7>:1020' */
        GesamtsystemAlt_DWork.is_c3_GesamtsystemAlt =
          GesamtsystemAlt_IN_Anschalten;

        /* Entry 'Anschalten': '<S7>:1017' */
        GesamtsystemAlt_B.Endsignal = 1.0;
      }
      break;

     default:
      /* During 'Start_Warten': '<S7>:1015' */
      /* Transition: '<S7>:1033' */
      GesamtsystemAlt_DWork.is_c3_GesamtsystemAlt =
        GesamtsystemAlt_IN_Aus_Zustand;

      /* Entry 'Aus_Zustand': '<S7>:1019' */
      GesamtsystemAlt_B.Endsignal = 0.0;
      break;
    }
  }

  /* End of Chart: '<S5>/Beendigung-Ansteuerung' */

  /* S-Function (c280xgpio_do): '<S5>/Signalaussgang fuer Endsignallampe' */
  {
    if (GesamtsystemAlt_B.Endsignal)
      GpioDataRegs.GPBSET.bit.GPIO58 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO58 = 1;
  }

  /* Chart: '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  if (GesamtsystemAlt_DWork.temporalCounter_i1_g4 < 15U) {
    GesamtsystemAlt_DWork.temporalCounter_i1_g4 = ((int16_T)
      GesamtsystemAlt_DWork.temporalCounter_i1_g4 + 1) & 255U;
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
  if (GesamtsystemAlt_DWork.is_active_c6_GesamtsystemAlt == 0U) {
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
    GesamtsystemAlt_DWork.is_active_c6_GesamtsystemAlt = 1U;

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
    /* Transition: '<S12>:1008' */
    GesamtsystemAlt_DWork.is_c6_GesamtsystemAlt =
      Gesamtsystem_IN_Init_und_Warten;

    /* Entry 'Init_und_Warten': '<S12>:1009' */
    rtb_ZM_pwm_out = 0.0;
    GesamtsystemAlt_B.ZM_r_l_out = 1.0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c6_GesamtsystemAlt) {
     case GesamtsystemAlt_IN_Ausfuehrung:
      rtb_ZM_pwm_out = 75.0;

      /* During 'Ausfuehrung': '<S12>:1011' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_g4 >= 10U) {
        /* Transition: '<S12>:1013' */
        GesamtsystemAlt_DWork.is_c6_GesamtsystemAlt = GesamtsystemAlt_IN_Beendet;

        /* Entry 'Beendet': '<S12>:1014' */
        rtb_ZM_pwm_out = 0.0;
      }
      break;

     case GesamtsystemAlt_IN_Beendet:
      rtb_ZM_pwm_out = 0.0;

      /* During 'Beendet': '<S12>:1014' */
      break;

     default:
      rtb_ZM_pwm_out = 0.0;
      GesamtsystemAlt_B.ZM_r_l_out = 1.0;

      /* During 'Init_und_Warten': '<S12>:1009' */
      if ((GesamtsystemAlt_B.x_soll == 1200.0) && (GesamtsystemAlt_B.y_soll ==
           -50.0)) {
        /* Transition: '<S12>:1012' */
        GesamtsystemAlt_DWork.is_c6_GesamtsystemAlt =
          GesamtsystemAlt_IN_Ausfuehrung;
        GesamtsystemAlt_DWork.temporalCounter_i1_g4 = 0U;

        /* Entry 'Ausfuehrung': '<S12>:1011' */
        rtb_ZM_pwm_out = 75.0;
      }
      break;
    }
  }

  /* End of Chart: '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */

  /* S-Function (c280xgpio_do): '<S6>/Drehrichtungsvorgabe für Zylindermotor' */
  {
    if (GesamtsystemAlt_B.ZM_r_l_out)
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

  /* Outputs for Atomic SubSystem: '<S3>/Navigationssystem [Einstellungen moeglich]' */
  /* Saturate: '<S17>/Binaerer Wertebereich' */
  if (GesamtsystemAlt_B.Gang > GesamtsystemAlt_P.BinaererWertebereich_UpperSat)
  {
    GesamtsystemAlt_B.BinaererWertebereich =
      GesamtsystemAlt_P.BinaererWertebereich_UpperSat;
  } else if (GesamtsystemAlt_B.Gang <
             GesamtsystemAlt_P.BinaererWertebereich_LowerSat) {
    GesamtsystemAlt_B.BinaererWertebereich =
      GesamtsystemAlt_P.BinaererWertebereich_LowerSat;
  } else {
    GesamtsystemAlt_B.BinaererWertebereich = GesamtsystemAlt_B.Gang;
  }

  /* End of Saturate: '<S17>/Binaerer Wertebereich' */

  /* Sum: '<S22>/Soll-Ist-Abgleich_x' */
  rtb_SollIstAbgleich_x = GesamtsystemAlt_B.x_soll - GesamtsystemAlt_B.x_Wagen;

  /* Sum: '<S22>/Soll-Ist-Abgleich_y' */
  rtb_Zeitinsec = GesamtsystemAlt_B.y_soll - GesamtsystemAlt_B.y_Wagen;

  /* Chart: '<S23>/Quadrantenteiler' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
  if (GesamtsystemAlt_DWork.is_active_c11_GesamtsystemAlt == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
    GesamtsystemAlt_DWork.is_active_c11_GesamtsystemAlt = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
    /* Transition: '<S27>:28' */
    GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
      Gesamtsystem_IN_Start_Warten_jc;
  } else {
    switch (GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt) {
     case GesamtsystemAlt_IN_Quadrant_a:
      GesamtsystemAlt_B.Quadrant = 0.0;

      /* During 'Quadrant_a': '<S27>:8' */
      /* Transition: '<S27>:36' */
      /* Transition: '<S27>:40' */
      if ((rtb_SollIstAbgleich_x >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S27>:29' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S27>:8' */
        GesamtsystemAlt_B.Quadrant = 0.0;
      } else if ((rtb_SollIstAbgleich_x <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S27>:30' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S27>:9' */
        GesamtsystemAlt_B.Quadrant = 1.0;
      } else if ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S27>:31' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S27>:11' */
        GesamtsystemAlt_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S27>:32' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S27>:12' */
        GesamtsystemAlt_B.Quadrant = 3.0;
      }
      break;

     case GesamtsystemAlt_IN_Quadrant_b:
      GesamtsystemAlt_B.Quadrant = 1.0;

      /* During 'Quadrant_b': '<S27>:9' */
      /* Transition: '<S27>:37' */
      /* Transition: '<S27>:40' */
      if ((rtb_SollIstAbgleich_x >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S27>:29' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S27>:8' */
        GesamtsystemAlt_B.Quadrant = 0.0;
      } else if ((rtb_SollIstAbgleich_x <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S27>:30' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S27>:9' */
        GesamtsystemAlt_B.Quadrant = 1.0;
      } else if ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S27>:31' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S27>:11' */
        GesamtsystemAlt_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S27>:32' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S27>:12' */
        GesamtsystemAlt_B.Quadrant = 3.0;
      }
      break;

     case GesamtsystemAlt_IN_Quadrant_c:
      GesamtsystemAlt_B.Quadrant = 2.0;

      /* During 'Quadrant_c': '<S27>:11' */
      /* Transition: '<S27>:38' */
      /* Transition: '<S27>:40' */
      if ((rtb_SollIstAbgleich_x >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S27>:29' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S27>:8' */
        GesamtsystemAlt_B.Quadrant = 0.0;
      } else if ((rtb_SollIstAbgleich_x <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S27>:30' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S27>:9' */
        GesamtsystemAlt_B.Quadrant = 1.0;
      } else if ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S27>:31' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S27>:11' */
        GesamtsystemAlt_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S27>:32' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S27>:12' */
        GesamtsystemAlt_B.Quadrant = 3.0;
      }
      break;

     case GesamtsystemAlt_IN_Quadrant_d:
      GesamtsystemAlt_B.Quadrant = 3.0;

      /* During 'Quadrant_d': '<S27>:12' */
      /* Transition: '<S27>:39' */
      /* Transition: '<S27>:40' */
      if ((rtb_SollIstAbgleich_x >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S27>:29' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S27>:8' */
        GesamtsystemAlt_B.Quadrant = 0.0;
      } else if ((rtb_SollIstAbgleich_x <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S27>:30' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S27>:9' */
        GesamtsystemAlt_B.Quadrant = 1.0;
      } else if ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S27>:31' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S27>:11' */
        GesamtsystemAlt_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S27>:32' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S27>:12' */
        GesamtsystemAlt_B.Quadrant = 3.0;
      }
      break;

     default:
      /* During 'Start_Warten': '<S27>:41' */
      /* Transition: '<S27>:42' */
      if ((rtb_SollIstAbgleich_x >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S27>:29' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S27>:8' */
        GesamtsystemAlt_B.Quadrant = 0.0;
      } else if ((rtb_SollIstAbgleich_x <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S27>:30' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S27>:9' */
        GesamtsystemAlt_B.Quadrant = 1.0;
      } else if ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S27>:31' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S27>:11' */
        GesamtsystemAlt_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S27>:32' */
        GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
          GesamtsystemAlt_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S27>:12' */
        GesamtsystemAlt_B.Quadrant = 3.0;
      }
      break;
    }
  }

  /* End of Chart: '<S23>/Quadrantenteiler' */

  /* Chart: '<S23>/Winkelausgabe fuer Ausrichtung' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
  if (GesamtsystemAlt_DWork.is_active_c12_GesamtsystemAlt == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
    GesamtsystemAlt_DWork.is_active_c12_GesamtsystemAlt = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
    /* Transition: '<S28>:81' */
    GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
      Gesamtsyste_IN_Start_Warten_jcl;
  } else {
    switch (GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt) {
     case G_IN_Ausrichtung_ohne_Aenderung:
      /* During 'Ausrichtung_ohne_Aenderung': '<S28>:52' */
      /* Transition: '<S28>:66' */
      /* Transition: '<S28>:70' */
      if ((rtb_SollIstAbgleich_x == 0.0) && (rtb_Zeitinsec == 0.0)) {
        /* Transition: '<S28>:60' */
        GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
          G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S28>:52' */
        GesamtsystemAlt_B.alpha_neu = GesamtsystemAlt_B.alpha_Wagen;
      } else if (((rtb_SollIstAbgleich_x > 0.0) && (rtb_Zeitinsec >= 0.0)) ||
                 ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0))) {
        /* Transition: '<S28>:76' */
        /* Transition: '<S28>:77' */
        GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S28>:24' */
        GesamtsystemAlt_B.alpha_neu = atan(fabs(rtb_Zeitinsec) / fabs
          (rtb_SollIstAbgleich_x)) * 360.0 / 6.2831853071795862;
        GesamtsystemAlt_B.alpha_neu = rt_roundd_snf(GesamtsystemAlt_B.alpha_neu);
      } else {
        /* Transition: '<S28>:78' */
        GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
          IN_Trigonometrische_Auswertun_j;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S28>:71' */
        GesamtsystemAlt_B.alpha_neu = atan(fabs(rtb_SollIstAbgleich_x) / fabs
          (rtb_Zeitinsec)) * 360.0 / 6.2831853071795862;
        GesamtsystemAlt_B.alpha_neu = rt_roundd_snf(GesamtsystemAlt_B.alpha_neu);
      }
      break;

     case Gesamtsyste_IN_Start_Warten_jcl:
      /* During 'Start_Warten': '<S28>:82' */
      /* Transition: '<S28>:83' */
      if ((rtb_SollIstAbgleich_x == 0.0) && (rtb_Zeitinsec == 0.0)) {
        /* Transition: '<S28>:60' */
        GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
          G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S28>:52' */
        GesamtsystemAlt_B.alpha_neu = GesamtsystemAlt_B.alpha_Wagen;
      } else if (((rtb_SollIstAbgleich_x > 0.0) && (rtb_Zeitinsec >= 0.0)) ||
                 ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0))) {
        /* Transition: '<S28>:76' */
        /* Transition: '<S28>:77' */
        GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S28>:24' */
        GesamtsystemAlt_B.alpha_neu = atan(fabs(rtb_Zeitinsec) / fabs
          (rtb_SollIstAbgleich_x)) * 360.0 / 6.2831853071795862;
        GesamtsystemAlt_B.alpha_neu = rt_roundd_snf(GesamtsystemAlt_B.alpha_neu);
      } else {
        /* Transition: '<S28>:78' */
        GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
          IN_Trigonometrische_Auswertun_j;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S28>:71' */
        GesamtsystemAlt_B.alpha_neu = atan(fabs(rtb_SollIstAbgleich_x) / fabs
          (rtb_Zeitinsec)) * 360.0 / 6.2831853071795862;
        GesamtsystemAlt_B.alpha_neu = rt_roundd_snf(GesamtsystemAlt_B.alpha_neu);
      }
      break;

     case IN_Trigonometrische_Auswertung_:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S28>:24' */
      /* Transition: '<S28>:68' */
      /* Transition: '<S28>:70' */
      if ((rtb_SollIstAbgleich_x == 0.0) && (rtb_Zeitinsec == 0.0)) {
        /* Transition: '<S28>:60' */
        GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
          G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S28>:52' */
        GesamtsystemAlt_B.alpha_neu = GesamtsystemAlt_B.alpha_Wagen;
      } else if (((rtb_SollIstAbgleich_x > 0.0) && (rtb_Zeitinsec >= 0.0)) ||
                 ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0))) {
        /* Transition: '<S28>:76' */
        /* Transition: '<S28>:77' */
        GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S28>:24' */
        GesamtsystemAlt_B.alpha_neu = atan(fabs(rtb_Zeitinsec) / fabs
          (rtb_SollIstAbgleich_x)) * 360.0 / 6.2831853071795862;
        GesamtsystemAlt_B.alpha_neu = rt_roundd_snf(GesamtsystemAlt_B.alpha_neu);
      } else {
        /* Transition: '<S28>:78' */
        GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
          IN_Trigonometrische_Auswertun_j;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S28>:71' */
        GesamtsystemAlt_B.alpha_neu = atan(fabs(rtb_SollIstAbgleich_x) / fabs
          (rtb_Zeitinsec)) * 360.0 / 6.2831853071795862;
        GesamtsystemAlt_B.alpha_neu = rt_roundd_snf(GesamtsystemAlt_B.alpha_neu);
      }
      break;

     default:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S28>:71' */
      /* Transition: '<S28>:73' */
      /* Transition: '<S28>:70' */
      if ((rtb_SollIstAbgleich_x == 0.0) && (rtb_Zeitinsec == 0.0)) {
        /* Transition: '<S28>:60' */
        GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
          G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S28>:52' */
        GesamtsystemAlt_B.alpha_neu = GesamtsystemAlt_B.alpha_Wagen;
      } else if (((rtb_SollIstAbgleich_x > 0.0) && (rtb_Zeitinsec >= 0.0)) ||
                 ((rtb_SollIstAbgleich_x < 0.0) && (rtb_Zeitinsec <= 0.0))) {
        /* Transition: '<S28>:76' */
        /* Transition: '<S28>:77' */
        GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S28>:24' */
        GesamtsystemAlt_B.alpha_neu = atan(fabs(rtb_Zeitinsec) / fabs
          (rtb_SollIstAbgleich_x)) * 360.0 / 6.2831853071795862;
        GesamtsystemAlt_B.alpha_neu = rt_roundd_snf(GesamtsystemAlt_B.alpha_neu);
      } else {
        /* Transition: '<S28>:78' */
        GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
          IN_Trigonometrische_Auswertun_j;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S28>:71' */
        GesamtsystemAlt_B.alpha_neu = atan(fabs(rtb_SollIstAbgleich_x) / fabs
          (rtb_Zeitinsec)) * 360.0 / 6.2831853071795862;
        GesamtsystemAlt_B.alpha_neu = rt_roundd_snf(GesamtsystemAlt_B.alpha_neu);
      }
      break;
    }
  }

  /* End of Chart: '<S23>/Winkelausgabe fuer Ausrichtung' */

  /* Sum: '<S23>/Winkeldifferenz' incorporates:
   *  Gain: '<S23>/Quadranten- verschiebung'
   *  Sum: '<S23>/Winkelverschiebung'
   */
  GesamtsystemAlt_B.Winkeldifferenz =
    (GesamtsystemAlt_P.Quadrantenverschiebung_Gain * GesamtsystemAlt_B.Quadrant
     + GesamtsystemAlt_B.alpha_neu) - GesamtsystemAlt_B.alpha_Wagen;

  /* Chart: '<S17>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
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
  if (GesamtsystemAlt_DWork.is_active_c8_GesamtsystemAlt == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Drehweg-Optimierung
       mit Gang-Ausrichtung
       [Init: Stillstandintervall = ±15°] */
    GesamtsystemAlt_DWork.is_active_c8_GesamtsystemAlt = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Drehweg-Optimierung
       mit Gang-Ausrichtung
       [Init: Stillstandintervall = ±15°] */
    /* Transition: '<S20>:38' */
    GesamtsystemAlt_DWork.is_c8_GesamtsystemAlt =
      Gesamtsys_IN_Einstellung_Init_j;

    /* Entry 'Einstellung_Init': '<S20>:44' */
    GesamtsystemAlt_DWork.Stillstandintervall = 15.0;
    GesamtsystemAlt_B.pwm_mindern[0] = 0.0;
    GesamtsystemAlt_B.pwm_mindern[1] = 0.0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c8_GesamtsystemAlt) {
     case IN_Drehstillstand_mit_Ausrichtu:
      /* During 'Drehstillstand_mit_Ausrichtungsregelung': '<S20>:26' */
      /* Transition: '<S20>:96' */
      /* Transition: '<S20>:98' */
      /* Transition: '<S20>:65' */
      GesamtsystemAlt_DWork.alpha_diff_intern = 180.0 *
        GesamtsystemAlt_B.BinaererWertebereich +
        GesamtsystemAlt_B.Winkeldifferenz;
      if (fabs(GesamtsystemAlt_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S20>:9' */
        if (GesamtsystemAlt_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S20>:15' */
          GesamtsystemAlt_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S20>:18' */
          GesamtsystemAlt_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S20>:69' */
      }

      if (fabs(GesamtsystemAlt_DWork.alpha_diff_intern) <=
          GesamtsystemAlt_DWork.Stillstandintervall) {
        /* Transition: '<S20>:27' */
        GesamtsystemAlt_DWork.is_c8_GesamtsystemAlt =
          IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S20>:94' */
        GesamtsystemAlt_DWork.is_c8_GesamtsystemAlt =
          IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S20>:11' */
        GesamtsystemAlt_B.alpha_diff_opt =
          GesamtsystemAlt_DWork.alpha_diff_intern;
      }
      break;

     case Gesamtsys_IN_Einstellung_Init_j:
      /* During 'Einstellung_Init': '<S20>:44' */
      /* Transition: '<S20>:46' */
      /* Transition: '<S20>:65' */
      GesamtsystemAlt_DWork.alpha_diff_intern = 180.0 *
        GesamtsystemAlt_B.BinaererWertebereich +
        GesamtsystemAlt_B.Winkeldifferenz;
      if (fabs(GesamtsystemAlt_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S20>:9' */
        if (GesamtsystemAlt_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S20>:15' */
          GesamtsystemAlt_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S20>:18' */
          GesamtsystemAlt_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S20>:69' */
      }

      if (fabs(GesamtsystemAlt_DWork.alpha_diff_intern) <=
          GesamtsystemAlt_DWork.Stillstandintervall) {
        /* Transition: '<S20>:27' */
        GesamtsystemAlt_DWork.is_c8_GesamtsystemAlt =
          IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S20>:94' */
        GesamtsystemAlt_DWork.is_c8_GesamtsystemAlt =
          IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S20>:11' */
        GesamtsystemAlt_B.alpha_diff_opt =
          GesamtsystemAlt_DWork.alpha_diff_intern;
      }
      break;

     default:
      /* During 'Weiterleitung_bei_Drehzustand': '<S20>:11' */
      /* Transition: '<S20>:97' */
      /* Transition: '<S20>:98' */
      /* Transition: '<S20>:65' */
      GesamtsystemAlt_DWork.alpha_diff_intern = 180.0 *
        GesamtsystemAlt_B.BinaererWertebereich +
        GesamtsystemAlt_B.Winkeldifferenz;
      if (fabs(GesamtsystemAlt_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S20>:9' */
        if (GesamtsystemAlt_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S20>:15' */
          GesamtsystemAlt_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S20>:18' */
          GesamtsystemAlt_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S20>:69' */
      }

      if (fabs(GesamtsystemAlt_DWork.alpha_diff_intern) <=
          GesamtsystemAlt_DWork.Stillstandintervall) {
        /* Transition: '<S20>:27' */
        GesamtsystemAlt_DWork.is_c8_GesamtsystemAlt =
          IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S20>:94' */
        GesamtsystemAlt_DWork.is_c8_GesamtsystemAlt =
          IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S20>:11' */
        GesamtsystemAlt_B.alpha_diff_opt =
          GesamtsystemAlt_DWork.alpha_diff_intern;
      }
      break;
    }
  }

  /* End of Chart: '<S17>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */

  /* Abs: '<S22>/Abs x_diff' */
  rtb_SollIstAbgleich_x = fabs(rtb_SollIstAbgleich_x);

  /* MATLAB Function: '<S22>/Betrag pwm_x' incorporates:
   *  Abs: '<S22>/Abs x_diff'
   */
  /* MATLAB Function 'Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x': '<S24>:1' */
  if ((GesamtsystemAlt_B.Zielradius < rtb_SollIstAbgleich_x) &&
      (rtb_SollIstAbgleich_x < 60.0 + GesamtsystemAlt_B.Zielradius)) {
    /* '<S24>:1:3' */
    /* '<S24>:1:4' */
    rtb_SollIstAbgleich_x = 60.0;
  } else if (rtb_SollIstAbgleich_x <= GesamtsystemAlt_B.Zielradius) {
    /* '<S24>:1:5' */
    /* '<S24>:1:6' */
    rtb_SollIstAbgleich_x = 0.0;
  } else if (rtb_SollIstAbgleich_x >= 100.0 + GesamtsystemAlt_B.Zielradius) {
    /* '<S24>:1:7' */
    /* '<S24>:1:8' */
    rtb_SollIstAbgleich_x = 100.0;
  } else {
    /* '<S24>:1:10' */
  }

  /* End of MATLAB Function: '<S22>/Betrag pwm_x' */

  /* Abs: '<S22>/Abs y_diff' */
  rtb_Zeitinsec = fabs(rtb_Zeitinsec);

  /* MATLAB Function: '<S22>/Betrag pwm_y' incorporates:
   *  Abs: '<S22>/Abs y_diff'
   */
  /* MATLAB Function 'Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_y': '<S25>:1' */
  if ((GesamtsystemAlt_B.Zielradius < rtb_Zeitinsec) && (rtb_Zeitinsec < 60.0 +
       GesamtsystemAlt_B.Zielradius)) {
    /* '<S25>:1:3' */
    /* '<S25>:1:4' */
    rtb_Zeitinsec = 60.0;
  } else if (rtb_Zeitinsec <= GesamtsystemAlt_B.Zielradius) {
    /* '<S25>:1:5' */
    /* '<S25>:1:6' */
    rtb_Zeitinsec = 0.0;
  } else if (rtb_Zeitinsec >= 100.0 + GesamtsystemAlt_B.Zielradius) {
    /* '<S25>:1:7' */
    /* '<S25>:1:8' */
    rtb_Zeitinsec = 100.0;
  } else {
    /* '<S25>:1:10' */
  }

  /* End of MATLAB Function: '<S22>/Betrag pwm_y' */

  /* MATLAB Function: '<S22>/PWM-Vektorbetrag' */
  /* MATLAB Function 'Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/PWM-Vektorbetrag': '<S26>:1' */
  /* '<S26>:1:3' */
  rtb_Zeitinsec = rt_roundd_snf(sqrt(rtb_SollIstAbgleich_x *
    rtb_SollIstAbgleich_x + rtb_Zeitinsec * rtb_Zeitinsec));

  /* Saturate: '<S22>/PWM-Wertebereich' */
  if (rtb_Zeitinsec > GesamtsystemAlt_P.PWMWertebereich_UpperSat) {
    GesamtsystemAlt_B.PWMWertebereich =
      GesamtsystemAlt_P.PWMWertebereich_UpperSat;
  } else if (rtb_Zeitinsec < GesamtsystemAlt_P.PWMWertebereich_LowerSat) {
    GesamtsystemAlt_B.PWMWertebereich =
      GesamtsystemAlt_P.PWMWertebereich_LowerSat;
  } else {
    GesamtsystemAlt_B.PWMWertebereich = rtb_Zeitinsec;
  }

  /* End of Saturate: '<S22>/PWM-Wertebereich' */

  /* Chart: '<S17>/Fahrsystem' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Fahrsystem */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Fahrsystem */
  if (GesamtsystemAlt_DWork.is_active_c7_GesamtsystemAlt == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Fahrsystem */
    GesamtsystemAlt_DWork.is_active_c7_GesamtsystemAlt = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Fahrsystem */
    /* Transition: '<S21>:91' */
    GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
      GesamtsystemA_IN_Start_Warten_j;
  } else {
    switch (GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt) {
     case Gesam_IN_Drehen_links_gesteuert:
      GesamtsystemAl_Drehen_links_max();
      break;

     case Gesamtsyste_IN_Drehen_links_max:
      GesamtsystemAl_Drehen_links_max();
      break;

     case Gesa_IN_Drehen_rechts_gesteuert:
      /* During 'Drehen_rechts_gesteuert': '<S21>:51' */
      /* Transition: '<S21>:63' */
      /* Transition: '<S21>:75' */
      if ((fabs(GesamtsystemAlt_B.alpha_diff_opt) > 0.0) &&
          (GesamtsystemAlt_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S21>:58' */
        if (fabs(GesamtsystemAlt_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S21>:21' */
          if (GesamtsystemAlt_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S21>:45' */
            GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S21>:8' */
            GesamtsystemAlt_B.pwm_out_l = 100.0;
            GesamtsystemAlt_B.pwm_out_r = 100.0;
            GesamtsystemAlt_B.r_l_out_l = 0.0;
            GesamtsystemAlt_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S21>:57' */
            GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S21>:9' */
            GesamtsystemAlt_B.pwm_out_l = 100.0;
            GesamtsystemAlt_B.pwm_out_r = 100.0;
            GesamtsystemAlt_B.r_l_out_l = 1.0;
            GesamtsystemAlt_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S21>:53' */
          if (GesamtsystemAlt_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S21>:54' */
            GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S21>:43' */
            GesamtsystemAlt_B.pwm_out_l = 59.0 + fabs
              (GesamtsystemAlt_B.alpha_diff_opt);
            GesamtsystemAlt_B.pwm_out_r = 59.0 + fabs
              (GesamtsystemAlt_B.alpha_diff_opt);
            GesamtsystemAlt_B.r_l_out_l = 0.0;
            GesamtsystemAlt_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S21>:55' */
            GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S21>:51' */
            rtb_Zeitinsec = 59.0 + fabs(GesamtsystemAlt_B.alpha_diff_opt);
            GesamtsystemAlt_B.pwm_out_l = rtb_Zeitinsec;
            GesamtsystemAlt_B.pwm_out_r = rtb_Zeitinsec;
            GesamtsystemAlt_B.r_l_out_l = 1.0;
            GesamtsystemAlt_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S21>:82' */
        if (GesamtsystemAlt_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S21>:85' */
          rtb_SollIstAbgleich_x = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
          rtb_Zeitinsec = GesamtsystemAlt_B.BinaererWertebereich;
        } else if (GesamtsystemAlt_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S21>:86' */
          rtb_SollIstAbgleich_x = GesamtsystemAlt_B.BinaererWertebereich;
          rtb_Zeitinsec = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
        } else {
          /* Transition: '<S21>:87' */
          rtb_SollIstAbgleich_x = 0.0;
          rtb_Zeitinsec = 0.0;
        }

        GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
          IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S21>:94' */
        a = GesamtsystemAlt_B.PWMWertebereich / 100.0;
        GesamtsystemAlt_B.pwm_out_l = GesamtsystemAlt_B.PWMWertebereich -
          rt_roundd_snf(a * a * GesamtsystemAlt_B.pwm_mindern[0]) *
          rtb_SollIstAbgleich_x;
        rtb_SollIstAbgleich_x = GesamtsystemAlt_B.PWMWertebereich / 100.0;
        GesamtsystemAlt_B.pwm_out_r = GesamtsystemAlt_B.PWMWertebereich -
          rt_roundd_snf(rtb_SollIstAbgleich_x * rtb_SollIstAbgleich_x *
                        GesamtsystemAlt_B.pwm_mindern[0]) * rtb_Zeitinsec;
        GesamtsystemAlt_B.r_l_out_l = 1.0 -
          GesamtsystemAlt_B.BinaererWertebereich;
        GesamtsystemAlt_B.r_l_out_r = 1.0 -
          GesamtsystemAlt_B.BinaererWertebereich;
      }
      break;

     case Gesamtsyst_IN_Drehen_rechts_max:
      /* During 'Drehen_rechts_max': '<S21>:9' */
      /* Transition: '<S21>:61' */
      /* Transition: '<S21>:75' */
      if ((fabs(GesamtsystemAlt_B.alpha_diff_opt) > 0.0) &&
          (GesamtsystemAlt_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S21>:58' */
        if (fabs(GesamtsystemAlt_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S21>:21' */
          if (GesamtsystemAlt_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S21>:45' */
            GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S21>:8' */
            GesamtsystemAlt_B.pwm_out_l = 100.0;
            GesamtsystemAlt_B.pwm_out_r = 100.0;
            GesamtsystemAlt_B.r_l_out_l = 0.0;
            GesamtsystemAlt_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S21>:57' */
            GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S21>:9' */
            GesamtsystemAlt_B.pwm_out_l = 100.0;
            GesamtsystemAlt_B.pwm_out_r = 100.0;
            GesamtsystemAlt_B.r_l_out_l = 1.0;
            GesamtsystemAlt_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S21>:53' */
          if (GesamtsystemAlt_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S21>:54' */
            GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S21>:43' */
            GesamtsystemAlt_B.pwm_out_l = 59.0 + fabs
              (GesamtsystemAlt_B.alpha_diff_opt);
            GesamtsystemAlt_B.pwm_out_r = 59.0 + fabs
              (GesamtsystemAlt_B.alpha_diff_opt);
            GesamtsystemAlt_B.r_l_out_l = 0.0;
            GesamtsystemAlt_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S21>:55' */
            GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S21>:51' */
            GesamtsystemAlt_B.pwm_out_l = 59.0 + fabs
              (GesamtsystemAlt_B.alpha_diff_opt);
            GesamtsystemAlt_B.pwm_out_r = 59.0 + fabs
              (GesamtsystemAlt_B.alpha_diff_opt);
            GesamtsystemAlt_B.r_l_out_l = 1.0;
            GesamtsystemAlt_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S21>:82' */
        if (GesamtsystemAlt_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S21>:85' */
          rtb_SollIstAbgleich_x = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
          rtb_Zeitinsec = GesamtsystemAlt_B.BinaererWertebereich;
        } else if (GesamtsystemAlt_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S21>:86' */
          rtb_SollIstAbgleich_x = GesamtsystemAlt_B.BinaererWertebereich;
          rtb_Zeitinsec = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
        } else {
          /* Transition: '<S21>:87' */
          rtb_SollIstAbgleich_x = 0.0;
          rtb_Zeitinsec = 0.0;
        }

        GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
          IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S21>:94' */
        a = GesamtsystemAlt_B.PWMWertebereich / 100.0;
        GesamtsystemAlt_B.pwm_out_l = GesamtsystemAlt_B.PWMWertebereich -
          rt_roundd_snf(a * a * GesamtsystemAlt_B.pwm_mindern[0]) *
          rtb_SollIstAbgleich_x;
        rtb_SollIstAbgleich_x = GesamtsystemAlt_B.PWMWertebereich / 100.0;
        GesamtsystemAlt_B.pwm_out_r = GesamtsystemAlt_B.PWMWertebereich -
          rt_roundd_snf(rtb_SollIstAbgleich_x * rtb_SollIstAbgleich_x *
                        GesamtsystemAlt_B.pwm_mindern[0]) * rtb_Zeitinsec;
        GesamtsystemAlt_B.r_l_out_l = 1.0 -
          GesamtsystemAlt_B.BinaererWertebereich;
        GesamtsystemAlt_B.r_l_out_r = 1.0 -
          GesamtsystemAlt_B.BinaererWertebereich;
      }
      break;

     case IN_Fahren_mit_Ausrichtungsregel:
      /* During 'Fahren_mit_Ausrichtungsregelung': '<S21>:94' */
      /* Transition: '<S21>:74' */
      /* Transition: '<S21>:75' */
      if ((fabs(GesamtsystemAlt_B.alpha_diff_opt) > 0.0) &&
          (GesamtsystemAlt_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S21>:58' */
        if (fabs(GesamtsystemAlt_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S21>:21' */
          if (GesamtsystemAlt_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S21>:45' */
            GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S21>:8' */
            GesamtsystemAlt_B.pwm_out_l = 100.0;
            GesamtsystemAlt_B.pwm_out_r = 100.0;
            GesamtsystemAlt_B.r_l_out_l = 0.0;
            GesamtsystemAlt_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S21>:57' */
            GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S21>:9' */
            GesamtsystemAlt_B.pwm_out_l = 100.0;
            GesamtsystemAlt_B.pwm_out_r = 100.0;
            GesamtsystemAlt_B.r_l_out_l = 1.0;
            GesamtsystemAlt_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S21>:53' */
          if (GesamtsystemAlt_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S21>:54' */
            GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S21>:43' */
            GesamtsystemAlt_B.pwm_out_l = 59.0 + fabs
              (GesamtsystemAlt_B.alpha_diff_opt);
            GesamtsystemAlt_B.pwm_out_r = 59.0 + fabs
              (GesamtsystemAlt_B.alpha_diff_opt);
            GesamtsystemAlt_B.r_l_out_l = 0.0;
            GesamtsystemAlt_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S21>:55' */
            GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S21>:51' */
            GesamtsystemAlt_B.pwm_out_l = 59.0 + fabs
              (GesamtsystemAlt_B.alpha_diff_opt);
            GesamtsystemAlt_B.pwm_out_r = 59.0 + fabs
              (GesamtsystemAlt_B.alpha_diff_opt);
            GesamtsystemAlt_B.r_l_out_l = 1.0;
            GesamtsystemAlt_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S21>:82' */
        if (GesamtsystemAlt_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S21>:85' */
          rtb_SollIstAbgleich_x = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
          rtb_Zeitinsec = GesamtsystemAlt_B.BinaererWertebereich;
        } else if (GesamtsystemAlt_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S21>:86' */
          rtb_SollIstAbgleich_x = GesamtsystemAlt_B.BinaererWertebereich;
          rtb_Zeitinsec = 1.0 - GesamtsystemAlt_B.BinaererWertebereich;
        } else {
          /* Transition: '<S21>:87' */
          rtb_SollIstAbgleich_x = 0.0;
          rtb_Zeitinsec = 0.0;
        }

        GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
          IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S21>:94' */
        a = GesamtsystemAlt_B.PWMWertebereich / 100.0;
        GesamtsystemAlt_B.pwm_out_l = GesamtsystemAlt_B.PWMWertebereich -
          rt_roundd_snf(a * a * GesamtsystemAlt_B.pwm_mindern[0]) *
          rtb_SollIstAbgleich_x;
        rtb_SollIstAbgleich_x = GesamtsystemAlt_B.PWMWertebereich / 100.0;
        GesamtsystemAlt_B.pwm_out_r = GesamtsystemAlt_B.PWMWertebereich -
          rt_roundd_snf(rtb_SollIstAbgleich_x * rtb_SollIstAbgleich_x *
                        GesamtsystemAlt_B.pwm_mindern[0]) * rtb_Zeitinsec;
        GesamtsystemAlt_B.r_l_out_l = 1.0 -
          GesamtsystemAlt_B.BinaererWertebereich;
        GesamtsystemAlt_B.r_l_out_r = 1.0 -
          GesamtsystemAlt_B.BinaererWertebereich;
      }
      break;

     default:
      GesamtsystemAlt_Start_Warten();
      break;
    }
  }

  /* End of Chart: '<S17>/Fahrsystem' */
  /* End of Outputs for SubSystem: '<S3>/Navigationssystem [Einstellungen moeglich]' */

  /* Product: '<S16>/Ansteuerung Motor_links' */
  rtb_Product_i = GesamtsystemAlt_B.pwm_out_l * rtb_RoundingFunction1;

  /* Saturate: '<S16>/Leistungsbereich Motor_links' */
  if (rtb_Product_i > GesamtsystemAlt_P.LeistungsbereichMotor_links_Upp) {
    rtb_Product_i = GesamtsystemAlt_P.LeistungsbereichMotor_links_Upp;
  } else {
    if (rtb_Product_i < GesamtsystemAlt_P.LeistungsbereichMotor_links_Low) {
      rtb_Product_i = GesamtsystemAlt_P.LeistungsbereichMotor_links_Low;
    }
  }

  /* End of Saturate: '<S16>/Leistungsbereich Motor_links' */

  /* DeadZone: '<S16>/Leistungsoffset Motor_links' */
  if (rtb_Product_i > GesamtsystemAlt_P.LeistungsoffsetMotor_links_End) {
    rtb_Product_i -= GesamtsystemAlt_P.LeistungsoffsetMotor_links_End;
  } else if (rtb_Product_i >= GesamtsystemAlt_P.LeistungsoffsetMotor_links_Star)
  {
    rtb_Product_i = 0.0;
  } else {
    rtb_Product_i -= GesamtsystemAlt_P.LeistungsoffsetMotor_links_Star;
  }

  /* End of DeadZone: '<S16>/Leistungsoffset Motor_links' */

  /* S-Function (c280xpwm): '<S16>/PWM Vorgabe fuer Motor_links ' */

  /*-- Update CMPB value for ePWM1 --*/
  {
    EPwm1Regs.CMPB = (uint16_T)((uint32_T)EPwm1Regs.TBPRD * rtb_Product_i * 0.01);
  }

  /* Product: '<S16>/Ansteuerung Motor_rechts' */
  rtb_Product_i = rtb_RoundingFunction1 * GesamtsystemAlt_B.pwm_out_r;

  /* Saturate: '<S16>/Leistungsbereich Motor_rechts' */
  if (rtb_Product_i > GesamtsystemAlt_P.LeistungsbereichMotor_rechts_Up) {
    rtb_Product_i = GesamtsystemAlt_P.LeistungsbereichMotor_rechts_Up;
  } else {
    if (rtb_Product_i < GesamtsystemAlt_P.LeistungsbereichMotor_rechts_Lo) {
      rtb_Product_i = GesamtsystemAlt_P.LeistungsbereichMotor_rechts_Lo;
    }
  }

  /* End of Saturate: '<S16>/Leistungsbereich Motor_rechts' */

  /* DeadZone: '<S16>/Leistungsoffset Motor_rechts' */
  if (rtb_Product_i > GesamtsystemAlt_P.LeistungsoffsetMotor_rechts_End) {
    rtb_Product_i -= GesamtsystemAlt_P.LeistungsoffsetMotor_rechts_End;
  } else if (rtb_Product_i >= GesamtsystemAlt_P.LeistungsoffsetMotor_rechts_Sta)
  {
    rtb_Product_i = 0.0;
  } else {
    rtb_Product_i -= GesamtsystemAlt_P.LeistungsoffsetMotor_rechts_Sta;
  }

  /* End of DeadZone: '<S16>/Leistungsoffset Motor_rechts' */

  /* S-Function (c280xpwm): '<S16>/PWM Vorgabe fuer Motor_rechts' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD * rtb_Product_i * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S16>/Drehrichtungsvorgabe fuer Motor_links' */
  {
    if (GesamtsystemAlt_B.r_l_out_l)
      GpioDataRegs.GPASET.bit.GPIO20 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO20 = 1;
  }

  /* S-Function (c280xgpio_do): '<S16>/Drehrichtungsvorgabe fuer Motor_rechts' */
  {
    if (GesamtsystemAlt_B.r_l_out_r)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* S-Function (scominttobit): '<S18>/Integer to Bit Converter7' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAlt_B.valid_values7;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter7[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S18>/Integer to Bit Converter7' */

  /* S-Function (scominttobit): '<S18>/Integer to Bit Converter8' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAlt_B.valid_values8;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter8[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S18>/Integer to Bit Converter8' */

  /* Chart: '<S18>/Chart1' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart1 */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart1 */
  if (GesamtsystemAlt_DWork.is_active_c1_GesamtsystemAlt == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart1 */
    GesamtsystemAlt_DWork.is_active_c1_GesamtsystemAlt = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart1 */
    /* Transition: '<S29>:3' */
    GesamtsystemAlt_DWork.is_c1_GesamtsystemAlt = GesamtsystemAlt_IN_x0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c1_GesamtsystemAlt) {
     case GesamtsystemA_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S29>:17' */
      /* Transition: '<S29>:24' */
      GesamtsystemAlt_DWork.is_c1_GesamtsystemAlt = GesamtsystemAlt_IN_x1_1;

      /* Entry 'x1_1': '<S29>:26' */
      GesamtsystemAlt_B.int16z_bin[0] = rtb_IntegertoBitConverter7[0];
      GesamtsystemAlt_B.int16z_bin[1] = rtb_IntegertoBitConverter7[1];
      GesamtsystemAlt_B.int16z_bin[2] = rtb_IntegertoBitConverter7[2];
      GesamtsystemAlt_B.int16z_bin[3] = rtb_IntegertoBitConverter7[3];
      GesamtsystemAlt_B.int16z_bin[4] = rtb_IntegertoBitConverter7[4];
      GesamtsystemAlt_B.int16z_bin[5] = rtb_IntegertoBitConverter7[5];
      GesamtsystemAlt_B.int16z_bin[6] = rtb_IntegertoBitConverter7[6];
      GesamtsystemAlt_B.int16z_bin[7] = rtb_IntegertoBitConverter7[7];
      GesamtsystemAlt_B.int16z_bin[8] = rtb_IntegertoBitConverter8[0];
      GesamtsystemAlt_B.int16z_bin[9] = rtb_IntegertoBitConverter8[1];
      GesamtsystemAlt_B.int16z_bin[10] = rtb_IntegertoBitConverter8[2];
      GesamtsystemAlt_B.int16z_bin[11] = rtb_IntegertoBitConverter8[3];
      GesamtsystemAlt_B.int16z_bin[12] = rtb_IntegertoBitConverter8[4];
      GesamtsystemAlt_B.int16z_bin[13] = rtb_IntegertoBitConverter8[5];
      GesamtsystemAlt_B.int16z_bin[14] = rtb_IntegertoBitConverter8[6];
      GesamtsystemAlt_B.int16z_bin[15] = rtb_IntegertoBitConverter8[7];
      break;

     case GesamtsystemAlt_IN_x0:
      /* During 'x0': '<S29>:2' */
      /* Transition: '<S29>:7' */
      GesamtsystemAlt_DWork.is_c1_GesamtsystemAlt =
        GesamtsystemA_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S29>:26' */
      /* Transition: '<S29>:25' */
      GesamtsystemAlt_DWork.is_c1_GesamtsystemAlt =
        GesamtsystemA_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S18>/Chart1' */

  /* DiscretePulseGenerator: '<S34>/Pulse Generator' */
  rtb_RoundingFunction1 = (GesamtsystemAlt_DWork.clockTickCounter <
    GesamtsystemAlt_P.PulseGenerator_Duty) &&
    (GesamtsystemAlt_DWork.clockTickCounter >= 0L) ?
    GesamtsystemAlt_P.PulseGenerator_Amp : 0.0;
  if (GesamtsystemAlt_DWork.clockTickCounter >=
      GesamtsystemAlt_P.PulseGenerator_Period - 1.0) {
    GesamtsystemAlt_DWork.clockTickCounter = 0L;
  } else {
    GesamtsystemAlt_DWork.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S34>/Pulse Generator' */

  /* Outputs for Triggered SubSystem: '<S34>/I2C Reinitialisierung' incorporates:
   *  TriggerPort: '<S36>/Trigger'
   */
  zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                     &GesamtsystemAlt_PrevZCSigState.I2CReinitialisierung_Trig_ZCE,
                     (rtb_RoundingFunction1));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S36>/I2C Reinitialisierung' */
    /* MATLAB Function 'Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung/I2C Reinitialisierung': '<S38>:1' */
    init_i2c();
  }

  /* End of Outputs for SubSystem: '<S34>/I2C Reinitialisierung' */

  /* Outputs for Triggered SubSystem: '<S34>/I2C Reset' incorporates:
   *  TriggerPort: '<S37>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &GesamtsystemAlt_PrevZCSigState.I2CReset_Trig_ZCE,
                     (rtb_RoundingFunction1));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S37>/I2C Reset' */
    /* MATLAB Function 'Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset': '<S39>:1' */
    reset_i2c();
  }

  /* End of Outputs for SubSystem: '<S34>/I2C Reset' */

  /* MATLABSystem: '<S4>/Moving Average2' */
  if (GesamtsystemAlt_DWork.obj.ForgettingFactor !=
      GesamtsystemAlt_P.MovingAverage2_ForgettingFactor) {
    if (GesamtsystemAlt_DWork.obj.isInitialized == 1L) {
      GesamtsystemAlt_DWork.obj.TunablePropsChanged = true;
    }

    GesamtsystemAlt_DWork.obj.ForgettingFactor =
      GesamtsystemAlt_P.MovingAverage2_ForgettingFactor;
  }

  if (GesamtsystemAlt_DWork.obj.TunablePropsChanged) {
    GesamtsystemAlt_DWork.obj.TunablePropsChanged = false;
    sf_internal_predicateOutput =
      (GesamtsystemAlt_DWork.obj.pStatistic->isInitialized == 1L);
    if (sf_internal_predicateOutput) {
      GesamtsystemAlt_DWork.obj.pStatistic->TunablePropsChanged = true;
    }

    GesamtsystemAlt_DWork.obj.pStatistic->ForgettingFactor =
      GesamtsystemAlt_DWork.obj.ForgettingFactor;
  }

  if (GesamtsystemAlt_DWork.obj.pStatistic->isInitialized != 1L) {
    GesamtsystemAlt_DWork.obj.pStatistic->isSetupComplete = false;
    GesamtsystemAlt_DWork.obj.pStatistic->isInitialized = 1L;
    GesamtsystemAlt_DWork.obj.pStatistic->pwN = 1.0;
    GesamtsystemAlt_DWork.obj.pStatistic->pmN = 0.0;
    GesamtsystemAlt_DWork.obj.pStatistic->plambda =
      GesamtsystemAlt_DWork.obj.pStatistic->ForgettingFactor;
    GesamtsystemAlt_DWork.obj.pStatistic->isSetupComplete = true;
    GesamtsystemAlt_DWork.obj.pStatistic->TunablePropsChanged = false;
    GesamtsystemAlt_DWork.obj.pStatistic->pwN = 1.0;
    GesamtsystemAlt_DWork.obj.pStatistic->pmN = 0.0;
  }

  if (GesamtsystemAlt_DWork.obj.pStatistic->TunablePropsChanged) {
    GesamtsystemAlt_DWork.obj.pStatistic->TunablePropsChanged = false;
    GesamtsystemAlt_DWork.obj.pStatistic->plambda =
      GesamtsystemAlt_DWork.obj.pStatistic->ForgettingFactor;
  }

  rtb_RoundingFunction1 = GesamtsystemAlt_DWork.obj.pStatistic->pwN;
  rtb_SollIstAbgleich_x = GesamtsystemAlt_DWork.obj.pStatistic->pmN;
  rtb_Zeitinsec = GesamtsystemAlt_DWork.obj.pStatistic->plambda;
  rtb_SollIstAbgleich_x = (1.0 - 1.0 / rtb_RoundingFunction1) *
    rtb_SollIstAbgleich_x + 1.0 / rtb_RoundingFunction1 *
    GesamtsystemAlt_B.RateTransition3_d;
  GesamtsystemAlt_DWork.obj.pStatistic->pwN = rtb_Zeitinsec *
    rtb_RoundingFunction1 + 1.0;
  GesamtsystemAlt_DWork.obj.pStatistic->pmN = rtb_SollIstAbgleich_x;
  GesamtsystemAlt_B.MovingAverage2 = rtb_SollIstAbgleich_x;

  /* End of MATLABSystem: '<S4>/Moving Average2' */

  /* UnitDelay: '<S4>/Unit Delay2' */
  GesamtsystemAlt_B.UnitDelay2 = GesamtsystemAlt_DWork.UnitDelay2_DSTATE_p;

  /* RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */
  if (GesamtsystemAlt_M->Timing.RateInteraction.TID1_2) {
    GesamtsystemAlt_B.TmpRTBAtSortieralgorithmus2Inpo =
      GesamtsystemAlt_DWork.TmpRTBAtSortieralgorithmus2Inpo;
  }

  /* End of RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */

  /* Chart: '<S4>/Sortieralgorithmus2' */
  if (GesamtsystemAlt_DWork.temporalCounter_i1_o < 255U) {
    GesamtsystemAlt_DWork.temporalCounter_i1_o = ((int16_T)
      GesamtsystemAlt_DWork.temporalCounter_i1_o + 1) & 255U;
  }

  /* Gateway: Subsystem/Sortieralgorithmus2 */
  /* During: Subsystem/Sortieralgorithmus2 */
  if (GesamtsystemAlt_DWork.is_active_c42_GesamtsystemAlt == 0U) {
    /* Entry: Subsystem/Sortieralgorithmus2 */
    GesamtsystemAlt_DWork.is_active_c42_GesamtsystemAlt = 1U;

    /* Entry Internal: Subsystem/Sortieralgorithmus2 */
    /* Transition: '<S44>:182' */
    GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt =
      GesamtsystemAl_IN_setupVariable;

    /* Entry 'setupVariable': '<S44>:175' */
    GesamtsystemAlt_DWork.magacin0 = 0.0;
    GesamtsystemAlt_DWork.magacin1 = 0.0;
    GesamtsystemAlt_DWork.magacin2 = 0.0;
    GesamtsystemAlt_DWork.magacin3 = 0.0;
    GesamtsystemAlt_DWork.magacin4 = 0.0;
    GesamtsystemAlt_DWork.magacin5 = 0.0;
    GesamtsystemAlt_DWork.magacin6 = 0.0;
    GesamtsystemAlt_B.magacin = -1.0;
    GesamtsystemAlt_DWork.cubeCounter = 0.0;
    GesamtsystemAlt_B.signal = 0.0;
    GesamtsystemAlt_B.lampeSortier = 0.0;
    GesamtsystemAlt_B.lampeCubeLoaded = 0.0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt) {
     case GesamtsystemAlt_IN_Black:
      /* During 'Black': '<S44>:187' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_o >= 100U) {
        /* Transition: '<S44>:188' */
        GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt =
          GesamtsystemAlt_IN_DetectedCube;

        /* Entry 'DetectedCube': '<S44>:180' */
        GesamtsystemAlt_DWork.cubeCounter++;
      } else {
        GesamtsystemAlt_B.magacin = 6.0;
      }
      break;

     case GesamtsystemAlt_IN_BlueCube:
      /* During 'BlueCube': '<S44>:185' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_o >= 100U) {
        /* Transition: '<S44>:189' */
        GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt =
          GesamtsystemAlt_IN_DetectedCube;

        /* Entry 'DetectedCube': '<S44>:180' */
        GesamtsystemAlt_DWork.cubeCounter++;
      }
      break;

     case GesamtsystemAlt_IN_DetectedCube:
      /* During 'DetectedCube': '<S44>:180' */
      if (GesamtsystemAlt_B.UnitDelay2 == 0.0F) {
        /* Transition: '<S44>:168' */
        GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt =
          GesamtsystemAlt_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S44>:183' */
        GesamtsystemAlt_B.magacin = -1.0;
        GesamtsystemAlt_B.lampeCubeLoaded = 1.0;
      }
      break;

     case GesamtsystemAlt_IN_RedCube:
      /* During 'RedCube': '<S44>:186' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_o >= 100U) {
        /* Transition: '<S44>:190' */
        GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt =
          GesamtsystemAlt_IN_DetectedCube;

        /* Entry 'DetectedCube': '<S44>:180' */
        GesamtsystemAlt_DWork.cubeCounter++;
      }
      break;

     case GesamtsystemAlt_IN_cubeLoaded:
      /* During 'cubeLoaded': '<S44>:183' */
      if ((GesamtsystemAlt_B.MovingAverage2 < 400.0) ||
          (GesamtsystemAlt_B.MovingAverage2 > 1300.0)) {
        /* Transition: '<S44>:169' */
        GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt =
          IN_photoelectricBarrierActivate;

        /* Entry 'photoelectricBarrierActivated': '<S44>:184' */
        GesamtsystemAlt_B.lampeCubeLoaded = 0.0;
      } else {
        GesamtsystemAlt_B.magacin = -1.0;
      }
      break;

     case IN_photoelectricBarrierActivate:
      /* During 'photoelectricBarrierActivated': '<S44>:184' */
      if (GesamtsystemAlt_B.MovingAverage2 > 2150.0) {
        /* Transition: '<S44>:172' */
        GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt = GesamtsystemAlt_IN_Black;
        GesamtsystemAlt_DWork.temporalCounter_i1_o = 0U;

        /* Entry 'Black': '<S44>:187' */
        GesamtsystemAlt_B.magacin = 6.0;
        GesamtsystemAlt_DWork.magacin6++;
      } else if (GesamtsystemAlt_B.MovingAverage2 < 1000.0) {
        /* Transition: '<S44>:171' */
        GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt =
          GesamtsystemAlt_IN_RedCube;
        GesamtsystemAlt_DWork.temporalCounter_i1_o = 0U;

        /* Entry 'RedCube': '<S44>:186' */
        GesamtsystemAlt_B.magacin = GesamtsystemAlt_findPlaceForRed();
      } else {
        if ((GesamtsystemAlt_B.MovingAverage2 >= 1000.0) &&
            (GesamtsystemAlt_B.MovingAverage2 <= 2150.0)) {
          /* Transition: '<S44>:170' */
          GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt =
            GesamtsystemAlt_IN_BlueCube;
          GesamtsystemAlt_DWork.temporalCounter_i1_o = 0U;

          /* Entry 'BlueCube': '<S44>:185' */
          GesamtsystemAlt_B.magacin = GesamtsystemAl_findPlaceForBlue();
        }
      }
      break;

     case GesamtsystemAl_IN_setupVariable:
      /* During 'setupVariable': '<S44>:175' */
      if (GesamtsystemAlt_B.TmpRTBAtSortieralgorithmus2Inpo > 0.0F) {
        /* Transition: '<S44>:219' */
        GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt =
          GesamtsystemAlt_IN_wait_jcl;
        GesamtsystemAlt_DWork.temporalCounter_i1_o = 0U;

        /* Entry 'wait': '<S44>:218' */
      } else {
        GesamtsystemAlt_DWork.magacin0 = 0.0;
        GesamtsystemAlt_DWork.magacin1 = 0.0;
        GesamtsystemAlt_DWork.magacin2 = 0.0;
        GesamtsystemAlt_DWork.magacin3 = 0.0;
        GesamtsystemAlt_DWork.magacin4 = 0.0;
        GesamtsystemAlt_DWork.magacin5 = 0.0;
        GesamtsystemAlt_DWork.magacin6 = 0.0;
        GesamtsystemAlt_B.magacin = -1.0;
        GesamtsystemAlt_DWork.cubeCounter = 0.0;
        GesamtsystemAlt_B.signal = 0.0;
        GesamtsystemAlt_B.lampeSortier = 0.0;
        GesamtsystemAlt_B.lampeCubeLoaded = 0.0;
      }
      break;

     default:
      /* During 'wait': '<S44>:218' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_o >= 200U) {
        /* Transition: '<S44>:220' */
        GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt =
          GesamtsystemAlt_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S44>:183' */
        GesamtsystemAlt_B.magacin = -1.0;
        GesamtsystemAlt_B.lampeCubeLoaded = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Sortieralgorithmus2' */

  /* Lookup_n-D: '<S4>/1-D Lookup Table2' */
  rtb_RoundingFunction1 = look1_binlxpw(GesamtsystemAlt_B.magacin,
    GesamtsystemAlt_P.uDLookupTable2_bp01Data,
    GesamtsystemAlt_P.uDLookupTable2_tableData, 7UL);

  /* RateTransition: '<S4>/TmpRTBAtChart7Inport4' */
  if (GesamtsystemAlt_M->Timing.RateInteraction.TID1_2) {
    GesamtsystemAlt_B.TmpRTBAtChart7Inport4 =
      GesamtsystemAlt_DWork.TmpRTBAtChart7Inport4_Buffer0;
  }

  /* End of RateTransition: '<S4>/TmpRTBAtChart7Inport4' */

  /* Chart: '<S4>/Chart7' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion2'
   */
  if (GesamtsystemAlt_DWork.temporalCounter_i1_gj < 255U) {
    GesamtsystemAlt_DWork.temporalCounter_i1_gj = ((int16_T)
      GesamtsystemAlt_DWork.temporalCounter_i1_gj + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart7 */
  /* During: Subsystem/Chart7 */
  if (GesamtsystemAlt_DWork.is_active_c38_GesamtsystemAlt == 0U) {
    /* Entry: Subsystem/Chart7 */
    GesamtsystemAlt_DWork.is_active_c38_GesamtsystemAlt = 1U;

    /* Entry Internal: Subsystem/Chart7 */
    /* Transition: '<S41>:70' */
    GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
      GesamtsystemAl_IN_startPosition;

    /* Entry 'startPosition': '<S41>:157' */
    GesamtsystemAlt_B.angle = 0.0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt) {
     case Gesamtsys_IN_betterLeftPosition:
      /* During 'betterLeftPosition': '<S41>:151' */
      /* Transition: '<S41>:153' */
      GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
        GesamtsystemAlt_IN_waitForCube;

      /* Entry 'waitForCube': '<S41>:29' */
      break;

     case Gesamtsy_IN_betterRightPosition:
      /* During 'betterRightPosition': '<S41>:150' */
      /* Transition: '<S41>:155' */
      GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
        GesamtsystemAlt_IN_waitForCube;

      /* Entry 'waitForCube': '<S41>:29' */
      break;

     case GesamtsystemAlt_IN_closeGate:
      /* During 'closeGate': '<S41>:73' */
      if (GesamtsystemAlt_B.UnitDelay2 == 0.0F) {
        /* Transition: '<S41>:98' */
        GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
          GesamtsystemAlt_IN_waitForCube;

        /* Entry 'waitForCube': '<S41>:29' */
      } else {
        GesamtsystemAlt_B.signal_o = 0.0;
      }
      break;

     case GesamtsystemAl_IN_closeKlappe_j:
      /* During 'closeKlappe': '<S41>:159' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_gj >= 230U) {
        /* Transition: '<S41>:161' */
        GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
          GesamtsystemAlt_IN_waitForCube;

        /* Entry 'waitForCube': '<S41>:29' */
      } else {
        GesamtsystemAlt_B.signal_o = 0.0;
      }
      break;

     case GesamtsystemAlt_IN_firstEntry:
      /* During 'firstEntry': '<S41>:69' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_gj >= 70U) {
        /* Transition: '<S41>:160' */
        GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
          GesamtsystemAl_IN_closeKlappe_j;
        GesamtsystemAlt_DWork.temporalCounter_i1_gj = 0U;

        /* Entry 'closeKlappe': '<S41>:159' */
        GesamtsystemAlt_B.signal_o = 0.0;
      }
      break;

     case GesamtsystemAlt_IN_goToMagacin:
      /* During 'goToMagacin': '<S41>:3' */
      if (((real32_T)GesamtsystemAlt_B.RateTransition3 > GesamtsystemAlt_B.angle
           - 2.0) && ((real32_T)GesamtsystemAlt_B.RateTransition3 <
                      GesamtsystemAlt_B.angle + 2.0)) {
        /* Transition: '<S41>:66' */
        GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
          GesamtsystemAlt_IN_openGate;
        GesamtsystemAlt_DWork.temporalCounter_i1_gj = 0U;

        /* Entry 'openGate': '<S41>:72' */
        GesamtsystemAlt_B.signal_o = 1.0;
        GesamtsystemAlt_B.movingCube = 0.0F;
      }
      break;

     case GesamtsystemAlt_IN_goToZero:
      /* During 'goToZero': '<S41>:59' */
      if (((real32_T)GesamtsystemAlt_B.RateTransition3 > -2.0F) && ((real32_T)
           GesamtsystemAlt_B.RateTransition3 < 2.0F)) {
        /* Transition: '<S41>:61' */
        GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt = GesamtsystemAlt_IN_wait_j;
        GesamtsystemAlt_DWork.temporalCounter_i1_gj = 0U;
      } else {
        GesamtsystemAlt_B.angle = 0.0;
        GesamtsystemAlt_B.movingCube = 1.0F;
      }
      break;

     case GesamtsystemAlt_IN_openGate:
      /* During 'openGate': '<S41>:72' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_gj >= 50U) {
        /* Transition: '<S41>:75' */
        GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
          GesamtsystemAlt_IN_closeGate;

        /* Entry 'closeGate': '<S41>:73' */
        GesamtsystemAlt_B.signal_o = 0.0;
      } else {
        GesamtsystemAlt_B.signal_o = 1.0;
        GesamtsystemAlt_B.movingCube = 0.0F;
      }
      break;

     case GesamtsystemAl_IN_startPosition:
      /* During 'startPosition': '<S41>:157' */
      if (GesamtsystemAlt_B.TmpRTBAtChart7Inport4 > 0.0F) {
        /* Transition: '<S41>:158' */
        GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
          GesamtsystemAlt_IN_firstEntry;
        GesamtsystemAlt_DWork.temporalCounter_i1_gj = 0U;

        /* Entry 'firstEntry': '<S41>:69' */
        GesamtsystemAlt_B.angle = 300.0;
        GesamtsystemAlt_B.signal_o = -1.0;
      }
      break;

     case GesamtsystemAlt_IN_wait_j:
      /* During 'wait': '<S41>:101' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_gj >= 40U) {
        /* Transition: '<S41>:102' */
        GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
          GesamtsystemAlt_IN_goToMagacin;

        /* Entry 'goToMagacin': '<S41>:3' */
        GesamtsystemAlt_B.angle = rtb_RoundingFunction1;
      }
      break;

     default:
      /* During 'waitForCube': '<S41>:29' */
      if (GesamtsystemAlt_B.angle == 85.0) {
        /* Transition: '<S41>:154' */
        GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
          Gesamtsy_IN_betterRightPosition;

        /* Entry 'betterRightPosition': '<S41>:150' */
        GesamtsystemAlt_B.angle = 220.0;
      } else if (GesamtsystemAlt_B.angle == -40.0) {
        /* Transition: '<S41>:152' */
        GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
          Gesamtsys_IN_betterLeftPosition;

        /* Entry 'betterLeftPosition': '<S41>:151' */
        GesamtsystemAlt_B.angle = -170.0;
      } else {
        if (rtb_RoundingFunction1 != -1.0) {
          /* Transition: '<S41>:60' */
          GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
            GesamtsystemAlt_IN_goToZero;

          /* Entry 'goToZero': '<S41>:59' */
          GesamtsystemAlt_B.angle = 0.0;
          GesamtsystemAlt_B.movingCube = 1.0F;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart7' */

  /* Sum: '<S47>/Sum' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion2'
   */
  rtb_Product_i = GesamtsystemAlt_B.angle - (real32_T)
    GesamtsystemAlt_B.RateTransition3;

  /* DeadZone: '<S47>/Dead Zone' */
  if (rtb_Product_i > GesamtsystemAlt_P.DeadZone_End) {
    rtb_Product_i -= GesamtsystemAlt_P.DeadZone_End;
  } else if (rtb_Product_i >= GesamtsystemAlt_P.DeadZone_Start) {
    rtb_Product_i = 0.0;
  } else {
    rtb_Product_i -= GesamtsystemAlt_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S47>/Dead Zone' */

  /* Gain: '<S47>/Verstaerkung' */
  rtb_RoundingFunction1 = GesamtsystemAlt_P.Verstaerkung_Gain * rtb_Product_i;

  /* MATLAB Function: '<S47>/Richtung' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung': '<S49>:1' */
  if (rtb_RoundingFunction1 > 0.0) {
    /* '<S49>:1:3' */
    /* '<S49>:1:4' */
    GesamtsystemAlt_B.y = 1.0;
  } else {
    /* '<S49>:1:6' */
    GesamtsystemAlt_B.y = 0.0;
  }

  /* End of MATLAB Function: '<S47>/Richtung' */

  /* S-Function (c280xgpio_do): '<S43>/Drehrichtungsvorgabe für einen Motor' */
  {
    if (GesamtsystemAlt_B.y)
      GpioDataRegs.GPASET.bit.GPIO19 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO19 = 1;
  }

  /* Abs: '<S47>/Abs' */
  rtb_RoundingFunction1 = fabs(rtb_RoundingFunction1);

  /* MATLAB Function: '<S47>/Betrag' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag': '<S48>:1' */
  if ((0.5 < rtb_RoundingFunction1) && (rtb_RoundingFunction1 < 60.0)) {
    /* '<S48>:1:3' */
    /* '<S48>:1:4' */
    rtb_y_b = 60.0;
  } else if (rtb_RoundingFunction1 <= 0.5) {
    /* '<S48>:1:5' */
    /* '<S48>:1:6' */
    rtb_y_b = 0.0;
  } else if (rtb_RoundingFunction1 >= 100.0) {
    /* '<S48>:1:7' */
    /* '<S48>:1:8' */
    rtb_y_b = 100.0;
  } else {
    /* '<S48>:1:10' */
    rtb_y_b = rtb_RoundingFunction1;
  }

  /* End of MATLAB Function: '<S47>/Betrag' */

  /* S-Function (c280xpwm): '<S43>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM4 --*/
  {
    EPwm4Regs.CMPB = (uint16_T)((uint32_T)EPwm4Regs.TBPRD * rtb_y_b * 0.01);
  }

  /* RateTransition: '<S45>/TmpRTBAtProductInport1' */
  if (GesamtsystemAlt_M->Timing.RateInteraction.TID1_2) {
    GesamtsystemAlt_B.TmpRTBAtProductInport1 =
      GesamtsystemAlt_DWork.TmpRTBAtProductInport1_Buffer0;
  }

  /* End of RateTransition: '<S45>/TmpRTBAtProductInport1' */

  /* Chart: '<S4>/Chart6' */
  if (GesamtsystemAlt_DWork.temporalCounter_i1_ok < 127U) {
    GesamtsystemAlt_DWork.temporalCounter_i1_ok = ((int16_T)
      GesamtsystemAlt_DWork.temporalCounter_i1_ok + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart6 */
  /* During: Subsystem/Chart6 */
  if (GesamtsystemAlt_DWork.is_active_c37_GesamtsystemAlt == 0U) {
    /* Entry: Subsystem/Chart6 */
    GesamtsystemAlt_DWork.is_active_c37_GesamtsystemAlt = 1U;

    /* Entry Internal: Subsystem/Chart6 */
    /* Transition: '<S40>:16' */
    GesamtsystemAlt_DWork.is_c37_GesamtsystemAlt = GesamtsystemAlt_IN_wait;

    /* Entry 'wait': '<S40>:4' */
    GesamtsystemAlt_B.gateDirection_i = 0.0;
    GesamtsystemAlt_B.gatePWM_c = 50.0;
    GesamtsystemAlt_B.movingCube_d = 0.0F;
  } else {
    switch (GesamtsystemAlt_DWork.is_c37_GesamtsystemAlt) {
     case GesamtsystemAlt_IN_CloseRegular:
      /* During 'CloseRegular': '<S40>:22' */
      GesamtsystemAlt_B.gatePWM_c = 100.0;
      GesamtsystemAlt_B.gateDirection_i = 0.0;
      break;

     case GesamtsystemAlt_IN_close:
      /* During 'close': '<S40>:3' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_ok >= 40U) {
        /* Transition: '<S40>:7' */
        GesamtsystemAlt_DWork.is_c37_GesamtsystemAlt = GesamtsystemAlt_IN_wait;

        /* Entry 'wait': '<S40>:4' */
        GesamtsystemAlt_B.gateDirection_i = 0.0;
        GesamtsystemAlt_B.gatePWM_c = 50.0;
        GesamtsystemAlt_B.movingCube_d = 0.0F;
      } else {
        GesamtsystemAlt_B.gateDirection_i = 0.0;
      }
      break;

     case GesamtsystemAlt_IN_closeKlappe:
      /* During 'closeKlappe': '<S40>:17' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_ok >= 100U) {
        /* Transition: '<S40>:19' */
        GesamtsystemAlt_DWork.is_c37_GesamtsystemAlt = GesamtsystemAlt_IN_wait;

        /* Entry 'wait': '<S40>:4' */
        GesamtsystemAlt_B.gateDirection_i = 0.0;
        GesamtsystemAlt_B.gatePWM_c = 50.0;
        GesamtsystemAlt_B.movingCube_d = 0.0F;
      } else {
        GesamtsystemAlt_B.gatePWM_c = 100.0;
        GesamtsystemAlt_B.gateDirection_i = 0.0;
      }
      break;

     case GesamtsystemAlt_IN_open:
      /* During 'open': '<S40>:1' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_ok >= 50U) {
        /* Transition: '<S40>:6' */
        GesamtsystemAlt_DWork.is_c37_GesamtsystemAlt = GesamtsystemAlt_IN_close;
        GesamtsystemAlt_DWork.temporalCounter_i1_ok = 0U;

        /* Entry 'close': '<S40>:3' */
        GesamtsystemAlt_B.gateDirection_i = 0.0;
      } else {
        GesamtsystemAlt_B.gateDirection_i = 1.0;
        GesamtsystemAlt_B.gatePWM_c = 100.0;
        GesamtsystemAlt_B.movingCube_d = 1.0F;
      }
      break;

     default:
      /* During 'wait': '<S40>:4' */
      if (GesamtsystemAlt_B.signal_o == 1.0) {
        /* Transition: '<S40>:5' */
        GesamtsystemAlt_DWork.is_c37_GesamtsystemAlt = GesamtsystemAlt_IN_open;
        GesamtsystemAlt_DWork.temporalCounter_i1_ok = 0U;

        /* Entry 'open': '<S40>:1' */
        GesamtsystemAlt_B.gateDirection_i = 1.0;
        GesamtsystemAlt_B.gatePWM_c = 100.0;
        GesamtsystemAlt_B.movingCube_d = 1.0F;
      } else if (GesamtsystemAlt_B.signal_o == -1.0) {
        /* Transition: '<S40>:18' */
        GesamtsystemAlt_DWork.is_c37_GesamtsystemAlt =
          GesamtsystemAlt_IN_closeKlappe;
        GesamtsystemAlt_DWork.temporalCounter_i1_ok = 0U;

        /* Entry 'closeKlappe': '<S40>:17' */
        GesamtsystemAlt_B.gatePWM_c = 100.0;
        GesamtsystemAlt_B.gateDirection_i = 0.0;
      } else {
        GesamtsystemAlt_B.gateDirection_i = 0.0;
        GesamtsystemAlt_B.gatePWM_c = 50.0;
        GesamtsystemAlt_B.movingCube_d = 0.0F;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart6' */

  /* Product: '<S45>/Product' */
  rtb_Product_i = GesamtsystemAlt_B.TmpRTBAtProductInport1 *
    GesamtsystemAlt_B.gatePWM_c;

  /* S-Function (c280xpwm): '<S45>/PWM Vorgabe für einen Motor 1' */

  /*-- Update CMPB value for ePWM6 --*/
  {
    EPwm6Regs.CMPB = (uint16_T)((uint32_T)EPwm6Regs.TBPRD * rtb_Product_i * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S45>/Drehrichtungsvorgabe für einen Motor1' */
  {
    if (GesamtsystemAlt_B.gateDirection_i)
      GpioDataRegs.GPASET.bit.GPIO16 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO16 = 1;
  }

  /* Update for Delay: '<S5>/Delay' */
  GesamtsystemAlt_DWork.Delay_DSTATE = GesamtsystemAlt_B.Endsignal;

  /* Update for Delay: '<S10>/Delay' */
  GesamtsystemAlt_DWork.Delay_DSTATE_m = rtb_RoundingFunction;

  /* Update for UnitDelay: '<S4>/Unit Delay2' incorporates:
   *  Sum: '<S4>/Sum2'
   */
  GesamtsystemAlt_DWork.UnitDelay2_DSTATE_p = GesamtsystemAlt_B.movingCube +
    GesamtsystemAlt_B.movingCube_d;
}

/* Model step function for TID2 */
void GesamtsystemAlt_step2(void)       /* Sample time: [0.1s, 0.0s] */
{
  /* S-Function (c280xgpio_di): '<S4>/Digital Input2' */
  {
    GesamtsystemAlt_B.DigitalInput2 = GpioDataRegs.GPADAT.bit.GPIO24;
  }

  /* Chart: '<S4>/Chart8' */
  if (GesamtsystemAlt_DWork.temporalCounter_i1_a < 31U) {
    GesamtsystemAlt_DWork.temporalCounter_i1_a = ((int16_T)
      GesamtsystemAlt_DWork.temporalCounter_i1_a + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart8 */
  /* During: Subsystem/Chart8 */
  if (GesamtsystemAlt_DWork.is_active_c39_GesamtsystemAlt == 0U) {
    /* Entry: Subsystem/Chart8 */
    GesamtsystemAlt_DWork.is_active_c39_GesamtsystemAlt = 1U;

    /* Entry Internal: Subsystem/Chart8 */
    /* Transition: '<S42>:16' */
    GesamtsystemAlt_DWork.is_c39_GesamtsystemAlt = GesamtsystemAlt_IN_entry;

    /* Entry 'entry': '<S42>:20' */
    GesamtsystemAlt_DWork.tasterCounter = 0.0;
    GesamtsystemAlt_B.panzerMotor = 0.0;
    GesamtsystemAlt_B.lampe = 0.0;
    GesamtsystemAlt_B.klappe = 0.0;
  } else {
    switch (GesamtsystemAlt_DWork.is_c39_GesamtsystemAlt) {
     case GesamtsystemAlt_IN_Lampe:
      /* During 'Lampe': '<S42>:35' */
      GesamtsystemAlt_B.lampe = 1.0;
      break;

     case GesamtsystemAlt_IN_Stillstand:
      /* During 'Stillstand': '<S42>:25' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_a >= 10U) {
        /* Transition: '<S42>:36' */
        GesamtsystemAlt_DWork.is_c39_GesamtsystemAlt = GesamtsystemAlt_IN_Lampe;

        /* Entry 'Lampe': '<S42>:35' */
        GesamtsystemAlt_B.lampe = 1.0;
      } else {
        GesamtsystemAlt_B.gatePWM = 0.0;
      }
      break;

     case GesamtsystemAlt_IN_end:
      /* During 'end': '<S42>:23' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_a >= 10U) {
        /* Transition: '<S42>:26' */
        GesamtsystemAlt_DWork.is_c39_GesamtsystemAlt =
          GesamtsystemAlt_IN_Stillstand;
        GesamtsystemAlt_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'Stillstand': '<S42>:25' */
        GesamtsystemAlt_B.gatePWM = 0.0;
      } else {
        GesamtsystemAlt_B.gatePWM = 100.0;
        GesamtsystemAlt_B.gateDirection = 1.0;
        GesamtsystemAlt_B.panzerMotor = 0.0;
        GesamtsystemAlt_B.klappe = 0.0;
      }
      break;

     case GesamtsystemAlt_IN_entry:
      /* During 'entry': '<S42>:20' */
      /* Transition: '<S42>:21' */
      GesamtsystemAlt_DWork.is_c39_GesamtsystemAlt = GesamtsystemAlt_IN_wait_jc;

      /* Entry 'wait': '<S42>:4' */
      GesamtsystemAlt_B.gatePWM = 0.0;
      GesamtsystemAlt_B.gateDirection = 0.0;
      break;

     case GesamtsystemAlt_IN_open_j:
      /* During 'open': '<S42>:1' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_a >= 5U) {
        /* Transition: '<S42>:6' */
        GesamtsystemAlt_DWork.is_c39_GesamtsystemAlt = GesamtsystemAlt_IN_wait1;
        GesamtsystemAlt_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'wait1': '<S42>:3' */
        GesamtsystemAlt_B.gatePWM = 0.0;
      }
      break;

     case GesamtsystemAlt_IN_wait_jc:
      /* During 'wait': '<S42>:4' */
      if ((GesamtsystemAlt_B.DigitalInput2 > 0.0F) &&
          (GesamtsystemAlt_DWork.tasterCounter >= 1.0)) {
        /* Transition: '<S42>:24' */
        GesamtsystemAlt_DWork.is_c39_GesamtsystemAlt = GesamtsystemAlt_IN_end;
        GesamtsystemAlt_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'end': '<S42>:23' */
        GesamtsystemAlt_B.gatePWM = 100.0;
        GesamtsystemAlt_B.gateDirection = 1.0;
        GesamtsystemAlt_B.panzerMotor = 0.0;
        GesamtsystemAlt_B.klappe = 0.0;
      } else if ((GesamtsystemAlt_B.DigitalInput2 == 1.0F) &&
                 (GesamtsystemAlt_DWork.tasterCounter == 0.0)) {
        /* Transition: '<S42>:5' */
        GesamtsystemAlt_DWork.is_c39_GesamtsystemAlt = GesamtsystemAlt_IN_open_j;
        GesamtsystemAlt_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'open': '<S42>:1' */
        GesamtsystemAlt_DWork.tasterCounter++;
        GesamtsystemAlt_B.gatePWM = 100.0;
        GesamtsystemAlt_B.gateDirection = 0.0;
        GesamtsystemAlt_B.panzerMotor = 1.0;
        GesamtsystemAlt_B.klappe = 1.0;
      } else {
        GesamtsystemAlt_B.gatePWM = 0.0;
        GesamtsystemAlt_B.gateDirection = 0.0;
      }
      break;

     default:
      /* During 'wait1': '<S42>:3' */
      if (GesamtsystemAlt_DWork.temporalCounter_i1_a >= 20U) {
        /* Transition: '<S42>:22' */
        GesamtsystemAlt_DWork.is_c39_GesamtsystemAlt =
          GesamtsystemAlt_IN_wait_jc;

        /* Entry 'wait': '<S42>:4' */
        GesamtsystemAlt_B.gatePWM = 0.0;
        GesamtsystemAlt_B.gateDirection = 0.0;
      } else {
        GesamtsystemAlt_B.gatePWM = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart8' */

  /* S-Function (c280xgpio_do): '<S4>/Drehrichtungsvorgabe für einen Motor3' */
  {
    if (GesamtsystemAlt_B.gateDirection)
      GpioDataRegs.GPASET.bit.GPIO15 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO15 = 1;
  }

  /* S-Function (c280xpwm): '<S4>/ePWM2' */

  /*-- Update CMPB value for ePWM5 --*/
  {
    EPwm5Regs.CMPB = (uint16_T)((uint32_T)EPwm5Regs.TBPRD *
      GesamtsystemAlt_B.gatePWM * 0.01);
  }

  /* Update for RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */
  GesamtsystemAlt_DWork.TmpRTBAtSortieralgorithmus2Inpo =
    GesamtsystemAlt_B.DigitalInput2;

  /* Update for RateTransition: '<S4>/TmpRTBAtChart7Inport4' */
  GesamtsystemAlt_DWork.TmpRTBAtChart7Inport4_Buffer0 =
    GesamtsystemAlt_B.DigitalInput2;

  /* Update for RateTransition: '<S45>/TmpRTBAtProductInport1' */
  GesamtsystemAlt_DWork.TmpRTBAtProductInport1_Buffer0 =
    GesamtsystemAlt_B.klappe;
}

/* Model initialize function */
void GesamtsystemAlt_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)GesamtsystemAlt_M, 0,
                sizeof(RT_MODEL_GesamtsystemAlt));

  /* block I/O */
  (void) memset(((void *) &GesamtsystemAlt_B), 0,
                sizeof(BlockIO_GesamtsystemAlt));

  /* states (dwork) */
  (void) memset((void *)&GesamtsystemAlt_DWork, 0,
                sizeof(D_Work_GesamtsystemAlt));

  {
    boolean_T flag;
    int16_T i;

    /* Start for S-Function (c28xisr_c2000): '<S18>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S18>/Triggered Subsystem'
     */
    /* Start for function-call system: '<S18>/Triggered Subsystem' */

    /* Start for S-Function (c280xi2c_rx): '<S35>/I2C Receive' */

    /* Initialize GesamtsystemAlt_B.I2CReceive_o1[0] */
    {
      GesamtsystemAlt_B.I2CReceive_o1[0] = (uint8_T)0.0;
      GesamtsystemAlt_B.I2CReceive_o1[1] = (uint8_T)0.0;
      GesamtsystemAlt_B.I2CReceive_o1[2] = (uint8_T)0.0;
      GesamtsystemAlt_B.I2CReceive_o1[3] = (uint8_T)0.0;
      GesamtsystemAlt_B.I2CReceive_o1[4] = (uint8_T)0.0;
      GesamtsystemAlt_B.I2CReceive_o1[5] = (uint8_T)0.0;
      GesamtsystemAlt_B.I2CReceive_o1[6] = (uint8_T)0.0;
      GesamtsystemAlt_B.I2CReceive_o1[7] = (uint8_T)0.0;
      GesamtsystemAlt_B.I2CReceive_o1[8] = (uint8_T)0.0;
      GesamtsystemAlt_B.I2CReceive_o1[9] = (uint8_T)0.0;
    }

    /* Start for RateTransition: '<S18>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      GesamtsystemAlt_B.RateTransition[i] =
        GesamtsystemAlt_P.RateTransition_InitialCondition;
    }

    /* End of Start for RateTransition: '<S18>/Rate Transition' */

    /* Start for S-Function (c280xgpio_di): '<S13>/Signaleingang fuer Heckschalter' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFCFFFF;
    GpioCtrlRegs.GPADIR.all &= 0xFEFFFFFF;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S5>/Signalaussgang fuer Endsignallampe' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFCFFFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x4000000;
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

    /* Start for S-Function (c280xpwm): '<S16>/PWM Vorgabe fuer Motor_links ' */

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

    /* Start for S-Function (c280xpwm): '<S16>/PWM Vorgabe fuer Motor_rechts' */

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

    /* Start for S-Function (c280xgpio_do): '<S16>/Drehrichtungsvorgabe fuer Motor_links' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFCFF;
    GpioCtrlRegs.GPADIR.all |= 0x100000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S16>/Drehrichtungsvorgabe fuer Motor_rechts' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFF3FF;
    GpioCtrlRegs.GPADIR.all |= 0x200000;
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

    /* Start for S-Function (c280xadc): '<S4>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
    if (adcInitFlag == 0) {
      InitAdc();
      adcInitFlag = 1;
    }

    config_ADC_A (2U, 33U, 0U, 0U, 0U);

    /* Start for MATLABSystem: '<S4>/Moving Average2' */
    GesamtsystemAlt_DWork.obj.matlabCodegenIsDeleted = true;
    GesamtsystemAlt_DWork.obj.isInitialized = 0L;
    GesamtsystemAlt_DWork.obj.NumChannels = -1L;
    GesamtsystemAlt_DWork.obj.matlabCodegenIsDeleted = false;
    GesamtsystemAlt_DWork.objisempty = true;
    if (GesamtsystemAlt_DWork.obj.isInitialized == 1L) {
      GesamtsystemAlt_DWork.obj.TunablePropsChanged = true;
    }

    GesamtsystemAlt_DWork.obj.ForgettingFactor =
      GesamtsystemAlt_P.MovingAverage2_ForgettingFactor;
    GesamtsystemAlt_DWork.obj.isSetupComplete = false;
    GesamtsystemAlt_DWork.obj.isInitialized = 1L;
    GesamtsystemAlt_DWork.obj.NumChannels = 1L;
    GesamtsystemAlt_DWork.gobj_0.isInitialized = 0L;
    flag = (GesamtsystemAlt_DWork.gobj_0.isInitialized == 1L);
    if (flag) {
      GesamtsystemAlt_DWork.gobj_0.TunablePropsChanged = true;
    }

    GesamtsystemAlt_DWork.gobj_0.ForgettingFactor =
      GesamtsystemAlt_DWork.obj.ForgettingFactor;
    GesamtsystemAlt_DWork.obj.pStatistic = &GesamtsystemAlt_DWork.gobj_0;
    GesamtsystemAlt_DWork.obj.isSetupComplete = true;
    GesamtsystemAlt_DWork.obj.TunablePropsChanged = false;

    /* End of Start for MATLABSystem: '<S4>/Moving Average2' */

    /* Start for RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */
    GesamtsystemAlt_B.TmpRTBAtSortieralgorithmus2Inpo =
      GesamtsystemAlt_P.TmpRTBAtSortieralgorithmus2Inpo;

    /* Start for RateTransition: '<S4>/TmpRTBAtChart7Inport4' */
    GesamtsystemAlt_B.TmpRTBAtChart7Inport4 =
      GesamtsystemAlt_P.TmpRTBAtChart7Inport4_InitialCo;

    /* Start for S-Function (c280xgpio_do): '<S43>/Drehrichtungsvorgabe für einen Motor' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFF3F;
    GpioCtrlRegs.GPADIR.all |= 0x80000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S43>/PWM Vorgabe für einen Motor ' */

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

    /* Start for RateTransition: '<S45>/TmpRTBAtProductInport1' */
    GesamtsystemAlt_B.TmpRTBAtProductInport1 =
      GesamtsystemAlt_P.TmpRTBAtProductInport1_InitialC;

    /* Start for S-Function (c280xpwm): '<S45>/PWM Vorgabe für einen Motor 1' */

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

    /* Start for S-Function (c280xgpio_do): '<S45>/Drehrichtungsvorgabe für einen Motor1' */
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

    /* Start for S-Function (c280xgpio_do): '<S46>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
    EALLOW;
    GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
    GpioCtrlRegs.GPBDIR.all |= 0x4;
    EDIS;
    GesamtsystemAlt_PrevZCSigState.I2CReinitialisierung_Trig_ZCE =
      UNINITIALIZED_ZCSIG;
    GesamtsystemAlt_PrevZCSigState.I2CReset_Trig_ZCE = UNINITIALIZED_ZCSIG;

    /* InitializeConditions for RateTransition: '<S18>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      GesamtsystemAlt_DWork.RateTransition_Buffer[i] =
        GesamtsystemAlt_P.RateTransition_InitialCondition;
    }

    /* End of InitializeConditions for RateTransition: '<S18>/Rate Transition' */

    /* InitializeConditions for Delay: '<S5>/Delay' */
    GesamtsystemAlt_DWork.Delay_DSTATE =
      GesamtsystemAlt_P.Delay_InitialCondition;

    /* InitializeConditions for Delay: '<S10>/Delay' */
    GesamtsystemAlt_DWork.Delay_DSTATE_m =
      GesamtsystemAlt_P.Delay_InitialCondition_a;

    /* InitializeConditions for DiscretePulseGenerator: '<S34>/Pulse Generator' */
    GesamtsystemAlt_DWork.clockTickCounter = 0L;

    /* InitializeConditions for Memory: '<S51>/Memory' */
    GesamtsystemAlt_DWork.Memory_PreviousInput =
      GesamtsystemAlt_P.EdgeDetector1_ic;

    /* InitializeConditions for UnitDelay: '<S50>/Unit Delay3' */
    GesamtsystemAlt_DWork.UnitDelay3_DSTATE =
      GesamtsystemAlt_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S50>/Unit Delay4' */
    GesamtsystemAlt_DWork.UnitDelay4_DSTATE =
      GesamtsystemAlt_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S50>/Unit Delay5' */
    GesamtsystemAlt_DWork.UnitDelay5_DSTATE =
      GesamtsystemAlt_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S50>/Unit Delay1' */
    GesamtsystemAlt_DWork.UnitDelay1_DSTATE =
      GesamtsystemAlt_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Memory: '<S52>/Memory' */
    GesamtsystemAlt_DWork.Memory_PreviousInput_k =
      GesamtsystemAlt_P.EdgeDetector2_ic;

    /* InitializeConditions for UnitDelay: '<S50>/Unit Delay2' */
    GesamtsystemAlt_DWork.UnitDelay2_DSTATE =
      GesamtsystemAlt_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S4>/Unit Delay2' */
    GesamtsystemAlt_DWork.UnitDelay2_DSTATE_p =
      GesamtsystemAlt_P.UnitDelay2_InitialCondition_j;

    /* InitializeConditions for RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */
    GesamtsystemAlt_DWork.TmpRTBAtSortieralgorithmus2Inpo =
      GesamtsystemAlt_P.TmpRTBAtSortieralgorithmus2Inpo;

    /* InitializeConditions for RateTransition: '<S4>/TmpRTBAtChart7Inport4' */
    GesamtsystemAlt_DWork.TmpRTBAtChart7Inport4_Buffer0 =
      GesamtsystemAlt_P.TmpRTBAtChart7Inport4_InitialCo;

    /* InitializeConditions for RateTransition: '<S45>/TmpRTBAtProductInport1' */
    GesamtsystemAlt_DWork.TmpRTBAtProductInport1_Buffer0 =
      GesamtsystemAlt_P.TmpRTBAtProductInport1_InitialC;

    /* SystemInitialize for S-Function (c28xisr_c2000): '<S18>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S18>/Triggered Subsystem'
     */
    /* System initialize for function-call system: '<S18>/Triggered Subsystem' */
    {
      int16_T i;

      /* InitializeConditions for Delay: '<S35>/Delay' */
      for (i = 0; i < 10; i++) {
        GesamtsystemAlt_DWork.Delay_DSTATE_g[i] =
          GesamtsystemAlt_P.Delay_InitialCondition_d;
      }

      /* End of InitializeConditions for Delay: '<S35>/Delay' */
    }

    /* End of SystemInitialize for S-Function (c28xisr_c2000): '<S18>/C28x Hardware Interrupt' */

    /* SystemInitialize for Chart: '<S18>/Chart8' */
    GesamtsystemAlt_DWork.is_active_c17_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c17_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;
    for (i = 0; i < 20; i++) {
      GesamtsystemAlt_DWork.values_out1[i] = 0;
    }

    GesamtsystemAlt_DWork.zaehler = 0L;
    GesamtsystemAlt_DWork.search = 0;
    GesamtsystemAlt_DWork.counter = 0L;
    GesamtsystemAlt_DWork.x_found = 0L;
    GesamtsystemAlt_B.valid_values1 = 0;
    GesamtsystemAlt_B.valid_values2 = 0;
    GesamtsystemAlt_B.valid_values3 = 0;
    GesamtsystemAlt_B.valid_values4 = 0;
    GesamtsystemAlt_B.valid_values5 = 0;
    GesamtsystemAlt_B.valid_values6 = 0;
    GesamtsystemAlt_B.valid_values7 = 0;
    GesamtsystemAlt_B.valid_values8 = 0;

    /* End of SystemInitialize for Chart: '<S18>/Chart8' */

    /* SystemInitialize for Chart: '<S18>/Chart6' */
    GesamtsystemAlt_DWork.is_active_c16_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c16_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S18>/Chart2' */
    GesamtsystemAlt_DWork.is_active_c13_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c13_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S18>/Chart4' */
    GesamtsystemAlt_DWork.is_active_c14_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c14_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
    GesamtsystemAlt_DWork.is_active_c4_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c4_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
    GesamtsystemAlt_DWork.is_Parken = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    GesamtsystemAlt_DWork.is_Sammeln = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    GesamtsystemAlt_DWork.is_Uebergabe = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    GesamtsystemAlt_DWork.temporalCounter_i1_g = 0UL;
    GesamtsystemAlt_DWork.is_active_c5_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c5_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Steuersystem fuer Heckschalter' */
    GesamtsystemAlt_DWork.temporalCounter_i1 = 0UL;
    GesamtsystemAlt_DWork.is_active_c9_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c9_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S5>/Shutdown-Eingriff' */
    GesamtsystemAlt_DWork.is_active_c10_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c10_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Notschalter zum ersten Mal gedrückt wird' */
    GesamtsystemAlt_DWork.is_active_c15_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c15_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S5>/Beendigung-Ansteuerung' */
    GesamtsystemAlt_DWork.is_active_c3_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c3_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
    GesamtsystemAlt_DWork.temporalCounter_i1_g4 = 0U;
    GesamtsystemAlt_DWork.is_active_c6_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c6_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Atomic SubSystem: '<S3>/Navigationssystem [Einstellungen moeglich]' */
    /* SystemInitialize for Chart: '<S23>/Quadrantenteiler' */
    GesamtsystemAlt_DWork.is_active_c11_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c11_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S23>/Winkelausgabe fuer Ausrichtung' */
    GesamtsystemAlt_DWork.is_active_c12_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c12_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S17>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
    GesamtsystemAlt_DWork.is_active_c8_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c8_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S17>/Fahrsystem' */
    GesamtsystemAlt_DWork.is_active_c7_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c7_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* End of SystemInitialize for SubSystem: '<S3>/Navigationssystem [Einstellungen moeglich]' */

    /* SystemInitialize for Chart: '<S18>/Chart1' */
    GesamtsystemAlt_DWork.is_active_c1_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c1_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;
    for (i = 0; i < 16; i++) {
      /* SystemInitialize for Chart: '<S18>/Chart6' */
      GesamtsystemAlt_B.int16x_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S18>/Chart2' */
      GesamtsystemAlt_B.int16y_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S18>/Chart4' */
      GesamtsystemAlt_B.int16a1_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S18>/Chart1' */
      GesamtsystemAlt_B.int16z_bin[i] = 0.0F;
    }

    /* SystemInitialize for Chart: '<S4>/Chart8' */
    GesamtsystemAlt_DWork.temporalCounter_i1_a = 0U;
    GesamtsystemAlt_DWork.is_active_c39_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c39_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* InitializeConditions for MATLABSystem: '<S4>/Moving Average2' */
    if (GesamtsystemAlt_DWork.obj.pStatistic->isInitialized == 1L) {
      GesamtsystemAlt_DWork.obj.pStatistic->pwN = 1.0;
      GesamtsystemAlt_DWork.obj.pStatistic->pmN = 0.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S4>/Moving Average2' */

    /* SystemInitialize for Chart: '<S4>/Sortieralgorithmus2' */
    GesamtsystemAlt_DWork.temporalCounter_i1_o = 0U;
    GesamtsystemAlt_DWork.is_active_c42_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c42_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S4>/Chart7' */
    GesamtsystemAlt_DWork.temporalCounter_i1_gj = 0U;
    GesamtsystemAlt_DWork.is_active_c38_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c38_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S4>/Chart6' */
    GesamtsystemAlt_DWork.temporalCounter_i1_ok = 0U;
    GesamtsystemAlt_DWork.is_active_c37_GesamtsystemAlt = 0U;
    GesamtsystemAlt_DWork.is_c37_GesamtsystemAlt =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;
  }
}

/* Model terminate function */
void GesamtsystemAlt_terminate(void)
{
  /* Terminate for MATLABSystem: '<S4>/Moving Average2' */
  matlabCodegenHandle_matlabCodeg(&GesamtsystemAlt_DWork.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
