/*
 * File: Subsystem.c
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

#include "Subsystem.h"

/* Include model header file for global data */
#include "calc3.h"
#include "calc3_private.h"

/* Output and update for atomic system: '<Root>/Subsystem' */
void calc3_Subsystem(boolean_T rtu_In1, boolean_T rtu_In2, B_Subsystem_calc3_T
                     *localB)
{
  boolean_T NOR_tmp;
  boolean_T NOR_tmp_0;

  /* Logic: '<S1>/AND' */
  localB->AND = (rtu_In1 && rtu_In2);

  /* Logic: '<S1>/NOR' incorporates:
   *  Logic: '<S1>/NOT'
   *  Logic: '<S1>/NOT1'
   */
  NOR_tmp = !rtu_In2;
  NOR_tmp_0 = !rtu_In1;

  /* Logic: '<S1>/NOR' */
  localB->NOR = (NOR_tmp_0 && NOR_tmp);

  /* Logic: '<S1>/NOT' */
  localB->NOT = NOR_tmp;

  /* Logic: '<S1>/NOT1' */
  localB->NOT1 = NOR_tmp_0;

  /* Logic: '<S1>/OR' */
  localB->OR = (rtu_In1 || rtu_In2);

  /* Logic: '<S1>/XOR' */
  localB->XOR = rtu_In1 ^ rtu_In2;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
