/*
 * File: Subsystem.h
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

#ifndef RTW_HEADER_Subsystem_h_
#define RTW_HEADER_Subsystem_h_
#ifndef calc2_COMMON_INCLUDES_
#define calc2_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* calc2_COMMON_INCLUDES_ */

#include "calc2_types.h"

/* Block signals for system '<Root>/Subsystem' */
typedef struct {
  real_T Max;                          /* '<S1>/Max' */
  real_T Min1;                         /* '<S1>/Min1' */
  real_T SumofElements;                /* '<S1>/Sum of Elements' */
  real_T y;                            /* '<S1>/MATLAB Function' */
} B_Subsystem_calc2_T;

extern void calc2_Subsystem(real_T rtu_In1, B_Subsystem_calc2_T *localB);

#endif                                 /* RTW_HEADER_Subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
