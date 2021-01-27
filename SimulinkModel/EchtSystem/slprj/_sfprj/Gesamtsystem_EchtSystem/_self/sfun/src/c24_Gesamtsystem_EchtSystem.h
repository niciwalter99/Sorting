#ifndef __c24_Gesamtsystem_EchtSystem_h__
#define __c24_Gesamtsystem_EchtSystem_h__

/* Type Definitions */
#ifndef typedef_SFc24_Gesamtsystem_EchtSystemInstanceStruct
#define typedef_SFc24_Gesamtsystem_EchtSystemInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c24_sfEvent;
  boolean_T c24_doneDoubleBufferReInit;
  uint8_T c24_is_active_c24_Gesamtsystem_EchtSystem;
  void *c24_RuntimeVar;
  uint32_T c24_mlFcnLineNumber;
  void *c24_fEmlrtCtx;
} SFc24_Gesamtsystem_EchtSystemInstanceStruct;

#endif                                 /*typedef_SFc24_Gesamtsystem_EchtSystemInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c24_Gesamtsystem_EchtSystem_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c24_Gesamtsystem_EchtSystem_get_check_sum(mxArray *plhs[]);
extern void c24_Gesamtsystem_EchtSystem_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
