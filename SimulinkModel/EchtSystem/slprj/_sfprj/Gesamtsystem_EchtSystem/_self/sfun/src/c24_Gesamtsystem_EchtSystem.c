/* Include files */

#include "Gesamtsystem_EchtSystem_sfun.h"
#include "c24_Gesamtsystem_EchtSystem.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Gesamtsystem_EchtSystem_sfun_debug_macros.h"
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

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c24_debug_family_names[2] = { "nargin", "nargout" };

/* Function Declarations */
static void initialize_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance);
static void initialize_params_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance);
static void enable_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance);
static void disable_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance);
static void c24_update_debugger_state_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance);
static void set_sim_state_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance, const mxArray
   *c24_st);
static void finalize_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance);
static void sf_gateway_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance);
static void mdl_start_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance);
static void initSimStructsc24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c24_machineNumber, uint32_T
  c24_chartNumber, uint32_T c24_instanceNumber);
static const mxArray *c24_sf_marshallOut(void *chartInstanceVoid, void
  *c24_inData);
static real_T c24_emlrt_marshallIn(SFc24_Gesamtsystem_EchtSystemInstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId);
static void c24_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c24_mxArrayInData, const char_T *c24_varName, void *c24_outData);
static const mxArray *c24_b_sf_marshallOut(void *chartInstanceVoid, void
  *c24_inData);
static int32_T c24_b_emlrt_marshallIn
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance, const mxArray
   *c24_u, const emlrtMsgIdentifier *c24_parentId);
static void c24_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c24_mxArrayInData, const char_T *c24_varName, void *c24_outData);
static uint8_T c24_c_emlrt_marshallIn
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance, const mxArray
   *c24_b_is_active_c24_Gesamtsystem_EchtSystem, const char_T *c24_identifier);
static uint8_T c24_d_emlrt_marshallIn
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance, const mxArray
   *c24_u, const emlrtMsgIdentifier *c24_parentId);
static void init_dsm_address_info(SFc24_Gesamtsystem_EchtSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc24_Gesamtsystem_EchtSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc24_Gesamtsystem_EchtSystem(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  sim_mode_is_external(chartInstance->S);
  chartInstance->c24_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c24_is_active_c24_Gesamtsystem_EchtSystem = 0U;
  setLegacyDebuggerFlagForRuntime(chartInstance->S, true);
}

static void initialize_params_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c24_update_debugger_state_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance)
{
  const mxArray *c24_st;
  const mxArray *c24_y = NULL;
  uint8_T c24_hoistedGlobal;
  const mxArray *c24_b_y = NULL;
  c24_st = NULL;
  c24_st = NULL;
  c24_y = NULL;
  sf_mex_assign(&c24_y, sf_mex_createcellmatrix(1, 1), false);
  c24_hoistedGlobal = chartInstance->c24_is_active_c24_Gesamtsystem_EchtSystem;
  c24_b_y = NULL;
  sf_mex_assign(&c24_b_y, sf_mex_create("y", &c24_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c24_y, 0, c24_b_y);
  sf_mex_assign(&c24_st, c24_y, false);
  return c24_st;
}

static void set_sim_state_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance, const mxArray
   *c24_st)
{
  const mxArray *c24_u;
  chartInstance->c24_doneDoubleBufferReInit = true;
  c24_u = sf_mex_dup(c24_st);
  chartInstance->c24_is_active_c24_Gesamtsystem_EchtSystem =
    c24_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c24_u, 0)),
    "is_active_c24_Gesamtsystem_EchtSystem");
  sf_mex_destroy(&c24_u);
  c24_update_debugger_state_c24_Gesamtsystem_EchtSystem(chartInstance);
  sf_mex_destroy(&c24_st);
}

static void finalize_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c24_RuntimeVar);
}

static void sf_gateway_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance)
{
  uint32_T c24_debug_family_var_map[2];
  real_T c24_nargin = 0.0;
  real_T c24_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 23, chartInstance->c24_sfEvent);
  chartInstance->c24_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 23U, chartInstance->c24_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c24_debug_family_names,
    c24_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c24_nargin, 0U, c24_sf_marshallOut,
    c24_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c24_nargout, 1U, c24_sf_marshallOut,
    c24_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c24_sfEvent, 4);
  init_i2c();
  _SFD_EML_CALL(0U, chartInstance->c24_sfEvent, -4);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 23U, chartInstance->c24_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
}

static void mdl_start_c24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance)
{
  chartInstance->c24_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
}

static void initSimStructsc24_Gesamtsystem_EchtSystem
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c24_machineNumber, uint32_T
  c24_chartNumber, uint32_T c24_instanceNumber)
{
  (void)(c24_machineNumber);
  (void)(c24_chartNumber);
  (void)(c24_instanceNumber);
}

static const mxArray *c24_sf_marshallOut(void *chartInstanceVoid, void
  *c24_inData)
{
  const mxArray *c24_mxArrayOutData;
  real_T c24_u;
  const mxArray *c24_y = NULL;
  SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance;
  chartInstance = (SFc24_Gesamtsystem_EchtSystemInstanceStruct *)
    chartInstanceVoid;
  c24_mxArrayOutData = NULL;
  c24_mxArrayOutData = NULL;
  c24_u = *(real_T *)c24_inData;
  c24_y = NULL;
  sf_mex_assign(&c24_y, sf_mex_create("y", &c24_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c24_mxArrayOutData, c24_y, false);
  return c24_mxArrayOutData;
}

static real_T c24_emlrt_marshallIn(SFc24_Gesamtsystem_EchtSystemInstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId)
{
  real_T c24_y;
  real_T c24_d0;
  (void)chartInstance;
  sf_mex_import(c24_parentId, sf_mex_dup(c24_u), &c24_d0, 1, 0, 0U, 0, 0U, 0);
  c24_y = c24_d0;
  sf_mex_destroy(&c24_u);
  return c24_y;
}

static void c24_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c24_mxArrayInData, const char_T *c24_varName, void *c24_outData)
{
  const mxArray *c24_nargin;
  const char_T *c24_identifier;
  emlrtMsgIdentifier c24_thisId;
  real_T c24_y;
  SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance;
  chartInstance = (SFc24_Gesamtsystem_EchtSystemInstanceStruct *)
    chartInstanceVoid;
  c24_nargin = sf_mex_dup(c24_mxArrayInData);
  c24_identifier = c24_varName;
  c24_thisId.fIdentifier = (const char *)c24_identifier;
  c24_thisId.fParent = NULL;
  c24_thisId.bParentIsCell = false;
  c24_y = c24_emlrt_marshallIn(chartInstance, sf_mex_dup(c24_nargin),
    &c24_thisId);
  sf_mex_destroy(&c24_nargin);
  *(real_T *)c24_outData = c24_y;
  sf_mex_destroy(&c24_mxArrayInData);
}

const mxArray *sf_c24_Gesamtsystem_EchtSystem_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c24_nameCaptureInfo = NULL;
  c24_nameCaptureInfo = NULL;
  sf_mex_assign(&c24_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c24_nameCaptureInfo;
}

static const mxArray *c24_b_sf_marshallOut(void *chartInstanceVoid, void
  *c24_inData)
{
  const mxArray *c24_mxArrayOutData;
  int32_T c24_u;
  const mxArray *c24_y = NULL;
  SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance;
  chartInstance = (SFc24_Gesamtsystem_EchtSystemInstanceStruct *)
    chartInstanceVoid;
  c24_mxArrayOutData = NULL;
  c24_mxArrayOutData = NULL;
  c24_u = *(int32_T *)c24_inData;
  c24_y = NULL;
  sf_mex_assign(&c24_y, sf_mex_create("y", &c24_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c24_mxArrayOutData, c24_y, false);
  return c24_mxArrayOutData;
}

static int32_T c24_b_emlrt_marshallIn
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance, const mxArray
   *c24_u, const emlrtMsgIdentifier *c24_parentId)
{
  int32_T c24_y;
  int32_T c24_i0;
  (void)chartInstance;
  sf_mex_import(c24_parentId, sf_mex_dup(c24_u), &c24_i0, 1, 6, 0U, 0, 0U, 0);
  c24_y = c24_i0;
  sf_mex_destroy(&c24_u);
  return c24_y;
}

static void c24_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c24_mxArrayInData, const char_T *c24_varName, void *c24_outData)
{
  const mxArray *c24_b_sfEvent;
  const char_T *c24_identifier;
  emlrtMsgIdentifier c24_thisId;
  int32_T c24_y;
  SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance;
  chartInstance = (SFc24_Gesamtsystem_EchtSystemInstanceStruct *)
    chartInstanceVoid;
  c24_b_sfEvent = sf_mex_dup(c24_mxArrayInData);
  c24_identifier = c24_varName;
  c24_thisId.fIdentifier = (const char *)c24_identifier;
  c24_thisId.fParent = NULL;
  c24_thisId.bParentIsCell = false;
  c24_y = c24_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c24_b_sfEvent),
    &c24_thisId);
  sf_mex_destroy(&c24_b_sfEvent);
  *(int32_T *)c24_outData = c24_y;
  sf_mex_destroy(&c24_mxArrayInData);
}

static uint8_T c24_c_emlrt_marshallIn
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance, const mxArray
   *c24_b_is_active_c24_Gesamtsystem_EchtSystem, const char_T *c24_identifier)
{
  uint8_T c24_y;
  emlrtMsgIdentifier c24_thisId;
  c24_thisId.fIdentifier = (const char *)c24_identifier;
  c24_thisId.fParent = NULL;
  c24_thisId.bParentIsCell = false;
  c24_y = c24_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c24_b_is_active_c24_Gesamtsystem_EchtSystem), &c24_thisId);
  sf_mex_destroy(&c24_b_is_active_c24_Gesamtsystem_EchtSystem);
  return c24_y;
}

static uint8_T c24_d_emlrt_marshallIn
  (SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance, const mxArray
   *c24_u, const emlrtMsgIdentifier *c24_parentId)
{
  uint8_T c24_y;
  uint8_T c24_u0;
  (void)chartInstance;
  sf_mex_import(c24_parentId, sf_mex_dup(c24_u), &c24_u0, 1, 3, 0U, 0, 0U, 0);
  c24_y = c24_u0;
  sf_mex_destroy(&c24_u);
  return c24_y;
}

static void init_dsm_address_info(SFc24_Gesamtsystem_EchtSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc24_Gesamtsystem_EchtSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c24_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
}

/* SFunction Glue Code */
void sf_c24_Gesamtsystem_EchtSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(886613005U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1403547630U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2013436595U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2984125165U);
}

mxArray* sf_c24_Gesamtsystem_EchtSystem_get_post_codegen_info(void);
mxArray *sf_c24_Gesamtsystem_EchtSystem_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("UTmAWwe36hfM8NuMXa48qH");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c24_Gesamtsystem_EchtSystem_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c24_Gesamtsystem_EchtSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c24_Gesamtsystem_EchtSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("init_i2c");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c24_Gesamtsystem_EchtSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c24_Gesamtsystem_EchtSystem_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c24_Gesamtsystem_EchtSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S'type','srcId','name','auxInfo'{{M[8],M[0],T\"is_active_c24_Gesamtsystem_EchtSystem\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 1, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c24_Gesamtsystem_EchtSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance =
      (SFc24_Gesamtsystem_EchtSystemInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _Gesamtsystem_EchtSystemMachineNumber_,
           24,
           1,
           1,
           0,
           0,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_Gesamtsystem_EchtSystemMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_Gesamtsystem_EchtSystemMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _Gesamtsystem_EchtSystemMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,52);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _Gesamtsystem_EchtSystemMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance =
      (SFc24_Gesamtsystem_EchtSystemInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        (void)chartInstance;
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sbKOmuURYiBPbHHYAjKxibB";
}

static void sf_opaque_initialize_c24_Gesamtsystem_EchtSystem(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc24_Gesamtsystem_EchtSystemInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c24_Gesamtsystem_EchtSystem
    ((SFc24_Gesamtsystem_EchtSystemInstanceStruct*) chartInstanceVar);
  initialize_c24_Gesamtsystem_EchtSystem
    ((SFc24_Gesamtsystem_EchtSystemInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c24_Gesamtsystem_EchtSystem(void *chartInstanceVar)
{
  enable_c24_Gesamtsystem_EchtSystem
    ((SFc24_Gesamtsystem_EchtSystemInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c24_Gesamtsystem_EchtSystem(void *chartInstanceVar)
{
  disable_c24_Gesamtsystem_EchtSystem
    ((SFc24_Gesamtsystem_EchtSystemInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c24_Gesamtsystem_EchtSystem(void *chartInstanceVar)
{
  sf_gateway_c24_Gesamtsystem_EchtSystem
    ((SFc24_Gesamtsystem_EchtSystemInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c24_Gesamtsystem_EchtSystem
  (SimStruct* S)
{
  return get_sim_state_c24_Gesamtsystem_EchtSystem
    ((SFc24_Gesamtsystem_EchtSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c24_Gesamtsystem_EchtSystem(SimStruct* S,
  const mxArray *st)
{
  set_sim_state_c24_Gesamtsystem_EchtSystem
    ((SFc24_Gesamtsystem_EchtSystemInstanceStruct*)sf_get_chart_instance_ptr(S),
     st);
}

static void sf_opaque_terminate_c24_Gesamtsystem_EchtSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc24_Gesamtsystem_EchtSystemInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_Gesamtsystem_EchtSystem_optimization_info();
    }

    finalize_c24_Gesamtsystem_EchtSystem
      ((SFc24_Gesamtsystem_EchtSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc24_Gesamtsystem_EchtSystem
    ((SFc24_Gesamtsystem_EchtSystemInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c24_Gesamtsystem_EchtSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c24_Gesamtsystem_EchtSystem
      ((SFc24_Gesamtsystem_EchtSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c24_Gesamtsystem_EchtSystem(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_Gesamtsystem_EchtSystem_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      24);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetSupportedForRowMajorCodeGen(S, 1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,24,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 24);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,24);
    if (chartIsInlinable) {
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=0; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,24);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(4170565104U));
  ssSetChecksum1(S,(2271121833U));
  ssSetChecksum2(S,(472443140U));
  ssSetChecksum3(S,(4219345040U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c24_Gesamtsystem_EchtSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c24_Gesamtsystem_EchtSystem(SimStruct *S)
{
  SFc24_Gesamtsystem_EchtSystemInstanceStruct *chartInstance;
  chartInstance = (SFc24_Gesamtsystem_EchtSystemInstanceStruct *)utMalloc(sizeof
    (SFc24_Gesamtsystem_EchtSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc24_Gesamtsystem_EchtSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c24_Gesamtsystem_EchtSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c24_Gesamtsystem_EchtSystem;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c24_Gesamtsystem_EchtSystem;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c24_Gesamtsystem_EchtSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c24_Gesamtsystem_EchtSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c24_Gesamtsystem_EchtSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c24_Gesamtsystem_EchtSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c24_Gesamtsystem_EchtSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c24_Gesamtsystem_EchtSystem;
  chartInstance->chartInfo.mdlStart = mdlStart_c24_Gesamtsystem_EchtSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c24_Gesamtsystem_EchtSystem;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
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
  mdl_start_c24_Gesamtsystem_EchtSystem(chartInstance);
}

void c24_Gesamtsystem_EchtSystem_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c24_Gesamtsystem_EchtSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c24_Gesamtsystem_EchtSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c24_Gesamtsystem_EchtSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c24_Gesamtsystem_EchtSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
