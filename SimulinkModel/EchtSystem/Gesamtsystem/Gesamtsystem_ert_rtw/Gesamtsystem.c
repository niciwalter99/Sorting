/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Gesamtsystem.c
 *
 * Code generated for Simulink model 'Gesamtsystem'.
 *
 * Model version                  : 1.83
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
<<<<<<< HEAD
 * C/C++ source code generated on : Wed Feb  3 11:10:28 2021
=======
 * C/C++ source code generated on : Wed Feb  3 10:34:50 2021
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
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
#define Gesamtsystem_IN_Black          (1U)
#define Gesamtsystem_IN_BlueCube       (2U)
#define Gesamtsystem_IN_CloseRegular   (1U)
#define Gesamtsystem_IN_Daten_einlesen (1U)
#define Gesamtsystem_IN_DetectedCube   (3U)
#define Gesamtsystem_IN_Ende           (1U)
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
#define Gesamtsystem_IN_Start_Warten   (6U)
#define Gesamtsystem_IN_Start_Warten_b (5U)
<<<<<<< HEAD
#define Gesamtsystem_IN_Start_Warten_ba (2U)
=======
#define Gesamtsystem_IN_Start_Warten_ba (3U)
#define Gesamtsystem_IN_Stehen         (2U)
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
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
<<<<<<< HEAD
#define Gesamtsystem_IN_Wechsel_3_b    (20U)
#define Gesamtsystem_IN_Wechsel_4      (21U)
#define Gesamtsystem_IN_Wechsel_5      (22U)
#define Gesamtsystem_IN_Wechsel_6      (23U)
#define Gesamtsystem_IN_Wechsel_7      (24U)
#define Gesamtsystem_IN_Wechsel_8      (25U)
#define Gesamtsystem_IN_Wechsel_9      (26U)
=======
#define Gesamtsystem_IN_Wechsel_3_b    (22U)
#define Gesamtsystem_IN_Wechsel_4      (23U)
#define Gesamtsystem_IN_Wechsel_5      (24U)
#define Gesamtsystem_IN_Wechsel_6      (25U)
#define Gesamtsystem_IN_Wechsel_7      (26U)
#define Gesamtsystem_IN_Wechsel_8      (27U)
#define Gesamtsystem_IN_Wechsel_9      (28U)
#define Gesamtsystem_IN_Weiter         (4U)
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
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

/* Hardware Interrupt Block: '<S13>/C28x Hardware Interrupt' */
void isr_int8pie2_task_fcn(void)
{
  /* Call the system: <S13>/Triggered Subsystem */
  {
    int16_T i;

    /* S-Function (c28xisr_c2000): '<S13>/C28x Hardware Interrupt' */

    /* Output and update for function-call system: '<S13>/Triggered Subsystem' */
    {
      int16_T i;

      /* S-Function (c280xi2c_rx): '<S29>/I2C Receive' */
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
        /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn2' */
        Gesamtsystem_B.VectorConcatenate[i + 10] =
          Gesamtsystem_B.I2CReceive_o1[i];

        /* Delay: '<S29>/Delay' */
        Gesamtsystem_B.VectorConcatenate[i] = Gesamtsystem_DWork.Delay_DSTATE[i];

        /* Update for Delay: '<S29>/Delay' */
        Gesamtsystem_DWork.Delay_DSTATE[i] = Gesamtsystem_B.I2CReceive_o1[i];
      }
    }

    /* End of Outputs for S-Function (c28xisr_c2000): '<S13>/C28x Hardware Interrupt' */

    /* RateTransition: '<S13>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Gesamtsystem_DWork.RateTransition_Buffer[i +
        (Gesamtsystem_DWork.RateTransition_semaphoreTaken == 0) * 20] =
        Gesamtsystem_B.VectorConcatenate[i];
    }

    Gesamtsystem_DWork.RateTransition_ActiveBufIdx =
      (Gesamtsystem_DWork.RateTransition_semaphoreTaken == 0);

    /* End of RateTransition: '<S13>/Rate Transition' */
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
<<<<<<< HEAD
 *    '<S44>/NEGATIVE Edge'
 *    '<S45>/NEGATIVE Edge'
=======
 *    '<S45>/NEGATIVE Edge'
 *    '<S46>/NEGATIVE Edge'
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
 */
void Gesamtsystem_NEGATIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_NEGATIVEEdge_Gesamtsystem *localB)
{
<<<<<<< HEAD
  /* Outputs for Enabled SubSystem: '<S44>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S49>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S49>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S44>/NEGATIVE Edge' */
=======
  /* Outputs for Enabled SubSystem: '<S45>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S50>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S50>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_INprevious > (int16_T)rtu_IN);
  }

  /* End of Outputs for SubSystem: '<S45>/NEGATIVE Edge' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
}

/*
 * Output and update for enable system:
<<<<<<< HEAD
 *    '<S44>/POSITIVE Edge'
 *    '<S45>/POSITIVE Edge'
=======
 *    '<S45>/POSITIVE Edge'
 *    '<S46>/POSITIVE Edge'
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
 */
void Gesamtsystem_POSITIVEEdge(real_T rtu_Enable, boolean_T rtu_IN, boolean_T
  rtu_INprevious, rtB_POSITIVEEdge_Gesamtsystem *localB)
{
<<<<<<< HEAD
  /* Outputs for Enabled SubSystem: '<S44>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S50>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S50>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S44>/POSITIVE Edge' */
=======
  /* Outputs for Enabled SubSystem: '<S45>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S51>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* RelationalOperator: '<S51>/Relational Operator1' */
    localB->RelationalOperator1 = ((int16_T)rtu_IN > (int16_T)rtu_INprevious);
  }

  /* End of Outputs for SubSystem: '<S45>/POSITIVE Edge' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
}

/*
 * Output and update for atomic system:
<<<<<<< HEAD
 *    '<S43>/MATLAB Function1'
 *    '<S43>/MATLAB Function3'
=======
 *    '<S44>/MATLAB Function1'
 *    '<S44>/MATLAB Function3'
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
 */
void Gesamtsyste_MATLABFunction1(real_T rtu_u, real32_T rtu_yalt,
  rtB_MATLABFunction1_Gesamtsyste *localB)
{
<<<<<<< HEAD
  /* MATLAB Function 'Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1': '<S46>:1' */
  /* '<S46>:1:3' */
=======
  /* MATLAB Function 'Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function1': '<S47>:1' */
  /* '<S47>:1:3' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  localB->y = rtu_yalt + (real32_T)rtu_u;
}

/* Function for Chart: '<S13>/Chart8' */
static void Gesam_enter_atomic_wert_erkannt(void)
{
  /* Entry 'wert_erkannt': '<S27>:109' */
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
  /* During 'Anfahrpunkt_8': '<S8>:1389' */
  if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
       Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
        Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
    /* Transition: '<S8>:1362' */
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_8;

    /* Entry 'Wechsel_8': '<S8>:1390' */
    Gesamtsystem_DWork.Counter++;
  }
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Anfahrpunkt_9(void)
{
  /* During 'Anfahrpunkt_9': '<S8>:1391' */
  if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
       Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
        Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
    /* Transition: '<S8>:1364' */
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_9;

    /* Entry 'Wechsel_9': '<S8>:1392' */
    Gesamtsystem_DWork.Counter++;
  }
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_1(void)
{
  /* During 'Wechsel_1': '<S8>:1374' */
  /* Transition: '<S8>:1346' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_2;

  /* Entry 'Anfahrpunkt_2': '<S8>:1375' */
  Gesamtsystem_B.x_soll = 1200.0;
  Gesamtsystem_B.y_soll = 100.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_3(void)
{
  /* During 'Wechsel_3': '<S8>:1378' */
  /* Transition: '<S8>:1350' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_4;

  /* Entry 'Anfahrpunkt_4': '<S8>:1379' */
  Gesamtsystem_B.x_soll = 940.0;
  Gesamtsystem_B.y_soll = 650.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_11(void)
{
  /* During 'Wechsel_11': '<S8>:1394' */
  /* Transition: '<S8>:1367' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_12;

  /* Entry 'Anfahrpunkt_12': '<S8>:1395' */
  Gesamtsystem_B.x_soll = 900.0;
  Gesamtsystem_B.y_soll = 0.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_12(void)
{
  /* During 'Wechsel_12': '<S8>:1396' */
  /* Transition: '<S8>:1369' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_13;

  /* Entry 'Anfahrpunkt_13': '<S8>:1397' */
  Gesamtsystem_B.x_soll = 1200.0;
  Gesamtsystem_B.y_soll = 0.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_13(void)
{
  /* During 'Wechsel_13': '<S8>:1398' */
  /* Transition: '<S8>:1371' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_14;

  /* Entry 'Anfahrpunkt_14': '<S8>:1399' */
  Gesamtsystem_B.x_soll = 1370.0;
  Gesamtsystem_B.y_soll = -100.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_2(void)
{
  /* During 'Wechsel_2': '<S8>:1376' */
  /* Transition: '<S8>:1348' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_3;

  /* Entry 'Anfahrpunkt_3': '<S8>:1377' */
  Gesamtsystem_B.x_soll = 1000.0;
  Gesamtsystem_B.y_soll = 250.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_4(void)
{
  /* During 'Wechsel_4': '<S8>:1380' */
  /* Transition: '<S8>:1353' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_5;

  /* Entry 'Anfahrpunkt_5': '<S8>:1381' */
  Gesamtsystem_B.x_soll = 850.0;
  Gesamtsystem_B.y_soll = 750.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_5(void)
{
  /* During 'Wechsel_5': '<S8>:1382' */
  /* Transition: '<S8>:1355' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_6;

  /* Entry 'Anfahrpunkt_6': '<S8>:1383' */
  Gesamtsystem_B.x_soll = 600.0;
  Gesamtsystem_B.y_soll = 825.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_6(void)
{
  /* During 'Wechsel_6': '<S8>:1384' */
  /* Transition: '<S8>:1357' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_7;

  /* Entry 'Anfahrpunkt_7': '<S8>:1386' */
  Gesamtsystem_B.x_soll = 500.0;
  Gesamtsystem_B.y_soll = 825.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_7(void)
{
  /* During 'Wechsel_7': '<S8>:1388' */
  /* Transition: '<S8>:1361' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_8;

  /* Entry 'Anfahrpunkt_8': '<S8>:1389' */
  Gesamtsystem_B.x_soll = 325.0;
  Gesamtsystem_B.y_soll = 725.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Wechsel_8(void)
{
  /* During 'Wechsel_8': '<S8>:1390' */
  /* Transition: '<S8>:1363' */
  Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_9;

  /* Entry 'Anfahrpunkt_9': '<S8>:1391' */
  Gesamtsystem_B.x_soll = 400.0;
  Gesamtsystem_B.y_soll = 300.0;
  Gesamtsystem_B.alpha_soll = -1.0;
}

/* Function for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
static void Gesamtsystem_Sammeln(void)
{
  /* During 'Sammeln': '<S8>:1343' */
  if (Gesamtsystem_DWork.Counter == 20.0) {
    /* Transition: '<S8>:1342' */
    Gesamtsystem_B.Gang = 1.0;
    Gesamtsystem_DWork.x_least = Gesamtsystem_B.x_soll;

    /* Exit Internal 'Sammeln': '<S8>:1343' */
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Uebergabe;

    /* Entry Internal 'Uebergabe': '<S8>:1330' */
    /* Transition: '<S8>:1331' */
    Gesamtsystem_DWork.Counter = 0.0;
    Gesamtsystem_DWork.is_Uebergabe = Ge_IN_Uebergabepunkt_x_Richtung;

    /* Entry 'Uebergabepunkt_x_Richtung': '<S8>:1336' */
    Gesamtsystem_B.alpha_soll = -1.0;
  } else {
    switch (Gesamtsystem_DWork.is_Sammeln) {
     case Gesamtsystem_IN_Anfahrpunkt_1:
      /* During 'Anfahrpunkt_1': '<S8>:1373' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1345' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_1_b;

        /* Entry 'Wechsel_1': '<S8>:1374' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_10:
      /* During 'Anfahrpunkt_10': '<S8>:1387' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1358' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_10;

        /* Entry 'Wechsel_10': '<S8>:1385' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_11:
      /* During 'Anfahrpunkt_11': '<S8>:1393' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1366' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_11;

        /* Entry 'Wechsel_11': '<S8>:1394' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_12:
      /* During 'Anfahrpunkt_12': '<S8>:1395' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1368' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_12;

        /* Entry 'Wechsel_12': '<S8>:1396' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_13:
      /* During 'Anfahrpunkt_13': '<S8>:1397' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1370' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_13;

        /* Entry 'Wechsel_13': '<S8>:1398' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_14:
      /* During 'Anfahrpunkt_14': '<S8>:1399' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1372' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_14;

        /* Entry 'Wechsel_14': '<S8>:1400' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_2:
      /* During 'Anfahrpunkt_2': '<S8>:1375' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1347' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_2_b;

        /* Entry 'Wechsel_2': '<S8>:1376' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_3:
      /* During 'Anfahrpunkt_3': '<S8>:1377' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1349' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_3_b;

        /* Entry 'Wechsel_3': '<S8>:1378' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_4:
      /* During 'Anfahrpunkt_4': '<S8>:1379' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1352' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_4;

        /* Entry 'Wechsel_4': '<S8>:1380' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_5:
      /* During 'Anfahrpunkt_5': '<S8>:1381' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1354' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_5;

        /* Entry 'Wechsel_5': '<S8>:1382' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_6:
      /* During 'Anfahrpunkt_6': '<S8>:1383' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1356' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_6;

        /* Entry 'Wechsel_6': '<S8>:1384' */
        Gesamtsystem_DWork.Counter++;
      }
      break;

     case Gesamtsystem_IN_Anfahrpunkt_7:
      /* During 'Anfahrpunkt_7': '<S8>:1386' */
      if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
           Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
            Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
        /* Transition: '<S8>:1359' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Wechsel_7;

        /* Entry 'Wechsel_7': '<S8>:1388' */
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
      /* During 'Wechsel_14': '<S8>:1400' */
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
      /* During 'Wechsel_9': '<S8>:1392' */
      if (Gesamtsystem_DWork.Counter == 9.0) {
        /* Transition: '<S8>:1360' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_10;

        /* Entry 'Anfahrpunkt_10': '<S8>:1387' */
        Gesamtsystem_B.x_soll = 880.0;
        Gesamtsystem_B.y_soll = 0.0;
        Gesamtsystem_B.alpha_soll = -1.0;
      } else {
        /* Transition: '<S8>:1365' */
        Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_11;

        /* Entry 'Anfahrpunkt_11': '<S8>:1393' */
        Gesamtsystem_B.x_soll = 600.0;
        Gesamtsystem_B.y_soll = 0.0;
        Gesamtsystem_B.alpha_soll = -1.0;
      }
      break;
    }
  }
}

/* Function for Chart: '<S12>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = �15�]' */
static void enter_atomic_Drehstillstand_mit(void)
{
  real_T tmp;

  /* Entry 'Drehstillstand_mit_Ausrichtungsregelung': '<S14>:26' */
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

/* Function for Chart: '<S12>/Fahrsystem' */
static void Gesamtsystem_Start_Warten(void)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Start_Warten': '<S15>:92' */
  /* Transition: '<S15>:93' */
  l_mindern = fabs(Gesamtsystem_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (Gesamtsystem_B.PWMWertebereich > 0.0)) {
    /* Transition: '<S15>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S15>:21' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S15>:45' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsyste_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S15>:8' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S15>:57' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsyst_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S15>:9' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S15>:53' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S15>:54' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesam_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S15>:43' */
        Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S15>:55' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesa_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S15>:51' */
        Gesamtsystem_B.pwm_out_l = 59.0 + l_mindern;
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S15>:82' */
    if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S15>:85' */
      l_mindern = 1.0 - Gesamtsystem_B.Gang;
      r_mindern = Gesamtsystem_B.Gang;
    } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S15>:86' */
      l_mindern = Gesamtsystem_B.Gang;
      r_mindern = 1.0 - Gesamtsystem_B.Gang;
    } else {
      /* Transition: '<S15>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S15>:94' */
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

/* Function for Chart: '<S12>/Fahrsystem' */
static void Gesamtsystem_Drehen_links_max(void)
{
  real_T a;
  real_T l_mindern;
  real_T r_mindern;

  /* During 'Drehen_links_max': '<S15>:8' */
  /* Transition: '<S15>:60' */
  /* Transition: '<S15>:75' */
  l_mindern = fabs(Gesamtsystem_B.alpha_diff_opt);
  if ((l_mindern > 0.0) && (Gesamtsystem_B.PWMWertebereich > 0.0)) {
    /* Transition: '<S15>:58' */
    if (l_mindern > 40.0) {
      /* Transition: '<S15>:21' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S15>:45' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsyste_IN_Drehen_links_max;

        /* Entry 'Drehen_links_max': '<S15>:8' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S15>:57' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsyst_IN_Drehen_rechts_max;

        /* Entry 'Drehen_rechts_max': '<S15>:9' */
        Gesamtsystem_B.pwm_out_l = 100.0;
        Gesamtsystem_B.pwm_out_r = 100.0;
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    } else {
      /* Transition: '<S15>:53' */
      if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
        /* Transition: '<S15>:54' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesam_IN_Drehen_links_gesteuert;

        /* Entry 'Drehen_links_gesteuert': '<S15>:43' */
        Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 0.0;
        Gesamtsystem_B.r_l_out_r = 1.0;
      } else {
        /* Transition: '<S15>:55' */
        Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesa_IN_Drehen_rechts_gesteuert;

        /* Entry 'Drehen_rechts_gesteuert': '<S15>:51' */
        Gesamtsystem_B.pwm_out_l = 59.0 + l_mindern;
        Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
        Gesamtsystem_B.r_l_out_l = 1.0;
        Gesamtsystem_B.r_l_out_r = 0.0;
      }
    }
  } else {
    /* Transition: '<S15>:82' */
    if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
      /* Transition: '<S15>:85' */
      l_mindern = 1.0 - Gesamtsystem_B.Gang;
      r_mindern = Gesamtsystem_B.Gang;
    } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
      /* Transition: '<S15>:86' */
      l_mindern = Gesamtsystem_B.Gang;
      r_mindern = 1.0 - Gesamtsystem_B.Gang;
    } else {
      /* Transition: '<S15>:87' */
      l_mindern = 0.0;
      r_mindern = 0.0;
    }

    Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

    /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S15>:94' */
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

  /* MATLAB Function 'findPlaceForBlue': '<S38>:206' */
  if (Gesamtsystem_DWork.magacin0 == 4.0) {
    /* '<S38>:206:4' */
    /* '<S38>:206:5' */
    magacinOut = 0.0;

    /* '<S38>:206:6' */
    Gesamtsystem_DWork.magacin0++;

    /* '<S38>:206:7' */
  } else if ((Gesamtsystem_DWork.magacin2 == 0.0) ||
             ((Gesamtsystem_DWork.magacin2_LastCube == 2.0) &&
              (Gesamtsystem_DWork.magacin2 < 5.0))) {
    /* '<S38>:206:9' */
    /* '<S38>:206:10' */
    magacinOut = 2.0;

    /* '<S38>:206:11' */
    Gesamtsystem_DWork.magacin2++;

    /* '<S38>:206:12' */
    Gesamtsystem_DWork.magacin2_LastCube = 1.0;
  } else if ((Gesamtsystem_DWork.magacin1_LastCube == 2.0) &&
             (Gesamtsystem_DWork.magacin1 < 5.0)) {
    /* '<S38>:206:14' */
    /* '<S38>:206:15' */
    magacinOut = 1.0;

    /* '<S38>:206:16' */
    Gesamtsystem_DWork.magacin1++;

    /* '<S38>:206:17' */
    Gesamtsystem_DWork.magacin1_LastCube = 1.0;
  } else if (Gesamtsystem_DWork.magacin3 < 5.0) {
    /* '<S38>:206:19' */
    /* '<S38>:206:20' */
    magacinOut = 3.0;

    /* '<S38>:206:21' */
    Gesamtsystem_DWork.magacin3++;
  } else if (Gesamtsystem_DWork.magacin4 < 5.0) {
    /* '<S38>:206:23' */
    /* '<S38>:206:24' */
    magacinOut = 4.0;

    /* '<S38>:206:25' */
    Gesamtsystem_DWork.magacin4++;
  } else if (Gesamtsystem_DWork.magacin5 < 5.0) {
    /* '<S38>:206:27' */
    /* '<S38>:206:28' */
    magacinOut = 5.0;

    /* '<S38>:206:29' */
    Gesamtsystem_DWork.magacin5++;
  } else {
    /* '<S38>:206:32' */
    magacinOut = -1.0;
  }

  return magacinOut;
}

/* Function for Chart: '<S3>/Sortieralgorithmus2' */
static real_T Gesamtsystem_findPlaceForRed(void)
{
  real_T magacinOut;

  /* MATLAB Function 'findPlaceForRed': '<S38>:204' */
  if ((Gesamtsystem_DWork.magacin1 == 0.0) ||
      ((Gesamtsystem_DWork.magacin1_LastCube == 1.0) &&
       (Gesamtsystem_DWork.magacin1 < 5.0))) {
    /* '<S38>:204:3' */
    /* '<S38>:204:4' */
    magacinOut = 1.0;

    /* '<S38>:204:5' */
    Gesamtsystem_DWork.magacin1++;

    /* '<S38>:204:6' */
    Gesamtsystem_DWork.magacin1_LastCube = 2.0;
  } else if ((Gesamtsystem_DWork.magacin2_LastCube == 1.0) &&
             (Gesamtsystem_DWork.magacin2 < 5.0)) {
    /* '<S38>:204:8' */
    /* '<S38>:204:9' */
    magacinOut = 2.0;

    /* '<S38>:204:10' */
    Gesamtsystem_DWork.magacin2++;

    /* '<S38>:204:11' */
    Gesamtsystem_DWork.magacin2_LastCube = 2.0;
  } else if (Gesamtsystem_DWork.magacin0 != 5.0) {
    /* '<S38>:204:13' */
    /* '<S38>:204:14' */
    magacinOut = 0.0;

    /* '<S38>:204:15' */
    Gesamtsystem_DWork.magacin0++;

    /* '<S38>:204:16' */
  } else if (Gesamtsystem_DWork.magacin3 != 5.0) {
    /* '<S38>:204:19' */
    /* '<S38>:204:20' */
    magacinOut = 3.0;

    /* '<S38>:204:21' */
    Gesamtsystem_DWork.magacin3++;

    /* '<S38>:204:22' */
  } else if ((Gesamtsystem_DWork.magacin1 <= Gesamtsystem_DWork.magacin4) &&
             (Gesamtsystem_DWork.magacin1 != 5.0)) {
    /* '<S38>:204:24' */
    /* '<S38>:204:25' */
    magacinOut = 1.0;

    /* '<S38>:204:26' */
    Gesamtsystem_DWork.magacin1++;

    /* '<S38>:204:27' */
    Gesamtsystem_DWork.magacin1_LastCube = 2.0;
  } else if (Gesamtsystem_DWork.magacin1 > Gesamtsystem_DWork.magacin4) {
    /* '<S38>:204:29' */
    /* '<S38>:204:30' */
    magacinOut = 4.0;

    /* '<S38>:204:31' */
    Gesamtsystem_DWork.magacin4++;
  } else if ((Gesamtsystem_DWork.magacin2 <= Gesamtsystem_DWork.magacin5) &&
             (Gesamtsystem_DWork.magacin2 != 5.0)) {
    /* '<S38>:204:34' */
    /* '<S38>:204:35' */
    magacinOut = 2.0;

    /* '<S38>:204:36' */
    Gesamtsystem_DWork.magacin2++;

    /* '<S38>:204:37' */
    Gesamtsystem_DWork.magacin2_LastCube = 2.0;
  } else if (Gesamtsystem_DWork.magacin2 > Gesamtsystem_DWork.magacin5) {
    /* '<S38>:204:39' */
    /* '<S38>:204:41' */
    magacinOut = 5.0;

    /* '<S38>:204:42' */
    Gesamtsystem_DWork.magacin5++;

    /* '<S38>:204:43' */
  } else {
    /* '<S38>:204:46' */
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
  boolean_T rtb_VergleichmitSchwellwert_l;
  real_T rtb_Sum;
  real_T rtb_MultiportSwitch_idx_0;
  real_T rtb_MultiportSwitch_idx_1;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_1;

  {                                    /* Sample time: [2.0E-5s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (c280xadc): '<S3>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! F�r korrekte Winkelmessung nicht die Sampletime vergr��ern Weitere Ports k�nnen hinzugef�gt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
  {
    AdcRegs.ADCTRL2.bit.RST_SEQ1 = 1;  /* Reset SEQ1 module*/
    AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;/*clear INT sequencer*/
    AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;  /* Software Trigger*/
    while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {
    }                                  /*Wait for Sequencer INT bit to clear */

    asm(" RPT #11 || NOP");
    Gesamtsystem_B.AnalogDigitalWandlungSampletime = (AdcRegs.ADCRESULT0) >> 4;
    Gesamtsystem_B.AnalogDigitalWandlungSampleti_j = (AdcRegs.ADCRESULT1) >> 4;
    Gesamtsystem_B.AnalogDigitalWandlungSamplet_jy = (AdcRegs.ADCRESULT2) >> 4;
  }

<<<<<<< HEAD
  /* RelationalOperator: '<S43>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S43>/Constant'
=======
  /* RelationalOperator: '<S44>/Vergleich mit  Schwellwert' incorporates:
   *  Constant: '<S44>/Constant'
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
   */
  rtb_VergleichmitSchwellwert = (Gesamtsystem_P.Constant_Value <=
    Gesamtsystem_B.AnalogDigitalWandlungSamplet_jy);

<<<<<<< HEAD
  /* MultiPortSwitch: '<S44>/Multiport Switch' incorporates:
   *  Constant: '<S44>/Constant1'
   *  Constant: '<S44>/either edge'
   *  Constant: '<S44>/neg. edge'
   *  Constant: '<S44>/pos. edge'
=======
  /* MultiPortSwitch: '<S45>/Multiport Switch' incorporates:
   *  Constant: '<S45>/Constant1'
   *  Constant: '<S45>/either edge'
   *  Constant: '<S45>/neg. edge'
   *  Constant: '<S45>/pos. edge'
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
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

<<<<<<< HEAD
  /* End of MultiPortSwitch: '<S44>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S44>/POSITIVE Edge' */
  /* Memory: '<S44>/Memory' */
=======
  /* End of MultiPortSwitch: '<S45>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S45>/POSITIVE Edge' */
  /* Memory: '<S45>/Memory' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  Gesamtsystem_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert, Gesamtsystem_DWork.Memory_PreviousInput,
    &Gesamtsystem_B.POSITIVEEdge);

<<<<<<< HEAD
  /* End of Outputs for SubSystem: '<S44>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S44>/NEGATIVE Edge' */
=======
  /* End of Outputs for SubSystem: '<S45>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S45>/NEGATIVE Edge' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  Gesamtsystem_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert, Gesamtsystem_DWork.Memory_PreviousInput,
    &Gesamtsystem_B.NEGATIVEEdge);

<<<<<<< HEAD
  /* End of Outputs for SubSystem: '<S44>/NEGATIVE Edge' */

  /* RelationalOperator: '<S43>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S43>/Heuristisch ermittelter Schwellwert'
=======
  /* End of Outputs for SubSystem: '<S45>/NEGATIVE Edge' */

  /* RelationalOperator: '<S44>/Vergleich mit Schwellwert' incorporates:
   *  Constant: '<S44>/Heuristisch ermittelter Schwellwert'
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
   */
  rtb_VergleichmitSchwellwert_l =
    (Gesamtsystem_B.AnalogDigitalWandlungSampletime <=
     Gesamtsystem_P.HeuristischermittelterSchwellwe);

<<<<<<< HEAD
  /* MATLAB Function: '<S43>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S43>/Unit Delay3'
   *  UnitDelay: '<S43>/Unit Delay4'
   *  UnitDelay: '<S43>/Unit Delay5'
   */
  /* MATLAB Function 'Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2': '<S47>:1' */
  /* '<S47>:1:3' */
=======
  /* MATLAB Function: '<S44>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S44>/Unit Delay3'
   *  UnitDelay: '<S44>/Unit Delay4'
   *  UnitDelay: '<S44>/Unit Delay5'
   */
  /* MATLAB Function 'Subsystem/getAngle2/Messung des absoluten Winkels -  Auswertung der Encodersignale/MATLAB Function2': '<S48>:1' */
  /* '<S48>:1:3' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  y = 1.0;
  tmp_0 = !Gesamtsystem_DWork.UnitDelay3_DSTATE;
  tmp_1 = !Gesamtsystem_DWork.UnitDelay4_DSTATE;
  tmp = (tmp_0 && tmp_1);
  if (tmp && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_l))
  {
<<<<<<< HEAD
    /* '<S47>:1:7' */
=======
    /* '<S48>:1:7' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (tmp && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_l) {
<<<<<<< HEAD
    /* '<S47>:1:10' */
    /* '<S47>:1:11' */
=======
    /* '<S48>:1:10' */
    /* '<S48>:1:11' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    y = 1.0;
  }

  if (tmp && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_l)) {
<<<<<<< HEAD
    /* '<S47>:1:14' */
    /* '<S47>:1:15' */
=======
    /* '<S48>:1:14' */
    /* '<S48>:1:15' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    y = -1.0;
  }

  tmp_0 = (tmp_0 && Gesamtsystem_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_l))
  {
<<<<<<< HEAD
    /* '<S47>:1:22' */
    /* '<S47>:1:23' */
=======
    /* '<S48>:1:22' */
    /* '<S48>:1:23' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    y = -1.0;
  }

  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_l)
  {
<<<<<<< HEAD
    /* '<S47>:1:26' */
    /* '<S47>:1:27' */
=======
    /* '<S48>:1:26' */
    /* '<S48>:1:27' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_l) {
<<<<<<< HEAD
    /* '<S47>:1:34' */
    /* '<S47>:1:35' */
=======
    /* '<S48>:1:34' */
    /* '<S48>:1:35' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    y = 1.0;
  }

  tmp_0 = (Gesamtsystem_DWork.UnitDelay3_DSTATE && tmp_1);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && (!rtb_VergleichmitSchwellwert_l))
  {
<<<<<<< HEAD
    /* '<S47>:1:38' */
    /* '<S47>:1:39' */
=======
    /* '<S48>:1:38' */
    /* '<S48>:1:39' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_l))
  {
<<<<<<< HEAD
    /* '<S47>:1:46' */
    /* '<S47>:1:47' */
=======
    /* '<S48>:1:46' */
    /* '<S48>:1:47' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_l) {
<<<<<<< HEAD
    /* '<S47>:1:50' */
    /* '<S47>:1:51' */
=======
    /* '<S48>:1:50' */
    /* '<S48>:1:51' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    y = -1.0;
  }

  tmp_0 = (Gesamtsystem_DWork.UnitDelay3_DSTATE &&
           Gesamtsystem_DWork.UnitDelay4_DSTATE);
  if (tmp_0 && (!rtb_VergleichmitSchwellwert) && rtb_VergleichmitSchwellwert_l)
  {
<<<<<<< HEAD
    /* '<S47>:1:58' */
    /* '<S47>:1:59' */
=======
    /* '<S48>:1:58' */
    /* '<S48>:1:59' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    y = -1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && (!rtb_VergleichmitSchwellwert_l))
  {
<<<<<<< HEAD
    /* '<S47>:1:62' */
    /* '<S47>:1:63' */
=======
    /* '<S48>:1:62' */
    /* '<S48>:1:63' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    y = 1.0;
  }

  if (tmp_0 && rtb_VergleichmitSchwellwert && rtb_VergleichmitSchwellwert_l) {
<<<<<<< HEAD
    /* '<S47>:1:66' */
    /* '<S47>:1:67' */
=======
    /* '<S48>:1:66' */
    /* '<S48>:1:67' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    y = Gesamtsystem_DWork.UnitDelay5_DSTATE;
  }

  if (y == 1.0) {
<<<<<<< HEAD
    /* '<S47>:1:70' */
    /* '<S47>:1:71' */
    Gesamtsystem_B.RL = 1.0;
  } else {
    /* '<S47>:1:73' */
    Gesamtsystem_B.RL = 0.0;
  }

  /* MATLAB Function: '<S43>/MATLAB Function1' incorporates:
   *  Logic: '<S44>/Logical Operator1'
   *  MATLAB Function: '<S43>/MATLAB Function2'
   *  Product: '<S43>/Product3'
   *  UnitDelay: '<S43>/Unit Delay1'
=======
    /* '<S48>:1:70' */
    /* '<S48>:1:71' */
    Gesamtsystem_B.RL = 1.0;
  } else {
    /* '<S48>:1:73' */
    Gesamtsystem_B.RL = 0.0;
  }

  /* MATLAB Function: '<S44>/MATLAB Function1' incorporates:
   *  Logic: '<S45>/Logical Operator1'
   *  MATLAB Function: '<S44>/MATLAB Function2'
   *  Product: '<S44>/Product3'
   *  UnitDelay: '<S44>/Unit Delay1'
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
   */
  Gesamtsyste_MATLABFunction1((real_T)
    (Gesamtsystem_B.POSITIVEEdge.RelationalOperator1 ||
     Gesamtsystem_B.NEGATIVEEdge.RelationalOperator1) * y,
    Gesamtsystem_DWork.UnitDelay1_DSTATE, &Gesamtsystem_B.sf_MATLABFunction1);

<<<<<<< HEAD
  /* Product: '<S43>/Product1' incorporates:
   *  Constant: '<S43>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
=======
  /* Product: '<S44>/Product1' incorporates:
   *  Constant: '<S44>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,043'
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
   */
  rtb_Sum = Gesamtsystem_P.WinkelFlankePolulo3416V022Polul *
    Gesamtsystem_B.sf_MATLABFunction1.y;

<<<<<<< HEAD
  /* MultiPortSwitch: '<S45>/Multiport Switch' incorporates:
   *  Constant: '<S45>/Constant1'
   *  Constant: '<S45>/either edge'
   *  Constant: '<S45>/neg. edge'
   *  Constant: '<S45>/pos. edge'
=======
  /* MultiPortSwitch: '<S46>/Multiport Switch' incorporates:
   *  Constant: '<S46>/Constant1'
   *  Constant: '<S46>/either edge'
   *  Constant: '<S46>/neg. edge'
   *  Constant: '<S46>/pos. edge'
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
   */
  switch ((int16_T)Gesamtsystem_P.EdgeDetector2_model) {
   case 1:
    rtb_MultiportSwitch_idx_0 = Gesamtsystem_P.posedge_Value_c[0];
    rtb_MultiportSwitch_idx_1 = Gesamtsystem_P.posedge_Value_c[1];
    break;

   case 2:
    rtb_MultiportSwitch_idx_0 = Gesamtsystem_P.negedge_Value_b[0];
    rtb_MultiportSwitch_idx_1 = Gesamtsystem_P.negedge_Value_b[1];
    break;

   default:
    rtb_MultiportSwitch_idx_0 = Gesamtsystem_P.eitheredge_Value_g[0];
    rtb_MultiportSwitch_idx_1 = Gesamtsystem_P.eitheredge_Value_g[1];
    break;
  }

<<<<<<< HEAD
  /* End of MultiPortSwitch: '<S45>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S45>/POSITIVE Edge' */
  /* Memory: '<S45>/Memory' */
=======
  /* End of MultiPortSwitch: '<S46>/Multiport Switch' */

  /* Outputs for Enabled SubSystem: '<S46>/POSITIVE Edge' */
  /* Memory: '<S46>/Memory' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  Gesamtsystem_POSITIVEEdge(rtb_MultiportSwitch_idx_0,
    rtb_VergleichmitSchwellwert_l, Gesamtsystem_DWork.Memory_PreviousInput_n,
    &Gesamtsystem_B.POSITIVEEdge_n);

<<<<<<< HEAD
  /* End of Outputs for SubSystem: '<S45>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S45>/NEGATIVE Edge' */
=======
  /* End of Outputs for SubSystem: '<S46>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S46>/NEGATIVE Edge' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  Gesamtsystem_NEGATIVEEdge(rtb_MultiportSwitch_idx_1,
    rtb_VergleichmitSchwellwert_l, Gesamtsystem_DWork.Memory_PreviousInput_n,
    &Gesamtsystem_B.NEGATIVEEdge_i);

<<<<<<< HEAD
  /* End of Outputs for SubSystem: '<S45>/NEGATIVE Edge' */

  /* MATLAB Function: '<S43>/MATLAB Function3' incorporates:
   *  Logic: '<S45>/Logical Operator1'
   *  MATLAB Function: '<S43>/MATLAB Function2'
   *  Product: '<S43>/Product'
   *  UnitDelay: '<S43>/Unit Delay2'
=======
  /* End of Outputs for SubSystem: '<S46>/NEGATIVE Edge' */

  /* MATLAB Function: '<S44>/MATLAB Function3' incorporates:
   *  Logic: '<S46>/Logical Operator1'
   *  MATLAB Function: '<S44>/MATLAB Function2'
   *  Product: '<S44>/Product'
   *  UnitDelay: '<S44>/Unit Delay2'
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
   */
  Gesamtsyste_MATLABFunction1(y * (real_T)
    (Gesamtsystem_B.POSITIVEEdge_n.RelationalOperator1 ||
     Gesamtsystem_B.NEGATIVEEdge_i.RelationalOperator1),
    Gesamtsystem_DWork.UnitDelay2_DSTATE, &Gesamtsystem_B.sf_MATLABFunction3);

<<<<<<< HEAD
  /* Sum: '<S43>/Sum' incorporates:
   *  Constant: '<S43>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S43>/Product2'
=======
  /* Sum: '<S44>/Sum' incorporates:
   *  Constant: '<S44>/Winkel // Flanke Polulo 34:1 6V | 0,22 Polulo 74:1 6V | 0,1 Polulo 98:1 6V | 0,076 Polulo 171:1 6V | 0,1'
   *  Product: '<S44>/Product2'
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
   */
  rtb_Sum += Gesamtsystem_B.sf_MATLABFunction3.y *
    Gesamtsystem_P.WinkelFlankePolulo3416V022Pol_i;

<<<<<<< HEAD
  /* RateTransition: '<S39>/Rate Transition3' */
=======
  /* RateTransition: '<S40>/Rate Transition3' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  if (Gesamtsystem_M->Timing.RateInteraction.TID0_1) {
    Gesamtsystem_B.RateTransition3 = rtb_Sum;

    /* RateTransition: '<S3>/Rate Transition3' */
    Gesamtsystem_B.RateTransition3_j =
      Gesamtsystem_B.AnalogDigitalWandlungSampleti_j;
  }

<<<<<<< HEAD
  /* End of RateTransition: '<S39>/Rate Transition3' */

  /* S-Function (c280xgpio_do): '<S39>/gr�ne LED3 auf dem �C gibt 1//0 codiert die Drehrichtung an' */
=======
  /* End of RateTransition: '<S40>/Rate Transition3' */

  /* S-Function (c280xgpio_do): '<S40>/gr�ne LED3 auf dem �C gibt 1//0 codiert die Drehrichtung an' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  {
    if (Gesamtsystem_B.RL)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

<<<<<<< HEAD
  /* Update for Memory: '<S44>/Memory' */
  Gesamtsystem_DWork.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S43>/Unit Delay3' */
  Gesamtsystem_DWork.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S43>/Unit Delay4' */
  Gesamtsystem_DWork.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert_l;

  /* Update for UnitDelay: '<S43>/Unit Delay5' incorporates:
   *  MATLAB Function: '<S43>/MATLAB Function2'
   */
  Gesamtsystem_DWork.UnitDelay5_DSTATE = y;

  /* Update for UnitDelay: '<S43>/Unit Delay1' */
  Gesamtsystem_DWork.UnitDelay1_DSTATE = Gesamtsystem_B.sf_MATLABFunction1.y;

  /* Update for Memory: '<S45>/Memory' */
  Gesamtsystem_DWork.Memory_PreviousInput_n = rtb_VergleichmitSchwellwert_l;

  /* Update for UnitDelay: '<S43>/Unit Delay2' */
=======
  /* Update for Memory: '<S45>/Memory' */
  Gesamtsystem_DWork.Memory_PreviousInput = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S44>/Unit Delay3' */
  Gesamtsystem_DWork.UnitDelay3_DSTATE = rtb_VergleichmitSchwellwert;

  /* Update for UnitDelay: '<S44>/Unit Delay4' */
  Gesamtsystem_DWork.UnitDelay4_DSTATE = rtb_VergleichmitSchwellwert_l;

  /* Update for UnitDelay: '<S44>/Unit Delay5' incorporates:
   *  MATLAB Function: '<S44>/MATLAB Function2'
   */
  Gesamtsystem_DWork.UnitDelay5_DSTATE = y;

  /* Update for UnitDelay: '<S44>/Unit Delay1' */
  Gesamtsystem_DWork.UnitDelay1_DSTATE = Gesamtsystem_B.sf_MATLABFunction1.y;

  /* Update for Memory: '<S46>/Memory' */
  Gesamtsystem_DWork.Memory_PreviousInput_n = rtb_VergleichmitSchwellwert_l;

  /* Update for UnitDelay: '<S44>/Unit Delay2' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  Gesamtsystem_DWork.UnitDelay2_DSTATE = Gesamtsystem_B.sf_MATLABFunction3.y;
}

/* Model step function for TID1 */
void Gesamtsystem_step1(void)          /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_y_o;
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
    /* Transition: '<S11>:1405' */
    Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_Start;
  } else {
    switch (Gesamtsystem_DWork.is_c9_Gesamtsystem) {
     case Gesamtsystem_IN_Start:
      /* During 'Start': '<S11>:1404' */
      if (Gesamtsystem_B.Uebergabeschalter) {
        /* Transition: '<S11>:1411' */
        Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_Warten1;
        Gesamtsystem_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Warten1': '<S11>:1410' */
        Gesamtsystem_B.Value = 1.0;
      }
      break;

     case Gesamtsystem_IN_Stehen:
      Gesamtsystem_B.Value = 0.0;

      /* During 'Stehen': '<S11>:1406' */
      if (Gesamtsystem_DWork.temporalCounter_i1 >= 1000U) {
        /* Transition: '<S11>:1409' */
        Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_Weiter;

        /* Entry 'Weiter': '<S11>:1408' */
        Gesamtsystem_B.Value = 1.0;
      }
      break;

     case Gesamtsystem_IN_Warten1:
      Gesamtsystem_B.Value = 1.0;

      /* During 'Warten1': '<S11>:1410' */
      if (Gesamtsystem_B.Uebergabeschalter &&
          (Gesamtsystem_DWork.temporalCounter_i1 >= 1000U)) {
        /* Transition: '<S11>:1407' */
        Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_Stehen;
        Gesamtsystem_DWork.temporalCounter_i1 = 0U;

        /* Entry 'Stehen': '<S11>:1406' */
        Gesamtsystem_B.Value = 0.0;
      }
      break;

     default:
      Gesamtsystem_B.Value = 1.0;

      /* During 'Weiter': '<S11>:1408' */
      break;
    }
  }

  /* End of Chart: '<S2>/Motorsteuerung bei der Uebergabe' */

  /* RateTransition: '<S13>/Rate Transition' */
  Gesamtsystem_DWork.RateTransition_semaphoreTaken =
    Gesamtsystem_DWork.RateTransition_ActiveBufIdx;
  j = Gesamtsystem_DWork.RateTransition_semaphoreTaken * 20;
  for (i = 0; i < 20; i++) {
    Gesamtsystem_B.RateTransition[i] =
      Gesamtsystem_DWork.RateTransition_Buffer[i + j];
  }

  /* End of RateTransition: '<S13>/Rate Transition' */

  /* Chart: '<S13>/Chart8' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart8 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart8 */
  if (Gesamtsystem_DWork.is_active_c17_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart8 */
    Gesamtsystem_DWork.is_active_c17_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart8 */
    /* Transition: '<S27>:3' */
    Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_init;

    /* Entry 'init': '<S27>:2' */
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
      /* During 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S27>:126' */
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
        /* Transition: '<S27>:144' */
        /* Transition: '<S27>:145' */
        /* Transition: '<S27>:146' */
        /* Transition: '<S27>:151' */
        /* Transition: '<S27>:150' */
        /* Transition: '<S27>:149' */
        /* Transition: '<S27>:147' */
        /* Transition: '<S27>:156' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamts_IN_x5_valid_data_found1;

        /* Entry 'x5_valid_data_found1': '<S27>:148' */
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
        /* Transition: '<S27>:135' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_x1_search1;

        /* Entry 'x1_search1': '<S27>:125' */
        Gesamtsystem_DWork.search = c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1);
      }
      break;

     case Gesamtsystem_IN_init:
      /* During 'init': '<S27>:2' */
      /* Transition: '<S27>:112' */
      Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_wert_erkannt;
      Gesam_enter_atomic_wert_erkannt();
      break;

     case Gesamtsystem_IN_wert_erkannt:
      /* During 'wert_erkannt': '<S27>:109' */
      /* Transition: '<S27>:116' */
      Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_wert_erkannt2;

      /* Entry 'wert_erkannt2': '<S27>:115' */
      Gesamtsystem_DWork.search = 0;
      Gesamtsystem_DWork.counter = c28x_add_s32_s32_s32_sat
        (Gesamtsystem_DWork.counter, 1L);
      break;

     case Gesamtsystem_IN_wert_erkannt2:
      /* During 'wert_erkannt2': '<S27>:115' */
      if (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search] == 88) {
        /* Transition: '<S27>:127' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S27>:126' */
        Gesamtsystem_DWork.x_found = c28x_add_s32_s32_s32_sat
          (Gesamtsystem_DWork.x_found, 1L);
      } else {
        /* Transition: '<S27>:128' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_x1_search1;

        /* Entry 'x1_search1': '<S27>:125' */
        Gesamtsystem_DWork.search = c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1);
      }
      break;

     case Gesamtsystem_IN_x1_search1:
      /* During 'x1_search1': '<S27>:125' */
      if (Gesamtsystem_DWork.values_out1[Gesamtsystem_DWork.search] == 88) {
        /* Transition: '<S27>:129' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = IN_Anfang_found_Schritt_uebertr;

        /* Entry 'Anfang_found_Schritt_uebertragen_weglassen_performance': '<S27>:126' */
        Gesamtsystem_DWork.x_found = c28x_add_s32_s32_s32_sat
          (Gesamtsystem_DWork.x_found, 1L);
      } else if (Gesamtsystem_DWork.search < 19) {
        /* Transition: '<S27>:130' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_x1_search1;

        /* Entry 'x1_search1': '<S27>:125' */
        Gesamtsystem_DWork.search = c28x_add_s16_s16_s16_sat
          (Gesamtsystem_DWork.search, 1);
      } else {
        /* Transition: '<S27>:133' */
        Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_wert_erkannt;
        Gesam_enter_atomic_wert_erkannt();
      }
      break;

     default:
      /* During 'x5_valid_data_found1': '<S27>:148' */
      /* Transition: '<S27>:152' */
      Gesamtsystem_DWork.is_c17_Gesamtsystem = Gesamtsystem_IN_wert_erkannt;
      Gesam_enter_atomic_wert_erkannt();
      break;
    }
  }

  /* End of Chart: '<S13>/Chart8' */

  /* S-Function (scominttobit): '<S13>/Integer to Bit Converter2' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values1;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter2[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S13>/Integer to Bit Converter2' */

  /* S-Function (scominttobit): '<S13>/Integer to Bit Converter3' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values2;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter3[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S13>/Integer to Bit Converter3' */

  /* Chart: '<S13>/Chart6' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart6 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart6 */
  if (Gesamtsystem_DWork.is_active_c16_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart6 */
    Gesamtsystem_DWork.is_active_c16_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart6 */
    /* Transition: '<S26>:3' */
    Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c16_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S26>:17' */
      /* Transition: '<S26>:24' */
      Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S26>:26' */
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
      /* During 'x0': '<S26>:2' */
      /* Transition: '<S26>:7' */
      Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S26>:26' */
      /* Transition: '<S26>:25' */
      Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S13>/Chart6' */

  /* S-Function (scominttobit): '<S13>/Bit to Integer Converter' */
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

<<<<<<< HEAD
  /* Gain: '<S12>/x in mm' incorporates:
   *  S-Function (scominttobit): '<S12>/Bit to Integer Converter'
   */
  rtb_DeadZone = (real_T)Gesamtsystem_P.xinmm_Gain * (real32_T)intVal;

  /* Rounding: '<S12>/Rounding Function' */
=======
  /* Gain: '<S13>/x in mm' incorporates:
   *  S-Function (scominttobit): '<S13>/Bit to Integer Converter'
   */
  rtb_DeadZone = (real_T)Gesamtsystem_P.xinmm_Gain * (real32_T)intVal;

  /* Rounding: '<S13>/Rounding Function' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  rtb_RoundingFunction = rt_roundd_snf(rtb_DeadZone);

  /* S-Function (scominttobit): '<S13>/Integer to Bit Converter1' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values3;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter1[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S13>/Integer to Bit Converter1' */

  /* S-Function (scominttobit): '<S13>/Integer to Bit Converter4' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values4;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter4[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S13>/Integer to Bit Converter4' */

  /* Chart: '<S13>/Chart2' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart2 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart2 */
  if (Gesamtsystem_DWork.is_active_c13_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart2 */
    Gesamtsystem_DWork.is_active_c13_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart2 */
    /* Transition: '<S24>:3' */
    Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c13_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S24>:17' */
      /* Transition: '<S24>:24' */
      Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S24>:26' */
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
      /* During 'x0': '<S24>:2' */
      /* Transition: '<S24>:7' */
      Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S24>:26' */
      /* Transition: '<S24>:25' */
      Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S13>/Chart2' */

  /* S-Function (scominttobit): '<S13>/Bit to Integer Converter1' */
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

<<<<<<< HEAD
  /* Gain: '<S12>/y in mm' incorporates:
   *  S-Function (scominttobit): '<S12>/Bit to Integer Converter1'
   */
  rtb_DeadZone = (real_T)Gesamtsystem_P.yinmm_Gain * (real32_T)intVal;

  /* Rounding: '<S12>/Rounding Function1' */
  rtb_RoundingFunction1 = rt_roundd_snf(rtb_DeadZone);
=======
  /* Gain: '<S13>/y in mm' incorporates:
   *  S-Function (scominttobit): '<S13>/Bit to Integer Converter1'
   */
  rtb_DeadZone = (real_T)Gesamtsystem_P.yinmm_Gain * (real32_T)intVal;
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277

  /* Rounding: '<S13>/Rounding Function1' */
  rtb_RoundingFunction1 = rt_roundd_snf(rtb_DeadZone);

  /* S-Function (scominttobit): '<S13>/Integer to Bit Converter5' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values5;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter5[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S13>/Integer to Bit Converter5' */

  /* S-Function (scominttobit): '<S13>/Integer to Bit Converter6' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values6;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter6[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S13>/Integer to Bit Converter6' */

  /* Chart: '<S13>/Chart4' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart4 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart4 */
  if (Gesamtsystem_DWork.is_active_c14_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart4 */
    Gesamtsystem_DWork.is_active_c14_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart4 */
    /* Transition: '<S25>:3' */
    Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c14_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S25>:17' */
      /* Transition: '<S25>:24' */
      Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S25>:26' */
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
      /* During 'x0': '<S25>:2' */
      /* Transition: '<S25>:7' */
      Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S25>:26' */
      /* Transition: '<S25>:25' */
      Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S13>/Chart4' */

  /* S-Function (scominttobit): '<S13>/Bit to Integer Converter2' */
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

<<<<<<< HEAD
  /* Gain: '<S12>/alpha in �' incorporates:
   *  S-Function (scominttobit): '<S12>/Bit to Integer Converter2'
   */
  rtb_DeadZone = (real_T)Gesamtsystem_P.alphain_Gain * (real32_T)intVal;

  /* Rounding: '<S12>/Rounding Function2' */
=======
  /* Gain: '<S13>/alpha in �' incorporates:
   *  S-Function (scominttobit): '<S13>/Bit to Integer Converter2'
   */
  rtb_DeadZone = (real_T)Gesamtsystem_P.alphain_Gain * (real32_T)intVal;

  /* Rounding: '<S13>/Rounding Function2' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  rtb_RoundingFunction2 = rt_roundd_snf(rtb_DeadZone);

  /* MATLAB Function: '<S2>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen f�r Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegen�ber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegen�ber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)' */
  /* MATLAB Function 'Nexonar-System/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen f�r Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegen�ber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegen�ber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)': '<S9>:1' */
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
<<<<<<< HEAD
  if (Gesamtsystem_DWork.temporalCounter_i1 < 1023U) {
    Gesamtsystem_DWork.temporalCounter_i1++;
=======
  if (Gesamtsystem_DWork.temporalCounter_i1_m < 1023U) {
    Gesamtsystem_DWork.temporalCounter_i1_m++;
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
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
      /* During 'Parken': '<S8>:1258' */
      if (Gesamtsystem_DWork.Counter == 3.0) {
        /* Transition: '<S8>:795' */
        /* Exit Internal 'Parken': '<S8>:1258' */
        Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_NO_ACTIVE_CHILD;
        Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Ende;
      } else {
        switch (Gesamtsystem_DWork.is_Parken) {
         case Gesamtsystem_IN_Parken_1:
          /* During 'Parken_1': '<S8>:1265' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S8>:1260' */
            Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S8>:1266' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Parken_2:
          /* During 'Parken_2': '<S8>:1267' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S8>:1262' */
            Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S8>:1268' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Parken_3:
          /* During 'Parken_3': '<S8>:1269' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S8>:1264' */
            Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Wechsel_3;

            /* Entry 'Wechsel_3': '<S8>:1270' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S8>:1266' */
          /* Transition: '<S8>:1261' */
          Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Parken_2;

          /* Entry 'Parken_2': '<S8>:1267' */
          Gesamtsystem_B.x_soll = 1620.0;
          Gesamtsystem_B.y_soll = -135.0;
          Gesamtsystem_B.alpha_soll = -1.0;
          break;

         case Gesamtsystem_IN_Wechsel_2:
          /* During 'Wechsel_2': '<S8>:1268' */
          /* Transition: '<S8>:1263' */
          Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Parken_3;

          /* Entry 'Parken_3': '<S8>:1269' */
          Gesamtsystem_B.x_soll = 1640.0;
          Gesamtsystem_B.y_soll = -131.0;
          Gesamtsystem_B.alpha_soll = -1.0;
          break;

         default:
          /* During 'Wechsel_3': '<S8>:1270' */
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

      /* Entry Internal 'Sammeln': '<S8>:1343' */
      /* Transition: '<S8>:1344' */
      Gesamtsystem_DWork.Counter = 0.0;
      Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_Anfahrpunkt_1;

      /* Entry 'Anfahrpunkt_1': '<S8>:1373' */
      Gesamtsystem_B.x_soll = 1500.0;
      Gesamtsystem_B.y_soll = 0.0;
      Gesamtsystem_B.alpha_soll = -1.0;
      break;

     default:
      /* During 'Uebergabe': '<S8>:1330' */
      if (Gesamtsystem_DWork.Counter == 2.0) {
        /* Transition: '<S8>:1341' */
        Gesamtsystem_B.Gang = 0.0;

        /* Exit Internal 'Uebergabe': '<S8>:1330' */
        Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_NO_ACTIVE_CHILD;
        Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_Parken;

        /* Entry Internal 'Parken': '<S8>:1258' */
        /* Transition: '<S8>:1259' */
        Gesamtsystem_DWork.Counter = 0.0;
        Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_Parken_1;

        /* Entry 'Parken_1': '<S8>:1265' */
        Gesamtsystem_B.x_soll = 1420.0;
        Gesamtsystem_B.y_soll = -50.0;
        Gesamtsystem_B.alpha_soll = -1.0;
      } else {
        switch (Gesamtsystem_DWork.is_Uebergabe) {
         case Ge_IN_Uebergabepunkt_x_Richtung:
          /* During 'Uebergabepunkt_x_Richtung': '<S8>:1336' */
          if ((fabs(Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen) <=
               Gesamtsystem_B.Zielradius) && (fabs(Gesamtsystem_B.y_soll -
                Gesamtsystem_B.y_Wagen) <= Gesamtsystem_B.Zielradius)) {
            /* Transition: '<S8>:1332' */
            Gesamtsystem_DWork.x_least = Gesamtsystem_B.x_soll;
            Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_Wechsel_1;

            /* Entry 'Wechsel_1': '<S8>:1337' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Ge_IN_Uebergabepunkt_y_Richtung:
          /* During 'Uebergabepunkt_y_Richtung': '<S8>:1338' */
          if (Gesamtsystem_B.Uebergabeschalter || ((fabs(Gesamtsystem_B.x_soll -
                 Gesamtsystem_B.x_Wagen) <= Gesamtsystem_B.Zielradius) && (fabs
                (Gesamtsystem_B.y_soll - Gesamtsystem_B.y_Wagen) <=
                Gesamtsystem_B.Zielradius))) {
            /* Transition: '<S8>:1401' */
            /* Transition: '<S8>:1334' */
            Gesamtsystem_DWork.is_Uebergabe = Gesamtsyste_IN_Warten_Uebergabe;
<<<<<<< HEAD
            Gesamtsystem_DWork.temporalCounter_i1 = 0U;
=======
            Gesamtsystem_DWork.temporalCounter_i1_m = 0U;
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
          }
          break;

         case Gesamtsyste_IN_Warten_Uebergabe:
<<<<<<< HEAD
          /* During 'Warten_Uebergabe': '<S8>:1030' */
          if (Gesamtsystem_DWork.temporalCounter_i1 >= 1000U) {
            /* Transition: '<S8>:1026' */
=======
          /* During 'Warten_Uebergabe': '<S8>:1339' */
          if (Gesamtsystem_DWork.temporalCounter_i1_m >= 1000U) {
            /* Transition: '<S8>:1335' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
            Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_Wechsel_2;

            /* Entry 'Wechsel_2': '<S8>:1340' */
            Gesamtsystem_DWork.Counter++;
          }
          break;

         case Gesamtsystem_IN_Wechsel_1:
          /* During 'Wechsel_1': '<S8>:1337' */
          /* Transition: '<S8>:1333' */
          Gesamtsystem_DWork.is_Uebergabe = Ge_IN_Uebergabepunkt_y_Richtung;

          /* Entry 'Uebergabepunkt_y_Richtung': '<S8>:1338' */
          Gesamtsystem_B.x_soll = Gesamtsystem_DWork.x_least;
          Gesamtsystem_B.y_soll = 50.0;
          Gesamtsystem_B.alpha_soll = 80.0;
          break;

         default:
          /* During 'Wechsel_2': '<S8>:1340' */
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */

  /* Outputs for Atomic SubSystem: '<S2>/Navigationssystem [Einstellungen moeglich]' */
  /* Sum: '<S16>/Soll-Ist-Abgleich_x' */
  rtb_RoundingFunction1 = Gesamtsystem_B.x_soll - Gesamtsystem_B.x_Wagen;

  /* Sum: '<S16>/Soll-Ist-Abgleich_y' */
  rtb_RoundingFunction = Gesamtsystem_B.y_soll - Gesamtsystem_B.y_Wagen;

  /* Chart: '<S17>/Quadrantenteiler' */
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
    /* Transition: '<S21>:28' */
    Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Start_Warten_b;
  } else {
    switch (Gesamtsystem_DWork.is_c11_Gesamtsystem) {
     case Gesamtsystem_IN_Quadrant_a:
      Gesamtsystem_B.Quadrant = 0.0;

      /* During 'Quadrant_a': '<S21>:8' */
      /* Transition: '<S21>:36' */
      /* Transition: '<S21>:40' */
      if ((Gesamtsystem_B.alpha_soll != -1.0) || ((rtb_RoundingFunction1 >= 0.0)
           && (rtb_RoundingFunction >= 0.0))) {
        /* Transition: '<S21>:44' */
        /* Transition: '<S21>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S21>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S21>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S21>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S21>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S21>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S21>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S21>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     case Gesamtsystem_IN_Quadrant_b:
      Gesamtsystem_B.Quadrant = 1.0;

      /* During 'Quadrant_b': '<S21>:9' */
      /* Transition: '<S21>:37' */
      /* Transition: '<S21>:40' */
      if ((Gesamtsystem_B.alpha_soll != -1.0) || ((rtb_RoundingFunction1 >= 0.0)
           && (rtb_RoundingFunction >= 0.0))) {
        /* Transition: '<S21>:44' */
        /* Transition: '<S21>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S21>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S21>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S21>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S21>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S21>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S21>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S21>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     case Gesamtsystem_IN_Quadrant_c:
      Gesamtsystem_B.Quadrant = 2.0;

      /* During 'Quadrant_c': '<S21>:11' */
      /* Transition: '<S21>:38' */
      /* Transition: '<S21>:40' */
      if ((Gesamtsystem_B.alpha_soll != -1.0) || ((rtb_RoundingFunction1 >= 0.0)
           && (rtb_RoundingFunction >= 0.0))) {
        /* Transition: '<S21>:44' */
        /* Transition: '<S21>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S21>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S21>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S21>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S21>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S21>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S21>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S21>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     case Gesamtsystem_IN_Quadrant_d:
      Gesamtsystem_B.Quadrant = 3.0;

      /* During 'Quadrant_d': '<S21>:12' */
      /* Transition: '<S21>:39' */
      /* Transition: '<S21>:40' */
      if ((Gesamtsystem_B.alpha_soll != -1.0) || ((rtb_RoundingFunction1 >= 0.0)
           && (rtb_RoundingFunction >= 0.0))) {
        /* Transition: '<S21>:44' */
        /* Transition: '<S21>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S21>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S21>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S21>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S21>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S21>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S21>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S21>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;

     default:
      /* During 'Start_Warten': '<S21>:41' */
      /* Transition: '<S21>:42' */
      if ((Gesamtsystem_B.alpha_soll != -1.0) || ((rtb_RoundingFunction1 >= 0.0)
           && (rtb_RoundingFunction >= 0.0))) {
        /* Transition: '<S21>:44' */
        /* Transition: '<S21>:29' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_a;

        /* Entry 'Quadrant_a': '<S21>:8' */
        Gesamtsystem_B.Quadrant = 0.0;
      } else if ((rtb_RoundingFunction1 <= 0.0) && (rtb_RoundingFunction > 0.0))
      {
        /* Transition: '<S21>:30' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_b;

        /* Entry 'Quadrant_b': '<S21>:9' */
        Gesamtsystem_B.Quadrant = 1.0;
      } else if ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <= 0.0))
      {
        /* Transition: '<S21>:31' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_c;

        /* Entry 'Quadrant_c': '<S21>:11' */
        Gesamtsystem_B.Quadrant = 2.0;
      } else {
        /* Transition: '<S21>:32' */
        Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_Quadrant_d;

        /* Entry 'Quadrant_d': '<S21>:12' */
        Gesamtsystem_B.Quadrant = 3.0;
      }
      break;
    }
  }

  /* End of Chart: '<S17>/Quadrantenteiler' */

  /* Chart: '<S17>/Winkelausgabe fuer Ausrichtung' incorporates:
   *  MATLAB Function: '<S2>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen f�r Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegen�ber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegen�ber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)'
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
    /* Transition: '<S22>:81' */
    Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsystem_IN_Start_Warten_ba;
  } else {
    switch (Gesamtsystem_DWork.is_c12_Gesamtsystem) {
     case Gesamtsy_IN_Ausrichtung_gegeben:
      /* During 'Ausrichtung_gegeben': '<S22>:85' */
      /* Transition: '<S22>:87' */
      /* Transition: '<S22>:70' */
      if (Gesamtsystem_B.alpha_soll != -1.0) {
        /* Transition: '<S22>:86' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsy_IN_Ausrichtung_gegeben;

        /* Entry 'Ausrichtung_gegeben': '<S22>:85' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_soll;
      } else if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0))
      {
        /* Transition: '<S22>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S22>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S22>:76' */
        /* Transition: '<S22>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S22>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S22>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S22>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     case G_IN_Ausrichtung_ohne_Aenderung:
      /* During 'Ausrichtung_ohne_Aenderung': '<S22>:52' */
      /* Transition: '<S22>:66' */
      /* Transition: '<S22>:70' */
      if (Gesamtsystem_B.alpha_soll != -1.0) {
        /* Transition: '<S22>:86' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsy_IN_Ausrichtung_gegeben;

        /* Entry 'Ausrichtung_gegeben': '<S22>:85' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_soll;
      } else if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0))
      {
        /* Transition: '<S22>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S22>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S22>:76' */
        /* Transition: '<S22>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S22>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S22>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S22>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     case Gesamtsystem_IN_Start_Warten_ba:
      /* During 'Start_Warten': '<S22>:82' */
      /* Transition: '<S22>:83' */
      if (Gesamtsystem_B.alpha_soll != -1.0) {
        /* Transition: '<S22>:86' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsy_IN_Ausrichtung_gegeben;

        /* Entry 'Ausrichtung_gegeben': '<S22>:85' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_soll;
      } else if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0))
      {
        /* Transition: '<S22>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S22>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S22>:76' */
        /* Transition: '<S22>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S22>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S22>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S22>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     case IN_Trigonometrische_Auswertung_:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S22>:24' */
      /* Transition: '<S22>:68' */
      /* Transition: '<S22>:70' */
      if (Gesamtsystem_B.alpha_soll != -1.0) {
        /* Transition: '<S22>:86' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsy_IN_Ausrichtung_gegeben;

        /* Entry 'Ausrichtung_gegeben': '<S22>:85' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_soll;
      } else if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0))
      {
        /* Transition: '<S22>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S22>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S22>:76' */
        /* Transition: '<S22>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S22>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S22>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S22>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;

     default:
      /* During 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S22>:71' */
      /* Transition: '<S22>:73' */
      /* Transition: '<S22>:70' */
      if (Gesamtsystem_B.alpha_soll != -1.0) {
        /* Transition: '<S22>:86' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsy_IN_Ausrichtung_gegeben;

        /* Entry 'Ausrichtung_gegeben': '<S22>:85' */
        Gesamtsystem_B.alpha_neu = Gesamtsystem_B.alpha_soll;
      } else if ((rtb_RoundingFunction1 == 0.0) && (rtb_RoundingFunction == 0.0))
      {
        /* Transition: '<S22>:60' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = G_IN_Ausrichtung_ohne_Aenderung;

        /* Entry 'Ausrichtung_ohne_Aenderung': '<S22>:52' */
        Gesamtsystem_B.alpha_neu = rtb_RoundingFunction2 - 15.0;
      } else if (((rtb_RoundingFunction1 > 0.0) && (rtb_RoundingFunction >= 0.0))
                 || ((rtb_RoundingFunction1 < 0.0) && (rtb_RoundingFunction <=
                   0.0))) {
        /* Transition: '<S22>:76' */
        /* Transition: '<S22>:77' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertung_;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_0_2': '<S22>:24' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction) / fabs
          (rtb_RoundingFunction1)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      } else {
        /* Transition: '<S22>:78' */
        Gesamtsystem_DWork.is_c12_Gesamtsystem = IN_Trigonometrische_Auswertun_b;

        /* Entry 'Trigonometrische_Auswertung_in_Grad_fuer_Quadrant_1_3': '<S22>:71' */
        Gesamtsystem_B.alpha_neu = atan(fabs(rtb_RoundingFunction1) / fabs
          (rtb_RoundingFunction)) * 360.0 / 6.2831853071795862;
        Gesamtsystem_B.alpha_neu = rt_roundd_snf(Gesamtsystem_B.alpha_neu);
      }
      break;
    }
  }

  /* End of Chart: '<S17>/Winkelausgabe fuer Ausrichtung' */

  /* Sum: '<S17>/Winkeldifferenz' incorporates:
   *  Gain: '<S17>/Quadranten- verschiebung'
   *  MATLAB Function: '<S2>/Konvertierung Nexonar -> Fahrzeug Folgende Werte koennen f�r Nexonar eingestellt werden: - r_Versatz_Nexo: Radialer Versatz des Nexonars zur Rotationsachse des Fahrzeugs - phi_Versatz_Nexo: Winkelversatz des Nexonars gegen�ber der x-Achse (Mittelpunkt: Rotationspunkt des Fahrzeugs) - psi_Offset_Nexo: Winkelversatz des Nexonars gegen�ber der x-Achse (Mittelpunkt: Nexonar-Empfangstelle)'
   *  Sum: '<S17>/Winkelverschiebung'
   */
  Gesamtsystem_B.Winkeldifferenz = (Gesamtsystem_P.Quadrantenverschiebung_Gain *
    Gesamtsystem_B.Quadrant + Gesamtsystem_B.alpha_neu) - (rtb_RoundingFunction2
    - 15.0);

  /* Chart: '<S12>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = �15�]' */
  /* Gateway: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Drehweg-Optimierung
     mit Gang-Ausrichtung
     [Init: Stillstandintervall = �15�] */
  /* During: Nexonar-System/Navigationssystem
     [Einstellungen moeglich]/Drehweg-Optimierung
     mit Gang-Ausrichtung
     [Init: Stillstandintervall = �15�] */
  if (Gesamtsystem_DWork.is_active_c8_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Drehweg-Optimierung
       mit Gang-Ausrichtung
       [Init: Stillstandintervall = �15�] */
    Gesamtsystem_DWork.is_active_c8_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Navigationssystem
       [Einstellungen moeglich]/Drehweg-Optimierung
       mit Gang-Ausrichtung
       [Init: Stillstandintervall = �15�] */
    /* Transition: '<S14>:38' */
    Gesamtsystem_DWork.is_c8_Gesamtsystem = Gesamtsyste_IN_Einstellung_Init;

    /* Entry 'Einstellung_Init': '<S14>:44' */
    Gesamtsystem_DWork.Stillstandintervall = 15.0;
    Gesamtsystem_B.pwm_mindern[0] = 0.0;
    Gesamtsystem_B.pwm_mindern[1] = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c8_Gesamtsystem) {
     case IN_Drehstillstand_mit_Ausrichtu:
      /* During 'Drehstillstand_mit_Ausrichtungsregelung': '<S14>:26' */
      /* Transition: '<S14>:96' */
      /* Transition: '<S14>:98' */
      /* Transition: '<S14>:65' */
      Gesamtsystem_DWork.alpha_diff_intern = 180.0 * Gesamtsystem_B.Gang +
        Gesamtsystem_B.Winkeldifferenz;
      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S14>:9' */
        if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S14>:15' */
          Gesamtsystem_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S14>:18' */
          Gesamtsystem_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S14>:69' */
      }

      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) <=
          Gesamtsystem_DWork.Stillstandintervall) {
        /* Transition: '<S14>:27' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S14>:94' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S14>:11' */
        Gesamtsystem_B.alpha_diff_opt = Gesamtsystem_DWork.alpha_diff_intern;
      }
      break;

     case Gesamtsyste_IN_Einstellung_Init:
      /* During 'Einstellung_Init': '<S14>:44' */
      /* Transition: '<S14>:46' */
      /* Transition: '<S14>:65' */
      Gesamtsystem_DWork.alpha_diff_intern = 180.0 * Gesamtsystem_B.Gang +
        Gesamtsystem_B.Winkeldifferenz;
      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S14>:9' */
        if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S14>:15' */
          Gesamtsystem_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S14>:18' */
          Gesamtsystem_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S14>:69' */
      }

      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) <=
          Gesamtsystem_DWork.Stillstandintervall) {
        /* Transition: '<S14>:27' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S14>:94' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S14>:11' */
        Gesamtsystem_B.alpha_diff_opt = Gesamtsystem_DWork.alpha_diff_intern;
      }
      break;

     default:
      /* During 'Weiterleitung_bei_Drehzustand': '<S14>:11' */
      /* Transition: '<S14>:97' */
      /* Transition: '<S14>:98' */
      /* Transition: '<S14>:65' */
      Gesamtsystem_DWork.alpha_diff_intern = 180.0 * Gesamtsystem_B.Gang +
        Gesamtsystem_B.Winkeldifferenz;
      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) > 180.0) {
        /* Transition: '<S14>:9' */
        if (Gesamtsystem_DWork.alpha_diff_intern > 0.0) {
          /* Transition: '<S14>:15' */
          Gesamtsystem_DWork.alpha_diff_intern += -360.0;
        } else {
          /* Transition: '<S14>:18' */
          Gesamtsystem_DWork.alpha_diff_intern += 360.0;
        }
      } else {
        /* Transition: '<S14>:69' */
      }

      if (fabs(Gesamtsystem_DWork.alpha_diff_intern) <=
          Gesamtsystem_DWork.Stillstandintervall) {
        /* Transition: '<S14>:27' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Drehstillstand_mit_Ausrichtu;
        enter_atomic_Drehstillstand_mit();
      } else {
        /* Transition: '<S14>:94' */
        Gesamtsystem_DWork.is_c8_Gesamtsystem = IN_Weiterleitung_bei_Drehzustan;

        /* Entry 'Weiterleitung_bei_Drehzustand': '<S14>:11' */
        Gesamtsystem_B.alpha_diff_opt = Gesamtsystem_DWork.alpha_diff_intern;
      }
      break;
    }
  }

  /* End of Chart: '<S12>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = �15�]' */

  /* Abs: '<S16>/Abs x_diff' */
  rtb_RoundingFunction2 = fabs(rtb_RoundingFunction1);

  /* MATLAB Function: '<S16>/Betrag pwm_x' incorporates:
   *  Abs: '<S16>/Abs x_diff'
   */
  /* MATLAB Function 'Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_x': '<S18>:1' */
  if ((Gesamtsystem_B.Zielradius < rtb_RoundingFunction2) &&
      (rtb_RoundingFunction2 < 60.0 + Gesamtsystem_B.Zielradius)) {
    /* '<S18>:1:3' */
    /* '<S18>:1:4' */
    rtb_RoundingFunction2 = 60.0;
  } else if (rtb_RoundingFunction2 <= Gesamtsystem_B.Zielradius) {
    /* '<S18>:1:5' */
    /* '<S18>:1:6' */
    rtb_RoundingFunction2 = 0.0;
  } else if (rtb_RoundingFunction2 >= 100.0 + Gesamtsystem_B.Zielradius) {
    /* '<S18>:1:7' */
    /* '<S18>:1:8' */
    rtb_RoundingFunction2 = 100.0;
  } else {
    /* '<S18>:1:10' */
  }

  /* End of MATLAB Function: '<S16>/Betrag pwm_x' */

  /* Abs: '<S16>/Abs y_diff' */
  rtb_RoundingFunction = fabs(rtb_RoundingFunction);

  /* MATLAB Function: '<S16>/Betrag pwm_y' incorporates:
   *  Abs: '<S16>/Abs y_diff'
   */
  /* MATLAB Function 'Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/Betrag pwm_y': '<S19>:1' */
  if ((Gesamtsystem_B.Zielradius < rtb_RoundingFunction) &&
      (rtb_RoundingFunction < 60.0 + Gesamtsystem_B.Zielradius)) {
    /* '<S19>:1:3' */
    /* '<S19>:1:4' */
    rtb_RoundingFunction = 60.0;
  } else if (rtb_RoundingFunction <= Gesamtsystem_B.Zielradius) {
    /* '<S19>:1:5' */
    /* '<S19>:1:6' */
    rtb_RoundingFunction = 0.0;
  } else if (rtb_RoundingFunction >= 100.0 + Gesamtsystem_B.Zielradius) {
    /* '<S19>:1:7' */
    /* '<S19>:1:8' */
    rtb_RoundingFunction = 100.0;
  } else {
    /* '<S19>:1:10' */
  }

  /* End of MATLAB Function: '<S16>/Betrag pwm_y' */

  /* MATLAB Function: '<S16>/PWM-Vektorbetrag' */
  /* MATLAB Function 'Nexonar-System/Navigationssystem [Einstellungen moeglich]/Positionsregelungssystem (Soll-Ist-Abgleich & PWM-Auswertung)/PWM-Vektorbetrag': '<S20>:1' */
  /* '<S20>:1:3' */
  rtb_RoundingFunction = rt_roundd_snf(sqrt(rtb_RoundingFunction2 *
    rtb_RoundingFunction2 + rtb_RoundingFunction * rtb_RoundingFunction));

  /* Saturate: '<S16>/PWM-Wertebereich' */
  if (rtb_RoundingFunction > Gesamtsystem_P.PWMWertebereich_UpperSat) {
    Gesamtsystem_B.PWMWertebereich = Gesamtsystem_P.PWMWertebereich_UpperSat;
  } else if (rtb_RoundingFunction < Gesamtsystem_P.PWMWertebereich_LowerSat) {
    Gesamtsystem_B.PWMWertebereich = Gesamtsystem_P.PWMWertebereich_LowerSat;
  } else {
    Gesamtsystem_B.PWMWertebereich = rtb_RoundingFunction;
  }

  /* End of Saturate: '<S16>/PWM-Wertebereich' */

  /* Chart: '<S12>/Fahrsystem' */
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
    /* Transition: '<S15>:91' */
    Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsystem_IN_Start_Warten;
  } else {
    switch (Gesamtsystem_DWork.is_c7_Gesamtsystem) {
     case Gesam_IN_Drehen_links_gesteuert:
      Gesamtsystem_Drehen_links_max();
      break;

     case Gesamtsyste_IN_Drehen_links_max:
      Gesamtsystem_Drehen_links_max();
      break;

     case Gesa_IN_Drehen_rechts_gesteuert:
      /* During 'Drehen_rechts_gesteuert': '<S15>:51' */
      /* Transition: '<S15>:63' */
      /* Transition: '<S15>:75' */
      if ((fabs(Gesamtsystem_B.alpha_diff_opt) > 0.0) &&
          (Gesamtsystem_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S15>:58' */
        if (fabs(Gesamtsystem_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S15>:21' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S15>:45' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S15>:8' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S15>:57' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S15>:9' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S15>:53' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S15>:54' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S15>:43' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S15>:55' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S15>:51' */
            rtb_RoundingFunction = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_l = rtb_RoundingFunction;
            Gesamtsystem_B.pwm_out_r = rtb_RoundingFunction;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S15>:82' */
        if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S15>:85' */
          rtb_RoundingFunction = 1.0 - Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = Gesamtsystem_B.Gang;
        } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S15>:86' */
          rtb_RoundingFunction = Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = 1.0 - Gesamtsystem_B.Gang;
        } else {
          /* Transition: '<S15>:87' */
          rtb_RoundingFunction = 0.0;
          rtb_RoundingFunction2 = 0.0;
        }

        Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S15>:94' */
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
      /* During 'Drehen_rechts_max': '<S15>:9' */
      /* Transition: '<S15>:61' */
      /* Transition: '<S15>:75' */
      if ((fabs(Gesamtsystem_B.alpha_diff_opt) > 0.0) &&
          (Gesamtsystem_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S15>:58' */
        if (fabs(Gesamtsystem_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S15>:21' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S15>:45' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S15>:8' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S15>:57' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S15>:9' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S15>:53' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S15>:54' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S15>:43' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S15>:55' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S15>:51' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S15>:82' */
        if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S15>:85' */
          rtb_RoundingFunction = 1.0 - Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = Gesamtsystem_B.Gang;
        } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S15>:86' */
          rtb_RoundingFunction = Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = 1.0 - Gesamtsystem_B.Gang;
        } else {
          /* Transition: '<S15>:87' */
          rtb_RoundingFunction = 0.0;
          rtb_RoundingFunction2 = 0.0;
        }

        Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S15>:94' */
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
      /* During 'Fahren_mit_Ausrichtungsregelung': '<S15>:94' */
      /* Transition: '<S15>:74' */
      /* Transition: '<S15>:75' */
      if ((fabs(Gesamtsystem_B.alpha_diff_opt) > 0.0) &&
          (Gesamtsystem_B.PWMWertebereich > 0.0)) {
        /* Transition: '<S15>:58' */
        if (fabs(Gesamtsystem_B.alpha_diff_opt) > 40.0) {
          /* Transition: '<S15>:21' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S15>:45' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyste_IN_Drehen_links_max;

            /* Entry 'Drehen_links_max': '<S15>:8' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S15>:57' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesamtsyst_IN_Drehen_rechts_max;

            /* Entry 'Drehen_rechts_max': '<S15>:9' */
            Gesamtsystem_B.pwm_out_l = 100.0;
            Gesamtsystem_B.pwm_out_r = 100.0;
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        } else {
          /* Transition: '<S15>:53' */
          if (Gesamtsystem_B.alpha_diff_opt > 0.0) {
            /* Transition: '<S15>:54' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesam_IN_Drehen_links_gesteuert;

            /* Entry 'Drehen_links_gesteuert': '<S15>:43' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 0.0;
            Gesamtsystem_B.r_l_out_r = 1.0;
          } else {
            /* Transition: '<S15>:55' */
            Gesamtsystem_DWork.is_c7_Gesamtsystem =
              Gesa_IN_Drehen_rechts_gesteuert;

            /* Entry 'Drehen_rechts_gesteuert': '<S15>:51' */
            Gesamtsystem_B.pwm_out_l = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.pwm_out_r = 59.0 + fabs(Gesamtsystem_B.alpha_diff_opt);
            Gesamtsystem_B.r_l_out_l = 1.0;
            Gesamtsystem_B.r_l_out_r = 0.0;
          }
        }
      } else {
        /* Transition: '<S15>:82' */
        if (Gesamtsystem_B.pwm_mindern[1] == 1.0) {
          /* Transition: '<S15>:85' */
          rtb_RoundingFunction = 1.0 - Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = Gesamtsystem_B.Gang;
        } else if (Gesamtsystem_B.pwm_mindern[1] == 0.0) {
          /* Transition: '<S15>:86' */
          rtb_RoundingFunction = Gesamtsystem_B.Gang;
          rtb_RoundingFunction2 = 1.0 - Gesamtsystem_B.Gang;
        } else {
          /* Transition: '<S15>:87' */
          rtb_RoundingFunction = 0.0;
          rtb_RoundingFunction2 = 0.0;
        }

        Gesamtsystem_DWork.is_c7_Gesamtsystem = IN_Fahren_mit_Ausrichtungsregel;

        /* Entry 'Fahren_mit_Ausrichtungsregelung': '<S15>:94' */
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

  /* End of Chart: '<S12>/Fahrsystem' */
  /* End of Outputs for SubSystem: '<S2>/Navigationssystem [Einstellungen moeglich]' */

<<<<<<< HEAD
  /* RateTransition: '<S3>/TmpRTBAtChart8Outport3' */
  if (Gesamtsystem_M->Timing.RateInteraction.TID1_2) {
    Gesamtsystem_B.TmpRTBAtChart8Outport3 =
      Gesamtsystem_DWork.TmpRTBAtChart8Outport3_Buffer0;
  }

  /* End of RateTransition: '<S3>/TmpRTBAtChart8Outport3' */

  /* Product: '<S2>/Product' */
  rtb_DeadZone = Gesamtsystem_B.pwm_out_l *
    Gesamtsystem_B.TmpRTBAtChart8Outport3;
=======
  /* Product: '<S2>/Product' */
  rtb_DeadZone = Gesamtsystem_B.Value * Gesamtsystem_B.pwm_out_l;

  /* DeadZone: '<S10>/Leistungsoffset Motor_links' */
  if (rtb_DeadZone > Gesamtsystem_P.LeistungsoffsetMotor_links_End) {
    rtb_DeadZone -= Gesamtsystem_P.LeistungsoffsetMotor_links_End;
  } else if (rtb_DeadZone >= Gesamtsystem_P.LeistungsoffsetMotor_links_Star) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= Gesamtsystem_P.LeistungsoffsetMotor_links_Star;
  }

  /* End of DeadZone: '<S10>/Leistungsoffset Motor_links' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277

  /* S-Function (c280xpwm): '<S10>/PWM Vorgabe fuer Motor_links ' */

  /*-- Update CMPB value for ePWM1 --*/
  {
    EPwm1Regs.CMPB = (uint16_T)((uint32_T)EPwm1Regs.TBPRD * rtb_DeadZone * 0.01);
  }

  /* Product: '<S2>/Product1' */
<<<<<<< HEAD
  rtb_DeadZone = Gesamtsystem_B.pwm_out_r *
    Gesamtsystem_B.TmpRTBAtChart8Outport3;
=======
  rtb_DeadZone = Gesamtsystem_B.Value * Gesamtsystem_B.pwm_out_r;

  /* DeadZone: '<S10>/Leistungsoffset Motor_rechts' */
  if (rtb_DeadZone > Gesamtsystem_P.LeistungsoffsetMotor_rechts_End) {
    rtb_DeadZone -= Gesamtsystem_P.LeistungsoffsetMotor_rechts_End;
  } else if (rtb_DeadZone >= Gesamtsystem_P.LeistungsoffsetMotor_rechts_Sta) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= Gesamtsystem_P.LeistungsoffsetMotor_rechts_Sta;
  }

  /* End of DeadZone: '<S10>/Leistungsoffset Motor_rechts' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277

  /* S-Function (c280xpwm): '<S10>/PWM Vorgabe fuer Motor_rechts' */

  /*-- Update CMPB value for ePWM2 --*/
  {
    EPwm2Regs.CMPB = (uint16_T)((uint32_T)EPwm2Regs.TBPRD * rtb_DeadZone * 0.01);
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

  /* S-Function (scominttobit): '<S13>/Integer to Bit Converter7' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values7;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter7[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S13>/Integer to Bit Converter7' */

  /* S-Function (scominttobit): '<S13>/Integer to Bit Converter8' */
  /* Integer to Bit Conversion */
  bitIdx = 8L;
  u = (uint32_T)Gesamtsystem_B.valid_values8;
  for (j = 0; j < 8; j++) {
    rtb_IntegertoBitConverter8[bitIdx - 1L] = (uint16_T)((int16_T)u & 1);
    u >>= 1;
    bitIdx--;
  }

  /* End of S-Function (scominttobit): '<S13>/Integer to Bit Converter8' */

  /* Chart: '<S13>/Chart1' */
  /* Gateway: Nexonar-System/Nexonar-Positionsbestimmung/Chart1 */
  /* During: Nexonar-System/Nexonar-Positionsbestimmung/Chart1 */
  if (Gesamtsystem_DWork.is_active_c1_Gesamtsystem == 0U) {
    /* Entry: Nexonar-System/Nexonar-Positionsbestimmung/Chart1 */
    Gesamtsystem_DWork.is_active_c1_Gesamtsystem = 1U;

    /* Entry Internal: Nexonar-System/Nexonar-Positionsbestimmung/Chart1 */
    /* Transition: '<S23>:3' */
    Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_x0;
  } else {
    switch (Gesamtsystem_DWork.is_c1_Gesamtsystem) {
     case Gesamtsystem_IN_Daten_einlesen:
      /* During 'Daten_einlesen': '<S23>:17' */
      /* Transition: '<S23>:24' */
      Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_x1_1;

      /* Entry 'x1_1': '<S23>:26' */
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
      /* During 'x0': '<S23>:2' */
      /* Transition: '<S23>:7' */
      Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;

     default:
      /* During 'x1_1': '<S23>:26' */
      /* Transition: '<S23>:25' */
      Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_Daten_einlesen;
      break;
    }
  }

  /* End of Chart: '<S13>/Chart1' */

  /* DiscretePulseGenerator: '<S28>/Pulse Generator' */
  rtb_RoundingFunction2 = (Gesamtsystem_DWork.clockTickCounter <
    Gesamtsystem_P.PulseGenerator_Duty) && (Gesamtsystem_DWork.clockTickCounter >=
    0L) ? Gesamtsystem_P.PulseGenerator_Amp : 0.0;
  if (Gesamtsystem_DWork.clockTickCounter >=
      Gesamtsystem_P.PulseGenerator_Period - 1.0) {
    Gesamtsystem_DWork.clockTickCounter = 0L;
  } else {
    Gesamtsystem_DWork.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S28>/Pulse Generator' */

  /* Outputs for Triggered SubSystem: '<S28>/I2C Reinitialisierung' incorporates:
   *  TriggerPort: '<S30>/Trigger'
   */
  zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                     &Gesamtsystem_PrevZCSigState.I2CReinitialisierung_Trig_ZCE,
                     (rtb_RoundingFunction2));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S30>/I2C Reinitialisierung' */
    /* MATLAB Function 'Nexonar-System/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilit�tsprobleme der I2C-Verbindung)/I2C Reinitialisierung/I2C Reinitialisierung': '<S32>:1' */
    init_i2c();
  }

  /* End of Outputs for SubSystem: '<S28>/I2C Reinitialisierung' */

  /* Outputs for Triggered SubSystem: '<S28>/I2C Reset' incorporates:
   *  TriggerPort: '<S31>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &Gesamtsystem_PrevZCSigState.I2CReset_Trig_ZCE,
                     (rtb_RoundingFunction2));
  if (zcEvent != NO_ZCEVENT) {
    /* MATLAB Function: '<S31>/I2C Reset' */
    /* MATLAB Function 'Nexonar-System/Nexonar-Positionsbestimmung/I2C Reset (behebt Stabilit�tsprobleme der I2C-Verbindung)/I2C Reset/I2C Reset': '<S33>:1' */
    reset_i2c();
  }

  /* End of Outputs for SubSystem: '<S28>/I2C Reset' */

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
    Gesamtsystem_B.RateTransition3_j;
  Gesamtsystem_DWork.obj.pStatistic->pwN = rtb_RoundingFunction *
    rtb_RoundingFunction2 + 1.0;
  Gesamtsystem_DWork.obj.pStatistic->pmN = rtb_RoundingFunction1;
  Gesamtsystem_B.MovingAverage2 = rtb_RoundingFunction1;

  /* End of MATLABSystem: '<S3>/Moving Average2' */

  /* UnitDelay: '<S3>/Unit Delay2' */
  Gesamtsystem_B.UnitDelay2 = Gesamtsystem_DWork.UnitDelay2_DSTATE_l;

  /* RateTransition: '<S3>/TmpRTBAtSortieralgorithmus2Inport3' */
  if (Gesamtsystem_M->Timing.RateInteraction.TID1_2) {
    Gesamtsystem_B.TmpRTBAtSortieralgorithmus2Inpo =
      Gesamtsystem_DWork.TmpRTBAtSortieralgorithmus2Inpo;
  }

  /* End of RateTransition: '<S3>/TmpRTBAtSortieralgorithmus2Inport3' */
<<<<<<< HEAD

  /* Chart: '<S3>/Sortieralgorithmus2' */
  /* Gateway: Subsystem/Sortieralgorithmus2 */
  /* During: Subsystem/Sortieralgorithmus2 */
  if (Gesamtsystem_DWork.is_active_c42_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Sortieralgorithmus2 */
    Gesamtsystem_DWork.is_active_c42_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Sortieralgorithmus2 */
    /* Transition: '<S37>:182' */
    Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_setupVariable;
=======

  /* Chart: '<S3>/Sortieralgorithmus2' */
  /* Gateway: Subsystem/Sortieralgorithmus2 */
  /* During: Subsystem/Sortieralgorithmus2 */
  if (Gesamtsystem_DWork.is_active_c42_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Sortieralgorithmus2 */
    Gesamtsystem_DWork.is_active_c42_Gesamtsystem = 1U;
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277

    /* Entry Internal: Subsystem/Sortieralgorithmus2 */
    /* Transition: '<S38>:182' */
    Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_setupVariable;

    /* Entry 'setupVariable': '<S38>:175' */
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
    switch (Gesamtsystem_DWork.is_c42_Gesamtsystem) {
     case Gesamtsystem_IN_Black:
<<<<<<< HEAD
      /* During 'Black': '<S37>:187' */
      /* Transition: '<S37>:188' */
=======
      /* During 'Black': '<S38>:187' */
      /* Transition: '<S38>:188' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
      Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_DetectedCube;

      /* Entry 'DetectedCube': '<S38>:180' */
      Gesamtsystem_DWork.cubeCounter++;
      break;

     case Gesamtsystem_IN_BlueCube:
<<<<<<< HEAD
      /* During 'BlueCube': '<S37>:185' */
      /* Transition: '<S37>:189' */
=======
      /* During 'BlueCube': '<S38>:185' */
      /* Transition: '<S38>:189' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
      Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_DetectedCube;

      /* Entry 'DetectedCube': '<S38>:180' */
      Gesamtsystem_DWork.cubeCounter++;
      break;

     case Gesamtsystem_IN_DetectedCube:
<<<<<<< HEAD
      /* During 'DetectedCube': '<S37>:180' */
      if (Gesamtsystem_B.UnitDelay2 == 0.0F) {
        /* Transition: '<S37>:168' */
=======
      /* During 'DetectedCube': '<S38>:180' */
      if (Gesamtsystem_B.UnitDelay2 == 0.0F) {
        /* Transition: '<S38>:168' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S38>:183' */
        Gesamtsystem_B.magacin = -1.0;
      }
      break;

     case Gesamtsystem_IN_RedCube:
<<<<<<< HEAD
      /* During 'RedCube': '<S37>:186' */
      /* Transition: '<S37>:190' */
=======
      /* During 'RedCube': '<S38>:186' */
      /* Transition: '<S38>:190' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
      Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_DetectedCube;

      /* Entry 'DetectedCube': '<S38>:180' */
      Gesamtsystem_DWork.cubeCounter++;
      break;

     case Gesamtsystem_IN_cubeLoaded:
<<<<<<< HEAD
      /* During 'cubeLoaded': '<S37>:183' */
      if ((Gesamtsystem_B.MovingAverage2 < 700.0) ||
          (Gesamtsystem_B.MovingAverage2 > 1500.0)) {
        /* Transition: '<S37>:169' */
=======
      /* During 'cubeLoaded': '<S38>:183' */
      if ((Gesamtsystem_B.MovingAverage2 < 700.0) ||
          (Gesamtsystem_B.MovingAverage2 > 1500.0)) {
        /* Transition: '<S38>:169' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_DWork.is_c42_Gesamtsystem = IN_photoelectricBarrierActivate;

        /* Entry 'photoelectricBarrierActivated': '<S38>:184' */
      } else {
        Gesamtsystem_B.magacin = -1.0;
      }
      break;

     case IN_photoelectricBarrierActivate:
<<<<<<< HEAD
      /* During 'photoelectricBarrierActivated': '<S37>:184' */
      if (Gesamtsystem_B.MovingAverage2 > 2150.0) {
        /* Transition: '<S37>:172' */
=======
      /* During 'photoelectricBarrierActivated': '<S38>:184' */
      if (Gesamtsystem_B.MovingAverage2 > 2150.0) {
        /* Transition: '<S38>:172' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_Black;

        /* Entry 'Black': '<S38>:187' */
        Gesamtsystem_B.magacin = 6.0;
      } else if (Gesamtsystem_B.MovingAverage2 < 1000.0) {
<<<<<<< HEAD
        /* Transition: '<S37>:171' */
=======
        /* Transition: '<S38>:171' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_RedCube;

        /* Entry 'RedCube': '<S38>:186' */
        Gesamtsystem_B.magacin = Gesamtsystem_findPlaceForRed();
      } else {
        if ((Gesamtsystem_B.MovingAverage2 >= 1000.0) &&
            (Gesamtsystem_B.MovingAverage2 <= 2150.0)) {
<<<<<<< HEAD
          /* Transition: '<S37>:170' */
=======
          /* Transition: '<S38>:170' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
          Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_BlueCube;

          /* Entry 'BlueCube': '<S38>:185' */
          Gesamtsystem_B.magacin = Gesamtsystem_findPlaceForBlue();
        }
      }
      break;

     default:
<<<<<<< HEAD
      /* During 'setupVariable': '<S37>:175' */
      if (Gesamtsystem_B.TmpRTBAtSortieralgorithmus2Inpo > 0.0F) {
        /* Transition: '<S37>:181' */
=======
      /* During 'setupVariable': '<S38>:175' */
      if (Gesamtsystem_B.TmpRTBAtSortieralgorithmus2Inpo > 0.0F) {
        /* Transition: '<S38>:181' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_cubeLoaded;

        /* Entry 'cubeLoaded': '<S38>:183' */
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

  /* End of Chart: '<S3>/Sortieralgorithmus2' */

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
  if (Gesamtsystem_DWork.temporalCounter_i1_i < 255U) {
    Gesamtsystem_DWork.temporalCounter_i1_i = ((int16_T)
      Gesamtsystem_DWork.temporalCounter_i1_i + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart7 */
  /* During: Subsystem/Chart7 */
  if (Gesamtsystem_DWork.is_active_c38_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Chart7 */
    Gesamtsystem_DWork.is_active_c38_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Chart7 */
<<<<<<< HEAD
    /* Transition: '<S34>:70' */
    Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_startPosition;

    /* Entry 'startPosition': '<S34>:157' */
=======
    /* Transition: '<S35>:70' */
    Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_startPosition;

    /* Entry 'startPosition': '<S35>:157' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    Gesamtsystem_B.angle = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c38_Gesamtsystem) {
     case Gesamtsys_IN_betterLeftPosition:
<<<<<<< HEAD
      /* During 'betterLeftPosition': '<S34>:151' */
      /* Transition: '<S34>:153' */
      Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

      /* Entry 'waitForCube': '<S34>:29' */
      break;

     case Gesamtsy_IN_betterRightPosition:
      /* During 'betterRightPosition': '<S34>:150' */
      /* Transition: '<S34>:155' */
      Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

      /* Entry 'waitForCube': '<S34>:29' */
      break;

     case Gesamtsystem_IN_closeGate:
      /* During 'closeGate': '<S34>:73' */
      if (Gesamtsystem_B.UnitDelay2 == 0.0F) {
        /* Transition: '<S34>:98' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

        /* Entry 'waitForCube': '<S34>:29' */
      } else {
        Gesamtsystem_B.signal_p = 0.0;
      }
      break;

     case Gesamtsystem_IN_closeKlappe_b:
      /* During 'closeKlappe': '<S34>:159' */
      if (Gesamtsystem_DWork.temporalCounter_i1_i >= 230U) {
        /* Transition: '<S34>:161' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

        /* Entry 'waitForCube': '<S34>:29' */
      } else {
        Gesamtsystem_B.signal_p = 0.0;
=======
      /* During 'betterLeftPosition': '<S35>:151' */
      /* Transition: '<S35>:153' */
      Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

      /* Entry 'waitForCube': '<S35>:29' */
      break;

     case Gesamtsy_IN_betterRightPosition:
      /* During 'betterRightPosition': '<S35>:150' */
      /* Transition: '<S35>:155' */
      Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

      /* Entry 'waitForCube': '<S35>:29' */
      break;

     case Gesamtsystem_IN_closeGate:
      /* During 'closeGate': '<S35>:73' */
      if (Gesamtsystem_B.UnitDelay2 == 0.0F) {
        /* Transition: '<S35>:98' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

        /* Entry 'waitForCube': '<S35>:29' */
      } else {
        Gesamtsystem_B.signal_p = 0.0;
      }
      break;

     case Gesamtsystem_IN_closeKlappe_b:
      /* During 'closeKlappe': '<S35>:159' */
      if (Gesamtsystem_DWork.temporalCounter_i1_i >= 230U) {
        /* Transition: '<S35>:161' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_waitForCube;

        /* Entry 'waitForCube': '<S35>:29' */
      } else {
        Gesamtsystem_B.signal_p = 0.0;
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
      }
      break;

     case Gesamtsystem_IN_firstEntry:
<<<<<<< HEAD
      /* During 'firstEntry': '<S34>:69' */
      if (Gesamtsystem_DWork.temporalCounter_i1_i >= 70U) {
        /* Transition: '<S34>:160' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_closeKlappe_b;
        Gesamtsystem_DWork.temporalCounter_i1_i = 0U;

        /* Entry 'closeKlappe': '<S34>:159' */
=======
      /* During 'firstEntry': '<S35>:69' */
      if (Gesamtsystem_DWork.temporalCounter_i1_i >= 70U) {
        /* Transition: '<S35>:160' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_closeKlappe_b;
        Gesamtsystem_DWork.temporalCounter_i1_i = 0U;

        /* Entry 'closeKlappe': '<S35>:159' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_B.signal_p = 0.0;
      }
      break;

     case Gesamtsystem_IN_goToMagacin:
      /* During 'goToMagacin': '<S35>:3' */
      if (((real32_T)Gesamtsystem_B.RateTransition3 > Gesamtsystem_B.angle - 2.0)
          && ((real32_T)Gesamtsystem_B.RateTransition3 < Gesamtsystem_B.angle +
              2.0)) {
<<<<<<< HEAD
        /* Transition: '<S34>:66' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_openGate;
        Gesamtsystem_DWork.temporalCounter_i1_i = 0U;

        /* Entry 'openGate': '<S34>:72' */
=======
        /* Transition: '<S35>:66' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_openGate;
        Gesamtsystem_DWork.temporalCounter_i1_i = 0U;

        /* Entry 'openGate': '<S35>:72' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_B.signal_p = 1.0;
        Gesamtsystem_B.movingCube = 0.0F;
      }
      break;

     case Gesamtsystem_IN_goToZero:
      /* During 'goToZero': '<S35>:59' */
      if (((real32_T)Gesamtsystem_B.RateTransition3 > -2.0F) && ((real32_T)
           Gesamtsystem_B.RateTransition3 < 2.0F)) {
<<<<<<< HEAD
        /* Transition: '<S34>:61' */
=======
        /* Transition: '<S35>:61' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_wait_b;
        Gesamtsystem_DWork.temporalCounter_i1_i = 0U;
      } else {
        Gesamtsystem_B.angle = 0.0;
        Gesamtsystem_B.movingCube = 1.0F;
      }
      break;

     case Gesamtsystem_IN_openGate:
<<<<<<< HEAD
      /* During 'openGate': '<S34>:72' */
      if (Gesamtsystem_DWork.temporalCounter_i1_i >= 50U) {
        /* Transition: '<S34>:75' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_closeGate;

        /* Entry 'closeGate': '<S34>:73' */
=======
      /* During 'openGate': '<S35>:72' */
      if (Gesamtsystem_DWork.temporalCounter_i1_i >= 50U) {
        /* Transition: '<S35>:75' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_closeGate;

        /* Entry 'closeGate': '<S35>:73' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_B.signal_p = 0.0;
      } else {
        Gesamtsystem_B.signal_p = 1.0;
        Gesamtsystem_B.movingCube = 0.0F;
      }
      break;

     case Gesamtsystem_IN_startPosition:
<<<<<<< HEAD
      /* During 'startPosition': '<S34>:157' */
      if (Gesamtsystem_B.TmpRTBAtChart7Inport4 > 0.0F) {
        /* Transition: '<S34>:158' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_firstEntry;
        Gesamtsystem_DWork.temporalCounter_i1_i = 0U;

        /* Entry 'firstEntry': '<S34>:69' */
=======
      /* During 'startPosition': '<S35>:157' */
      if (Gesamtsystem_B.TmpRTBAtChart7Inport4 > 0.0F) {
        /* Transition: '<S35>:158' */
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_firstEntry;
        Gesamtsystem_DWork.temporalCounter_i1_i = 0U;

        /* Entry 'firstEntry': '<S35>:69' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_B.angle = 300.0;
        Gesamtsystem_B.signal_p = -1.0;
      }
      break;

     case Gesamtsystem_IN_wait_b:
<<<<<<< HEAD
      /* During 'wait': '<S34>:101' */
      if (Gesamtsystem_DWork.temporalCounter_i1_i >= 40U) {
        /* Transition: '<S34>:102' */
=======
      /* During 'wait': '<S35>:101' */
      if (Gesamtsystem_DWork.temporalCounter_i1_i >= 40U) {
        /* Transition: '<S35>:102' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_goToMagacin;

        /* Entry 'goToMagacin': '<S35>:3' */
        Gesamtsystem_B.angle = rtb_RoundingFunction2;
      }
      break;

     default:
      /* During 'waitForCube': '<S35>:29' */
      if (Gesamtsystem_B.angle == 85.0) {
<<<<<<< HEAD
        /* Transition: '<S34>:154' */
=======
        /* Transition: '<S35>:154' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsy_IN_betterRightPosition;

        /* Entry 'betterRightPosition': '<S35>:150' */
        Gesamtsystem_B.angle = 220.0;
      } else if (Gesamtsystem_B.angle == -40.0) {
<<<<<<< HEAD
        /* Transition: '<S34>:152' */
=======
        /* Transition: '<S35>:152' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsys_IN_betterLeftPosition;

        /* Entry 'betterLeftPosition': '<S35>:151' */
        Gesamtsystem_B.angle = -170.0;
      } else {
        if (rtb_RoundingFunction2 != -1.0) {
<<<<<<< HEAD
          /* Transition: '<S34>:60' */
=======
          /* Transition: '<S35>:60' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
          Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_goToZero;

          /* Entry 'goToZero': '<S35>:59' */
          Gesamtsystem_B.angle = 0.0;
          Gesamtsystem_B.movingCube = 1.0F;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Chart7' */

<<<<<<< HEAD
  /* Sum: '<S40>/Sum' incorporates:
=======
  /* Sum: '<S41>/Sum' incorporates:
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
   *  DataTypeConversion: '<S3>/Data Type Conversion2'
   */
  rtb_DeadZone = Gesamtsystem_B.angle - (real32_T)Gesamtsystem_B.RateTransition3;

<<<<<<< HEAD
  /* DeadZone: '<S40>/Dead Zone' */
=======
  /* DeadZone: '<S41>/Dead Zone' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  if (rtb_DeadZone > Gesamtsystem_P.DeadZone_End) {
    rtb_DeadZone -= Gesamtsystem_P.DeadZone_End;
  } else if (rtb_DeadZone >= Gesamtsystem_P.DeadZone_Start) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= Gesamtsystem_P.DeadZone_Start;
  }

<<<<<<< HEAD
  /* End of DeadZone: '<S40>/Dead Zone' */

  /* Gain: '<S40>/Verstaerkung' */
  rtb_RoundingFunction2 = Gesamtsystem_P.Verstaerkung_Gain * rtb_DeadZone;

  /* MATLAB Function: '<S40>/Richtung' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung': '<S42>:1' */
  if (rtb_RoundingFunction2 > 0.0) {
    /* '<S42>:1:3' */
    /* '<S42>:1:4' */
    Gesamtsystem_B.y = 1.0;
  } else {
    /* '<S42>:1:6' */
    Gesamtsystem_B.y = 0.0;
  }

  /* End of MATLAB Function: '<S40>/Richtung' */

  /* S-Function (c280xgpio_do): '<S36>/Drehrichtungsvorgabe f�r einen Motor' */
  {
    if (Gesamtsystem_B.y)
      GpioDataRegs.GPASET.bit.GPIO19 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO19 = 1;
  }

  /* Abs: '<S40>/Abs' */
  rtb_RoundingFunction2 = fabs(rtb_RoundingFunction2);

  /* MATLAB Function: '<S40>/Betrag' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag': '<S41>:1' */
  if ((0.5 < rtb_RoundingFunction2) && (rtb_RoundingFunction2 < 60.0)) {
    /* '<S41>:1:3' */
    /* '<S41>:1:4' */
    rtb_y_o = 60.0;
  } else if (rtb_RoundingFunction2 <= 0.5) {
    /* '<S41>:1:5' */
    /* '<S41>:1:6' */
    rtb_y_o = 0.0;
  } else if (rtb_RoundingFunction2 >= 100.0) {
    /* '<S41>:1:7' */
    /* '<S41>:1:8' */
    rtb_y_o = 100.0;
  } else {
    /* '<S41>:1:10' */
    rtb_y_o = rtb_RoundingFunction2;
  }

  /* End of MATLAB Function: '<S40>/Betrag' */

  /* S-Function (c280xpwm): '<S36>/PWM Vorgabe f�r einen Motor ' */

  /*-- Update CMPB value for ePWM4 --*/
  {
    EPwm4Regs.CMPB = (uint16_T)((uint32_T)EPwm4Regs.TBPRD * rtb_y_o * 0.01);
  }

  /* Chart: '<S3>/Chart6' */
  if (Gesamtsystem_DWork.temporalCounter_i1_d < 127U) {
    Gesamtsystem_DWork.temporalCounter_i1_d = ((int16_T)
      Gesamtsystem_DWork.temporalCounter_i1_d + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart6 */
  /* During: Subsystem/Chart6 */
  if (Gesamtsystem_DWork.is_active_c37_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Chart6 */
    Gesamtsystem_DWork.is_active_c37_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Chart6 */
    /* Transition: '<S33>:16' */
    Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_wait;

    /* Entry 'wait': '<S33>:4' */
    Gesamtsystem_B.gateDirection_k = 0.0;
    Gesamtsystem_B.gatePWM_e = 60.0;
    Gesamtsystem_B.movingCube_p = 0.0F;
  } else {
    switch (Gesamtsystem_DWork.is_c37_Gesamtsystem) {
     case Gesamtsystem_IN_CloseRegular:
      /* During 'CloseRegular': '<S33>:22' */
      Gesamtsystem_B.gatePWM_e = 100.0;
      Gesamtsystem_B.gateDirection_k = 0.0;
      break;

     case Gesamtsystem_IN_close:
      /* During 'close': '<S33>:3' */
      if (Gesamtsystem_DWork.temporalCounter_i1_d >= 40U) {
        /* Transition: '<S33>:7' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_wait;

        /* Entry 'wait': '<S33>:4' */
=======
  /* End of DeadZone: '<S41>/Dead Zone' */

  /* Gain: '<S41>/Verstaerkung' */
  rtb_RoundingFunction2 = Gesamtsystem_P.Verstaerkung_Gain * rtb_DeadZone;

  /* MATLAB Function: '<S41>/Richtung' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Richtung': '<S43>:1' */
  if (rtb_RoundingFunction2 > 0.0) {
    /* '<S43>:1:3' */
    /* '<S43>:1:4' */
    Gesamtsystem_B.y = 1.0;
  } else {
    /* '<S43>:1:6' */
    Gesamtsystem_B.y = 0.0;
  }

  /* End of MATLAB Function: '<S41>/Richtung' */

  /* S-Function (c280xgpio_do): '<S37>/Drehrichtungsvorgabe f�r einen Motor' */
  {
    if (Gesamtsystem_B.y)
      GpioDataRegs.GPASET.bit.GPIO19 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO19 = 1;
  }

  /* Abs: '<S41>/Abs' */
  rtb_RoundingFunction2 = fabs(rtb_RoundingFunction2);

  /* MATLAB Function: '<S41>/Betrag' */
  /* MATLAB Function 'Subsystem/P-Regler mit Output2/P-Regler mit Regelfehler Begrenzung Initial: k = 0.1, limiit = +//- 100 Sampletime 0.01/Betrag': '<S42>:1' */
  if ((0.5 < rtb_RoundingFunction2) && (rtb_RoundingFunction2 < 60.0)) {
    /* '<S42>:1:3' */
    /* '<S42>:1:4' */
    rtb_y_o = 60.0;
  } else if (rtb_RoundingFunction2 <= 0.5) {
    /* '<S42>:1:5' */
    /* '<S42>:1:6' */
    rtb_y_o = 0.0;
  } else if (rtb_RoundingFunction2 >= 100.0) {
    /* '<S42>:1:7' */
    /* '<S42>:1:8' */
    rtb_y_o = 100.0;
  } else {
    /* '<S42>:1:10' */
    rtb_y_o = rtb_RoundingFunction2;
  }

  /* End of MATLAB Function: '<S41>/Betrag' */

  /* S-Function (c280xpwm): '<S37>/PWM Vorgabe f�r einen Motor ' */

  /*-- Update CMPB value for ePWM4 --*/
  {
    EPwm4Regs.CMPB = (uint16_T)((uint32_T)EPwm4Regs.TBPRD * rtb_y_o * 0.01);
  }

  /* Chart: '<S3>/Chart6' */
  if (Gesamtsystem_DWork.temporalCounter_i1_d < 127U) {
    Gesamtsystem_DWork.temporalCounter_i1_d = ((int16_T)
      Gesamtsystem_DWork.temporalCounter_i1_d + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart6 */
  /* During: Subsystem/Chart6 */
  if (Gesamtsystem_DWork.is_active_c37_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Chart6 */
    Gesamtsystem_DWork.is_active_c37_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Chart6 */
    /* Transition: '<S34>:16' */
    Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_wait;

    /* Entry 'wait': '<S34>:4' */
    Gesamtsystem_B.gateDirection_k = 0.0;
    Gesamtsystem_B.gatePWM_e = 60.0;
    Gesamtsystem_B.movingCube_p = 0.0F;
  } else {
    switch (Gesamtsystem_DWork.is_c37_Gesamtsystem) {
     case Gesamtsystem_IN_CloseRegular:
      /* During 'CloseRegular': '<S34>:22' */
      Gesamtsystem_B.gatePWM_e = 100.0;
      Gesamtsystem_B.gateDirection_k = 0.0;
      break;

     case Gesamtsystem_IN_close:
      /* During 'close': '<S34>:3' */
      if (Gesamtsystem_DWork.temporalCounter_i1_d >= 40U) {
        /* Transition: '<S34>:7' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_wait;

        /* Entry 'wait': '<S34>:4' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_B.gateDirection_k = 0.0;
        Gesamtsystem_B.gatePWM_e = 60.0;
        Gesamtsystem_B.movingCube_p = 0.0F;
      } else {
        Gesamtsystem_B.gateDirection_k = 0.0;
      }
      break;

     case Gesamtsystem_IN_closeKlappe:
<<<<<<< HEAD
      /* During 'closeKlappe': '<S33>:17' */
      if (Gesamtsystem_DWork.temporalCounter_i1_d >= 100U) {
        /* Transition: '<S33>:19' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_wait;

        /* Entry 'wait': '<S33>:4' */
=======
      /* During 'closeKlappe': '<S34>:17' */
      if (Gesamtsystem_DWork.temporalCounter_i1_d >= 100U) {
        /* Transition: '<S34>:19' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_wait;

        /* Entry 'wait': '<S34>:4' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_B.gateDirection_k = 0.0;
        Gesamtsystem_B.gatePWM_e = 60.0;
        Gesamtsystem_B.movingCube_p = 0.0F;
      } else {
        Gesamtsystem_B.gatePWM_e = 100.0;
        Gesamtsystem_B.gateDirection_k = 0.0;
      }
      break;

     case Gesamtsystem_IN_open:
<<<<<<< HEAD
      /* During 'open': '<S33>:1' */
      if (Gesamtsystem_DWork.temporalCounter_i1_d >= 50U) {
        /* Transition: '<S33>:6' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_close;
        Gesamtsystem_DWork.temporalCounter_i1_d = 0U;

        /* Entry 'close': '<S33>:3' */
=======
      /* During 'open': '<S34>:1' */
      if (Gesamtsystem_DWork.temporalCounter_i1_d >= 50U) {
        /* Transition: '<S34>:6' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_close;
        Gesamtsystem_DWork.temporalCounter_i1_d = 0U;

        /* Entry 'close': '<S34>:3' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_B.gateDirection_k = 0.0;
      } else {
        Gesamtsystem_B.gateDirection_k = 1.0;
        Gesamtsystem_B.gatePWM_e = 100.0;
        Gesamtsystem_B.movingCube_p = 1.0F;
      }
      break;

     default:
<<<<<<< HEAD
      /* During 'wait': '<S33>:4' */
      if (Gesamtsystem_B.signal_p == 1.0) {
        /* Transition: '<S33>:5' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_open;
        Gesamtsystem_DWork.temporalCounter_i1_d = 0U;

        /* Entry 'open': '<S33>:1' */
=======
      /* During 'wait': '<S34>:4' */
      if (Gesamtsystem_B.signal_p == 1.0) {
        /* Transition: '<S34>:5' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_open;
        Gesamtsystem_DWork.temporalCounter_i1_d = 0U;

        /* Entry 'open': '<S34>:1' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_B.gateDirection_k = 1.0;
        Gesamtsystem_B.gatePWM_e = 100.0;
        Gesamtsystem_B.movingCube_p = 1.0F;
      } else if (Gesamtsystem_B.signal_p == -1.0) {
<<<<<<< HEAD
        /* Transition: '<S33>:18' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_closeKlappe;
        Gesamtsystem_DWork.temporalCounter_i1_d = 0U;

        /* Entry 'closeKlappe': '<S33>:17' */
=======
        /* Transition: '<S34>:18' */
        Gesamtsystem_DWork.is_c37_Gesamtsystem = Gesamtsystem_IN_closeKlappe;
        Gesamtsystem_DWork.temporalCounter_i1_d = 0U;

        /* Entry 'closeKlappe': '<S34>:17' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_B.gatePWM_e = 100.0;
        Gesamtsystem_B.gateDirection_k = 0.0;
      } else {
        Gesamtsystem_B.gateDirection_k = 0.0;
        Gesamtsystem_B.gatePWM_e = 60.0;
        Gesamtsystem_B.movingCube_p = 0.0F;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Chart6' */

<<<<<<< HEAD
  /* S-Function (c280xpwm): '<S38>/PWM Vorgabe f�r einen Motor 1' */
=======
  /* S-Function (c280xpwm): '<S39>/PWM Vorgabe f�r einen Motor 1' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277

  /*-- Update CMPB value for ePWM6 --*/
  {
    EPwm6Regs.CMPB = (uint16_T)((uint32_T)EPwm6Regs.TBPRD *
      Gesamtsystem_B.gatePWM_e * 0.01);
  }

<<<<<<< HEAD
  /* S-Function (c280xgpio_do): '<S38>/Drehrichtungsvorgabe f�r einen Motor1' */
=======
  /* S-Function (c280xgpio_do): '<S39>/Drehrichtungsvorgabe f�r einen Motor1' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
  {
    if (Gesamtsystem_B.gateDirection_k)
      GpioDataRegs.GPASET.bit.GPIO16 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO16 = 1;
  }

  /* Update for UnitDelay: '<S3>/Unit Delay2' incorporates:
   *  Sum: '<S3>/Sum2'
   */
  Gesamtsystem_DWork.UnitDelay2_DSTATE_l = Gesamtsystem_B.movingCube +
    Gesamtsystem_B.movingCube_p;
}

/* Model step function for TID2 */
void Gesamtsystem_step2(void)          /* Sample time: [0.1s, 0.0s] */
{
  /* S-Function (c280xgpio_di): '<S3>/Digital Input2' */
  {
    Gesamtsystem_B.DigitalInput2 = GpioDataRegs.GPADAT.bit.GPIO24;
  }

  /* Chart: '<S3>/Chart8' */
  if (Gesamtsystem_DWork.temporalCounter_i1_g < 31U) {
    Gesamtsystem_DWork.temporalCounter_i1_g = ((int16_T)
      Gesamtsystem_DWork.temporalCounter_i1_g + 1) & 255U;
  }

  /* Gateway: Subsystem/Chart8 */
  /* During: Subsystem/Chart8 */
  if (Gesamtsystem_DWork.is_active_c39_Gesamtsystem == 0U) {
    /* Entry: Subsystem/Chart8 */
    Gesamtsystem_DWork.is_active_c39_Gesamtsystem = 1U;

    /* Entry Internal: Subsystem/Chart8 */
<<<<<<< HEAD
    /* Transition: '<S35>:16' */
    Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_entry;

    /* Entry 'entry': '<S35>:20' */
=======
    /* Transition: '<S36>:16' */
    Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_entry;

    /* Entry 'entry': '<S36>:20' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    Gesamtsystem_DWork.tasterCounter = 0.0;
    Gesamtsystem_B.panzerMotor = 0.0;
    Gesamtsystem_B.lampe = 0.0;
  } else {
    switch (Gesamtsystem_DWork.is_c39_Gesamtsystem) {
     case Gesamtsystem_IN_Lampe:
<<<<<<< HEAD
      /* During 'Lampe': '<S35>:35' */
=======
      /* During 'Lampe': '<S36>:35' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
      Gesamtsystem_B.lampe = 1.0;
      break;

     case Gesamtsystem_IN_Stillstand:
<<<<<<< HEAD
      /* During 'Stillstand': '<S35>:25' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 10U) {
        /* Transition: '<S35>:36' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_Lampe;

        /* Entry 'Lampe': '<S35>:35' */
=======
      /* During 'Stillstand': '<S36>:25' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 10U) {
        /* Transition: '<S36>:36' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_Lampe;

        /* Entry 'Lampe': '<S36>:35' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_B.lampe = 1.0;
      } else {
        Gesamtsystem_B.gatePWM = 0.0;
      }
      break;

     case Gesamtsystem_IN_end:
<<<<<<< HEAD
      /* During 'end': '<S35>:23' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 5U) {
        /* Transition: '<S35>:26' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_Stillstand;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'Stillstand': '<S35>:25' */
=======
      /* During 'end': '<S36>:23' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 5U) {
        /* Transition: '<S36>:26' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_Stillstand;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'Stillstand': '<S36>:25' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_B.gatePWM = 0.0;
      } else {
        Gesamtsystem_B.gatePWM = 100.0;
        Gesamtsystem_B.gateDirection = 1.0;
        Gesamtsystem_B.panzerMotor = 0.0;
      }
      break;

     case Gesamtsystem_IN_entry:
<<<<<<< HEAD
      /* During 'entry': '<S35>:20' */
      /* Transition: '<S35>:21' */
      Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait_ba;

      /* Entry 'wait': '<S35>:4' */
=======
      /* During 'entry': '<S36>:20' */
      /* Transition: '<S36>:21' */
      Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait_ba;

      /* Entry 'wait': '<S36>:4' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
      Gesamtsystem_B.gatePWM = 0.0;
      Gesamtsystem_B.gateDirection = 0.0;
      break;

     case Gesamtsystem_IN_open_b:
<<<<<<< HEAD
      /* During 'open': '<S35>:1' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 5U) {
        /* Transition: '<S35>:6' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait1;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'wait1': '<S35>:3' */
        Gesamtsystem_B.gatePWM = 0.0;
      }
      break;

     case Gesamtsystem_IN_wait_ba:
      /* During 'wait': '<S35>:4' */
      if ((Gesamtsystem_B.DigitalInput2 > 0.0F) &&
          (Gesamtsystem_DWork.tasterCounter >= 2.0)) {
        /* Transition: '<S35>:24' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_end;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'end': '<S35>:23' */
        Gesamtsystem_B.gatePWM = 100.0;
        Gesamtsystem_B.gateDirection = 1.0;
        Gesamtsystem_B.panzerMotor = 0.0;
      } else if ((Gesamtsystem_B.DigitalInput2 > 0.0F) &&
                 (Gesamtsystem_DWork.tasterCounter == 0.0)) {
        /* Transition: '<S35>:5' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_open_b;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'open': '<S35>:1' */
        Gesamtsystem_DWork.tasterCounter++;
        Gesamtsystem_B.gatePWM = 100.0;
        Gesamtsystem_B.gateDirection = 0.0;
        Gesamtsystem_B.panzerMotor = 1.0;
      } else if ((Gesamtsystem_B.DigitalInput2 > 0.0F) &&
                 (Gesamtsystem_DWork.tasterCounter == 1.0)) {
        /* Transition: '<S35>:31' */
        Gesamtsystem_DWork.tasterCounter = 2.0;
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait_ba;

        /* Entry 'wait': '<S35>:4' */
        Gesamtsystem_B.gatePWM = 0.0;
        Gesamtsystem_B.gateDirection = 0.0;
      } else {
        Gesamtsystem_B.gatePWM = 0.0;
        Gesamtsystem_B.gateDirection = 0.0;
      }
      break;

     default:
      /* During 'wait1': '<S35>:3' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 20U) {
        /* Transition: '<S35>:22' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait_ba;

        /* Entry 'wait': '<S35>:4' */
=======
      /* During 'open': '<S36>:1' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 5U) {
        /* Transition: '<S36>:6' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait1;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'wait1': '<S36>:3' */
        Gesamtsystem_B.gatePWM = 0.0;
      }
      break;

     case Gesamtsystem_IN_wait_ba:
      /* During 'wait': '<S36>:4' */
      if ((Gesamtsystem_B.DigitalInput2 > 0.0F) &&
          (Gesamtsystem_DWork.tasterCounter >= 2.0)) {
        /* Transition: '<S36>:24' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_end;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'end': '<S36>:23' */
        Gesamtsystem_B.gatePWM = 100.0;
        Gesamtsystem_B.gateDirection = 1.0;
        Gesamtsystem_B.panzerMotor = 0.0;
      } else if ((Gesamtsystem_B.DigitalInput2 > 0.0F) &&
                 (Gesamtsystem_DWork.tasterCounter == 0.0)) {
        /* Transition: '<S36>:5' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_open_b;
        Gesamtsystem_DWork.temporalCounter_i1_g = 0U;

        /* Entry 'open': '<S36>:1' */
        Gesamtsystem_DWork.tasterCounter++;
        Gesamtsystem_B.gatePWM = 100.0;
        Gesamtsystem_B.gateDirection = 0.0;
        Gesamtsystem_B.panzerMotor = 1.0;
      } else if ((Gesamtsystem_B.DigitalInput2 > 0.0F) &&
                 (Gesamtsystem_DWork.tasterCounter == 1.0)) {
        /* Transition: '<S36>:31' */
        Gesamtsystem_DWork.tasterCounter = 2.0;
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait_ba;

        /* Entry 'wait': '<S36>:4' */
        Gesamtsystem_B.gatePWM = 0.0;
        Gesamtsystem_B.gateDirection = 0.0;
      } else {
        Gesamtsystem_B.gatePWM = 0.0;
        Gesamtsystem_B.gateDirection = 0.0;
      }
      break;

     default:
      /* During 'wait1': '<S36>:3' */
      if (Gesamtsystem_DWork.temporalCounter_i1_g >= 20U) {
        /* Transition: '<S36>:22' */
        Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_wait_ba;

        /* Entry 'wait': '<S36>:4' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
        Gesamtsystem_B.gatePWM = 0.0;
        Gesamtsystem_B.gateDirection = 0.0;
      } else {
        Gesamtsystem_B.gatePWM = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Chart8' */

  /* S-Function (c280xgpio_do): '<S3>/Digital Output' */
  {
    if (Gesamtsystem_B.lampe)
      GpioDataRegs.GPBSET.bit.GPIO58 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO58 = 1;
  }

  /* S-Function (c280xgpio_do): '<S3>/Drehrichtungsvorgabe f�r einen Motor3' */
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

<<<<<<< HEAD
  /* Update for RateTransition: '<S3>/TmpRTBAtChart8Outport3' */
  Gesamtsystem_DWork.TmpRTBAtChart8Outport3_Buffer0 = Gesamtsystem_B.panzerMotor;

=======
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
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

    /* Start for S-Function (c280xgpio_di): '<S2>/Uebergabeschalter' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFCFFFF;
    GpioCtrlRegs.GPADIR.all &= 0xFEFFFFFF;
    EDIS;

    /* Start for S-Function (c28xisr_c2000): '<S13>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S13>/Triggered Subsystem'
     */
    /* Start for function-call system: '<S13>/Triggered Subsystem' */

    /* Start for S-Function (c280xi2c_rx): '<S29>/I2C Receive' */

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

    /* Start for RateTransition: '<S13>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Gesamtsystem_B.RateTransition[i] =
        Gesamtsystem_P.RateTransition_InitialCondition;
    }

    /* End of Start for RateTransition: '<S13>/Rate Transition' */

    /* Start for RateTransition: '<S3>/TmpRTBAtChart8Outport3' */
    Gesamtsystem_B.TmpRTBAtChart8Outport3 =
      Gesamtsystem_P.TmpRTBAtChart8Outport3_InitialC;

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

    /* Start for S-Function (c280xgpio_di): '<S3>/Digital Input2' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFCFFFF;
    GpioCtrlRegs.GPADIR.all &= 0xFEFFFFFF;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S3>/Digital Output' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFCFFFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x4000000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S3>/Drehrichtungsvorgabe f�r einen Motor3' */
    EALLOW;
    GpioCtrlRegs.GPAMUX1.all &= 0x3FFFFFFF;
    GpioCtrlRegs.GPADIR.all |= 0x8000;
    EDIS;

    /* Start for S-Function (c280xadc): '<S3>/Analog-Digital-Wandlung Sampletime = 0.00002 s Wichtig! F�r korrekte Winkelmessung nicht die Sampletime vergr��ern Weitere Ports k�nnen hinzugef�gt werden (Farbsensor, Sharp-Sensoren) Wichtig! Dieser Block ist sehr Rechenintensiv2' */
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
<<<<<<< HEAD

    /* Start for RateTransition: '<S3>/TmpRTBAtChart7Inport4' */
    Gesamtsystem_B.TmpRTBAtChart7Inport4 =
      Gesamtsystem_P.TmpRTBAtChart7Inport4_InitialCo;
=======
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277

    /* Start for RateTransition: '<S3>/TmpRTBAtChart7Inport4' */
    Gesamtsystem_B.TmpRTBAtChart7Inport4 =
      Gesamtsystem_P.TmpRTBAtChart7Inport4_InitialCo;

    /* Start for S-Function (c280xgpio_do): '<S37>/Drehrichtungsvorgabe f�r einen Motor' */
    EALLOW;
    GpioCtrlRegs.GPAMUX2.all &= 0xFFFFFF3F;
    GpioCtrlRegs.GPADIR.all |= 0x80000;
    EDIS;

    /* Start for S-Function (c280xpwm): '<S37>/PWM Vorgabe f�r einen Motor ' */

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

<<<<<<< HEAD
    /* Start for S-Function (c280xpwm): '<S38>/PWM Vorgabe f�r einen Motor 1' */
=======
    /* Start for S-Function (c280xpwm): '<S39>/PWM Vorgabe f�r einen Motor 1' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277

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

<<<<<<< HEAD
    /* Start for S-Function (c280xgpio_do): '<S38>/Drehrichtungsvorgabe f�r einen Motor1' */
=======
    /* Start for S-Function (c280xgpio_do): '<S39>/Drehrichtungsvorgabe f�r einen Motor1' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
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

<<<<<<< HEAD
    /* Start for S-Function (c280xgpio_do): '<S39>/gr�ne LED3 auf dem �C gibt 1//0 codiert die Drehrichtung an' */
=======
    /* Start for S-Function (c280xgpio_do): '<S40>/gr�ne LED3 auf dem �C gibt 1//0 codiert die Drehrichtung an' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    EALLOW;
    GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
    GpioCtrlRegs.GPBDIR.all |= 0x4;
    EDIS;
    Gesamtsystem_PrevZCSigState.I2CReinitialisierung_Trig_ZCE =
      UNINITIALIZED_ZCSIG;
    Gesamtsystem_PrevZCSigState.I2CReset_Trig_ZCE = UNINITIALIZED_ZCSIG;

    /* InitializeConditions for RateTransition: '<S13>/Rate Transition' */
    for (i = 0; i < 20; i++) {
      Gesamtsystem_DWork.RateTransition_Buffer[i] =
        Gesamtsystem_P.RateTransition_InitialCondition;
    }

    /* End of InitializeConditions for RateTransition: '<S13>/Rate Transition' */

<<<<<<< HEAD
    /* InitializeConditions for RateTransition: '<S3>/TmpRTBAtChart8Outport3' */
    Gesamtsystem_DWork.TmpRTBAtChart8Outport3_Buffer0 =
      Gesamtsystem_P.TmpRTBAtChart8Outport3_InitialC;

    /* InitializeConditions for DiscretePulseGenerator: '<S27>/Pulse Generator' */
    Gesamtsystem_DWork.clockTickCounter = 0L;

    /* InitializeConditions for Memory: '<S44>/Memory' */
    Gesamtsystem_DWork.Memory_PreviousInput = Gesamtsystem_P.EdgeDetector1_ic;

    /* InitializeConditions for UnitDelay: '<S43>/Unit Delay3' */
    Gesamtsystem_DWork.UnitDelay3_DSTATE =
      Gesamtsystem_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S43>/Unit Delay4' */
    Gesamtsystem_DWork.UnitDelay4_DSTATE =
      Gesamtsystem_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S43>/Unit Delay5' */
    Gesamtsystem_DWork.UnitDelay5_DSTATE =
      Gesamtsystem_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S43>/Unit Delay1' */
    Gesamtsystem_DWork.UnitDelay1_DSTATE =
      Gesamtsystem_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Memory: '<S45>/Memory' */
    Gesamtsystem_DWork.Memory_PreviousInput_n = Gesamtsystem_P.EdgeDetector2_ic;

    /* InitializeConditions for UnitDelay: '<S43>/Unit Delay2' */
=======
    /* InitializeConditions for DiscretePulseGenerator: '<S28>/Pulse Generator' */
    Gesamtsystem_DWork.clockTickCounter = 0L;

    /* InitializeConditions for Memory: '<S45>/Memory' */
    Gesamtsystem_DWork.Memory_PreviousInput = Gesamtsystem_P.EdgeDetector1_ic;

    /* InitializeConditions for UnitDelay: '<S44>/Unit Delay3' */
    Gesamtsystem_DWork.UnitDelay3_DSTATE =
      Gesamtsystem_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S44>/Unit Delay4' */
    Gesamtsystem_DWork.UnitDelay4_DSTATE =
      Gesamtsystem_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S44>/Unit Delay5' */
    Gesamtsystem_DWork.UnitDelay5_DSTATE =
      Gesamtsystem_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S44>/Unit Delay1' */
    Gesamtsystem_DWork.UnitDelay1_DSTATE =
      Gesamtsystem_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Memory: '<S46>/Memory' */
    Gesamtsystem_DWork.Memory_PreviousInput_n = Gesamtsystem_P.EdgeDetector2_ic;

    /* InitializeConditions for UnitDelay: '<S44>/Unit Delay2' */
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    Gesamtsystem_DWork.UnitDelay2_DSTATE =
      Gesamtsystem_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay2' */
    Gesamtsystem_DWork.UnitDelay2_DSTATE_l =
      Gesamtsystem_P.UnitDelay2_InitialCondition_h;

    /* InitializeConditions for RateTransition: '<S3>/TmpRTBAtSortieralgorithmus2Inport3' */
    Gesamtsystem_DWork.TmpRTBAtSortieralgorithmus2Inpo =
      Gesamtsystem_P.TmpRTBAtSortieralgorithmus2Inpo;
<<<<<<< HEAD

    /* InitializeConditions for RateTransition: '<S3>/TmpRTBAtChart7Inport4' */
    Gesamtsystem_DWork.TmpRTBAtChart7Inport4_Buffer0 =
      Gesamtsystem_P.TmpRTBAtChart7Inport4_InitialCo;
=======
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277

    /* InitializeConditions for RateTransition: '<S3>/TmpRTBAtChart7Inport4' */
    Gesamtsystem_DWork.TmpRTBAtChart7Inport4_Buffer0 =
      Gesamtsystem_P.TmpRTBAtChart7Inport4_InitialCo;

    /* SystemInitialize for Chart: '<S2>/Motorsteuerung bei der Uebergabe' */
    Gesamtsystem_DWork.temporalCounter_i1 = 0U;
    Gesamtsystem_DWork.is_active_c9_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c9_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for S-Function (c28xisr_c2000): '<S13>/C28x Hardware Interrupt' incorporates:
     *  SubSystem: '<S13>/Triggered Subsystem'
     */
    /* System initialize for function-call system: '<S13>/Triggered Subsystem' */
    {
      int16_T i;

      /* InitializeConditions for Delay: '<S29>/Delay' */
      for (i = 0; i < 10; i++) {
        Gesamtsystem_DWork.Delay_DSTATE[i] =
          Gesamtsystem_P.Delay_InitialCondition;
      }

      /* End of InitializeConditions for Delay: '<S29>/Delay' */
    }

    /* End of SystemInitialize for S-Function (c28xisr_c2000): '<S13>/C28x Hardware Interrupt' */

    /* SystemInitialize for Chart: '<S13>/Chart8' */
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

    /* End of SystemInitialize for Chart: '<S13>/Chart8' */

    /* SystemInitialize for Chart: '<S13>/Chart6' */
    Gesamtsystem_DWork.is_active_c16_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c16_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S13>/Chart2' */
    Gesamtsystem_DWork.is_active_c13_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c13_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S13>/Chart4' */
    Gesamtsystem_DWork.is_active_c14_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c14_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S2>/Fahrablaufsteuerung [Init: Zielradius = 10mm] Gang = 0: vorwaerts Gang = 1: rueckwaerts Folgende Werte fuer den Ablauf sind einstellbar: - Zielkoordinatenwerte - Gangwert' */
    Gesamtsystem_DWork.is_Parken = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.is_Sammeln = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    Gesamtsystem_DWork.is_Uebergabe = Gesamtsystem_IN_NO_ACTIVE_CHILD;
<<<<<<< HEAD
    Gesamtsystem_DWork.temporalCounter_i1 = 0U;
=======
    Gesamtsystem_DWork.temporalCounter_i1_m = 0U;
>>>>>>> ac9bec5bbc7e4a9ec51b0e2ef2f94866bf075277
    Gesamtsystem_DWork.is_active_c5_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c5_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Atomic SubSystem: '<S2>/Navigationssystem [Einstellungen moeglich]' */
    /* SystemInitialize for Chart: '<S17>/Quadrantenteiler' */
    Gesamtsystem_DWork.is_active_c11_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c11_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S17>/Winkelausgabe fuer Ausrichtung' */
    Gesamtsystem_DWork.is_active_c12_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c12_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S12>/Drehweg-Optimierung mit Gang-Ausrichtung [Init: Stillstandintervall = �15�]' */
    Gesamtsystem_DWork.is_active_c8_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c8_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S12>/Fahrsystem' */
    Gesamtsystem_DWork.is_active_c7_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c7_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* End of SystemInitialize for SubSystem: '<S2>/Navigationssystem [Einstellungen moeglich]' */

    /* SystemInitialize for Chart: '<S13>/Chart1' */
    Gesamtsystem_DWork.is_active_c1_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c1_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;
    for (i = 0; i < 16; i++) {
      /* SystemInitialize for Chart: '<S13>/Chart6' */
      Gesamtsystem_B.int16x_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S13>/Chart2' */
      Gesamtsystem_B.int16y_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S13>/Chart4' */
      Gesamtsystem_B.int16a1_bin[i] = 0.0F;

      /* SystemInitialize for Chart: '<S13>/Chart1' */
      Gesamtsystem_B.int16z_bin[i] = 0.0F;
    }

    /* SystemInitialize for Chart: '<S3>/Chart8' */
    Gesamtsystem_DWork.temporalCounter_i1_g = 0U;
    Gesamtsystem_DWork.is_active_c39_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c39_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* InitializeConditions for MATLABSystem: '<S3>/Moving Average2' */
    if (Gesamtsystem_DWork.obj.pStatistic->isInitialized == 1L) {
      Gesamtsystem_DWork.obj.pStatistic->pwN = 1.0;
      Gesamtsystem_DWork.obj.pStatistic->pmN = 0.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S3>/Moving Average2' */

    /* SystemInitialize for Chart: '<S3>/Sortieralgorithmus2' */
    Gesamtsystem_DWork.is_active_c42_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c42_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Chart7' */
    Gesamtsystem_DWork.temporalCounter_i1_i = 0U;
    Gesamtsystem_DWork.is_active_c38_Gesamtsystem = 0U;
    Gesamtsystem_DWork.is_c38_Gesamtsystem = Gesamtsystem_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S3>/Chart6' */
    Gesamtsystem_DWork.temporalCounter_i1_d = 0U;
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
