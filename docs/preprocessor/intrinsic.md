---
title: "intrinsic pragma"
description: "The MSVC intrinsic pragma is used to specify the supported intrinsic functions to use as intrinsics."
ms.date: 01/22/2021
f1_keywords: ["intrinsic_CPP", "vc-pragma.intrinsic"]
helpviewer_keywords: ["intrinsic pragma", "pragma, intrinsic"]
no-loc: ["pragma"]
---
# `intrinsic` pragma

Specifies that calls to functions specified in the pragma's argument list are intrinsic.

## Syntax

> **`#pragma intrinsic(`** *function_1* [**`,`** *function_2* ... ] **`)`**

## Remarks

The **`intrinsic`** pragma tells the compiler that a function has known behavior. The compiler may call the function and not replace the function call with inline instructions, if it will result in better performance.

The library functions with intrinsic forms are listed below. Once an **`intrinsic`** pragma is seen, it takes effect at the first function definition containing a specified intrinsic function. The effect continues to the end of the source file or to the appearance of a `function` pragma specifying the same intrinsic function. The **`intrinsic`** pragma can be used only outside of a function definition, at the global level.

The following functions have intrinsic forms, and the intrinsic forms are used when you specify [`/Oi`](../build/reference/oi-generate-intrinsic-functions.md):

:::row:::
   :::column span="":::
      [`abs`](../c-runtime-library/reference/abs-labs-llabs-abs64.md)\
      [`_disable`](../intrinsics/disable.md)\
      [`_enable`](../intrinsics/enable.md)\
      [`fabs`](../c-runtime-library/reference/fabs-fabsf-fabsl.md)\
      [`_inp`](../c-runtime-library/inp-inpw-inpd.md)\
      [`_inpw`](../c-runtime-library/inp-inpw-inpd.md)
   :::column-end:::
   :::column span="":::
      [`labs`](../c-runtime-library/reference/abs-labs-llabs-abs64.md)\
      [`_lrotl`](../c-runtime-library/reference/lrotl-lrotr.md)\
      [`_lrotr`](../c-runtime-library/reference/lrotl-lrotr.md)\
      [`memcmp`](../c-runtime-library/reference/memcmp-wmemcmp.md)\
      [`memcpy`](../c-runtime-library/reference/memcpy-wmemcpy.md)
   :::column-end:::
   :::column span="":::
      [`memset`](../c-runtime-library/reference/memset-wmemset.md)\
      [`_outp`](../c-runtime-library/outp-outpw-outpd.md)\
      [`_outpw`](../c-runtime-library/outp-outpw-outpd.md)\
      [`_rotl`](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)\
      [`_rotr`](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)
   :::column-end:::
   :::column span="":::
      [`strcat`](../c-runtime-library/reference/strcat-wcscat-mbscat.md)\
      [`strcmp`](../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)\
      [`strcpy`](../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)\
      [`strlen`](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)\
      [`_strset`](../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)
   :::column-end:::
:::row-end:::

Programs that use intrinsic functions are faster because they don't have the overhead of function calls. However, they may be larger because of the additional code generated.

### x86-specific example

The `_disable` and `_enable` intrinsics generate kernel-mode instructions to disable or enable interrupts, and could be useful in kernel-mode drivers.

Compile the following code from the command line with `cl -c -FAs sample.c` and look at *`sample.asm`* to see that they turn into x86 instructions CLI and STI:

```cpp
// pragma_directive_intrinsic.cpp
// processor: x86
#include <dos.h>   // definitions for _disable, _enable
#pragma intrinsic(_disable)
#pragma intrinsic(_enable)
void f1(void) {
   _disable();
   // do some work here that should not be interrupted
   _enable();
}
int main() {
}
```

### Intrinsic floating-point functions

These floating-point functions don't have true intrinsic forms. Instead, they have versions that pass arguments directly to the floating-point chip, rather than pushing them on the stack:

:::row:::
   :::column span="":::
      [`acos`](../c-runtime-library/reference/acos-acosf-acosl.md)\
      [`asin`](../c-runtime-library/reference/asin-asinf-asinl.md)
   :::column-end:::
   :::column span="":::
      [`cosh`](../c-runtime-library/reference/cosh-coshf-coshl.md)\
      [`fmod`](../c-runtime-library/reference/fmod-fmodf.md)
   :::column-end:::
   :::column span="":::
      [`pow`](../c-runtime-library/reference/pow-powf-powl.md)\
      [`sinh`](../c-runtime-library/reference/sinh-sinhf-sinhl.md)
   :::column-end:::
   :::column span="":::
      [`tanh`](../c-runtime-library/reference/tanh-tanhf-tanhl.md)
   :::column-end:::
:::row-end:::

These floating-point functions have true intrinsic forms when you specify [`/Oi`](../build/reference/oi-generate-intrinsic-functions.md) and [`/fp:fast`](../build/reference/fp-specify-floating-point-behavior.md) (or any option that includes **`/Oi`**: [`/Ox`](../build/reference/ox-full-optimization.md), [`/O1`](../build/reference/o1-o2-minimize-size-maximize-speed.md), and [`/O2`](../build/reference/o1-o2-minimize-size-maximize-speed.md)):

:::row:::
   :::column span="":::
      [`atan`](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)\
      [`atan2`](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)\
      [`cos`](../c-runtime-library/reference/cos-cosf-cosl.md)
   :::column-end:::
   :::column span="":::
      [`exp`](../c-runtime-library/reference/exp-expf.md)\
      [`log`](../c-runtime-library/reference/log-logf-log10-log10f.md)
   :::column-end:::
   :::column span="":::
      [`log10`](../c-runtime-library/reference/log-logf-log10-log10f.md)\
      [`sin`](../c-runtime-library/reference/sin-sinf-sinl.md)
   :::column-end:::
   :::column span="":::
      [`sqrt`](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)\
      [`tan`](../c-runtime-library/reference/tan-tanf-tanl.md)
   :::column-end:::
:::row-end:::

You can use [`/fp:strict`](../build/reference/fp-specify-floating-point-behavior.md) or [`/Za`](../build/reference/za-ze-disable-language-extensions.md) to override generation of true intrinsic floating-point options. In this case, the functions are generated as library routines that pass arguments directly to the floating-point chip instead of pushing them onto the program stack.

See [`#pragma function`](../preprocessor/function-c-cpp.md) for information and an example on how to enable and disable intrinsics for a block of source text.

## See also

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
