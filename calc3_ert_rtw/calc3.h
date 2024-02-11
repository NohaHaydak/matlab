/*
 * File: calc3.h
 *
 * Code generated for Simulink model 'calc3'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 01:07:43 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_calc3_h_
#define RTW_HEADER_calc3_h_
#include <string.h>
#include <stddef.h>
#ifndef calc3_COMMON_INCLUDES_
#define calc3_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* calc3_COMMON_INCLUDES_ */

#include "calc3_types.h"

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
  B_Subsystem_calc3_T Subsystem;       /* '<Root>/Subsystem' */
} B_calc3_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T Input;                     /* '<Root>/Input' */
  boolean_T Input1;                    /* '<Root>/Input1' */
} ExtU_calc3_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T Output;                    /* '<Root>/Output' */
  boolean_T Output1;                   /* '<Root>/Output1' */
  boolean_T Output2;                   /* '<Root>/Output2' */
  boolean_T Output3;                   /* '<Root>/Output3' */
  boolean_T Output4;                   /* '<Root>/Output4' */
  boolean_T Output5;                   /* '<Root>/Output5' */
} ExtY_calc3_T;

/* Real-time Model Data Structure */
struct tag_RTM_calc3_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_calc3_T calc3_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_calc3_T calc3_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_calc3_T calc3_Y;

/* Model entry point functions */
extern void calc3_initialize(void);
extern void calc3_step(void);
extern void calc3_terminate(void);

/* Real-time Model object */
extern RT_MODEL_calc3_T *const calc3_M;

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
 * '<Root>' : 'calc3'
 * '<S1>'   : 'calc3/Subsystem'
 */
#endif                                 /* RTW_HEADER_calc3_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
