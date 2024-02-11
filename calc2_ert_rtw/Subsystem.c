/*
 * File: Subsystem.c
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

#include "Subsystem.h"

/* Include model header file for global data */
#include "calc2.h"
#include "calc2_private.h"

/* Output and update for atomic system: '<Root>/Subsystem' */
void calc2_Subsystem(real_T rtu_In1, B_Subsystem_calc2_T *localB)
{
  /* MATLAB Function: '<S1>/MATLAB Function' */
  /* MATLAB Function 'Subsystem/MATLAB Function': '<S2>:1' */
  /* '<S2>:1:3' y = length(u); */
  localB->y = 1.0;

  /* MinMax: '<S1>/Max' */
  localB->Max = rtu_In1;

  /* MinMax: '<S1>/Min1' */
  localB->Min1 = rtu_In1;

  /* Sum: '<S1>/Sum of Elements' */
  localB->SumofElements = rtu_In1;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
