/*
 * File: calc2.c
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

#include "calc2.h"
#include "calc2_private.h"

/* Block signals (default storage) */
B_calc2_T calc2_B;

/* External inputs (root inport signals with default storage) */
ExtU_calc2_T calc2_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_calc2_T calc2_Y;

/* Real-time model */
static RT_MODEL_calc2_T calc2_M_;
RT_MODEL_calc2_T *const calc2_M = &calc2_M_;

/* Model step function */
void calc2_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */

  /* Inport: '<Root>/Input' */
  calc2_Subsystem(calc2_U.Input, &calc2_B.Subsystem);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* Outport: '<Root>/Output' */
  calc2_Y.Output = calc2_B.Subsystem.Min1;

  /* Outport: '<Root>/Output1' */
  calc2_Y.Output1 = calc2_B.Subsystem.Max;

  /* Outport: '<Root>/Output2' */
  calc2_Y.Output2 = calc2_B.Subsystem.SumofElements;

  /* Outport: '<Root>/Output3' incorporates:
   *  Product: '<Root>/Divide'
   */
  calc2_Y.Output3 = calc2_B.Subsystem.SumofElements / calc2_B.Subsystem.y;
}

/* Model initialize function */
void calc2_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(calc2_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &calc2_B), 0,
                sizeof(B_calc2_T));

  /* external inputs */
  calc2_U.Input = 0.0;

  /* external outputs */
  (void) memset((void *)&calc2_Y, 0,
                sizeof(ExtY_calc2_T));
}

/* Model terminate function */
void calc2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
