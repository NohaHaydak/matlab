/*
 * File: calc3.c
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

#include "calc3.h"
#include "calc3_private.h"

/* Block signals (default storage) */
B_calc3_T calc3_B;

/* External inputs (root inport signals with default storage) */
ExtU_calc3_T calc3_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_calc3_T calc3_Y;

/* Real-time model */
static RT_MODEL_calc3_T calc3_M_;
RT_MODEL_calc3_T *const calc3_M = &calc3_M_;

/* Model step function */
void calc3_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */

  /* Inport: '<Root>/Input' incorporates:
   *  Inport: '<Root>/Input1'
   */
  calc3_Subsystem(calc3_U.Input, calc3_U.Input1, &calc3_B.Subsystem);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* Outport: '<Root>/Output' */
  calc3_Y.Output = calc3_B.Subsystem.NOT1;

  /* Outport: '<Root>/Output1' */
  calc3_Y.Output1 = calc3_B.Subsystem.XOR;

  /* Outport: '<Root>/Output2' */
  calc3_Y.Output2 = calc3_B.Subsystem.AND;

  /* Outport: '<Root>/Output3' */
  calc3_Y.Output3 = calc3_B.Subsystem.NOR;

  /* Outport: '<Root>/Output4' */
  calc3_Y.Output4 = calc3_B.Subsystem.OR;

  /* Outport: '<Root>/Output5' */
  calc3_Y.Output5 = calc3_B.Subsystem.NOT;
}

/* Model initialize function */
void calc3_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(calc3_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &calc3_B), 0,
                sizeof(B_calc3_T));

  /* external inputs */
  (void)memset(&calc3_U, 0, sizeof(ExtU_calc3_T));

  /* external outputs */
  (void) memset((void *)&calc3_Y, 0,
                sizeof(ExtY_calc3_T));
}

/* Model terminate function */
void calc3_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
