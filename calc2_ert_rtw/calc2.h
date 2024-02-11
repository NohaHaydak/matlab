/*
 * File: calc2.h
 *
 * Code generated for Simulink model 'calc2'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 00:02:12 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_calc2_h_
#define RTW_HEADER_calc2_h_
#include <stddef.h>
#include <string.h>
#ifndef calc2_COMMON_INCLUDES_
#define calc2_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* calc2_COMMON_INCLUDES_ */

#include "calc2_types.h"

/* Child system includes */
#include "Subsystem.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  B_Subsystem_calc2_T Subsystem;       /* '<Root>/Subsystem' */
} B_calc2_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_calc2_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
  real_T Output1;                      /* '<Root>/Output1' */
  real_T Output2;                      /* '<Root>/Output2' */
  real_T Output3;                      /* '<Root>/Output3' */
} ExtY_calc2_T;

/* Real-time Model Data Structure */
struct tag_RTM_calc2_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_calc2_T calc2_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_calc2_T calc2_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_calc2_T calc2_Y;

/* Model entry point functions */
extern void calc2_initialize(void);
extern void calc2_step(void);
extern void calc2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_calc2_T *const calc2_M;

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
 * '<Root>' : 'calc2'
 * '<S1>'   : 'calc2/Subsystem'
 * '<S2>'   : 'calc2/Subsystem/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_calc2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
