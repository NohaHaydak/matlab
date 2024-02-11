/*
 * File: calc.c
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

#include "calc.h"
#include "calc_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_calc_T calc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_calc_T calc_Y;

/* Real-time model */
static RT_MODEL_calc_T calc_M_;
RT_MODEL_calc_T *const calc_M = &calc_M_;

/* Model step function */
void calc_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Product'
   */
  calc_Y.Output = calc_U.Input * calc_U.Input1;

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Divide'
   */
  calc_Y.Output1 = calc_U.Input / calc_U.Input1;

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Add'
   */
  calc_Y.Output2 = calc_U.Input + calc_U.Input1;

  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Subtract'
   */
  calc_Y.Output3 = calc_U.Input - calc_U.Input1;

  /* Outport: '<Root>/Output4' incorporates:
   *  Inport: '<Root>/Input2'
   *  UnaryMinus: '<Root>/Unary Minus'
   */
  calc_Y.Output4 = -calc_U.Input2;

  /* Outport: '<Root>/Output5' incorporates:
   *  Constant: '<S2>/FixPt Constant'
   *  Inport: '<Root>/Input2'
   *  Sum: '<S2>/FixPt Sum1'
   */
  calc_Y.Output5 = calc_U.Input2 + 1.0;

  /* Outport: '<Root>/Output6' incorporates:
   *  Constant: '<S1>/FixPt Constant'
   *  Inport: '<Root>/Input2'
   *  Sum: '<S1>/FixPt Sum1'
   */
  calc_Y.Output6 = calc_U.Input2 - 1.0;
}

/* Model initialize function */
void calc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(calc_M, (NULL));

  /* external inputs */
  (void)memset(&calc_U, 0, sizeof(ExtU_calc_T));

  /* external outputs */
  (void) memset((void *)&calc_Y, 0,
                sizeof(ExtY_calc_T));
}

/* Model terminate function */
void calc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
