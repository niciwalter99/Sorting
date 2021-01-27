#ifndef __c1_SortierAlgorithmusVirtuelleTestumgebung_h__
#define __c1_SortierAlgorithmusVirtuelleTestumgebung_h__

/* Type Definitions */
#ifndef typedef_SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct
#define typedef_SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c1_sfEvent;
  uint8_T c1_tp_waitForCube;
  uint8_T c1_tp_firstEntry;
  uint8_T c1_tp_goToZero;
  uint8_T c1_tp_closeGate;
  uint8_T c1_tp_wait;
  uint8_T c1_tp_openGate;
  uint8_T c1_tp_goToMagacin;
  uint8_T c1_is_active_c1_SortierAlgorithmusVirtuelleTestumgebung;
  uint8_T c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung;
  void *c1_RuntimeVar;
  uint16_T c1_temporalCounter_i1;
  boolean_T c1_dataWrittenToVector[4];
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
  uint32_T c1_mlFcnLineNumber;
  void *c1_fEmlrtCtx;
  real_T *c1_magacinAngle;
  real_T *c1_angle;
  real_T *c1_gatePWM;
  real_T *c1_gateDirection;
  real_T *c1_cubeFinished;
} SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct;

#endif                                 /*typedef_SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c1_SortierAlgorithmusVirtuelleTestumgebung_get_eml_resolved_functions_info
  (void);
extern const mxArray
  *sf_c1_SortierAlgorithmusVirtuelleTestumgebung_getDebuggerHoverDataFor
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   uint32_T c1_b);

/* Function Definitions */
extern void sf_c1_SortierAlgorithmusVirtuelleTestumgebung_get_check_sum(mxArray *
  plhs[]);
extern void c1_SortierAlgorithmusVirtuelleTestumgebung_method_dispatcher
  (SimStruct *S, int_T method, void *data);

#endif
