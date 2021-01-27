/* Include files */

#include "SortierAlgorithmusVirtuelleTestumgebung_sfun.h"
#include "c1_SortierAlgorithmusVirtuelleTestumgebung.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "SortierAlgorithmusVirtuelleTestumgebung_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c1_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c1_IN_closeGate                ((uint8_T)1U)
#define c1_IN_firstEntry               ((uint8_T)2U)
#define c1_IN_goToMagacin              ((uint8_T)3U)
#define c1_IN_goToZero                 ((uint8_T)4U)
#define c1_IN_openGate                 ((uint8_T)5U)
#define c1_IN_wait                     ((uint8_T)6U)
#define c1_IN_waitForCube              ((uint8_T)7U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c1_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_e_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_g_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_h_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_i_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_j_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_k_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_l_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_m_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c1_n_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c1_o_debug_family_names[2] = { "nargin", "nargout" };

static const char * c1_p_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c1_q_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void initialize_params_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void enable_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void disable_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void c1_update_debugger_state_c1_SortierAlgorithmusVirtuelleTestumgeb
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void set_sim_state_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_st);
static void c1_set_sim_state_side_effects_c1_SortierAlgorithmusVirtuelleTest
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void finalize_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void sf_gateway_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void mdl_start_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void c1_chartstep_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void initSimStructsc1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber, uint32_T c1_instanceNumber);
static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData);
static real_T c1_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_nargin, const char_T *c1_identifier);
static real_T c1_b_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static boolean_T c1_c_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_sfAfterOrElapsed
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static const mxArray *c1_b_sfAfterOrElapsed
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static const mxArray *c1_c_sfAfterOrElapsed
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static const mxArray *c1_d_sfAfterOrElapsed
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static int32_T c1_d_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_d_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static uint8_T c1_e_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_b_tp_waitForCube, const char_T *c1_identifier);
static uint8_T c1_f_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static uint16_T c1_g_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_b_temporalCounter_i1, const char_T *c1_identifier);
static uint16_T c1_h_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_i_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_b_dataWrittenToVector, const char_T *c1_identifier,
   boolean_T c1_y[4]);
static void c1_j_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T c1_y[4]);
static const mxArray *c1_k_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_b_setSimStateSideEffectsInfo, const char_T *c1_identifier);
static const mxArray *c1_l_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   int32_T c1_ssid);
static void c1_init_sf_message_store_memory
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void init_dsm_address_info
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc1_SortierAlgorithmusVirtuelleTestumgebung(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_doSetSimStateSideEffects = 0U;
  chartInstance->c1_setSimStateSideEffectsInfo = NULL;
  chartInstance->c1_tp_closeGate = 0U;
  chartInstance->c1_tp_firstEntry = 0U;
  chartInstance->c1_temporalCounter_i1 = 0U;
  chartInstance->c1_tp_goToMagacin = 0U;
  chartInstance->c1_tp_goToZero = 0U;
  chartInstance->c1_tp_openGate = 0U;
  chartInstance->c1_temporalCounter_i1 = 0U;
  chartInstance->c1_tp_wait = 0U;
  chartInstance->c1_temporalCounter_i1 = 0U;
  chartInstance->c1_tp_waitForCube = 0U;
  chartInstance->c1_temporalCounter_i1 = 0U;
  chartInstance->c1_is_active_c1_SortierAlgorithmusVirtuelleTestumgebung = 0U;
  chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
    c1_IN_NO_ACTIVE_CHILD;
  setLegacyDebuggerFlagForRuntime(chartInstance->S, true);
}

static void initialize_params_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c1_update_debugger_state_c1_SortierAlgorithmusVirtuelleTestumgeb
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  uint32_T c1_prevAniVal;
  c1_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (chartInstance->c1_is_active_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      c1_IN_waitForCube) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      c1_IN_firstEntry) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      c1_IN_goToZero) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      c1_IN_closeGate) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      c1_IN_wait) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      c1_IN_openGate) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      c1_IN_goToMagacin) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c1_sfEvent);
  }

  _SFD_SET_ANIMATION(c1_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  real_T c1_hoistedGlobal;
  const mxArray *c1_b_y = NULL;
  real_T c1_b_hoistedGlobal;
  const mxArray *c1_c_y = NULL;
  real_T c1_c_hoistedGlobal;
  const mxArray *c1_d_y = NULL;
  real_T c1_d_hoistedGlobal;
  const mxArray *c1_e_y = NULL;
  uint8_T c1_e_hoistedGlobal;
  const mxArray *c1_f_y = NULL;
  uint8_T c1_f_hoistedGlobal;
  const mxArray *c1_g_y = NULL;
  uint16_T c1_g_hoistedGlobal;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(8, 1), false);
  c1_hoistedGlobal = *chartInstance->c1_angle;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_hoistedGlobal, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_b_hoistedGlobal = *chartInstance->c1_cubeFinished;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_c_hoistedGlobal = *chartInstance->c1_gateDirection;
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &c1_c_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_d_hoistedGlobal = *chartInstance->c1_gatePWM;
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", &c1_d_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_e_hoistedGlobal =
    chartInstance->c1_is_active_c1_SortierAlgorithmusVirtuelleTestumgebung;
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y", &c1_e_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_f_hoistedGlobal =
    chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung;
  c1_g_y = NULL;
  sf_mex_assign(&c1_g_y, sf_mex_create("y", &c1_f_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_g_hoistedGlobal = chartInstance->c1_temporalCounter_i1;
  c1_h_y = NULL;
  sf_mex_assign(&c1_h_y, sf_mex_create("y", &c1_g_hoistedGlobal, 5, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c1_y, 6, c1_h_y);
  c1_i_y = NULL;
  sf_mex_assign(&c1_i_y, sf_mex_create("y",
    chartInstance->c1_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 4), false);
  sf_mex_setcell(c1_y, 7, c1_i_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_st)
{
  const mxArray *c1_u;
  boolean_T c1_bv0[4];
  int32_T c1_i0;
  c1_u = sf_mex_dup(c1_st);
  *chartInstance->c1_angle = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 0)), "angle");
  *chartInstance->c1_cubeFinished = c1_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 1)), "cubeFinished");
  *chartInstance->c1_gateDirection = c1_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 2)), "gateDirection");
  *chartInstance->c1_gatePWM = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 3)), "gatePWM");
  chartInstance->c1_is_active_c1_SortierAlgorithmusVirtuelleTestumgebung =
    c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 4)),
    "is_active_c1_SortierAlgorithmusVirtuelleTestumgebung");
  chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
    c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 5)),
    "is_c1_SortierAlgorithmusVirtuelleTestumgebung");
  chartInstance->c1_temporalCounter_i1 = c1_g_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 6)), "temporalCounter_i1");
  c1_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 7)),
                        "dataWrittenToVector", c1_bv0);
  for (c1_i0 = 0; c1_i0 < 4; c1_i0++) {
    chartInstance->c1_dataWrittenToVector[c1_i0] = c1_bv0[c1_i0];
  }

  sf_mex_assign(&chartInstance->c1_setSimStateSideEffectsInfo,
                c1_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 8)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c1_u);
  chartInstance->c1_doSetSimStateSideEffects = 1U;
  c1_update_debugger_state_c1_SortierAlgorithmusVirtuelleTestumgeb(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void c1_set_sim_state_side_effects_c1_SortierAlgorithmusVirtuelleTest
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  if (chartInstance->c1_doSetSimStateSideEffects != 0) {
    if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
        c1_IN_closeGate) {
      chartInstance->c1_tp_closeGate = 1U;
    } else {
      chartInstance->c1_tp_closeGate = 0U;
    }

    if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
        c1_IN_firstEntry) {
      chartInstance->c1_tp_firstEntry = 1U;
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 3) == 0.0) {
        chartInstance->c1_temporalCounter_i1 = 0U;
      }
    } else {
      chartInstance->c1_tp_firstEntry = 0U;
    }

    if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
        c1_IN_goToMagacin) {
      chartInstance->c1_tp_goToMagacin = 1U;
    } else {
      chartInstance->c1_tp_goToMagacin = 0U;
    }

    if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
        c1_IN_goToZero) {
      chartInstance->c1_tp_goToZero = 1U;
    } else {
      chartInstance->c1_tp_goToZero = 0U;
    }

    if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
        c1_IN_openGate) {
      chartInstance->c1_tp_openGate = 1U;
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 6) == 0.0) {
        chartInstance->c1_temporalCounter_i1 = 0U;
      }
    } else {
      chartInstance->c1_tp_openGate = 0U;
    }

    if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
        c1_IN_wait) {
      chartInstance->c1_tp_wait = 1U;
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 7) == 0.0) {
        chartInstance->c1_temporalCounter_i1 = 0U;
      }
    } else {
      chartInstance->c1_tp_wait = 0U;
    }

    if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
        c1_IN_waitForCube) {
      chartInstance->c1_tp_waitForCube = 1U;
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 8) == 0.0) {
        chartInstance->c1_temporalCounter_i1 = 0U;
      }
    } else {
      chartInstance->c1_tp_waitForCube = 0U;
    }

    chartInstance->c1_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  sf_mex_destroy(&chartInstance->c1_setSimStateSideEffectsInfo);
}

static void sf_gateway_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  c1_set_sim_state_side_effects_c1_SortierAlgorithmusVirtuelleTest(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  if (chartInstance->c1_temporalCounter_i1 < 511U) {
    chartInstance->c1_temporalCounter_i1 = (uint16_T)((uint32_T)
      chartInstance->c1_temporalCounter_i1 + 1U);
  }

  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0, chartInstance->c1_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_magacinAngle, 1U);
  chartInstance->c1_sfEvent = CALL_EVENT;
  c1_chartstep_c1_SortierAlgorithmusVirtuelleTestumgebung(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
}

static void mdl_start_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerRegisterHover(chartInstance->c1_RuntimeVar, (void *)
    sf_c1_SortierAlgorithmusVirtuelleTestumgebung_getDebuggerHoverDataFor);
  c1_init_sf_message_store_memory(chartInstance);
  sim_mode_is_external(chartInstance->S);
}

static void c1_chartstep_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  uint32_T c1_debug_family_var_map[3];
  uint32_T c1_b_debug_family_var_map[3];
  uint32_T c1_c_debug_family_var_map[3];
  real_T c1_nargin = 0.0;
  real_T c1_b_nargin = 0.0;
  real_T c1_c_nargin = 0.0;
  real_T c1_nargout = 1.0;
  real_T c1_b_nargout = 1.0;
  real_T c1_c_nargout = 1.0;
  boolean_T c1_out;
  boolean_T c1_b_out;
  boolean_T c1_c_out;
  uint32_T c1_d_debug_family_var_map[2];
  uint32_T c1_e_debug_family_var_map[2];
  real_T c1_d_nargin = 0.0;
  uint32_T c1_f_debug_family_var_map[2];
  uint32_T c1_g_debug_family_var_map[2];
  uint32_T c1_h_debug_family_var_map[2];
  real_T c1_e_nargin = 0.0;
  real_T c1_d_nargout = 0.0;
  real_T c1_f_nargin = 0.0;
  real_T c1_g_nargin = 0.0;
  real_T c1_h_nargin = 0.0;
  real_T c1_e_nargout = 0.0;
  real_T c1_f_nargout = 0.0;
  real_T c1_g_nargout = 0.0;
  real_T c1_h_nargout = 0.0;
  uint32_T c1_i_debug_family_var_map[2];
  uint32_T c1_j_debug_family_var_map[2];
  real_T c1_i_nargin = 0.0;
  real_T c1_j_nargin = 0.0;
  real_T c1_i_nargout = 0.0;
  real_T c1_j_nargout = 0.0;
  uint32_T c1_k_debug_family_var_map[2];
  uint32_T c1_l_debug_family_var_map[2];
  uint32_T c1_m_debug_family_var_map[2];
  real_T c1_k_nargin = 0.0;
  real_T c1_l_nargin = 0.0;
  real_T c1_m_nargin = 0.0;
  real_T c1_k_nargout = 0.0;
  real_T c1_l_nargout = 0.0;
  real_T c1_m_nargout = 0.0;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  if (chartInstance->c1_is_active_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
    chartInstance->c1_is_active_c1_SortierAlgorithmusVirtuelleTestumgebung = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
    chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
      c1_IN_firstEntry;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c1_sfEvent);
    chartInstance->c1_temporalCounter_i1 = 0U;
    chartInstance->c1_tp_firstEntry = 1U;
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c1_c_debug_family_names,
      c1_d_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_d_nargin, 0U, c1_sf_marshallOut,
      c1_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_d_nargout, 1U, c1_sf_marshallOut,
      c1_sf_marshallIn);
    *chartInstance->c1_angle = 300.0;
    chartInstance->c1_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_angle, 2U);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    switch (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung) {
     case c1_IN_closeGate:
      CV_CHART_EVAL(0, 0, c1_IN_closeGate);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c1_sfEvent);
      chartInstance->c1_tp_closeGate = 0U;
      chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
        c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
      chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
        c1_IN_waitForCube;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c1_sfEvent);
      chartInstance->c1_temporalCounter_i1 = 0U;
      chartInstance->c1_tp_waitForCube = 1U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c1_debug_family_names,
        c1_f_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_f_nargin, 0U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_f_nargout, 1U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      *chartInstance->c1_cubeFinished = 1.0;
      chartInstance->c1_dataWrittenToVector[3U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c1_cubeFinished, 5U);
      _SFD_SYMBOL_SCOPE_POP();
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
      break;

     case c1_IN_firstEntry:
      CV_CHART_EVAL(0, 0, c1_IN_firstEntry);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c1_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c1_q_debug_family_names,
        c1_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_nargin, 0U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_nargout, 1U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_out, 2U, c1_b_sf_marshallOut,
        c1_b_sf_marshallIn);
      if (CV_EML_IF(1, 0, 0, chartInstance->c1_temporalCounter_i1 >= 300)) {
        c1_out = true;
      } else {
        c1_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      sf_temporal_value_range_check_min(chartInstance->S, 152U, 3.0, 0.0);
      if (c1_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c1_sfEvent);
        chartInstance->c1_tp_firstEntry = 0U;
        chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
          c1_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c1_sfEvent);
        chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
          c1_IN_waitForCube;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c1_sfEvent);
        chartInstance->c1_temporalCounter_i1 = 0U;
        chartInstance->c1_tp_waitForCube = 1U;
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c1_debug_family_names,
          c1_m_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_m_nargin, 0U, c1_sf_marshallOut,
          c1_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_m_nargout, 1U,
          c1_sf_marshallOut, c1_sf_marshallIn);
        *chartInstance->c1_cubeFinished = 1.0;
        chartInstance->c1_dataWrittenToVector[3U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_cubeFinished, 5U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                     chartInstance->c1_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c1_sfEvent);
      break;

     case c1_IN_goToMagacin:
      CV_CHART_EVAL(0, 0, c1_IN_goToMagacin);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
      chartInstance->c1_tp_goToMagacin = 0U;
      chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
        c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c1_sfEvent);
      chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
        c1_IN_openGate;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c1_sfEvent);
      chartInstance->c1_temporalCounter_i1 = 0U;
      chartInstance->c1_tp_openGate = 1U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c1_j_debug_family_names,
        c1_g_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_g_nargin, 0U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_g_nargout, 1U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      *chartInstance->c1_gatePWM = 50.0;
      chartInstance->c1_dataWrittenToVector[1U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c1_gatePWM, 3U);
      *chartInstance->c1_gateDirection = 1.0;
      chartInstance->c1_dataWrittenToVector[2U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c1_gateDirection, 4U);
      _SFD_SYMBOL_SCOPE_POP();
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c1_sfEvent);
      break;

     case c1_IN_goToZero:
      CV_CHART_EVAL(0, 0, c1_IN_goToZero);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c1_sfEvent);
      chartInstance->c1_tp_goToZero = 0U;
      chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
        c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c1_sfEvent);
      chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
        c1_IN_wait;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
      chartInstance->c1_temporalCounter_i1 = 0U;
      chartInstance->c1_tp_wait = 1U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c1_h_debug_family_names,
        c1_h_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_h_nargin, 0U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_h_nargout, 1U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      *chartInstance->c1_gatePWM = 0.0;
      chartInstance->c1_dataWrittenToVector[1U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c1_gatePWM, 3U);
      _SFD_SYMBOL_SCOPE_POP();
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c1_sfEvent);
      break;

     case c1_IN_openGate:
      CV_CHART_EVAL(0, 0, c1_IN_openGate);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   chartInstance->c1_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c1_p_debug_family_names,
        c1_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_b_nargin, 0U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_b_nargout, 1U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_b_out, 2U, c1_b_sf_marshallOut,
        c1_b_sf_marshallIn);
      if (CV_EML_IF(7, 0, 0, chartInstance->c1_temporalCounter_i1 >= 70)) {
        c1_b_out = true;
      } else {
        c1_b_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      sf_temporal_value_range_check_min(chartInstance->S, 158U, 0.7, 0.0);
      if (c1_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c1_sfEvent);
        chartInstance->c1_tp_openGate = 0U;
        chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
          c1_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c1_sfEvent);
        chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
          c1_IN_closeGate;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
        chartInstance->c1_tp_closeGate = 1U;
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c1_f_debug_family_names,
          c1_k_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_k_nargin, 0U, c1_sf_marshallOut,
          c1_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_k_nargout, 1U,
          c1_sf_marshallOut, c1_sf_marshallIn);
        *chartInstance->c1_gateDirection = 0.0;
        chartInstance->c1_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_gateDirection, 4U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                     chartInstance->c1_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c1_k_debug_family_names,
          c1_i_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_i_nargin, 0U, c1_sf_marshallOut,
          c1_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_i_nargout, 1U,
          c1_sf_marshallOut, c1_sf_marshallIn);
        *chartInstance->c1_gatePWM = 50.0;
        chartInstance->c1_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_gatePWM, 3U);
        *chartInstance->c1_gateDirection = 1.0;
        chartInstance->c1_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_gateDirection, 4U);
        _SFD_SYMBOL_SCOPE_POP();
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c1_sfEvent);
      break;

     case c1_IN_wait:
      CV_CHART_EVAL(0, 0, c1_IN_wait);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   chartInstance->c1_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c1_m_debug_family_names,
        c1_c_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_c_nargin, 0U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_c_nargout, 1U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_c_out, 2U, c1_b_sf_marshallOut,
        c1_b_sf_marshallIn);
      if (CV_EML_IF(8, 0, 0, chartInstance->c1_temporalCounter_i1 >= 10)) {
        c1_c_out = true;
      } else {
        c1_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      sf_temporal_value_range_check_min(chartInstance->S, 159U, 0.1, 0.0);
      if (c1_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c1_sfEvent);
        chartInstance->c1_tp_wait = 0U;
        chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
          c1_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
        chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
          c1_IN_goToMagacin;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c1_sfEvent);
        chartInstance->c1_tp_goToMagacin = 1U;
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c1_l_debug_family_names,
          c1_l_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_l_nargin, 0U, c1_sf_marshallOut,
          c1_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_l_nargout, 1U,
          c1_sf_marshallOut, c1_sf_marshallIn);
        *chartInstance->c1_angle =
          sSortierAlgorithmusVirtuelleTestumgebungLocalData.m_m_magacin;
        chartInstance->c1_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_angle, 2U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                     chartInstance->c1_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c1_i_debug_family_names,
          c1_j_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_j_nargin, 0U, c1_sf_marshallOut,
          c1_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_j_nargout, 1U,
          c1_sf_marshallOut, c1_sf_marshallIn);
        *chartInstance->c1_gatePWM = 0.0;
        chartInstance->c1_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_gatePWM, 3U);
        _SFD_SYMBOL_SCOPE_POP();
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c1_sfEvent);
      break;

     case c1_IN_waitForCube:
      CV_CHART_EVAL(0, 0, c1_IN_waitForCube);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c1_sfEvent);
      chartInstance->c1_tp_waitForCube = 0U;
      chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
        c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c1_sfEvent);
      chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
        c1_IN_goToZero;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c1_sfEvent);
      chartInstance->c1_tp_goToZero = 1U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c1_d_debug_family_names,
        c1_e_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_e_nargin, 0U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_e_nargout, 1U, c1_sf_marshallOut,
        c1_sf_marshallIn);
      *chartInstance->c1_angle = 0.0;
      chartInstance->c1_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c1_angle, 2U);
      *chartInstance->c1_cubeFinished = 0.0;
      chartInstance->c1_dataWrittenToVector[3U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c1_cubeFinished, 5U);
      _SFD_SYMBOL_SCOPE_POP();
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, chartInstance->c1_sfEvent);
      break;

     default:
      CV_CHART_EVAL(0, 0, 0);

      /* Unreachable state, for coverage only */
      chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung =
        c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
}

static void initSimStructsc1_SortierAlgorithmusVirtuelleTestumgebung
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber, uint32_T c1_instanceNumber)
{
  (void)(c1_machineNumber);
  (void)(c1_chartNumber);
  (void)(c1_instanceNumber);
}

static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  real_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance;
  chartInstance = (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
    chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_u = *(real_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static real_T c1_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_nargin, const char_T *c1_identifier)
{
  real_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nargin), &c1_thisId);
  sf_mex_destroy(&c1_nargin);
  return c1_y;
}

static real_T c1_b_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_y;
  real_T c1_d0;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d0, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_nargin;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance;
  chartInstance = (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
    chartInstanceVoid;
  c1_nargin = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nargin), &c1_thisId);
  sf_mex_destroy(&c1_nargin);
  *(real_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  boolean_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance;
  chartInstance = (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
    chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_u = *(boolean_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static boolean_T c1_c_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  boolean_T c1_y;
  boolean_T c1_b0;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b0, 1, 11, 0U, 0, 0U, 0);
  c1_y = c1_b0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_sf_internal_predicateOutput;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  boolean_T c1_y;
  SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance;
  chartInstance = (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
    chartInstanceVoid;
  c1_sf_internal_predicateOutput = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_sf_internal_predicateOutput), &c1_thisId);
  sf_mex_destroy(&c1_sf_internal_predicateOutput);
  *(boolean_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

const mxArray
  *sf_c1_SortierAlgorithmusVirtuelleTestumgebung_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static const mxArray *c1_sfAfterOrElapsed
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  const mxArray *c1_b;
  real_T c1_d1;
  real_T c1_d2;
  c1_b = NULL;
  c1_b = NULL;
  if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      c1_IN_wait) {
    c1_d2 = 0.01 * (real_T)chartInstance->c1_temporalCounter_i1;
    sf_mex_assign(&c1_b, sf_mex_create("unnamed temp", &c1_d2, 0, 0U, 0U, 0U, 0),
                  false);
  } else {
    c1_d1 = -1.0;
    sf_mex_assign(&c1_b, sf_mex_create("unnamed temp", &c1_d1, 0, 0U, 0U, 0U, 0),
                  false);
  }

  return c1_b;
}

static const mxArray *c1_b_sfAfterOrElapsed
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  const mxArray *c1_b;
  real_T c1_d3;
  real_T c1_d4;
  c1_b = NULL;
  c1_b = NULL;
  if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      c1_IN_waitForCube) {
    c1_d4 = 0.01 * (real_T)chartInstance->c1_temporalCounter_i1;
    sf_mex_assign(&c1_b, sf_mex_create("unnamed temp", &c1_d4, 0, 0U, 0U, 0U, 0),
                  false);
  } else {
    c1_d3 = -1.0;
    sf_mex_assign(&c1_b, sf_mex_create("unnamed temp", &c1_d3, 0, 0U, 0U, 0U, 0),
                  false);
  }

  return c1_b;
}

static const mxArray *c1_c_sfAfterOrElapsed
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  const mxArray *c1_b;
  real_T c1_d5;
  real_T c1_d6;
  c1_b = NULL;
  c1_b = NULL;
  if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      c1_IN_openGate) {
    c1_d6 = 0.01 * (real_T)chartInstance->c1_temporalCounter_i1;
    sf_mex_assign(&c1_b, sf_mex_create("unnamed temp", &c1_d6, 0, 0U, 0U, 0U, 0),
                  false);
  } else {
    c1_d5 = -1.0;
    sf_mex_assign(&c1_b, sf_mex_create("unnamed temp", &c1_d5, 0, 0U, 0U, 0U, 0),
                  false);
  }

  return c1_b;
}

static const mxArray *c1_d_sfAfterOrElapsed
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  const mxArray *c1_b;
  real_T c1_d7;
  real_T c1_d8;
  c1_b = NULL;
  c1_b = NULL;
  if (chartInstance->c1_is_c1_SortierAlgorithmusVirtuelleTestumgebung ==
      c1_IN_firstEntry) {
    c1_d8 = 0.01 * (real_T)chartInstance->c1_temporalCounter_i1;
    sf_mex_assign(&c1_b, sf_mex_create("unnamed temp", &c1_d8, 0, 0U, 0U, 0U, 0),
                  false);
  } else {
    c1_d7 = -1.0;
    sf_mex_assign(&c1_b, sf_mex_create("unnamed temp", &c1_d7, 0, 0U, 0U, 0U, 0),
                  false);
  }

  return c1_b;
}

static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  int32_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance;
  chartInstance = (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
    chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_u = *(int32_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static int32_T c1_d_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  int32_T c1_y;
  int32_T c1_i1;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_i1, 1, 6, 0U, 0, 0U, 0);
  c1_y = c1_i1;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_sfEvent;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  int32_T c1_y;
  SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance;
  chartInstance = (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
    chartInstanceVoid;
  c1_b_sfEvent = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_sfEvent),
    &c1_thisId);
  sf_mex_destroy(&c1_b_sfEvent);
  *(int32_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_d_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  uint8_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance;
  chartInstance = (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
    chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_u = *(uint8_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static uint8_T c1_e_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_b_tp_waitForCube, const char_T *c1_identifier)
{
  uint8_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_tp_waitForCube),
    &c1_thisId);
  sf_mex_destroy(&c1_b_tp_waitForCube);
  return c1_y;
}

static uint8_T c1_f_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_y;
  uint8_T c1_u0;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u0, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_u0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_tp_waitForCube;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance;
  chartInstance = (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
    chartInstanceVoid;
  c1_b_tp_waitForCube = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_tp_waitForCube),
    &c1_thisId);
  sf_mex_destroy(&c1_b_tp_waitForCube);
  *(uint8_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static uint16_T c1_g_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_b_temporalCounter_i1, const char_T *c1_identifier)
{
  uint16_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_temporalCounter_i1),
    &c1_thisId);
  sf_mex_destroy(&c1_b_temporalCounter_i1);
  return c1_y;
}

static uint16_T c1_h_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint16_T c1_y;
  uint16_T c1_u1;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u1, 1, 5, 0U, 0, 0U, 0);
  c1_y = c1_u1;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_i_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_b_dataWrittenToVector, const char_T *c1_identifier,
   boolean_T c1_y[4])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_dataWrittenToVector),
                        &c1_thisId, c1_y);
  sf_mex_destroy(&c1_b_dataWrittenToVector);
}

static void c1_j_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T c1_y[4])
{
  boolean_T c1_bv1[4];
  int32_T c1_i2;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_bv1, 1, 11, 0U, 1, 0U, 1, 4);
  for (c1_i2 = 0; c1_i2 < 4; c1_i2++) {
    c1_y[c1_i2] = c1_bv1[c1_i2];
  }

  sf_mex_destroy(&c1_u);
}

static const mxArray *c1_k_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_b_setSimStateSideEffectsInfo, const char_T *c1_identifier)
{
  const mxArray *c1_y = NULL;
  emlrtMsgIdentifier c1_thisId;
  c1_y = NULL;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  sf_mex_assign(&c1_y, c1_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_setSimStateSideEffectsInfo), &c1_thisId), false);
  sf_mex_destroy(&c1_b_setSimStateSideEffectsInfo);
  return c1_y;
}

static const mxArray *c1_l_emlrt_marshallIn
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  const mxArray *c1_y = NULL;
  (void)chartInstance;
  (void)c1_parentId;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_duplicatearraysafe(&c1_u), false);
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   int32_T c1_ssid)
{
  (void)chartInstance;
  (void)c1_ssid;
  return NULL;
}

static void c1_init_sf_message_store_memory
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray
  *sf_c1_SortierAlgorithmusVirtuelleTestumgebung_getDebuggerHoverDataFor
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance,
   uint32_T c1_b)
{
  const mxArray *c1_c = NULL;
  const mxArray *c1_m0 = NULL;
  const mxArray *c1_m1 = NULL;
  const mxArray *c1_m2 = NULL;
  const mxArray *c1_m3 = NULL;
  c1_c = NULL;
  switch (c1_b) {
   case 152U:
    sf_mex_assign(&c1_m0, c1_d_sfAfterOrElapsed(chartInstance), false);
    sfAppendHoverData(&c1_c, sf_mex_dup(c1_m0), 152U, "afterOrElapsed", 143U, -1,
                      -1);
    break;

   case 154U:
    sf_mex_assign(&c1_m1, c1_b_sfAfterOrElapsed(chartInstance), false);
    sfAppendHoverData(&c1_c, sf_mex_dup(c1_m1), 154U, "afterOrElapsed", 145U, -1,
                      -1);
    break;

   case 158U:
    sf_mex_assign(&c1_m2, c1_c_sfAfterOrElapsed(chartInstance), false);
    sfAppendHoverData(&c1_c, sf_mex_dup(c1_m2), 158U, "afterOrElapsed", 150U, -1,
                      -1);
    break;

   case 159U:
    sf_mex_assign(&c1_m3, c1_sfAfterOrElapsed(chartInstance), false);
    sfAppendHoverData(&c1_c, sf_mex_dup(c1_m3), 159U, "afterOrElapsed", 147U, -1,
                      -1);
    break;
  }

  sf_mex_destroy(&c1_m0);
  sf_mex_destroy(&c1_m1);
  sf_mex_destroy(&c1_m2);
  sf_mex_destroy(&c1_m3);
  return c1_c;
}

static void init_dsm_address_info
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance)
{
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_magacinAngle = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_angle = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_gatePWM = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_gateDirection = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c1_cubeFinished = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
}

/* SFunction Glue Code */
void sf_c1_SortierAlgorithmusVirtuelleTestumgebung_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1042554839U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(421591279U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3503003650U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(776389412U);
}

mxArray* sf_c1_SortierAlgorithmusVirtuelleTestumgebung_get_post_codegen_info
  (void);
mxArray *sf_c1_SortierAlgorithmusVirtuelleTestumgebung_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("k78HTsCfSUvmDnxt50TbgG");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c1_SortierAlgorithmusVirtuelleTestumgebung_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c1_SortierAlgorithmusVirtuelleTestumgebung_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c1_SortierAlgorithmusVirtuelleTestumgebung_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("machine_data");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_SortierAlgorithmusVirtuelleTestumgebung_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c1_SortierAlgorithmusVirtuelleTestumgebung_get_post_codegen_info
  (void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray
  *sf_get_sim_state_info_c1_SortierAlgorithmusVirtuelleTestumgebung(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[39],T\"angle\",},{M[1],M[142],T\"cubeFinished\",},{M[1],M[78],T\"gateDirection\",},{M[1],M[77],T\"gatePWM\",},{M[8],M[0],T\"is_active_c1_SortierAlgorithmusVirtuelleTestumgebung\",},{M[9],M[0],T\"is_c1_SortierAlgorithmusVirtuelleTestumgebung\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"at\",M1x4[147 145 150 143],M[1]}}},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_SortierAlgorithmusVirtuelleTestumgebung_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg
    ( (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
     chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance =
      (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _SortierAlgorithmusVirtuelleTestumgebungMachineNumber_,
           1,
           7,
           9,
           0,
           5,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation
          (_SortierAlgorithmusVirtuelleTestumgebungMachineNumber_,
           chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,
             _SortierAlgorithmusVirtuelleTestumgebungMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _SortierAlgorithmusVirtuelleTestumgebungMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(1,1,1,0,"magacinAngle");
          _SFD_SET_DATA_PROPS(2,2,0,1,"angle");
          _SFD_SET_DATA_PROPS(3,2,0,1,"gatePWM");
          _SFD_SET_DATA_PROPS(4,2,0,1,"gateDirection");
          _SFD_SET_DATA_PROPS(5,2,0,1,"cubeFinished");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_CH_SUBSTATE_COUNT(7);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
        }

        _SFD_CV_INIT_CHART(7,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(6,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(3,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(5,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(4,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(2,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(8,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(8,0,0,1,16,1,16);
        _SFD_CV_INIT_EML(3,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(3,0,0,1,15,1,15);
        _SFD_CV_INIT_EML(7,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(7,0,0,1,16,1,16);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(1,0,0,1,13,1,13);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)c1_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)c1_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)c1_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)c1_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _SortierAlgorithmusVirtuelleTestumgebungMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance =
      (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c1_magacinAngle);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c1_angle);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c1_gatePWM);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c1_gateDirection);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c1_cubeFinished);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "smedsLJ90aBH2LosJB5q80E";
}

static void sf_opaque_initialize_c1_SortierAlgorithmusVirtuelleTestumgebung(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c1_SortierAlgorithmusVirtuelleTestumgebung
    ((SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct*)
     chartInstanceVar);
  initialize_c1_SortierAlgorithmusVirtuelleTestumgebung
    ((SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c1_SortierAlgorithmusVirtuelleTestumgebung(void
  *chartInstanceVar)
{
  enable_c1_SortierAlgorithmusVirtuelleTestumgebung
    ((SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c1_SortierAlgorithmusVirtuelleTestumgebung(void
  *chartInstanceVar)
{
  disable_c1_SortierAlgorithmusVirtuelleTestumgebung
    ((SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c1_SortierAlgorithmusVirtuelleTestumgebung(void
  *chartInstanceVar)
{
  sf_gateway_c1_SortierAlgorithmusVirtuelleTestumgebung
    ((SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct*)
     chartInstanceVar);
}

static const mxArray*
  sf_opaque_get_sim_state_c1_SortierAlgorithmusVirtuelleTestumgebung(SimStruct*
  S)
{
  return get_sim_state_c1_SortierAlgorithmusVirtuelleTestumgebung
    ((SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SimStruct* S, const mxArray *st)
{
  set_sim_state_c1_SortierAlgorithmusVirtuelleTestumgebung
    ((SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct*)
     sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c1_SortierAlgorithmusVirtuelleTestumgebung(void *
  chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_SortierAlgorithmusVirtuelleTestumgebung_optimization_info();
    }

    finalize_c1_SortierAlgorithmusVirtuelleTestumgebung
      ((SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct*)
       chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_SortierAlgorithmusVirtuelleTestumgebung
    ((SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_SortierAlgorithmusVirtuelleTestumgebung
      ((SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c1_SortierAlgorithmusVirtuelleTestumgebung
  (SimStruct *S)
{
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  ssSetModelReferenceSampleTimeDisallowInheritance(S);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_SortierAlgorithmusVirtuelleTestumgebung_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetSupportedForRowMajorCodeGen(S, 1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,1,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 1);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,1);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,1,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,1,4);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=4; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,1);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(439750093U));
  ssSetChecksum1(S,(2099231572U));
  ssSetChecksum2(S,(2614121448U));
  ssSetChecksum3(S,(1725839990U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,0);
}

static void mdlRTW_c1_SortierAlgorithmusVirtuelleTestumgebung(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c1_SortierAlgorithmusVirtuelleTestumgebung(SimStruct *S)
{
  SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *chartInstance;
  chartInstance = (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct *)
    utMalloc(sizeof(SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc1_SortierAlgorithmusVirtuelleTestumgebungInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_SortierAlgorithmusVirtuelleTestumgebung;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_SortierAlgorithmusVirtuelleTestumgebung;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c1_SortierAlgorithmusVirtuelleTestumgebung;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c1_SortierAlgorithmusVirtuelleTestumgebung;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_SortierAlgorithmusVirtuelleTestumgebung;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_SortierAlgorithmusVirtuelleTestumgebung;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_SortierAlgorithmusVirtuelleTestumgebung;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_SortierAlgorithmusVirtuelleTestumgebung;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c1_SortierAlgorithmusVirtuelleTestumgebung;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c1_SortierAlgorithmusVirtuelleTestumgebung;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_SortierAlgorithmusVirtuelleTestumgebung;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0, NULL, NULL);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c1_SortierAlgorithmusVirtuelleTestumgebung(chartInstance);
}

void c1_SortierAlgorithmusVirtuelleTestumgebung_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_SortierAlgorithmusVirtuelleTestumgebung(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_SortierAlgorithmusVirtuelleTestumgebung(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_SortierAlgorithmusVirtuelleTestumgebung(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_SortierAlgorithmusVirtuelleTestumgebung_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
