/*
 * File: counter.c
 *
 * Code generated for Simulink model 'counter'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 30 20:46:02 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "counter.h"
#include "counter_private.h"

/* Real-time model */
static RT_MODEL_counter_T counter_M_;
RT_MODEL_counter_T *const counter_M = &counter_M_;

/* Model step function */
void counter_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void counter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(counter_M, (NULL));
}

/* Model terminate function */
void counter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
