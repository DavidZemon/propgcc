/* Test the `vcvtQ_nu32_f32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vcvtQ_nu32_f32 (void)
{
  uint32x4_t out_uint32x4_t;
  float32x4_t arg0_float32x4_t;

  out_uint32x4_t = vcvtq_n_u32_f32 (arg0_float32x4_t, 1);
}

/* { dg-final { scan-assembler "vcvt\.u32.f32\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, #\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
