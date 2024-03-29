/*
 * File: calc.h
 *
 * Code generated for Simulink model 'calc'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 23:15:42 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_calc_h_
#define RTW_HEADER_calc_h_
#include <string.h>
#include <stddef.h>
#ifndef calc_COMMON_INCLUDES_
#define calc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* calc_COMMON_INCLUDES_ */

#include "calc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
  real_T Input1;                       /* '<Root>/Input1' */
  real_T Input2;                       /* '<Root>/Input2' */
} ExtU_calc_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
  real_T Output1;                      /* '<Root>/Output1' */
  real_T Output2;                      /* '<Root>/Output2' */
  real_T Output3;                      /* '<Root>/Output3' */
  real_T Output4;                      /* '<Root>/Output4' */
  real_T Output5;                      /* '<Root>/Output5' */
  real_T Output6;                      /* '<Root>/Output6' */
} ExtY_calc_T;

/* Real-time Model Data Structure */
struct tag_RTM_calc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_calc_T calc_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_calc_T calc_Y;

/* Model entry point functions */
extern void calc_initialize(void);
extern void calc_step(void);
extern void calc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_calc_T *const calc_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S2>/FixPt Data Type Duplicate' : Unused code path elimination
 */

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
 * '<Root>' : 'calc'
 * '<S1>'   : 'calc/Decrement Real World'
 * '<S2>'   : 'calc/Increment Real World'
 */
#endif                                 /* RTW_HEADER_calc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
