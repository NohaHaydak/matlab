/*
 * File: oddOReven.h
 *
 * Code generated for Simulink model 'oddOReven'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 30 23:44:40 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_oddOReven_h_
#define RTW_HEADER_oddOReven_h_
#include <string.h>
#include <stddef.h>
#ifndef oddOReven_COMMON_INCLUDES_
#define oddOReven_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* oddOReven_COMMON_INCLUDES_ */

#include "oddOReven_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant2_String
   * Referenced by: '<S1>/String Constant2'
   */
  char_T StringConstant2_String[256];

  /* Computed Parameter: StringConstant1_String
   * Referenced by: '<S2>/String Constant1'
   */
  char_T StringConstant1_String[256];
} ConstP_oddOReven_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Input;                       /* '<Root>/Input' */
} ExtU_oddOReven_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Output1[256];                 /* '<Root>/Output1' */
} ExtY_oddOReven_T;

/* Real-time Model Data Structure */
struct tag_RTM_oddOReven_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_oddOReven_T oddOReven_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_oddOReven_T oddOReven_Y;

/* Constant parameters (default storage) */
extern const ConstP_oddOReven_T oddOReven_ConstP;

/* Model entry point functions */
extern void oddOReven_initialize(void);
extern void oddOReven_step(void);
extern void oddOReven_terminate(void);

/* Real-time Model object */
extern RT_MODEL_oddOReven_T *const oddOReven_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'oddOReven'
 * '<S1>'   : 'oddOReven/If Action Subsystem'
 * '<S2>'   : 'oddOReven/If Action Subsystem1'
 * '<S3>'   : 'oddOReven/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_oddOReven_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
