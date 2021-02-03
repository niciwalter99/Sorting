/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Gesamtsystem.c
 *
 * Code generated for Simulink model 'Gesamtsystem'.
 *
 * Model version                  : 1.80
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Feb  1 18:19:51 2021
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
#define Gesamts_IN_x5_valid_data_found1 (6U)
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
#define Gesamtsystem_IN_Anfahrpunkt_2  (6U)
#define Gesamtsystem_IN_Anfahrpunkt_3  (7U)
#define Gesamtsystem_IN_Anfahrpunkt_4  (8U)
#define Gesamtsystem_IN_Anfahrpunkt_5  (9U)
#define Gesamtsystem_IN_Anfahrpunkt_6  (10U)
#define Gesamtsystem_IN_Anfahrpunkt_7  (11U)
#define Gesamtsystem_IN_Anfahrpunkt_8  (12U)
#define Gesamtsystem_IN_Anfahrpunkt_9  (13U)
#define Gesamtsystem_IN_Black          (1U)
#define Gesamtsystem_IN_BlueCube       (2U)
#define Gesamtsystem_IN_Daten_einlesen (1U)
#define Gesamtsystem_IN_DetectedCube   (3U)
#define Gesamtsystem_IN_Ende           (1U)
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
#define Gesamtsystem_IN_Start_Warten   (6U)
#define Gesamtsystem_IN_Start_Warten_b (5U)
#define Gesamtsystem_IN_Start_Warten_ba (2U)
#define Gesamtsystem_IN_Uebergabe      (5U)
#define Gesamtsystem_IN_Wechsel_1      (4U)
#define Gesamtsystem_IN_Wechsel_10     (15U)
#define Gesamtsystem_IN_Wechsel_11     (16U)
#define Gesamtsystem_IN_Wechsel_12     (17U)
#define Gesamtsystem_IN_Wechsel_13     (18U)
#define Gesamtsystem_IN_Wechsel_1_b    (14U)
#define Gesamtsystem_IN_Wechsel_2      (5U)
#define Gesamtsystem_IN_Wechsel_2_b    (19U)
#define Gesamtsystem_IN_Wechsel_3      (6U)
#define Gesamtsystem_IN_Wechsel_3_b    (20U)
#define Gesamtsystem_IN_Wechsel_4      (21U)
#define Gesamtsystem_IN_Wechsel_5      (22U)
#define Gesamtsystem_IN_Wechsel_6      (23U)
#define Gesamtsystem_IN_Wechsel_7      (24U)
#define Gesamtsystem_IN_Wechsel_8      (25U)
#define Gesamtsystem_IN_Wechsel_9      (26U)
#define Gesamtsystem_IN_close          (1U)
#define Gesamtsystem_IN_closeGate      (3U)
#define Gesamtsystem_IN_cubeLoaded     (5U)
#define Gesamtsystem_IN_firstEntry     (4U)
#define Gesamtsystem_IN_goToMagacin    (5U)
#define Gesamtsystem_IN_goToZero       (6U)
#define Gesamtsystem_IN_init           (2U)
#define Gesamtsystem_IN_open           (3U)
#define Gesamtsystem_IN_openGate       (7U)
#define Gesamtsystem_IN_open_b         (2U)
#define Gesamtsystem_IN_setupVariable  (7U)
#define Gesamtsystem_IN_wait           (4U)
#define Gesamtsystem_IN_waitForCube    (9U)
#define Gesamtsystem_IN_wait_b         (8U)
#define Gesamtsystem_IN_wait_ba        (3U)
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
static void Gesamtsystem_Wechsel_10(void);
static void Gesamtsystem_Wechsel_11(void);
static void Gesamtsystem_Wechsel_12(void);
static void Gesamtsystem_Wechsel_2(void);
static void Gesamtsystem_Wechsel_3(void);
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

/* Hardware Interrupt Block: '<S12>/C28x Hardware Interrupt' */
void isr_int8pie2_task_fcn(void)
{
  /* Call the system: <S12>/Triggered Subsystem */
  {
    int16_T i;

    /* S-Function (c28xisr_c2000): '<S12>/C28x Hardware Interrupt' */

    /* Output and update for function-call system: '<S12>/Triggered Subsystem' */
    {
      int16_T i;

      /* S-Function (c280xi2c_rx): '<S28>/I2C Receive' */
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
        /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn2' */
        Gesamtsystem_B.VectorConcatenate[i + 10] =
          Gesamtsystem_B.I2CReceive_o1[i];

        /* Delay: '<S28>/Delay' */
        Gesamtsystem_B.VectorConcatenate[i] = Gesamtsystem_DWork.Delay_DSTATE[i];

        /* Update for Delay: '<S28>/Delay' */
        Gesamtsystem_DWork.Delay_DSTATE[i] = Gesamtsystem_B.I2CReceive_o1[i];
      }
    }

    /* End of Outputs for S-Function (c28xisr_c2000): '<S12>/C28x Hardware Interrupt' */

    /* RateTransition: '<S12>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Gesamtsystem_DWork.RateTransition_Buffer[i +
        (Gesamtsystem_DWork.RateTransition_semaphoreTaken == 0) * 20] =
        Gesamtsystem_B.VectorConcatenate[i];
    }

    Gesamtsystem_DWork.RateTransition_ActiveBufIdx =
      (Gesamtsystem_DWork.RateTransition_semaphoreTaken == 0);

    /* End of RateTransition: '<S12>/Rate Transition' */
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

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Gesamtsystem_M->Timing.TaskCounters.TID[1])++;
  if ((Gesamtsystem_M->Timing.TaskCounters.TID[1]) > 499) {/* Sample time: [0.01s, 0.0s] */
    Gesamtsystem_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for enable system:
 *    '<S43>/NEGATIVE Edge'
 *    '<S44>/NEGATIVE Edge'
 */
void Gesamtsystem_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_NEGATIVEEdge_Gesamtsystem *localB)
{
  /* Outputs for Enabled SubSystem: '<S43>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S48>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S48>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S43>/NEGATIVE Edge' */
}

/*
 * Output and update for enable system:
 *    '<S43>/POSITIVE Edge'
 *    '<S44>/POSITIVE Edge'
 */
void Gesamtsystem_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_POSITIVEEdge_Gesamtsystem *localB)
{
  /* Outputs for Enabled SubSystem: '<S43>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S49>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S49>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S43>/POSITIVE Edge' */
}

/*
 * Output and update for atomic system:
 *    '<S42>/MATLAB Function1'
 *    '<S42>/MATLAB Function3'
 */
void Gesamtsyste_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt,
  rtB_MATLABFunction1_Gesamtsyste *localB)
{
  /* MATLAB Function 'Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1': '<S45>:1' */
  /* '<S45>:1:3' */
  localB->y = rtu_yalt + (real32_T)rtu_u;
}

/* Function for Chart: '<S12>/Chart8' */
static void Gesam_enter_atomic_wert_erkannt(void)
{
  /* Entry 'wert_erkannt': '<S26>:109' */
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
static void Gesamtsystem_Wechsel_10(void)
{
  /* During 'Wechsel_10': '<S8>:1079' */
  /* Transition: '<S8>:1054' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_11;

  /* Entry 'Anfahrpunkt_11': '<S8>:1080' */
  Gesamtsystem_B.x_soll = 900.0;
  Gesamtsystem_B.y_soll = 0.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_11(void)
{
  /* During 'Wechsel_11': '<S8>:1081' */
  /* Transition: '<S8>:1056' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_12;

  /* Entry 'Anfahrpunkt_12': '<S8>:1082' */
  Gesamtsystem_B.x_soll = 1200.0;
  Gesamtsystem_B.y_soll = 0.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_12(void)
{
  /* During 'Wechsel_12': '<S8>:1083' */
  /* Transition: '<S8>:1058' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_13;

  /* Entry 'Anfahrpunkt_13': '<S8>:1084' */
  Gesamtsystem_B.x_soll = 1380.0;
  Gesamtsystem_B.y_soll = -80.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_2(void)
{
  /* During 'Wechsel_2': '<S8>:1063' */
  /* Transition: '<S8>:1037' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_3;

  /* Entry 'Anfahrpunkt_3': '<S8>:1064' */
  Gesamtsystem_B.x_soll = 900.0;
  Gesamtsystem_B.y_soll = 675.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_3(void)
{
  /* During 'Wechsel_3': '<S8>:1065' */
  /* Transition: '<S8>:1040' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_4;

  /* Entry 'Anfahrpunkt_4': '<S8>:1066' */
  Gesamtsystem_B.x_soll = 850.0;
  Gesamtsystem_B.y_soll = 750.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_4(void)
{
  /* During 'Wechsel_4': '<S8>:1067' */
  /* Transition: '<S8>:1042' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_5;

  /* Entry 'Anfahrpunkt_5': '<S8>:1069' */
  Gesamtsystem_B.x_soll = 600.0;
  Gesamtsystem_B.y_soll = 825.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_5(void)
{
  /* During 'Wechsel_5': '<S8>:1071' */
  /* Transition: '<S8>:1046' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_6;

  /* Entry 'Anfahrpunkt_6': '<S8>:1072' */
  Gesamtsystem_B.x_soll = 500.0;
  Gesamtsystem_B.y_soll = 825.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_6(void)
{
  /* During 'Wechsel_6': '<S8>:1073' */
  /* Transition: '<S8>:1048' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_7;

  /* Entry 'Anfahrpunkt_7': '<S8>:1074' */
  Gesamtsystem_B.x_soll = 325.0;
  Gesamtsystem_B.y_soll = 725.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_7(void)
{
  /* During 'Wechsel_7': '<S8>:1075' */
  /* Transition: '<S8>:1050' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_8;

  /* Entry 'Anfahrpunkt_8': '<S8>:1076' */
  Gesamtsystem_B.x_soll = 400.0;
  Gesamtsystem_B.y_soll = 200.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_8(void)
{
  /* During 'Wechsel_8': '<S8>:1077' */
  if (Gesamtsystem_DWork.Counter == 8.0) {
    /* Transition: '<S8>:1045' */
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_9;

    /* Entry 'Anfahrpunkt_9': '<S8>:1070' */
    Gesamtsystem_B.x_soll = 890.0;
    Gesamtsystem_B.y_soll = 275.0;
  } else {
    /* Transition: '<S8>:1052' */
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_10;

    /* Entry 'Anfahrpunkt_10': '<S8>:1078' */
    Gesamtsystem_B.x_soll = 600.0;
    Gesamtsystem_B.y_soll = 0.0;
  }
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Sammeln(void)
{
  /* During 'Sammeln': '<S8>:1032' */
  if (Gesamtsystem_DWork.Counter == 19.0) {
    /* Transition: '<S8>:1086' */
    Gesamtsystem_B.Gang = 1.0;
    Gesamtsystem_DWork.x_least = Gesamtsystem_B.x_soll;

    /* Exit Internal 'Sammeln': '<S8>:1032' */
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Uebergabe;

    /* Entry Internal 'Uebergabe': '<S8>:1021' */
    /* Transition: '<S8>:1022' */
    Gesamtsystem_DWork.Counter = 0.0;
    Gesamtsystem_DWork.is_Uebergabe = Ge_IN_Uebergabepunkt_x_Richtung;

    /* Entry 'Uebergabepunkt_x_Richtung': '<S8>:1027' */
    Gesamtsystem_B.x_soll = 1373.0;
  } else {
    switch (Gesamtsystem_DWork.is_Sammeln) {
     case Gesamtsystem_IN_Anfahrpunkt_1:
      /* During 'Anfahrpunkt_1': '<S8>:1060' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1034' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_1_b;

        /* Entry 'Wechsel_1': '<S8>:1061' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_10:
      /* During 'Anfahrpunkt_10': '<S8>:1078' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1053' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_10;

        /* Entry 'Wechsel_10': '<S8>:1079' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_11:
      /* During 'Anfahrpunkt_11': '<S8>:1080' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1055' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_11;

        /* Entry 'Wechsel_11': '<S8>:1081' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_12:
      /* During 'Anfahrpunkt_12': '<S8>:1082' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1057' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_12;

        /* Entry 'Wechsel_12': '<S8>:1083' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_13:
      /* During 'Anfahrpunkt_13': '<S8>:1084' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1059' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_13;

        /* Entry 'Wechsel_13': '<S8>:1085' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_2:
      /* During 'Anfahrpunkt_2': '<S8>:1062' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1036' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_2_b;

        /* Entry 'Wechsel_2': '<S8>:1063' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_3:
      /* During 'Anfahrpunkt_3': '<S8>:1064' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1039' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_3_b;

        /* Entry 'Wechsel_3': '<S8>:1065' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_4:
      /* During 'Anfahrpunkt_4': '<S8>:1066' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1041' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_4;

        /* Entry 'Wechsel_4': '<S8>:1067' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_5:
      /* During 'Anfahrpunkt_5': '<S8>:1069' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1044' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_5;

        /* Entry 'Wechsel_5': '<S8>:1071' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_6:
      /* During 'Anfahrpunkt_6': '<S8>:1072' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1047' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_6;

        /* Entry 'Wechsel_6': '<S8>:1073' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_7:
      /* During 'Anfahrpunkt_7': '<S8>:1074' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1049' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_7;

        /* Entry 'Wechsel_7': '<S8>:1075' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_8:
      /* During 'Anfahrpunkt_8': '<S8>:1076' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1051' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_8;

        /* Entry 'Wechsel_8': '<S8>:1077' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_9:
      /* During 'Anfahrpunkt_9': '<S8>:1070' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1043' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_9;

        /* Entry 'Wechsel_9': '<S8>:1068' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Wechsel_1_b:
      /* During 'Wechsel_1': '<S8>:1061' */
      /* Transition: '<S8>:1035' */
      Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_2;

      /* Entry 'Anfahrpunkt_2': '<S8>:1062' */
      Gesamtsystem_B.x_soll = 850.0;
      Gesamtsystem_B.y_soll = 0.0;
      break;

     case Gesamtsystem_IN_Wechsel_10:
      Gesamtsystem_Wechsel_10();
      break;

     case Gesamtsystem_IN_Wechsel_11:
      Gesamtsystem_Wechsel_11();
      break;

     case Gesamtsystem_IN_Wechsel_12:
      Gesamtsystem_Wechsel_12();
      break;

     case Gesamtsystem_IN_Wechsel_13:
      /* During 'Wechsel_13': '<S8>:1085' */
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
      /* During 'Wechsel_9': '<S8>:1068' */
      /* Transition: '<S8>:1038' */
      Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_3;

      /* Entry 'Anfahrpunkt_3': '<S8>:1064' */
      Gesamtsystem_B.x_soll = 900.0;
      Gesamtsystem_B.y_soll = 675.0;
      break;
    }
  }
}

/* Function for Chart: '<S11>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
static void enter_atomic_Drehstillstand_mit(void)
{
  real_T tmp;

  /* Entry 'Drehstillstand_mit_Ausrichtungsregelung': '<S13>:26' */
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

/* Function for Chart: '<S11>/Fahrsystem' */
static void Gesamtsystem_Start_Warten(void)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Start_Warten': '<S14>:92' */
  /* Transition: '<S14>:93' */
  l_mindern = fabs(Gesamtsystem_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (Gesamtsystem_B.PWMWertebereich > 0.0)) {
    /* Transition: '<S14>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S14>:21' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S14>:45' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsyste_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S14>:8' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S14>:57' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsyst_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S14>:9' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S14>:53' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S14>:54' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesam_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S14>:43' */
        Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S14>:55' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesa_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S14>:51' */
        Gesamtsystem_B.pwm_out_l = 59.0 + l_mindern;
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S14>:82' */
    if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S14>:85' */
      l_mindern = 1.0 - Gesamtsystem_B.Gang;
      r_mindern = Gesamtsystem_B.Gang;
    } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S14>:86' */
      l_mindern = Gesamtsystem_B.Gang;
      r_mindern = 1.0 - Gesamtsystem_B.Gang;
    } else {
      /* Transition: '<S14>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    Gesamtsystem_DWork.is_c11_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S14>:94' */
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

/* Function for Chart: '<S11>/Fahrsystem' */
static void Gesamtsystem_Drehen_links_max(void)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Drehen_links_max': '<S14>:8' */
  /* Transition: '<S14>:60' */
  /* Transition: '<S14>:75' */
  l_mindern = fabs(Gesamtsystem_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (Gesamtsystem_B.PWMWertebereich > 0.0)) {
    /* Transition: '<S14>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S14>:21' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S14>:45' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsyste_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S14>:8' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S14>:57' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsyst_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S14>:9' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S14>:53' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S14>:54' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesam_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S14>:43' */
        Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S14>:55' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesa_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S14>:51' */
        Gesamtsystem_B.pwm_out_l = 59.0 + l_mindern;
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S14>:82' */
    if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S14>:85' */
      l_mindern = 1.0 - Gesamtsystem_B.Gang;
      r_mindern = Gesamtsystem_B.Gang;
    } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S14>:86' */
      l_mindern = Gesamtsystem_B.Gang;
      r_mindern = 1.0 - Gesamtsystem_B.Gang;
    } else {
      /* Transition: '<S14>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    Gesamtsystem_DWork.is_c11_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S14>:94' */
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

/* Function for Chart: '<S3>/Sortieralgorithmus' */
static real_T Gesamtsystem_findPlaceForBlue(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForBlue': '<S37>:206' */
  if (Gesamtsystem_DWork.magacin0 == 4.0) {
    /* '<S37>:206:4' */
    /* '<S37>:206:5' */
    magacinOut = 0.0;

    /* '<S37>:206:6' */
    Gesamtsystem_DWork.magacin0++;

    /* '<S37>:206:7' */
  } else if ((Gesamtsystem_DWork.magacin2 == 0.0) ||
             ((Gesamtsystem_DWork.magacin2_LastCube == 2.0) &&
              (Gesamtsystem_DWork.magacin2 < 5.0))) {
    /* '<S37>:206:9' */
    /* '<S37>:206:10' */
    magacinOut = 2.0;

    /* '<S37>:206:11' */
    Gesamtsystem_DWork.magacin2++;

    /* '<S37>:206:12' */
    Gesamtsystem_DWork.magacin2_LastCube = 1.0;
  } else if ((Gesamtsystem_DWork.magacin1_LastCube == 2.0) &&
             (Gesamtsystem_DWork.magacin1 < 5.0)) {
    /* '<S37>:206:14' */
    /* '<S37>:206:15' */
    magacinOut = 1.0;

    /* '<S37>:206:16' */
    Gesamtsystem_DWork.magacin1++;

    /* '<S37>:206:17' */
    Gesamtsystem_DWork.magacin1_LastCube = 1.0;
  } else if (Gesamtsystem_DWork.magacin3 < 5.0) {
    /* '<S37>:206:19' */
    /* '<S37>:206:20' */
    magacinOut = 3.0;

    /* '<S37>:206:21' */
    Gesamtsystem_DWork.magacin3++;
  } else if (Gesamtsystem_DWork.magacin4 < 5.0) {
    /* '<S37>:206:23' */
    /* '<S37>:206:24' */
    magacinOut = 4.0;

    /* '<S37>:206:25' */
    Gesamtsystem_DWork.magacin4++;
  } else if (Gesamtsystem_DWork.magacin5 < 5.0) {
    /* '<S37>:206:27' */
    /* '<S37>:206:28' */
    magacinOut = 5.0;

    /* '<S37>:206:29' */
    Gesamtsystem_DWork.magacin5++;
  } else {
    /* '<S37>:206:32' */
    magacinOut = -1.0;
  }

  return magacinOut;
}

/* Function for Chart: '<S3>/Sortieralgorithmus' */
static real_T Gesamtsystem_findPlaceForRed(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForRed': '<S37>:204' */
  if ((Gesamtsystem_DWork.magacin1 == 0.0) ||
      ((Gesamtsystem_DWork.magacin1_LastCube == 1.0) &&
       (Gesamtsystem_DWork.magacin1 < 5.0))) {
    /* '<S37>:204:3' */
    /* '<S37>:204:4' */
    magacinOut = 1.0;

    /* '<S37>:204:5' */
    Gesamtsystem_DWork.magacin1++;

    /* '<S37>:204:6' */
    Gesamtsystem_DWork.magacin1_LastCube = 2.0;
  } else if ((Gesamtsystem_DWork.magacin2_LastCube == 1.0) &&
             (Gesamtsystem_DWork.magacin2 < 5.0)) {
    /* '<S37>:204:8' */
    /* '<S37>:204:9' */
    magacinOut = 2.0;

    /* '<S37>:204:10' */
    Gesamtsystem_DWork.magacin2++;

    /* '<S37>:204:11' */
    Gesamtsystem_DWork.magacin2_LastCube = 2.0;
  } else if (Gesamtsystem_DWork.magacin0 != 5.0) {
    /* '<S37>:204:13' */
    /* '<S37>:204:14' */
    magacinOut = 0.0;

    /* '<S37>:204:15' */
    Gesamtsystem_DWork.magacin0++;

    /* '<S37>:204:16' */
  } else if (Gesamtsystem_DWork.magacin3 != 5.0) {
    /* '<S37>:204:19' */
    /* '<S37>:204:20' */
    magacinOut = 3.0;

    /* '<S37>:204:21' */
    Gesamtsystem_DWork.magacin3++;

    /* '<S37>:204:22' */
  } else if ((Gesamtsystem_DWork.magacin1 <= Gesamtsystem_DWork.magacin4) &&
             (Gesamtsystem_DWork.magacin1 != 5.0)) {
    /* '<S37>:204:24' */
    /* '<S37>:204:25' */
    magacinOut = 1.0;

    /* '<S37>:204:26' */
    Gesamtsystem_DWork.magacin1++;

    /* '<S37>:204:27' */
    Gesamtsystem_DWork.magacin1_LastCube = 2.0;
  } else if (Gesamtsystem_DWork.magacin1 > Gesamtsystem_DWork.magacin4) {
    /* '<S37>:204:29' */
    /* '<S37>:204:30' */
    magacinOut = 4.0;

    /* '<S37>:204:31' */
    Gesamtsystem_DWork.magacin4++;
  } else if ((Gesamtsystem_DWork.magacin2 <= Gesamtsystem_DWork.magacin5) &&
             (Gesamtsystem_DWork.magacin2 != 5.0)) {
    /* '<S37>:204:34' */
    /* '<S37>:204:35' */
    magacinOut = 2.0;

    /* '<S37>:204:36' */
    Gesamtsystem_DWork.magacin2++;

    /* '<S37>:204:37' */
    Gesamtsystem_DWork.magacin2_LastCube = 2.0;
  } else if (Gesamtsystem_DWork.magacin2 > Gesamtsystem_DWork.magacin5) {
    /* '<S37>:204:39' */
    /* '<S37>:204:41' */
    magacinOut = 5.0;

    /* '<S37>:204:42' */
    Gesamtsystem_DWork.magacin5++;

    /* '<S37>:204:43' */
  } else {
    /* '<S37>:204:46' */
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
  boolean_T rtb_VergleichmitSchwellwert_f;
  real_T rtb_Sum;
  real_T rtb_MultiportSwitch_idx_0;
  real_T rtb_MultiportSwitch_idx_1;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_1;

  {                                    /* Sample time: [2.0E-5s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (c280xadc): '<S3>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
  {
    AdcRegs.ADCTRL2.bit.RST_SEQ1 = 1;  /* Reset SEQ1 module*/
    AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;/*clear INT sequencer*/
    AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;  /* Software Trigger*/
    while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {
    }                                  /*Wait for Sequencer INT bit to clear */

    asm(" RPT #11 || NOP");
    Gesamtsystem_B.AnalogDigitalWandlungSampletime = (AdcRegs.ADCRESULT0) >> 4;
    Gesamtsystem_B.AnalogDigitalWandlungSampleti_i = (AdcRegs.ADCRESULT1) >> 4;
    Gesamtsystem_B.AnalogDigitalWandlungSampleti_g = (AdcRegs.ADCRESULT2) >> 4;
    Gesamtsystem_B.AnalogDigitalWandlungSampleti_d = (AdcRegs.ADCRESULT3) >> 4;
  }

  /* RelationalOperator: '<S42>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S42>/Constant'
   */
  rtb_VergleichmitSchwellwert = (Gesamtsystem_P.Constant_Value <=
    Gesamtsystem_B.AnalogDigitalWandlungSampleti_g);

  /* MultiPortSwitch: '<S43>/Multiport Switch' incorporates:
   *  Constant: '<S43>/Constant1'
   *  Constant: '<S43>/either edge'
   *  Constant: '<S43>/neg. edge'
   *  Constant: '<S43>/pos. edge'
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

  /* End of MultiPortSwitch: '<S43>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S43>/POSITIVE Edge' */
  /* Memory: '<S43>/Memory' */
  Gesamtsystem_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert, Gesamtsystem_DWork.Memory_PreviousInput,
    &Gesamtsystem_B.POSITIVEEdge);

  /* End of Outputs for SubSystem: '<S43>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S43>/NEGATIVE Edge' */
  Gesamtsystem_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert, Gesamtsystem_DWork.Memory_PreviousInput,
    &Gesamtsystem_B.NEGATIVEEdge);

  /* End of Outputs for SubSystem: '<S43>/NEGATIVE Edge' */

  /* RelationalOperator: '<S42>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S42>/Heuristisch ermittelter Schwellwert'
   */
  rtb_VergleichmitSchwellwert_f =
    (Gesamtsystem_B.AnalogDigitalWandlungSampleti_d <=
     Gesamtsystem_P.HeuristischermittelterSchwellwe);

  /* MATLAB Function: '<S42>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S42>/Unit Delay3'
   *  UnitDelay: '<S42>/Unit Delay4'
   *  UnitDelay: '<S42>/Unit Delay5'
   */
  /* MATLAB Function 'Subsystem/getAngle/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2': '<S46>:1' */
  /* '<S46>:1:3' */
  y = 1.0;
  tmp_0 = !Gesamtsystem_DWork.UnitDelay3_DSTATE;
  tmp_1 = !Gesamtsystem_DWork.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_f))
  {
    /* '<S46>:1:7' */
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_f) {
    /* '<S46>:1:10' */
    /* '<S46>:1:11' */
    y = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_f)) {
    /* '<S46>:1:14' */
    /* '<S46>:1:15' */
    y = -1.0;
  }

  tmp_0 = (tmp_0 && Gesamtsystem_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_f))
  {
    /* '<S46>:1:22' */
    /* '<S46>:1:23' */
    y = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_f)
  {
    /* '<S46>:1:26' */
    /* '<S46>:1:27' */
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_f) {
    /* '<S46>:1:34' */
    /* '<S46>:1:35' */
    y = 1.0;
  }

  tmp_0 = (Gesamtsystem_DWork.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_f))
  {
    /* '<S46>:1:38' */
    /* '<S46>:1:39' */
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_f))
  {
    /* '<S46>:1:46' */
    /* '<S46>:1:47' */
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_f) {
    /* '<S46>:1:50' */
    /* '<S46>:1:51' */
    y = -1.0;
  }

  tmp_0 = (Gesamtsystem_DWork.UnitDelay3_DSTATE &&
           Gesamtsystem_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_f)
  {
    /* '<S46>:1:58' */
    /* '<S46>:1:59' */
    y = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_f))
  {
    /* '<S46>:1:62' */
    /* '<S46>:1:63' */
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_f) {
    /* '<S46>:1:66' */
    /* '<S46>:1:67' */
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (y == 1.0) {
    /* '<S46>:1:70' */
    /* '<S46>:1:71' */
    Gesamtsystem_B.RL = 1.0;
  } else {
    /* '<S46>:1:73' */
    Gesamtsystem_B.RL = 0.0;
  }

  /* MATLAB Function: '<S42>/MATLAB Function1' incorporates:
   *  Logic: '<S43>/Logical Operator1'
   *  MATLAB Function: '<S42>/MATLAB Function2'
   *  Product: '<S42>/Product3'
   *  UnitDelay: '<S42>/Unit Delay1'
   */
  Gesamtsyste_MATLABFunction1((real_T)
    (Gesamtsystem_B.POSITIVEEdge.RelationalOperator1 ||
     Gesamtsystem_B.NEGATIVEEdge.RelationalOperator1) * y,
    Gesamtsystem_DWork.UnitDelay1_DSTATE, &Gesamtsystem_B.sf_MATLABFunction1);

  /* Product: '<S42>/Product1' incorporates:
   *  Constant: '<S42>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
   */
  rtb_Sum = Gesamtsystem_P.WinkelFlankePolulo3416V022Polul *
    Gesamtsystem_B.sf_MATLABFunction1.y;

  /* MultiPortSwitch: '<S44>/Multiport Switch' incorporates:
   *  Constant: '<S44>/Constant1'
   *  Constant: '<S44>/either edge'
   *  Constant: '<S44>/neg. edge'
   *  Constant: '<S44>/pos. edge'
   */
  switch ((int16_T)Gesamtsystem_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = Gesamtsystem_P.posedge_Value_b[0];
    rtb_MultiportSwitch_idx_1 = Gesamtsystem_P.posedge_Value_b[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = Gesamtsystem_P.negedge_Value_h[0];
    rtb_MultiportSwitch_idx_1 = Gesamtsystem_P.negedge_Value_h[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = Gesamtsystem_P.eitheredge_Value_g[0];
    rtb_MultiportSwitch_idx_1 = Gesamtsystem_P.eitheredge_Value_g[1];
    break;
  }

  /* End of MultiPortSwitch: '<S44>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S44>/POSITIVE Edge' */
  /* Memory: '<S44>/Memory' */
  Gesamtsystem_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_f, Gesamtsystem_DWork.Memory_PreviousInput_a,
    &Gesamtsystem_B.POSITIVEEdge_j);

  /* End of Outputs for SubSystem: '<S44>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S44>/NEGATIVE Edge' */
  Gesamtsystem_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_f, Gesamtsystem_DWork.Memory_PreviousInput_a,
    &Gesamtsystem_B.NEGATIVEEdge_i);

  /* End of Outputs for SubSystem: '<S44>/NEGATIVE Edge' */

  /* MATLAB Function: '<S42>/MATLAB Function3' incorporates:
   *  Logic: '<S44>/Logical Operator1'
   *  MATLAB Function: '<S42>/MATLAB Function2'
   *  Product: '<S42>/Product'
   *  UnitDelay: '<S42>/Unit Delay2'
   */
  Gesamtsyste_MATLABFunction1(y * (real_T)
    (Gesamtsystem_B.POSITIVEEdge_j.RelationalOperator1 ||
     Gesamtsystem_B.NEGATIVEEdge_i.RelationalOperator1),
    Gesamtsystem_DWork.UnitDelay2_DSTATE, &Gesamtsystem_B.sf_MATLABFunction3);

  /* Sum: '<S42>/Sum' incorporates:
   *  Constant: '<S42>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S42>/Product2'
   */
  rtb_Sum += Gesamtsystem_B.sf_MATLABFunction3.y *
    Gesamtsystem_P.WinkelFlankePolulo3416V022Pol_o;

  /* RateTransition: '<S38>/Rate Transition3' */
  if (Gesamtsystem_M->Timing.RateInteraction.TID0_1) {
    Gesamtsystem_B.RateTransition3 = rtb_Sum;

    /* RateTransition: '<S3>/Rate Transition2' */
    Gesamtsystem_B.RateTransition2 =
      Gesamtsystem_B.AnalogDigitalWandlungSampletime;

    /* RateTransition: '<S3>/Rate Transition3' */
    Gesamtsystem_B.RateTransition3_a =
      Gesamtsystem_B.AnalogDigitalWandlungSampleti_i;
  }

  /* End of RateTransition: '<S38>/Rate Transition3' */

  /* S-Function (c280xgpio_do): '<S38>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
  {
    if (Gesamtsystem_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Update for Memory: '<S43>/Memory' */
  Gesamtsystem_DWork.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S42>/Unit Delay3' */
  Gesamtsystem_DWork.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S42>/Unit Delay4' */
  Gesamtsystem_DWork.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert_f;

  /* Update for UnitDelay: '<S42>/Unit Delay5' incorporates:
   *  MATLAB Function: '<S42>/MATLAB Function2'
   */
  Gesamtsystem_DWork.UnitDelay5_DSTATE = y;

  /* Update for UnitDelay: '<S42>/Unit Delay1' */
  Gesamtsystem_DWork.UnitDelay1_DSTATE = Gesamtsystem_B.sf_MATLABFunction1.y;

  /* Update for Memory: '<S44>/Memory' */
  Gesamtsystem_DWork.Memory_PreviousInput_a = rtb_VergleichmitSchwellwert_f;

  /* Update for UnitDelay: '<S42>/Unit Delay2' */
  Gesamtsystem_DWork.UnitDelay2_DSTATE = Gesamtsystem_B.sf_MATLABFunction3.y;
}

/* Model step function for TID1 */
void Gesamtsystem_step1(void)          /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_y_l;
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

  /* RateTransition: '<S12>/Rate Transition' */
  Gesamtsystem_DWork.RateTransition_semaphoreTaken =
    Gesamtsystem_DWork.RateTransition_ActiveBufIdx;
  j = Gesamtsystem_DWork.RateTransition_semaphoreTaken * 20;
  for (i = 0; i < 20; i++) {
    Gesamtsystem_B.RateTransition[i] =
      Gesamtsystem_DWork.RateTransition_Buffer[i + j];
  }

  /* End of RateTransition: '<S12>/Rate Transition' */

  /* Chart: '<S12>/Chart8' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart8 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart8 */
  if (Gesamtsystem_DWork.is_active_c25_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart8 */
    Gesamtsystem_DWork.is_active_c25_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart8 */
    /* Transition: '<S26>:3' */
    Gesamtsystem_DWork.is_c25_Gesamtsystem = Gesamtsystem_IN_init;

    /* Entry 'init': '<S26>:2' */
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
    switch (Gesamtsystem_DWork.is_c25_Gesamtsystem) {
     case IN_Anfang_found_Schritt_uebertr:
      /* During 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S26>:126' */
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
        /* Transition: '<S26>:144' */
        /* Transition: '<S26>:145' */
        /* Transition: '<S26>:146' */
        /* Transition: '<S26>:151' */
        /* Transition: '<S26>:150' */
        /* Transition: '<S26>:149' */
        /* Transition: '<S26>:147' */
        /* Transition: '<S26>:156' */
        Gesamtsystem_DWork.is_c25_Gesamtsystem = Gesamts_IN_x5_valid_data_found1;

        /* Entry 'x5_valid_data_found1': '<S26>:148' */
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
        /* Transition: '<S26>:135' */
        Gesamtsystem_DWork.is_c25_Gesamtsystem = Gesamtsystem_IN_x1_search1;

        /* Entry 'x1_search1': '<S26>:125' */
        Gesamtsystem_DWork.search = c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1);
      }
      break;

     case Gesamtsystem_IN_init:
      /* During 'init': '<S26>:2' */
      /* Transition: '<S26>:112' */
      Gesamtsystem_DWork.is_c25_Gesamtsystem = Gesamtsystem_IN_wert_erkannt;
      Gesam_enter_atomic_wert_erkannt();
      break;

     case Gesamtsystem_IN_wert_erkannt:
      /* During 'wert_erkannt': '<S26>:109' */
      /* Transition: '<S26>:116' */
      Gesamtsystem_DWork.is_c25_Gesamtsystem = Gesamtsystem_IN_wert_erkannt2;

      /* Entry 'wert_erkannt2': '<S26>:115' */
      Gesamtsystem_DWork.search = 0;
      Gesamtsystem_DWork.counter = c28x_add_s32_s32_s32_sat
        (Gesamtsystem_DWork.counter, 1L);
      break;

     case Gesamtsystem_IN_wert_erkannt2:
      /* During 'wert_erkannt2': '<S26>:115' */
      if (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search] == 88) {
        /* Transition: '<S26>:127' */
        Gesamtsystem_DWork.is_c25_Gesamtsystem = IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S26>:126' */
        Gesamtsystem_DWork.x_found = c28x_add_s32_s32_s32_sat
          (Gesamtsystem_DWork.x_found, 1L);
      } else {
        /* Transition: '<S26>:128' */
        Gesamtsystem_DWork.is_c25_Gesamtsystem = Gesamtsystem_IN_x1_search1;

        /* Entry 'x1_search1': '<S26>:125' */
        Gesamtsystem_DWork.search = c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1);
      }
      break;

     case Gesamtsystem_IN_x1_search1:
      /* During 'x1_search1': '<S26>:125' */
      if (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search] == 88) {
        /* Transition: '<S26>:129' */
        Gesamtsystem_DWork.is_c25_Gesamtsystem = IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S26>:126' */
        Gesamtsystem_DWork.x_found = c28x_add_s32_s32_s32_sat
          (Gesamtsystem_DWork.x_found, 1L);
      } else if (Gesamtsystem_DWork.search < 19) {
        /* Transition: '<S26>:130' */
        Gesamtsystem_DWork.is_c25_Gesamtsystem = Gesamtsystem_IN_x1_search1;

        /* Entry 'x1_search1': '<S26>:125' */
        Gesamtsystem_DWork.search = c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1);
      } else {
        /* Transition: '<S26>:133' */
        Gesamtsystem_DWork.is_c25_Gesamtsystem = Gesamtsystem_IN_wert_erkannt;
        Gesam_enter_atomic_wert_erkannt();
      }
      break;

     default:
      /* During 'x5_valid_data_found1': '<S26>:148' */
      /* Transition: '<S26>:152' */
      Gesamtsystem_DWork.is_c25_Gesamtsystem = Gesamtsystem_IN_wert_erkannt;
      Gesam_enter_atomic_wert_erkannt();
      break;
    }
  }

  /* End of Chart: '<S12>/Chart8' */

  /* S-Function (scominttobit): '<S12>/Integer to Bit Converter2' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values1;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter2[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S12>/Integer to Bit Converter2' */

  /* S-Function (scominttobit): '<S12>/Integer to Bit Converter3' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values2;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter3[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S12>/Integer to Bit Converter3' */

  /* Chart: '<S12>/Chart6' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart6 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart6 */
  if (Gesamtsystem_DWork.is_active_c24_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart6 */
    Gesamtsystem_DWork.is_active_c24_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart6 */
    /* Transition: '<S25>:3' */
    Gesamtsystem_DWork.is_c24_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c24_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S25>:17' */
      /* Transition: '<S25>:24' */
      Gesamtsystem_DWork.is_c24_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S25>:26' */
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
      /* During 'x0': '<S25>:2' */
      /* Transition: '<S25>:7' */
      Gesamtsystem_DWork.is_c24_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S25>:26' */
      /* Transition: '<S25>:25' */
      Gesamtsystem_DWork.is_c24_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S12>/Chart6' */

  /* S-Function (scominttobit): '<S12>/Bit to Integer Converter' */
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

  /* Rounding: '<S12>/Rounding Function' incorporates:
   *  Gain: '<S12>/x in mm'
   *  S-Function (scominttobit): '<S12>/Bit to Integer Converter'
   */
  rtb_RoundingFunction = rt_roundd_snf((real_T)Gesamtsystem_P.xinmm_Gain *
    (real32_T)intVal);

  /* S-Function (scominttobit): '<S12>/Integer to Bit Converter1' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values3;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter1[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S12>/Integer to Bit Converter1' */

  /* S-Function (scominttobit): '<S12>/Integer to Bit Converter4' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values4;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter4[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S12>/Integer to Bit Converter4' */

  /* Chart: '<S12>/Chart2' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart2 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart2 */
  if (Gesamtsystem_DWork.is_active_c17_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart2 */
    Gesamtsystem_DWork.is_active_c17_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart2 */
    /* Transition: '<S23>:3' */
    Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c17_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S23>:17' */
      /* Transition: '<S23>:24' */
      Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S23>:26' */
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
      /* During 'x0': '<S23>:2' */
      /* Transition: '<S23>:7' */
      Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S23>:26' */
      /* Transition: '<S23>:25' */
      Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S12>/Chart2' */

  /* S-Function (scominttobit): '<S12>/Bit to Integer Converter1' */
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

  /* Rounding: '<S12>/Rounding Function1' incorporates:
   *  Gain: '<S12>/y in mm'
   *  S-Function (scominttobit): '<S12>/Bit to Integer Converter1'
   */
  rtb_RoundingFunction1 = rt_roundd_snf((real_T)Gesamtsystem_P.yinmm_Gain *
    (real32_T)intVal);

  /* S-Function (scominttobit): '<S12>/Integer to Bit Converter5' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values5;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter5[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S12>/Integer to Bit Converter5' */

  /* S-Function (scominttobit): '<S12>/Integer to Bit Converter6' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values6;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter6[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S12>/Integer to Bit Converter6' */

  /* Chart: '<S12>/Chart4' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart4 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart4 */
  if (Gesamtsystem_DWork.is_active_c21_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart4 */
    Gesamtsystem_DWork.is_active_c21_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart4 */
    /* Transition: '<S24>:3' */
    Gesamtsystem_DWork.is_c21_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c21_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S24>:17' */
      /* Transition: '<S24>:24' */
      Gesamtsystem_DWork.is_c21_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S24>:26' */
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
      /* During 'x0': '<S24>:2' */
      /* Transition: '<S24>:7' */
      Gesamtsystem_DWork.is_c21_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S24>:26' */
      /* Transition: '<S24>:25' */
      Gesamtsystem_DWork.is_c21_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S12>/Chart4' */

  /* S-Function (scominttobit): '<S12>/Bit to Integer Converter2' */
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

  /* Rounding: '<S12>/Rounding Function2' incorporates:
   *  Gain: '<S12>/alpha in °'
   *  S-Function (scominttobit): '<S12>/Bit to Integer Converter2'
   */
  rtb_RoundingFunction2 = rt_roundd_snf((real_T)Gesamtsystem_P.alphain_Gain *
    (real32_T)intVal);

  /* MATLAB Function: '<S2>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  /* MATLAB Function 'Nexonar-System/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)': '<S9>:1' */
  /* '<S9>:1:3' */
  /* '<S9>:1:4' */
  /* '<S9>:1:5' */
  /* '<S9>:1:8' */
  /* '<S9>:1:9' */
  x_Wagen_tmp = ((rtb_RoundingFunction2 - 15.0) + 30.0) * 2.0 *
    3.1415926535897931 / 360.0;
  Gesamtsystem_B.x_Wagen = rtb_RoundingFunction - rt_roundd_snf(cos(x_Wagen_tmp)
    * 2.5);

  /* '<S9>:1:10' */
  Gesamtsystem_B.y_Wagen = rtb_RoundingFunction1 - rt_roundd_snf(sin(x_Wagen_tmp)
    * 2.5);

  /* Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
  if (Gesamtsystem_DWork.temporalCounter_i1_k < 1023U) {
    Gesamtsystem_DWork.temporalCounter_i1_k++;
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
    /* Transition: '<S8>:45' */
    Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesam_IN_Start_Einstellung_Init;

    /* Entry 'Start_Einstellung_Init': '<S8>:44' */
    Gesamtsystem_B.Zielradius = 10.0;
  } else {
    switch (Gesamtsystem_DWork.is_c5_Gesamtsystem) {
     case Gesamtsystem_IN_Ende:
      /* During 'Ende': '<S8>:132' */
      break;

     case Gesamtsystem_IN_Parken:
      /* During 'Parken': '<S8>:1008' */
      if (Gesamtsystem_DWork.Counter == 3.0) {
        /* Transition: '<S8>:795' */
        /* Exit Internal 'Parken': '<S8>:1008' */
        Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_NO_ACTIVE_CHILD;
        Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Ende;
      } else {
        switch (Gesamtsystem_DWork.is_Parken) {
         case Gesamtsystem_IN_Parken_1:
          /* During 'Parken_1': '<S8>:1015' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S8>:1010' */
            Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S8>:1016' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Parken_2:
          /* During 'Parken_2': '<S8>:1017' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S8>:1012' */
            Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S8>:1018' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Parken_3:
          /* During 'Parken_3': '<S8>:1019' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S8>:1014' */
            Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Wechsel_3;

            /* Entry 'Wechsel_3': '<S8>:1020' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S8>:1016' */
          /* Transition: '<S8>:1011' */
          Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Parken_2;

          /* Entry 'Parken_2': '<S8>:1017' */
          Gesamtsystem_B.x_soll = 1620.0;
          Gesamtsystem_B.y_soll = -135.0;
          break;

         case Gesamtsystem_IN_Wechsel_2:
          /* During 'Wechsel_2': '<S8>:1018' */
          /* Transition: '<S8>:1013' */
          Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Parken_3;

          /* Entry 'Parken_3': '<S8>:1019' */
          Gesamtsystem_B.x_soll = 1640.0;
          Gesamtsystem_B.y_soll = -132.0;
          break;

         default:
          /* During 'Wechsel_3': '<S8>:1020' */
          break;
        }
      }
      break;

     case Gesamtsystem_IN_Sammeln:
      Gesamtsystem_Sammeln();
      break;

     case Gesam_IN_Start_Einstellung_Init:
      Gesamtsystem_B.Zielradius = 10.0;

      /* During 'Start_Einstellung_Init': '<S8>:44' */
      /* Transition: '<S8>:244' */
      Gesamtsystem_B.Gang = 0.0;
      Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Sammeln;

      /* Entry Internal 'Sammeln': '<S8>:1032' */
      /* Transition: '<S8>:1033' */
      Gesamtsystem_DWork.Counter = 0.0;
      Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_1;

      /* Entry 'Anfahrpunkt_1': '<S8>:1060' */
      Gesamtsystem_B.x_soll = 1500.0;
      Gesamtsystem_B.y_soll = 0.0;
      break;

     default:
      /* During 'Uebergabe': '<S8>:1021' */
      if (Gesamtsystem_DWork.Counter == 2.0) {
        /* Transition: '<S8>:1087' */
        Gesamtsystem_B.Gang = 0.0;

        /* Exit Internal 'Uebergabe': '<S8>:1021' */
        Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_NO_ACTIVE_CHILD;
        Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Parken;

        /* Entry Internal 'Parken': '<S8>:1008' */
        /* Transition: '<S8>:1009' */
        Gesamtsystem_DWork.Counter = 0.0;
        Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Parken_1;

        /* Entry 'Parken_1': '<S8>:1015' */
        Gesamtsystem_B.x_soll = 1400.0;
        Gesamtsystem_B.y_soll = -50.0;
      } else {
        switch (Gesamtsystem_DWork.is_Uebergabe) {
         case Ge_IN_Uebergabepunkt_x_Richtung:
          /* During 'Uebergabepunkt_x_Richtung': '<S8>:1027' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S8>:1023' */
            Gesamtsystem_DWork.x_least = Gesamtsystem_B.x_soll;
            Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S8>:1028' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Ge_IN_Uebergabepunkt_y_Richtung:
          /* During 'Uebergabepunkt_y_Richtung': '<S8>:1029' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S8>:1025' */
            Gesamtsystem_DWork.is_Uebergabe = Gesamtsyste_IN_Warten_Uebergabe;
            Gesamtsystem_DWork.temporalCounter_i1_k = 0U;
          }
          break;

         case Gesamtsyste_IN_Warten_Uebergabe:
          /* During 'Warten_Uebergabe': '<S8>:1030' */
          if (Gesamtsystem_DWork.temporalCounter_i1_k >= 1000U) {
            /* Transition: '<S8>:1026' */
            Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S8>:1031' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S8>:1028' */
          /* Transition: '<S8>:1024' */
          Gesamtsystem_DWork.is_Uebergabe = Ge_IN_Uebergabepunkt_y_Richtung;

          /* Entry 'Uebergabepunkt_y_Richtung': '<S8>:1029' */
          Gesamtsystem_B.x_soll = Gesamtsystem_DWork.x_least;
          Gesamtsystem_B.y_soll = 100.0;
          break;

         default:
          /* During 'Wechsel_2': '<S8>:1031' */
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */

  /* Outputs for Atomic SubSystem: '<S2>/Navigationssystem [Einstellungen moeglich]' */
  /* Sum: '<S15>/Soll-Ist-Abgleich_x' */
  rtb_RoundingFunction1 = Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen;

  /* Sum: '<S15>/Soll-Ist-Abgleich_y' */
  rtb_RoundingFunction = Gesamtsystem_B.y_soll - Gesamtsystem_B.y_Wagen;

  /* Chart: '<S16>/Quadrantenteiler' */
  /* Gateway: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
  /* During: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
  if (Gesamtsystem_DWork.is_active_c13_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
    Gesamtsystem_DWork.is_active_c13_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Quadrantenteiler */
    /* Transition: '<S20>:28' */
    Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Start_Warten_b;
  } else {
    switch (Gesamtsystem_DWork.is_c13_Gesamtsystem) {
     case Gesamtsystem_IN_Quadrant_a:
      Gesamtsystem_B.Quadrant = 0.0;

      /* During 'Quadrant_a': '<S20>:8' */
      /* Transition: '<S20>:36' */
      /* Transition: '<S20>:40' */
      if ((rtb_RoundingFunction1 >= 0.0) && (rtb_RoundingFunction >= 0.0)) {
        /* Transition: '<S20>:29' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S20>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S20>:30' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S20>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S20>:31' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S20>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S20>:32' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S20>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     case Gesamtsystem_IN_Quadrant_b:
      Gesamtsystem_B.Quadrant = 1.0;

      /* During 'Quadrant_b': '<S20>:9' */
      /* Transition: '<S20>:37' */
      /* Transition: '<S20>:40' */
      if ((rtb_RoundingFunction1 >= 0.0) && (rtb_RoundingFunction >= 0.0)) {
        /* Transition: '<S20>:29' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S20>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S20>:30' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S20>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S20>:31' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S20>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S20>:32' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S20>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     case Gesamtsystem_IN_Quadrant_c:
      Gesamtsystem_B.Quadrant = 2.0;

      /* During 'Quadrant_c': '<S20>:11' */
      /* Transition: '<S20>:38' */
      /* Transition: '<S20>:40' */
      if ((rtb_RoundingFunction1 >= 0.0) && (rtb_RoundingFunction >= 0.0)) {
        /* Transition: '<S20>:29' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S20>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S20>:30' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S20>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S20>:31' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S20>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S20>:32' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S20>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     case Gesamtsystem_IN_Quadrant_d:
      Gesamtsystem_B.Quadrant = 3.0;

      /* During 'Quadrant_d': '<S20>:12' */
      /* Transition: '<S20>:39' */
      /* Transition: '<S20>:40' */
      if ((rtb_RoundingFunction1 >= 0.0) && (rtb_RoundingFunction >= 0.0)) {
        /* Transition: '<S20>:29' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S20>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S20>:30' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S20>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S20>:31' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S20>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S20>:32' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S20>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     default:
      /* During 'Start_Warten': '<S20>:41' */
      /* Transition: '<S20>:42' */
      if ((rtb_RoundingFunction1 >= 0.0) && (rtb_RoundingFunction >= 0.0)) {
        /* Transition: '<S20>:29' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S20>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S20>:30' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S20>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S20>:31' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S20>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S20>:32' */
        Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S20>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;
    }
  }

  /* End of Chart: '<S16>/Quadrantenteiler' */

  /* Chart: '<S16>/Winkelausgabe fuer Ausrichtung' incorporates:
   *  MATLAB Function: '<S2>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)'
   */
  /* Gateway: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
  /* During: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Winkelregelungssystem
     (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
  if (Gesamtsystem_DWork.is_active_c14_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
    Gesamtsystem_DWork.is_active_c14_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Winkelregelungssystem
       (Soll-Ist-Abgleich & Ausrichtungsauswertung)/Winkelausgabe fuer Ausrichtung */
    /* Transition: '<S21>:81' */
    Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_Start_Warten_ba;
  } else {
    switch (Gesamtsystem_DWork.is_c14_Gesamtsystem) {
     case G_IN_Ausrichtung_ohne_Aenderung:
      /* During 'Ausrichtung_ohne_Aenderung': '<S21>:52' */
      /* Transition: '<S21>:66' */
      /* Transition: '<S21>:70' */
      if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0)) {
        /* Transition: '<S21>:60' */
        Gesamtsystem_DWork.is_c14_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S21>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S21>:76' */
        /* Transition: '<S21>:77' */
        Gesamtsystem_DWork.is_c14_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S21>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S21>:78' */
        Gesamtsystem_DWork.is_c14_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S21>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     case Gesamtsystem_IN_Start_Warten_ba:
      /* During 'Start_Warten': '<S21>:82' */
      /* Transition: '<S21>:83' */
      if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0)) {
        /* Transition: '<S21>:60' */
        Gesamtsystem_DWork.is_c14_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S21>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S21>:76' */
        /* Transition: '<S21>:77' */
        Gesamtsystem_DWork.is_c14_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S21>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S21>:78' */
        Gesamtsystem_DWork.is_c14_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S21>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     case IN_Trigonometrische_Auswertung_:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S21>:24' */
      /* Transition: '<S21>:68' */
      /* Transition: '<S21>:70' */
      if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0)) {
        /* Transition: '<S21>:60' */
        Gesamtsystem_DWork.is_c14_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S21>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S21>:76' */
        /* Transition: '<S21>:77' */
        Gesamtsystem_DWork.is_c14_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S21>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S21>:78' */
        Gesamtsystem_DWork.is_c14_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S21>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     default:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S21>:71' */
      /* Transition: '<S21>:73' */
      /* Transition: '<S21>:70' */
      if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0)) {
        /* Transition: '<S21>:60' */
        Gesamtsystem_DWork.is_c14_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S21>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S21>:76' */
        /* Transition: '<S21>:77' */
        Gesamtsystem_DWork.is_c14_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S21>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S21>:78' */
        Gesamtsystem_DWork.is_c14_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S21>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;
    }
  }

  /* End of Chart: '<S16>/Winkelausgabe fuer Ausrichtung' */

  /* Sum: '<S16>/Winkeldifferenz' incorporates:
   *  Gain: '<S16>/Quadranten- verschiebung'
   *  MATLAB Function: '<S2>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen für Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegenüber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)'
   *  Sum: '<S16>/Winkelverschiebung'
   */
  Gesamtsystem_B.Winkeldifferenz = (Gesamtsystem_P.Quadrantenverschiebung_Gain *
    Gesamtsystem_B.Quadrant + Gesamtsystem_B.alpha_neu) - (rtb_RoundingFunction2
    - 15.0);

  /* Chart: '<S11>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
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
    /* Transition: '<S13>:38' */
    Gesamtsystem_DWork.is_c8_Gesamtsystem = Gesamtsyste_IN_Einstellung_Init;

    /* Entry 'Einstellung_Init': '<S13>:44' */
    Gesamtsystem_DWork.Stillstandintervall = 15.0;
    Gesamtsystem_B.pwm_mindern[0] = 0.0;
    Gesamtsystem_B.pwm_mindern[1] = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c8_Gesamtsystem) {
     case IN_Drehstillstand_mit_Ausrichtu:
      /* During 'Drehstillstand_mit_Ausrichtungsregelung': '<S13>:26' */
      /* Transition: '<S13>:96' */
      /* Transition: '<S13>:98' */
      /* Transition: '<S13>:65' */
      Gesamtsystem_DWork.alpha_diff_intern = 180.0 * Gesamtsystem_B.Gang +
        Gesamtsystem_B.Winkeldifferenz;
      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S13>:9' */
        if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S13>:15' */
          Gesamtsystem_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S13>:18' */
          Gesamtsystem_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S13>:69' */
      }

      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) <=
          Gesamtsystem_DWork.Stillstandintervall) {
        /* Transition: '<S13>:27' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S13>:94' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S13>:11' */
        Gesamtsystem_B.alpha_diff_opt = Gesamtsystem_DWork.alpha_diff_intern;
      }
      break;

     case Gesamtsyste_IN_Einstellung_Init:
      /* During 'Einstellung_Init': '<S13>:44' */
      /* Transition: '<S13>:46' */
      /* Transition: '<S13>:65' */
      Gesamtsystem_DWork.alpha_diff_intern = 180.0 * Gesamtsystem_B.Gang +
        Gesamtsystem_B.Winkeldifferenz;
      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S13>:9' */
        if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S13>:15' */
          Gesamtsystem_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S13>:18' */
          Gesamtsystem_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S13>:69' */
      }

      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) <=
          Gesamtsystem_DWork.Stillstandintervall) {
        /* Transition: '<S13>:27' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S13>:94' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S13>:11' */
        Gesamtsystem_B.alpha_diff_opt = Gesamtsystem_DWork.alpha_diff_intern;
      }
      break;

     default:
      /* During 'Weiterleitung_bei_Drehzustand': '<S13>:11' */
      /* Transition: '<S13>:97' */
      /* Transition: '<S13>:98' */
      /* Transition: '<S13>:65' */
      Gesamtsystem_DWork.alpha_diff_intern = 180.0 * Gesamtsystem_B.Gang +
        Gesamtsystem_B.Winkeldifferenz;
      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S13>:9' */
        if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S13>:15' */
          Gesamtsystem_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S13>:18' */
          Gesamtsystem_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S13>:69' */
      }

      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) <=
          Gesamtsystem_DWork.Stillstandintervall) {
        /* Transition: '<S13>:27' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S13>:94' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S13>:11' */
        Gesamtsystem_B.alpha_diff_opt = Gesamtsystem_DWork.alpha_diff_intern;
      }
      break;
    }
  }

  /* End of Chart: '<S11>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */

  /* Abs: '<S15>/Abs x_diff' */
  rtb_RoundingFunction2 = fabs(rtb_RoundingFunction1);

  /* MATLAB Function: '<S15>/Betrag pwm_x' incorporates:
   *  Abs: '<S15>/Abs x_diff'
   */
  /* MATLAB Function 'Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x': '<S17>:1' */
  if ((Gesamtsystem_B.Zielradius < rtb_RoundingFunction2) &&
      (rtb_RoundingFunction2 < 60.0 + Gesamtsystem_B.Zielradius)) {
    /* '<S17>:1:3' */
    /* '<S17>:1:4' */
    rtb_RoundingFunction2 = 60.0;
  } else if (rtb_RoundingFunction2 <= Gesamtsystem_B.Zielradius) {
    /* '<S17>:1:5' */
    /* '<S17>:1:6' */
    rtb_RoundingFunction2 = 0.0;
  } else if (rtb_RoundingFunction2 >= 100.0 + Gesamtsystem_B.Zielradius) {
    /* '<S17>:1:7' */
    /* '<S17>:1:8' */
    rtb_RoundingFunction2 = 100.0;
  } else {
    /* '<S17>:1:10' */
  }

  /* End of MATLAB Function: '<S15>/Betrag pwm_x' */

  /* Abs: '<S15>/Abs y_diff' */
  rtb_RoundingFunction = fabs(rtb_RoundingFunction);

  /* MATLAB Function: '<S15>/Betrag pwm_y' incorporates:
   *  Abs: '<S15>/Abs y_diff'
   */
  /* MATLAB Function 'Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_y': '<S18>:1' */
  if ((Gesamtsystem_B.Zielradius < rtb_RoundingFunction) &&
      (rtb_RoundingFunction < 60.0 + Gesamtsystem_B.Zielradius)) {
    /* '<S18>:1:3' */
    /* '<S18>:1:4' */
    rtb_RoundingFunction = 60.0;
  } else if (rtb_RoundingFunction <= Gesamtsystem_B.Zielradius) {
    /* '<S18>:1:5' */
    /* '<S18>:1:6' */
    rtb_RoundingFunction = 0.0;
  } else if (rtb_RoundingFunction >= 100.0 + Gesamtsystem_B.Zielradius) {
    /* '<S18>:1:7' */
    /* '<S18>:1:8' */
    rtb_RoundingFunction = 100.0;
  } else {
    /* '<S18>:1:10' */
  }

  /* End of MATLAB Function: '<S15>/Betrag pwm_y' */

  /* MATLAB Function: '<S15>/PWM-Vektorbetrag' */
  /* MATLAB Function 'Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/PWM-Vektorbetrag': '<S19>:1' */
  /* '<S19>:1:3' */
  rtb_RoundingFunction = rt_roundd_snf(sqrt(rtb_RoundingFunction2 *
    rtb_RoundingFunction2 + rtb_RoundingFunction * rtb_RoundingFunction));

  /* Saturate: '<S15>/PWM-Wertebereich' */
  if (rtb_RoundingFunction > Gesamtsystem_P.PWMWertebereich_UpperSat) {
    Gesamtsystem_B.PWMWertebereich = Gesamtsystem_P.PWMWertebereich_UpperSat;
  } else if (rtb_RoundingFunction < Gesamtsystem_P.PWMWertebereich_LowerSat) {
    Gesamtsystem_B.PWMWertebereich = Gesamtsystem_P.PWMWertebereich_LowerSat;
  } else {
    Gesamtsystem_B.PWMWertebereich = rtb_RoundingFunction;
  }

  /* End of Saturate: '<S15>/PWM-Wertebereich' */

  /* Chart: '<S11>/Fahrsystem' */
  /* Gateway: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Fahrsystem */
  /* During: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Fahrsystem */
  if (Gesamtsystem_DWork.is_active_c11_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Fahrsystem */
    Gesamtsystem_DWork.is_active_c11_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Fahrsystem */
    /* Transition: '<S14>:91' */
    Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Start_Warten;
  } else {
    switch (Gesamtsystem_DWork.is_c11_Gesamtsystem) {
     case Gesam_IN_Drehen_links_gesteuert:
      Gesamtsystem_Drehen_links_max();
      break;

     case Gesamtsyste_IN_Drehen_links_max:
      Gesamtsystem_Drehen_links_max();
      break;

     case Gesa_IN_Drehen_rechts_gesteuert:
      /* During 'Drehen_rechts_gesteuert': '<S14>:51' */
      /* Transition: '<S14>:63' */
      /* Transition: '<S14>:75' */
      if ((fabs(Gesamtsystem_B.alpha_diff_opt) > 0.0) &&
          (Gesamtsystem_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S14>:58' */
        if (fabs(Gesamtsystem_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S14>:21' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S14>:45' */
            Gesamtsystem_DWork.is_c11_Gesamtsystem =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S14>:8' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S14>:57' */
            Gesamtsystem_DWork.is_c11_Gesamtsystem =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S14>:9' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S14>:53' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S14>:54' */
            Gesamtsystem_DWork.is_c11_Gesamtsystem =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S14>:43' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S14>:55' */
            Gesamtsystem_DWork.is_c11_Gesamtsystem =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S14>:51' */
            rtb_RoundingFunction = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_l = rtb_RoundingFunction;
            Gesamtsystem_B.pwm_out_r = rtb_RoundingFunction;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S14>:82' */
        if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S14>:85' */
          rtb_RoundingFunction = 1.0 - Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = Gesamtsystem_B.Gang;
        } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S14>:86' */
          rtb_RoundingFunction = Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = 1.0 - Gesamtsystem_B.Gang;
        } else {
          /* Transition: '<S14>:87' */
          rtb_RoundingFunction = 0.0;
          rtb_RoundingFunction2 = 0.0;
        }

        Gesamtsystem_DWork.is_c11_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S14>:94' */
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
      /* During 'Drehen_rechts_max': '<S14>:9' */
      /* Transition: '<S14>:61' */
      /* Transition: '<S14>:75' */
      if ((fabs(Gesamtsystem_B.alpha_diff_opt) > 0.0) &&
          (Gesamtsystem_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S14>:58' */
        if (fabs(Gesamtsystem_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S14>:21' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S14>:45' */
            Gesamtsystem_DWork.is_c11_Gesamtsystem =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S14>:8' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S14>:57' */
            Gesamtsystem_DWork.is_c11_Gesamtsystem =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S14>:9' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S14>:53' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S14>:54' */
            Gesamtsystem_DWork.is_c11_Gesamtsystem =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S14>:43' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S14>:55' */
            Gesamtsystem_DWork.is_c11_Gesamtsystem =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S14>:51' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S14>:82' */
        if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S14>:85' */
          rtb_RoundingFunction = 1.0 - Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = Gesamtsystem_B.Gang;
        } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S14>:86' */
          rtb_RoundingFunction = Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = 1.0 - Gesamtsystem_B.Gang;
        } else {
          /* Transition: '<S14>:87' */
          rtb_RoundingFunction = 0.0;
          rtb_RoundingFunction2 = 0.0;
        }

        Gesamtsystem_DWork.is_c11_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S14>:94' */
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
      /* During 'Fahren_mit_Ausrichtungsregelung': '<S14>:94' */
      /* Transition: '<S14>:74' */
      /* Transition: '<S14>:75' */
      if ((fabs(Gesamtsystem_B.alpha_diff_opt) > 0.0) &&
          (Gesamtsystem_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S14>:58' */
        if (fabs(Gesamtsystem_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S14>:21' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S14>:45' */
            Gesamtsystem_DWork.is_c11_Gesamtsystem =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S14>:8' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S14>:57' */
            Gesamtsystem_DWork.is_c11_Gesamtsystem =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S14>:9' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S14>:53' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S14>:54' */
            Gesamtsystem_DWork.is_c11_Gesamtsystem =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S14>:43' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S14>:55' */
            Gesamtsystem_DWork.is_c11_Gesamtsystem =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S14>:51' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S14>:82' */
        if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S14>:85' */
          rtb_RoundingFunction = 1.0 - Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = Gesamtsystem_B.Gang;
        } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S14>:86' */
          rtb_RoundingFunction = Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = 1.0 - Gesamtsystem_B.Gang;
        } else {
          /* Transition: '<S14>:87' */
          rtb_RoundingFunction = 0.0;
          rtb_RoundingFunction2 = 0.0;
        }

        Gesamtsystem_DWork.is_c11_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S14>:94' */
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

  /* End of Chart: '<S11>/Fahrsystem' */
  /* End of Outputs for SubSystem: '<S2>/Navigationssystem [Einstellungen moeglich]' */

  /* S-Function (c280xpwm): '<S10>/PWM Vorgabe fuer Motor_links ' */

  /*-- Update CMPB value for ePWM1 --*/
  {
    EPwm1Regs.CMPB = (uint16_T)((uint32_T)EPwm1Regs.TBPRD *
      Gesamtsystem_B.pwm_out_l * 0.01);
  }

  /* S-Function (c280xpwm): '<S10>/PWM Vorgabe fuer Motor_rechts' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD *
      Gesamtsystem_B.pwm_out_r * 0.01);
  }

  /* S-Function (c280xgpio_do): '<S10>/Drehrichtungsvorgabe fuer Motor_links' */
  {
    if (Gesamtsystem_B.r_l_out_l)
      GpioDataRegs.GPASET.bit.GPIO20 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO20 = 1;
  }

  /* S-Function (c280xgpio_do): '<S10>/Drehrichtungsvorgabe fuer Motor_rechts' */
  {
    if (Gesamtsystem_B.r_l_out_r)
      GpioDataRegs.GPASET.bit.GPIO21 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;
  }

  /* S-Function (scominttobit): '<S12>/Integer to Bit Converter7' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values7;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter7[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S12>/Integer to Bit Converter7' */

  /* S-Function (scominttobit): '<S12>/Integer to Bit Converter8' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values8;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter8[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S12>/Integer to Bit Converter8' */

  /* Chart: '<S12>/Chart1' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart1 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart1 */
  if (Gesamtsystem_DWork.is_active_c16_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart1 */
    Gesamtsystem_DWork.is_active_c16_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart1 */
    /* Transition: '<S22>:3' */
    Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c16_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S22>:17' */
      /* Transition: '<S22>:24' */
      Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S22>:26' */
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
      /* During 'x0': '<S22>:2' */
      /* Transition: '<S22>:7' */
      Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S22>:26' */
      /* Transition: '<S22>:25' */
      Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S12>/Chart1' */

  /* DiscretePulseGenerator: '<S27>/Pulse Generator' */
  rtb_RoundingFunction2 = (Gesamtsystem_DWork.clockTickCounter <
    Gesamtsystem_P.PulseGenerator_Duty) && (Gesamtsystem_DWork.clockTickCounter >=
    0L) ? Gesamtsystem_P.PulseGenerator_Amp : 0.0;
  if (Gesamtsystem_DWork.clockTickCounter >=
      Gesamtsystem_P.PulseGenerator_Period - 1.0) {
    Gesamtsystem_DWork.clockTickCounter = 0L;
  } else {
    Gesamtsystem_DWork.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S27>/Pulse Generator' */

  /* Outputs for Triggered SubSystem: '<S27>/I2C Reinitialisierung' incorporates:
   *  TriggerPort: '<S29>/Trigger'
   */
  zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                     &Gesamtsystem_PrevZCSigState.I2CReinitialisierung_Trig_ZCE,
                     (rtb_RoundingFunction2));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S29>/I2C Reinitialisierung' */
    /* MATLAB Function 'Nexonar-System/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reinitialisierung/I2C Reinitialisierung': '<S31>:1' */
    init_i2c();
  }

  /* End of Outputs for SubSystem: '<S27>/I2C Reinitialisierung' */

  /* Outputs for Triggered SubSystem: '<S27>/I2C Reset' incorporates:
   *  TriggerPort: '<S30>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &Gesamtsystem_PrevZCSigState.I2CReset_Trig_ZCE,
                     (rtb_RoundingFunction2));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S30>/I2C Reset' */
    /* MATLAB Function 'Nexonar-System/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilitätsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset': '<S32>:1' */
    reset_i2c();
  }

  /* End of Outputs for SubSystem: '<S27>/I2C Reset' */

  /* MATLABSystem: '<S3>/Moving Average' */
  if (Gesamtsystem_DWork.obj.ForgettingFactor !=
      Gesamtsystem_P.MovingAverage_ForgettingFactor) {
    if (Gesamtsystem_DWork.obj.isInitialized == 1L) {
      Gesamtsystem_DWork.obj.TunablePropsChanged = true;
    }

    Gesamtsystem_DWork.obj.ForgettingFactor =
      Gesamtsystem_P.MovingAverage_ForgettingFactor;
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
    Gesamtsystem_B.RateTransition2;
  Gesamtsystem_DWork.obj.pStatistic->pwN = rtb_RoundingFunction *
    rtb_RoundingFunction2 + 1.0;
  Gesamtsystem_DWork.obj.pStatistic->pmN = rtb_RoundingFunction1;
  Gesamtsystem_B.MovingAverage = rtb_RoundingFunction1;

  /* End of MATLABSystem: '<S3>/Moving Average' */

  /* UnitDelay: '<S3>/Unit Delay' */
  Gesamtsystem_B.UnitDelay = Gesamtsystem_DWork.UnitDelay_DSTATE;

  /* Chart: '<S3>/Sortieralgorithmus' */
  if (Gesamtsystem_DWork.temporalCounter_i1 < 511U) {
    Gesamtsystem_DWork.temporalCounter_i1++;
  }

  /* Gateway: Subsystem/Sortieralgorithmus */
  /* During: Subsystem/Sortieralgorithmus */
  if (Gesamtsystem_DWork.is_active_c15_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Sortieralgorithmus */
    Gesamtsystem_DWork.is_active_c15_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Sortieralgorithmus */
    /* Transition: '<S37>:182' */
    Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesamtsystem_IN_setupVariable;
    Gesamtsystem_DWork.temporalCounter_i1 = 0U;

    /* Entry 'setupVariable': '<S37>:175' */
    Gesamtsystem_DWork.magacin0 = 0.0;
    Gesamtsystem_DWork.magacin1 = 0.0;
    Gesamtsystem_DWork.magacin2 = 0.0;
    Gesamtsystem_DWork.magacin3 = 0.0;
    Gesamtsystem_DWork.magacin4 = 0.0;
    Gesamtsystem_DWork.magacin5 = 0.0;
    Gesamtsystem_DWork.magacin1_LastCube = 0.0;
    Gesamtsystem_DWork.magacin2_LastCube = 0.0;
    Gesamtsystem_B.magacin = -1.0;
    Gesamtsystem_DWork.cubeCounter = 0.0;
    Gesamtsystem_B.signal = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c15_Gesamtsystem) {
     case Gesamtsystem_IN_Black:
      /* During 'Black': '<S37>:187' */
      /* Transition: '<S37>:188' */
      Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesamtsystem_IN_DetectedCube;

      /* Entry 'DetectedCube': '<S37>:180' */
      Gesamtsystem_DWork.cubeCounter++;
      break;

     case Gesamtsystem_IN_BlueCube:
      /* During 'BlueCube': '<S37>:185' */
      /* Transition: '<S37>:189' */
      Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesamtsystem_IN_DetectedCube;

      /* Entry 'DetectedCube': '<S37>:180' */
      Gesamtsystem_DWork.cubeCounter++;
      break;

     case Gesamtsystem_IN_DetectedCube:
      /* During 'DetectedCube': '<S37>:180' */
      if (Gesamtsystem_B.UnitDelay == 0.0F) {
        /* Transition: '<S37>:168' */
        Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesamtsystem_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S37>:183' */
        Gesamtsystem_B.magacin = -1.0;
      }
      break;

     case Gesamtsystem_IN_RedCube:
      /* During 'RedCube': '<S37>:186' */
      /* Transition: '<S37>:190' */
      Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesamtsystem_IN_DetectedCube;

      /* Entry 'DetectedCube': '<S37>:180' */
      Gesamtsystem_DWork.cubeCounter++;
      break;

     case Gesamtsystem_IN_cubeLoaded:
      /* During 'cubeLoaded': '<S37>:183' */
      if ((Gesamtsystem_B.MovingAverage < 700.0) ||
          (Gesamtsystem_B.MovingAverage > 1500.0)) {
        /* Transition: '<S37>:169' */
        Gesamtsystem_DWork.is_c15_Gesamtsystem = IN_photoelectricBarrierActivate;

        /* Entry 'photoelectricBarrierActivated': '<S37>:184' */
      } else {
        Gesamtsystem_B.magacin = -1.0;
      }
      break;

     case IN_photoelectricBarrierActivate:
      /* During 'photoelectricBarrierActivated': '<S37>:184' */
      if (Gesamtsystem_B.MovingAverage > 2150.0) {
        /* Transition: '<S37>:172' */
        Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesamtsystem_IN_Black;

        /* Entry 'Black': '<S37>:187' */
        Gesamtsystem_B.magacin = 6.0;
      } else if (Gesamtsystem_B.MovingAverage < 1000.0) {
        /* Transition: '<S37>:171' */
        Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesamtsystem_IN_RedCube;

        /* Entry 'RedCube': '<S37>:186' */
        Gesamtsystem_B.magacin = Gesamtsystem_findPlaceForRed();
      } else {
        if ((Gesamtsystem_B.MovingAverage >= 1000.0) &&
            (Gesamtsystem_B.MovingAverage <= 2150.0)) {
          /* Transition: '<S37>:170' */
          Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesamtsystem_IN_BlueCube;

          /* Entry 'BlueCube': '<S37>:185' */
          Gesamtsystem_B.magacin = Gesamtsystem_findPlaceForBlue();
        }
      }
      break;

     default:
      /* During 'setupVariable': '<S37>:175' */
      if (Gesamtsystem_DWork.temporalCounter_i1 >= 300U) {
        /* Transition: '<S37>:181' */
        Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesamtsystem_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S37>:183' */
        Gesamtsystem_B.magacin = -1.0;
      } else {
        Gesamtsystem_DWork.magacin0 = 0.0;
        Gesamtsystem_DWork.magacin1 = 0.0;
        Gesamtsystem_DWork.magacin2 = 0.0;
        Gesamtsystem_DWork.magacin3 = 0.0;
        Gesamtsystem_DWork.magacin4 = 0.0;
        Gesamtsystem_DWork.magacin5 = 0.0;
        Gesamtsystem_DWork.magacin1_LastCube = 0.0;
        Gesamtsystem_DWork.magacin2_LastCube = 0.0;
        Gesamtsystem_B.magacin = -1.0;
        Gesamtsystem_DWork.cubeCounter = 0.0;
        Gesamtsystem_B.signal = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Sortieralgorithmus' */

  /* Lookup_n-D: '<S3>/1-D Lookup Table' */
  rtb_RoundingFunction2 = look1_binlxpw(Gesamtsystem_B.magacin,
    Gesamtsystem_P.uDLookupTable_bp01Data,
    Gesamtsystem_P.uDLookupTable_tableData, 7UL);

  /* Chart: '<S3>/Chart1' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   */
  if (Gesamtsystem_DWork.temporalCounter_i1_p < 511U) {
    Gesamtsystem_DWork.temporalCounter_i1_p++;
  }

  /* Gateway: Subsystem/Chart1 */
  /* During: Subsystem/Chart1 */
  if (Gesamtsystem_DWork.is_active_c4_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Chart1 */
    Gesamtsystem_DWork.is_active_c4_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Chart1 */
    /* Transition: '<S34>:70' */
    Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_firstEntry;
    Gesamtsystem_DWork.temporalCounter_i1_p = 0U;

    /* Entry 'firstEntry': '<S34>:69' */
    Gesamtsystem_B.angle = 300.0;
  } else {
    switch (Gesamtsystem_DWork.is_c4_Gesamtsystem) {
     case Gesamtsys_IN_betterLeftPosition:
      /* During 'betterLeftPosition': '<S34>:151' */
      /* Transition: '<S34>:153' */
      Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_waitForCube;
      break;

     case Gesamtsy_IN_betterRightPosition:
      /* During 'betterRightPosition': '<S34>:150' */
      /* Transition: '<S34>:155' */
      Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_waitForCube;
      break;

     case Gesamtsystem_IN_closeGate:
      /* During 'closeGate': '<S34>:73' */
      if (Gesamtsystem_B.UnitDelay == 0.0F) {
        /* Transition: '<S34>:98' */
        Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_waitForCube;
      } else {
        Gesamtsystem_B.signal_e = 0.0;
      }
      break;

     case Gesamtsystem_IN_firstEntry:
      /* During 'firstEntry': '<S34>:69' */
      if (Gesamtsystem_DWork.temporalCounter_i1_p >= 500U) {
        /* Transition: '<S34>:71' */
        Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_waitForCube;
      }
      break;

     case Gesamtsystem_IN_goToMagacin:
      /* During 'goToMagacin': '<S34>:3' */
      if (((real32_T)Gesamtsystem_B.RateTransition3 > Gesamtsystem_B.angle - 2.0)
          && ((real32_T)Gesamtsystem_B.RateTransition3 < Gesamtsystem_B.angle +
              2.0)) {
        /* Transition: '<S34>:66' */
        Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_openGate;
        Gesamtsystem_DWork.temporalCounter_i1_p = 0U;

        /* Entry 'openGate': '<S34>:72' */
        Gesamtsystem_B.signal_e = 1.0;
        Gesamtsystem_B.movingCube = 0.0F;
      }
      break;

     case Gesamtsystem_IN_goToZero:
      /* During 'goToZero': '<S34>:59' */
      if (((real32_T)Gesamtsystem_B.RateTransition3 > -2.0F) && ((real32_T)
           Gesamtsystem_B.RateTransition3 < 2.0F)) {
        /* Transition: '<S34>:61' */
        Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_wait_b;
        Gesamtsystem_DWork.temporalCounter_i1_p = 0U;
      } else {
        Gesamtsystem_B.angle = 0.0;
        Gesamtsystem_B.movingCube = 1.0F;
      }
      break;

     case Gesamtsystem_IN_openGate:
      /* During 'openGate': '<S34>:72' */
      if (Gesamtsystem_DWork.temporalCounter_i1_p >= 50U) {
        /* Transition: '<S34>:75' */
        Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_closeGate;

        /* Entry 'closeGate': '<S34>:73' */
        Gesamtsystem_B.signal_e = 0.0;
      } else {
        Gesamtsystem_B.signal_e = 1.0;
        Gesamtsystem_B.movingCube = 0.0F;
      }
      break;

     case Gesamtsystem_IN_wait_b:
      /* During 'wait': '<S34>:101' */
      if (Gesamtsystem_DWork.temporalCounter_i1_p >= 40U) {
        /* Transition: '<S34>:102' */
        Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_goToMagacin;

        /* Entry 'goToMagacin': '<S34>:3' */
        Gesamtsystem_B.angle = rtb_RoundingFunction2;
      }
      break;

     default:
      /* During 'waitForCube': '<S34>:29' */
      if (Gesamtsystem_B.angle == 85.0) {
        /* Transition: '<S34>:154' */
        Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsy_IN_betterRightPosition;

        /* Entry 'betterRightPosition': '<S34>:150' */
        Gesamtsystem_B.angle = 220.0;
      } else if (Gesamtsystem_B.angle == -40.0) {
        /* Transition: '<S34>:152' */
        Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsys_IN_betterLeftPosition;

        /* Entry 'betterLeftPosition': '<S34>:151' */
        Gesamtsystem_B.angle = -170.0;
      } else {
        if (rtb_RoundingFunction2 != -1.0) {
          /* Transition: '<S34>:60' */
          Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_goToZero;

          /* Entry 'goToZero': '<S34>:59' */
          Gesamtsystem_B.angle = 0.0;
          Gesamtsystem_B.movingCube = 1.0F;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Chart1' */

  /* Chart: '<S3>/Chart' */
  if (Gesamtsystem_DWork.temporalCounter_i1_a < 511U) {
    Gesamtsystem_DWork.temporalCounter_i1_a++;
  }

  /* Gateway: Subsystem/Chart */
  /* During: Subsystem/Chart */
  if (Gesamtsystem_DWork.is_active_c3_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Chart */
    Gesamtsystem_DWork.is_active_c3_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Chart */
    /* Transition: '<S33>:14' */
    Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_init;
    Gesamtsystem_DWork.temporalCounter_i1_a = 0U;

    /* Entry 'init': '<S33>:13' */
    Gesamtsystem_B.gateDirection = 0.0;
    Gesamtsystem_B.gatePWM_i = 50.0;
  } else {
    switch (Gesamtsystem_DWork.is_c3_Gesamtsystem) {
     case Gesamtsystem_IN_close:
      /* During 'close': '<S33>:3' */
      if (Gesamtsystem_DWork.temporalCounter_i1_a >= 40U) {
        /* Transition: '<S33>:7' */
        Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_wait;

        /* Entry 'wait': '<S33>:4' */
        Gesamtsystem_B.gatePWM_i = 0.0;
        Gesamtsystem_B.gateDirection = 1.0;
        Gesamtsystem_B.movingCube_p = 0.0F;
      } else {
        Gesamtsystem_B.gateDirection = 0.0;
      }
      break;

     case Gesamtsystem_IN_init:
      /* During 'init': '<S33>:13' */
      if (Gesamtsystem_DWork.temporalCounter_i1_a >= 300U) {
        /* Transition: '<S33>:15' */
        Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_wait;

        /* Entry 'wait': '<S33>:4' */
        Gesamtsystem_B.gatePWM_i = 0.0;
        Gesamtsystem_B.gateDirection = 1.0;
        Gesamtsystem_B.movingCube_p = 0.0F;
      } else {
        Gesamtsystem_B.gateDirection = 0.0;
        Gesamtsystem_B.gatePWM_i = 50.0;
      }
      break;

     case Gesamtsystem_IN_open:
      /* During 'open': '<S33>:1' */
      if (Gesamtsystem_DWork.temporalCounter_i1_a >= 40U) {
        /* Transition: '<S33>:6' */
        Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_close;
        Gesamtsystem_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'close': '<S33>:3' */
        Gesamtsystem_B.gateDirection = 0.0;
      } else {
        Gesamtsystem_B.gatePWM_i = 70.0;
        Gesamtsystem_B.movingCube_p = 1.0F;
      }
      break;

     default:
      /* During 'wait': '<S33>:4' */
      if (Gesamtsystem_B.signal_e == 1.0) {
        /* Transition: '<S33>:5' */
        Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_open;
        Gesamtsystem_DWork.temporalCounter_i1_a = 0U;

        /* Entry 'open': '<S33>:1' */
        Gesamtsystem_B.gatePWM_i = 70.0;
        Gesamtsystem_B.movingCube_p = 1.0F;
      } else {
        Gesamtsystem_B.gatePWM_i = 0.0;
        Gesamtsystem_B.gateDirection = 1.0;
        Gesamtsystem_B.movingCube_p = 0.0F;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Chart' */

  /* S-Function (c280xgpio_do): '<S3>/Drehrichtungsvorgabe für einen Motor1' */
  {
    if (Gesamtsystem_B.gateDirection)
      GpioDataRegs.GPASET.bit.GPIO16 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO16 = 1;
  }

  /* Sum: '<S39>/Sum' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   */
  rtb_RoundingFunction2 = Gesamtsystem_B.angle - (real32_T)
    Gesamtsystem_B.RateTransition3;

  /* DeadZone: '<S39>/Dead Zone' */
  if (rtb_RoundingFunction2 > Gesamtsystem_P.DeadZone_End) {
    rtb_RoundingFunction2 -= Gesamtsystem_P.DeadZone_End;
  } else if (rtb_RoundingFunction2 >= Gesamtsystem_P.DeadZone_Start) {
    rtb_RoundingFunction2 = 0.0;
  } else {
    rtb_RoundingFunction2 -= Gesamtsystem_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S39>/Dead Zone' */

  /* Gain: '<S39>/Verstaerkung' */
  rtb_RoundingFunction2 *= Gesamtsystem_P.Verstaerkung_Gain;

  /* MATLAB Function: '<S39>/Richtung' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung': '<S41>:1' */
  if (rtb_RoundingFunction2 > 0.0) {
    /* '<S41>:1:3' */
    /* '<S41>:1:4' */
    Gesamtsystem_B.y = 1.0;
  } else {
    /* '<S41>:1:6' */
    Gesamtsystem_B.y = 0.0;
  }

  /* End of MATLAB Function: '<S39>/Richtung' */

  /* S-Function (c280xgpio_do): '<S36>/Drehrichtungsvorgabe für einen Motor' */
  {
    if (Gesamtsystem_B.y)
      GpioDataRegs.GPASET.bit.GPIO19 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO19 = 1;
  }

  /* Abs: '<S39>/Abs' */
  rtb_RoundingFunction2 = fabs(rtb_RoundingFunction2);

  /* MATLAB Function: '<S39>/Betrag' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag': '<S40>:1' */
  if ((0.5 < rtb_RoundingFunction2) && (rtb_RoundingFunction2 < 60.0)) {
    /* '<S40>:1:3' */
    /* '<S40>:1:4' */
    rtb_y_l = 60.0;
  } else if (rtb_RoundingFunction2 <= 0.5) {
    /* '<S40>:1:5' */
    /* '<S40>:1:6' */
    rtb_y_l = 0.0;
  } else if (rtb_RoundingFunction2 >= 100.0) {
    /* '<S40>:1:7' */
    /* '<S40>:1:8' */
    rtb_y_l = 100.0;
  } else {
    /* '<S40>:1:10' */
    rtb_y_l = rtb_RoundingFunction2;
  }

  /* End of MATLAB Function: '<S39>/Betrag' */

  /* S-Function (c280xpwm): '<S36>/PWM Vorgabe für einen Motor ' */

  /*-- Update CMPB value for ePWM4 --*/
  {
    EPwm4Regs.CMPB = (uint16_T)((uint32_T)EPwm4Regs.TBPRD * rtb_y_l * 0.01);
  }

  /* S-Function (c280xpwm): '<S3>/PWM Vorgabe für einen Motor 1' */

  /*-- Update CMPB value for ePWM6 --*/
  {
    EPwm6Regs.CMPB = (uint16_T)((uint32_T)EPwm6Regs.TBPRD *
      Gesamtsystem_B.gatePWM_i * 0.01);
  }

  /* Chart: '<S3>/Chart2' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   */
  if (Gesamtsystem_DWork.temporalCounter_i1_av < 127U) {
    Gesamtsystem_DWork.temporalCounter_i1_av = ((int16_T)
      Gesamtsystem_DWork.temporalCounter_i1_av + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart2 */
  /* During: Subsystem/Chart2 */
  if (Gesamtsystem_DWork.is_active_c6_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Chart2 */
    Gesamtsystem_DWork.is_active_c6_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Chart2 */
    /* Transition: '<S35>:11' */
    Gesamtsystem_DWork.is_c6_Gesamtsystem = Gesamtsystem_IN_wait_ba;

    /* Entry 'wait': '<S35>:4' */
  } else {
    switch (Gesamtsystem_DWork.is_c6_Gesamtsystem) {
     case Gesamtsystem_IN_close:
      /* During 'close': '<S35>:3' */
      Gesamtsystem_B.gatePWM = 0.0;
      break;

     case Gesamtsystem_IN_open_b:
      /* During 'open': '<S35>:1' */
      if (Gesamtsystem_DWork.temporalCounter_i1_av >= 100U) {
        /* Transition: '<S35>:6' */
        Gesamtsystem_DWork.is_c6_Gesamtsystem = Gesamtsystem_IN_close;

        /* Entry 'close': '<S35>:3' */
        Gesamtsystem_B.gatePWM = 0.0;
      } else {
        Gesamtsystem_B.gatePWM = 50.0;
      }
      break;

     default:
      /* During 'wait': '<S35>:4' */
      if ((real32_T)Gesamtsystem_B.signal == 1.0F) {
        /* Transition: '<S35>:5' */
        Gesamtsystem_DWork.is_c6_Gesamtsystem = Gesamtsystem_IN_open_b;
        Gesamtsystem_DWork.temporalCounter_i1_av = 0U;

        /* Entry 'open': '<S35>:1' */
        Gesamtsystem_B.gatePWM = 50.0;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Chart2' */

  /* Update for UnitDelay: '<S3>/Unit Delay' incorporates:
   *  Sum: '<S3>/Sum'
   */
  Gesamtsystem_DWork.UnitDelay_DSTATE = Gesamtsystem_B.movingCube +
    Gesamtsystem_B.movingCube_p;
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

    /* Start for S-Function (c28xisr_c2000): '<S12>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S12>/Triggered Subsystem'
     */
    /* Start for function-call system: '<S12>/Triggered Subsystem' */

    /* Start for S-Function (c280xi2c_rx): '<S28>/I2C Receive' */

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

    /* Start for RateTransition: '<S12>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Gesamtsystem_B.RateTransition[i] =
        Gesamtsystem_P.RateTransition_InitialCondition;
    }

    /* End of Start for RateTransition: '<S12>/Rate Transition' */

    /* Start for S-Function (c280xpwm): '<S10>/PWM Vorgabe fuer Motor_links ' */

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

    /* Start for S-Function (c280xpwm): '<S10>/PWM Vorgabe fuer Motor_rechts' */

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

    /* Start for S-Function (c280xgpio_do): '<S10>/Drehrichtungsvorgabe fuer Motor_links' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFCFF;
    GpioCtrlRegs.GPADIR.all |= 0x100000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S10>/Drehrichtungsvorgabe fuer Motor_rechts' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFF3FF;
    GpioCtrlRegs.GPADIR.all |= 0x200000;
    EDIS;

    /* Start for S-Function (c280xadc): '<S3>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! Für korrekte Winkelmessung nicht die Sampletime vergrößern Weitere Ports können hinzugefügt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv' */
    if (adcInitFlag == 0) {
      InitAdc();
      adcInitFlag = 1;
    }

    config_ADC_A (3U, 4165U, 0U, 0U, 0U);

    /* Start for MATLABSystem: '<S3>/Moving Average' */
    Gesamtsystem_DWork.obj.matlabCodegenIsDeleted = true;
    Gesamtsystem_DWork.obj.isInitialized = 0L;
    Gesamtsystem_DWork.obj.NumChannels = -1L;
    Gesamtsystem_DWork.obj.matlabCodegenIsDeleted = false;
    Gesamtsystem_DWork.objisempty = true;
    if (Gesamtsystem_DWork.obj.isInitialized == 1L) {
      Gesamtsystem_DWork.obj.TunablePropsChanged = true;
    }

    Gesamtsystem_DWork.obj.ForgettingFactor =
      Gesamtsystem_P.MovingAverage_ForgettingFactor;
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

    /* End of Start for MATLABSystem: '<S3>/Moving Average' */

    /* Start for S-Function (c280xgpio_do): '<S3>/Drehrichtungsvorgabe für einen Motor1' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFFFC;
    GpioCtrlRegs.GPADIR.all |= 0x10000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S36>/Drehrichtungsvorgabe für einen Motor' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFF3F;
    GpioCtrlRegs.GPADIR.all |= 0x80000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S36>/PWM Vorgabe für einen Motor ' */

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

    /* Start for S-Function (c280xpwm): '<S3>/PWM Vorgabe für einen Motor 1' */

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

    /* Start for S-Function (c280xgpio_do): '<S38>/grüne LED3 auf dem µC gibt 1//0 codiert die Drehrichtung an' */
    EALLOW;
    GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
    GpioCtrlRegs.GPBDIR.all |= 0x4;
    EDIS;
    Gesamtsystem_PrevZCSigState.I2CReinitialisierung_Trig_ZCE =
      UNINITIALIZED_ZCSIG;
    Gesamtsystem_PrevZCSigState.I2CReset_Trig_ZCE = UNINITIALIZED_ZCSIG;

    /* InitializeConditions for RateTransition: '<S12>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Gesamtsystem_DWork.RateTransition_Buffer[i] =
        Gesamtsystem_P.RateTransition_InitialCondition;
    }

    /* End of InitializeConditions for RateTransition: '<S12>/Rate Transition' */

    /* InitializeConditions for DiscretePulseGenerator: '<S27>/Pulse Generator' */
    Gesamtsystem_DWork.clockTickCounter = 0L;

    /* InitializeConditions for Memory: '<S43>/Memory' */
    Gesamtsystem_DWork.Memory_PreviousInput = Gesamtsystem_P.EdgeDetector1_ic;

    /* InitializeConditions for UnitDelay: '<S42>/Unit Delay3' */
    Gesamtsystem_DWork.UnitDelay3_DSTATE =
      Gesamtsystem_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S42>/Unit Delay4' */
    Gesamtsystem_DWork.UnitDelay4_DSTATE =
      Gesamtsystem_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S42>/Unit Delay5' */
    Gesamtsystem_DWork.UnitDelay5_DSTATE =
      Gesamtsystem_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S42>/Unit Delay1' */
    Gesamtsystem_DWork.UnitDelay1_DSTATE =
      Gesamtsystem_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Memory: '<S44>/Memory' */
    Gesamtsystem_DWork.Memory_PreviousInput_a = Gesamtsystem_P.EdgeDetector2_ic;

    /* InitializeConditions for UnitDelay: '<S42>/Unit Delay2' */
    Gesamtsystem_DWork.UnitDelay2_DSTATE =
      Gesamtsystem_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
    Gesamtsystem_DWork.UnitDelay_DSTATE =
      Gesamtsystem_P.UnitDelay_InitialCondition;

    /* SystemInitialize for S-Function (c28xisr_c2000): '<S12>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S12>/Triggered Subsystem'
     */
    /* System initialize for function-call system: '<S12>/Triggered Subsystem' */
    {
      int16_T i;

      /* InitializeConditions for Delay: '<S28>/Delay' */
      for (i = 0; i < 10; i++) {
        Gesamtsystem_DWork.Delay_DSTATE[i] =
          Gesamtsystem_P.Delay_InitialCondition;
      }

      /* End of InitializeConditions for Delay: '<S28>/Delay' */
    }

    /* End of SystemInitialize for S-Function (c28xisr_c2000): '<S12>/C28x Hardware Interrupt' */

    /* SystemInitialize for Chart: '<S12>/Chart8' */
    Gesamtsystem_DWork.is_active_c25_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c25_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;
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

    /* End of SystemInitialize for Chart: '<S12>/Chart8' */

    /* SystemInitialize for Chart: '<S12>/Chart6' */
    Gesamtsystem_DWork.is_active_c24_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c24_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S12>/Chart2' */
    Gesamtsystem_DWork.is_active_c17_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S12>/Chart4' */
    Gesamtsystem_DWork.is_active_c21_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c21_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
    Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.temporalCounter_i1_k = 0U;
    Gesamtsystem_DWork.is_active_c5_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Atomic SubSystem: '<S2>/Navigationssystem [Einstellungen moeglich]' */
    /* SystemInitialize for Chart: '<S16>/Quadrantenteiler' */
    Gesamtsystem_DWork.is_active_c13_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S16>/Winkelausgabe fuer Ausrichtung' */
    Gesamtsystem_DWork.is_active_c14_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S11>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = ±15°]' */
    Gesamtsystem_DWork.is_active_c8_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c8_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S11>/Fahrsystem' */
    Gesamtsystem_DWork.is_active_c11_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* End of SystemInitialize for SubSystem: '<S2>/Navigationssystem [Einstellungen moeglich]' */

    /* SystemInitialize for Chart: '<S12>/Chart1' */
    Gesamtsystem_DWork.is_active_c16_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    for (i = 0; i < 16; i++) {
      /* SystemInitialize for Chart: '<S12>/Chart6' */
      Gesamtsystem_B.int16x_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S12>/Chart2' */
      Gesamtsystem_B.int16y_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S12>/Chart4' */
      Gesamtsystem_B.int16a1_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S12>/Chart1' */
      Gesamtsystem_B.int16z_bin[i] = 0.0F;
    }

    /* InitializeConditions for MATLABSystem: '<S3>/Moving Average' */
    if (Gesamtsystem_DWork.obj.pStatistic->isInitialized == 1L) {
      Gesamtsystem_DWork.obj.pStatistic->pwN = 1.0;
      Gesamtsystem_DWork.obj.pStatistic->pmN = 0.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S3>/Moving Average' */

    /* SystemInitialize for Chart: '<S3>/Sortieralgorithmus' */
    Gesamtsystem_DWork.temporalCounter_i1 = 0U;
    Gesamtsystem_DWork.is_active_c15_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c15_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Chart1' */
    Gesamtsystem_DWork.temporalCounter_i1_p = 0U;
    Gesamtsystem_DWork.is_active_c4_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c4_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Chart' */
    Gesamtsystem_DWork.temporalCounter_i1_a = 0U;
    Gesamtsystem_DWork.is_active_c3_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c3_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Chart2' */
    Gesamtsystem_DWork.temporalCounter_i1_av = 0U;
    Gesamtsystem_DWork.is_active_c6_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c6_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;
  }
}

/* Model terminate function */
void Gesamtsystem_terminate(void)
{
  /* Terminate for MATLABSystem: '<S3>/Moving Average' */
  matlabCodegenHandle_matlabCodeg(&Gesamtsystem_DWork.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
