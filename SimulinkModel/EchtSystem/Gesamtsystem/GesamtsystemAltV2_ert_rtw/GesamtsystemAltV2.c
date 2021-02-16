/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: GesamtsystemAltV2.c
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

#include "GesamtsystemAltV2.h"
#include "GesamtsystemAltV2_private.h"
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
#define Gesamtsys_IN_Einstellung_Init_i (2U)
#define Gesamtsys_IN_betterLeftPosition (1U)
#define Gesamtsyst_IN_Drehen_rechts_max (4U)
#define Gesamtsyste_IN_Drehen_links_max (2U)
#define Gesamtsyste_IN_Einstellung_Init (1U)
#define Gesamtsyste_IN_Start_Warten_itx (2U)
#define Gesamtsyste_IN_Warten_Uebergabe (3U)
#define Gesamtsyste_IN_Warten_loslassen (5U)
#define GesamtsystemA_IN_Anfahrpunkt_10 (2U)
#define GesamtsystemA_IN_Anfahrpunkt_11 (3U)
#define GesamtsystemA_IN_Daten_einlesen (1U)
#define GesamtsystemA_IN_Start_Warten_i (6U)
#define GesamtsystemAl_IN_Anfahrpunkt_1 (1U)
#define GesamtsystemAl_IN_Anfahrpunkt_2 (4U)
#define GesamtsystemAl_IN_Anfahrpunkt_3 (5U)
#define GesamtsystemAl_IN_Anfahrpunkt_4 (6U)
#define GesamtsystemAl_IN_Anfahrpunkt_5 (7U)
#define GesamtsystemAl_IN_Anfahrpunkt_6 (8U)
#define GesamtsystemAl_IN_Anfahrpunkt_7 (9U)
#define GesamtsystemAl_IN_Anfahrpunkt_8 (10U)
#define GesamtsystemAl_IN_Anfahrpunkt_9 (11U)
#define GesamtsystemAl_IN_Konvertierung (2U)
#define GesamtsystemAl_IN_closeKlappe_i (4U)
#define GesamtsystemAl_IN_setupVariable (7U)
#define GesamtsystemAl_IN_startPosition (9U)
#define GesamtsystemAl_IN_wert_erkannt2 (4U)
#define GesamtsystemAltV2_IN_Anschalten (1U)
#define GesamtsystemAltV2_IN_Beendet   (2U)
#define GesamtsystemAltV2_IN_Black     (1U)
#define GesamtsystemAltV2_IN_BlueCube  (2U)
#define GesamtsystemAltV2_IN_Ende      (1U)
#define GesamtsystemAltV2_IN_Lampe     (1U)
#define GesamtsystemAltV2_IN_Parken    (2U)
#define GesamtsystemAltV2_IN_Parken_1  (1U)
#define GesamtsystemAltV2_IN_Parken_2  (2U)
#define GesamtsystemAltV2_IN_Parken_3  (3U)
#define GesamtsystemAltV2_IN_Quadrant_a (1U)
#define GesamtsystemAltV2_IN_Quadrant_b (2U)
#define GesamtsystemAltV2_IN_Quadrant_c (3U)
#define GesamtsystemAltV2_IN_Quadrant_d (4U)
#define GesamtsystemAltV2_IN_RedCube   (4U)
#define GesamtsystemAltV2_IN_Sammeln   (3U)
#define GesamtsystemAltV2_IN_ShutDown  (1U)
#define GesamtsystemAltV2_IN_Start     (2U)
#define GesamtsystemAltV2_IN_Start_Init (3U)
#define GesamtsystemAltV2_IN_Stillstand (2U)
#define GesamtsystemAltV2_IN_Uebergabe (5U)
#define GesamtsystemAltV2_IN_Warten    (3U)
#define GesamtsystemAltV2_IN_Wechsel_1 (4U)
#define GesamtsystemAltV2_IN_Wechsel_10 (13U)
#define GesamtsystemAltV2_IN_Wechsel_11 (14U)
#define GesamtsystemAltV2_IN_Wechsel_2 (5U)
#define GesamtsystemAltV2_IN_Wechsel_3 (6U)
#define GesamtsystemAltV2_IN_Wechsel_4 (17U)
#define GesamtsystemAltV2_IN_Wechsel_5 (18U)
#define GesamtsystemAltV2_IN_Wechsel_6 (19U)
#define GesamtsystemAltV2_IN_Wechsel_7 (20U)
#define GesamtsystemAltV2_IN_Wechsel_8 (21U)
#define GesamtsystemAltV2_IN_Wechsel_9 (22U)
#define GesamtsystemAltV2_IN_Weiter1   (4U)
#define GesamtsystemAltV2_IN_Weiter2   (5U)
#define GesamtsystemAltV2_IN_close     (2U)
#define GesamtsystemAltV2_IN_closeGate (3U)
#define GesamtsystemAltV2_IN_cubeLoaded (5U)
#define GesamtsystemAltV2_IN_end       (3U)
#define GesamtsystemAltV2_IN_entry     (4U)
#define GesamtsystemAltV2_IN_firstEntry (5U)
#define GesamtsystemAltV2_IN_goToZero  (7U)
#define GesamtsystemAltV2_IN_init      (2U)
#define GesamtsystemAltV2_IN_open      (4U)
#define GesamtsystemAltV2_IN_openGate  (8U)
#define GesamtsystemAltV2_IN_open_i    (5U)
#define GesamtsystemAltV2_IN_wait      (3U)
#define GesamtsystemAltV2_IN_wait1     (7U)
#define GesamtsystemAltV2_IN_wait_i    (5U)
#define GesamtsystemAltV2_IN_wait_it   (10U)
#define GesamtsystemAltV2_IN_wait_itx  (6U)
#define GesamtsystemAltV2_IN_wait_itxt (8U)
#define GesamtsystemAltV2_IN_x0        (2U)
#define GesamtsystemAltV2_IN_x1_1      (3U)
#define GesamtsystemAltV2_IN_x1_search1 (5U)
#define GesamtsystemAltV_IN_Aus_Zustand (2U)
#define GesamtsystemAltV_IN_Ausfuehrung (1U)
#define GesamtsystemAltV_IN_Hochzaehlen (1U)
#define GesamtsystemAltV_IN_Init_Warten (1U)
#define GesamtsystemAltV_IN_Wechsel_1_i (12U)
#define GesamtsystemAltV_IN_Wechsel_2_i (15U)
#define GesamtsystemAltV_IN_Wechsel_3_i (16U)
#define GesamtsystemAltV_IN_backupTimer (2U)
#define GesamtsystemAltV_IN_closeKlappe (3U)
#define GesamtsystemAltV_IN_goToMagacin (6U)
#define GesamtsystemAltV_IN_waitForCube (11U)
#define GesamtsystemAlt_IN_CloseRegular (1U)
#define GesamtsystemAlt_IN_DetectedCube (3U)
#define GesamtsystemAlt_IN_Start_Warten (3U)
#define GesamtsystemAlt_IN_wert_erkannt (3U)
#define Gesamtsystem_IN_Init_und_Warten (3U)
#define Gesamtsystem_IN_NO_ACTIVE_CHILD (0U)
#define Gesamtsystem_IN_Start_Warten_it (5U)
#define Gesamtsystem_IN_Warten_druecken (4U)
#define IN_Anfang_found_Schritt_uebertr (1U)
#define IN_Drehstillstand_mit_Ausrichtu (1U)
#define IN_Fahren_mit_Ausrichtungsregel (5U)
#define IN_Trigonometrische_Auswertun_i (4U)
#define IN_Trigonometrische_Auswertung_ (3U)
#define IN_Weiterleitung_bei_Drehzustan (3U)
#define IN_photoelectricBarrierActivate (6U)

/* user code (top of source file) */
#include "i2c_reset.c"

/* Block signals (default storage) */
BlockIO_GesamtsystemAltV2 GesamtsystemAltV2_B;

/* Block states (default storage) */
D_Work_GesamtsystemAltV2 GesamtsystemAltV2_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_GesamtsystemAlt GesamtsystemAltV_PrevZCSigState;

/* Real-time model */
RT_MODEL_GesamtsystemAltV2 GesamtsystemAltV2_M_;
RT_MODEL_GesamtsystemAltV2 *const GesamtsystemAltV2_M = &GesamtsystemAltV2_M_;

/* Forward declaration for local functions */
static void Gesam_enter_atomic_wert_erkannt(void);
static void GesamtsystemAltV2_Sammeln(void);
static void enter_atomic_Drehstillstand_mit(void);
static void GesamtsystemAltV2_Start_Warten(void);
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

      /* S-Function (c280xi2c_rx): '<S35>/I2C Receive' */
      {
        int rx_loop= 0;

        /* mode:0 (1:master 0:slave)  Addressing mode:0 (1:10-bit 0:7-bit)
           free data mode:0 (1:enbaled 0:disabled) digital loopback mode:0 (1:enabled 0:disabled)
           bit count:0 (0:8bit) NACK mode:1 (1:enabled 0: disabled) stop condition:0 (1:enabled 0: disabled)*/
        I2caRegs.I2CMDR.all = 57376;

        {
          int_T i1;
          uint8_T *y0 = &GesamtsystemAltV2_B.I2CReceive_o1[0];
          for (i1=0; i1 < 10; i1++) {
            rx_loop= 0;
            while (I2caRegs.I2CFFRX.bit.RXFFST==0 && rx_loop<10000)
              rx_loop++;
            if (rx_loop!=10000) {
              y0[i1] = I2caRegs.I2CDRR;
              GesamtsystemAltV2_B.I2CReceive_o2 = I2caRegs.I2CSTR.all;/* output i2c status */
            } else
              GesamtsystemAltV2_B.I2CReceive_o2 = I2caRegs.I2CSTR.all | 0x40;/* output receive data loss status */
          }
        }
      }

      for (i = 0; i < 10; i++) {
        /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn2' */
        GesamtsystemAltV2_B.VectorConcatenate[i + 10] =
          GesamtsystemAltV2_B.I2CReceive_o1[i];

        /* Delay: '<S35>/Delay' */
        GesamtsystemAltV2_B.VectorConcatenate[i] =
          GesamtsystemAltV2_DWork.Delay_DSTATE_bl[i];

        /* Update for Delay: '<S35>/Delay' */
        GesamtsystemAltV2_DWork.Delay_DSTATE_bl[i] =
          GesamtsystemAltV2_B.I2CReceive_o1[i];
      }
    }

    /* End of Outputs for S-Function (c28xisr_c2000): '<S17>/C28x Hardware Interrupt' */

    /* RateTransition: '<S17>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      GesamtsystemAltV2_DWork.RateTransition_Buffer[i +
        (GesamtsystemAltV2_DWork.RateTransition_semaphoreTaken == 0) * 20] =
        GesamtsystemAltV2_B.VectorConcatenate[i];
    }

    GesamtsystemAltV2_DWork.RateTransition_ActiveBufIdx =
      (GesamtsystemAltV2_DWork.RateTransition_semaphoreTaken == 0);

    /* End of RateTransition: '<S17>/Rate Transition' */
  }
}

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void GesamtsystemAltV2_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(GesamtsystemAltV2_M, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(GesamtsystemAltV2_M, 2));
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
  GesamtsystemAltV2_M->Timing.RateInteraction.TID0_1 =
    (GesamtsystemAltV2_M->Timing.TaskCounters.TID[1] == 0);

  /* tid 1 shares data with slower tid rate: 2 */
  if (GesamtsystemAltV2_M->Timing.TaskCounters.TID[1] == 0) {
    GesamtsystemAltV2_M->Timing.RateInteraction.TID1_2 =
      (GesamtsystemAltV2_M->Timing.TaskCounters.TID[2] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (GesamtsystemAltV2_M->Timing.TaskCounters.TID[1])++;
  if ((GesamtsystemAltV2_M->Timing.TaskCounters.TID[1]) > 499) {/* Sample time: [0.01s, 0.0s] */
    GesamtsystemAltV2_M->Timing.TaskCounters.TID[1] = 0;
  }

  (GesamtsystemAltV2_M->Timing.TaskCounters.TID[2])++;
  if ((GesamtsystemAltV2_M->Timing.TaskCounters.TID[2]) > 4999) {/* Sample time: [0.1s, 0.0s] */
    GesamtsystemAltV2_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/*
 * Output and update for enable system:
 *    '<S53>/NEGATIVE Edge'
 *    '<S54>/NEGATIVE Edge'
 */
void GesamtsystemAl_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_NEGATIVEEdge_GesamtsystemAl *localB)
{
  /* Outputs for Enabled SubSystem: '<S53>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S58>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S58>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S53>/NEGATIVE Edge' */
}

/*
 * Output and update for enable system:
 *    '<S53>/POSITIVE Edge'
 *    '<S54>/POSITIVE Edge'
 */
void GesamtsystemAl_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_POSITIVEEdge_GesamtsystemAl *localB)
{
  /* Outputs for Enabled SubSystem: '<S53>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S59>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S59>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S53>/POSITIVE Edge' */
}

/*
 * Output and update for atomic system:
 *    '<S52>/MATLAB Function1'
 *    '<S52>/MATLAB Function3'
 */
void Gesamtsyste_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt,
  rtB_MATLABFunction1_Gesamtsyste *localB)
{
  /* MATLAB Function 'Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1': '<S55>:1' */
  /* '<S55>:1:3' */
  localB->y = rtu_yalt + (real32_T)rtu_u;
}

/* Function for Chart: '<S17>/Chart8' */
static void Gesam_enter_atomic_wert_erkannt(void)
{
  /* Entry 'wert_erkannt': '<S33>:109' */
  GesamtsystemAltV2_DWork.values_out1[0] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[0];
  GesamtsystemAltV2_DWork.values_out1[1] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[1];
  GesamtsystemAltV2_DWork.values_out1[2] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[2];
  GesamtsystemAltV2_DWork.values_out1[3] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[3];
  GesamtsystemAltV2_DWork.values_out1[4] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[4];
  GesamtsystemAltV2_DWork.values_out1[5] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[5];
  GesamtsystemAltV2_DWork.values_out1[6] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[6];
  GesamtsystemAltV2_DWork.values_out1[7] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[7];
  GesamtsystemAltV2_DWork.values_out1[8] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[8];
  GesamtsystemAltV2_DWork.values_out1[9] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[9];
  GesamtsystemAltV2_DWork.values_out1[10] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[10];
  GesamtsystemAltV2_DWork.values_out1[11] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[11];
  GesamtsystemAltV2_DWork.values_out1[12] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[12];
  GesamtsystemAltV2_DWork.values_out1[13] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[13];
  GesamtsystemAltV2_DWork.values_out1[14] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[14];
  GesamtsystemAltV2_DWork.values_out1[15] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[15];
  GesamtsystemAltV2_DWork.values_out1[16] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[16];
  GesamtsystemAltV2_DWork.values_out1[17] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[17];
  GesamtsystemAltV2_DWork.values_out1[18] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[18];
  GesamtsystemAltV2_DWork.values_out1[19] = (int16_T)
    GesamtsystemAltV2_B.RateTransition[19];
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

/* Function for Chart: '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
static void GesamtsystemAltV2_Sammeln(void)
{
  /* During 'Sammeln': '<S40>:2195' */
  if (GesamtsystemAltV2_DWork.Counter == 14.0) {
    /* Transition: '<S40>:2131' */
    GesamtsystemAltV2_B.Gang = 1.0;
    GesamtsystemAltV2_DWork.x_least = GesamtsystemAltV2_B.x_soll;

    /* Exit Internal 'Sammeln': '<S40>:2195' */
    GesamtsystemAltV2_DWork.is_Sammeln = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    GesamtsystemAltV2_DWork.is_c5_GesamtsystemAltV2 =
      GesamtsystemAltV2_IN_Uebergabe;

    /* Entry Internal 'Uebergabe': '<S40>:1340' */
    /* Transition: '<S40>:1341' */
    GesamtsystemAltV2_DWork.Counter = 0.0;
    GesamtsystemAltV2_DWork.is_Uebergabe = Ge_IN_Uebergabepunkt_x_Richtung;

    /* Entry 'Uebergabepunkt_x_Richtung': '<S40>:1346' */
  } else {
    switch (GesamtsystemAltV2_DWork.is_Sammeln) {
     case GesamtsystemAl_IN_Anfahrpunkt_1:
      /* During 'Anfahrpunkt_1': '<S40>:2219' */
      if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
           GesamtsystemAltV2_B.Zielradius) && (fabs(GesamtsystemAltV2_B.y_soll -
            GesamtsystemAltV2_B.y_Wagen) <= GesamtsystemAltV2_B.Zielradius)) {
        /* Transition: '<S40>:2197' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAltV_IN_Wechsel_1_i;

        /* Entry 'Wechsel_1': '<S40>:2220' */
        GesamtsystemAltV2_DWork.Counter++;
      }
      break;

     case GesamtsystemA_IN_Anfahrpunkt_10:
      /* During 'Anfahrpunkt_10': '<S40>:2237' */
      if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
           GesamtsystemAltV2_B.Zielradius) && (fabs(GesamtsystemAltV2_B.y_soll -
            GesamtsystemAltV2_B.y_Wagen) <= GesamtsystemAltV2_B.Zielradius)) {
        /* Transition: '<S40>:2216' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAltV2_IN_Wechsel_10;

        /* Entry 'Wechsel_10': '<S40>:2238' */
        GesamtsystemAltV2_DWork.Counter++;
      }
      break;

     case GesamtsystemA_IN_Anfahrpunkt_11:
      /* During 'Anfahrpunkt_11': '<S40>:2239' */
      if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
           GesamtsystemAltV2_B.Zielradius) && (fabs(GesamtsystemAltV2_B.y_soll -
            GesamtsystemAltV2_B.y_Wagen) <= GesamtsystemAltV2_B.Zielradius)) {
        /* Transition: '<S40>:2218' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAltV2_IN_Wechsel_11;

        /* Entry 'Wechsel_11': '<S40>:2240' */
        GesamtsystemAltV2_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_2:
      /* During 'Anfahrpunkt_2': '<S40>:2221' */
      if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
           GesamtsystemAltV2_B.Zielradius) && (fabs(GesamtsystemAltV2_B.y_soll -
            GesamtsystemAltV2_B.y_Wagen) <= GesamtsystemAltV2_B.Zielradius)) {
        /* Transition: '<S40>:2199' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAltV_IN_Wechsel_2_i;

        /* Entry 'Wechsel_2': '<S40>:2222' */
        GesamtsystemAltV2_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_3:
      /* During 'Anfahrpunkt_3': '<S40>:2223' */
      if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
           GesamtsystemAltV2_B.Zielradius) && (fabs(GesamtsystemAltV2_B.y_soll -
            GesamtsystemAltV2_B.y_Wagen) <= GesamtsystemAltV2_B.Zielradius)) {
        /* Transition: '<S40>:2201' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAltV_IN_Wechsel_3_i;

        /* Entry 'Wechsel_3': '<S40>:2224' */
        GesamtsystemAltV2_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_4:
      /* During 'Anfahrpunkt_4': '<S40>:2225' */
      if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
           GesamtsystemAltV2_B.Zielradius) && (fabs(GesamtsystemAltV2_B.y_soll -
            GesamtsystemAltV2_B.y_Wagen) <= GesamtsystemAltV2_B.Zielradius)) {
        /* Transition: '<S40>:2204' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAltV2_IN_Wechsel_4;

        /* Entry 'Wechsel_4': '<S40>:2226' */
        GesamtsystemAltV2_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_5:
      /* During 'Anfahrpunkt_5': '<S40>:2227' */
      if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
           GesamtsystemAltV2_B.Zielradius) && (fabs(GesamtsystemAltV2_B.y_soll -
            GesamtsystemAltV2_B.y_Wagen) <= GesamtsystemAltV2_B.Zielradius)) {
        /* Transition: '<S40>:2206' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAltV2_IN_Wechsel_5;

        /* Entry 'Wechsel_5': '<S40>:2228' */
        GesamtsystemAltV2_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_6:
      /* During 'Anfahrpunkt_6': '<S40>:2229' */
      if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
           GesamtsystemAltV2_B.Zielradius) && (fabs(GesamtsystemAltV2_B.y_soll -
            GesamtsystemAltV2_B.y_Wagen) <= GesamtsystemAltV2_B.Zielradius)) {
        /* Transition: '<S40>:2208' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAltV2_IN_Wechsel_6;

        /* Entry 'Wechsel_6': '<S40>:2230' */
        GesamtsystemAltV2_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_7:
      /* During 'Anfahrpunkt_7': '<S40>:2231' */
      if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
           GesamtsystemAltV2_B.Zielradius) && (fabs(GesamtsystemAltV2_B.y_soll -
            GesamtsystemAltV2_B.y_Wagen) <= GesamtsystemAltV2_B.Zielradius)) {
        /* Transition: '<S40>:2211' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAltV2_IN_Wechsel_7;

        /* Entry 'Wechsel_7': '<S40>:2233' */
        GesamtsystemAltV2_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_8:
      /* During 'Anfahrpunkt_8': '<S40>:2232' */
      if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
           GesamtsystemAltV2_B.Zielradius) && (fabs(GesamtsystemAltV2_B.y_soll -
            GesamtsystemAltV2_B.y_Wagen) <= GesamtsystemAltV2_B.Zielradius)) {
        /* Transition: '<S40>:2212' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAltV2_IN_Wechsel_8;

        /* Entry 'Wechsel_8': '<S40>:2234' */
        GesamtsystemAltV2_DWork.Counter++;
      }
      break;

     case GesamtsystemAl_IN_Anfahrpunkt_9:
      /* During 'Anfahrpunkt_9': '<S40>:2235' */
      if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
           GesamtsystemAltV2_B.Zielradius) && (fabs(GesamtsystemAltV2_B.y_soll -
            GesamtsystemAltV2_B.y_Wagen) <= GesamtsystemAltV2_B.Zielradius)) {
        /* Transition: '<S40>:2214' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAltV2_IN_Wechsel_9;

        /* Entry 'Wechsel_9': '<S40>:2236' */
        GesamtsystemAltV2_DWork.Counter++;
      }
      break;

     case GesamtsystemAltV_IN_Wechsel_1_i:
      /* During 'Wechsel_1': '<S40>:2220' */
      /* Transition: '<S40>:2198' */
      GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_2;

      /* Entry 'Anfahrpunkt_2': '<S40>:2221' */
      GesamtsystemAltV2_B.x_soll = 1100.0;
      GesamtsystemAltV2_B.y_soll = 80.0;
      break;

     case GesamtsystemAltV2_IN_Wechsel_10:
      /* During 'Wechsel_10': '<S40>:2238' */
      /* Transition: '<S40>:2217' */
      GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemA_IN_Anfahrpunkt_11;

      /* Entry 'Anfahrpunkt_11': '<S40>:2239' */
      GesamtsystemAltV2_B.x_soll = GesamtsystemAltV2_DWork.x_Uebergabe;
      GesamtsystemAltV2_B.y_soll = -100.0;
      break;

     case GesamtsystemAltV2_IN_Wechsel_11:
      /* During 'Wechsel_11': '<S40>:2240' */
      break;

     case GesamtsystemAltV_IN_Wechsel_2_i:
      /* During 'Wechsel_2': '<S40>:2222' */
      /* Transition: '<S40>:2200' */
      GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_3;

      /* Entry 'Anfahrpunkt_3': '<S40>:2223' */
      GesamtsystemAltV2_B.x_soll = 900.0;
      GesamtsystemAltV2_B.y_soll = 300.0;
      break;

     case GesamtsystemAltV_IN_Wechsel_3_i:
      /* During 'Wechsel_3': '<S40>:2224' */
      /* Transition: '<S40>:2202' */
      GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_4;

      /* Entry 'Anfahrpunkt_4': '<S40>:2225' */
      GesamtsystemAltV2_B.x_soll = 480.0;
      GesamtsystemAltV2_B.y_soll = 250.0;
      break;

     case GesamtsystemAltV2_IN_Wechsel_4:
      /* During 'Wechsel_4': '<S40>:2226' */
      /* Transition: '<S40>:2205' */
      GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_5;

      /* Entry 'Anfahrpunkt_5': '<S40>:2227' */
      GesamtsystemAltV2_B.x_soll = 525.0;
      GesamtsystemAltV2_B.y_soll = 760.0;
      break;

     case GesamtsystemAltV2_IN_Wechsel_5:
      /* During 'Wechsel_5': '<S40>:2228' */
      /* Transition: '<S40>:2207' */
      GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_6;

      /* Entry 'Anfahrpunkt_6': '<S40>:2229' */
      GesamtsystemAltV2_B.x_soll = 920.0;
      GesamtsystemAltV2_B.y_soll = 750.0;
      break;

     case GesamtsystemAltV2_IN_Wechsel_6:
      /* During 'Wechsel_6': '<S40>:2230' */
      if (GesamtsystemAltV2_DWork.Counter == 6.0) {
        /* Transition: '<S40>:2210' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_7;

        /* Entry 'Anfahrpunkt_7': '<S40>:2231' */
        GesamtsystemAltV2_B.x_soll = 875.0;
        GesamtsystemAltV2_B.y_soll = 400.0;
      } else {
        /* Transition: '<S40>:2209' */
        GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_8;

        /* Entry 'Anfahrpunkt_8': '<S40>:2232' */
        GesamtsystemAltV2_B.x_soll = 850.0;
        GesamtsystemAltV2_B.y_soll = 0.0;
      }
      break;

     case GesamtsystemAltV2_IN_Wechsel_7:
      /* During 'Wechsel_7': '<S40>:2233' */
      /* Transition: '<S40>:2203' */
      GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_4;

      /* Entry 'Anfahrpunkt_4': '<S40>:2225' */
      GesamtsystemAltV2_B.x_soll = 480.0;
      GesamtsystemAltV2_B.y_soll = 250.0;
      break;

     case GesamtsystemAltV2_IN_Wechsel_8:
      /* During 'Wechsel_8': '<S40>:2234' */
      /* Transition: '<S40>:2213' */
      GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_9;

      /* Entry 'Anfahrpunkt_9': '<S40>:2235' */
      GesamtsystemAltV2_B.x_soll = 1000.0;
      GesamtsystemAltV2_B.y_soll = 15.0;
      break;

     default:
      /* During 'Wechsel_9': '<S40>:2236' */
      /* Transition: '<S40>:2215' */
      GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemA_IN_Anfahrpunkt_10;

      /* Entry 'Anfahrpunkt_10': '<S40>:2237' */
      GesamtsystemAltV2_B.x_soll = 1200.0;
      GesamtsystemAltV2_B.y_soll = -50.0;
      break;
    }
  }
}

/* Function for Chart: '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
static void enter_atomic_Drehstillstand_mit(void)
{
  real_T tmp;

  /* Entry 'Drehstillstand_mit_Ausrichtungsregelung': '<S20>:26' */
  GesamtsystemAltV2_B.alpha_diff_opt = 0.0;
  tmp = fabs(GesamtsystemAltV2_DWork.alpha_diff_intern);
  if (tmp < 5.0) {
    GesamtsystemAltV2_B.pwm_mindern[0] = rt_roundd_snf(tmp);
  } else if (tmp < 15.0) {
    GesamtsystemAltV2_B.pwm_mindern[0] = floor((tmp - 5.0) / 2.0) + 5.0;
  } else {
    GesamtsystemAltV2_B.pwm_mindern[0] = 10.0;
  }

  if (GesamtsystemAltV2_DWork.alpha_diff_intern < 0.0) {
    GesamtsystemAltV2_B.pwm_mindern[1] = 0.0;
  } else if (GesamtsystemAltV2_DWork.alpha_diff_intern > 0.0) {
    GesamtsystemAltV2_B.pwm_mindern[1] = 1.0;
  } else {
    GesamtsystemAltV2_B.pwm_mindern[1] = 2.0;
  }
}

/* Function for Chart: '<S16>/Fahrsystem' */
static void GesamtsystemAltV2_Start_Warten(void)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Start_Warten': '<S21>:92' */
  /* Transition: '<S21>:93' */
  l_mindern = fabs(GesamtsystemAltV2_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (GesamtsystemAltV2_B.PWMWertebereich > 0.0)) {
    /* Transition: '<S21>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S21>:21' */
      if (GesamtsystemAltV2_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S21>:45' */
        GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
          Gesamtsyste_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S21>:8' */
        GesamtsystemAltV2_B.pwm_out_l = 100.0;
        GesamtsystemAltV2_B.pwm_out_r = 100.0;
        GesamtsystemAltV2_B.r_l_out_l = 0.0;
        GesamtsystemAltV2_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S21>:57' */
        GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
          Gesamtsyst_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S21>:9' */
        GesamtsystemAltV2_B.pwm_out_l = 100.0;
        GesamtsystemAltV2_B.pwm_out_r = 100.0;
        GesamtsystemAltV2_B.r_l_out_l = 1.0;
        GesamtsystemAltV2_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S21>:53' */
      if (GesamtsystemAltV2_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S21>:54' */
        GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
          Gesam_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S21>:43' */
        GesamtsystemAltV2_B.pwm_out_l = 59.0 + fabs
          (GesamtsystemAltV2_B.alpha_diff_opt);
        GesamtsystemAltV2_B.pwm_out_r = 59.0 + fabs
          (GesamtsystemAltV2_B.alpha_diff_opt);
        GesamtsystemAltV2_B.r_l_out_l = 0.0;
        GesamtsystemAltV2_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S21>:55' */
        GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
          Gesa_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S21>:51' */
        GesamtsystemAltV2_B.pwm_out_l = 59.0 + l_mindern;
        GesamtsystemAltV2_B.pwm_out_r = 59.0 + fabs
          (GesamtsystemAltV2_B.alpha_diff_opt);
        GesamtsystemAltV2_B.r_l_out_l = 1.0;
        GesamtsystemAltV2_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S21>:82' */
    if (GesamtsystemAltV2_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S21>:85' */
      l_mindern = 1.0 - GesamtsystemAltV2_B.BinaererWertebereich;
      r_mindern = GesamtsystemAltV2_B.BinaererWertebereich;
    } else if (GesamtsystemAltV2_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S21>:86' */
      l_mindern = GesamtsystemAltV2_B.BinaererWertebereich;
      r_mindern = 1.0 - GesamtsystemAltV2_B.BinaererWertebereich;
    } else {
      /* Transition: '<S21>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
      IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S21>:94' */
    a = GesamtsystemAltV2_B.PWMWertebereich / 100.0;
    GesamtsystemAltV2_B.pwm_out_l = GesamtsystemAltV2_B.PWMWertebereich -
      rt_roundd_snf(a * a * GesamtsystemAltV2_B.pwm_mindern[0]) * l_mindern;
    l_mindern = GesamtsystemAltV2_B.PWMWertebereich / 100.0;
    GesamtsystemAltV2_B.pwm_out_r = GesamtsystemAltV2_B.PWMWertebereich -
      rt_roundd_snf(l_mindern * l_mindern * GesamtsystemAltV2_B.pwm_mindern[0]) *
      r_mindern;
    GesamtsystemAltV2_B.r_l_out_l = 1.0 -
      GesamtsystemAltV2_B.BinaererWertebereich;
    GesamtsystemAltV2_B.r_l_out_r = 1.0 -
      GesamtsystemAltV2_B.BinaererWertebereich;
  }
}

/* Function for Chart: '<S16>/Fahrsystem' */
static void GesamtsystemAl_Drehen_links_max(void)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Drehen_links_max': '<S21>:8' */
  /* Transition: '<S21>:60' */
  /* Transition: '<S21>:75' */
  l_mindern = fabs(GesamtsystemAltV2_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (GesamtsystemAltV2_B.PWMWertebereich > 0.0)) {
    /* Transition: '<S21>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S21>:21' */
      if (GesamtsystemAltV2_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S21>:45' */
        GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
          Gesamtsyste_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S21>:8' */
        GesamtsystemAltV2_B.pwm_out_l = 100.0;
        GesamtsystemAltV2_B.pwm_out_r = 100.0;
        GesamtsystemAltV2_B.r_l_out_l = 0.0;
        GesamtsystemAltV2_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S21>:57' */
        GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
          Gesamtsyst_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S21>:9' */
        GesamtsystemAltV2_B.pwm_out_l = 100.0;
        GesamtsystemAltV2_B.pwm_out_r = 100.0;
        GesamtsystemAltV2_B.r_l_out_l = 1.0;
        GesamtsystemAltV2_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S21>:53' */
      if (GesamtsystemAltV2_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S21>:54' */
        GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
          Gesam_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S21>:43' */
        GesamtsystemAltV2_B.pwm_out_l = 59.0 + fabs
          (GesamtsystemAltV2_B.alpha_diff_opt);
        GesamtsystemAltV2_B.pwm_out_r = 59.0 + fabs
          (GesamtsystemAltV2_B.alpha_diff_opt);
        GesamtsystemAltV2_B.r_l_out_l = 0.0;
        GesamtsystemAltV2_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S21>:55' */
        GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
          Gesa_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S21>:51' */
        GesamtsystemAltV2_B.pwm_out_l = 59.0 + l_mindern;
        GesamtsystemAltV2_B.pwm_out_r = 59.0 + fabs
          (GesamtsystemAltV2_B.alpha_diff_opt);
        GesamtsystemAltV2_B.r_l_out_l = 1.0;
        GesamtsystemAltV2_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S21>:82' */
    if (GesamtsystemAltV2_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S21>:85' */
      l_mindern = 1.0 - GesamtsystemAltV2_B.BinaererWertebereich;
      r_mindern = GesamtsystemAltV2_B.BinaererWertebereich;
    } else if (GesamtsystemAltV2_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S21>:86' */
      l_mindern = GesamtsystemAltV2_B.BinaererWertebereich;
      r_mindern = 1.0 - GesamtsystemAltV2_B.BinaererWertebereich;
    } else {
      /* Transition: '<S21>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
      IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S21>:94' */
    a = GesamtsystemAltV2_B.PWMWertebereich / 100.0;
    GesamtsystemAltV2_B.pwm_out_l = GesamtsystemAltV2_B.PWMWertebereich -
      rt_roundd_snf(a * a * GesamtsystemAltV2_B.pwm_mindern[0]) * l_mindern;
    l_mindern = GesamtsystemAltV2_B.PWMWertebereich / 100.0;
    GesamtsystemAltV2_B.pwm_out_r = GesamtsystemAltV2_B.PWMWertebereich -
      rt_roundd_snf(l_mindern * l_mindern * GesamtsystemAltV2_B.pwm_mindern[0]) *
      r_mindern;
    GesamtsystemAltV2_B.r_l_out_l = 1.0 -
      GesamtsystemAltV2_B.BinaererWertebereich;
    GesamtsystemAltV2_B.r_l_out_r = 1.0 -
      GesamtsystemAltV2_B.BinaererWertebereich;
  }
}

/* Function for Chart: '<S4>/Sortieralgorithmus2' */
static real_T GesamtsystemAl_findPlaceForBlue(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForBlue': '<S46>:206' */
  if (GesamtsystemAltV2_DWork.magacin2 < 2.0) {
    /* '<S46>:206:3' */
    /* '<S46>:206:4' */
    magacinOut = 2.0;

    /* '<S46>:206:5' */
    GesamtsystemAltV2_DWork.magacin2++;

    /* '<S46>:206:6' */
  } else if ((GesamtsystemAltV2_DWork.magacin1 == 1.0) ||
             (GesamtsystemAltV2_DWork.magacin1 == 2.0)) {
    /* '<S46>:206:8' */
    /* '<S46>:206:9' */
    magacinOut = 1.0;

    /* '<S46>:206:10' */
    GesamtsystemAltV2_DWork.magacin1++;

    /* '<S46>:206:11' */
  } else if (GesamtsystemAltV2_DWork.magacin2 == 4.0) {
    /* '<S46>:206:13' */
    /* '<S46>:206:14' */
    magacinOut = 2.0;

    /* '<S46>:206:15' */
    GesamtsystemAltV2_DWork.magacin2++;

    /* '<S46>:206:16' */
  } else if (GesamtsystemAltV2_DWork.magacin0 == 4.0) {
    /* '<S46>:206:18' */
    /* '<S46>:206:19' */
    magacinOut = 0.0;

    /* '<S46>:206:20' */
    GesamtsystemAltV2_DWork.magacin0++;

    /* '<S46>:206:21' */
  } else if (GesamtsystemAltV2_DWork.magacin3 < 5.0) {
    /* '<S46>:206:23' */
    /* '<S46>:206:24' */
    magacinOut = 3.0;

    /* '<S46>:206:25' */
    GesamtsystemAltV2_DWork.magacin3++;
  } else if (GesamtsystemAltV2_DWork.magacin4 < 5.0) {
    /* '<S46>:206:27' */
    /* '<S46>:206:28' */
    magacinOut = 4.0;

    /* '<S46>:206:29' */
    GesamtsystemAltV2_DWork.magacin4++;
  } else if (GesamtsystemAltV2_DWork.magacin5 < 5.0) {
    /* '<S46>:206:31' */
    /* '<S46>:206:32' */
    magacinOut = 5.0;

    /* '<S46>:206:33' */
    GesamtsystemAltV2_DWork.magacin5++;
  } else if (GesamtsystemAltV2_DWork.blue != 22.0) {
    /* '<S46>:206:35' */
    if (GesamtsystemAltV2_DWork.magacin0 < 5.0) {
      /* '<S46>:206:36' */
      /* '<S46>:206:37' */
      magacinOut = 0.0;

      /* '<S46>:206:38' */
      GesamtsystemAltV2_DWork.magacin0++;
    } else if (GesamtsystemAltV2_DWork.magacin1 < 5.0) {
      /* '<S46>:206:40' */
      /* '<S46>:206:41' */
      magacinOut = 1.0;

      /* '<S46>:206:42' */
      GesamtsystemAltV2_DWork.magacin1++;
    } else if (GesamtsystemAltV2_DWork.magacin2 < 5.0) {
      /* '<S46>:206:44' */
      /* '<S46>:206:45' */
      magacinOut = 2.0;

      /* '<S46>:206:46' */
      GesamtsystemAltV2_DWork.magacin2++;
    } else {
      /* '<S46>:206:49' */
      magacinOut = 6.0;
    }
  } else if ((GesamtsystemAltV2_DWork.magacin0 == 5.0) &&
             (GesamtsystemAltV2_DWork.magacin1 == 5.0) &&
             (GesamtsystemAltV2_DWork.magacin2 == 5.0) &&
             (GesamtsystemAltV2_DWork.magacin3 == 5.0) &&
             (GesamtsystemAltV2_DWork.magacin4 == 5.0) &&
             (GesamtsystemAltV2_DWork.magacin5 == 5.0)) {
    /* '<S46>:206:52' */
    /* '<S46>:206:53' */
    magacinOut = -1.0;
  } else {
    /* '<S46>:206:55' */
    magacinOut = 6.0;
  }

  return magacinOut;
}

/* Function for Chart: '<S4>/Sortieralgorithmus2' */
static real_T GesamtsystemAlt_findPlaceForRed(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForRed': '<S46>:204' */
  if (GesamtsystemAltV2_DWork.magacin1 == 0.0) {
    /* '<S46>:204:3' */
    /* '<S46>:204:4' */
    magacinOut = 1.0;

    /* '<S46>:204:5' */
    GesamtsystemAltV2_DWork.magacin1++;

    /* '<S46>:204:6' */
  } else if ((GesamtsystemAltV2_DWork.magacin2 == 2.0) ||
             (GesamtsystemAltV2_DWork.magacin2 == 3.0)) {
    /* '<S46>:204:8' */
    /* '<S46>:204:9' */
    magacinOut = 2.0;

    /* '<S46>:204:10' */
    GesamtsystemAltV2_DWork.magacin2++;

    /* '<S46>:204:11' */
  } else if (GesamtsystemAltV2_DWork.magacin0 < 5.0) {
    /* '<S46>:204:13' */
    /* '<S46>:204:14' */
    magacinOut = 0.0;

    /* '<S46>:204:15' */
    GesamtsystemAltV2_DWork.magacin0++;

    /* '<S46>:204:16' */
  } else if (GesamtsystemAltV2_DWork.magacin1 >= 2.0) {
    /* '<S46>:204:18' */
    /* '<S46>:204:19' */
    magacinOut = 1.0;

    /* '<S46>:204:20' */
    GesamtsystemAltV2_DWork.magacin1++;

    /* '<S46>:204:21' */
  } else if (GesamtsystemAltV2_DWork.magacin3 != 5.0) {
    /* '<S46>:204:24' */
    /* '<S46>:204:25' */
    magacinOut = 3.0;

    /* '<S46>:204:26' */
    GesamtsystemAltV2_DWork.magacin3++;

    /* '<S46>:204:27' */
  } else if ((GesamtsystemAltV2_DWork.magacin1 <=
              GesamtsystemAltV2_DWork.magacin4) &&
             (GesamtsystemAltV2_DWork.magacin1 != 5.0)) {
    /* '<S46>:204:29' */
    /* '<S46>:204:30' */
    magacinOut = 1.0;

    /* '<S46>:204:31' */
    GesamtsystemAltV2_DWork.magacin1++;

    /* '<S46>:204:32' */
  } else if (GesamtsystemAltV2_DWork.magacin1 > GesamtsystemAltV2_DWork.magacin4)
  {
    /* '<S46>:204:34' */
    /* '<S46>:204:35' */
    magacinOut = 4.0;

    /* '<S46>:204:36' */
    GesamtsystemAltV2_DWork.magacin4++;
  } else if ((GesamtsystemAltV2_DWork.magacin2 <=
              GesamtsystemAltV2_DWork.magacin5) &&
             (GesamtsystemAltV2_DWork.magacin2 != 5.0)) {
    /* '<S46>:204:39' */
    /* '<S46>:204:40' */
    magacinOut = 2.0;

    /* '<S46>:204:41' */
    GesamtsystemAltV2_DWork.magacin2++;

    /* '<S46>:204:42' */
  } else if (GesamtsystemAltV2_DWork.magacin2 > GesamtsystemAltV2_DWork.magacin5)
  {
    /* '<S46>:204:44' */
    /* '<S46>:204:45' */
    magacinOut = 5.0;

    /* '<S46>:204:46' */
    GesamtsystemAltV2_DWork.magacin5++;

    /* '<S46>:204:47' */
  } else {
    /* '<S46>:204:50' */
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
void GesamtsystemAltV2_step0(void)     /* Sample time: [2.0E-5s, 0.0s] */
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
    GesamtsystemAltV2_B.AnalogDigitalWandlungSampletime = (AdcRegs.ADCRESULT0) >>
      4;
    GesamtsystemAltV2_B.AnalogDigitalWandlungSampleti_e = (AdcRegs.ADCRESULT1) >>
      4;
    GesamtsystemAltV2_B.AnalogDigitalWandlungSampleti_a = (AdcRegs.ADCRESULT2) >>
      4;
  }

  /* RelationalOperator: '<S52>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S52>/Constant'
   */
  rtb_VergleichmitSchwellwert = (GesamtsystemAltV2_P.Constant_Value <=
    GesamtsystemAltV2_B.AnalogDigitalWandlungSampleti_a);

  /* MultiPortSwitch: '<S53>/Multiport Switch' incorporates:
   *  Constant: '<S53>/Constant1'
   *  Constant: '<S53>/either edge'
   *  Constant: '<S53>/neg. edge'
   *  Constant: '<S53>/pos. edge'
   */
  switch ((int16_T)GesamtsystemAltV2_P.EdgeDetector1_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = GesamtsystemAltV2_P.posedge_Value[0];
    rtb_MultiportSwitch_idx_1 = GesamtsystemAltV2_P.posedge_Value[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = GesamtsystemAltV2_P.negedge_Value[0];
    rtb_MultiportSwitch_idx_1 = GesamtsystemAltV2_P.negedge_Value[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = GesamtsystemAltV2_P.eitheredge_Value[0];
    rtb_MultiportSwitch_idx_1 = GesamtsystemAltV2_P.eitheredge_Value[1];
    break;
  }

  /* End of MultiPortSwitch: '<S53>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S53>/POSITIVE Edge' */
  /* Memory: '<S53>/Memory' */
  GesamtsystemAl_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert, GesamtsystemAltV2_DWork.Memory_PreviousInput,
    &GesamtsystemAltV2_B.POSITIVEEdge);

  /* End of Outputs for SubSystem: '<S53>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S53>/NEGATIVE Edge' */
  GesamtsystemAl_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert, GesamtsystemAltV2_DWork.Memory_PreviousInput,
    &GesamtsystemAltV2_B.NEGATIVEEdge);

  /* End of Outputs for SubSystem: '<S53>/NEGATIVE Edge' */

  /* RelationalOperator: '<S52>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S52>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert_b =
    (GesamtsystemAltV2_B.AnalogDigitalWandlungSampletime <=
     GesamtsystemAltV2_P.HeuristischermittelterSchwellwe);

  /* MATLAB Function: '<S52>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S52>/Unit Delay3'
   *  UnitDelay: '<S52>/Unit Delay4'
   *  UnitDelay: '<S52>/Unit Delay5'
   */
  /* MATLAB Function 'Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2': '<S56>:1' */
  /* '<S56>:1:3' */
  y = 1.0;
  tmp_0 = !GesamtsystemAltV2_DWork.UnitDelay3_DSTATE;
  tmp_1 = !GesamtsystemAltV2_DWork.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S56>:1:7' */
    y = GesamtsystemAltV2_DWork.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_b) {
    /* '<S56>:1:10' */
    /* '<S56>:1:11' */
    y = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_b)) {
    /* '<S56>:1:14' */
    /* '<S56>:1:15' */
    y = -1.0;
  }

  tmp_0 = (tmp_0 && GesamtsystemAltV2_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S56>:1:22' */
    /* '<S56>:1:23' */
    y = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_b)
  {
    /* '<S56>:1:26' */
    /* '<S56>:1:27' */
    y = GesamtsystemAltV2_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_b) {
    /* '<S56>:1:34' */
    /* '<S56>:1:35' */
    y = 1.0;
  }

  tmp_0 = (GesamtsystemAltV2_DWork.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S56>:1:38' */
    /* '<S56>:1:39' */
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S56>:1:46' */
    /* '<S56>:1:47' */
    y = GesamtsystemAltV2_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_b) {
    /* '<S56>:1:50' */
    /* '<S56>:1:51' */
    y = -1.0;
  }

  tmp_0 = (GesamtsystemAltV2_DWork.UnitDelay3_DSTATE &&
           GesamtsystemAltV2_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_b)
  {
    /* '<S56>:1:58' */
    /* '<S56>:1:59' */
    y = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S56>:1:62' */
    /* '<S56>:1:63' */
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_b) {
    /* '<S56>:1:66' */
    /* '<S56>:1:67' */
    y = GesamtsystemAltV2_DWork.UnitDelay5_DSTATE;
  }

  if (y == 1.0) {
    /* '<S56>:1:70' */
    /* '<S56>:1:71' */
    GesamtsystemAltV2_B.RL = 1.0;
  } else {
    /* '<S56>:1:73' */
    GesamtsystemAltV2_B.RL = 0.0;
  }

  /* MATLAB Function: '<S52>/MATLAB Function1' incorporates:
   *  Logic: '<S53>/Logical Operator1'
   *  MATLAB Function: '<S52>/MATLAB Function2'
   *  Product: '<S52>/Product3'
   *  UnitDelay: '<S52>/Unit Delay1'
   */
  Gesamtsyste_MATLABFunction1((real_T)
    (GesamtsystemAltV2_B.POSITIVEEdge.RelationalOperator1 ||
     GesamtsystemAltV2_B.NEGATIVEEdge.RelationalOperator1) * y,
    GesamtsystemAltV2_DWork.UnitDelay1_DSTATE,
    &GesamtsystemAltV2_B.sf_MATLABFunction1);

  /* Product: '<S52>/Product1' incorporates:
   *  Constant: '<S52>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  rtb_Sum = GesamtsystemAltV2_P.WinkelFlankePolulo3416V022Polul *
    GesamtsystemAltV2_B.sf_MATLABFunction1.y;

  /* MultiPortSwitch: '<S54>/Multiport Switch' incorporates:
   *  Constant: '<S54>/Constant1'
   *  Constant: '<S54>/either edge'
   *  Constant: '<S54>/neg. edge'
   *  Constant: '<S54>/pos. edge'
   */
  switch ((int16_T)GesamtsystemAltV2_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = GesamtsystemAltV2_P.posedge_Value_i[0];
    rtb_MultiportSwitch_idx_1 = GesamtsystemAltV2_P.posedge_Value_i[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = GesamtsystemAltV2_P.negedge_Value_n[0];
    rtb_MultiportSwitch_idx_1 = GesamtsystemAltV2_P.negedge_Value_n[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = GesamtsystemAltV2_P.eitheredge_Value_h[0];
    rtb_MultiportSwitch_idx_1 = GesamtsystemAltV2_P.eitheredge_Value_h[1];
    break;
  }

  /* End of MultiPortSwitch: '<S54>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S54>/POSITIVE Edge' */
  /* Memory: '<S54>/Memory' */
  GesamtsystemAl_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_b,
    GesamtsystemAltV2_DWork.Memory_PreviousInput_k,
    &GesamtsystemAltV2_B.POSITIVEEdge_m);

  /* End of Outputs for SubSystem: '<S54>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S54>/NEGATIVE Edge' */
  GesamtsystemAl_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_b,
    GesamtsystemAltV2_DWork.Memory_PreviousInput_k,
    &GesamtsystemAltV2_B.NEGATIVEEdge_n);

  /* End of Outputs for SubSystem: '<S54>/NEGATIVE Edge' */

  /* MATLAB Function: '<S52>/MATLAB Function3' incorporates:
   *  Logic: '<S54>/Logical Operator1'
   *  MATLAB Function: '<S52>/MATLAB Function2'
   *  Product: '<S52>/Product'
   *  UnitDelay: '<S52>/Unit Delay2'
   */
  Gesamtsyste_MATLABFunction1(y * (real_T)
    (GesamtsystemAltV2_B.POSITIVEEdge_m.RelationalOperator1 ||
     GesamtsystemAltV2_B.NEGATIVEEdge_n.RelationalOperator1),
    GesamtsystemAltV2_DWork.UnitDelay2_DSTATE,
    &GesamtsystemAltV2_B.sf_MATLABFunction3);

  /* Sum: '<S52>/Sum' incorporates:
   *  Constant: '<S52>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S52>/Product2'
   */
  rtb_Sum += GesamtsystemAltV2_B.sf_MATLABFunction3.y *
    GesamtsystemAltV2_P.WinkelFlankePolulo3416V022Pol_l;

  /* RateTransition: '<S48>/Rate Transition3' */
  if (GesamtsystemAltV2_M->Timing.RateInteraction.TID0_1) {
    GesamtsystemAltV2_B.RateTransition3 = rtb_Sum;

    /* RateTransition: '<S4>/Rate Transition3' */
    GesamtsystemAltV2_B.RateTransition3_d =
      GesamtsystemAltV2_B.AnalogDigitalWandlungSampleti_e;
  }

  /* End of RateTransition: '<S48>/Rate Transition3' */

  /* S-Function (c280xgpio_do): '<S48>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (GesamtsystemAltV2_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Update for Memory: '<S53>/Memory' */
  GesamtsystemAltV2_DWork.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S52>/Unit Delay3' */
  GesamtsystemAltV2_DWork.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S52>/Unit Delay4' */
  GesamtsystemAltV2_DWork.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert_b;

  /* Update for UnitDelay: '<S52>/Unit Delay5' incorporates:
   *  MATLAB Function: '<S52>/MATLAB Function2'
   */
  GesamtsystemAltV2_DWork.UnitDelay5_DSTATE = y;

  /* Update for UnitDelay: '<S52>/Unit Delay1' */
  GesamtsystemAltV2_DWork.UnitDelay1_DSTATE =
    GesamtsystemAltV2_B.sf_MATLABFunction1.y;

  /* Update for Memory: '<S54>/Memory' */
  GesamtsystemAltV2_DWork.Memory_PreviousInput_k = rtb_VergleichmitSchwellwert_b;

  /* Update for UnitDelay: '<S52>/Unit Delay2' */
  GesamtsystemAltV2_DWork.UnitDelay2_DSTATE =
    GesamtsystemAltV2_B.sf_MATLABFunction3.y;
}

/* Model step function for TID1 */
void GesamtsystemAltV2_step1(void)     /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_ZM_pwm_out;
  real_T rtb_Product_i;
  int32_T bitIdx;
  int32_T intVal;
  int16_T j;
  uint32_T u;
  boolean_T sf_internal_predicateOutput;
  real_T a;
  real_T rtb_x_soll_Offset;
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
  GesamtsystemAltV2_DWork.RateTransition_semaphoreTaken =
    GesamtsystemAltV2_DWork.RateTransition_ActiveBufIdx;
  j = GesamtsystemAltV2_DWork.RateTransition_semaphoreTaken * 20;
  for (i = 0; i < 20; i++) {
    GesamtsystemAltV2_B.RateTransition[i] =
      GesamtsystemAltV2_DWork.RateTransition_Buffer[i + j];
  }

  /* End of RateTransition: '<S17>/Rate Transition' */

  /* Chart: '<S17>/Chart8' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8 */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8 */
  if (GesamtsystemAltV2_DWork.is_active_c17_GesamtsystemAltV2 == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8 */
    GesamtsystemAltV2_DWork.is_active_c17_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart8 */
    /* Transition: '<S33>:3' */
    GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2 = GesamtsystemAltV2_IN_init;

    /* Entry 'init': '<S33>:2' */
    GesamtsystemAltV2_DWork.values_out1[0] = 0;
    GesamtsystemAltV2_DWork.values_out1[1] = 0;
    GesamtsystemAltV2_DWork.values_out1[2] = 0;
    GesamtsystemAltV2_DWork.values_out1[3] = 0;
    GesamtsystemAltV2_DWork.values_out1[4] = 0;
    GesamtsystemAltV2_DWork.values_out1[5] = 0;
    GesamtsystemAltV2_DWork.values_out1[6] = 0;
    GesamtsystemAltV2_DWork.values_out1[7] = 0;
    GesamtsystemAltV2_DWork.values_out1[8] = 0;
    GesamtsystemAltV2_DWork.values_out1[9] = 0;
    GesamtsystemAltV2_DWork.values_out1[10] = 0;
    GesamtsystemAltV2_DWork.values_out1[11] = 0;
    GesamtsystemAltV2_DWork.values_out1[12] = 0;
    GesamtsystemAltV2_DWork.values_out1[13] = 0;
    GesamtsystemAltV2_DWork.values_out1[14] = 0;
    GesamtsystemAltV2_DWork.values_out1[15] = 0;
    GesamtsystemAltV2_DWork.values_out1[16] = 0;
    GesamtsystemAltV2_DWork.values_out1[17] = 0;
    GesamtsystemAltV2_DWork.values_out1[18] = 0;
    GesamtsystemAltV2_DWork.values_out1[19] = 0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2) {
     case IN_Anfang_found_Schritt_uebertr:
      /* During 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S33>:126' */
      if ((c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
            (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
              (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                  (GesamtsystemAltV2_DWork.values_out1[GesamtsystemAltV2_DWork.search],
                   GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.search, 1)]),
                  GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAltV2_DWork.search, 2)]),
                 GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAltV2_DWork.search, 3)]),
                GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAltV2_DWork.search, 4)]),
               GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAltV2_DWork.search, 5)]),
              GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAltV2_DWork.search, 6)]),
             GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAltV2_DWork.search, 7)]),
            GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
            (GesamtsystemAltV2_DWork.search, 8)]) ==
           GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAltV2_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.values_out1[GesamtsystemAltV2_DWork.search],
                    GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAltV2_DWork.search, 1)]),
                   GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.search, 2)]),
                  GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAltV2_DWork.search, 3)]),
                 GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAltV2_DWork.search, 4)]),
                GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAltV2_DWork.search, 5)]),
               GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAltV2_DWork.search, 6)]),
              GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAltV2_DWork.search, 7)]),
             GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAltV2_DWork.search, 8)]), 256) ==
           GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAltV2_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.values_out1[GesamtsystemAltV2_DWork.search],
                    GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAltV2_DWork.search, 1)]),
                   GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.search, 2)]),
                  GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAltV2_DWork.search, 3)]),
                 GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAltV2_DWork.search, 4)]),
                GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAltV2_DWork.search, 5)]),
               GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAltV2_DWork.search, 6)]),
              GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAltV2_DWork.search, 7)]),
             GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAltV2_DWork.search, 8)]), 512) ==
           GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAltV2_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.values_out1[GesamtsystemAltV2_DWork.search],
                    GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAltV2_DWork.search, 1)]),
                   GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.search, 2)]),
                  GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAltV2_DWork.search, 3)]),
                 GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAltV2_DWork.search, 4)]),
                GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAltV2_DWork.search, 5)]),
               GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAltV2_DWork.search, 6)]),
              GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAltV2_DWork.search, 7)]),
             GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAltV2_DWork.search, 8)]), 1536) ==
           GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAltV2_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.values_out1[GesamtsystemAltV2_DWork.search],
                    GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAltV2_DWork.search, 1)]),
                   GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.search, 2)]),
                  GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAltV2_DWork.search, 3)]),
                 GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAltV2_DWork.search, 4)]),
                GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAltV2_DWork.search, 5)]),
               GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAltV2_DWork.search, 6)]),
              GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAltV2_DWork.search, 7)]),
             GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAltV2_DWork.search, 8)]), 1280) ==
           GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAltV2_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.values_out1[GesamtsystemAltV2_DWork.search],
                    GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAltV2_DWork.search, 1)]),
                   GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.search, 2)]),
                  GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAltV2_DWork.search, 3)]),
                 GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAltV2_DWork.search, 4)]),
                GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAltV2_DWork.search, 5)]),
               GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAltV2_DWork.search, 6)]),
              GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAltV2_DWork.search, 7)]),
             GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAltV2_DWork.search, 8)]), 1024) ==
           GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAltV2_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.values_out1[GesamtsystemAltV2_DWork.search],
                    GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAltV2_DWork.search, 1)]),
                   GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.search, 2)]),
                  GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAltV2_DWork.search, 3)]),
                 GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAltV2_DWork.search, 4)]),
                GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAltV2_DWork.search, 5)]),
               GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAltV2_DWork.search, 6)]),
              GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAltV2_DWork.search, 7)]),
             GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAltV2_DWork.search, 8)]), 768) ==
           GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAltV2_DWork.search, 9)]) || (c28x_sub_s16_s16_s16_sat
           (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
             (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
               (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                 (c28x_add_s16_s16_s16_sat(c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.values_out1[GesamtsystemAltV2_DWork.search],
                    GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                    (GesamtsystemAltV2_DWork.search, 1)]),
                   GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                   (GesamtsystemAltV2_DWork.search, 2)]),
                  GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                  (GesamtsystemAltV2_DWork.search, 3)]),
                 GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                 (GesamtsystemAltV2_DWork.search, 4)]),
                GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
                (GesamtsystemAltV2_DWork.search, 5)]),
               GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
               (GesamtsystemAltV2_DWork.search, 6)]),
              GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
              (GesamtsystemAltV2_DWork.search, 7)]),
             GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
             (GesamtsystemAltV2_DWork.search, 8)]), 1792) ==
           GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
           (GesamtsystemAltV2_DWork.search, 9)])) {
        /* Transition: '<S33>:144' */
        /* Transition: '<S33>:145' */
        /* Transition: '<S33>:146' */
        /* Transition: '<S33>:151' */
        /* Transition: '<S33>:150' */
        /* Transition: '<S33>:149' */
        /* Transition: '<S33>:147' */
        /* Transition: '<S33>:156' */
        GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2 =
          Gesamts_IN_x5_valid_data_found1;

        /* Entry 'x5_valid_data_found1': '<S33>:148' */
        GesamtsystemAltV2_B.valid_values1 =
          GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAltV2_DWork.search, 1)];
        GesamtsystemAltV2_B.valid_values2 =
          GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAltV2_DWork.search, 2)];
        GesamtsystemAltV2_B.valid_values3 =
          GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAltV2_DWork.search, 3)];
        GesamtsystemAltV2_B.valid_values4 =
          GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAltV2_DWork.search, 4)];
        GesamtsystemAltV2_B.valid_values5 =
          GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAltV2_DWork.search, 5)];
        GesamtsystemAltV2_B.valid_values6 =
          GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAltV2_DWork.search, 6)];
        GesamtsystemAltV2_B.valid_values7 =
          GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAltV2_DWork.search, 7)];
        GesamtsystemAltV2_B.valid_values8 =
          GesamtsystemAltV2_DWork.values_out1[c28x_add_s16_s16_s16_sat
          (GesamtsystemAltV2_DWork.search, 8)];
        GesamtsystemAltV2_DWork.zaehler = c28x_add_s32_s32_s32_sat
          (GesamtsystemAltV2_DWork.zaehler, 1L);
      } else {
        /* Transition: '<S33>:135' */
        GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_x1_search1;

        /* Entry 'x1_search1': '<S33>:125' */
        GesamtsystemAltV2_DWork.search = c28x_add_s16_s16_s16_sat
          (GesamtsystemAltV2_DWork.search, 1);
      }
      break;

     case GesamtsystemAltV2_IN_init:
      /* During 'init': '<S33>:2' */
      /* Transition: '<S33>:112' */
      GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2 =
        GesamtsystemAlt_IN_wert_erkannt;
      Gesam_enter_atomic_wert_erkannt();
      break;

     case GesamtsystemAlt_IN_wert_erkannt:
      /* During 'wert_erkannt': '<S33>:109' */
      /* Transition: '<S33>:116' */
      GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2 =
        GesamtsystemAl_IN_wert_erkannt2;

      /* Entry 'wert_erkannt2': '<S33>:115' */
      GesamtsystemAltV2_DWork.search = 0;
      GesamtsystemAltV2_DWork.counter = c28x_add_s32_s32_s32_sat
        (GesamtsystemAltV2_DWork.counter, 1L);
      break;

     case GesamtsystemAl_IN_wert_erkannt2:
      /* During 'wert_erkannt2': '<S33>:115' */
      if (GesamtsystemAltV2_DWork.values_out1[GesamtsystemAltV2_DWork.search] ==
          88) {
        /* Transition: '<S33>:127' */
        GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2 =
          IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S33>:126' */
        GesamtsystemAltV2_DWork.x_found = c28x_add_s32_s32_s32_sat
          (GesamtsystemAltV2_DWork.x_found, 1L);
      } else {
        /* Transition: '<S33>:128' */
        GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_x1_search1;

        /* Entry 'x1_search1': '<S33>:125' */
        GesamtsystemAltV2_DWork.search = c28x_add_s16_s16_s16_sat
          (GesamtsystemAltV2_DWork.search, 1);
      }
      break;

     case GesamtsystemAltV2_IN_x1_search1:
      /* During 'x1_search1': '<S33>:125' */
      if (GesamtsystemAltV2_DWork.values_out1[GesamtsystemAltV2_DWork.search] ==
          88) {
        /* Transition: '<S33>:129' */
        GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2 =
          IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S33>:126' */
        GesamtsystemAltV2_DWork.x_found = c28x_add_s32_s32_s32_sat
          (GesamtsystemAltV2_DWork.x_found, 1L);
      } else if (GesamtsystemAltV2_DWork.search < 19) {
        /* Transition: '<S33>:130' */
        GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_x1_search1;

        /* Entry 'x1_search1': '<S33>:125' */
        GesamtsystemAltV2_DWork.search = c28x_add_s16_s16_s16_sat
          (GesamtsystemAltV2_DWork.search, 1);
      } else {
        /* Transition: '<S33>:133' */
        GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2 =
          GesamtsystemAlt_IN_wert_erkannt;
        Gesam_enter_atomic_wert_erkannt();
      }
      break;

     default:
      /* During 'x5_valid_data_found1': '<S33>:148' */
      /* Transition: '<S33>:152' */
      GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2 =
        GesamtsystemAlt_IN_wert_erkannt;
      Gesam_enter_atomic_wert_erkannt();
      break;
    }
  }

  /* End of Chart: '<S17>/Chart8' */

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter2' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAltV2_B.valid_values1;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter2[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S17>/Integer to Bit Converter2' */

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter3' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAltV2_B.valid_values2;
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
  if (GesamtsystemAltV2_DWork.is_active_c16_GesamtsystemAltV2 == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart6 */
    GesamtsystemAltV2_DWork.is_active_c16_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart6 */
    /* Transition: '<S32>:3' */
    GesamtsystemAltV2_DWork.is_c16_GesamtsystemAltV2 = GesamtsystemAltV2_IN_x0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c16_GesamtsystemAltV2) {
     case GesamtsystemA_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S32>:17' */
      /* Transition: '<S32>:24' */
      GesamtsystemAltV2_DWork.is_c16_GesamtsystemAltV2 =
        GesamtsystemAltV2_IN_x1_1;

      /* Entry 'x1_1': '<S32>:26' */
      GesamtsystemAltV2_B.int16x_bin[0] = rtb_IntegertoBitConverter2[0];
      GesamtsystemAltV2_B.int16x_bin[1] = rtb_IntegertoBitConverter2[1];
      GesamtsystemAltV2_B.int16x_bin[2] = rtb_IntegertoBitConverter2[2];
      GesamtsystemAltV2_B.int16x_bin[3] = rtb_IntegertoBitConverter2[3];
      GesamtsystemAltV2_B.int16x_bin[4] = rtb_IntegertoBitConverter2[4];
      GesamtsystemAltV2_B.int16x_bin[5] = rtb_IntegertoBitConverter2[5];
      GesamtsystemAltV2_B.int16x_bin[6] = rtb_IntegertoBitConverter2[6];
      GesamtsystemAltV2_B.int16x_bin[7] = rtb_IntegertoBitConverter2[7];
      GesamtsystemAltV2_B.int16x_bin[8] = rtb_IntegertoBitConverter3[0];
      GesamtsystemAltV2_B.int16x_bin[9] = rtb_IntegertoBitConverter3[1];
      GesamtsystemAltV2_B.int16x_bin[10] = rtb_IntegertoBitConverter3[2];
      GesamtsystemAltV2_B.int16x_bin[11] = rtb_IntegertoBitConverter3[3];
      GesamtsystemAltV2_B.int16x_bin[12] = rtb_IntegertoBitConverter3[4];
      GesamtsystemAltV2_B.int16x_bin[13] = rtb_IntegertoBitConverter3[5];
      GesamtsystemAltV2_B.int16x_bin[14] = rtb_IntegertoBitConverter3[6];
      GesamtsystemAltV2_B.int16x_bin[15] = rtb_IntegertoBitConverter3[7];
      break;

     case GesamtsystemAltV2_IN_x0:
      /* During 'x0': '<S32>:2' */
      /* Transition: '<S32>:7' */
      GesamtsystemAltV2_DWork.is_c16_GesamtsystemAltV2 =
        GesamtsystemA_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S32>:26' */
      /* Transition: '<S32>:25' */
      GesamtsystemAltV2_DWork.is_c16_GesamtsystemAltV2 =
        GesamtsystemA_IN_Daten_einlesen;
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
    intVal |= (int32_T)(real32_T)floor(GesamtsystemAltV2_B.int16x_bin[bitIdx]);
    if ((j == 0) && (intVal != 0L)) {
      /* Output Integer values are signed, do sign extension */
      intVal = -1L;
    }

    bitIdx++;
  }

  /* Gain: '<S17>/x in mm' incorporates:
   *  S-Function (scominttobit): '<S17>/Bit to Integer Converter'
   */
  rtb_Product_i = (real_T)GesamtsystemAltV2_P.xinmm_Gain * (real32_T)intVal;

  /* Rounding: '<S17>/Rounding Function' */
  rtb_RoundingFunction = rt_roundd_snf(rtb_Product_i);

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter1' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAltV2_B.valid_values3;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter1[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S17>/Integer to Bit Converter1' */

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter4' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAltV2_B.valid_values4;
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
  if (GesamtsystemAltV2_DWork.is_active_c13_GesamtsystemAltV2 == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart2 */
    GesamtsystemAltV2_DWork.is_active_c13_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart2 */
    /* Transition: '<S30>:3' */
    GesamtsystemAltV2_DWork.is_c13_GesamtsystemAltV2 = GesamtsystemAltV2_IN_x0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c13_GesamtsystemAltV2) {
     case GesamtsystemA_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S30>:17' */
      /* Transition: '<S30>:24' */
      GesamtsystemAltV2_DWork.is_c13_GesamtsystemAltV2 =
        GesamtsystemAltV2_IN_x1_1;

      /* Entry 'x1_1': '<S30>:26' */
      GesamtsystemAltV2_B.int16y_bin[0] = rtb_IntegertoBitConverter1[0];
      GesamtsystemAltV2_B.int16y_bin[1] = rtb_IntegertoBitConverter1[1];
      GesamtsystemAltV2_B.int16y_bin[2] = rtb_IntegertoBitConverter1[2];
      GesamtsystemAltV2_B.int16y_bin[3] = rtb_IntegertoBitConverter1[3];
      GesamtsystemAltV2_B.int16y_bin[4] = rtb_IntegertoBitConverter1[4];
      GesamtsystemAltV2_B.int16y_bin[5] = rtb_IntegertoBitConverter1[5];
      GesamtsystemAltV2_B.int16y_bin[6] = rtb_IntegertoBitConverter1[6];
      GesamtsystemAltV2_B.int16y_bin[7] = rtb_IntegertoBitConverter1[7];
      GesamtsystemAltV2_B.int16y_bin[8] = rtb_IntegertoBitConverter4[0];
      GesamtsystemAltV2_B.int16y_bin[9] = rtb_IntegertoBitConverter4[1];
      GesamtsystemAltV2_B.int16y_bin[10] = rtb_IntegertoBitConverter4[2];
      GesamtsystemAltV2_B.int16y_bin[11] = rtb_IntegertoBitConverter4[3];
      GesamtsystemAltV2_B.int16y_bin[12] = rtb_IntegertoBitConverter4[4];
      GesamtsystemAltV2_B.int16y_bin[13] = rtb_IntegertoBitConverter4[5];
      GesamtsystemAltV2_B.int16y_bin[14] = rtb_IntegertoBitConverter4[6];
      GesamtsystemAltV2_B.int16y_bin[15] = rtb_IntegertoBitConverter4[7];
      break;

     case GesamtsystemAltV2_IN_x0:
      /* During 'x0': '<S30>:2' */
      /* Transition: '<S30>:7' */
      GesamtsystemAltV2_DWork.is_c13_GesamtsystemAltV2 =
        GesamtsystemA_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S30>:26' */
      /* Transition: '<S30>:25' */
      GesamtsystemAltV2_DWork.is_c13_GesamtsystemAltV2 =
        GesamtsystemA_IN_Daten_einlesen;
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
    intVal |= (int32_T)(real32_T)floor(GesamtsystemAltV2_B.int16y_bin[bitIdx]);
    if ((j == 0) && (intVal != 0L)) {
      /* Output Integer values are signed, do sign extension */
      intVal = -1L;
    }

    bitIdx++;
  }

  /* Gain: '<S17>/y in mm' incorporates:
   *  S-Function (scominttobit): '<S17>/Bit to Integer Converter1'
   */
  rtb_Product_i = (real_T)GesamtsystemAltV2_P.yinmm_Gain * (real32_T)intVal;

  /* Rounding: '<S17>/Rounding Function1' */
  rtb_RoundingFunction1 = rt_roundd_snf(rtb_Product_i);

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter5' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAltV2_B.valid_values5;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter5[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S17>/Integer to Bit Converter5' */

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter6' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAltV2_B.valid_values6;
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
  if (GesamtsystemAltV2_DWork.is_active_c14_GesamtsystemAltV2 == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart4 */
    GesamtsystemAltV2_DWork.is_active_c14_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart4 */
    /* Transition: '<S31>:3' */
    GesamtsystemAltV2_DWork.is_c14_GesamtsystemAltV2 = GesamtsystemAltV2_IN_x0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c14_GesamtsystemAltV2) {
     case GesamtsystemA_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S31>:17' */
      /* Transition: '<S31>:24' */
      GesamtsystemAltV2_DWork.is_c14_GesamtsystemAltV2 =
        GesamtsystemAltV2_IN_x1_1;

      /* Entry 'x1_1': '<S31>:26' */
      GesamtsystemAltV2_B.int16a1_bin[0] = rtb_IntegertoBitConverter5[0];
      GesamtsystemAltV2_B.int16a1_bin[1] = rtb_IntegertoBitConverter5[1];
      GesamtsystemAltV2_B.int16a1_bin[2] = rtb_IntegertoBitConverter5[2];
      GesamtsystemAltV2_B.int16a1_bin[3] = rtb_IntegertoBitConverter5[3];
      GesamtsystemAltV2_B.int16a1_bin[4] = rtb_IntegertoBitConverter5[4];
      GesamtsystemAltV2_B.int16a1_bin[5] = rtb_IntegertoBitConverter5[5];
      GesamtsystemAltV2_B.int16a1_bin[6] = rtb_IntegertoBitConverter5[6];
      GesamtsystemAltV2_B.int16a1_bin[7] = rtb_IntegertoBitConverter5[7];
      GesamtsystemAltV2_B.int16a1_bin[8] = rtb_IntegertoBitConverter6[0];
      GesamtsystemAltV2_B.int16a1_bin[9] = rtb_IntegertoBitConverter6[1];
      GesamtsystemAltV2_B.int16a1_bin[10] = rtb_IntegertoBitConverter6[2];
      GesamtsystemAltV2_B.int16a1_bin[11] = rtb_IntegertoBitConverter6[3];
      GesamtsystemAltV2_B.int16a1_bin[12] = rtb_IntegertoBitConverter6[4];
      GesamtsystemAltV2_B.int16a1_bin[13] = rtb_IntegertoBitConverter6[5];
      GesamtsystemAltV2_B.int16a1_bin[14] = rtb_IntegertoBitConverter6[6];
      GesamtsystemAltV2_B.int16a1_bin[15] = rtb_IntegertoBitConverter6[7];
      break;

     case GesamtsystemAltV2_IN_x0:
      /* During 'x0': '<S31>:2' */
      /* Transition: '<S31>:7' */
      GesamtsystemAltV2_DWork.is_c14_GesamtsystemAltV2 =
        GesamtsystemA_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S31>:26' */
      /* Transition: '<S31>:25' */
      GesamtsystemAltV2_DWork.is_c14_GesamtsystemAltV2 =
        GesamtsystemA_IN_Daten_einlesen;
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
    intVal |= (int32_T)(real32_T)floor(GesamtsystemAltV2_B.int16a1_bin[bitIdx]);
    if ((j == 0) && (intVal != 0L)) {
      /* Output Integer values are signed, do sign extension */
      intVal = -1L;
    }

    bitIdx++;
  }

  /* Gain: '<S17>/alpha in °' incorporates:
   *  S-Function (scominttobit): '<S17>/Bit to Integer Converter2'
   */
  rtb_Product_i = (real_T)GesamtsystemAltV2_P.alphain_Gain * (real32_T)intVal;

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
  if (GesamtsystemAltV2_DWork.is_active_c4_GesamtsystemAltV2 == 0U) {
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
    GesamtsystemAltV2_DWork.is_active_c4_GesamtsystemAltV2 = 1U;

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
    GesamtsystemAltV2_DWork.is_c4_GesamtsystemAltV2 =
      Gesamtsyste_IN_Einstellung_Init;

    /* Entry 'Einstellung_Init': '<S14>:1430' */
    GesamtsystemAltV2_DWork.r_Versatz_Nexo = 3.0;
    GesamtsystemAltV2_DWork.phi_Versatz_Nexo = 45.0;
    GesamtsystemAltV2_DWork.psi_Offset_Nexo = 14.0;
  } else if (GesamtsystemAltV2_DWork.is_c4_GesamtsystemAltV2 == 1U) {
    /* During 'Einstellung_Init': '<S14>:1430' */
    /* Transition: '<S14>:1429' */
    GesamtsystemAltV2_DWork.is_c4_GesamtsystemAltV2 =
      GesamtsystemAl_IN_Konvertierung;

    /* Entry 'Konvertierung': '<S14>:1428' */
    GesamtsystemAltV2_B.alpha_Wagen = rt_roundd_snf(rtb_Product_i) -
      GesamtsystemAltV2_DWork.psi_Offset_Nexo;
    GesamtsystemAltV2_B.x_Wagen = rtb_RoundingFunction - rt_roundd_snf(cos
      ((GesamtsystemAltV2_DWork.phi_Versatz_Nexo +
        GesamtsystemAltV2_B.alpha_Wagen) * 2.0 * 3.1415926535897931 / 360.0) *
      GesamtsystemAltV2_DWork.r_Versatz_Nexo);
    GesamtsystemAltV2_B.y_Wagen = rtb_RoundingFunction1 - rt_roundd_snf(sin
      ((GesamtsystemAltV2_DWork.phi_Versatz_Nexo +
        GesamtsystemAltV2_B.alpha_Wagen) * 2.0 * 3.1415926535897931 / 360.0) *
      GesamtsystemAltV2_DWork.r_Versatz_Nexo);
  } else {
    /* During 'Konvertierung': '<S14>:1428' */
    GesamtsystemAltV2_B.alpha_Wagen = rt_roundd_snf(rtb_Product_i) -
      GesamtsystemAltV2_DWork.psi_Offset_Nexo;
    rtb_Zeitinsec = (GesamtsystemAltV2_DWork.phi_Versatz_Nexo +
                     GesamtsystemAltV2_B.alpha_Wagen) * 2.0 * 3.1415926535897931
      / 360.0;
    GesamtsystemAltV2_B.x_Wagen = rtb_RoundingFunction - rt_roundd_snf(cos
      (rtb_Zeitinsec) * GesamtsystemAltV2_DWork.r_Versatz_Nexo);
    GesamtsystemAltV2_B.y_Wagen = rtb_RoundingFunction1 - rt_roundd_snf(sin
      (rtb_Zeitinsec) * GesamtsystemAltV2_DWork.r_Versatz_Nexo);
  }

  /* End of Chart: '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */

  /* S-Function (c280xgpio_di): '<S13>/Signaleingang fuer Heckschalter' */
  {
    GesamtsystemAltV2_B.SignaleingangfuerHeckschalter =
      GpioDataRegs.GPADAT.bit.GPIO24;
  }

  /* Chart: '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
  if (GesamtsystemAltV2_DWork.temporalCounter_i1 < MAX_uint32_T) {
    GesamtsystemAltV2_DWork.temporalCounter_i1++;
  }

  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Trajektorie-System
     [Einstellungen moeglich]/Fahrablaufsteuerung
     [Init: Zielradius = 10mm]
     Gang = 0: vorwaerts
     Gang = 1: rueckwaerts
     Folgende Werte fuer den Ablauf
     sind einstellbar:
     - Zielkoordinatenwerte
     - Gangwert (außer bei "Ende") */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Trajektorie-System
     [Einstellungen moeglich]/Fahrablaufsteuerung
     [Init: Zielradius = 10mm]
     Gang = 0: vorwaerts
     Gang = 1: rueckwaerts
     Folgende Werte fuer den Ablauf
     sind einstellbar:
     - Zielkoordinatenwerte
     - Gangwert (außer bei "Ende") */
  if (GesamtsystemAltV2_DWork.is_active_c5_GesamtsystemAltV2 == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Trajektorie-System
       [Einstellungen moeglich]/Fahrablaufsteuerung
       [Init: Zielradius = 10mm]
       Gang = 0: vorwaerts
       Gang = 1: rueckwaerts
       Folgende Werte fuer den Ablauf
       sind einstellbar:
       - Zielkoordinatenwerte
       - Gangwert (außer bei "Ende") */
    GesamtsystemAltV2_DWork.is_active_c5_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Trajektorie-System
       [Einstellungen moeglich]/Fahrablaufsteuerung
       [Init: Zielradius = 10mm]
       Gang = 0: vorwaerts
       Gang = 1: rueckwaerts
       Folgende Werte fuer den Ablauf
       sind einstellbar:
       - Zielkoordinatenwerte
       - Gangwert (außer bei "Ende") */
    /* Transition: '<S40>:1325' */
    GesamtsystemAltV2_DWork.is_c5_GesamtsystemAltV2 =
      Gesam_IN_Start_Einstellung_Init;

    /* Entry 'Start_Einstellung_Init': '<S40>:1324' */
    GesamtsystemAltV2_B.Zielradius = 20.0;
    GesamtsystemAltV2_B.Wartezeit = 10.0;
    GesamtsystemAltV2_DWork.x_Uebergabe = 1440.0;
    GesamtsystemAltV2_DWork.y_Uebergabe = 50.0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c5_GesamtsystemAltV2) {
     case GesamtsystemAltV2_IN_Ende:
      /* During 'Ende': '<S40>:132' */
      break;

     case GesamtsystemAltV2_IN_Parken:
      /* During 'Parken': '<S40>:2241' */
      if (GesamtsystemAltV2_DWork.Counter == 3.0) {
        /* Transition: '<S40>:2254' */
        /* Exit Internal 'Parken': '<S40>:2241' */
        GesamtsystemAltV2_DWork.is_Parken = Gesamtsystem_IN_NO_ACTIVE_CHILD;
        GesamtsystemAltV2_DWork.is_c5_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Ende;

        /* Entry 'Ende': '<S40>:132' */
        GesamtsystemAltV2_B.Gang = 2.0;
      } else {
        switch (GesamtsystemAltV2_DWork.is_Parken) {
         case GesamtsystemAltV2_IN_Parken_1:
          /* During 'Parken_1': '<S40>:2248' */
          if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
               GesamtsystemAltV2_B.Zielradius) && (fabs
               (GesamtsystemAltV2_B.y_soll - GesamtsystemAltV2_B.y_Wagen) <=
               GesamtsystemAltV2_B.Zielradius)) {
            /* Transition: '<S40>:2243' */
            GesamtsystemAltV2_DWork.is_Parken = GesamtsystemAltV2_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S40>:2249' */
            GesamtsystemAltV2_DWork.Counter++;
          }
          break;

         case GesamtsystemAltV2_IN_Parken_2:
          /* During 'Parken_2': '<S40>:2250' */
          if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
               GesamtsystemAltV2_B.Zielradius) && (fabs
               (GesamtsystemAltV2_B.y_soll - GesamtsystemAltV2_B.y_Wagen) <=
               GesamtsystemAltV2_B.Zielradius)) {
            /* Transition: '<S40>:2245' */
            GesamtsystemAltV2_DWork.is_Parken = GesamtsystemAltV2_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S40>:2251' */
            GesamtsystemAltV2_DWork.Counter++;
          }
          break;

         case GesamtsystemAltV2_IN_Parken_3:
          /* During 'Parken_3': '<S40>:2252' */
          if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
               GesamtsystemAltV2_B.Zielradius) && (fabs
               (GesamtsystemAltV2_B.y_soll - GesamtsystemAltV2_B.y_Wagen) <=
               GesamtsystemAltV2_B.Zielradius)) {
            /* Transition: '<S40>:2247' */
            GesamtsystemAltV2_DWork.is_Parken = GesamtsystemAltV2_IN_Wechsel_3;

            /* Entry 'Wechsel_3': '<S40>:2253' */
            GesamtsystemAltV2_DWork.Counter++;
          }
          break;

         case GesamtsystemAltV2_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S40>:2249' */
          /* Transition: '<S40>:2244' */
          GesamtsystemAltV2_DWork.is_Parken = GesamtsystemAltV2_IN_Parken_2;

          /* Entry 'Parken_2': '<S40>:2250' */
          GesamtsystemAltV2_B.x_soll = 1550.0;
          GesamtsystemAltV2_B.y_soll = -155.0;
          break;

         case GesamtsystemAltV2_IN_Wechsel_2:
          /* During 'Wechsel_2': '<S40>:2251' */
          /* Transition: '<S40>:2246' */
          GesamtsystemAltV2_DWork.is_Parken = GesamtsystemAltV2_IN_Parken_3;

          /* Entry 'Parken_3': '<S40>:2252' */
          GesamtsystemAltV2_B.x_soll = 1640.0;
          GesamtsystemAltV2_B.y_soll = -140.0;
          break;

         default:
          /* During 'Wechsel_3': '<S40>:2253' */
          break;
        }
      }
      break;

     case GesamtsystemAltV2_IN_Sammeln:
      GesamtsystemAltV2_Sammeln();
      break;

     case Gesam_IN_Start_Einstellung_Init:
      GesamtsystemAltV2_B.Zielradius = 20.0;

      /* During 'Start_Einstellung_Init': '<S40>:1324' */
      /* Transition: '<S40>:244' */
      GesamtsystemAltV2_B.Gang = 0.0;
      GesamtsystemAltV2_DWork.is_c5_GesamtsystemAltV2 =
        GesamtsystemAltV2_IN_Sammeln;

      /* Entry Internal 'Sammeln': '<S40>:2195' */
      /* Transition: '<S40>:2196' */
      GesamtsystemAltV2_DWork.Counter = 0.0;
      GesamtsystemAltV2_DWork.is_Sammeln = GesamtsystemAl_IN_Anfahrpunkt_1;

      /* Entry 'Anfahrpunkt_1': '<S40>:2219' */
      GesamtsystemAltV2_B.x_soll = 1500.0;
      GesamtsystemAltV2_B.y_soll = 0.0;
      break;

     default:
      /* During 'Uebergabe': '<S40>:1340' */
      if (GesamtsystemAltV2_DWork.Counter == 2.0) {
        /* Transition: '<S40>:1326' */
        GesamtsystemAltV2_B.Gang = 0.0;

        /* Exit Internal 'Uebergabe': '<S40>:1340' */
        GesamtsystemAltV2_DWork.is_Uebergabe = Gesamtsystem_IN_NO_ACTIVE_CHILD;
        GesamtsystemAltV2_DWork.is_c5_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Parken;

        /* Entry Internal 'Parken': '<S40>:2241' */
        /* Transition: '<S40>:2242' */
        GesamtsystemAltV2_DWork.Counter = 0.0;
        GesamtsystemAltV2_DWork.is_Parken = GesamtsystemAltV2_IN_Parken_1;

        /* Entry 'Parken_1': '<S40>:2248' */
        GesamtsystemAltV2_B.x_soll = GesamtsystemAltV2_DWork.x_Uebergabe;
        GesamtsystemAltV2_B.y_soll = -75.0;
      } else {
        switch (GesamtsystemAltV2_DWork.is_Uebergabe) {
         case Ge_IN_Uebergabepunkt_x_Richtung:
          /* During 'Uebergabepunkt_x_Richtung': '<S40>:1346' */
          if ((fabs(GesamtsystemAltV2_B.x_soll - GesamtsystemAltV2_B.x_Wagen) <=
               GesamtsystemAltV2_B.Zielradius) && (fabs
               (GesamtsystemAltV2_B.y_soll - GesamtsystemAltV2_B.y_Wagen) <=
               GesamtsystemAltV2_B.Zielradius)) {
            /* Transition: '<S40>:1342' */
            GesamtsystemAltV2_DWork.x_least = GesamtsystemAltV2_B.x_soll;
            GesamtsystemAltV2_DWork.is_Uebergabe =
              GesamtsystemAltV2_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S40>:1347' */
            GesamtsystemAltV2_DWork.Counter++;
          }
          break;

         case Ge_IN_Uebergabepunkt_y_Richtung:
          /* During 'Uebergabepunkt_y_Richtung': '<S40>:1348' */
          if (GesamtsystemAltV2_B.SignaleingangfuerHeckschalter) {
            /* Transition: '<S40>:1344' */
            GesamtsystemAltV2_DWork.is_Uebergabe =
              Gesamtsyste_IN_Warten_Uebergabe;
            GesamtsystemAltV2_DWork.temporalCounter_i1 = 0UL;

            /* Entry 'Warten_Uebergabe': '<S40>:1349' */
            GesamtsystemAltV2_B.x_soll = GesamtsystemAltV2_DWork.x_Uebergabe;
            GesamtsystemAltV2_B.y_soll = GesamtsystemAltV2_DWork.y_Uebergabe;
          }
          break;

         case Gesamtsyste_IN_Warten_Uebergabe:
          /* During 'Warten_Uebergabe': '<S40>:1349' */
          if (GesamtsystemAltV2_DWork.temporalCounter_i1 >= (uint32_T)ceil
              (GesamtsystemAltV2_B.Wartezeit * 100.0)) {
            /* Transition: '<S40>:1345' */
            GesamtsystemAltV2_DWork.is_Uebergabe =
              GesamtsystemAltV2_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S40>:1350' */
            GesamtsystemAltV2_DWork.Counter++;
          }
          break;

         case GesamtsystemAltV2_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S40>:1347' */
          /* Transition: '<S40>:1343' */
          GesamtsystemAltV2_DWork.is_Uebergabe = Ge_IN_Uebergabepunkt_y_Richtung;

          /* Entry 'Uebergabepunkt_y_Richtung': '<S40>:1348' */
          GesamtsystemAltV2_B.x_soll = GesamtsystemAltV2_DWork.x_least;
          GesamtsystemAltV2_B.y_soll = 3000.0;
          break;

         default:
          /* During 'Wechsel_2': '<S40>:1350' */
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */

  /* Chart: '<S3>/Steuersystem fuer Heckschalter' incorporates:
   *  Delay: '<S5>/Delay'
   */
  if (GesamtsystemAltV2_DWork.temporalCounter_i1_p < MAX_uint32_T) {
    GesamtsystemAltV2_DWork.temporalCounter_i1_p++;
  }

  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Steuersystem fuer Heckschalter */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Steuersystem fuer Heckschalter */
  if (GesamtsystemAltV2_DWork.is_active_c9_GesamtsystemAltV2 == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Steuersystem fuer Heckschalter */
    GesamtsystemAltV2_DWork.is_active_c9_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Steuersystem fuer Heckschalter */
    /* Transition: '<S18>:1410' */
    GesamtsystemAltV2_DWork.is_c9_GesamtsystemAltV2 = GesamtsystemAltV2_IN_Start;

    /* Entry 'Start': '<S18>:1411' */
    rtb_RoundingFunction1 = 0.0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c9_GesamtsystemAltV2) {
     case GesamtsystemAltV2_IN_Ende:
      rtb_RoundingFunction1 = 0.0;

      /* During 'Ende': '<S18>:1419' */
      break;

     case GesamtsystemAltV2_IN_Start:
      rtb_RoundingFunction1 = 0.0;

      /* During 'Start': '<S18>:1411' */
      if (GesamtsystemAltV2_B.SignaleingangfuerHeckschalter) {
        /* Transition: '<S18>:1415' */
        GesamtsystemAltV2_DWork.is_c9_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Weiter1;
        GesamtsystemAltV2_DWork.temporalCounter_i1_p = 0UL;

        /* Entry 'Weiter1': '<S18>:1413' */
        rtb_RoundingFunction1 = 1.0;
      }
      break;

     case GesamtsystemAltV2_IN_Warten:
      rtb_RoundingFunction1 = 0.0;

      /* During 'Warten': '<S18>:1412' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_p >= (uint32_T)ceil
          (GesamtsystemAltV2_B.Wartezeit * 100.0)) {
        /* Transition: '<S18>:1417' */
        GesamtsystemAltV2_DWork.is_c9_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Weiter2;
        GesamtsystemAltV2_DWork.temporalCounter_i1_p = 0UL;

        /* Entry 'Weiter2': '<S18>:1414' */
        rtb_RoundingFunction1 = 1.0;
      }
      break;

     case GesamtsystemAltV2_IN_Weiter1:
      rtb_RoundingFunction1 = 1.0;

      /* During 'Weiter1': '<S18>:1413' */
      if (GesamtsystemAltV2_B.SignaleingangfuerHeckschalter &&
          (GesamtsystemAltV2_DWork.temporalCounter_i1_p >= 200UL)) {
        /* Transition: '<S18>:1416' */
        GesamtsystemAltV2_DWork.is_c9_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Warten;
        GesamtsystemAltV2_DWork.temporalCounter_i1_p = 0UL;

        /* Entry 'Warten': '<S18>:1412' */
        rtb_RoundingFunction1 = 0.0;
      }
      break;

     default:
      rtb_RoundingFunction1 = 1.0;

      /* During 'Weiter2': '<S18>:1414' */
      if ((GesamtsystemAltV2_DWork.Delay_DSTATE == 1.0) ||
          (GesamtsystemAltV2_B.SignaleingangfuerHeckschalter &&
           (GesamtsystemAltV2_DWork.temporalCounter_i1_p >= 200UL))) {
        /* Transition: '<S18>:1420' */
        /* Transition: '<S18>:1422' */
        GesamtsystemAltV2_DWork.is_c9_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Ende;

        /* Entry 'Ende': '<S18>:1419' */
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
  if (GesamtsystemAltV2_DWork.is_active_c10_GesamtsystemAltV2 == 0U) {
    /* Entry: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Shutdown-Eingriff */
    GesamtsystemAltV2_DWork.is_active_c10_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Shutdown-Eingriff */
    /* Transition: '<S9>:1016' */
    GesamtsystemAltV2_DWork.is_c10_GesamtsystemAltV2 =
      GesamtsystemAltV2_IN_Start_Init;

    /* Entry 'Start_Init': '<S9>:1034' */
    GesamtsystemAltV2_DWork.Counter_i = 0.0;
    GesamtsystemAltV2_B.Shutdown = 0.0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c10_GesamtsystemAltV2) {
     case GesamtsystemAltV_IN_Hochzaehlen:
      /* During 'Hochzaehlen': '<S9>:1040' */
      if (GesamtsystemAltV2_DWork.Counter_i == 2.0) {
        /* Transition: '<S9>:1044' */
        GesamtsystemAltV2_DWork.is_c10_GesamtsystemAltV2 =
          Gesamts_IN_Shutdown_Ausfuehrung;

        /* Entry 'Shutdown_Ausfuehrung': '<S9>:1039' */
        GesamtsystemAltV2_B.Shutdown = 1.0;
      } else {
        /* Transition: '<S9>:1050' */
        GesamtsystemAltV2_DWork.is_c10_GesamtsystemAltV2 =
          Gesamtsyste_IN_Warten_loslassen;
      }
      break;

     case Gesamts_IN_Shutdown_Ausfuehrung:
      GesamtsystemAltV2_B.Shutdown = 1.0;

      /* During 'Shutdown_Ausfuehrung': '<S9>:1039' */
      break;

     case GesamtsystemAltV2_IN_Start_Init:
      GesamtsystemAltV2_B.Shutdown = 0.0;

      /* During 'Start_Init': '<S9>:1034' */
      /* Transition: '<S9>:1054' */
      if (rtb_RoundingFunction1 == 1.0) {
        /* Transition: '<S9>:1042' */
        GesamtsystemAltV2_DWork.is_c10_GesamtsystemAltV2 =
          Gesamtsystem_IN_Warten_druecken;
      }
      break;

     case Gesamtsystem_IN_Warten_druecken:
      /* During 'Warten_druecken': '<S9>:1041' */
      if (rtb_RoundingFunction1 == 0.0) {
        /* Transition: '<S9>:1043' */
        GesamtsystemAltV2_DWork.is_c10_GesamtsystemAltV2 =
          GesamtsystemAltV_IN_Hochzaehlen;

        /* Entry 'Hochzaehlen': '<S9>:1040' */
        GesamtsystemAltV2_DWork.Counter_i++;
      }
      break;

     default:
      /* During 'Warten_loslassen': '<S9>:1049' */
      /* Transition: '<S9>:1053' */
      if (rtb_RoundingFunction1 == 1.0) {
        /* Transition: '<S9>:1042' */
        GesamtsystemAltV2_DWork.is_c10_GesamtsystemAltV2 =
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
  rtb_RoundingFunction = GesamtsystemAltV2_P.Inkrement_Value +
    GesamtsystemAltV2_DWork.Delay_DSTATE_b;

  /* Gain: '<S10>/Zeit in sec' */
  rtb_Zeitinsec = GesamtsystemAltV2_P.Zeitinsec_Gain * rtb_RoundingFunction;

  /* Chart: '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Heckschalter zum ersten Mal gedrückt wird' */
  /* Gateway: Add-Ons-Ansteuerung
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Endsignal-System
     [Einstellungen moeglich]/Zeitverzoegerungsblock
     Die eigentliche Zeitmessung startet,
     wenn der Heckschalter zum ersten Mal
     gedrückt wird */
  /* During: Add-Ons-Ansteuerung
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Endsignal-System
     [Einstellungen moeglich]/Zeitverzoegerungsblock
     Die eigentliche Zeitmessung startet,
     wenn der Heckschalter zum ersten Mal
     gedrückt wird */
  if (GesamtsystemAltV2_DWork.is_active_c15_GesamtsystemAltV2 == 0U) {
    /* Entry: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Zeitverzoegerungsblock
       Die eigentliche Zeitmessung startet,
       wenn der Heckschalter zum ersten Mal
       gedrückt wird */
    GesamtsystemAltV2_DWork.is_active_c15_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Zeitverzoegerungsblock
       Die eigentliche Zeitmessung startet,
       wenn der Heckschalter zum ersten Mal
       gedrückt wird */
    /* Transition: '<S11>:1016' */
    GesamtsystemAltV2_DWork.is_c15_GesamtsystemAltV2 =
      GesamtsystemAltV_IN_Init_Warten;

    /* Entry 'Init_Warten': '<S11>:1034' */
    GesamtsystemAltV2_B.Timer = 0.0;
  } else if ((GesamtsystemAltV2_DWork.is_c15_GesamtsystemAltV2 == 1U) &&
             (rtb_RoundingFunction1 == 1.0)) {
    /* During 'Init_Warten': '<S11>:1034' */
    /* Transition: '<S11>:1038' */
    GesamtsystemAltV2_DWork.is_c15_GesamtsystemAltV2 =
      Gesam_IN_Zeitausgabe_mit_Offset;

    /* Entry 'Zeitausgabe_mit_Offset': '<S11>:1039' */
    GesamtsystemAltV2_B.Timer = rtb_Zeitinsec - rtb_Zeitinsec;
    GesamtsystemAltV2_B.Timer = ceil(GesamtsystemAltV2_B.Timer);
  } else {
    /* During 'Zeitausgabe_mit_Offset': '<S11>:1039' */
  }

  /* End of Chart: '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Heckschalter zum ersten Mal gedrückt wird' */

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
  if (GesamtsystemAltV2_DWork.is_active_c3_GesamtsystemAltV2 == 0U) {
    /* Entry: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Beendigung-Ansteuerung */
    GesamtsystemAltV2_DWork.is_active_c3_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Endsignal-System
       [Einstellungen moeglich]/Beendigung-Ansteuerung */
    /* Transition: '<S7>:1016' */
    GesamtsystemAltV2_DWork.is_c3_GesamtsystemAltV2 =
      GesamtsystemAlt_IN_Start_Warten;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c3_GesamtsystemAltV2) {
     case GesamtsystemAltV2_IN_Anschalten:
      GesamtsystemAltV2_B.Endsignal = 1.0;

      /* During 'Anschalten': '<S7>:1017' */
      break;

     case GesamtsystemAltV_IN_Aus_Zustand:
      GesamtsystemAltV2_B.Endsignal = 0.0;

      /* During 'Aus_Zustand': '<S7>:1019' */
      if ((GesamtsystemAltV2_B.Shutdown != 0.0) || (GesamtsystemAltV2_B.Timer >=
           GesamtsystemAltV2_P.DauerbiszumShutdowninsec_const) ||
          (GesamtsystemAltV2_B.Gang == 2.0)) {
        /* Transition: '<S7>:1022' */
        /* Transition: '<S7>:1020' */
        GesamtsystemAltV2_DWork.is_c3_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Anschalten;

        /* Entry 'Anschalten': '<S7>:1017' */
        GesamtsystemAltV2_B.Endsignal = 1.0;
      }
      break;

     default:
      /* During 'Start_Warten': '<S7>:1015' */
      /* Transition: '<S7>:1033' */
      GesamtsystemAltV2_DWork.is_c3_GesamtsystemAltV2 =
        GesamtsystemAltV_IN_Aus_Zustand;

      /* Entry 'Aus_Zustand': '<S7>:1019' */
      GesamtsystemAltV2_B.Endsignal = 0.0;
      break;
    }
  }

  /* End of Chart: '<S5>/Beendigung-Ansteuerung' */

  /* S-Function (c280xgpio_do): '<S5>/Signalaussgang fuer Endsignallampe' */
  {
    if (GesamtsystemAltV2_B.Endsignal)
      GpioDataRegs.GPBSET.bit.GPIO58 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO58 = 1;
  }

  /* Sum: '<S19>/x_soll_Offset' incorporates:
   *  Constant: '<S19>/x-Sollkoordinaten-Offset (in mm)'
   */
  rtb_x_soll_Offset = GesamtsystemAltV2_P.xSollkoordinatenOffsetinmm_Valu +
    GesamtsystemAltV2_B.x_soll;

  /* Sum: '<S19>/y_soll_Offset' incorporates:
   *  Constant: '<S19>/y-Sollkoordinaten-Offset (in mm)'
   */
  rtb_Zeitinsec = GesamtsystemAltV2_P.ySollkoordinatenOffsetinmm_Valu +
    GesamtsystemAltV2_B.y_soll;

  /* Chart: '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  if (GesamtsystemAltV2_DWork.temporalCounter_i1_c < 15U) {
    GesamtsystemAltV2_DWork.temporalCounter_i1_c = ((int16_T)
      GesamtsystemAltV2_DWork.temporalCounter_i1_c + 1) & 255U;
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
  if (GesamtsystemAltV2_DWork.is_active_c6_GesamtsystemAltV2 == 0U) {
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
    GesamtsystemAltV2_DWork.is_active_c6_GesamtsystemAltV2 = 1U;

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
    GesamtsystemAltV2_DWork.is_c6_GesamtsystemAltV2 =
      Gesamtsystem_IN_Init_und_Warten;

    /* Entry 'Init_und_Warten': '<S12>:1009' */
    rtb_ZM_pwm_out = 0.0;
    GesamtsystemAltV2_B.ZM_r_l_out = 1.0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c6_GesamtsystemAltV2) {
     case GesamtsystemAltV_IN_Ausfuehrung:
      rtb_ZM_pwm_out = 75.0;

      /* During 'Ausfuehrung': '<S12>:1011' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_c >= 10U) {
        /* Transition: '<S12>:1013' */
        GesamtsystemAltV2_DWork.is_c6_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Beendet;

        /* Entry 'Beendet': '<S12>:1014' */
        rtb_ZM_pwm_out = 0.0;
      }
      break;

     case GesamtsystemAltV2_IN_Beendet:
      rtb_ZM_pwm_out = 0.0;

      /* During 'Beendet': '<S12>:1014' */
      break;

     default:
      rtb_ZM_pwm_out = 0.0;
      GesamtsystemAltV2_B.ZM_r_l_out = 1.0;

      /* During 'Init_und_Warten': '<S12>:1009' */
      if ((rtb_x_soll_Offset == 1200.0) && (rtb_Zeitinsec == -50.0)) {
        /* Transition: '<S12>:1012' */
        GesamtsystemAltV2_DWork.is_c6_GesamtsystemAltV2 =
          GesamtsystemAltV_IN_Ausfuehrung;
        GesamtsystemAltV2_DWork.temporalCounter_i1_c = 0U;

        /* Entry 'Ausfuehrung': '<S12>:1011' */
        rtb_ZM_pwm_out = 75.0;
      }
      break;
    }
  }

  /* End of Chart: '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */

  /* S-Function (c280xgpio_do): '<S6>/Drehrichtungsvorgabe für Zylindermotor' */
  {
    if (GesamtsystemAltV2_B.ZM_r_l_out)
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
  /* Saturate: '<S16>/Binaerer Wertebereich' */
  if (GesamtsystemAltV2_B.Gang >
      GesamtsystemAltV2_P.BinaererWertebereich_UpperSat) {
    GesamtsystemAltV2_B.BinaererWertebereich =
      GesamtsystemAltV2_P.BinaererWertebereich_UpperSat;
  } else if (GesamtsystemAltV2_B.Gang <
             GesamtsystemAltV2_P.BinaererWertebereich_LowerSat) {
    GesamtsystemAltV2_B.BinaererWertebereich =
      GesamtsystemAltV2_P.BinaererWertebereich_LowerSat;
  } else {
    GesamtsystemAltV2_B.BinaererWertebereich = GesamtsystemAltV2_B.Gang;
  }

  /* End of Saturate: '<S16>/Binaerer Wertebereich' */

  /* Sum: '<S22>/Soll-Ist-Abgleich_x' */
  rtb_x_soll_Offset -= GesamtsystemAltV2_B.x_Wagen;

  /* Sum: '<S22>/Soll-Ist-Abgleich_y' */
  rtb_Zeitinsec -= GesamtsystemAltV2_B.y_Wagen;

  /* Chart: '<S23>/Quadrantenteiler' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
  if (GesamtsystemAltV2_DWork.is_active_c11_GesamtsystemAltV2 == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
    GesamtsystemAltV2_DWork.is_active_c11_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
    /* Transition: '<S27>:28' */
    GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
      Gesamtsystem_IN_Start_Warten_it;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2) {
     case GesamtsystemAltV2_IN_Quadrant_a:
      GesamtsystemAltV2_B.Quadrant = 0.0;

      /* During 'Quadrant_a': '<S27>:8' */
      /* Transition: '<S27>:36' */
      /* Transition: '<S27>:40' */
      if ((rtb_x_soll_Offset >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S27>:29' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S27>:8' */
        GesamtsystemAltV2_B.Quadrant = 0.0;
      } else if ((rtb_x_soll_Offset <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S27>:30' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S27>:9' */
        GesamtsystemAltV2_B.Quadrant = 1.0;
      } else if ((rtb_x_soll_Offset < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S27>:31' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S27>:11' */
        GesamtsystemAltV2_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S27>:32' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S27>:12' */
        GesamtsystemAltV2_B.Quadrant = 3.0;
      }
      break;

     case GesamtsystemAltV2_IN_Quadrant_b:
      GesamtsystemAltV2_B.Quadrant = 1.0;

      /* During 'Quadrant_b': '<S27>:9' */
      /* Transition: '<S27>:37' */
      /* Transition: '<S27>:40' */
      if ((rtb_x_soll_Offset >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S27>:29' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S27>:8' */
        GesamtsystemAltV2_B.Quadrant = 0.0;
      } else if ((rtb_x_soll_Offset <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S27>:30' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S27>:9' */
        GesamtsystemAltV2_B.Quadrant = 1.0;
      } else if ((rtb_x_soll_Offset < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S27>:31' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S27>:11' */
        GesamtsystemAltV2_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S27>:32' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S27>:12' */
        GesamtsystemAltV2_B.Quadrant = 3.0;
      }
      break;

     case GesamtsystemAltV2_IN_Quadrant_c:
      GesamtsystemAltV2_B.Quadrant = 2.0;

      /* During 'Quadrant_c': '<S27>:11' */
      /* Transition: '<S27>:38' */
      /* Transition: '<S27>:40' */
      if ((rtb_x_soll_Offset >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S27>:29' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S27>:8' */
        GesamtsystemAltV2_B.Quadrant = 0.0;
      } else if ((rtb_x_soll_Offset <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S27>:30' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S27>:9' */
        GesamtsystemAltV2_B.Quadrant = 1.0;
      } else if ((rtb_x_soll_Offset < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S27>:31' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S27>:11' */
        GesamtsystemAltV2_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S27>:32' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S27>:12' */
        GesamtsystemAltV2_B.Quadrant = 3.0;
      }
      break;

     case GesamtsystemAltV2_IN_Quadrant_d:
      GesamtsystemAltV2_B.Quadrant = 3.0;

      /* During 'Quadrant_d': '<S27>:12' */
      /* Transition: '<S27>:39' */
      /* Transition: '<S27>:40' */
      if ((rtb_x_soll_Offset >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S27>:29' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S27>:8' */
        GesamtsystemAltV2_B.Quadrant = 0.0;
      } else if ((rtb_x_soll_Offset <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S27>:30' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S27>:9' */
        GesamtsystemAltV2_B.Quadrant = 1.0;
      } else if ((rtb_x_soll_Offset < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S27>:31' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S27>:11' */
        GesamtsystemAltV2_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S27>:32' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S27>:12' */
        GesamtsystemAltV2_B.Quadrant = 3.0;
      }
      break;

     default:
      /* During 'Start_Warten': '<S27>:41' */
      /* Transition: '<S27>:42' */
      if ((rtb_x_soll_Offset >= 0.0) && (rtb_Zeitinsec >= 0.0)) {
        /* Transition: '<S27>:29' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S27>:8' */
        GesamtsystemAltV2_B.Quadrant = 0.0;
      } else if ((rtb_x_soll_Offset <= 0.0) && (rtb_Zeitinsec > 0.0)) {
        /* Transition: '<S27>:30' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S27>:9' */
        GesamtsystemAltV2_B.Quadrant = 1.0;
      } else if ((rtb_x_soll_Offset < 0.0) && (rtb_Zeitinsec <= 0.0)) {
        /* Transition: '<S27>:31' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S27>:11' */
        GesamtsystemAltV2_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S27>:32' */
        GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S27>:12' */
        GesamtsystemAltV2_B.Quadrant = 3.0;
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
  if (GesamtsystemAltV2_DWork.is_active_c12_GesamtsystemAltV2 == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
    GesamtsystemAltV2_DWork.is_active_c12_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
    /* Transition: '<S28>:81' */
    GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
      Gesamtsyste_IN_Start_Warten_itx;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2) {
     case G_IN_Ausrichtung_ohne_Aenderung:
      /* During 'Ausrichtung_ohne_Aenderung': '<S28>:52' */
      /* Transition: '<S28>:66' */
      /* Transition: '<S28>:70' */
      if ((rtb_x_soll_Offset == 0.0) && (rtb_Zeitinsec == 0.0)) {
        /* Transition: '<S28>:60' */
        GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
          G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S28>:52' */
        GesamtsystemAltV2_B.alpha_neu = GesamtsystemAltV2_B.alpha_Wagen;
      } else if (((rtb_x_soll_Offset > 0.0) && (rtb_Zeitinsec >= 0.0)) ||
                 ((rtb_x_soll_Offset < 0.0) && (rtb_Zeitinsec <= 0.0))) {
        /* Transition: '<S28>:76' */
        /* Transition: '<S28>:77' */
        GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S28>:24' */
        GesamtsystemAltV2_B.alpha_neu = atan(fabs(rtb_Zeitinsec) / fabs
          (rtb_x_soll_Offset)) * 360.0 / 6.2831853071795862;
        GesamtsystemAltV2_B.alpha_neu = rt_roundd_snf
          (GesamtsystemAltV2_B.alpha_neu);
      } else {
        /* Transition: '<S28>:78' */
        GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
          IN_Trigonometrische_Auswertun_i;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S28>:71' */
        GesamtsystemAltV2_B.alpha_neu = atan(fabs(rtb_x_soll_Offset) / fabs
          (rtb_Zeitinsec)) * 360.0 / 6.2831853071795862;
        GesamtsystemAltV2_B.alpha_neu = rt_roundd_snf
          (GesamtsystemAltV2_B.alpha_neu);
      }
      break;

     case Gesamtsyste_IN_Start_Warten_itx:
      /* During 'Start_Warten': '<S28>:82' */
      /* Transition: '<S28>:83' */
      if ((rtb_x_soll_Offset == 0.0) && (rtb_Zeitinsec == 0.0)) {
        /* Transition: '<S28>:60' */
        GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
          G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S28>:52' */
        GesamtsystemAltV2_B.alpha_neu = GesamtsystemAltV2_B.alpha_Wagen;
      } else if (((rtb_x_soll_Offset > 0.0) && (rtb_Zeitinsec >= 0.0)) ||
                 ((rtb_x_soll_Offset < 0.0) && (rtb_Zeitinsec <= 0.0))) {
        /* Transition: '<S28>:76' */
        /* Transition: '<S28>:77' */
        GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S28>:24' */
        GesamtsystemAltV2_B.alpha_neu = atan(fabs(rtb_Zeitinsec) / fabs
          (rtb_x_soll_Offset)) * 360.0 / 6.2831853071795862;
        GesamtsystemAltV2_B.alpha_neu = rt_roundd_snf
          (GesamtsystemAltV2_B.alpha_neu);
      } else {
        /* Transition: '<S28>:78' */
        GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
          IN_Trigonometrische_Auswertun_i;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S28>:71' */
        GesamtsystemAltV2_B.alpha_neu = atan(fabs(rtb_x_soll_Offset) / fabs
          (rtb_Zeitinsec)) * 360.0 / 6.2831853071795862;
        GesamtsystemAltV2_B.alpha_neu = rt_roundd_snf
          (GesamtsystemAltV2_B.alpha_neu);
      }
      break;

     case IN_Trigonometrische_Auswertung_:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S28>:24' */
      /* Transition: '<S28>:68' */
      /* Transition: '<S28>:70' */
      if ((rtb_x_soll_Offset == 0.0) && (rtb_Zeitinsec == 0.0)) {
        /* Transition: '<S28>:60' */
        GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
          G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S28>:52' */
        GesamtsystemAltV2_B.alpha_neu = GesamtsystemAltV2_B.alpha_Wagen;
      } else if (((rtb_x_soll_Offset > 0.0) && (rtb_Zeitinsec >= 0.0)) ||
                 ((rtb_x_soll_Offset < 0.0) && (rtb_Zeitinsec <= 0.0))) {
        /* Transition: '<S28>:76' */
        /* Transition: '<S28>:77' */
        GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S28>:24' */
        GesamtsystemAltV2_B.alpha_neu = atan(fabs(rtb_Zeitinsec) / fabs
          (rtb_x_soll_Offset)) * 360.0 / 6.2831853071795862;
        GesamtsystemAltV2_B.alpha_neu = rt_roundd_snf
          (GesamtsystemAltV2_B.alpha_neu);
      } else {
        /* Transition: '<S28>:78' */
        GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
          IN_Trigonometrische_Auswertun_i;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S28>:71' */
        GesamtsystemAltV2_B.alpha_neu = atan(fabs(rtb_x_soll_Offset) / fabs
          (rtb_Zeitinsec)) * 360.0 / 6.2831853071795862;
        GesamtsystemAltV2_B.alpha_neu = rt_roundd_snf
          (GesamtsystemAltV2_B.alpha_neu);
      }
      break;

     default:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S28>:71' */
      /* Transition: '<S28>:73' */
      /* Transition: '<S28>:70' */
      if ((rtb_x_soll_Offset == 0.0) && (rtb_Zeitinsec == 0.0)) {
        /* Transition: '<S28>:60' */
        GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
          G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S28>:52' */
        GesamtsystemAltV2_B.alpha_neu = GesamtsystemAltV2_B.alpha_Wagen;
      } else if (((rtb_x_soll_Offset > 0.0) && (rtb_Zeitinsec >= 0.0)) ||
                 ((rtb_x_soll_Offset < 0.0) && (rtb_Zeitinsec <= 0.0))) {
        /* Transition: '<S28>:76' */
        /* Transition: '<S28>:77' */
        GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
          IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S28>:24' */
        GesamtsystemAltV2_B.alpha_neu = atan(fabs(rtb_Zeitinsec) / fabs
          (rtb_x_soll_Offset)) * 360.0 / 6.2831853071795862;
        GesamtsystemAltV2_B.alpha_neu = rt_roundd_snf
          (GesamtsystemAltV2_B.alpha_neu);
      } else {
        /* Transition: '<S28>:78' */
        GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
          IN_Trigonometrische_Auswertun_i;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S28>:71' */
        GesamtsystemAltV2_B.alpha_neu = atan(fabs(rtb_x_soll_Offset) / fabs
          (rtb_Zeitinsec)) * 360.0 / 6.2831853071795862;
        GesamtsystemAltV2_B.alpha_neu = rt_roundd_snf
          (GesamtsystemAltV2_B.alpha_neu);
      }
      break;
    }
  }

  /* End of Chart: '<S23>/Winkelausgabe fuer Ausrichtung' */

  /* Sum: '<S23>/Winkeldifferenz' incorporates:
   *  Gain: '<S23>/Quadranten- verschiebung'
   *  Sum: '<S23>/Winkelverschiebung'
   */
  GesamtsystemAltV2_B.Winkeldifferenz =
    (GesamtsystemAltV2_P.Quadrantenverschiebung_Gain *
     GesamtsystemAltV2_B.Quadrant + GesamtsystemAltV2_B.alpha_neu) -
    GesamtsystemAltV2_B.alpha_Wagen;

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
  if (GesamtsystemAltV2_DWork.is_active_c8_GesamtsystemAltV2 == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Drehweg-Optimierung
       mit Gang-Ausrichtung
       [Init: Stillstandintervall = ±15°] */
    GesamtsystemAltV2_DWork.is_active_c8_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Drehweg-Optimierung
       mit Gang-Ausrichtung
       [Init: Stillstandintervall = ±15°] */
    /* Transition: '<S20>:38' */
    GesamtsystemAltV2_DWork.is_c8_GesamtsystemAltV2 =
      Gesamtsys_IN_Einstellung_Init_i;

    /* Entry 'Einstellung_Init': '<S20>:44' */
    GesamtsystemAltV2_DWork.Stillstandintervall = 15.0;
    GesamtsystemAltV2_B.pwm_mindern[0] = 0.0;
    GesamtsystemAltV2_B.pwm_mindern[1] = 0.0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c8_GesamtsystemAltV2) {
     case IN_Drehstillstand_mit_Ausrichtu:
      /* During 'Drehstillstand_mit_Ausrichtungsregelung': '<S20>:26' */
      /* Transition: '<S20>:96' */
      /* Transition: '<S20>:98' */
      /* Transition: '<S20>:65' */
      GesamtsystemAltV2_DWork.alpha_diff_intern = 180.0 *
        GesamtsystemAltV2_B.BinaererWertebereich +
        GesamtsystemAltV2_B.Winkeldifferenz;
      if (fabs(GesamtsystemAltV2_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S20>:9' */
        if (GesamtsystemAltV2_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S20>:15' */
          GesamtsystemAltV2_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S20>:18' */
          GesamtsystemAltV2_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S20>:69' */
      }

      if (fabs(GesamtsystemAltV2_DWork.alpha_diff_intern) <=
          GesamtsystemAltV2_DWork.Stillstandintervall) {
        /* Transition: '<S20>:27' */
        GesamtsystemAltV2_DWork.is_c8_GesamtsystemAltV2 =
          IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S20>:94' */
        GesamtsystemAltV2_DWork.is_c8_GesamtsystemAltV2 =
          IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S20>:11' */
        GesamtsystemAltV2_B.alpha_diff_opt =
          GesamtsystemAltV2_DWork.alpha_diff_intern;
      }
      break;

     case Gesamtsys_IN_Einstellung_Init_i:
      /* During 'Einstellung_Init': '<S20>:44' */
      /* Transition: '<S20>:46' */
      /* Transition: '<S20>:65' */
      GesamtsystemAltV2_DWork.alpha_diff_intern = 180.0 *
        GesamtsystemAltV2_B.BinaererWertebereich +
        GesamtsystemAltV2_B.Winkeldifferenz;
      if (fabs(GesamtsystemAltV2_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S20>:9' */
        if (GesamtsystemAltV2_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S20>:15' */
          GesamtsystemAltV2_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S20>:18' */
          GesamtsystemAltV2_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S20>:69' */
      }

      if (fabs(GesamtsystemAltV2_DWork.alpha_diff_intern) <=
          GesamtsystemAltV2_DWork.Stillstandintervall) {
        /* Transition: '<S20>:27' */
        GesamtsystemAltV2_DWork.is_c8_GesamtsystemAltV2 =
          IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S20>:94' */
        GesamtsystemAltV2_DWork.is_c8_GesamtsystemAltV2 =
          IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S20>:11' */
        GesamtsystemAltV2_B.alpha_diff_opt =
          GesamtsystemAltV2_DWork.alpha_diff_intern;
      }
      break;

     default:
      /* During 'Weiterleitung_bei_Drehzustand': '<S20>:11' */
      /* Transition: '<S20>:97' */
      /* Transition: '<S20>:98' */
      /* Transition: '<S20>:65' */
      GesamtsystemAltV2_DWork.alpha_diff_intern = 180.0 *
        GesamtsystemAltV2_B.BinaererWertebereich +
        GesamtsystemAltV2_B.Winkeldifferenz;
      if (fabs(GesamtsystemAltV2_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S20>:9' */
        if (GesamtsystemAltV2_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S20>:15' */
          GesamtsystemAltV2_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S20>:18' */
          GesamtsystemAltV2_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S20>:69' */
      }

      if (fabs(GesamtsystemAltV2_DWork.alpha_diff_intern) <=
          GesamtsystemAltV2_DWork.Stillstandintervall) {
        /* Transition: '<S20>:27' */
        GesamtsystemAltV2_DWork.is_c8_GesamtsystemAltV2 =
          IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S20>:94' */
        GesamtsystemAltV2_DWork.is_c8_GesamtsystemAltV2 =
          IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S20>:11' */
        GesamtsystemAltV2_B.alpha_diff_opt =
          GesamtsystemAltV2_DWork.alpha_diff_intern;
      }
      break;
    }
  }

  /* End of Chart: '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */

  /* Abs: '<S22>/Abs x_diff' */
  rtb_x_soll_Offset = fabs(rtb_x_soll_Offset);

  /* MATLAB Function: '<S22>/Betrag pwm_x' incorporates:
   *  Abs: '<S22>/Abs x_diff'
   */
  /* MATLAB Function 'Nexonar-System [Einstellungen moeglich]/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x': '<S24>:1' */
  if ((GesamtsystemAltV2_B.Zielradius < rtb_x_soll_Offset) && (rtb_x_soll_Offset
       < 60.0 + GesamtsystemAltV2_B.Zielradius)) {
    /* '<S24>:1:3' */
    /* '<S24>:1:4' */
    rtb_x_soll_Offset = 60.0;
  } else if (rtb_x_soll_Offset <= GesamtsystemAltV2_B.Zielradius) {
    /* '<S24>:1:5' */
    /* '<S24>:1:6' */
    rtb_x_soll_Offset = 0.0;
  } else if (rtb_x_soll_Offset >= 100.0 + GesamtsystemAltV2_B.Zielradius) {
    /* '<S24>:1:7' */
    /* '<S24>:1:8' */
    rtb_x_soll_Offset = 100.0;
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
  if ((GesamtsystemAltV2_B.Zielradius < rtb_Zeitinsec) && (rtb_Zeitinsec < 60.0
       + GesamtsystemAltV2_B.Zielradius)) {
    /* '<S25>:1:3' */
    /* '<S25>:1:4' */
    rtb_Zeitinsec = 60.0;
  } else if (rtb_Zeitinsec <= GesamtsystemAltV2_B.Zielradius) {
    /* '<S25>:1:5' */
    /* '<S25>:1:6' */
    rtb_Zeitinsec = 0.0;
  } else if (rtb_Zeitinsec >= 100.0 + GesamtsystemAltV2_B.Zielradius) {
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
  rtb_Zeitinsec = rt_roundd_snf(sqrt(rtb_x_soll_Offset * rtb_x_soll_Offset +
    rtb_Zeitinsec * rtb_Zeitinsec));

  /* Saturate: '<S22>/PWM-Wertebereich' */
  if (rtb_Zeitinsec > GesamtsystemAltV2_P.PWMWertebereich_UpperSat) {
    GesamtsystemAltV2_B.PWMWertebereich =
      GesamtsystemAltV2_P.PWMWertebereich_UpperSat;
  } else if (rtb_Zeitinsec < GesamtsystemAltV2_P.PWMWertebereich_LowerSat) {
    GesamtsystemAltV2_B.PWMWertebereich =
      GesamtsystemAltV2_P.PWMWertebereich_LowerSat;
  } else {
    GesamtsystemAltV2_B.PWMWertebereich = rtb_Zeitinsec;
  }

  /* End of Saturate: '<S22>/PWM-Wertebereich' */

  /* Chart: '<S16>/Fahrsystem' */
  /* Gateway: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Fahrsystem */
  /* During: Nexonar-System
     [Einstellungen moeglich]/Navigationssystem
     [Einstellungen moeglich]/Fahrsystem */
  if (GesamtsystemAltV2_DWork.is_active_c7_GesamtsystemAltV2 == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Fahrsystem */
    GesamtsystemAltV2_DWork.is_active_c7_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Navigationssystem
       [Einstellungen moeglich]/Fahrsystem */
    /* Transition: '<S21>:91' */
    GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
      GesamtsystemA_IN_Start_Warten_i;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2) {
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
      if ((fabs(GesamtsystemAltV2_B.alpha_diff_opt) > 0.0) &&
          (GesamtsystemAltV2_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S21>:58' */
        if (fabs(GesamtsystemAltV2_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S21>:21' */
          if (GesamtsystemAltV2_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S21>:45' */
            GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S21>:8' */
            GesamtsystemAltV2_B.pwm_out_l = 100.0;
            GesamtsystemAltV2_B.pwm_out_r = 100.0;
            GesamtsystemAltV2_B.r_l_out_l = 0.0;
            GesamtsystemAltV2_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S21>:57' */
            GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S21>:9' */
            GesamtsystemAltV2_B.pwm_out_l = 100.0;
            GesamtsystemAltV2_B.pwm_out_r = 100.0;
            GesamtsystemAltV2_B.r_l_out_l = 1.0;
            GesamtsystemAltV2_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S21>:53' */
          if (GesamtsystemAltV2_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S21>:54' */
            GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S21>:43' */
            GesamtsystemAltV2_B.pwm_out_l = 59.0 + fabs
              (GesamtsystemAltV2_B.alpha_diff_opt);
            GesamtsystemAltV2_B.pwm_out_r = 59.0 + fabs
              (GesamtsystemAltV2_B.alpha_diff_opt);
            GesamtsystemAltV2_B.r_l_out_l = 0.0;
            GesamtsystemAltV2_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S21>:55' */
            GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S21>:51' */
            rtb_Zeitinsec = 59.0 + fabs(GesamtsystemAltV2_B.alpha_diff_opt);
            GesamtsystemAltV2_B.pwm_out_l = rtb_Zeitinsec;
            GesamtsystemAltV2_B.pwm_out_r = rtb_Zeitinsec;
            GesamtsystemAltV2_B.r_l_out_l = 1.0;
            GesamtsystemAltV2_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S21>:82' */
        if (GesamtsystemAltV2_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S21>:85' */
          rtb_x_soll_Offset = 1.0 - GesamtsystemAltV2_B.BinaererWertebereich;
          rtb_Zeitinsec = GesamtsystemAltV2_B.BinaererWertebereich;
        } else if (GesamtsystemAltV2_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S21>:86' */
          rtb_x_soll_Offset = GesamtsystemAltV2_B.BinaererWertebereich;
          rtb_Zeitinsec = 1.0 - GesamtsystemAltV2_B.BinaererWertebereich;
        } else {
          /* Transition: '<S21>:87' */
          rtb_x_soll_Offset = 0.0;
          rtb_Zeitinsec = 0.0;
        }

        GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
          IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S21>:94' */
        a = GesamtsystemAltV2_B.PWMWertebereich / 100.0;
        GesamtsystemAltV2_B.pwm_out_l = GesamtsystemAltV2_B.PWMWertebereich -
          rt_roundd_snf(a * a * GesamtsystemAltV2_B.pwm_mindern[0]) *
          rtb_x_soll_Offset;
        rtb_x_soll_Offset = GesamtsystemAltV2_B.PWMWertebereich / 100.0;
        GesamtsystemAltV2_B.pwm_out_r = GesamtsystemAltV2_B.PWMWertebereich -
          rt_roundd_snf(rtb_x_soll_Offset * rtb_x_soll_Offset *
                        GesamtsystemAltV2_B.pwm_mindern[0]) * rtb_Zeitinsec;
        GesamtsystemAltV2_B.r_l_out_l = 1.0 -
          GesamtsystemAltV2_B.BinaererWertebereich;
        GesamtsystemAltV2_B.r_l_out_r = 1.0 -
          GesamtsystemAltV2_B.BinaererWertebereich;
      }
      break;

     case Gesamtsyst_IN_Drehen_rechts_max:
      /* During 'Drehen_rechts_max': '<S21>:9' */
      /* Transition: '<S21>:61' */
      /* Transition: '<S21>:75' */
      if ((fabs(GesamtsystemAltV2_B.alpha_diff_opt) > 0.0) &&
          (GesamtsystemAltV2_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S21>:58' */
        if (fabs(GesamtsystemAltV2_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S21>:21' */
          if (GesamtsystemAltV2_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S21>:45' */
            GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S21>:8' */
            GesamtsystemAltV2_B.pwm_out_l = 100.0;
            GesamtsystemAltV2_B.pwm_out_r = 100.0;
            GesamtsystemAltV2_B.r_l_out_l = 0.0;
            GesamtsystemAltV2_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S21>:57' */
            GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S21>:9' */
            GesamtsystemAltV2_B.pwm_out_l = 100.0;
            GesamtsystemAltV2_B.pwm_out_r = 100.0;
            GesamtsystemAltV2_B.r_l_out_l = 1.0;
            GesamtsystemAltV2_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S21>:53' */
          if (GesamtsystemAltV2_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S21>:54' */
            GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S21>:43' */
            GesamtsystemAltV2_B.pwm_out_l = 59.0 + fabs
              (GesamtsystemAltV2_B.alpha_diff_opt);
            GesamtsystemAltV2_B.pwm_out_r = 59.0 + fabs
              (GesamtsystemAltV2_B.alpha_diff_opt);
            GesamtsystemAltV2_B.r_l_out_l = 0.0;
            GesamtsystemAltV2_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S21>:55' */
            GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S21>:51' */
            GesamtsystemAltV2_B.pwm_out_l = 59.0 + fabs
              (GesamtsystemAltV2_B.alpha_diff_opt);
            GesamtsystemAltV2_B.pwm_out_r = 59.0 + fabs
              (GesamtsystemAltV2_B.alpha_diff_opt);
            GesamtsystemAltV2_B.r_l_out_l = 1.0;
            GesamtsystemAltV2_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S21>:82' */
        if (GesamtsystemAltV2_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S21>:85' */
          rtb_x_soll_Offset = 1.0 - GesamtsystemAltV2_B.BinaererWertebereich;
          rtb_Zeitinsec = GesamtsystemAltV2_B.BinaererWertebereich;
        } else if (GesamtsystemAltV2_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S21>:86' */
          rtb_x_soll_Offset = GesamtsystemAltV2_B.BinaererWertebereich;
          rtb_Zeitinsec = 1.0 - GesamtsystemAltV2_B.BinaererWertebereich;
        } else {
          /* Transition: '<S21>:87' */
          rtb_x_soll_Offset = 0.0;
          rtb_Zeitinsec = 0.0;
        }

        GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
          IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S21>:94' */
        a = GesamtsystemAltV2_B.PWMWertebereich / 100.0;
        GesamtsystemAltV2_B.pwm_out_l = GesamtsystemAltV2_B.PWMWertebereich -
          rt_roundd_snf(a * a * GesamtsystemAltV2_B.pwm_mindern[0]) *
          rtb_x_soll_Offset;
        rtb_x_soll_Offset = GesamtsystemAltV2_B.PWMWertebereich / 100.0;
        GesamtsystemAltV2_B.pwm_out_r = GesamtsystemAltV2_B.PWMWertebereich -
          rt_roundd_snf(rtb_x_soll_Offset * rtb_x_soll_Offset *
                        GesamtsystemAltV2_B.pwm_mindern[0]) * rtb_Zeitinsec;
        GesamtsystemAltV2_B.r_l_out_l = 1.0 -
          GesamtsystemAltV2_B.BinaererWertebereich;
        GesamtsystemAltV2_B.r_l_out_r = 1.0 -
          GesamtsystemAltV2_B.BinaererWertebereich;
      }
      break;

     case IN_Fahren_mit_Ausrichtungsregel:
      /* During 'Fahren_mit_Ausrichtungsregelung': '<S21>:94' */
      /* Transition: '<S21>:74' */
      /* Transition: '<S21>:75' */
      if ((fabs(GesamtsystemAltV2_B.alpha_diff_opt) > 0.0) &&
          (GesamtsystemAltV2_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S21>:58' */
        if (fabs(GesamtsystemAltV2_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S21>:21' */
          if (GesamtsystemAltV2_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S21>:45' */
            GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S21>:8' */
            GesamtsystemAltV2_B.pwm_out_l = 100.0;
            GesamtsystemAltV2_B.pwm_out_r = 100.0;
            GesamtsystemAltV2_B.r_l_out_l = 0.0;
            GesamtsystemAltV2_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S21>:57' */
            GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S21>:9' */
            GesamtsystemAltV2_B.pwm_out_l = 100.0;
            GesamtsystemAltV2_B.pwm_out_r = 100.0;
            GesamtsystemAltV2_B.r_l_out_l = 1.0;
            GesamtsystemAltV2_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S21>:53' */
          if (GesamtsystemAltV2_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S21>:54' */
            GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S21>:43' */
            GesamtsystemAltV2_B.pwm_out_l = 59.0 + fabs
              (GesamtsystemAltV2_B.alpha_diff_opt);
            GesamtsystemAltV2_B.pwm_out_r = 59.0 + fabs
              (GesamtsystemAltV2_B.alpha_diff_opt);
            GesamtsystemAltV2_B.r_l_out_l = 0.0;
            GesamtsystemAltV2_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S21>:55' */
            GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S21>:51' */
            GesamtsystemAltV2_B.pwm_out_l = 59.0 + fabs
              (GesamtsystemAltV2_B.alpha_diff_opt);
            GesamtsystemAltV2_B.pwm_out_r = 59.0 + fabs
              (GesamtsystemAltV2_B.alpha_diff_opt);
            GesamtsystemAltV2_B.r_l_out_l = 1.0;
            GesamtsystemAltV2_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S21>:82' */
        if (GesamtsystemAltV2_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S21>:85' */
          rtb_x_soll_Offset = 1.0 - GesamtsystemAltV2_B.BinaererWertebereich;
          rtb_Zeitinsec = GesamtsystemAltV2_B.BinaererWertebereich;
        } else if (GesamtsystemAltV2_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S21>:86' */
          rtb_x_soll_Offset = GesamtsystemAltV2_B.BinaererWertebereich;
          rtb_Zeitinsec = 1.0 - GesamtsystemAltV2_B.BinaererWertebereich;
        } else {
          /* Transition: '<S21>:87' */
          rtb_x_soll_Offset = 0.0;
          rtb_Zeitinsec = 0.0;
        }

        GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
          IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S21>:94' */
        a = GesamtsystemAltV2_B.PWMWertebereich / 100.0;
        GesamtsystemAltV2_B.pwm_out_l = GesamtsystemAltV2_B.PWMWertebereich -
          rt_roundd_snf(a * a * GesamtsystemAltV2_B.pwm_mindern[0]) *
          rtb_x_soll_Offset;
        rtb_x_soll_Offset = GesamtsystemAltV2_B.PWMWertebereich / 100.0;
        GesamtsystemAltV2_B.pwm_out_r = GesamtsystemAltV2_B.PWMWertebereich -
          rt_roundd_snf(rtb_x_soll_Offset * rtb_x_soll_Offset *
                        GesamtsystemAltV2_B.pwm_mindern[0]) * rtb_Zeitinsec;
        GesamtsystemAltV2_B.r_l_out_l = 1.0 -
          GesamtsystemAltV2_B.BinaererWertebereich;
        GesamtsystemAltV2_B.r_l_out_r = 1.0 -
          GesamtsystemAltV2_B.BinaererWertebereich;
      }
      break;

     default:
      GesamtsystemAltV2_Start_Warten();
      break;
    }
  }

  /* End of Chart: '<S16>/Fahrsystem' */
  /* End of Outputs for SubSystem: '<S3>/Navigationssystem [Einstellungen moeglich]' */

  /* Product: '<S15>/Ansteuerung Motor_links' */
  rtb_Product_i = GesamtsystemAltV2_B.pwm_out_l * rtb_RoundingFunction1;

  /* Saturate: '<S15>/Leistungsbereich Motor_links' */
  if (rtb_Product_i > GesamtsystemAltV2_P.LeistungsbereichMotor_links_Upp) {
    rtb_Product_i = GesamtsystemAltV2_P.LeistungsbereichMotor_links_Upp;
  } else {
    if (rtb_Product_i < GesamtsystemAltV2_P.LeistungsbereichMotor_links_Low) {
      rtb_Product_i = GesamtsystemAltV2_P.LeistungsbereichMotor_links_Low;
    }
  }

  /* End of Saturate: '<S15>/Leistungsbereich Motor_links' */

  /* DeadZone: '<S15>/Leistungsoffset Motor_links' */
  if (rtb_Product_i > GesamtsystemAltV2_P.LeistungsoffsetMotor_links_End) {
    rtb_Product_i -= GesamtsystemAltV2_P.LeistungsoffsetMotor_links_End;
  } else if (rtb_Product_i >=
             GesamtsystemAltV2_P.LeistungsoffsetMotor_links_Star) {
    rtb_Product_i = 0.0;
  } else {
    rtb_Product_i -= GesamtsystemAltV2_P.LeistungsoffsetMotor_links_Star;
  }

  /* End of DeadZone: '<S15>/Leistungsoffset Motor_links' */

  /* S-Function (c280xpwm): '<S15>/PWM Vorgabe fuer Motor_links ' */

  /*-- Update CMPB value for ePWM1 --*/
  {
    EPwm1Regs.CMPB = (uint16_T)((uint32_T)EPwm1Regs.TBPRD * rtb_Product_i * 0.01);
  }

  /* Product: '<S15>/Ansteuerung Motor_rechts' */
  rtb_Product_i = rtb_RoundingFunction1 * GesamtsystemAltV2_B.pwm_out_r;

  /* Saturate: '<S15>/Leistungsbereich Motor_rechts' */
  if (rtb_Product_i > GesamtsystemAltV2_P.LeistungsbereichMotor_rechts_Up) {
    rtb_Product_i = GesamtsystemAltV2_P.LeistungsbereichMotor_rechts_Up;
  } else {
    if (rtb_Product_i < GesamtsystemAltV2_P.LeistungsbereichMotor_rechts_Lo) {
      rtb_Product_i = GesamtsystemAltV2_P.LeistungsbereichMotor_rechts_Lo;
    }
  }

  /* End of Saturate: '<S15>/Leistungsbereich Motor_rechts' */

  /* DeadZone: '<S15>/Leistungsoffset Motor_rechts' */
  if (rtb_Product_i > GesamtsystemAltV2_P.LeistungsoffsetMotor_rechts_End) {
    rtb_Product_i -= GesamtsystemAltV2_P.LeistungsoffsetMotor_rechts_End;
  } else if (rtb_Product_i >=
             GesamtsystemAltV2_P.LeistungsoffsetMotor_rechts_Sta) {
    rtb_Product_i = 0.0;
  } else {
    rtb_Product_i -= GesamtsystemAltV2_P.LeistungsoffsetMotor_rechts_Sta;
  }

  /* End of DeadZone: '<S15>/Leistungsoffset Motor_rechts' */

  /* S-Function (c280xpwm): '<S15>/PWM Vorgabe fuer Motor_rechts' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD * rtb_Product_i * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S15>/Drehrichtungsvorgabe fuer Motor_links' */
  {
    if (GesamtsystemAltV2_B.r_l_out_l)
      GpioDataRegs.GPASET.bit.GPIO20 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO20 = 1;
  }

  /* S-Function (c280xgpio_do): '<S15>/Drehrichtungsvorgabe fuer Motor_rechts' */
  {
    if (GesamtsystemAltV2_B.r_l_out_r)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter7' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAltV2_B.valid_values7;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter7[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S17>/Integer to Bit Converter7' */

  /* S-Function (scominttobit): '<S17>/Integer to Bit Converter8' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)GesamtsystemAltV2_B.valid_values8;
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
  if (GesamtsystemAltV2_DWork.is_active_c1_GesamtsystemAltV2 == 0U) {
    /* Entry: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart1 */
    GesamtsystemAltV2_DWork.is_active_c1_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Nexonar-System
       [Einstellungen moeglich]/Nexonar-Positionsbestimmung/Chart1 */
    /* Transition: '<S29>:3' */
    GesamtsystemAltV2_DWork.is_c1_GesamtsystemAltV2 = GesamtsystemAltV2_IN_x0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c1_GesamtsystemAltV2) {
     case GesamtsystemA_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S29>:17' */
      /* Transition: '<S29>:24' */
      GesamtsystemAltV2_DWork.is_c1_GesamtsystemAltV2 =
        GesamtsystemAltV2_IN_x1_1;

      /* Entry 'x1_1': '<S29>:26' */
      GesamtsystemAltV2_B.int16z_bin[0] = rtb_IntegertoBitConverter7[0];
      GesamtsystemAltV2_B.int16z_bin[1] = rtb_IntegertoBitConverter7[1];
      GesamtsystemAltV2_B.int16z_bin[2] = rtb_IntegertoBitConverter7[2];
      GesamtsystemAltV2_B.int16z_bin[3] = rtb_IntegertoBitConverter7[3];
      GesamtsystemAltV2_B.int16z_bin[4] = rtb_IntegertoBitConverter7[4];
      GesamtsystemAltV2_B.int16z_bin[5] = rtb_IntegertoBitConverter7[5];
      GesamtsystemAltV2_B.int16z_bin[6] = rtb_IntegertoBitConverter7[6];
      GesamtsystemAltV2_B.int16z_bin[7] = rtb_IntegertoBitConverter7[7];
      GesamtsystemAltV2_B.int16z_bin[8] = rtb_IntegertoBitConverter8[0];
      GesamtsystemAltV2_B.int16z_bin[9] = rtb_IntegertoBitConverter8[1];
      GesamtsystemAltV2_B.int16z_bin[10] = rtb_IntegertoBitConverter8[2];
      GesamtsystemAltV2_B.int16z_bin[11] = rtb_IntegertoBitConverter8[3];
      GesamtsystemAltV2_B.int16z_bin[12] = rtb_IntegertoBitConverter8[4];
      GesamtsystemAltV2_B.int16z_bin[13] = rtb_IntegertoBitConverter8[5];
      GesamtsystemAltV2_B.int16z_bin[14] = rtb_IntegertoBitConverter8[6];
      GesamtsystemAltV2_B.int16z_bin[15] = rtb_IntegertoBitConverter8[7];
      break;

     case GesamtsystemAltV2_IN_x0:
      /* During 'x0': '<S29>:2' */
      /* Transition: '<S29>:7' */
      GesamtsystemAltV2_DWork.is_c1_GesamtsystemAltV2 =
        GesamtsystemA_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S29>:26' */
      /* Transition: '<S29>:25' */
      GesamtsystemAltV2_DWork.is_c1_GesamtsystemAltV2 =
        GesamtsystemA_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S17>/Chart1' */

  /* DiscretePulseGenerator: '<S34>/Pulse Generator' */
  rtb_RoundingFunction1 = (GesamtsystemAltV2_DWork.clockTickCounter <
    GesamtsystemAltV2_P.PulseGenerator_Duty) &&
    (GesamtsystemAltV2_DWork.clockTickCounter >= 0L) ?
    GesamtsystemAltV2_P.PulseGenerator_Amp : 0.0;
  if (GesamtsystemAltV2_DWork.clockTickCounter >=
      GesamtsystemAltV2_P.PulseGenerator_Period - 1.0) {
    GesamtsystemAltV2_DWork.clockTickCounter = 0L;
  } else {
    GesamtsystemAltV2_DWork.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S34>/Pulse Generator' */

  /* Outputs for Triggered SubSystem: '<S34>/I2C Reinitialisierung' incorporates:
   *  TriggerPort: '<S36>/Trigger'
   */
  zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                     &GesamtsystemAltV_PrevZCSigState.I2CReinitialisierung_Trig_ZCE,
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
                     &GesamtsystemAltV_PrevZCSigState.I2CReset_Trig_ZCE,
                     (rtb_RoundingFunction1));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S37>/I2C Reset' */
    /* MATLAB Function 'Nexonar-System [Einstellungen moeglich]/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset': '<S39>:1' */
    reset_i2c();
  }

  /* End of Outputs for SubSystem: '<S34>/I2C Reset' */

  /* MATLABSystem: '<S4>/Moving Average2' */
  if (GesamtsystemAltV2_DWork.obj.ForgettingFactor !=
      GesamtsystemAltV2_P.MovingAverage2_ForgettingFactor) {
    if (GesamtsystemAltV2_DWork.obj.isInitialized == 1L) {
      GesamtsystemAltV2_DWork.obj.TunablePropsChanged = true;
    }

    GesamtsystemAltV2_DWork.obj.ForgettingFactor =
      GesamtsystemAltV2_P.MovingAverage2_ForgettingFactor;
  }

  if (GesamtsystemAltV2_DWork.obj.TunablePropsChanged) {
    GesamtsystemAltV2_DWork.obj.TunablePropsChanged = false;
    sf_internal_predicateOutput =
      (GesamtsystemAltV2_DWork.obj.pStatistic->isInitialized == 1L);
    if (sf_internal_predicateOutput) {
      GesamtsystemAltV2_DWork.obj.pStatistic->TunablePropsChanged = true;
    }

    GesamtsystemAltV2_DWork.obj.pStatistic->ForgettingFactor =
      GesamtsystemAltV2_DWork.obj.ForgettingFactor;
  }

  if (GesamtsystemAltV2_DWork.obj.pStatistic->isInitialized != 1L) {
    GesamtsystemAltV2_DWork.obj.pStatistic->isSetupComplete = false;
    GesamtsystemAltV2_DWork.obj.pStatistic->isInitialized = 1L;
    GesamtsystemAltV2_DWork.obj.pStatistic->pwN = 1.0;
    GesamtsystemAltV2_DWork.obj.pStatistic->pmN = 0.0;
    GesamtsystemAltV2_DWork.obj.pStatistic->plambda =
      GesamtsystemAltV2_DWork.obj.pStatistic->ForgettingFactor;
    GesamtsystemAltV2_DWork.obj.pStatistic->isSetupComplete = true;
    GesamtsystemAltV2_DWork.obj.pStatistic->TunablePropsChanged = false;
    GesamtsystemAltV2_DWork.obj.pStatistic->pwN = 1.0;
    GesamtsystemAltV2_DWork.obj.pStatistic->pmN = 0.0;
  }

  if (GesamtsystemAltV2_DWork.obj.pStatistic->TunablePropsChanged) {
    GesamtsystemAltV2_DWork.obj.pStatistic->TunablePropsChanged = false;
    GesamtsystemAltV2_DWork.obj.pStatistic->plambda =
      GesamtsystemAltV2_DWork.obj.pStatistic->ForgettingFactor;
  }

  rtb_RoundingFunction1 = GesamtsystemAltV2_DWork.obj.pStatistic->pwN;
  rtb_x_soll_Offset = GesamtsystemAltV2_DWork.obj.pStatistic->pmN;
  rtb_Zeitinsec = GesamtsystemAltV2_DWork.obj.pStatistic->plambda;
  rtb_x_soll_Offset = (1.0 - 1.0 / rtb_RoundingFunction1) * rtb_x_soll_Offset +
    1.0 / rtb_RoundingFunction1 * GesamtsystemAltV2_B.RateTransition3_d;
  GesamtsystemAltV2_DWork.obj.pStatistic->pwN = rtb_Zeitinsec *
    rtb_RoundingFunction1 + 1.0;
  GesamtsystemAltV2_DWork.obj.pStatistic->pmN = rtb_x_soll_Offset;
  GesamtsystemAltV2_B.MovingAverage2 = rtb_x_soll_Offset;

  /* End of MATLABSystem: '<S4>/Moving Average2' */

  /* UnitDelay: '<S4>/Unit Delay2' */
  GesamtsystemAltV2_B.UnitDelay2 = GesamtsystemAltV2_DWork.UnitDelay2_DSTATE_p;

  /* RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */
  if (GesamtsystemAltV2_M->Timing.RateInteraction.TID1_2) {
    GesamtsystemAltV2_B.TmpRTBAtSortieralgorithmus2Inpo =
      GesamtsystemAltV2_DWork.TmpRTBAtSortieralgorithmus2Inpo;
  }

  /* End of RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */

  /* Chart: '<S4>/Sortieralgorithmus2' */
  if (GesamtsystemAltV2_DWork.temporalCounter_i1_n < 255U) {
    GesamtsystemAltV2_DWork.temporalCounter_i1_n = ((int16_T)
      GesamtsystemAltV2_DWork.temporalCounter_i1_n + 1) & 255U;
  }

  /* Gateway: Subsystem/Sortieralgorithmus2 */
  /* During: Subsystem/Sortieralgorithmus2 */
  if (GesamtsystemAltV2_DWork.is_active_c42_GesamtsystemAltV2 == 0U) {
    /* Entry: Subsystem/Sortieralgorithmus2 */
    GesamtsystemAltV2_DWork.is_active_c42_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Subsystem/Sortieralgorithmus2 */
    /* Transition: '<S46>:182' */
    GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2 =
      GesamtsystemAl_IN_setupVariable;

    /* Entry 'setupVariable': '<S46>:175' */
    GesamtsystemAltV2_DWork.magacin0 = 0.0;
    GesamtsystemAltV2_DWork.magacin1 = 0.0;
    GesamtsystemAltV2_DWork.magacin2 = 0.0;
    GesamtsystemAltV2_DWork.magacin3 = 0.0;
    GesamtsystemAltV2_DWork.magacin4 = 0.0;
    GesamtsystemAltV2_DWork.magacin5 = 0.0;
    GesamtsystemAltV2_DWork.magacin6 = 0.0;
    GesamtsystemAltV2_B.magacin = -1.0;
    GesamtsystemAltV2_DWork.cubeCounter = 0.0;
    GesamtsystemAltV2_DWork.blue = 0.0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2) {
     case GesamtsystemAltV2_IN_Black:
      /* During 'Black': '<S46>:187' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_n >= 100U) {
        /* Transition: '<S46>:188' */
        GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2 =
          GesamtsystemAlt_IN_DetectedCube;

        /* Entry 'DetectedCube': '<S46>:180' */
        GesamtsystemAltV2_DWork.cubeCounter++;
      } else {
        GesamtsystemAltV2_B.magacin = 6.0;
      }
      break;

     case GesamtsystemAltV2_IN_BlueCube:
      /* During 'BlueCube': '<S46>:185' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_n >= 100U) {
        /* Transition: '<S46>:189' */
        GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2 =
          GesamtsystemAlt_IN_DetectedCube;

        /* Entry 'DetectedCube': '<S46>:180' */
        GesamtsystemAltV2_DWork.cubeCounter++;
      }
      break;

     case GesamtsystemAlt_IN_DetectedCube:
      /* During 'DetectedCube': '<S46>:180' */
      if (GesamtsystemAltV2_B.UnitDelay2 == 0.0F) {
        /* Transition: '<S46>:168' */
        GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S46>:183' */
        GesamtsystemAltV2_B.magacin = -1.0;
      }
      break;

     case GesamtsystemAltV2_IN_RedCube:
      /* During 'RedCube': '<S46>:186' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_n >= 100U) {
        /* Transition: '<S46>:190' */
        GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2 =
          GesamtsystemAlt_IN_DetectedCube;

        /* Entry 'DetectedCube': '<S46>:180' */
        GesamtsystemAltV2_DWork.cubeCounter++;
      }
      break;

     case GesamtsystemAltV2_IN_cubeLoaded:
      /* During 'cubeLoaded': '<S46>:183' */
      if ((GesamtsystemAltV2_B.MovingAverage2 < 400.0) ||
          (GesamtsystemAltV2_B.MovingAverage2 > 1300.0)) {
        /* Transition: '<S46>:169' */
        GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2 =
          IN_photoelectricBarrierActivate;

        /* Entry 'photoelectricBarrierActivated': '<S46>:184' */
      } else {
        GesamtsystemAltV2_B.magacin = -1.0;
      }
      break;

     case IN_photoelectricBarrierActivate:
      /* During 'photoelectricBarrierActivated': '<S46>:184' */
      if (GesamtsystemAltV2_B.MovingAverage2 > 2150.0) {
        /* Transition: '<S46>:172' */
        GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Black;
        GesamtsystemAltV2_DWork.temporalCounter_i1_n = 0U;

        /* Entry 'Black': '<S46>:187' */
        GesamtsystemAltV2_B.magacin = 6.0;
        GesamtsystemAltV2_DWork.magacin6++;
      } else if (GesamtsystemAltV2_B.MovingAverage2 < 1000.0) {
        /* Transition: '<S46>:171' */
        GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_RedCube;
        GesamtsystemAltV2_DWork.temporalCounter_i1_n = 0U;

        /* Entry 'RedCube': '<S46>:186' */
        GesamtsystemAltV2_B.magacin = GesamtsystemAlt_findPlaceForRed();
      } else {
        if ((GesamtsystemAltV2_B.MovingAverage2 >= 1000.0) &&
            (GesamtsystemAltV2_B.MovingAverage2 <= 2150.0)) {
          /* Transition: '<S46>:170' */
          GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2 =
            GesamtsystemAltV2_IN_BlueCube;
          GesamtsystemAltV2_DWork.temporalCounter_i1_n = 0U;

          /* Entry 'BlueCube': '<S46>:185' */
          GesamtsystemAltV2_DWork.blue++;
          GesamtsystemAltV2_B.magacin = GesamtsystemAl_findPlaceForBlue();
        }
      }
      break;

     case GesamtsystemAl_IN_setupVariable:
      /* During 'setupVariable': '<S46>:175' */
      if (GesamtsystemAltV2_B.TmpRTBAtSortieralgorithmus2Inpo > 0.0F) {
        /* Transition: '<S46>:219' */
        GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_wait_itxt;
        GesamtsystemAltV2_DWork.temporalCounter_i1_n = 0U;

        /* Entry 'wait': '<S46>:218' */
      } else {
        GesamtsystemAltV2_DWork.magacin0 = 0.0;
        GesamtsystemAltV2_DWork.magacin1 = 0.0;
        GesamtsystemAltV2_DWork.magacin2 = 0.0;
        GesamtsystemAltV2_DWork.magacin3 = 0.0;
        GesamtsystemAltV2_DWork.magacin4 = 0.0;
        GesamtsystemAltV2_DWork.magacin5 = 0.0;
        GesamtsystemAltV2_DWork.magacin6 = 0.0;
        GesamtsystemAltV2_B.magacin = -1.0;
        GesamtsystemAltV2_DWork.cubeCounter = 0.0;
        GesamtsystemAltV2_DWork.blue = 0.0;
      }
      break;

     default:
      /* During 'wait': '<S46>:218' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_n >= 200U) {
        /* Transition: '<S46>:220' */
        GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S46>:183' */
        GesamtsystemAltV2_B.magacin = -1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Sortieralgorithmus2' */

  /* Lookup_n-D: '<S4>/1-D Lookup Table2' */
  rtb_RoundingFunction1 = look1_binlxpw(GesamtsystemAltV2_B.magacin,
    GesamtsystemAltV2_P.uDLookupTable2_bp01Data,
    GesamtsystemAltV2_P.uDLookupTable2_tableData, 7UL);

  /* RateTransition: '<S4>/TmpRTBAtChart7Inport4' */
  if (GesamtsystemAltV2_M->Timing.RateInteraction.TID1_2) {
    GesamtsystemAltV2_B.TmpRTBAtChart7Inport4 =
      GesamtsystemAltV2_DWork.TmpRTBAtChart7Inport4_Buffer0;
  }

  /* End of RateTransition: '<S4>/TmpRTBAtChart7Inport4' */

  /* Chart: '<S4>/Chart7' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion2'
   */
  if (GesamtsystemAltV2_DWork.temporalCounter_i1_g < 255U) {
    GesamtsystemAltV2_DWork.temporalCounter_i1_g = ((int16_T)
      GesamtsystemAltV2_DWork.temporalCounter_i1_g + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart7 */
  /* During: Subsystem/Chart7 */
  if (GesamtsystemAltV2_DWork.is_active_c38_GesamtsystemAltV2 == 0U) {
    /* Entry: Subsystem/Chart7 */
    GesamtsystemAltV2_DWork.is_active_c38_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Subsystem/Chart7 */
    /* Transition: '<S43>:70' */
    GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
      GesamtsystemAl_IN_startPosition;

    /* Entry 'startPosition': '<S43>:157' */
    GesamtsystemAltV2_B.angle = 0.0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2) {
     case Gesamtsys_IN_betterLeftPosition:
      /* During 'betterLeftPosition': '<S43>:151' */
      /* Transition: '<S43>:153' */
      GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
        GesamtsystemAltV_IN_waitForCube;

      /* Entry 'waitForCube': '<S43>:29' */
      break;

     case Gesamtsy_IN_betterRightPosition:
      /* During 'betterRightPosition': '<S43>:150' */
      /* Transition: '<S43>:155' */
      GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
        GesamtsystemAltV_IN_waitForCube;

      /* Entry 'waitForCube': '<S43>:29' */
      break;

     case GesamtsystemAltV2_IN_closeGate:
      /* During 'closeGate': '<S43>:73' */
      if (GesamtsystemAltV2_B.UnitDelay2 == 0.0F) {
        /* Transition: '<S43>:98' */
        GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
          GesamtsystemAltV_IN_waitForCube;

        /* Entry 'waitForCube': '<S43>:29' */
      } else {
        GesamtsystemAltV2_B.signal = 0.0;
      }
      break;

     case GesamtsystemAl_IN_closeKlappe_i:
      /* During 'closeKlappe': '<S43>:159' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_g >= 230U) {
        /* Transition: '<S43>:161' */
        GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
          GesamtsystemAltV_IN_waitForCube;

        /* Entry 'waitForCube': '<S43>:29' */
      } else {
        GesamtsystemAltV2_B.signal = 0.0;
      }
      break;

     case GesamtsystemAltV2_IN_firstEntry:
      /* During 'firstEntry': '<S43>:69' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_g >= 70U) {
        /* Transition: '<S43>:160' */
        GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
          GesamtsystemAl_IN_closeKlappe_i;
        GesamtsystemAltV2_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'closeKlappe': '<S43>:159' */
        GesamtsystemAltV2_B.signal = 0.0;
      }
      break;

     case GesamtsystemAltV_IN_goToMagacin:
      /* During 'goToMagacin': '<S43>:3' */
      if (((real32_T)GesamtsystemAltV2_B.RateTransition3 >
           GesamtsystemAltV2_B.angle - 2.0) && ((real32_T)
           GesamtsystemAltV2_B.RateTransition3 < GesamtsystemAltV2_B.angle + 2.0))
      {
        /* Transition: '<S43>:66' */
        GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_openGate;
        GesamtsystemAltV2_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'openGate': '<S43>:72' */
        GesamtsystemAltV2_B.signal = 1.0;
        GesamtsystemAltV2_B.movingCube = 0.0F;
      }
      break;

     case GesamtsystemAltV2_IN_goToZero:
      /* During 'goToZero': '<S43>:59' */
      if (((real32_T)GesamtsystemAltV2_B.RateTransition3 > -2.0F) && ((real32_T)
           GesamtsystemAltV2_B.RateTransition3 < 2.0F)) {
        /* Transition: '<S43>:61' */
        GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_wait_it;
        GesamtsystemAltV2_DWork.temporalCounter_i1_g = 0U;
      } else {
        GesamtsystemAltV2_B.angle = 0.0;
        GesamtsystemAltV2_B.movingCube = 1.0F;
      }
      break;

     case GesamtsystemAltV2_IN_openGate:
      /* During 'openGate': '<S43>:72' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_g >= 50U) {
        /* Transition: '<S43>:75' */
        GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_closeGate;

        /* Entry 'closeGate': '<S43>:73' */
        GesamtsystemAltV2_B.signal = 0.0;
      } else {
        GesamtsystemAltV2_B.signal = 1.0;
        GesamtsystemAltV2_B.movingCube = 0.0F;
      }
      break;

     case GesamtsystemAl_IN_startPosition:
      /* During 'startPosition': '<S43>:157' */
      if (GesamtsystemAltV2_B.TmpRTBAtChart7Inport4 > 0.0F) {
        /* Transition: '<S43>:158' */
        GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_firstEntry;
        GesamtsystemAltV2_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'firstEntry': '<S43>:69' */
        GesamtsystemAltV2_B.angle = 300.0;
        GesamtsystemAltV2_B.signal = -1.0;
      }
      break;

     case GesamtsystemAltV2_IN_wait_it:
      /* During 'wait': '<S43>:101' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_g >= 40U) {
        /* Transition: '<S43>:102' */
        GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
          GesamtsystemAltV_IN_goToMagacin;

        /* Entry 'goToMagacin': '<S43>:3' */
        GesamtsystemAltV2_B.angle = rtb_RoundingFunction1;
      }
      break;

     default:
      /* During 'waitForCube': '<S43>:29' */
      if (GesamtsystemAltV2_B.angle == 85.0) {
        /* Transition: '<S43>:154' */
        GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
          Gesamtsy_IN_betterRightPosition;

        /* Entry 'betterRightPosition': '<S43>:150' */
        GesamtsystemAltV2_B.angle = 220.0;
      } else if (GesamtsystemAltV2_B.angle == -40.0) {
        /* Transition: '<S43>:152' */
        GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
          Gesamtsys_IN_betterLeftPosition;

        /* Entry 'betterLeftPosition': '<S43>:151' */
        GesamtsystemAltV2_B.angle = -170.0;
      } else {
        if (rtb_RoundingFunction1 != -1.0) {
          /* Transition: '<S43>:60' */
          GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
            GesamtsystemAltV2_IN_goToZero;

          /* Entry 'goToZero': '<S43>:59' */
          GesamtsystemAltV2_B.angle = 0.0;
          GesamtsystemAltV2_B.movingCube = 1.0F;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart7' */

  /* Sum: '<S49>/Sum' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion2'
   */
  rtb_Product_i = GesamtsystemAltV2_B.angle - (real32_T)
    GesamtsystemAltV2_B.RateTransition3;

  /* DeadZone: '<S49>/Dead Zone' */
  if (rtb_Product_i > GesamtsystemAltV2_P.DeadZone_End) {
    rtb_Product_i -= GesamtsystemAltV2_P.DeadZone_End;
  } else if (rtb_Product_i >= GesamtsystemAltV2_P.DeadZone_Start) {
    rtb_Product_i = 0.0;
  } else {
    rtb_Product_i -= GesamtsystemAltV2_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S49>/Dead Zone' */

  /* Gain: '<S49>/Verstaerkung' */
  rtb_RoundingFunction1 = GesamtsystemAltV2_P.Verstaerkung_Gain * rtb_Product_i;

  /* MATLAB Function: '<S49>/Richtung' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung': '<S51>:1' */
  if (rtb_RoundingFunction1 > 0.0) {
    /* '<S51>:1:3' */
    /* '<S51>:1:4' */
    GesamtsystemAltV2_B.y = 1.0;
  } else {
    /* '<S51>:1:6' */
    GesamtsystemAltV2_B.y = 0.0;
  }

  /* End of MATLAB Function: '<S49>/Richtung' */

  /* S-Function (c280xgpio_do): '<S45>/Drehrichtungsvorgabe für einen Motor' */
  {
    if (GesamtsystemAltV2_B.y)
      GpioDataRegs.GPASET.bit.GPIO19 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO19 = 1;
  }

  /* RateTransition: '<S4>/TmpRTBAtProductOutport1' */
  if (GesamtsystemAltV2_M->Timing.RateInteraction.TID1_2) {
    GesamtsystemAltV2_B.TmpRTBAtProductOutport1 =
      GesamtsystemAltV2_DWork.TmpRTBAtProductOutport1_Buffer0;
  }

  /* End of RateTransition: '<S4>/TmpRTBAtProductOutport1' */

  /* Abs: '<S49>/Abs' */
  rtb_RoundingFunction1 = fabs(rtb_RoundingFunction1);

  /* MATLAB Function: '<S49>/Betrag' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag': '<S50>:1' */
  if ((0.5 < rtb_RoundingFunction1) && (rtb_RoundingFunction1 < 60.0)) {
    /* '<S50>:1:3' */
    /* '<S50>:1:4' */
    rtb_RoundingFunction1 = 60.0;
  } else if (rtb_RoundingFunction1 <= 0.5) {
    /* '<S50>:1:5' */
    /* '<S50>:1:6' */
    rtb_RoundingFunction1 = 0.0;
  } else if (rtb_RoundingFunction1 >= 100.0) {
    /* '<S50>:1:7' */
    /* '<S50>:1:8' */
    rtb_RoundingFunction1 = 100.0;
  } else {
    /* '<S50>:1:10' */
  }

  /* End of MATLAB Function: '<S49>/Betrag' */

  /* Product: '<S45>/netprod' */
  rtb_Product_i = GesamtsystemAltV2_B.TmpRTBAtProductOutport1 *
    rtb_RoundingFunction1;

  /* S-Function (c280xpwm): '<S45>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM4 --*/
  {
    EPwm4Regs.CMPB = (uint16_T)((uint32_T)EPwm4Regs.TBPRD * rtb_Product_i * 0.01);
  }

  /* Chart: '<S4>/Chart6' */
  if (GesamtsystemAltV2_DWork.temporalCounter_i1_o < 127U) {
    GesamtsystemAltV2_DWork.temporalCounter_i1_o = ((int16_T)
      GesamtsystemAltV2_DWork.temporalCounter_i1_o + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart6 */
  /* During: Subsystem/Chart6 */
  if (GesamtsystemAltV2_DWork.is_active_c37_GesamtsystemAltV2 == 0U) {
    /* Entry: Subsystem/Chart6 */
    GesamtsystemAltV2_DWork.is_active_c37_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Subsystem/Chart6 */
    /* Transition: '<S42>:16' */
    GesamtsystemAltV2_DWork.is_c37_GesamtsystemAltV2 =
      GesamtsystemAltV2_IN_wait_i;

    /* Entry 'wait': '<S42>:4' */
    GesamtsystemAltV2_B.gateDirection_i = 0.0;
    GesamtsystemAltV2_B.gatePWM_c = 50.0;
    GesamtsystemAltV2_B.movingCube_d = 0.0F;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c37_GesamtsystemAltV2) {
     case GesamtsystemAlt_IN_CloseRegular:
      /* During 'CloseRegular': '<S42>:22' */
      GesamtsystemAltV2_B.gatePWM_c = 100.0;
      GesamtsystemAltV2_B.gateDirection_i = 0.0;
      break;

     case GesamtsystemAltV2_IN_close:
      /* During 'close': '<S42>:3' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_o >= 40U) {
        /* Transition: '<S42>:7' */
        GesamtsystemAltV2_DWork.is_c37_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_wait_i;

        /* Entry 'wait': '<S42>:4' */
        GesamtsystemAltV2_B.gateDirection_i = 0.0;
        GesamtsystemAltV2_B.gatePWM_c = 50.0;
        GesamtsystemAltV2_B.movingCube_d = 0.0F;
      } else {
        GesamtsystemAltV2_B.gateDirection_i = 0.0;
      }
      break;

     case GesamtsystemAltV_IN_closeKlappe:
      /* During 'closeKlappe': '<S42>:17' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_o >= 100U) {
        /* Transition: '<S42>:19' */
        GesamtsystemAltV2_DWork.is_c37_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_wait_i;

        /* Entry 'wait': '<S42>:4' */
        GesamtsystemAltV2_B.gateDirection_i = 0.0;
        GesamtsystemAltV2_B.gatePWM_c = 50.0;
        GesamtsystemAltV2_B.movingCube_d = 0.0F;
      } else {
        GesamtsystemAltV2_B.gatePWM_c = 100.0;
        GesamtsystemAltV2_B.gateDirection_i = 0.0;
      }
      break;

     case GesamtsystemAltV2_IN_open:
      /* During 'open': '<S42>:1' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_o >= 50U) {
        /* Transition: '<S42>:6' */
        GesamtsystemAltV2_DWork.is_c37_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_close;
        GesamtsystemAltV2_DWork.temporalCounter_i1_o = 0U;

        /* Entry 'close': '<S42>:3' */
        GesamtsystemAltV2_B.gateDirection_i = 0.0;
      } else {
        GesamtsystemAltV2_B.gateDirection_i = 1.0;
        GesamtsystemAltV2_B.gatePWM_c = 100.0;
        GesamtsystemAltV2_B.movingCube_d = 1.0F;
      }
      break;

     default:
      /* During 'wait': '<S42>:4' */
      if (GesamtsystemAltV2_B.signal == 1.0) {
        /* Transition: '<S42>:5' */
        GesamtsystemAltV2_DWork.is_c37_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_open;
        GesamtsystemAltV2_DWork.temporalCounter_i1_o = 0U;

        /* Entry 'open': '<S42>:1' */
        GesamtsystemAltV2_B.gateDirection_i = 1.0;
        GesamtsystemAltV2_B.gatePWM_c = 100.0;
        GesamtsystemAltV2_B.movingCube_d = 1.0F;
      } else if (GesamtsystemAltV2_B.signal == -1.0) {
        /* Transition: '<S42>:18' */
        GesamtsystemAltV2_DWork.is_c37_GesamtsystemAltV2 =
          GesamtsystemAltV_IN_closeKlappe;
        GesamtsystemAltV2_DWork.temporalCounter_i1_o = 0U;

        /* Entry 'closeKlappe': '<S42>:17' */
        GesamtsystemAltV2_B.gatePWM_c = 100.0;
        GesamtsystemAltV2_B.gateDirection_i = 0.0;
      } else {
        GesamtsystemAltV2_B.gateDirection_i = 0.0;
        GesamtsystemAltV2_B.gatePWM_c = 50.0;
        GesamtsystemAltV2_B.movingCube_d = 0.0F;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart6' */

  /* Product: '<S47>/Product' */
  rtb_Product_i = GesamtsystemAltV2_B.TmpRTBAtProductOutport1 *
    GesamtsystemAltV2_B.gatePWM_c;

  /* S-Function (c280xpwm): '<S47>/PWM Vorgabe für einen Motor 1' */

  /*-- Update CMPB value for ePWM6 --*/
  {
    EPwm6Regs.CMPB = (uint16_T)((uint32_T)EPwm6Regs.TBPRD * rtb_Product_i * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S47>/Drehrichtungsvorgabe für einen Motor1' */
  {
    if (GesamtsystemAltV2_B.gateDirection_i)
      GpioDataRegs.GPASET.bit.GPIO16 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO16 = 1;
  }

  /* Update for Delay: '<S5>/Delay' */
  GesamtsystemAltV2_DWork.Delay_DSTATE = GesamtsystemAltV2_B.Endsignal;

  /* Update for Delay: '<S10>/Delay' */
  GesamtsystemAltV2_DWork.Delay_DSTATE_b = rtb_RoundingFunction;

  /* Update for UnitDelay: '<S4>/Unit Delay2' incorporates:
   *  Sum: '<S4>/Sum2'
   */
  GesamtsystemAltV2_DWork.UnitDelay2_DSTATE_p = GesamtsystemAltV2_B.movingCube +
    GesamtsystemAltV2_B.movingCube_d;
}

/* Model step function for TID2 */
void GesamtsystemAltV2_step2(void)     /* Sample time: [0.1s, 0.0s] */
{
  real_T rtb_Product_l;

  /* S-Function (c280xgpio_di): '<S4>/Digital Input2' */
  {
    GesamtsystemAltV2_B.DigitalInput2 = GpioDataRegs.GPADAT.bit.GPIO24;
  }

  /* Chart: '<S4>/Chart8' */
  if (GesamtsystemAltV2_DWork.temporalCounter_i1_a < 31U) {
    GesamtsystemAltV2_DWork.temporalCounter_i1_a = ((int16_T)
      GesamtsystemAltV2_DWork.temporalCounter_i1_a + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart8 */
  /* During: Subsystem/Chart8 */
  if (GesamtsystemAltV2_DWork.is_active_c39_GesamtsystemAltV2 == 0U) {
    /* Entry: Subsystem/Chart8 */
    GesamtsystemAltV2_DWork.is_active_c39_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Subsystem/Chart8 */
    /* Transition: '<S44>:16' */
    GesamtsystemAltV2_DWork.is_c39_GesamtsystemAltV2 =
      GesamtsystemAltV2_IN_entry;

    /* Entry 'entry': '<S44>:20' */
    GesamtsystemAltV2_DWork.tasterCounter = 0.0;
    GesamtsystemAltV2_B.panzerMotor = 0.0;
    GesamtsystemAltV2_B.klappe = 0.0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c39_GesamtsystemAltV2) {
     case GesamtsystemAltV2_IN_Lampe:
      /* During 'Lampe': '<S44>:35' */
      break;

     case GesamtsystemAltV2_IN_Stillstand:
      /* During 'Stillstand': '<S44>:25' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_a >= 10U) {
        /* Transition: '<S44>:36' */
        GesamtsystemAltV2_DWork.is_c39_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Lampe;

        /* Entry 'Lampe': '<S44>:35' */
      } else {
        GesamtsystemAltV2_B.gatePWM = 0.0;
      }
      break;

     case GesamtsystemAltV2_IN_end:
      /* During 'end': '<S44>:23' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_a >= 10U) {
        /* Transition: '<S44>:26' */
        GesamtsystemAltV2_DWork.is_c39_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_Stillstand;
        GesamtsystemAltV2_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'Stillstand': '<S44>:25' */
        GesamtsystemAltV2_B.gatePWM = 0.0;
      } else {
        GesamtsystemAltV2_B.gatePWM = 100.0;
        GesamtsystemAltV2_B.gateDirection = 1.0;
        GesamtsystemAltV2_B.panzerMotor = 0.0;
        GesamtsystemAltV2_B.klappe = 0.0;
      }
      break;

     case GesamtsystemAltV2_IN_entry:
      /* During 'entry': '<S44>:20' */
      /* Transition: '<S44>:21' */
      GesamtsystemAltV2_DWork.is_c39_GesamtsystemAltV2 =
        GesamtsystemAltV2_IN_wait_itx;

      /* Entry 'wait': '<S44>:4' */
      GesamtsystemAltV2_B.gatePWM = 0.0;
      GesamtsystemAltV2_B.gateDirection = 0.0;
      break;

     case GesamtsystemAltV2_IN_open_i:
      /* During 'open': '<S44>:1' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_a >= 5U) {
        /* Transition: '<S44>:6' */
        GesamtsystemAltV2_DWork.is_c39_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_wait1;
        GesamtsystemAltV2_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'wait1': '<S44>:3' */
        GesamtsystemAltV2_B.gatePWM = 0.0;
      }
      break;

     case GesamtsystemAltV2_IN_wait_itx:
      /* During 'wait': '<S44>:4' */
      if ((GesamtsystemAltV2_B.DigitalInput2 > 0.0F) &&
          (GesamtsystemAltV2_DWork.tasterCounter >= 1.0)) {
        /* Transition: '<S44>:24' */
        GesamtsystemAltV2_DWork.is_c39_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_end;
        GesamtsystemAltV2_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'end': '<S44>:23' */
        GesamtsystemAltV2_B.gatePWM = 100.0;
        GesamtsystemAltV2_B.gateDirection = 1.0;
        GesamtsystemAltV2_B.panzerMotor = 0.0;
        GesamtsystemAltV2_B.klappe = 0.0;
      } else if ((GesamtsystemAltV2_B.DigitalInput2 == 1.0F) &&
                 (GesamtsystemAltV2_DWork.tasterCounter == 0.0)) {
        /* Transition: '<S44>:5' */
        GesamtsystemAltV2_DWork.is_c39_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_open_i;
        GesamtsystemAltV2_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'open': '<S44>:1' */
        GesamtsystemAltV2_DWork.tasterCounter++;
        GesamtsystemAltV2_B.gatePWM = 100.0;
        GesamtsystemAltV2_B.gateDirection = 0.0;
        GesamtsystemAltV2_B.panzerMotor = 1.0;
        GesamtsystemAltV2_B.klappe = 1.0;
      } else {
        GesamtsystemAltV2_B.gatePWM = 0.0;
        GesamtsystemAltV2_B.gateDirection = 0.0;
      }
      break;

     default:
      /* During 'wait1': '<S44>:3' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_a >= 20U) {
        /* Transition: '<S44>:22' */
        GesamtsystemAltV2_DWork.is_c39_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_wait_itx;

        /* Entry 'wait': '<S44>:4' */
        GesamtsystemAltV2_B.gatePWM = 0.0;
        GesamtsystemAltV2_B.gateDirection = 0.0;
      } else {
        GesamtsystemAltV2_B.gatePWM = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart8' */

  /* S-Function (c280xgpio_do): '<S4>/Drehrichtungsvorgabe für einen Motor3' */
  {
    if (GesamtsystemAltV2_B.gateDirection)
      GpioDataRegs.GPASET.bit.GPIO15 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO15 = 1;
  }

  /* S-Function (c280xpwm): '<S4>/ePWM2' */

  /*-- Update CMPB value for ePWM5 --*/
  {
    EPwm5Regs.CMPB = (uint16_T)((uint32_T)EPwm5Regs.TBPRD *
      GesamtsystemAltV2_B.gatePWM * 0.01);
  }

  /* Chart: '<S4>/Chart' */
  if (GesamtsystemAltV2_DWork.temporalCounter_i1_b < 2047U) {
    GesamtsystemAltV2_DWork.temporalCounter_i1_b++;
  }

  /* Gateway: Subsystem/Chart */
  /* During: Subsystem/Chart */
  if (GesamtsystemAltV2_DWork.is_active_c20_GesamtsystemAltV2 == 0U) {
    /* Entry: Subsystem/Chart */
    GesamtsystemAltV2_DWork.is_active_c20_GesamtsystemAltV2 = 1U;

    /* Entry Internal: Subsystem/Chart */
    /* Transition: '<S41>:2' */
    GesamtsystemAltV2_DWork.is_c20_GesamtsystemAltV2 = GesamtsystemAltV2_IN_wait;

    /* Entry 'wait': '<S41>:1' */
    GesamtsystemAltV2_B.stopp = 1.0;
  } else {
    switch (GesamtsystemAltV2_DWork.is_c20_GesamtsystemAltV2) {
     case GesamtsystemAltV2_IN_ShutDown:
      /* During 'ShutDown': '<S41>:4' */
      GesamtsystemAltV2_B.stopp = 0.0;
      break;

     case GesamtsystemAltV_IN_backupTimer:
      /* During 'backupTimer': '<S41>:9' */
      if (GesamtsystemAltV2_DWork.temporalCounter_i1_b >= 1600U) {
        /* Transition: '<S41>:8' */
        GesamtsystemAltV2_DWork.is_c20_GesamtsystemAltV2 =
          GesamtsystemAltV2_IN_ShutDown;

        /* Entry 'ShutDown': '<S41>:4' */
        GesamtsystemAltV2_B.stopp = 0.0;
      }
      break;

     default:
      /* During 'wait': '<S41>:1' */
      if (GesamtsystemAltV2_B.DigitalInput2 > 0.0F) {
        /* Transition: '<S41>:11' */
        GesamtsystemAltV2_DWork.is_c20_GesamtsystemAltV2 =
          GesamtsystemAltV_IN_backupTimer;
        GesamtsystemAltV2_DWork.temporalCounter_i1_b = 0U;
      } else {
        GesamtsystemAltV2_B.stopp = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart' */

  /* Product: '<S4>/Product' */
  rtb_Product_l = GesamtsystemAltV2_B.klappe * GesamtsystemAltV2_B.stopp;

  /* Update for RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */
  GesamtsystemAltV2_DWork.TmpRTBAtSortieralgorithmus2Inpo =
    GesamtsystemAltV2_B.DigitalInput2;

  /* Update for RateTransition: '<S4>/TmpRTBAtChart7Inport4' */
  GesamtsystemAltV2_DWork.TmpRTBAtChart7Inport4_Buffer0 =
    GesamtsystemAltV2_B.DigitalInput2;

  /* Update for RateTransition: '<S4>/TmpRTBAtProductOutport1' */
  GesamtsystemAltV2_DWork.TmpRTBAtProductOutport1_Buffer0 = rtb_Product_l;
}

/* Model initialize function */
void GesamtsystemAltV2_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)GesamtsystemAltV2_M, 0,
                sizeof(RT_MODEL_GesamtsystemAltV2));

  /* block I/O */
  (void) memset(((void *) &GesamtsystemAltV2_B), 0,
                sizeof(BlockIO_GesamtsystemAltV2));

  /* states (dwork) */
  (void) memset((void *)&GesamtsystemAltV2_DWork, 0,
                sizeof(D_Work_GesamtsystemAltV2));

  {
    boolean_T flag;
    int16_T i;

    /* Start for S-Function (c28xisr_c2000): '<S17>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S17>/Triggered Subsystem'
     */
    /* Start for function-call system: '<S17>/Triggered Subsystem' */

    /* Start for S-Function (c280xi2c_rx): '<S35>/I2C Receive' */

    /* Initialize GesamtsystemAltV2_B.I2CReceive_o1[0] */
    {
      GesamtsystemAltV2_B.I2CReceive_o1[0] = (uint8_T)0.0;
      GesamtsystemAltV2_B.I2CReceive_o1[1] = (uint8_T)0.0;
      GesamtsystemAltV2_B.I2CReceive_o1[2] = (uint8_T)0.0;
      GesamtsystemAltV2_B.I2CReceive_o1[3] = (uint8_T)0.0;
      GesamtsystemAltV2_B.I2CReceive_o1[4] = (uint8_T)0.0;
      GesamtsystemAltV2_B.I2CReceive_o1[5] = (uint8_T)0.0;
      GesamtsystemAltV2_B.I2CReceive_o1[6] = (uint8_T)0.0;
      GesamtsystemAltV2_B.I2CReceive_o1[7] = (uint8_T)0.0;
      GesamtsystemAltV2_B.I2CReceive_o1[8] = (uint8_T)0.0;
      GesamtsystemAltV2_B.I2CReceive_o1[9] = (uint8_T)0.0;
    }

    /* Start for RateTransition: '<S17>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      GesamtsystemAltV2_B.RateTransition[i] =
        GesamtsystemAltV2_P.RateTransition_InitialCondition;
    }

    /* End of Start for RateTransition: '<S17>/Rate Transition' */

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
    GesamtsystemAltV2_DWork.obj.matlabCodegenIsDeleted = true;
    GesamtsystemAltV2_DWork.obj.isInitialized = 0L;
    GesamtsystemAltV2_DWork.obj.NumChannels = -1L;
    GesamtsystemAltV2_DWork.obj.matlabCodegenIsDeleted = false;
    GesamtsystemAltV2_DWork.objisempty = true;
    if (GesamtsystemAltV2_DWork.obj.isInitialized == 1L) {
      GesamtsystemAltV2_DWork.obj.TunablePropsChanged = true;
    }

    GesamtsystemAltV2_DWork.obj.ForgettingFactor =
      GesamtsystemAltV2_P.MovingAverage2_ForgettingFactor;
    GesamtsystemAltV2_DWork.obj.isSetupComplete = false;
    GesamtsystemAltV2_DWork.obj.isInitialized = 1L;
    GesamtsystemAltV2_DWork.obj.NumChannels = 1L;
    GesamtsystemAltV2_DWork.gobj_0.isInitialized = 0L;
    flag = (GesamtsystemAltV2_DWork.gobj_0.isInitialized == 1L);
    if (flag) {
      GesamtsystemAltV2_DWork.gobj_0.TunablePropsChanged = true;
    }

    GesamtsystemAltV2_DWork.gobj_0.ForgettingFactor =
      GesamtsystemAltV2_DWork.obj.ForgettingFactor;
    GesamtsystemAltV2_DWork.obj.pStatistic = &GesamtsystemAltV2_DWork.gobj_0;
    GesamtsystemAltV2_DWork.obj.isSetupComplete = true;
    GesamtsystemAltV2_DWork.obj.TunablePropsChanged = false;

    /* End of Start for MATLABSystem: '<S4>/Moving Average2' */

    /* Start for RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */
    GesamtsystemAltV2_B.TmpRTBAtSortieralgorithmus2Inpo =
      GesamtsystemAltV2_P.TmpRTBAtSortieralgorithmus2Inpo;

    /* Start for RateTransition: '<S4>/TmpRTBAtChart7Inport4' */
    GesamtsystemAltV2_B.TmpRTBAtChart7Inport4 =
      GesamtsystemAltV2_P.TmpRTBAtChart7Inport4_InitialCo;

    /* Start for S-Function (c280xgpio_do): '<S45>/Drehrichtungsvorgabe für einen Motor' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFF3F;
    GpioCtrlRegs.GPADIR.all |= 0x80000;
    EDIS;

    /* Start for RateTransition: '<S4>/TmpRTBAtProductOutport1' */
    GesamtsystemAltV2_B.TmpRTBAtProductOutport1 =
      GesamtsystemAltV2_P.TmpRTBAtProductOutport1_Initial;

    /* Start for S-Function (c280xpwm): '<S45>/PWM Vorgabe für einen Motor ' */

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

    /* Start for S-Function (c280xpwm): '<S47>/PWM Vorgabe für einen Motor 1' */

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

    /* Start for S-Function (c280xgpio_do): '<S47>/Drehrichtungsvorgabe für einen Motor1' */
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

    /* Start for S-Function (c280xgpio_do): '<S48>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
    EALLOW;
    GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
    GpioCtrlRegs.GPBDIR.all |= 0x4;
    EDIS;
    GesamtsystemAltV_PrevZCSigState.I2CReinitialisierung_Trig_ZCE =
      UNINITIALIZED_ZCSIG;
    GesamtsystemAltV_PrevZCSigState.I2CReset_Trig_ZCE = UNINITIALIZED_ZCSIG;

    /* InitializeConditions for RateTransition: '<S17>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      GesamtsystemAltV2_DWork.RateTransition_Buffer[i] =
        GesamtsystemAltV2_P.RateTransition_InitialCondition;
    }

    /* End of InitializeConditions for RateTransition: '<S17>/Rate Transition' */

    /* InitializeConditions for Delay: '<S5>/Delay' */
    GesamtsystemAltV2_DWork.Delay_DSTATE =
      GesamtsystemAltV2_P.Delay_InitialCondition;

    /* InitializeConditions for Delay: '<S10>/Delay' */
    GesamtsystemAltV2_DWork.Delay_DSTATE_b =
      GesamtsystemAltV2_P.Delay_InitialCondition_g;

    /* InitializeConditions for DiscretePulseGenerator: '<S34>/Pulse Generator' */
    GesamtsystemAltV2_DWork.clockTickCounter = 0L;

    /* InitializeConditions for Memory: '<S53>/Memory' */
    GesamtsystemAltV2_DWork.Memory_PreviousInput =
      GesamtsystemAltV2_P.EdgeDetector1_ic;

    /* InitializeConditions for UnitDelay: '<S52>/Unit Delay3' */
    GesamtsystemAltV2_DWork.UnitDelay3_DSTATE =
      GesamtsystemAltV2_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S52>/Unit Delay4' */
    GesamtsystemAltV2_DWork.UnitDelay4_DSTATE =
      GesamtsystemAltV2_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S52>/Unit Delay5' */
    GesamtsystemAltV2_DWork.UnitDelay5_DSTATE =
      GesamtsystemAltV2_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S52>/Unit Delay1' */
    GesamtsystemAltV2_DWork.UnitDelay1_DSTATE =
      GesamtsystemAltV2_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Memory: '<S54>/Memory' */
    GesamtsystemAltV2_DWork.Memory_PreviousInput_k =
      GesamtsystemAltV2_P.EdgeDetector2_ic;

    /* InitializeConditions for UnitDelay: '<S52>/Unit Delay2' */
    GesamtsystemAltV2_DWork.UnitDelay2_DSTATE =
      GesamtsystemAltV2_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S4>/Unit Delay2' */
    GesamtsystemAltV2_DWork.UnitDelay2_DSTATE_p =
      GesamtsystemAltV2_P.UnitDelay2_InitialCondition_j;

    /* InitializeConditions for RateTransition: '<S4>/TmpRTBAtSortieralgorithmus2Inport3' */
    GesamtsystemAltV2_DWork.TmpRTBAtSortieralgorithmus2Inpo =
      GesamtsystemAltV2_P.TmpRTBAtSortieralgorithmus2Inpo;

    /* InitializeConditions for RateTransition: '<S4>/TmpRTBAtChart7Inport4' */
    GesamtsystemAltV2_DWork.TmpRTBAtChart7Inport4_Buffer0 =
      GesamtsystemAltV2_P.TmpRTBAtChart7Inport4_InitialCo;

    /* InitializeConditions for RateTransition: '<S4>/TmpRTBAtProductOutport1' */
    GesamtsystemAltV2_DWork.TmpRTBAtProductOutport1_Buffer0 =
      GesamtsystemAltV2_P.TmpRTBAtProductOutport1_Initial;

    /* SystemInitialize for S-Function (c28xisr_c2000): '<S17>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S17>/Triggered Subsystem'
     */
    /* System initialize for function-call system: '<S17>/Triggered Subsystem' */
    {
      int16_T i;

      /* InitializeConditions for Delay: '<S35>/Delay' */
      for (i = 0; i < 10; i++) {
        GesamtsystemAltV2_DWork.Delay_DSTATE_bl[i] =
          GesamtsystemAltV2_P.Delay_InitialCondition_k;
      }

      /* End of InitializeConditions for Delay: '<S35>/Delay' */
    }

    /* End of SystemInitialize for S-Function (c28xisr_c2000): '<S17>/C28x Hardware Interrupt' */

    /* SystemInitialize for Chart: '<S17>/Chart8' */
    GesamtsystemAltV2_DWork.is_active_c17_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c17_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;
    for (i = 0; i < 20; i++) {
      GesamtsystemAltV2_DWork.values_out1[i] = 0;
    }

    GesamtsystemAltV2_DWork.zaehler = 0L;
    GesamtsystemAltV2_DWork.search = 0;
    GesamtsystemAltV2_DWork.counter = 0L;
    GesamtsystemAltV2_DWork.x_found = 0L;
    GesamtsystemAltV2_B.valid_values1 = 0;
    GesamtsystemAltV2_B.valid_values2 = 0;
    GesamtsystemAltV2_B.valid_values3 = 0;
    GesamtsystemAltV2_B.valid_values4 = 0;
    GesamtsystemAltV2_B.valid_values5 = 0;
    GesamtsystemAltV2_B.valid_values6 = 0;
    GesamtsystemAltV2_B.valid_values7 = 0;
    GesamtsystemAltV2_B.valid_values8 = 0;

    /* End of SystemInitialize for Chart: '<S17>/Chart8' */

    /* SystemInitialize for Chart: '<S17>/Chart6' */
    GesamtsystemAltV2_DWork.is_active_c16_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c16_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S17>/Chart2' */
    GesamtsystemAltV2_DWork.is_active_c13_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c13_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S17>/Chart4' */
    GesamtsystemAltV2_DWork.is_active_c14_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c14_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
    GesamtsystemAltV2_DWork.is_active_c4_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c4_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S19>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert (außer bei "Ende")' */
    GesamtsystemAltV2_DWork.is_Parken = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    GesamtsystemAltV2_DWork.is_Sammeln = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    GesamtsystemAltV2_DWork.is_Uebergabe = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    GesamtsystemAltV2_DWork.temporalCounter_i1 = 0UL;
    GesamtsystemAltV2_DWork.is_active_c5_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c5_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Steuersystem fuer Heckschalter' */
    GesamtsystemAltV2_DWork.temporalCounter_i1_p = 0UL;
    GesamtsystemAltV2_DWork.is_active_c9_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c9_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S5>/Shutdown-Eingriff' */
    GesamtsystemAltV2_DWork.is_active_c10_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c10_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S5>/Zeitverzoegerungsblock Die eigentliche Zeitmessung startet, wenn der Heckschalter zum ersten Mal gedrückt wird' */
    GesamtsystemAltV2_DWork.is_active_c15_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c15_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S5>/Beendigung-Ansteuerung' */
    GesamtsystemAltV2_DWork.is_active_c3_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c3_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S6>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
    GesamtsystemAltV2_DWork.temporalCounter_i1_c = 0U;
    GesamtsystemAltV2_DWork.is_active_c6_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c6_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Atomic SubSystem: '<S3>/Navigationssystem [Einstellungen moeglich]' */
    /* SystemInitialize for Chart: '<S23>/Quadrantenteiler' */
    GesamtsystemAltV2_DWork.is_active_c11_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c11_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S23>/Winkelausgabe fuer Ausrichtung' */
    GesamtsystemAltV2_DWork.is_active_c12_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c12_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S16>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
    GesamtsystemAltV2_DWork.is_active_c8_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c8_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S16>/Fahrsystem' */
    GesamtsystemAltV2_DWork.is_active_c7_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c7_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* End of SystemInitialize for SubSystem: '<S3>/Navigationssystem [Einstellungen moeglich]' */

    /* SystemInitialize for Chart: '<S17>/Chart1' */
    GesamtsystemAltV2_DWork.is_active_c1_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c1_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;
    for (i = 0; i < 16; i++) {
      /* SystemInitialize for Chart: '<S17>/Chart6' */
      GesamtsystemAltV2_B.int16x_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S17>/Chart2' */
      GesamtsystemAltV2_B.int16y_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S17>/Chart4' */
      GesamtsystemAltV2_B.int16a1_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S17>/Chart1' */
      GesamtsystemAltV2_B.int16z_bin[i] = 0.0F;
    }

    /* SystemInitialize for Chart: '<S4>/Chart8' */
    GesamtsystemAltV2_DWork.temporalCounter_i1_a = 0U;
    GesamtsystemAltV2_DWork.is_active_c39_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c39_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* InitializeConditions for MATLABSystem: '<S4>/Moving Average2' */
    if (GesamtsystemAltV2_DWork.obj.pStatistic->isInitialized == 1L) {
      GesamtsystemAltV2_DWork.obj.pStatistic->pwN = 1.0;
      GesamtsystemAltV2_DWork.obj.pStatistic->pmN = 0.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S4>/Moving Average2' */

    /* SystemInitialize for Chart: '<S4>/Sortieralgorithmus2' */
    GesamtsystemAltV2_DWork.temporalCounter_i1_n = 0U;
    GesamtsystemAltV2_DWork.is_active_c42_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c42_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S4>/Chart7' */
    GesamtsystemAltV2_DWork.temporalCounter_i1_g = 0U;
    GesamtsystemAltV2_DWork.is_active_c38_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c38_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S4>/Chart6' */
    GesamtsystemAltV2_DWork.temporalCounter_i1_o = 0U;
    GesamtsystemAltV2_DWork.is_active_c37_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c37_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S4>/Chart' */
    GesamtsystemAltV2_DWork.temporalCounter_i1_b = 0U;
    GesamtsystemAltV2_DWork.is_active_c20_GesamtsystemAltV2 = 0U;
    GesamtsystemAltV2_DWork.is_c20_GesamtsystemAltV2 =
      Gesamtsystem_IN_NO_ACTIVE_CHILD;
  }
}

/* Model terminate function */
void GesamtsystemAltV2_terminate(void)
{
  /* Terminate for MATLABSystem: '<S4>/Moving Average2' */
  matlabCodegenHandle_matlabCodeg(&GesamtsystemAltV2_DWork.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
