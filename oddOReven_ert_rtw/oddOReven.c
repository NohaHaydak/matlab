/*
 * File: oddOReven.c
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

#include "oddOReven.h"
#include "oddOReven_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_oddOReven_T oddOReven_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_oddOReven_T oddOReven_Y;

/* Real-time model */
static RT_MODEL_oddOReven_T oddOReven_M_;
RT_MODEL_oddOReven_T *const oddOReven_M = &oddOReven_M_;

/* Model step function */
void oddOReven_step(void)
{
  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/Input'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  Outport: '<Root>/Output1'
   *  StringConstant: '<S1>/String Constant2'
   *  StringConstant: '<S2>/String Constant1'
   */
  /* MATLAB Function 'MATLAB Function': '<S3>:1' */
  /* '<S3>:1:3' y = mod(u,2); */
  if ((uint8_T)((uint32_T)oddOReven_U.Input - ((int32_T)((uint32_T)
         oddOReven_U.Input >> 1) << 1)) == 0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    strncpy(&oddOReven_Y.Output1[0], &oddOReven_ConstP.StringConstant2_String[0],
            255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
    oddOReven_Y.Output1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&oddOReven_Y.Output1[0], &oddOReven_ConstP.StringConstant1_String[0],
            255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
    oddOReven_Y.Output1[255] = '\x00';
  }

  /* End of If: '<Root>/If' */
}

/* Model initialize function */
void oddOReven_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(oddOReven_M, (NULL));

  /* external inputs */
  oddOReven_U.Input = 0U;

  /* external outputs */
  (void) memset(&oddOReven_Y.Output1[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void oddOReven_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
