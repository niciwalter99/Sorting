/* Include files */

#include "Gesamtsystem_EchtSystem_sfun.h"
#include "Gesamtsystem_EchtSystem_sfun_debug_macros.h"
#include "c21_Gesamtsystem_EchtSystem.h"
#include "c24_Gesamtsystem_EchtSystem.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _Gesamtsystem_EchtSystemMachineNumber_;
SFGesamtsystem_EchtSystemLocalData sGesamtsystem_EchtSystemLocalData;

/* Function Declarations */

/* Function Definitions */
void Gesamtsystem_EchtSystem_initializer(void)
{
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_Gesamtsystem_EchtSystemMachineNumber_, 1U,
    &sGesamtsystem_EchtSystemLocalData.m_m_magacin);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_Gesamtsystem_EchtSystemMachineNumber_, 0U,
    &sGesamtsystem_EchtSystemLocalData.m_m_A);
  sGesamtsystem_EchtSystemLocalData.m_m_magacin = 0.0;
  sGesamtsystem_EchtSystemLocalData.m_m_A = 0.0;
}

void Gesamtsystem_EchtSystem_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_Gesamtsystem_EchtSystem_method_dispatcher(SimStruct
  *simstructPtr, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (chartFileNumber==21) {
    c21_Gesamtsystem_EchtSystem_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==24) {
    c24_Gesamtsystem_EchtSystem_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_Gesamtsystem_EchtSystem_process_check_sum_call( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2593522062U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3730537446U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2051743721U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3657431267U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 21:
        {
          extern void sf_c21_Gesamtsystem_EchtSystem_get_check_sum(mxArray *
            plhs[]);
          sf_c21_Gesamtsystem_EchtSystem_get_check_sum(plhs);
          break;
        }

       case 24:
        {
          extern void sf_c24_Gesamtsystem_EchtSystem_get_check_sum(mxArray *
            plhs[]);
          sf_c24_Gesamtsystem_EchtSystem_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3344352805U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1593769324U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2436729814U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(767574393U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3062358721U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1379656656U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(830484239U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2610364074U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Gesamtsystem_EchtSystem_autoinheritance_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 21:
      {
        if (strcmp(aiChksum, "AILHx2JyUZQ0EQqZLbbxFB") == 0) {
          extern mxArray
            *sf_c21_Gesamtsystem_EchtSystem_get_autoinheritance_info(void);
          plhs[0] = sf_c21_Gesamtsystem_EchtSystem_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 24:
      {
        if (strcmp(aiChksum, "UTmAWwe36hfM8NuMXa48qH") == 0) {
          extern mxArray
            *sf_c24_Gesamtsystem_EchtSystem_get_autoinheritance_info(void);
          plhs[0] = sf_c24_Gesamtsystem_EchtSystem_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Gesamtsystem_EchtSystem_get_eml_resolved_functions_info( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  char instanceChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    mxGetString(prhs[2], instanceChksum,sizeof(instanceChksum)/sizeof(char));
    instanceChksum[(sizeof(instanceChksum)/sizeof(char)-1)] = '\0';
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 21:
      {
        if (strcmp(instanceChksum, "sbtgRk2J9z74IYYQi31ZEEG") == 0) {
          extern const mxArray
            *sf_c21_Gesamtsystem_EchtSystem_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c21_Gesamtsystem_EchtSystem_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 24:
      {
        if (strcmp(instanceChksum, "sbKOmuURYiBPbHHYAjKxibB") == 0) {
          extern const mxArray
            *sf_c24_Gesamtsystem_EchtSystem_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c24_Gesamtsystem_EchtSystem_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Gesamtsystem_EchtSystem_third_party_uses_info( int nlhs, mxArray
  * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 21:
      {
        if (strcmp(tpChksum, "sbtgRk2J9z74IYYQi31ZEEG") == 0) {
          extern mxArray *sf_c21_Gesamtsystem_EchtSystem_third_party_uses_info
            (void);
          plhs[0] = sf_c21_Gesamtsystem_EchtSystem_third_party_uses_info();
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sbKOmuURYiBPbHHYAjKxibB") == 0) {
          extern mxArray *sf_c24_Gesamtsystem_EchtSystem_third_party_uses_info
            (void);
          plhs[0] = sf_c24_Gesamtsystem_EchtSystem_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_Gesamtsystem_EchtSystem_jit_fallback_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 21:
      {
        if (strcmp(tpChksum, "sbtgRk2J9z74IYYQi31ZEEG") == 0) {
          extern mxArray *sf_c21_Gesamtsystem_EchtSystem_jit_fallback_info(void);
          plhs[0] = sf_c21_Gesamtsystem_EchtSystem_jit_fallback_info();
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sbKOmuURYiBPbHHYAjKxibB") == 0) {
          extern mxArray *sf_c24_Gesamtsystem_EchtSystem_jit_fallback_info(void);
          plhs[0] = sf_c24_Gesamtsystem_EchtSystem_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_Gesamtsystem_EchtSystem_updateBuildInfo_args_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 21:
      {
        if (strcmp(tpChksum, "sbtgRk2J9z74IYYQi31ZEEG") == 0) {
          extern mxArray
            *sf_c21_Gesamtsystem_EchtSystem_updateBuildInfo_args_info(void);
          plhs[0] = sf_c21_Gesamtsystem_EchtSystem_updateBuildInfo_args_info();
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sbKOmuURYiBPbHHYAjKxibB") == 0) {
          extern mxArray
            *sf_c24_Gesamtsystem_EchtSystem_updateBuildInfo_args_info(void);
          plhs[0] = sf_c24_Gesamtsystem_EchtSystem_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void Gesamtsystem_EchtSystem_debug_initialize(struct SfDebugInstanceStruct*
  debugInstance)
{
  _Gesamtsystem_EchtSystemMachineNumber_ = sf_debug_initialize_machine
    (debugInstance,"Gesamtsystem_EchtSystem","sfun",0,24,2,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,
    _Gesamtsystem_EchtSystemMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,
    _Gesamtsystem_EchtSystemMachineNumber_,2);
  sf_debug_set_machine_data_scope(debugInstance,
    _Gesamtsystem_EchtSystemMachineNumber_,0,0);
  sf_debug_set_machine_data_name(debugInstance,
    _Gesamtsystem_EchtSystemMachineNumber_,0,"A");
  sf_debug_set_machine_data_type(debugInstance,
    _Gesamtsystem_EchtSystemMachineNumber_,0,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _Gesamtsystem_EchtSystemMachineNumber_,0,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _Gesamtsystem_EchtSystemMachineNumber_,0,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _Gesamtsystem_EchtSystemMachineNumber_,1,0);
  sf_debug_set_machine_data_name(debugInstance,
    _Gesamtsystem_EchtSystemMachineNumber_,1,"magacin");
  sf_debug_set_machine_data_type(debugInstance,
    _Gesamtsystem_EchtSystemMachineNumber_,1,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _Gesamtsystem_EchtSystemMachineNumber_,1,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _Gesamtsystem_EchtSystemMachineNumber_,1,NULL);
}

void Gesamtsystem_EchtSystem_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
typedef struct SfOptimizationInfoFlagsTag {
  boolean_T isRtwGen;
  boolean_T isModelRef;
  boolean_T isExternal;
} SfOptimizationInfoFlags;

static SfOptimizationInfoFlags sOptimizationInfoFlags;
void unload_Gesamtsystem_EchtSystem_optimization_info(void);
mxArray* load_Gesamtsystem_EchtSystem_optimization_info(boolean_T isRtwGen,
  boolean_T isModelRef, boolean_T isExternal)
{
  if (sOptimizationInfoFlags.isRtwGen != isRtwGen ||
      sOptimizationInfoFlags.isModelRef != isModelRef ||
      sOptimizationInfoFlags.isExternal != isExternal) {
    unload_Gesamtsystem_EchtSystem_optimization_info();
  }

  sOptimizationInfoFlags.isRtwGen = isRtwGen;
  sOptimizationInfoFlags.isModelRef = isModelRef;
  sOptimizationInfoFlags.isExternal = isExternal;
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "Gesamtsystem_EchtSystem", "Gesamtsystem_EchtSystem");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_Gesamtsystem_EchtSystem_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
