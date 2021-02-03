/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Gesamtsystem.c
 *
 * Code generated for Simulink model 'Gesamtsystem'.
 *
 * Model version                  : 1.84
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Feb  3 23:13:45 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Gesamtsystem.h"
#include "Gesamtsystem_private.h"
#define G_IN_Ausrichtung_ohne_Aenderung (2U)
#define Ge_IN_Uebergabepunkt_x_Richtung (1U)
#define Ge_IN_Uebergabepunkt_y_Richtung (2U)
#define Gesa_IN_Drehen_rechts_gesteuert (3U)
#define Gesam_IN_Drehen_links_gesteuert (1U)
#define Gesam_IN_Start_Einstellung_Init (4U)
#define Gesamts_IN_x5_valid_data_found1 (6U)
#define Gesamtsy_IN_Ausrichtung_gegeben (1U)
#define Gesamtsy_IN_betterRightPosition (2U)
#define Gesamtsys_IN_betterLeftPosition (1U)
#define Gesamtsyst_IN_Drehen_rechts_max (4U)
#define Gesamtsyste_IN_Drehen_links_max (2U)
#define Gesamtsyste_IN_Einstellung_Init (2U)
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
#define Gesamtsystem_IN_Init_und_Warten (3U)
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
#define Gesamtsystem_IN_Stehen         (2U)
#define Gesamtsystem_IN_Stillstand     (2U)
#define Gesamtsystem_IN_Uebergabe      (5U)
#define Gesamtsystem_IN_Warten1        (3U)
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
#define Gesamtsystem_IN_Weiter         (4U)
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
#define IN_Trigonometrische_Auswertun_b (5U)
#define IN_Trigonometrische_Auswertung_ (4U)
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
static void Gesamtsystem_Wechsel_1(void);
static void Gesamtsystem_Wechsel_3(void);
static void Gesamtsystem_Wechsel_11(void);
static void Gesamtsystem_Wechsel_12(void);
static void Gesamtsystem_Wechsel_13(void);
static void Gesamtsystem_Wechsel_2(void);
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

/* Hardware Interrupt Block: '<S14>/C28x Hardware Interrupt' */
void isr_int8pie2_task_fcn(void)
{
  /* Call the system: <S14>/Triggered Subsystem */
  {
    int16_T i;

    /* S-Function (c28xisr_c2000): '<S14>/C28x Hardware Interrupt' */

    /* Output and update for function-call system: '<S14>/Triggered Subsystem' */
    {
      int16_T i;

      /* S-Function (c280xi2c_rx): '<S30>/I2C Receive' */
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
        /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn2' */
        Gesamtsystem_B.VectorConcatenate[i + 10] =
          Gesamtsystem_B.I2CReceive_o1[i];

        /* Delay: '<S30>/Delay' */
        Gesamtsystem_B.VectorConcatenate[i] = Gesamtsystem_DWork.Delay_DSTATE[i];

        /* Update for Delay: '<S30>/Delay' */
        Gesamtsystem_DWork.Delay_DSTATE[i] = Gesamtsystem_B.I2CReceive_o1[i];
      }
    }

    /* End of Outputs for S-Function (c28xisr_c2000): '<S14>/C28x Hardware Interrupt' */

    /* RateTransition: '<S14>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Gesamtsystem_DWork.RateTransition_Buffer[i +
        (Gesamtsystem_DWork.RateTransition_semaphoreTaken == 0) * 20] =
        Gesamtsystem_B.VectorConcatenate[i];
    }

    Gesamtsystem_DWork.RateTransition_ActiveBufIdx =
      (Gesamtsystem_DWork.RateTransition_semaphoreTaken == 0);

    /* End of RateTransition: '<S14>/Rate Transition' */
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
 *    '<S46>/NEGATIVE Edge'
 *    '<S47>/NEGATIVE Edge'
 */
void Gesamtsystem_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_NEGATIVEEdge_Gesamtsystem *localB)
{
  /* Outputs for Enabled SubSystem: '<S46>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S51>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S51>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S46>/NEGATIVE Edge' */
}

/*
 * Output and update for enable system:
 *    '<S46>/POSITIVE Edge'
 *    '<S47>/POSITIVE Edge'
 */
void Gesamtsystem_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_POSITIVEEdge_Gesamtsystem *localB)
{
  /* Outputs for Enabled SubSystem: '<S46>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S52>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S52>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S46>/POSITIVE Edge' */
}

/*
 * Output and update for atomic system:
 *    '<S45>/MATLAB Function1'
 *    '<S45>/MATLAB Function3'
 */
void Gesamtsyste_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt,
  rtB_MATLABFunction1_Gesamtsyste *localB)
{
  /* MATLAB Function 'Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1': '<S48>:1' */
  /* '<S48>:1:3' */
  localB->y = rtu_yalt + (real32_T)rtu_u;
}

/* Function for Chart: '<S14>/Chart8' */
static void Gesam_enter_atomic_wert_erkannt(void)
{
  /* Entry 'wert_erkannt': '<S28>:109' */
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

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Anfahrpunkt_8(void)
{
  /* During 'Anfahrpunkt_8': '<S9>:1389' */
  if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
       Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
        Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
    /* Transition: '<S9>:1362' */
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_8;

    /* Entry 'Wechsel_8': '<S9>:1390' */
    Gesamtsystem_DWork.Counter++;
  }
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Anfahrpunkt_9(void)
{
  /* During 'Anfahrpunkt_9': '<S9>:1391' */
  if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
       Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
        Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
    /* Transition: '<S9>:1364' */
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_9;

    /* Entry 'Wechsel_9': '<S9>:1392' */
    Gesamtsystem_DWork.Counter++;
  }
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_1(void)
{
  /* During 'Wechsel_1': '<S9>:1374' */
  /* Transition: '<S9>:1346' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_2;

  /* Entry 'Anfahrpunkt_2': '<S9>:1375' */
  Gesamtsystem_B.x_soll = 1200.0;
  Gesamtsystem_B.y_soll = 100.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_3(void)
{
  /* During 'Wechsel_3': '<S9>:1378' */
  /* Transition: '<S9>:1350' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_4;

  /* Entry 'Anfahrpunkt_4': '<S9>:1379' */
  Gesamtsystem_B.x_soll = 940.0;
  Gesamtsystem_B.y_soll = 650.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_11(void)
{
  /* During 'Wechsel_11': '<S9>:1394' */
  /* Transition: '<S9>:1367' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_12;

  /* Entry 'Anfahrpunkt_12': '<S9>:1395' */
  Gesamtsystem_B.x_soll = 900.0;
  Gesamtsystem_B.y_soll = 0.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_12(void)
{
  /* During 'Wechsel_12': '<S9>:1396' */
  /* Transition: '<S9>:1369' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_13;

  /* Entry 'Anfahrpunkt_13': '<S9>:1397' */
  Gesamtsystem_B.x_soll = 1200.0;
  Gesamtsystem_B.y_soll = 0.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_13(void)
{
  /* During 'Wechsel_13': '<S9>:1398' */
  /* Transition: '<S9>:1371' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_14;

  /* Entry 'Anfahrpunkt_14': '<S9>:1399' */
  Gesamtsystem_B.x_soll = 1370.0;
  Gesamtsystem_B.y_soll = -100.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_2(void)
{
  /* During 'Wechsel_2': '<S9>:1376' */
  /* Transition: '<S9>:1348' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_3;

  /* Entry 'Anfahrpunkt_3': '<S9>:1377' */
  Gesamtsystem_B.x_soll = 1000.0;
  Gesamtsystem_B.y_soll = 250.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_4(void)
{
  /* During 'Wechsel_4': '<S9>:1380' */
  /* Transition: '<S9>:1353' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_5;

  /* Entry 'Anfahrpunkt_5': '<S9>:1381' */
  Gesamtsystem_B.x_soll = 850.0;
  Gesamtsystem_B.y_soll = 750.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_5(void)
{
  /* During 'Wechsel_5': '<S9>:1382' */
  /* Transition: '<S9>:1355' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_6;

  /* Entry 'Anfahrpunkt_6': '<S9>:1383' */
  Gesamtsystem_B.x_soll = 600.0;
  Gesamtsystem_B.y_soll = 825.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_6(void)
{
  /* During 'Wechsel_6': '<S9>:1384' */
  /* Transition: '<S9>:1357' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_7;

  /* Entry 'Anfahrpunkt_7': '<S9>:1386' */
  Gesamtsystem_B.x_soll = 500.0;
  Gesamtsystem_B.y_soll = 825.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_7(void)
{
  /* During 'Wechsel_7': '<S9>:1388' */
  /* Transition: '<S9>:1361' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_8;

  /* Entry 'Anfahrpunkt_8': '<S9>:1389' */
  Gesamtsystem_B.x_soll = 325.0;
  Gesamtsystem_B.y_soll = 725.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_8(void)
{
  /* During 'Wechsel_8': '<S9>:1390' */
  /* Transition: '<S9>:1363' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_9;

  /* Entry 'Anfahrpunkt_9': '<S9>:1391' */
  Gesamtsystem_B.x_soll = 400.0;
  Gesamtsystem_B.y_soll = 300.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Sammeln(void)
{
  /* During 'Sammeln': '<S9>:1343' */
  if (Gesamtsystem_DWork.Counter == 20.0) {
    /* Transition: '<S9>:1342' */
    Gesamtsystem_B.Gang = 1.0;
    Gesamtsystem_DWork.x_least = Gesamtsystem_B.x_soll;

    /* Exit Internal 'Sammeln': '<S9>:1343' */
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Uebergabe;

    /* Entry Internal 'Uebergabe': '<S9>:1330' */
    /* Transition: '<S9>:1331' */
    Gesamtsystem_DWork.Counter = 0.0;
    Gesamtsystem_DWork.is_Uebergabe = Ge_IN_Uebergabepunkt_x_Richtung;

    /* Entry 'Uebergabepunkt_x_Richtung': '<S9>:1336' */
    Gesamtsystem_B.alpha_soll = -1.0;
  } else {
    switch (Gesamtsystem_DWork.is_Sammeln) {
     case Gesamtsystem_IN_Anfahrpunkt_1:
      /* During 'Anfahrpunkt_1': '<S9>:1373' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S9>:1345' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_1_b;

        /* Entry 'Wechsel_1': '<S9>:1374' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_10:
      /* During 'Anfahrpunkt_10': '<S9>:1387' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S9>:1358' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_10;

        /* Entry 'Wechsel_10': '<S9>:1385' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_11:
      /* During 'Anfahrpunkt_11': '<S9>:1393' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S9>:1366' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_11;

        /* Entry 'Wechsel_11': '<S9>:1394' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_12:
      /* During 'Anfahrpunkt_12': '<S9>:1395' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S9>:1368' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_12;

        /* Entry 'Wechsel_12': '<S9>:1396' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_13:
      /* During 'Anfahrpunkt_13': '<S9>:1397' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S9>:1370' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_13;

        /* Entry 'Wechsel_13': '<S9>:1398' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_14:
      /* During 'Anfahrpunkt_14': '<S9>:1399' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S9>:1372' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_14;

        /* Entry 'Wechsel_14': '<S9>:1400' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_2:
      /* During 'Anfahrpunkt_2': '<S9>:1375' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S9>:1347' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_2_b;

        /* Entry 'Wechsel_2': '<S9>:1376' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_3:
      /* During 'Anfahrpunkt_3': '<S9>:1377' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S9>:1349' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_3_b;

        /* Entry 'Wechsel_3': '<S9>:1378' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_4:
      /* During 'Anfahrpunkt_4': '<S9>:1379' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S9>:1352' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_4;

        /* Entry 'Wechsel_4': '<S9>:1380' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_5:
      /* During 'Anfahrpunkt_5': '<S9>:1381' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S9>:1354' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_5;

        /* Entry 'Wechsel_5': '<S9>:1382' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_6:
      /* During 'Anfahrpunkt_6': '<S9>:1383' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S9>:1356' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_6;

        /* Entry 'Wechsel_6': '<S9>:1384' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_7:
      /* During 'Anfahrpunkt_7': '<S9>:1386' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S9>:1359' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_7;

        /* Entry 'Wechsel_7': '<S9>:1388' */
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
      Gesamtsystem_Wechsel_1();
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
      /* During 'Wechsel_14': '<S9>:1400' */
      break;

     case Gesamtsystem_IN_Wechsel_2_b:
      Gesamtsystem_Wechsel_2();
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
      /* During 'Wechsel_9': '<S9>:1392' */
      if (Gesamtsystem_DWork.Counter == 9.0) {
        /* Transition: '<S9>:1360' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_10;

        /* Entry 'Anfahrpunkt_10': '<S9>:1387' */
        Gesamtsystem_B.x_soll = 880.0;
        Gesamtsystem_B.y_soll = 0.0;
        Gesamtsystem_B.alpha_soll = -1.0;
      } else {
        /* Transition: '<S9>:1365' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_11;

        /* Entry 'Anfahrpunkt_11': '<S9>:1393' */
        Gesamtsystem_B.x_soll = 600.0;
        Gesamtsystem_B.y_soll = 0.0;
        Gesamtsystem_B.alpha_soll = -1.0;
      }
      break;
    }
  }
}

/* Function for Chart: '<S13>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
static void enter_atomic_Drehstillstand_mit(void)
{
  real_T tmp;

  /* Entry 'Drehstillstand_mit_Ausrichtungsregelung': '<S15>:26' */
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

/* Function for Chart: '<S13>/Fahrsystem' */
static void Gesamtsystem_Start_Warten(void)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Start_Warten': '<S16>:92' */
  /* Transition: '<S16>:93' */
  l_mindern = fabs(Gesamtsystem_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (Gesamtsystem_B.PWMWertebereich > 0.0)) {
    /* Transition: '<S16>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S16>:21' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S16>:45' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsyste_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S16>:8' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S16>:57' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsyst_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S16>:9' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S16>:53' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S16>:54' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesam_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S16>:43' */
        Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S16>:55' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesa_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S16>:51' */
        Gesamtsystem_B.pwm_out_l = 59.0 + l_mindern;
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S16>:82' */
    if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S16>:85' */
      l_mindern = 1.0 - Gesamtsystem_B.Gang;
      r_mindern = Gesamtsystem_B.Gang;
    } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S16>:86' */
      l_mindern = Gesamtsystem_B.Gang;
      r_mindern = 1.0 - Gesamtsystem_B.Gang;
    } else {
      /* Transition: '<S16>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S16>:94' */
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

/* Function for Chart: '<S13>/Fahrsystem' */
static void Gesamtsystem_Drehen_links_max(void)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Drehen_links_max': '<S16>:8' */
  /* Transition: '<S16>:60' */
  /* Transition: '<S16>:75' */
  l_mindern = fabs(Gesamtsystem_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (Gesamtsystem_B.PWMWertebereich > 0.0)) {
    /* Transition: '<S16>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S16>:21' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S16>:45' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsyste_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S16>:8' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S16>:57' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsyst_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S16>:9' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S16>:53' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S16>:54' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesam_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S16>:43' */
        Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S16>:55' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesa_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S16>:51' */
        Gesamtsystem_B.pwm_out_l = 59.0 + l_mindern;
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S16>:82' */
    if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S16>:85' */
      l_mindern = 1.0 - Gesamtsystem_B.Gang;
      r_mindern = Gesamtsystem_B.Gang;
    } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S16>:86' */
      l_mindern = Gesamtsystem_B.Gang;
      r_mindern = 1.0 - Gesamtsystem_B.Gang;
    } else {
      /* Transition: '<S16>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S16>:94' */
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

/* Function for Chart: '<S3>/Sortieralgorithmus2' */
static real_T Gesamtsystem_findPlaceForBlue(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForBlue': '<S39>:206' */
  if (Gesamtsystem_DWork.magacin0 == 4.0) {
    /* '<S39>:206:4' */
    /* '<S39>:206:5' */
    magacinOut = 0.0;

    /* '<S39>:206:6' */
    Gesamtsystem_DWork.magacin0++;

    /* '<S39>:206:7' */
  } else if ((Gesamtsystem_DWork.magacin2 == 0.0) ||
             ((Gesamtsystem_DWork.magacin2_LastCube == 2.0) &&
              (Gesamtsystem_DWork.magacin2 < 5.0))) {
    /* '<S39>:206:9' */
    /* '<S39>:206:10' */
    magacinOut = 2.0;

    /* '<S39>:206:11' */
    Gesamtsystem_DWork.magacin2++;

    /* '<S39>:206:12' */
    Gesamtsystem_DWork.magacin2_LastCube = 1.0;
  } else if ((Gesamtsystem_DWork.magacin1_LastCube == 2.0) &&
             (Gesamtsystem_DWork.magacin1 < 5.0)) {
    /* '<S39>:206:14' */
    /* '<S39>:206:15' */
    magacinOut = 1.0;

    /* '<S39>:206:16' */
    Gesamtsystem_DWork.magacin1++;

    /* '<S39>:206:17' */
    Gesamtsystem_DWork.magacin1_LastCube = 1.0;
  } else if (Gesamtsystem_DWork.magacin3 < 5.0) {
    /* '<S39>:206:19' */
    /* '<S39>:206:20' */
    magacinOut = 3.0;

    /* '<S39>:206:21' */
    Gesamtsystem_DWork.magacin3++;
  } else if (Gesamtsystem_DWork.magacin4 < 5.0) {
    /* '<S39>:206:23' */
    /* '<S39>:206:24' */
    magacinOut = 4.0;

    /* '<S39>:206:25' */
    Gesamtsystem_DWork.magacin4++;
  } else if (Gesamtsystem_DWork.magacin5 < 5.0) {
    /* '<S39>:206:27' */
    /* '<S39>:206:28' */
    magacinOut = 5.0;

    /* '<S39>:206:29' */
    Gesamtsystem_DWork.magacin5++;
  } else if (Gesamtsystem_DWork.magacin6 < 4.0) {
    /* '<S39>:206:31' */
    /* '<S39>:206:32' */
    magacinOut = 6.0;
  } else {
    /* '<S39>:206:35' */
    magacinOut = -1.0;
  }

  return magacinOut;
}

/* Function for Chart: '<S3>/Sortieralgorithmus2' */
static real_T Gesamtsystem_findPlaceForRed(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForRed': '<S39>:204' */
  if ((Gesamtsystem_DWork.magacin1 == 0.0) ||
      ((Gesamtsystem_DWork.magacin1_LastCube == 1.0) &&
       (Gesamtsystem_DWork.magacin1 < 5.0))) {
    /* '<S39>:204:3' */
    /* '<S39>:204:4' */
    magacinOut = 1.0;

    /* '<S39>:204:5' */
    Gesamtsystem_DWork.magacin1++;

    /* '<S39>:204:6' */
    Gesamtsystem_DWork.magacin1_LastCube = 2.0;
  } else if ((Gesamtsystem_DWork.magacin2_LastCube == 1.0) &&
             (Gesamtsystem_DWork.magacin2 < 5.0)) {
    /* '<S39>:204:8' */
    /* '<S39>:204:9' */
    magacinOut = 2.0;

    /* '<S39>:204:10' */
    Gesamtsystem_DWork.magacin2++;

    /* '<S39>:204:11' */
    Gesamtsystem_DWork.magacin2_LastCube = 2.0;
  } else if (Gesamtsystem_DWork.magacin0 != 5.0) {
    /* '<S39>:204:13' */
    /* '<S39>:204:14' */
    magacinOut = 0.0;

    /* '<S39>:204:15' */
    Gesamtsystem_DWork.magacin0++;

    /* '<S39>:204:16' */
  } else if (Gesamtsystem_DWork.magacin6 < 4.0) {
    /* '<S39>:204:18' */
    /* '<S39>:204:19' */
    magacinOut = 6.0;
  } else if (Gesamtsystem_DWork.magacin3 != 5.0) {
    /* '<S39>:204:22' */
    /* '<S39>:204:23' */
    magacinOut = 3.0;

    /* '<S39>:204:24' */
    Gesamtsystem_DWork.magacin3++;

    /* '<S39>:204:25' */
  } else if ((Gesamtsystem_DWork.magacin1 <= Gesamtsystem_DWork.magacin4) &&
             (Gesamtsystem_DWork.magacin1 != 5.0)) {
    /* '<S39>:204:27' */
    /* '<S39>:204:28' */
    magacinOut = 1.0;

    /* '<S39>:204:29' */
    Gesamtsystem_DWork.magacin1++;

    /* '<S39>:204:30' */
    Gesamtsystem_DWork.magacin1_LastCube = 2.0;
  } else if (Gesamtsystem_DWork.magacin1 > Gesamtsystem_DWork.magacin4) {
    /* '<S39>:204:32' */
    /* '<S39>:204:33' */
    magacinOut = 4.0;

    /* '<S39>:204:34' */
    Gesamtsystem_DWork.magacin4++;
  } else if ((Gesamtsystem_DWork.magacin2 <= Gesamtsystem_DWork.magacin5) &&
             (Gesamtsystem_DWork.magacin2 != 5.0)) {
    /* '<S39>:204:37' */
    /* '<S39>:204:38' */
    magacinOut = 2.0;

    /* '<S39>:204:39' */
    Gesamtsystem_DWork.magacin2++;

    /* '<S39>:204:40' */
    Gesamtsystem_DWork.magacin2_LastCube = 2.0;
  } else if (Gesamtsystem_DWork.magacin2 > Gesamtsystem_DWork.magacin5) {
    /* '<S39>:204:42' */
    /* '<S39>:204:44' */
    magacinOut = 5.0;

    /* '<S39>:204:45' */
    Gesamtsystem_DWork.magacin5++;

    /* '<S39>:204:46' */
  } else {
    /* '<S39>:204:49' */
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

  /* S-Function (c280xadc): '<S3>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
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

  /* RateTransition: '<S3>/Rate Transition3' */
  if (Gesamtsystem_M->Timing.RateInteraction.TID0_1) {
    Gesamtsystem_B.RateTransition3 =
      Gesamtsystem_B.AnalogDigitalWandlungSampleti_e;
  }

  /* End of RateTransition: '<S3>/Rate Transition3' */

  /* RelationalOperator: '<S45>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S45>/Constant'
   */
  rtb_VergleichmitSchwellwert = (Gesamtsystem_P.Constant_Value <=
    Gesamtsystem_B.AnalogDigitalWandlungSampleti_a);

  /* MultiPortSwitch: '<S46>/Multiport Switch' incorporates:
   *  Constant: '<S46>/Constant1'
   *  Constant: '<S46>/either edge'
   *  Constant: '<S46>/neg. edge'
   *  Constant: '<S46>/pos. edge'
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

  /* End of MultiPortSwitch: '<S46>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S46>/POSITIVE Edge' */
  /* Memory: '<S46>/Memory' */
  Gesamtsystem_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert, Gesamtsystem_DWork.Memory_PreviousInput,
    &Gesamtsystem_B.POSITIVEEdge);

  /* End of Outputs for SubSystem: '<S46>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S46>/NEGATIVE Edge' */
  Gesamtsystem_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert, Gesamtsystem_DWork.Memory_PreviousInput,
    &Gesamtsystem_B.NEGATIVEEdge);

  /* End of Outputs for SubSystem: '<S46>/NEGATIVE Edge' */

  /* RelationalOperator: '<S45>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S45>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert_b =
    (Gesamtsystem_B.AnalogDigitalWandlungSampletime <=
     Gesamtsystem_P.HeuristischermittelterSchwellwe);

  /* MATLAB Function: '<S45>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S45>/Unit Delay3'
   *  UnitDelay: '<S45>/Unit Delay4'
   *  UnitDelay: '<S45>/Unit Delay5'
   */
  /* MATLAB Function 'Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2': '<S49>:1' */
  /* '<S49>:1:3' */
  y = 1.0;
  tmp_0 = !Gesamtsystem_DWork.UnitDelay3_DSTATE;
  tmp_1 = !Gesamtsystem_DWork.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S49>:1:7' */
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_b) {
    /* '<S49>:1:10' */
    /* '<S49>:1:11' */
    y = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_b)) {
    /* '<S49>:1:14' */
    /* '<S49>:1:15' */
    y = -1.0;
  }

  tmp_0 = (tmp_0 && Gesamtsystem_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S49>:1:22' */
    /* '<S49>:1:23' */
    y = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_b)
  {
    /* '<S49>:1:26' */
    /* '<S49>:1:27' */
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_b) {
    /* '<S49>:1:34' */
    /* '<S49>:1:35' */
    y = 1.0;
  }

  tmp_0 = (Gesamtsystem_DWork.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S49>:1:38' */
    /* '<S49>:1:39' */
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S49>:1:46' */
    /* '<S49>:1:47' */
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_b) {
    /* '<S49>:1:50' */
    /* '<S49>:1:51' */
    y = -1.0;
  }

  tmp_0 = (Gesamtsystem_DWork.UnitDelay3_DSTATE &&
           Gesamtsystem_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_b)
  {
    /* '<S49>:1:58' */
    /* '<S49>:1:59' */
    y = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_b))
  {
    /* '<S49>:1:62' */
    /* '<S49>:1:63' */
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_b) {
    /* '<S49>:1:66' */
    /* '<S49>:1:67' */
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (y == 1.0) {
    /* '<S49>:1:70' */
    /* '<S49>:1:71' */
    Gesamtsystem_B.RL = 1.0;
  } else {
    /* '<S49>:1:73' */
    Gesamtsystem_B.RL = 0.0;
  }

  /* MATLAB Function: '<S45>/MATLAB Function1' incorporates:
   *  Logic: '<S46>/Logical Operator1'
   *  MATLAB Function: '<S45>/MATLAB Function2'
   *  Product: '<S45>/Product3'
   *  UnitDelay: '<S45>/Unit Delay1'
   */
  Gesamtsyste_MATLABFunction1((real_T)
    (Gesamtsystem_B.POSITIVEEdge.RelationalOperator1 ||
     Gesamtsystem_B.NEGATIVEEdge.RelationalOperator1) * y,
    Gesamtsystem_DWork.UnitDelay1_DSTATE, &Gesamtsystem_B.sf_MATLABFunction1);

  /* Product: '<S45>/Product1' incorporates:
   *  Constant: '<S45>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  rtb_Sum = Gesamtsystem_P.WinkelFlankePolulo3416V022Polul *
    Gesamtsystem_B.sf_MATLABFunction1.y;

  /* MultiPortSwitch: '<S47>/Multiport Switch' incorporates:
   *  Constant: '<S47>/Constant1'
   *  Constant: '<S47>/either edge'
   *  Constant: '<S47>/neg. edge'
   *  Constant: '<S47>/pos. edge'
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

  /* End of MultiPortSwitch: '<S47>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S47>/POSITIVE Edge' */
  /* Memory: '<S47>/Memory' */
  Gesamtsystem_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_b, Gesamtsystem_DWork.Memory_PreviousInput_k,
    &Gesamtsystem_B.POSITIVEEdge_m);

  /* End of Outputs for SubSystem: '<S47>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S47>/NEGATIVE Edge' */
  Gesamtsystem_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_b, Gesamtsystem_DWork.Memory_PreviousInput_k,
    &Gesamtsystem_B.NEGATIVEEdge_n);

  /* End of Outputs for SubSystem: '<S47>/NEGATIVE Edge' */

  /* MATLAB Function: '<S45>/MATLAB Function3' incorporates:
   *  Logic: '<S47>/Logical Operator1'
   *  MATLAB Function: '<S45>/MATLAB Function2'
   *  Product: '<S45>/Product'
   *  UnitDelay: '<S45>/Unit Delay2'
   */
  Gesamtsyste_MATLABFunction1(y * (real_T)
    (Gesamtsystem_B.POSITIVEEdge_m.RelationalOperator1 ||
     Gesamtsystem_B.NEGATIVEEdge_n.RelationalOperator1),
    Gesamtsystem_DWork.UnitDelay2_DSTATE_a, &Gesamtsystem_B.sf_MATLABFunction3);

  /* Sum: '<S45>/Sum' incorporates:
   *  Constant: '<S45>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S45>/Product2'
   */
  rtb_Sum += Gesamtsystem_B.sf_MATLABFunction3.y *
    Gesamtsystem_P.WinkelFlankePolulo3416V022Pol_l;

  /* RateTransition: '<S41>/Rate Transition3' */
  if (Gesamtsystem_M->Timing.RateInteraction.TID0_1) {
    Gesamtsystem_B.RateTransition3_o = rtb_Sum;
  }

  /* End of RateTransition: '<S41>/Rate Transition3' */

  /* S-Function (c280xgpio_do): '<S41>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (Gesamtsystem_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Update for Memory: '<S46>/Memory' */
  Gesamtsystem_DWork.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S45>/Unit Delay3' */
  Gesamtsystem_DWork.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S45>/Unit Delay4' */
  Gesamtsystem_DWork.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert_b;

  /* Update for UnitDelay: '<S45>/Unit Delay5' incorporates:
   *  MATLAB Function: '<S45>/MATLAB Function2'
   */
  Gesamtsystem_DWork.UnitDelay5_DSTATE = y;

  /* Update for UnitDelay: '<S45>/Unit Delay1' */
  Gesamtsystem_DWork.UnitDelay1_DSTATE = Gesamtsystem_B.sf_MATLABFunction1.y;

  /* Update for Memory: '<S47>/Memory' */
  Gesamtsystem_DWork.Memory_PreviousInput_k = rtb_VergleichmitSchwellwert_b;

  /* Update for UnitDelay: '<S45>/Unit Delay2' */
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
  uint16_T rtb_IntegertoBitConverter8[8];
  uint16_T rtb_IntegertoBitConverter7[8];
  uint16_T rtb_IntegertoBitConverter6[8];
  uint16_T rtb_IntegertoBitConverter5[8];
  uint16_T rtb_IntegertoBitConverter4[8];
  uint16_T rtb_IntegertoBitConverter1[8];
  uint16_T rtb_IntegertoBitConverter3[8];
  uint16_T rtb_IntegertoBitConverter2[8];
  real_T rtb_RoundingFunction2;
  real_T rtb_RoundingFunction1;
  real_T rtb_RoundingFunction;
  ZCEventType zcEvent;
  int16_T i;
  real_T x_Wagen_tmp;

  /* Delay: '<S4>/Verzoegern, bis Shutdown ausgefuehrt ist (Abtastzeit: 0.01s)' */
  Gesamtsystem_B.y = Gesamtsystem_DWork.VerzoegernbisShutdownausgefuehr[0];

  /* S-Function (c280xgpio_do): '<S4>/Signalaussgang fuer Endsignallampe' */
  {
    if (Gesamtsystem_B.y)
      GpioDataRegs.GPBSET.bit.GPIO58 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO58 = 1;
  }

  /* S-Function (c280xgpio_di): '<S2>/Uebergabeschalter' */
  {
    Gesamtsystem_B.Uebergabeschalter = GpioDataRegs.GPADAT.bit.GPIO24;
  }

  /* Chart: '<S2>/Motorsteuerung bei der Uebergabe' */
  if (Gesamtsystem_DWork.temporalCounter_i1 < 1023U) {
    Gesamtsystem_DWork.temporalCounter_i1++;
  }

  /* Gateway: Nexonar-System/Motorsteuerung bei der
     Uebergabe */
  /* During: Nexonar-System/Motorsteuerung bei der
     Uebergabe */
  if (Gesamtsystem_DWork.is_active_c9_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Motorsteuerung bei der
       Uebergabe */
    Gesamtsystem_DWork.is_active_c9_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Motorsteuerung bei der
       Uebergabe */
    /* Transition: '<S12>:1405' */
    Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_Start;
  } else {
    switch (Gesamtsystem_DWork.is_c9_Gesamtsystem) {
     case Gesamtsystem_IN_Start:
      /* During 'Start': '<S12>:1404' */
      if (Gesamtsystem_B.Uebergabeschalter) {
        /* Transition: '<S12>:1411' */
        Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_Warten1;
        Gesamtsystem_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Warten1': '<S12>:1410' */
        Gesamtsystem_B.Value = 1.0;
      }
      break;

     case Gesamtsystem_IN_Stehen:
      Gesamtsystem_B.Value = 0.0;

      /* During 'Stehen': '<S12>:1406' */
      if (Gesamtsystem_DWork.temporalCounter_i1 >= 1000U) {
        /* Transition: '<S12>:1409' */
        Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_Weiter;

        /* Entry 'Weiter': '<S12>:1408' */
        Gesamtsystem_B.Value = 1.0;
      }
      break;

     case Gesamtsystem_IN_Warten1:
      Gesamtsystem_B.Value = 1.0;

      /* During 'Warten1': '<S12>:1410' */
      if (Gesamtsystem_B.Uebergabeschalter &&
          (Gesamtsystem_DWork.temporalCounter_i1 >= 1000U)) {
        /* Transition: '<S12>:1407' */
        Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_Stehen;
        Gesamtsystem_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Stehen': '<S12>:1406' */
        Gesamtsystem_B.Value = 0.0;
      }
      break;

     default:
      Gesamtsystem_B.Value = 1.0;

      /* During 'Weiter': '<S12>:1408' */
      break;
    }
  }

  /* End of Chart: '<S2>/Motorsteuerung bei der Uebergabe' */

  /* RateTransition: '<S14>/Rate Transition' */
  Gesamtsystem_DWork.RateTransition_semaphoreTaken =
    Gesamtsystem_DWork.RateTransition_ActiveBufIdx;
  j = Gesamtsystem_DWork.RateTransition_semaphoreTaken * 20;
  for (i = 0; i < 20; i++) {
    Gesamtsystem_B.RateTransition[i] =
      Gesamtsystem_DWork.RateTransition_Buffer[i + j];
  }

  /* End of RateTransition: '<S14>/Rate Transition' */

  /* Chart: '<S14>/Chart8' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart8 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart8 */
  if (Gesamtsystem_DWork.is_active_c17_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart8 */
    Gesamtsystem_DWork.is_active_c17_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart8 */
    /* Transition: '<S28>:3' */
    Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_init;

    /* Entry 'init': '<S28>:2' */
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
      /* During 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S28>:126' */
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
        /* Transition: '<S28>:144' */
        /* Transition: '<S28>:145' */
        /* Transition: '<S28>:146' */
        /* Transition: '<S28>:151' */
        /* Transition: '<S28>:150' */
        /* Transition: '<S28>:149' */
        /* Transition: '<S28>:147' */
        /* Transition: '<S28>:156' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamts_IN_x5_valid_data_found1;

        /* Entry 'x5_valid_data_found1': '<S28>:148' */
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
        /* Transition: '<S28>:135' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_x1_search1;

        /* Entry 'x1_search1': '<S28>:125' */
        Gesamtsystem_DWork.search = c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1);
      }
      break;

     case Gesamtsystem_IN_init:
      /* During 'init': '<S28>:2' */
      /* Transition: '<S28>:112' */
      Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_wert_erkannt;
      Gesam_enter_atomic_wert_erkannt();
      break;

     case Gesamtsystem_IN_wert_erkannt:
      /* During 'wert_erkannt': '<S28>:109' */
      /* Transition: '<S28>:116' */
      Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_wert_erkannt2;

      /* Entry 'wert_erkannt2': '<S28>:115' */
      Gesamtsystem_DWork.search = 0;
      Gesamtsystem_DWork.counter = c28x_add_s32_s32_s32_sat
        (Gesamtsystem_DWork.counter, 1L);
      break;

     case Gesamtsystem_IN_wert_erkannt2:
      /* During 'wert_erkannt2': '<S28>:115' */
      if (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search] == 88) {
        /* Transition: '<S28>:127' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S28>:126' */
        Gesamtsystem_DWork.x_found = c28x_add_s32_s32_s32_sat
          (Gesamtsystem_DWork.x_found, 1L);
      } else {
        /* Transition: '<S28>:128' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_x1_search1;

        /* Entry 'x1_search1': '<S28>:125' */
        Gesamtsystem_DWork.search = c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1);
      }
      break;

     case Gesamtsystem_IN_x1_search1:
      /* During 'x1_search1': '<S28>:125' */
      if (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search] == 88) {
        /* Transition: '<S28>:129' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S28>:126' */
        Gesamtsystem_DWork.x_found = c28x_add_s32_s32_s32_sat
          (Gesamtsystem_DWork.x_found, 1L);
      } else if (Gesamtsystem_DWork.search < 19) {
        /* Transition: '<S28>:130' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_x1_search1;

        /* Entry 'x1_search1': '<S28>:125' */
        Gesamtsystem_DWork.search = c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1);
      } else {
        /* Transition: '<S28>:133' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_wert_erkannt;
        Gesam_enter_atomic_wert_erkannt();
      }
      break;

     default:
      /* During 'x5_valid_data_found1': '<S28>:148' */
      /* Transition: '<S28>:152' */
      Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_wert_erkannt;
      Gesam_enter_atomic_wert_erkannt();
      break;
    }
  }

  /* End of Chart: '<S14>/Chart8' */

  /* S-Function (scominttobit): '<S14>/Integer to Bit Converter2' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values1;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter2[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S14>/Integer to Bit Converter2' */

  /* S-Function (scominttobit): '<S14>/Integer to Bit Converter3' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values2;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter3[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S14>/Integer to Bit Converter3' */

  /* Chart: '<S14>/Chart6' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart6 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart6 */
  if (Gesamtsystem_DWork.is_active_c16_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart6 */
    Gesamtsystem_DWork.is_active_c16_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart6 */
    /* Transition: '<S27>:3' */
    Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c16_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S27>:17' */
      /* Transition: '<S27>:24' */
      Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S27>:26' */
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
      /* During 'x0': '<S27>:2' */
      /* Transition: '<S27>:7' */
      Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S27>:26' */
      /* Transition: '<S27>:25' */
      Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S14>/Chart6' */

  /* S-Function (scominttobit): '<S14>/Bit to Integer Converter' */
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

  /* Gain: '<S14>/x in mm' incorporates:
   *  S-Function (scominttobit): '<S14>/Bit to Integer Converter'
   */
  rtb_DeadZone = (real_T)Gesamtsystem_P.xinmm_Gain * (real32_T)intVal;

  /* Rounding: '<S14>/Rounding Function' */
  rtb_RoundingFunction = rt_roundd_snf(rtb_DeadZone);

  /* S-Function (scominttobit): '<S14>/Integer to Bit Converter1' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values3;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter1[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S14>/Integer to Bit Converter1' */

  /* S-Function (scominttobit): '<S14>/Integer to Bit Converter4' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values4;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter4[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S14>/Integer to Bit Converter4' */

  /* Chart: '<S14>/Chart2' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart2 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart2 */
  if (Gesamtsystem_DWork.is_active_c13_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart2 */
    Gesamtsystem_DWork.is_active_c13_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart2 */
    /* Transition: '<S25>:3' */
    Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c13_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S25>:17' */
      /* Transition: '<S25>:24' */
      Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S25>:26' */
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
      /* During 'x0': '<S25>:2' */
      /* Transition: '<S25>:7' */
      Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S25>:26' */
      /* Transition: '<S25>:25' */
      Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S14>/Chart2' */

  /* S-Function (scominttobit): '<S14>/Bit to Integer Converter1' */
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

  /* Gain: '<S14>/y in mm' incorporates:
   *  S-Function (scominttobit): '<S14>/Bit to Integer Converter1'
   */
  rtb_DeadZone = (real_T)Gesamtsystem_P.yinmm_Gain * (real32_T)intVal;

  /* Rounding: '<S14>/Rounding Function1' */
  rtb_RoundingFunction1 = rt_roundd_snf(rtb_DeadZone);

  /* S-Function (scominttobit): '<S14>/Integer to Bit Converter5' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values5;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter5[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S14>/Integer to Bit Converter5' */

  /* S-Function (scominttobit): '<S14>/Integer to Bit Converter6' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values6;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter6[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S14>/Integer to Bit Converter6' */

  /* Chart: '<S14>/Chart4' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart4 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart4 */
  if (Gesamtsystem_DWork.is_active_c14_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart4 */
    Gesamtsystem_DWork.is_active_c14_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart4 */
    /* Transition: '<S26>:3' */
    Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c14_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S26>:17' */
      /* Transition: '<S26>:24' */
      Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S26>:26' */
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
      /* During 'x0': '<S26>:2' */
      /* Transition: '<S26>:7' */
      Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S26>:26' */
      /* Transition: '<S26>:25' */
      Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S14>/Chart4' */

  /* S-Function (scominttobit): '<S14>/Bit to Integer Converter2' */
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

  /* Gain: '<S14>/alpha in °' incorporates:
   *  S-Function (scominttobit): '<S14>/Bit to Integer Converter2'
   */
  rtb_DeadZone = (real_T)Gesamtsystem_P.alphain_Gain * (real32_T)intVal;

  /* Rounding: '<S14>/Rounding Function2' */
  rtb_RoundingFunction2 = rt_roundd_snf(rtb_DeadZone);

  /* MATLAB Function: '<S2>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  /* MATLAB Function 'Nexonar-System/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)': '<S10>:1' */
  /* '<S10>:1:3' */
  /* '<S10>:1:4' */
  /* '<S10>:1:5' */
  /* '<S10>:1:8' */
  /* '<S10>:1:9' */
  x_Wagen_tmp = ((rtb_RoundingFunction2 - 15.0) + 30.0) * 2.0 *
    3.1415926535897931 / 360.0;
  Gesamtsystem_B.x_Wagen = rtb_RoundingFunction - rt_roundd_snf(cos(x_Wagen_tmp)
    * 2.5);

  /* '<S10>:1:10' */
  Gesamtsystem_B.y_Wagen = rtb_RoundingFunction1 - rt_roundd_snf(sin(x_Wagen_tmp)
    * 2.5);

  /* Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  if (Gesamtsystem_DWork.temporalCounter_i1_m < 1023U) {
    Gesamtsystem_DWork.temporalCounter_i1_m++;
  }

  /* Gateway: Nexonar-System/Fahrablaufsteuerung
     [Init: Zielradius = 10mm]
     Gang = 0: vorwaerts
     Gang = 1: rueckwaerts
     Folgende Werte fuer den Ablauf
     sind einstellbar:
     - Zielkoordinatenwerte
     - Gangwert */
  /* During: Nexonar-System/Fahrablaufsteuerung
     [Init: Zielradius = 10mm]
     Gang = 0: vorwaerts
     Gang = 1: rueckwaerts
     Folgende Werte fuer den Ablauf
     sind einstellbar:
     - Zielkoordinatenwerte
     - Gangwert */
  if (Gesamtsystem_DWork.is_active_c5_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Fahrablaufsteuerung
       [Init: Zielradius = 10mm]
       Gang = 0: vorwaerts
       Gang = 1: rueckwaerts
       Folgende Werte fuer den Ablauf
       sind einstellbar:
       - Zielkoordinatenwerte
       - Gangwert */
    Gesamtsystem_DWork.is_active_c5_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Fahrablaufsteuerung
       [Init: Zielradius = 10mm]
       Gang = 0: vorwaerts
       Gang = 1: rueckwaerts
       Folgende Werte fuer den Ablauf
       sind einstellbar:
       - Zielkoordinatenwerte
       - Gangwert */
    /* Transition: '<S9>:45' */
    Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesam_IN_Start_Einstellung_Init;

    /* Entry 'Start_Einstellung_Init': '<S9>:44' */
    Gesamtsystem_B.Zielradius = 10.0;
  } else {
    switch (Gesamtsystem_DWork.is_c5_Gesamtsystem) {
     case Gesamtsystem_IN_Ende:
      /* During 'Ende': '<S9>:132' */
      break;

     case Gesamtsystem_IN_Parken:
      /* During 'Parken': '<S9>:1258' */
      if (Gesamtsystem_DWork.Counter == 3.0) {
        /* Transition: '<S9>:795' */
        /* Exit Internal 'Parken': '<S9>:1258' */
        Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_NO_ACTIVE_CHILD;
        Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Ende;
      } else {
        switch (Gesamtsystem_DWork.is_Parken) {
         case Gesamtsystem_IN_Parken_1:
          /* During 'Parken_1': '<S9>:1265' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S9>:1260' */
            Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S9>:1266' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Parken_2:
          /* During 'Parken_2': '<S9>:1267' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S9>:1262' */
            Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S9>:1268' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Parken_3:
          /* During 'Parken_3': '<S9>:1269' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S9>:1264' */
            Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Wechsel_3;

            /* Entry 'Wechsel_3': '<S9>:1270' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S9>:1266' */
          /* Transition: '<S9>:1261' */
          Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Parken_2;

          /* Entry 'Parken_2': '<S9>:1267' */
          Gesamtsystem_B.x_soll = 1620.0;
          Gesamtsystem_B.y_soll = -135.0;
          Gesamtsystem_B.alpha_soll = -1.0;
          break;

         case Gesamtsystem_IN_Wechsel_2:
          /* During 'Wechsel_2': '<S9>:1268' */
          /* Transition: '<S9>:1263' */
          Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Parken_3;

          /* Entry 'Parken_3': '<S9>:1269' */
          Gesamtsystem_B.x_soll = 1640.0;
          Gesamtsystem_B.y_soll = -131.0;
          Gesamtsystem_B.alpha_soll = -1.0;
          break;

         default:
          /* During 'Wechsel_3': '<S9>:1270' */
          break;
        }
      }
      break;

     case Gesamtsystem_IN_Sammeln:
      Gesamtsystem_Sammeln();
      break;

     case Gesam_IN_Start_Einstellung_Init:
      Gesamtsystem_B.Zielradius = 10.0;

      /* During 'Start_Einstellung_Init': '<S9>:44' */
      /* Transition: '<S9>:244' */
      Gesamtsystem_B.Gang = 0.0;
      Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Sammeln;

      /* Entry Internal 'Sammeln': '<S9>:1343' */
      /* Transition: '<S9>:1344' */
      Gesamtsystem_DWork.Counter = 0.0;
      Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_1;

      /* Entry 'Anfahrpunkt_1': '<S9>:1373' */
      Gesamtsystem_B.x_soll = 1500.0;
      Gesamtsystem_B.y_soll = 0.0;
      Gesamtsystem_B.alpha_soll = -1.0;
      break;

     default:
      /* During 'Uebergabe': '<S9>:1330' */
      if (Gesamtsystem_DWork.Counter == 2.0) {
        /* Transition: '<S9>:1341' */
        Gesamtsystem_B.Gang = 0.0;

        /* Exit Internal 'Uebergabe': '<S9>:1330' */
        Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_NO_ACTIVE_CHILD;
        Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Parken;

        /* Entry Internal 'Parken': '<S9>:1258' */
        /* Transition: '<S9>:1259' */
        Gesamtsystem_DWork.Counter = 0.0;
        Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Parken_1;

        /* Entry 'Parken_1': '<S9>:1265' */
        Gesamtsystem_B.x_soll = 1420.0;
        Gesamtsystem_B.y_soll = -50.0;
        Gesamtsystem_B.alpha_soll = -1.0;
      } else {
        switch (Gesamtsystem_DWork.is_Uebergabe) {
         case Ge_IN_Uebergabepunkt_x_Richtung:
          /* During 'Uebergabepunkt_x_Richtung': '<S9>:1336' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S9>:1332' */
            Gesamtsystem_DWork.x_least = Gesamtsystem_B.x_soll;
            Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S9>:1337' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Ge_IN_Uebergabepunkt_y_Richtung:
          /* During 'Uebergabepunkt_y_Richtung': '<S9>:1338' */
          if (Gesamtsystem_B.Uebergabeschalter || ((fabs(Gesamtsystem_B.x_soll -
                 Gesamtsystem_B.x_Wagen) <= Gesamtsystem_B.Zielradius) && (fabs
                (Gesamtsystem_B.y_soll - Gesamtsystem_B.y_Wagen) <=
                Gesamtsystem_B.Zielradius))) {
            /* Transition: '<S9>:1401' */
            /* Transition: '<S9>:1334' */
            Gesamtsystem_DWork.is_Uebergabe = Gesamtsyste_IN_Warten_Uebergabe;
            Gesamtsystem_DWork.temporalCounter_i1_m = 0U;
          }
          break;

         case Gesamtsyste_IN_Warten_Uebergabe:
          /* During 'Warten_Uebergabe': '<S9>:1339' */
          if (Gesamtsystem_DWork.temporalCounter_i1_m >= 1000U) {
            /* Transition: '<S9>:1335' */
            Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S9>:1340' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S9>:1337' */
          /* Transition: '<S9>:1333' */
          Gesamtsystem_DWork.is_Uebergabe = Ge_IN_Uebergabepunkt_y_Richtung;

          /* Entry 'Uebergabepunkt_y_Richtung': '<S9>:1338' */
          Gesamtsystem_B.x_soll = Gesamtsystem_DWork.x_least;
          Gesamtsystem_B.y_soll = 50.0;
          Gesamtsystem_B.alpha_soll = 80.0;
          break;

         default:
          /* During 'Wechsel_2': '<S9>:1340' */
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */

  /* Outputs for Atomic SubSystem: '<S2>/Navigationssystem [Einstellungen moeglich]' */
  /* Sum: '<S17>/Soll-Ist-Abgleich_x' */
  rtb_RoundingFunction1 = Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen;

  /* Sum: '<S17>/Soll-Ist-Abgleich_y' */
  rtb_RoundingFunction = Gesamtsystem_B.y_soll - Gesamtsystem_B.y_Wagen;

  /* Chart: '<S18>/Quadrantenteiler' */
  /* Gateway: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
  /* During: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
  if (Gesamtsystem_DWork.is_active_c11_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
    Gesamtsystem_DWork.is_active_c11_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
    /* Transition: '<S22>:28' */
    Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Start_Warten_ba;
  } else {
    switch (Gesamtsystem_DWork.is_c11_Gesamtsystem) {
     case Gesamtsystem_IN_Quadrant_a:
      Gesamtsystem_B.Quadrant = 0.0;

      /* During 'Quadrant_a': '<S22>:8' */
      /* Transition: '<S22>:36' */
      /* Transition: '<S22>:40' */
      if ((Gesamtsystem_B.alpha_soll != -1.0) || ((rtb_RoundingFunction1 >= 0.0)
           && (rtb_RoundingFunction >= 0.0))) {
        /* Transition: '<S22>:44' */
        /* Transition: '<S22>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S22>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S22>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S22>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S22>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S22>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S22>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S22>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     case Gesamtsystem_IN_Quadrant_b:
      Gesamtsystem_B.Quadrant = 1.0;

      /* During 'Quadrant_b': '<S22>:9' */
      /* Transition: '<S22>:37' */
      /* Transition: '<S22>:40' */
      if ((Gesamtsystem_B.alpha_soll != -1.0) || ((rtb_RoundingFunction1 >= 0.0)
           && (rtb_RoundingFunction >= 0.0))) {
        /* Transition: '<S22>:44' */
        /* Transition: '<S22>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S22>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S22>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S22>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S22>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S22>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S22>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S22>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     case Gesamtsystem_IN_Quadrant_c:
      Gesamtsystem_B.Quadrant = 2.0;

      /* During 'Quadrant_c': '<S22>:11' */
      /* Transition: '<S22>:38' */
      /* Transition: '<S22>:40' */
      if ((Gesamtsystem_B.alpha_soll != -1.0) || ((rtb_RoundingFunction1 >= 0.0)
           && (rtb_RoundingFunction >= 0.0))) {
        /* Transition: '<S22>:44' */
        /* Transition: '<S22>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S22>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S22>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S22>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S22>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S22>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S22>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S22>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     case Gesamtsystem_IN_Quadrant_d:
      Gesamtsystem_B.Quadrant = 3.0;

      /* During 'Quadrant_d': '<S22>:12' */
      /* Transition: '<S22>:39' */
      /* Transition: '<S22>:40' */
      if ((Gesamtsystem_B.alpha_soll != -1.0) || ((rtb_RoundingFunction1 >= 0.0)
           && (rtb_RoundingFunction >= 0.0))) {
        /* Transition: '<S22>:44' */
        /* Transition: '<S22>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S22>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S22>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S22>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S22>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S22>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S22>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S22>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     default:
      /* During 'Start_Warten': '<S22>:41' */
      /* Transition: '<S22>:42' */
      if ((Gesamtsystem_B.alpha_soll != -1.0) || ((rtb_RoundingFunction1 >= 0.0)
           && (rtb_RoundingFunction >= 0.0))) {
        /* Transition: '<S22>:44' */
        /* Transition: '<S22>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S22>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S22>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S22>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S22>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S22>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S22>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S22>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;
    }
  }

  /* End of Chart: '<S18>/Quadrantenteiler' */

  /* Chart: '<S18>/Winkelausgabe fuer Ausrichtung' incorporates:
   *  MATLAB Function: '<S2>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)'
   */
  /* Gateway: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
  /* During: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
  if (Gesamtsystem_DWork.is_active_c12_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
    Gesamtsystem_DWork.is_active_c12_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
    /* Transition: '<S23>:81' */
    Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsystem_IN_Start_Warten;
  } else {
    switch (Gesamtsystem_DWork.is_c12_Gesamtsystem) {
     case Gesamtsy_IN_Ausrichtung_gegeben:
      /* During 'Ausrichtung_gegeben': '<S23>:85' */
      /* Transition: '<S23>:87' */
      /* Transition: '<S23>:70' */
      if (Gesamtsystem_B.alpha_soll != -1.0) {
        /* Transition: '<S23>:86' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsy_IN_Ausrichtung_gegeben;

        /* Entry 'Ausrichtung_gegeben': '<S23>:85' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_soll;
      } else if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0))
      {
        /* Transition: '<S23>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S23>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S23>:76' */
        /* Transition: '<S23>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S23>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S23>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S23>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     case G_IN_Ausrichtung_ohne_Aenderung:
      /* During 'Ausrichtung_ohne_Aenderung': '<S23>:52' */
      /* Transition: '<S23>:66' */
      /* Transition: '<S23>:70' */
      if (Gesamtsystem_B.alpha_soll != -1.0) {
        /* Transition: '<S23>:86' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsy_IN_Ausrichtung_gegeben;

        /* Entry 'Ausrichtung_gegeben': '<S23>:85' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_soll;
      } else if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0))
      {
        /* Transition: '<S23>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S23>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S23>:76' */
        /* Transition: '<S23>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S23>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S23>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S23>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     case Gesamtsystem_IN_Start_Warten:
      /* During 'Start_Warten': '<S23>:82' */
      /* Transition: '<S23>:83' */
      if (Gesamtsystem_B.alpha_soll != -1.0) {
        /* Transition: '<S23>:86' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsy_IN_Ausrichtung_gegeben;

        /* Entry 'Ausrichtung_gegeben': '<S23>:85' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_soll;
      } else if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0))
      {
        /* Transition: '<S23>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S23>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S23>:76' */
        /* Transition: '<S23>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S23>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S23>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S23>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     case IN_Trigonometrische_Auswertung_:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S23>:24' */
      /* Transition: '<S23>:68' */
      /* Transition: '<S23>:70' */
      if (Gesamtsystem_B.alpha_soll != -1.0) {
        /* Transition: '<S23>:86' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsy_IN_Ausrichtung_gegeben;

        /* Entry 'Ausrichtung_gegeben': '<S23>:85' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_soll;
      } else if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0))
      {
        /* Transition: '<S23>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S23>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S23>:76' */
        /* Transition: '<S23>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S23>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S23>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S23>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     default:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S23>:71' */
      /* Transition: '<S23>:73' */
      /* Transition: '<S23>:70' */
      if (Gesamtsystem_B.alpha_soll != -1.0) {
        /* Transition: '<S23>:86' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsy_IN_Ausrichtung_gegeben;

        /* Entry 'Ausrichtung_gegeben': '<S23>:85' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_soll;
      } else if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0))
      {
        /* Transition: '<S23>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S23>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S23>:76' */
        /* Transition: '<S23>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S23>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S23>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S23>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;
    }
  }

  /* End of Chart: '<S18>/Winkelausgabe fuer Ausrichtung' */

  /* Sum: '<S18>/Winkeldifferenz' incorporates:
   *  Gain: '<S18>/Quadranten- verschiebung'
   *  MATLAB Function: '<S2>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)'
   *  Sum: '<S18>/Winkelverschiebung'
   */
  Gesamtsystem_B.Winkeldifferenz = (Gesamtsystem_P.Quadrantenverschiebung_Gain *
    Gesamtsystem_B.Quadrant + Gesamtsystem_B.alpha_neu) - (rtb_RoundingFunction2
    - 15.0);

  /* Chart: '<S13>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
  /* Gateway: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Drehweg-Optimierung
     mit Gang-Ausrichtung
     [Init: Stillstandintervall = ±15°] */
  /* During: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Drehweg-Optimierung
     mit Gang-Ausrichtung
     [Init: Stillstandintervall = ±15°] */
  if (Gesamtsystem_DWork.is_active_c8_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Drehweg-Optimierung
       mit Gang-Ausrichtung
       [Init: Stillstandintervall = ±15°] */
    Gesamtsystem_DWork.is_active_c8_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Drehweg-Optimierung
       mit Gang-Ausrichtung
       [Init: Stillstandintervall = ±15°] */
    /* Transition: '<S15>:38' */
    Gesamtsystem_DWork.is_c8_Gesamtsystem = Gesamtsyste_IN_Einstellung_Init;

    /* Entry 'Einstellung_Init': '<S15>:44' */
    Gesamtsystem_DWork.Stillstandintervall = 15.0;
    Gesamtsystem_B.pwm_mindern[0] = 0.0;
    Gesamtsystem_B.pwm_mindern[1] = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c8_Gesamtsystem) {
     case IN_Drehstillstand_mit_Ausrichtu:
      /* During 'Drehstillstand_mit_Ausrichtungsregelung': '<S15>:26' */
      /* Transition: '<S15>:96' */
      /* Transition: '<S15>:98' */
      /* Transition: '<S15>:65' */
      Gesamtsystem_DWork.alpha_diff_intern = 180.0 * Gesamtsystem_B.Gang +
        Gesamtsystem_B.Winkeldifferenz;
      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S15>:9' */
        if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S15>:15' */
          Gesamtsystem_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S15>:18' */
          Gesamtsystem_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S15>:69' */
      }

      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) <=
          Gesamtsystem_DWork.Stillstandintervall) {
        /* Transition: '<S15>:27' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S15>:94' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S15>:11' */
        Gesamtsystem_B.alpha_diff_opt = Gesamtsystem_DWork.alpha_diff_intern;
      }
      break;

     case Gesamtsyste_IN_Einstellung_Init:
      /* During 'Einstellung_Init': '<S15>:44' */
      /* Transition: '<S15>:46' */
      /* Transition: '<S15>:65' */
      Gesamtsystem_DWork.alpha_diff_intern = 180.0 * Gesamtsystem_B.Gang +
        Gesamtsystem_B.Winkeldifferenz;
      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S15>:9' */
        if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S15>:15' */
          Gesamtsystem_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S15>:18' */
          Gesamtsystem_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S15>:69' */
      }

      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) <=
          Gesamtsystem_DWork.Stillstandintervall) {
        /* Transition: '<S15>:27' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S15>:94' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S15>:11' */
        Gesamtsystem_B.alpha_diff_opt = Gesamtsystem_DWork.alpha_diff_intern;
      }
      break;

     default:
      /* During 'Weiterleitung_bei_Drehzustand': '<S15>:11' */
      /* Transition: '<S15>:97' */
      /* Transition: '<S15>:98' */
      /* Transition: '<S15>:65' */
      Gesamtsystem_DWork.alpha_diff_intern = 180.0 * Gesamtsystem_B.Gang +
        Gesamtsystem_B.Winkeldifferenz;
      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S15>:9' */
        if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S15>:15' */
          Gesamtsystem_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S15>:18' */
          Gesamtsystem_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S15>:69' */
      }

      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) <=
          Gesamtsystem_DWork.Stillstandintervall) {
        /* Transition: '<S15>:27' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S15>:94' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S15>:11' */
        Gesamtsystem_B.alpha_diff_opt = Gesamtsystem_DWork.alpha_diff_intern;
      }
      break;
    }
  }

  /* End of Chart: '<S13>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */

  /* Abs: '<S17>/Abs x_diff' */
  rtb_RoundingFunction2 = fabs(rtb_RoundingFunction1);

  /* MATLAB Function: '<S17>/Betrag pwm_x' incorporates:
   *  Abs: '<S17>/Abs x_diff'
   */
  /* MATLAB Function 'Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x': '<S19>:1' */
  if ((Gesamtsystem_B.Zielradius < rtb_RoundingFunction2) &&
      (rtb_RoundingFunction2 < 60.0 + Gesamtsystem_B.Zielradius)) {
    /* '<S19>:1:3' */
    /* '<S19>:1:4' */
    rtb_RoundingFunction2 = 60.0;
  } else if (rtb_RoundingFunction2 <= Gesamtsystem_B.Zielradius) {
    /* '<S19>:1:5' */
    /* '<S19>:1:6' */
    rtb_RoundingFunction2 = 0.0;
  } else if (rtb_RoundingFunction2 >= 100.0 + Gesamtsystem_B.Zielradius) {
    /* '<S19>:1:7' */
    /* '<S19>:1:8' */
    rtb_RoundingFunction2 = 100.0;
  } else {
    /* '<S19>:1:10' */
  }

  /* End of MATLAB Function: '<S17>/Betrag pwm_x' */

  /* Abs: '<S17>/Abs y_diff' */
  rtb_RoundingFunction = fabs(rtb_RoundingFunction);

  /* MATLAB Function: '<S17>/Betrag pwm_y' incorporates:
   *  Abs: '<S17>/Abs y_diff'
   */
  /* MATLAB Function 'Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_y': '<S20>:1' */
  if ((Gesamtsystem_B.Zielradius < rtb_RoundingFunction) &&
      (rtb_RoundingFunction < 60.0 + Gesamtsystem_B.Zielradius)) {
    /* '<S20>:1:3' */
    /* '<S20>:1:4' */
    rtb_RoundingFunction = 60.0;
  } else if (rtb_RoundingFunction <= Gesamtsystem_B.Zielradius) {
    /* '<S20>:1:5' */
    /* '<S20>:1:6' */
    rtb_RoundingFunction = 0.0;
  } else if (rtb_RoundingFunction >= 100.0 + Gesamtsystem_B.Zielradius) {
    /* '<S20>:1:7' */
    /* '<S20>:1:8' */
    rtb_RoundingFunction = 100.0;
  } else {
    /* '<S20>:1:10' */
  }

  /* End of MATLAB Function: '<S17>/Betrag pwm_y' */

  /* MATLAB Function: '<S17>/PWM-Vektorbetrag' */
  /* MATLAB Function 'Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/PWM-Vektorbetrag': '<S21>:1' */
  /* '<S21>:1:3' */
  rtb_RoundingFunction = rt_roundd_snf(sqrt(rtb_RoundingFunction2 *
    rtb_RoundingFunction2 + rtb_RoundingFunction * rtb_RoundingFunction));

  /* Saturate: '<S17>/PWM-Wertebereich' */
  if (rtb_RoundingFunction > Gesamtsystem_P.PWMWertebereich_UpperSat) {
    Gesamtsystem_B.PWMWertebereich = Gesamtsystem_P.PWMWertebereich_UpperSat;
  } else if (rtb_RoundingFunction < Gesamtsystem_P.PWMWertebereich_LowerSat) {
    Gesamtsystem_B.PWMWertebereich = Gesamtsystem_P.PWMWertebereich_LowerSat;
  } else {
    Gesamtsystem_B.PWMWertebereich = rtb_RoundingFunction;
  }

  /* End of Saturate: '<S17>/PWM-Wertebereich' */

  /* Chart: '<S13>/Fahrsystem' */
  /* Gateway: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Fahrsystem */
  /* During: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Fahrsystem */
  if (Gesamtsystem_DWork.is_active_c7_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Fahrsystem */
    Gesamtsystem_DWork.is_active_c7_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Fahrsystem */
    /* Transition: '<S16>:91' */
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
      /* During 'Drehen_rechts_gesteuert': '<S16>:51' */
      /* Transition: '<S16>:63' */
      /* Transition: '<S16>:75' */
      if ((fabs(Gesamtsystem_B.alpha_diff_opt) > 0.0) &&
          (Gesamtsystem_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S16>:58' */
        if (fabs(Gesamtsystem_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S16>:21' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S16>:45' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S16>:8' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S16>:57' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S16>:9' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S16>:53' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S16>:54' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S16>:43' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S16>:55' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S16>:51' */
            rtb_RoundingFunction = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_l = rtb_RoundingFunction;
            Gesamtsystem_B.pwm_out_r = rtb_RoundingFunction;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S16>:82' */
        if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S16>:85' */
          rtb_RoundingFunction = 1.0 - Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = Gesamtsystem_B.Gang;
        } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S16>:86' */
          rtb_RoundingFunction = Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = 1.0 - Gesamtsystem_B.Gang;
        } else {
          /* Transition: '<S16>:87' */
          rtb_RoundingFunction = 0.0;
          rtb_RoundingFunction2 = 0.0;
        }

        Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S16>:94' */
        rtb_RoundingFunction1 = Gesamtsystem_B.PWMWertebereich / 100.0;
        Gesamtsystem_B.pwm_out_l = Gesamtsystem_B.PWMWertebereich -
          rt_roundd_snf(rtb_RoundingFunction1 * rtb_RoundingFunction1 *
                        Gesamtsystem_B.pwm_mindern[0]) * rtb_RoundingFunction;
        rtb_RoundingFunction = Gesamtsystem_B.PWMWertebereich / 100.0;
        Gesamtsystem_B.pwm_out_r = Gesamtsystem_B.PWMWertebereich -
          rt_roundd_snf(rtb_RoundingFunction * rtb_RoundingFunction *
                        Gesamtsystem_B.pwm_mindern[0]) * rtb_RoundingFunction2;
        Gesamtsystem_B.r_l_out_l = 1.0 - Gesamtsystem_B.Gang;
        Gesamtsystem_B.r_l_out_r = 1.0 - Gesamtsystem_B.Gang;
      }
      break;

     case Gesamtsyst_IN_Drehen_rechts_max:
      /* During 'Drehen_rechts_max': '<S16>:9' */
      /* Transition: '<S16>:61' */
      /* Transition: '<S16>:75' */
      if ((fabs(Gesamtsystem_B.alpha_diff_opt) > 0.0) &&
          (Gesamtsystem_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S16>:58' */
        if (fabs(Gesamtsystem_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S16>:21' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S16>:45' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S16>:8' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S16>:57' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S16>:9' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S16>:53' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S16>:54' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S16>:43' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S16>:55' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S16>:51' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S16>:82' */
        if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S16>:85' */
          rtb_RoundingFunction = 1.0 - Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = Gesamtsystem_B.Gang;
        } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S16>:86' */
          rtb_RoundingFunction = Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = 1.0 - Gesamtsystem_B.Gang;
        } else {
          /* Transition: '<S16>:87' */
          rtb_RoundingFunction = 0.0;
          rtb_RoundingFunction2 = 0.0;
        }

        Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S16>:94' */
        rtb_RoundingFunction1 = Gesamtsystem_B.PWMWertebereich / 100.0;
        Gesamtsystem_B.pwm_out_l = Gesamtsystem_B.PWMWertebereich -
          rt_roundd_snf(rtb_RoundingFunction1 * rtb_RoundingFunction1 *
                        Gesamtsystem_B.pwm_mindern[0]) * rtb_RoundingFunction;
        rtb_RoundingFunction = Gesamtsystem_B.PWMWertebereich / 100.0;
        Gesamtsystem_B.pwm_out_r = Gesamtsystem_B.PWMWertebereich -
          rt_roundd_snf(rtb_RoundingFunction * rtb_RoundingFunction *
                        Gesamtsystem_B.pwm_mindern[0]) * rtb_RoundingFunction2;
        Gesamtsystem_B.r_l_out_l = 1.0 - Gesamtsystem_B.Gang;
        Gesamtsystem_B.r_l_out_r = 1.0 - Gesamtsystem_B.Gang;
      }
      break;

     case IN_Fahren_mit_Ausrichtungsregel:
      /* During 'Fahren_mit_Ausrichtungsregelung': '<S16>:94' */
      /* Transition: '<S16>:74' */
      /* Transition: '<S16>:75' */
      if ((fabs(Gesamtsystem_B.alpha_diff_opt) > 0.0) &&
          (Gesamtsystem_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S16>:58' */
        if (fabs(Gesamtsystem_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S16>:21' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S16>:45' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S16>:8' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S16>:57' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S16>:9' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S16>:53' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S16>:54' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S16>:43' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S16>:55' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S16>:51' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S16>:82' */
        if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S16>:85' */
          rtb_RoundingFunction = 1.0 - Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = Gesamtsystem_B.Gang;
        } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S16>:86' */
          rtb_RoundingFunction = Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = 1.0 - Gesamtsystem_B.Gang;
        } else {
          /* Transition: '<S16>:87' */
          rtb_RoundingFunction = 0.0;
          rtb_RoundingFunction2 = 0.0;
        }

        Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S16>:94' */
        rtb_RoundingFunction1 = Gesamtsystem_B.PWMWertebereich / 100.0;
        Gesamtsystem_B.pwm_out_l = Gesamtsystem_B.PWMWertebereich -
          rt_roundd_snf(rtb_RoundingFunction1 * rtb_RoundingFunction1 *
                        Gesamtsystem_B.pwm_mindern[0]) * rtb_RoundingFunction;
        rtb_RoundingFunction = Gesamtsystem_B.PWMWertebereich / 100.0;
        Gesamtsystem_B.pwm_out_r = Gesamtsystem_B.PWMWertebereich -
          rt_roundd_snf(rtb_RoundingFunction * rtb_RoundingFunction *
                        Gesamtsystem_B.pwm_mindern[0]) * rtb_RoundingFunction2;
        Gesamtsystem_B.r_l_out_l = 1.0 - Gesamtsystem_B.Gang;
        Gesamtsystem_B.r_l_out_r = 1.0 - Gesamtsystem_B.Gang;
      }
      break;

     default:
      Gesamtsystem_Start_Warten();
      break;
    }
  }

  /* End of Chart: '<S13>/Fahrsystem' */
  /* End of Outputs for SubSystem: '<S2>/Navigationssystem [Einstellungen moeglich]' */

  /* Product: '<S2>/Product' */
  rtb_RoundingFunction2 = Gesamtsystem_B.Value * Gesamtsystem_B.pwm_out_l;

  /* Product: '<S2>/Product1' */
  rtb_RoundingFunction = Gesamtsystem_B.Value * Gesamtsystem_B.pwm_out_r;

  /* Chart: '<S4>/Beendigung-Ansteuerung' incorporates:
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S7>/Compare'
   *  SignalConversion: '<S6>/TmpSignal ConversionAt SFunction Inport1'
   */
  /* Gateway: Add-Ons-Ansteuerung
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Beendigung-System
     [Einstellungen moeglich]/Beendigung-Ansteuerung */
  /* During: Add-Ons-Ansteuerung
     [Einstellungen moeglich]
     Achtung!
     Einige Einstellungswerte haengen
     von den Werten im Nexonar-System ab./Beendigung-System
     [Einstellungen moeglich]/Beendigung-Ansteuerung */
  if (Gesamtsystem_DWork.is_active_c3_Gesamtsystem == 0U) {
    /* Entry: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Beendigung-System
       [Einstellungen moeglich]/Beendigung-Ansteuerung */
    Gesamtsystem_DWork.is_active_c3_Gesamtsystem = 1U;

    /* Entry Internal: Add-Ons-Ansteuerung
       [Einstellungen moeglich]
       Achtung!
       Einige Einstellungswerte haengen
       von den Werten im Nexonar-System ab./Beendigung-System
       [Einstellungen moeglich]/Beendigung-Ansteuerung */
    /* Transition: '<S6>:1016' */
    Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_Start_Warten;
  } else {
    switch (Gesamtsystem_DWork.is_c3_Gesamtsystem) {
     case Gesamtsystem_IN_Anschalten:
      Gesamtsystem_B.aus_an = 1.0;

      /* During 'Anschalten': '<S6>:1017' */
      break;

     case Gesamtsystem_IN_Aus_Zustand:
      Gesamtsystem_B.aus_an = 0.0;

      /* During 'Aus_Zustand': '<S6>:1019' */
      if ((0.0F >= Gesamtsystem_P.DauerbiszumShutdowninsec_const) ||
          ((rtb_RoundingFunction2 == 0.0) && (rtb_RoundingFunction == 0.0) &&
           (Gesamtsystem_B.r_l_out_l == Gesamtsystem_B.r_l_out_r))) {
        /* Transition: '<S6>:1022' */
        /* Transition: '<S6>:1020' */
        Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_Anschalten;

        /* Entry 'Anschalten': '<S6>:1017' */
        Gesamtsystem_B.aus_an = 1.0;
      }
      break;

     default:
      /* During 'Start_Warten': '<S6>:1015' */
      /* Transition: '<S6>:1033' */
      Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_Aus_Zustand;

      /* Entry 'Aus_Zustand': '<S6>:1019' */
      Gesamtsystem_B.aus_an = 0.0;
      break;
    }
  }

  /* End of Chart: '<S4>/Beendigung-Ansteuerung' */

  /* Chart: '<S5>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
  if (Gesamtsystem_DWork.temporalCounter_i1_gl < 15U) {
    Gesamtsystem_DWork.temporalCounter_i1_gl = ((int16_T)
      Gesamtsystem_DWork.temporalCounter_i1_gl + 1) & 255U;
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
    /* Transition: '<S8>:1008' */
    Gesamtsystem_DWork.is_c6_Gesamtsystem = Gesamtsystem_IN_Init_und_Warten;

    /* Entry 'Init_und_Warten': '<S8>:1009' */
    rtb_ZM_pwm_out = 0.0;
    Gesamtsystem_B.ZM_r_l_out = 1.0;
  } else {
    switch (Gesamtsystem_DWork.is_c6_Gesamtsystem) {
     case Gesamtsystem_IN_Ausfuehrung:
      rtb_ZM_pwm_out = 50.0;

      /* During 'Ausfuehrung': '<S8>:1011' */
      if (Gesamtsystem_DWork.temporalCounter_i1_gl >= 10U) {
        /* Transition: '<S8>:1013' */
        Gesamtsystem_DWork.is_c6_Gesamtsystem = Gesamtsystem_IN_Beendet;

        /* Entry 'Beendet': '<S8>:1014' */
        rtb_ZM_pwm_out = 0.0;
      }
      break;

     case Gesamtsystem_IN_Beendet:
      rtb_ZM_pwm_out = 0.0;

      /* During 'Beendet': '<S8>:1014' */
      break;

     default:
      rtb_ZM_pwm_out = 0.0;
      Gesamtsystem_B.ZM_r_l_out = 1.0;

      /* During 'Init_und_Warten': '<S8>:1009' */
      if ((Gesamtsystem_B.x_soll == 1200.0) && (Gesamtsystem_B.y_soll == 0.0)) {
        /* Transition: '<S8>:1012' */
        Gesamtsystem_DWork.is_c6_Gesamtsystem = Gesamtsystem_IN_Ausfuehrung;
        Gesamtsystem_DWork.temporalCounter_i1_gl = 0U;

        /* Entry 'Ausfuehrung': '<S8>:1011' */
        rtb_ZM_pwm_out = 50.0;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */

  /* S-Function (c280xgpio_do): '<S5>/Drehrichtungsvorgabe für Zylindermotor' */
  {
    if (Gesamtsystem_B.ZM_r_l_out)
      GpioDataRegs.GPASET.bit.GPIO17 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO17 = 1;
  }

  /* S-Function (c280xpwm): '<S5>/PWM Vorgabe für Zylindermotor' */

  /*-- Update CMPB value for ePWM3 --*/
  {
    EPwm3Regs.CMPB = (uint16_T)((uint32_T)EPwm3Regs.TBPRD * rtb_ZM_pwm_out *
      0.01);
  }

  /* DeadZone: '<S11>/Leistungsoffset Motor_links' */
  if (rtb_RoundingFunction2 > Gesamtsystem_P.LeistungsoffsetMotor_links_End) {
    rtb_DeadZone = rtb_RoundingFunction2 -
      Gesamtsystem_P.LeistungsoffsetMotor_links_End;
  } else if (rtb_RoundingFunction2 >=
             Gesamtsystem_P.LeistungsoffsetMotor_links_Star) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone = rtb_RoundingFunction2 -
      Gesamtsystem_P.LeistungsoffsetMotor_links_Star;
  }

  /* End of DeadZone: '<S11>/Leistungsoffset Motor_links' */

  /* S-Function (c280xpwm): '<S11>/PWM Vorgabe fuer Motor_links ' */

  /*-- Update CMPB value for ePWM1 --*/
  {
    EPwm1Regs.CMPB = (uint16_T)((uint32_T)EPwm1Regs.TBPRD * rtb_DeadZone * 0.01);
  }

  /* DeadZone: '<S11>/Leistungsoffset Motor_rechts' */
  if (rtb_RoundingFunction > Gesamtsystem_P.LeistungsoffsetMotor_rechts_End) {
    rtb_DeadZone = rtb_RoundingFunction -
      Gesamtsystem_P.LeistungsoffsetMotor_rechts_End;
  } else if (rtb_RoundingFunction >=
             Gesamtsystem_P.LeistungsoffsetMotor_rechts_Sta) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone = rtb_RoundingFunction -
      Gesamtsystem_P.LeistungsoffsetMotor_rechts_Sta;
  }

  /* End of DeadZone: '<S11>/Leistungsoffset Motor_rechts' */

  /* S-Function (c280xpwm): '<S11>/PWM Vorgabe fuer Motor_rechts' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD * rtb_DeadZone * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S11>/Drehrichtungsvorgabe fuer Motor_links' */
  {
    if (Gesamtsystem_B.r_l_out_l)
      GpioDataRegs.GPASET.bit.GPIO20 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO20 = 1;
  }

  /* S-Function (c280xgpio_do): '<S11>/Drehrichtungsvorgabe fuer Motor_rechts' */
  {
    if (Gesamtsystem_B.r_l_out_r)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* S-Function (scominttobit): '<S14>/Integer to Bit Converter7' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values7;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter7[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S14>/Integer to Bit Converter7' */

  /* S-Function (scominttobit): '<S14>/Integer to Bit Converter8' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values8;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter8[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S14>/Integer to Bit Converter8' */

  /* Chart: '<S14>/Chart1' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart1 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart1 */
  if (Gesamtsystem_DWork.is_active_c1_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart1 */
    Gesamtsystem_DWork.is_active_c1_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart1 */
    /* Transition: '<S24>:3' */
    Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c1_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S24>:17' */
      /* Transition: '<S24>:24' */
      Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S24>:26' */
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
      /* During 'x0': '<S24>:2' */
      /* Transition: '<S24>:7' */
      Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S24>:26' */
      /* Transition: '<S24>:25' */
      Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S14>/Chart1' */

  /* DiscretePulseGenerator: '<S29>/Pulse Generator' */
  rtb_RoundingFunction2 = (Gesamtsystem_DWork.clockTickCounter <
    Gesamtsystem_P.PulseGenerator_Duty) && (Gesamtsystem_DWork.clockTickCounter >=
    0L) ? Gesamtsystem_P.PulseGenerator_Amp : 0.0;
  if (Gesamtsystem_DWork.clockTickCounter >=
      Gesamtsystem_P.PulseGenerator_Period - 1.0) {
    Gesamtsystem_DWork.clockTickCounter = 0L;
  } else {
    Gesamtsystem_DWork.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S29>/Pulse Generator' */

  /* Outputs for Triggered SubSystem: '<S29>/I2C Reinitialisierung' incorporates:
   *  TriggerPort: '<S31>/Trigger'
   */
  zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                     &Gesamtsystem_PrevZCSigState.I2CReinitialisierung_Trig_ZCE,
                     (rtb_RoundingFunction2));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S31>/I2C Reinitialisierung' */
    /* MATLAB Function 'Nexonar-System/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung/I2C Reinitialisierung': '<S33>:1' */
    init_i2c();
  }

  /* End of Outputs for SubSystem: '<S29>/I2C Reinitialisierung' */

  /* Outputs for Triggered SubSystem: '<S29>/I2C Reset' incorporates:
   *  TriggerPort: '<S32>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &Gesamtsystem_PrevZCSigState.I2CReset_Trig_ZCE,
                     (rtb_RoundingFunction2));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S32>/I2C Reset' */
    /* MATLAB Function 'Nexonar-System/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset': '<S34>:1' */
    reset_i2c();
  }

  /* End of Outputs for SubSystem: '<S29>/I2C Reset' */

  /* MATLABSystem: '<S3>/Moving Average2' */
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

  rtb_RoundingFunction2 = Gesamtsystem_DWork.obj.pStatistic->pwN;
  rtb_RoundingFunction1 = Gesamtsystem_DWork.obj.pStatistic->pmN;
  rtb_RoundingFunction = Gesamtsystem_DWork.obj.pStatistic->plambda;
  rtb_RoundingFunction1 = (1.0 - 1.0 / rtb_RoundingFunction2) *
    rtb_RoundingFunction1 + 1.0 / rtb_RoundingFunction2 *
    Gesamtsystem_B.RateTransition3;
  Gesamtsystem_DWork.obj.pStatistic->pwN = rtb_RoundingFunction *
    rtb_RoundingFunction2 + 1.0;
  Gesamtsystem_DWork.obj.pStatistic->pmN = rtb_RoundingFunction1;
  Gesamtsystem_B.MovingAverage2 = rtb_RoundingFunction1;

  /* End of MATLABSystem: '<S3>/Moving Average2' */

  /* UnitDelay: '<S3>/Unit Delay2' */
  Gesamtsystem_B.UnitDelay2 = Gesamtsystem_DWork.UnitDelay2_DSTATE;

  /* RateTransition: '<S3>/TmpRTBAtSortieralgorithmus2Inport3' */
  if (Gesamtsystem_M->Timing.RateInteraction.TID1_2) {
    Gesamtsystem_B.TmpRTBAtSortieralgorithmus2Inpo =
      Gesamtsystem_DWork.TmpRTBAtSortieralgorithmus2Inpo;
  }

  /* End of RateTransition: '<S3>/TmpRTBAtSortieralgorithmus2Inport3' */

  /* Chart: '<S3>/Sortieralgorithmus2' */
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
    /* Transition: '<S39>:182' */
    Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_setupVariable;

    /* Entry 'setupVariable': '<S39>:175' */
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
      /* During 'Black': '<S39>:187' */
      if (Gesamtsystem_DWork.temporalCounter_i1_o >= 100U) {
        /* Transition: '<S39>:188' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_DetectedCube;

        /* Entry 'DetectedCube': '<S39>:180' */
        Gesamtsystem_DWork.cubeCounter++;
      } else {
        Gesamtsystem_B.magacin = 6.0;
      }
      break;

     case Gesamtsystem_IN_BlueCube:
      /* During 'BlueCube': '<S39>:185' */
      if (Gesamtsystem_DWork.temporalCounter_i1_o >= 100U) {
        /* Transition: '<S39>:189' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_DetectedCube;

        /* Entry 'DetectedCube': '<S39>:180' */
        Gesamtsystem_DWork.cubeCounter++;
      }
      break;

     case Gesamtsystem_IN_DetectedCube:
      /* During 'DetectedCube': '<S39>:180' */
      if (Gesamtsystem_B.UnitDelay2 == 0.0F) {
        /* Transition: '<S39>:168' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S39>:183' */
        Gesamtsystem_B.magacin = -1.0;
        Gesamtsystem_B.lampeCubeLoaded = 1.0;
      }
      break;

     case Gesamtsystem_IN_RedCube:
      /* During 'RedCube': '<S39>:186' */
      if (Gesamtsystem_DWork.temporalCounter_i1_o >= 100U) {
        /* Transition: '<S39>:190' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_DetectedCube;

        /* Entry 'DetectedCube': '<S39>:180' */
        Gesamtsystem_DWork.cubeCounter++;
      }
      break;

     case Gesamtsystem_IN_cubeLoaded:
      /* During 'cubeLoaded': '<S39>:183' */
      if ((Gesamtsystem_B.MovingAverage2 < 400.0) ||
          (Gesamtsystem_B.MovingAverage2 > 1300.0) ||
          (Gesamtsystem_B.TmpRTBAtSortieralgorithmus2Inpo > 0.0F)) {
        /* Transition: '<S39>:169' */
        /* Transition: '<S39>:217' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = IN_photoelectricBarrierActivate;

        /* Entry 'photoelectricBarrierActivated': '<S39>:184' */
        Gesamtsystem_B.lampeCubeLoaded = 0.0;
      } else {
        Gesamtsystem_B.magacin = -1.0;
      }
      break;

     case IN_photoelectricBarrierActivate:
      /* During 'photoelectricBarrierActivated': '<S39>:184' */
      if (Gesamtsystem_B.MovingAverage2 > 2150.0) {
        /* Transition: '<S39>:172' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_Black;
        Gesamtsystem_DWork.temporalCounter_i1_o = 0U;

        /* Entry 'Black': '<S39>:187' */
        Gesamtsystem_B.magacin = 6.0;
        Gesamtsystem_DWork.magacin6++;
      } else if (Gesamtsystem_B.MovingAverage2 < 1000.0) {
        /* Transition: '<S39>:171' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_RedCube;
        Gesamtsystem_DWork.temporalCounter_i1_o = 0U;

        /* Entry 'RedCube': '<S39>:186' */
        Gesamtsystem_B.magacin = Gesamtsystem_findPlaceForRed();
      } else {
        if ((Gesamtsystem_B.MovingAverage2 >= 1000.0) &&
            (Gesamtsystem_B.MovingAverage2 <= 2150.0)) {
          /* Transition: '<S39>:170' */
          Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_BlueCube;
          Gesamtsystem_DWork.temporalCounter_i1_o = 0U;

          /* Entry 'BlueCube': '<S39>:185' */
          Gesamtsystem_B.magacin = Gesamtsystem_findPlaceForBlue();
        }
      }
      break;

     case Gesamtsystem_IN_setupVariable:
      /* During 'setupVariable': '<S39>:175' */
      if (Gesamtsystem_B.TmpRTBAtSortieralgorithmus2Inpo > 0.0F) {
        /* Transition: '<S39>:219' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_wait_bax;
        Gesamtsystem_DWork.temporalCounter_i1_o = 0U;

        /* Entry 'wait': '<S39>:218' */
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
      /* During 'wait': '<S39>:218' */
      if (Gesamtsystem_DWork.temporalCounter_i1_o >= 200U) {
        /* Transition: '<S39>:220' */
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S39>:183' */
        Gesamtsystem_B.magacin = -1.0;
        Gesamtsystem_B.lampeCubeLoaded = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Sortieralgorithmus2' */

  /* S-Function (c280xgpio_do): '<S3>/Digital Output1' */
  {
    if (Gesamtsystem_B.lampeCubeLoaded)
      GpioDataRegs.GPBSET.bit.GPIO58 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO58 = 1;
  }

  /* Lookup_n-D: '<S3>/1-D Lookup Table2' */
  rtb_RoundingFunction2 = look1_binlxpw(Gesamtsystem_B.magacin,
    Gesamtsystem_P.uDLookupTable2_bp01Data,
    Gesamtsystem_P.uDLookupTable2_tableData, 7UL);

  /* RateTransition: '<S3>/TmpRTBAtChart7Inport4' */
  if (Gesamtsystem_M->Timing.RateInteraction.TID1_2) {
    Gesamtsystem_B.TmpRTBAtChart7Inport4 =
      Gesamtsystem_DWork.TmpRTBAtChart7Inport4_Buffer0;
  }

  /* End of RateTransition: '<S3>/TmpRTBAtChart7Inport4' */

  /* Chart: '<S3>/Chart7' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion2'
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
    /* Transition: '<S36>:70' */
    Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_startPosition;

    /* Entry 'startPosition': '<S36>:157' */
    Gesamtsystem_B.angle = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c38_Gesamtsystem) {
     case Gesamtsys_IN_betterLeftPosition:
      /* During 'betterLeftPosition': '<S36>:151' */
      /* Transition: '<S36>:153' */
      Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

      /* Entry 'waitForCube': '<S36>:29' */
      break;

     case Gesamtsy_IN_betterRightPosition:
      /* During 'betterRightPosition': '<S36>:150' */
      /* Transition: '<S36>:155' */
      Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

      /* Entry 'waitForCube': '<S36>:29' */
      break;

     case Gesamtsystem_IN_closeGate:
      /* During 'closeGate': '<S36>:73' */
      if (Gesamtsystem_B.UnitDelay2 == 0.0F) {
        /* Transition: '<S36>:98' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

        /* Entry 'waitForCube': '<S36>:29' */
      } else {
        Gesamtsystem_B.signal_o = 0.0;
      }
      break;

     case Gesamtsystem_IN_closeKlappe_b:
      /* During 'closeKlappe': '<S36>:159' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 230U) {
        /* Transition: '<S36>:161' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

        /* Entry 'waitForCube': '<S36>:29' */
      } else {
        Gesamtsystem_B.signal_o = 0.0;
      }
      break;

     case Gesamtsystem_IN_firstEntry:
      /* During 'firstEntry': '<S36>:69' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 70U) {
        /* Transition: '<S36>:160' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_closeKlappe_b;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'closeKlappe': '<S36>:159' */
        Gesamtsystem_B.signal_o = 0.0;
      }
      break;

     case Gesamtsystem_IN_goToMagacin:
      /* During 'goToMagacin': '<S36>:3' */
      if (((real32_T)Gesamtsystem_B.RateTransition3_o > Gesamtsystem_B.angle -
           2.0) && ((real32_T)Gesamtsystem_B.RateTransition3_o <
                    Gesamtsystem_B.angle + 2.0)) {
        /* Transition: '<S36>:66' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_openGate;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'openGate': '<S36>:72' */
        Gesamtsystem_B.signal_o = 1.0;
        Gesamtsystem_B.movingCube = 0.0F;
      }
      break;

     case Gesamtsystem_IN_goToZero:
      /* During 'goToZero': '<S36>:59' */
      if (((real32_T)Gesamtsystem_B.RateTransition3_o > -2.0F) && ((real32_T)
           Gesamtsystem_B.RateTransition3_o < 2.0F)) {
        /* Transition: '<S36>:61' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_wait_b;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;
      } else {
        Gesamtsystem_B.angle = 0.0;
        Gesamtsystem_B.movingCube = 1.0F;
      }
      break;

     case Gesamtsystem_IN_openGate:
      /* During 'openGate': '<S36>:72' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 50U) {
        /* Transition: '<S36>:75' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_closeGate;

        /* Entry 'closeGate': '<S36>:73' */
        Gesamtsystem_B.signal_o = 0.0;
      } else {
        Gesamtsystem_B.signal_o = 1.0;
        Gesamtsystem_B.movingCube = 0.0F;
      }
      break;

     case Gesamtsystem_IN_startPosition:
      /* During 'startPosition': '<S36>:157' */
      if (Gesamtsystem_B.TmpRTBAtChart7Inport4 > 0.0F) {
        /* Transition: '<S36>:158' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_firstEntry;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'firstEntry': '<S36>:69' */
        Gesamtsystem_B.angle = 300.0;
        Gesamtsystem_B.signal_o = -1.0;
      }
      break;

     case Gesamtsystem_IN_wait_b:
      /* During 'wait': '<S36>:101' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 40U) {
        /* Transition: '<S36>:102' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_goToMagacin;

        /* Entry 'goToMagacin': '<S36>:3' */
        Gesamtsystem_B.angle = rtb_RoundingFunction2;
      }
      break;

     default:
      /* During 'waitForCube': '<S36>:29' */
      if (Gesamtsystem_B.angle == 85.0) {
        /* Transition: '<S36>:154' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsy_IN_betterRightPosition;

        /* Entry 'betterRightPosition': '<S36>:150' */
        Gesamtsystem_B.angle = 220.0;
      } else if (Gesamtsystem_B.angle == -40.0) {
        /* Transition: '<S36>:152' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsys_IN_betterLeftPosition;

        /* Entry 'betterLeftPosition': '<S36>:151' */
        Gesamtsystem_B.angle = -170.0;
      } else {
        if (rtb_RoundingFunction2 != -1.0) {
          /* Transition: '<S36>:60' */
          Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_goToZero;

          /* Entry 'goToZero': '<S36>:59' */
          Gesamtsystem_B.angle = 0.0;
          Gesamtsystem_B.movingCube = 1.0F;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Chart7' */

  /* Sum: '<S42>/Sum' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion2'
   */
  rtb_DeadZone = Gesamtsystem_B.angle - (real32_T)
    Gesamtsystem_B.RateTransition3_o;

  /* DeadZone: '<S42>/Dead Zone' */
  if (rtb_DeadZone > Gesamtsystem_P.DeadZone_End) {
    rtb_DeadZone -= Gesamtsystem_P.DeadZone_End;
  } else if (rtb_DeadZone >= Gesamtsystem_P.DeadZone_Start) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= Gesamtsystem_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S42>/Dead Zone' */

  /* Gain: '<S42>/Verstaerkung' */
  rtb_RoundingFunction2 = Gesamtsystem_P.Verstaerkung_Gain * rtb_DeadZone;

  /* MATLAB Function: '<S42>/Richtung' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung': '<S44>:1' */
  if (rtb_RoundingFunction2 > 0.0) {
    /* '<S44>:1:3' */
    /* '<S44>:1:4' */
    Gesamtsystem_B.y = 1.0;
  } else {
    /* '<S44>:1:6' */
    Gesamtsystem_B.y = 0.0;
  }

  /* End of MATLAB Function: '<S42>/Richtung' */

  /* S-Function (c280xgpio_do): '<S38>/Drehrichtungsvorgabe für einen Motor' */
  {
    if (Gesamtsystem_B.y)
      GpioDataRegs.GPASET.bit.GPIO19 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO19 = 1;
  }

  /* Abs: '<S42>/Abs' */
  rtb_RoundingFunction2 = fabs(rtb_RoundingFunction2);

  /* MATLAB Function: '<S42>/Betrag' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag': '<S43>:1' */
  if ((0.5 < rtb_RoundingFunction2) && (rtb_RoundingFunction2 < 60.0)) {
    /* '<S43>:1:3' */
    /* '<S43>:1:4' */
    rtb_y_b = 60.0;
  } else if (rtb_RoundingFunction2 <= 0.5) {
    /* '<S43>:1:5' */
    /* '<S43>:1:6' */
    rtb_y_b = 0.0;
  } else if (rtb_RoundingFunction2 >= 100.0) {
    /* '<S43>:1:7' */
    /* '<S43>:1:8' */
    rtb_y_b = 100.0;
  } else {
    /* '<S43>:1:10' */
    rtb_y_b = rtb_RoundingFunction2;
  }

  /* End of MATLAB Function: '<S42>/Betrag' */

  /* S-Function (c280xpwm): '<S38>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM4 --*/
  {
    EPwm4Regs.CMPB = (uint16_T)((uint32_T)EPwm4Regs.TBPRD * rtb_y_b * 0.01);
  }

  /* Chart: '<S3>/Chart6' */
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
    /* Transition: '<S35>:16' */
    Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_wait;

    /* Entry 'wait': '<S35>:4' */
    Gesamtsystem_B.gateDirection_i = 0.0;
    Gesamtsystem_B.gatePWM_c = 50.0;
    Gesamtsystem_B.movingCube_d = 0.0F;
  } else {
    switch (Gesamtsystem_DWork.is_c37_Gesamtsystem) {
     case Gesamtsystem_IN_CloseRegular:
      /* During 'CloseRegular': '<S35>:22' */
      Gesamtsystem_B.gatePWM_c = 100.0;
      Gesamtsystem_B.gateDirection_i = 0.0;
      break;

     case Gesamtsystem_IN_close:
      /* During 'close': '<S35>:3' */
      if (Gesamtsystem_DWork.temporalCounter_i1_ok >= 40U) {
        /* Transition: '<S35>:7' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_wait;

        /* Entry 'wait': '<S35>:4' */
        Gesamtsystem_B.gateDirection_i = 0.0;
        Gesamtsystem_B.gatePWM_c = 50.0;
        Gesamtsystem_B.movingCube_d = 0.0F;
      } else {
        Gesamtsystem_B.gateDirection_i = 0.0;
      }
      break;

     case Gesamtsystem_IN_closeKlappe:
      /* During 'closeKlappe': '<S35>:17' */
      if (Gesamtsystem_DWork.temporalCounter_i1_ok >= 100U) {
        /* Transition: '<S35>:19' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_wait;

        /* Entry 'wait': '<S35>:4' */
        Gesamtsystem_B.gateDirection_i = 0.0;
        Gesamtsystem_B.gatePWM_c = 50.0;
        Gesamtsystem_B.movingCube_d = 0.0F;
      } else {
        Gesamtsystem_B.gatePWM_c = 100.0;
        Gesamtsystem_B.gateDirection_i = 0.0;
      }
      break;

     case Gesamtsystem_IN_open:
      /* During 'open': '<S35>:1' */
      if (Gesamtsystem_DWork.temporalCounter_i1_ok >= 50U) {
        /* Transition: '<S35>:6' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_close;
        Gesamtsystem_DWork.temporalCounter_i1_ok = 0U;

        /* Entry 'close': '<S35>:3' */
        Gesamtsystem_B.gateDirection_i = 0.0;
      } else {
        Gesamtsystem_B.gateDirection_i = 1.0;
        Gesamtsystem_B.gatePWM_c = 100.0;
        Gesamtsystem_B.movingCube_d = 1.0F;
      }
      break;

     default:
      /* During 'wait': '<S35>:4' */
      if (Gesamtsystem_B.signal_o == 1.0) {
        /* Transition: '<S35>:5' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_open;
        Gesamtsystem_DWork.temporalCounter_i1_ok = 0U;

        /* Entry 'open': '<S35>:1' */
        Gesamtsystem_B.gateDirection_i = 1.0;
        Gesamtsystem_B.gatePWM_c = 100.0;
        Gesamtsystem_B.movingCube_d = 1.0F;
      } else if (Gesamtsystem_B.signal_o == -1.0) {
        /* Transition: '<S35>:18' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_closeKlappe;
        Gesamtsystem_DWork.temporalCounter_i1_ok = 0U;

        /* Entry 'closeKlappe': '<S35>:17' */
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

  /* End of Chart: '<S3>/Chart6' */

  /* S-Function (c280xpwm): '<S40>/PWM Vorgabe für einen Motor 1' */

  /*-- Update CMPB value for ePWM6 --*/
  {
    EPwm6Regs.CMPB = (uint16_T)((uint32_T)EPwm6Regs.TBPRD *
      Gesamtsystem_B.gatePWM_c * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S40>/Drehrichtungsvorgabe für einen Motor1' */
  {
    if (Gesamtsystem_B.gateDirection_i)
      GpioDataRegs.GPASET.bit.GPIO16 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO16 = 1;
  }

  /* Update for Delay: '<S4>/Verzoegern, bis Shutdown ausgefuehrt ist (Abtastzeit: 0.01s)' */
  for (j = 0; j < 9; j++) {
    Gesamtsystem_DWork.VerzoegernbisShutdownausgefuehr[j] =
      Gesamtsystem_DWork.VerzoegernbisShutdownausgefuehr[j + 1];
  }

  Gesamtsystem_DWork.VerzoegernbisShutdownausgefuehr[9] = Gesamtsystem_B.aus_an;

  /* End of Update for Delay: '<S4>/Verzoegern, bis Shutdown ausgefuehrt ist (Abtastzeit: 0.01s)' */

  /* Update for UnitDelay: '<S3>/Unit Delay2' incorporates:
   *  Sum: '<S3>/Sum2'
   */
  Gesamtsystem_DWork.UnitDelay2_DSTATE = Gesamtsystem_B.movingCube +
    Gesamtsystem_B.movingCube_d;
}

/* Model step function for TID2 */
void Gesamtsystem_step2(void)          /* Sample time: [0.1s, 0.0s] */
{
  /* S-Function (c280xgpio_di): '<S3>/Digital Input2' */
  {
    Gesamtsystem_B.DigitalInput2 = GpioDataRegs.GPADAT.bit.GPIO24;
  }

  /* Chart: '<S3>/Chart8' */
  if (Gesamtsystem_DWork.temporalCounter_i1_a < 31U) {
    Gesamtsystem_DWork.temporalCounter_i1_a = ((int16_T)
      Gesamtsystem_DWork.temporalCounter_i1_a + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart8 */
  /* During: Subsystem/Chart8 */
  if (Gesamtsystem_DWork.is_active_c39_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Chart8 */
    Gesamtsystem_DWork.is_active_c39_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Chart8 */
    /* Transition: '<S37>:16' */
    Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_entry;

    /* Entry 'entry': '<S37>:20' */
    Gesamtsystem_DWork.tasterCounter = 0.0;
    Gesamtsystem_B.panzerMotor = 0.0;
    Gesamtsystem_B.lampe = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c39_Gesamtsystem) {
     case Gesamtsystem_IN_Lampe:
      /* During 'Lampe': '<S37>:35' */
      Gesamtsystem_B.lampe = 1.0;
      break;

     case Gesamtsystem_IN_Stillstand:
      /* During 'Stillstand': '<S37>:25' */
      if (Gesamtsystem_DWork.temporalCounter_i1_a >= 10U) {
        /* Transition: '<S37>:36' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_Lampe;

        /* Entry 'Lampe': '<S37>:35' */
        Gesamtsystem_B.lampe = 1.0;
      } else {
        Gesamtsystem_B.gatePWM = 0.0;
      }
      break;

     case Gesamtsystem_IN_end:
      /* During 'end': '<S37>:23' */
      if (Gesamtsystem_DWork.temporalCounter_i1_a >= 5U) {
        /* Transition: '<S37>:26' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_Stillstand;
        Gesamtsystem_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'Stillstand': '<S37>:25' */
        Gesamtsystem_B.gatePWM = 0.0;
      } else {
        Gesamtsystem_B.gatePWM = 100.0;
        Gesamtsystem_B.gateDirection = 1.0;
        Gesamtsystem_B.panzerMotor = 0.0;
      }
      break;

     case Gesamtsystem_IN_entry:
      /* During 'entry': '<S37>:20' */
      /* Transition: '<S37>:21' */
      Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait_ba;

      /* Entry 'wait': '<S37>:4' */
      Gesamtsystem_B.gatePWM = 0.0;
      Gesamtsystem_B.gateDirection = 0.0;
      break;

     case Gesamtsystem_IN_open_b:
      /* During 'open': '<S37>:1' */
      if (Gesamtsystem_DWork.temporalCounter_i1_a >= 5U) {
        /* Transition: '<S37>:6' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait1;
        Gesamtsystem_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'wait1': '<S37>:3' */
        Gesamtsystem_B.gatePWM = 0.0;
      }
      break;

     case Gesamtsystem_IN_wait_ba:
      /* During 'wait': '<S37>:4' */
      if ((Gesamtsystem_B.DigitalInput2 > 0.0F) &&
          (Gesamtsystem_DWork.tasterCounter >= 1.0)) {
        /* Transition: '<S37>:24' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_end;
        Gesamtsystem_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'end': '<S37>:23' */
        Gesamtsystem_B.gatePWM = 100.0;
        Gesamtsystem_B.gateDirection = 1.0;
        Gesamtsystem_B.panzerMotor = 0.0;
      } else if ((Gesamtsystem_B.DigitalInput2 > 0.0F) &&
                 (Gesamtsystem_DWork.tasterCounter == 0.0)) {
        /* Transition: '<S37>:5' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_open_b;
        Gesamtsystem_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'open': '<S37>:1' */
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
      /* During 'wait1': '<S37>:3' */
      if (Gesamtsystem_DWork.temporalCounter_i1_a >= 20U) {
        /* Transition: '<S37>:22' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait_ba;

        /* Entry 'wait': '<S37>:4' */
        Gesamtsystem_B.gatePWM = 0.0;
        Gesamtsystem_B.gateDirection = 0.0;
      } else {
        Gesamtsystem_B.gatePWM = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Chart8' */

  /* S-Function (c280xgpio_do): '<S3>/Drehrichtungsvorgabe für einen Motor3' */
  {
    if (Gesamtsystem_B.gateDirection)
      GpioDataRegs.GPASET.bit.GPIO15 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO15 = 1;
  }

  /* S-Function (c280xpwm): '<S3>/ePWM2' */

  /*-- Update CMPB value for ePWM5 --*/
  {
    EPwm5Regs.CMPB = (uint16_T)((uint32_T)EPwm5Regs.TBPRD *
      Gesamtsystem_B.gatePWM * 0.01);
  }

  /* Update for RateTransition: '<S3>/TmpRTBAtSortieralgorithmus2Inport3' */
  Gesamtsystem_DWork.TmpRTBAtSortieralgorithmus2Inpo =
    Gesamtsystem_B.DigitalInput2;

  /* Update for RateTransition: '<S3>/TmpRTBAtChart7Inport4' */
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

    /* Start for S-Function (c280xgpio_do): '<S4>/Signalaussgang fuer Endsignallampe' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFCFFFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x4000000;
    EDIS;

    /* Start for S-Function (c280xgpio_di): '<S2>/Uebergabeschalter' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFCFFFF;
    GpioCtrlRegs.GPADIR.all &= 0xFEFFFFFF;
    EDIS;

    /* Start for S-Function (c28xisr_c2000): '<S14>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S14>/Triggered Subsystem'
     */
    /* Start for function-call system: '<S14>/Triggered Subsystem' */

    /* Start for S-Function (c280xi2c_rx): '<S30>/I2C Receive' */

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

    /* Start for RateTransition: '<S14>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Gesamtsystem_B.RateTransition[i] =
        Gesamtsystem_P.RateTransition_InitialCondition;
    }

    /* End of Start for RateTransition: '<S14>/Rate Transition' */

    /* Start for S-Function (c280xgpio_do): '<S5>/Drehrichtungsvorgabe für Zylindermotor' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFFF3;
    GpioCtrlRegs.GPADIR.all |= 0x20000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S5>/PWM Vorgabe für Zylindermotor' */

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

    /* Start for S-Function (c280xpwm): '<S11>/PWM Vorgabe fuer Motor_links ' */

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

    /* Start for S-Function (c280xpwm): '<S11>/PWM Vorgabe fuer Motor_rechts' */

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

    /* Start for S-Function (c280xgpio_do): '<S11>/Drehrichtungsvorgabe fuer Motor_links' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFCFF;
    GpioCtrlRegs.GPADIR.all |= 0x100000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S11>/Drehrichtungsvorgabe fuer Motor_rechts' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFF3FF;
    GpioCtrlRegs.GPADIR.all |= 0x200000;
    EDIS;

    /* Start for S-Function (c280xadc): '<S3>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
    if (adcInitFlag == 0) {
      InitAdc();
      adcInitFlag = 1;
    }

    config_ADC_A (2U, 33U, 0U, 0U, 0U);

    /* Start for MATLABSystem: '<S3>/Moving Average2' */
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

    /* End of Start for MATLABSystem: '<S3>/Moving Average2' */

    /* Start for RateTransition: '<S3>/TmpRTBAtSortieralgorithmus2Inport3' */
    Gesamtsystem_B.TmpRTBAtSortieralgorithmus2Inpo =
      Gesamtsystem_P.TmpRTBAtSortieralgorithmus2Inpo;

    /* Start for S-Function (c280xgpio_do): '<S3>/Digital Output1' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFCFFFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x4000000;
    EDIS;

    /* Start for S-Function (c280xgpio_di): '<S3>/Digital Input2' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFCFFFF;
    GpioCtrlRegs.GPADIR.all &= 0xFEFFFFFF;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S3>/Drehrichtungsvorgabe für einen Motor3' */
    EALLOW;
    GpioCtrlRegs.GPAMUX1.all &= 0x3FFFFFFF;
    GpioCtrlRegs.GPADIR.all |= 0x8000;
    EDIS;

    /* Start for RateTransition: '<S3>/TmpRTBAtChart7Inport4' */
    Gesamtsystem_B.TmpRTBAtChart7Inport4 =
      Gesamtsystem_P.TmpRTBAtChart7Inport4_InitialCo;

    /* Start for S-Function (c280xgpio_do): '<S38>/Drehrichtungsvorgabe für einen Motor' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFF3F;
    GpioCtrlRegs.GPADIR.all |= 0x80000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S38>/PWM Vorgabe für einen Motor ' */

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

    /* Start for S-Function (c280xpwm): '<S40>/PWM Vorgabe für einen Motor 1' */

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

    /* Start for S-Function (c280xgpio_do): '<S40>/Drehrichtungsvorgabe für einen Motor1' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFFFC;
    GpioCtrlRegs.GPADIR.all |= 0x10000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S3>/ePWM2' */

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

    /* Start for S-Function (c280xgpio_do): '<S41>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
    EALLOW;
    GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
    GpioCtrlRegs.GPBDIR.all |= 0x4;
    EDIS;
    Gesamtsystem_PrevZCSigState.I2CReinitialisierung_Trig_ZCE =
      UNINITIALIZED_ZCSIG;
    Gesamtsystem_PrevZCSigState.I2CReset_Trig_ZCE = UNINITIALIZED_ZCSIG;

    /* InitializeConditions for Delay: '<S4>/Verzoegern, bis Shutdown ausgefuehrt ist (Abtastzeit: 0.01s)' */
    for (i = 0; i < 10; i++) {
      Gesamtsystem_DWork.VerzoegernbisShutdownausgefuehr[i] =
        Gesamtsystem_P.VerzoegernbisShutdownausgefuehr;
    }

    /* End of InitializeConditions for Delay: '<S4>/Verzoegern, bis Shutdown ausgefuehrt ist (Abtastzeit: 0.01s)' */

    /* InitializeConditions for RateTransition: '<S14>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Gesamtsystem_DWork.RateTransition_Buffer[i] =
        Gesamtsystem_P.RateTransition_InitialCondition;
    }

    /* End of InitializeConditions for RateTransition: '<S14>/Rate Transition' */

    /* InitializeConditions for DiscretePulseGenerator: '<S29>/Pulse Generator' */
    Gesamtsystem_DWork.clockTickCounter = 0L;

    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay2' */
    Gesamtsystem_DWork.UnitDelay2_DSTATE =
      Gesamtsystem_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for RateTransition: '<S3>/TmpRTBAtSortieralgorithmus2Inport3' */
    Gesamtsystem_DWork.TmpRTBAtSortieralgorithmus2Inpo =
      Gesamtsystem_P.TmpRTBAtSortieralgorithmus2Inpo;

    /* InitializeConditions for Memory: '<S46>/Memory' */
    Gesamtsystem_DWork.Memory_PreviousInput = Gesamtsystem_P.EdgeDetector1_ic;

    /* InitializeConditions for UnitDelay: '<S45>/Unit Delay3' */
    Gesamtsystem_DWork.UnitDelay3_DSTATE =
      Gesamtsystem_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S45>/Unit Delay4' */
    Gesamtsystem_DWork.UnitDelay4_DSTATE =
      Gesamtsystem_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S45>/Unit Delay5' */
    Gesamtsystem_DWork.UnitDelay5_DSTATE =
      Gesamtsystem_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S45>/Unit Delay1' */
    Gesamtsystem_DWork.UnitDelay1_DSTATE =
      Gesamtsystem_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Memory: '<S47>/Memory' */
    Gesamtsystem_DWork.Memory_PreviousInput_k = Gesamtsystem_P.EdgeDetector2_ic;

    /* InitializeConditions for UnitDelay: '<S45>/Unit Delay2' */
    Gesamtsystem_DWork.UnitDelay2_DSTATE_a =
      Gesamtsystem_P.UnitDelay2_InitialCondition_h;

    /* InitializeConditions for RateTransition: '<S3>/TmpRTBAtChart7Inport4' */
    Gesamtsystem_DWork.TmpRTBAtChart7Inport4_Buffer0 =
      Gesamtsystem_P.TmpRTBAtChart7Inport4_InitialCo;

    /* SystemInitialize for Chart: '<S2>/Motorsteuerung bei der Uebergabe' */
    Gesamtsystem_DWork.temporalCounter_i1 = 0U;
    Gesamtsystem_DWork.is_active_c9_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for S-Function (c28xisr_c2000): '<S14>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S14>/Triggered Subsystem'
     */
    /* System initialize for function-call system: '<S14>/Triggered Subsystem' */
    {
      int16_T i;

      /* InitializeConditions for Delay: '<S30>/Delay' */
      for (i = 0; i < 10; i++) {
        Gesamtsystem_DWork.Delay_DSTATE[i] =
          Gesamtsystem_P.Delay_InitialCondition;
      }

      /* End of InitializeConditions for Delay: '<S30>/Delay' */
    }

    /* End of SystemInitialize for S-Function (c28xisr_c2000): '<S14>/C28x Hardware Interrupt' */

    /* SystemInitialize for Chart: '<S14>/Chart8' */
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

    /* End of SystemInitialize for Chart: '<S14>/Chart8' */

    /* SystemInitialize for Chart: '<S14>/Chart6' */
    Gesamtsystem_DWork.is_active_c16_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S14>/Chart2' */
    Gesamtsystem_DWork.is_active_c13_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S14>/Chart4' */
    Gesamtsystem_DWork.is_active_c14_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
    Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.temporalCounter_i1_m = 0U;
    Gesamtsystem_DWork.is_active_c5_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Atomic SubSystem: '<S2>/Navigationssystem [Einstellungen moeglich]' */
    /* SystemInitialize for Chart: '<S18>/Quadrantenteiler' */
    Gesamtsystem_DWork.is_active_c11_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S18>/Winkelausgabe fuer Ausrichtung' */
    Gesamtsystem_DWork.is_active_c12_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S13>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
    Gesamtsystem_DWork.is_active_c8_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c8_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S13>/Fahrsystem' */
    Gesamtsystem_DWork.is_active_c7_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* End of SystemInitialize for SubSystem: '<S2>/Navigationssystem [Einstellungen moeglich]' */

    /* SystemInitialize for Chart: '<S4>/Beendigung-Ansteuerung' */
    Gesamtsystem_DWork.is_active_c3_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S5>/Zylindermotor-Ansteuerung Folgende Werte sind einstellbar: - Drehstaerke (in %) (-> ZM_pwm_out in "Ausfuerung") - Drehrichtung (rechts = 0, links = 1) (-> ZM_r_l_out in "Init_und_Warten") - Drehdauer (-> zwischen "Ausfuehrung" und "Beendet") - Ausfuehrungspunkt (in mm) [durch Wechsel der Soll-Position] (-> zwischen "Init_und_Start" und "Ausfuehrung) Wichtig! Der Ausfuerungspunkt haengt von den EXAKTEN Soll-Werten aus der Fahrablaufsteuerung im Nexonar-System ab.' */
    Gesamtsystem_DWork.temporalCounter_i1_gl = 0U;
    Gesamtsystem_DWork.is_active_c6_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c6_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S14>/Chart1' */
    Gesamtsystem_DWork.is_active_c1_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    for (i = 0; i < 16; i++) {
      /* SystemInitialize for Chart: '<S14>/Chart6' */
      Gesamtsystem_B.int16x_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S14>/Chart2' */
      Gesamtsystem_B.int16y_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S14>/Chart4' */
      Gesamtsystem_B.int16a1_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S14>/Chart1' */
      Gesamtsystem_B.int16z_bin[i] = 0.0F;
    }

    /* InitializeConditions for MATLABSystem: '<S3>/Moving Average2' */
    if (Gesamtsystem_DWork.obj.pStatistic->isInitialized == 1L) {
      Gesamtsystem_DWork.obj.pStatistic->pwN = 1.0;
      Gesamtsystem_DWork.obj.pStatistic->pmN = 0.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S3>/Moving Average2' */

    /* SystemInitialize for Chart: '<S3>/Sortieralgorithmus2' */
    Gesamtsystem_DWork.temporalCounter_i1_o = 0U;
    Gesamtsystem_DWork.is_active_c42_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Chart8' */
    Gesamtsystem_DWork.temporalCounter_i1_a = 0U;
    Gesamtsystem_DWork.is_active_c39_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Chart7' */
    Gesamtsystem_DWork.temporalCounter_i1_g = 0U;
    Gesamtsystem_DWork.is_active_c38_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Chart6' */
    Gesamtsystem_DWork.temporalCounter_i1_ok = 0U;
    Gesamtsystem_DWork.is_active_c37_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;
  }
}

/* Model terminate function */
void Gesamtsystem_terminate(void)
{
  /* Terminate for MATLABSystem: '<S3>/Moving Average2' */
  matlabCodegenHandle_matlabCodeg(&Gesamtsystem_DWork.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
