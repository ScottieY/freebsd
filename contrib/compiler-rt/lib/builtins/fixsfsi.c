//===-- lib/fixsfsi.c - Single-precision -> integer conversion ----*- C -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements single-precision to integer conversion for the
// compiler-rt library.  No range checking is performed; the behavior of this
// conversion is undefined for out of range values in the C standard.
//
//===----------------------------------------------------------------------===//

#define SINGLE_PRECISION
#include "fp_lib.h"
#include "fp_fixsi_impl.inc"

ARM_EABI_FNALIAS(f2iz, fixsfsi)

COMPILER_RT_ABI int
__fixsfsi(fp_t a) {
    return __fixXsi(a);
}
