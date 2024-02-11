/*
 * File: Subsystem.h
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

#ifndef RTW_HEADER_Subsystem_h_
#define RTW_HEADER_Subsystem_h_
#ifndef calc3_COMMON_INCLUDES_
#define calc3_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* calc3_COMMON_INCLUDES_ */

#include "calc3_types.h"

/* Block signals for system '<Root>/Subsystem' */
typedef struct {
  boolean_T AND;                       /* '<S1>/AND' */
  boolean_T NOR;                       /* '<S1>/NOR' */
  boolean_T NOT;                       /* '<S1>/NOT' */
  boolean_T NOT1;                      /* '<S1>/NOT1' */
  boolean_T OR;                        /* '<S1>/OR' */
  boolean_T XOR;                       /* '<S1>/XOR' */
} B_Subsystem_calc3_T;

extern void calc3_Subsystem(boolean_T rtu_In1, boolean_T rtu_In2,
  B_Subsystem_calc3_T *localB);

#endif                                 /* RTW_HEADER_Subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
