#ifndef __c21_Gesamtsystem_EchtSystem_h__
#define __c21_Gesamtsystem_EchtSystem_h__

/* Type Definitions */
#ifndef typedef_SFc21_Gesamtsystem_EchtSystemInstanceStruct
#define typedef_SFc21_Gesamtsystem_EchtSystemInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c21_sfEvent;
  boolean_T c21_doneDoubleBufferReInit;
  uint8_T c21_is_active_c21_Gesamtsystem_EchtSystem;
  void *c21_RuntimeVar;
  uint32_T c21_mlFcnLineNumber;
  void *c21_fEmlrtCtx;
} SFc21_Gesamtsystem_EchtSystemInstanceStruct;

#endif                                 /*typedef_SFc21_Gesamtsystem_EchtSystemInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c21_Gesamtsystem_EchtSystem_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c21_Gesamtsystem_EchtSystem_get_check_sum(mxArray *plhs[]);
extern void c21_Gesamtsystem_EchtSystem_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
