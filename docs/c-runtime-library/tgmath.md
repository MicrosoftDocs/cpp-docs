---
title: "Type-generic math"
description: "Describes macros in <tgmath.h> that make it easier to write C code that calls the right math function, based on argument type." 
ms.topic: "conceptual"
ms.date: "12/10/2020"
helpviewer_keywords: ["CRT tgmath.h"]
---

# Type-generic math

For ISO C Standard 11 (C11) and later, the `<tgmath.h>` header, in addition to including `<math.h>` and `<complex.h>`, provides macros that invoke a corresponding math function based on the types of the parameters.

C runtime library math functions come in real and complex variants. Each variant comes in three flavors, depending on the type of the argument: `float`, `double`, and `long double`. Because C doesn't support overloading like C++ does, each variant has a different name. For example, to get the absolute value of a real floating-point value, you'd call either `fabsf`, `fabs`, or `fabsl` depending on whether you're passing a `float`, `double`, or `long double` value, respectively. To get the complex absolute value, you'd call one of `cabsf`, `cabs`, or `cabsl` depending on whether you're passing a `float`, `double`, and `long double`complex value, respectively. If the arguments do not match any of the above mentioned types, the function is chosen as though the arguments were doubles.

`<tgmath.h>` contains macros that simplify the selection of the right math function to call. The macros examine the type they're passed and then call the right function. For example, the `sqrt` macro binds `sqrt(9.9f)` to `sqrtf()`, but it binds `sqrt(9.9)` to `sqrt()`. If at least one macro argument for a generic parameter is complex, then the macro binds to a complex function; otherwise, it invokes a real function.

The type-generic macros in `<tgmath.h>` allow you to write more portable code because you don't need to manage casting or selecting different function names depending on the type of argument.

These macros are in their own header so that programs written using the `<math.h>` header won't break. So `double x = sin(42);` behaves as it always has when you include \<math.h>. Even so, most existing C programs are expected to be unaffected when the `<tgmath.h>` header is included instead of `<math.h>` or `<complex.h>`.

The following table lists the macros that are available in `<tgmath.h>` and what they expand to. `modf` isn't included in this table because it doesn't have a corresponding type-generic macro because it isn't clear how to make it safe without complicating type resolution.

|Macro  |Real</br>`float`  | Real</br>`double` | Real</br>`long double` | Complex</br>`float` | Complex</br>`double` | Complex</br>`long double` |
|---------|---------|---------|---------|---------|---------|---------|
`acos` | [`acosf`](reference/mbsnbicmp-mbsnbicmp-l.md) | [`acos`](reference/mbsnbicmp-mbsnbicmp-l.md) | [`acosl`](reference/mbsnbicmp-mbsnbicmp-l.md) | [`cacosf`](reference/cacos-cacosf-cacosl.md) | [`cacos`](reference/cacos-cacosf-cacosl.md) | [`cacosl`](reference/cacos-cacosf-cacosl.md) |
`acosh` | [`acoshf`](reference/acosh-acoshf-acoshl.md) | [`acosh`](reference/acosh-acoshf-acoshl.md) | [`acoshl`](reference/acosh-acoshf-acoshl.md) | [`cacoshf`](reference/cacosh-cacoshf-cacoshl.md) | [`cacosh`](reference/cacosh-cacoshf-cacoshl.md) | [`cacoshl`](reference/cacosh-cacoshf-cacoshl.md) |
`asin` | [`asinf`](reference/asin-asinf-asinl.md) | [`asin`](reference/asin-asinf-asinl.md) | [`asinl`](reference/asin-asinf-asinl.md) | [`casinf`](reference/casin-casinf-casinl.md) | [`casin`](reference/casin-casinf-casinl.md) | [`casinl`](reference/casin-casinf-casinl.md) |
`asinh` | [`asinhf`](reference/asin-asinf-asinl.md) | [`asinh`](reference/asin-asinf-asinl.md) | [`asinhl`](reference/asin-asinf-asinl.md) | [`casinhf`](reference/casinh-casinhf-casinhl.md) | [`casinh`](reference/casinh-casinhf-casinhl.md) | [`casinhl`](reference/casinh-casinhf-casinhl.md) |
`atan` | [`atanf`](reference/atan-atanf-atanl-atan2-atan2f-atan2l.md) | [`atan`](reference/atan-atanf-atanl-atan2-atan2f-atan2l.md) | [`atanl`](reference/atan-atanf-atanl-atan2-atan2f-atan2l.md) | [`catanf`](reference/catan-catanf-catanl.md) | [`catan`](reference/catan-catanf-catanl.md) | [`catanl`](reference/catan-catanf-catanl.md) |
`atanh` | [`atanhf`](reference/atanh-atanhf-atanhl.md) | [`atanh`](reference/atanh-atanhf-atanhl.md) | [`atanhl`](reference/atanh-atanhf-atanhl.md) | [`catanhf`](reference/catanh-catanhf-catanhl.md) | [`catanh`](reference/catanh-catanhf-catanhl.md) | [`catanhl`](reference/catanh-catanhf-catanhl.md) |
`cos` | [`cosf`](reference/cos-cosf-cosl.md) | [`cos`](reference/cos-cosf-cosl.md) | [`cosl`](reference/cos-cosf-cosl.md) | [`ccosf`](reference/ccos-ccosf-ccosl.md) | [`ccos`](reference/ccos-ccosf-ccosl.md) | [`ccosl`](reference/ccos-ccosf-ccosl.md) |
`cosh` | [`coshf`](reference/cosh-coshf-coshl.md) | [`cosh`](reference/cosh-coshf-coshl.md) | [`coshl`](reference/cosh-coshf-coshl.md) | [`ccoshf`](reference/ccosh-ccoshf-ccoshl.md) | [`ccosh`](reference/ccosh-ccoshf-ccoshl.md) | [`ccoshl`](reference/ccosh-ccoshf-ccoshl.md) |
`exp` | [`expf`](reference/exp-expf.md) | [`exp`](reference/exp-expf.md) | [`expl`](reference/exp-expf.md) | [`cexpf`](reference/cexp-cexpf-cexpl.md) | [`cexp`](reference/cexp-cexpf-cexpl.md) | [`cexpl`](reference/cexp-cexpf-cexpl.md) |
`fabs` | [`fabsf`](reference/fabs-fabsf-fabsl.md) | [`fabs`](reference/fabs-fabsf-fabsl.md) | [`fabsl`](reference/fabs-fabsf-fabsl.md) | [`cabsf`](reference/cabs-cabsf-cabsl.md) | [`cabs`](reference/cabs-cabsf-cabsl.md) | [`cabsl`](reference/cabs-cabsf-cabsl.md) |
`log` | [`logf`](reference/log-logf-log10-log10f.md) | [`log`](reference/log-logf-log10-log10f.md) | [`logl`](reference/log-logf-log10-log10f.md) | [`clogf`](reference/clog-clogf-clogl.md) | [`clog`](reference/clog-clogf-clogl.md) | [`clogl`](reference/clog-clogf-clogl.md) |
`pow` | [`powf`](reference/pow-powf-powl.md) | [`pow`](reference/pow-powf-powl.md) | [`powl`](reference/pow-powf-powl.md) | [`cpowf`](reference/cpow-cpowf-cpowl.md) | [`cpow`](reference/cpow-cpowf-cpowl.md) | [`cpowl`](reference/cpow-cpowf-cpowl.md) |
`sin` | [`sinf`](reference/sin-sinf-sinl.md) | [`sin`](reference/sin-sinf-sinl.md) | [`sinl`](reference/sin-sinf-sinl.md) | [`csinf`](reference/csin-csinf-csinl.md) | [`csin`](reference/csin-csinf-csinl.md) | [`csinl`](reference/csin-csinf-csinl.md) |
`sinh` | [`sinhf`](reference/sinh-sinhf-sinhl.md) | [`sinh`](reference/sinh-sinhf-sinhl.md) | [`sinhl`](reference/sinh-sinhf-sinhl.md) | [`csinhf`](reference/csinh-csinhf-csinhl.md) | [`csinh`](reference/csinh-csinhf-csinhl.md) | [`csinhl`](reference/csinh-csinhf-csinhl.md) |
`sqrt` | [`sqrtf`](reference/sqrt-sqrtf-sqrtl.md) | [`sqrt`](reference/sqrt-sqrtf-sqrtl.md) | [`sqrtl`](reference/sqrt-sqrtf-sqrtl.md) | [`csqrtf`](reference/csqrt-csqrtf-csqrtl.md) | [`csqrt`](reference/csqrt-csqrtf-csqrtl.md) | [`csqrtl`](reference/csqrt-csqrtf-csqrtl.md) |
`tan` | [`tanf`](reference/tan-tanf-tanl.md) | [`tan`](reference/tan-tanf-tanl.md) | [`tanl`](reference/tan-tanf-tanl.md) | [`ctanf`](reference/ctan-ctanf-ctanl.md) | [`ctan`](reference/ctan-ctanf-ctanl.md) | [`ctanl`](reference/ctan-ctanf-ctanl.md) |
`tanh` | [`tanhf`](reference/tanh-tanhf-tanhl.md) | [`tanh`](reference/tanh-tanhf-tanhl.md) | [`tanhl`](reference/tanh-tanhf-tanhl.md) | [`ctanhf`](reference/ctanh-ctanhf-ctanhl.md) | [`ctanh`](reference/ctanh-ctanhf-ctanhl.md) | [`ctanhl`](reference/ctanh-ctanhf-ctanhl.md) |
`atan2` | [`atan2f`](reference/atan-atanf-atanl-atan2-atan2f-atan2l.md) | [`atan2`](reference/atan-atanf-atanl-atan2-atan2f-atan2l.md) | [`atan2l`](reference/atan-atanf-atanl-atan2-atan2f-atan2l.md) | - | - | - |
`cbrt` | [`cbrtf`](reference/cbrt-cbrtf-cbrtl.md) | [`cbrt`](reference/cbrt-cbrtf-cbrtl.md) | [`cbrtl`](reference/cbrt-cbrtf-cbrtl.md) | - | - | - |
`ceil` | [`ceilf`](reference/ceil-ceilf-ceill.md) | [`ceil`](reference/ceil-ceilf-ceill.md) | [`ceill`](reference/ceil-ceilf-ceill.md) | - | - | - |
`copysign` | [`copysignf`](reference/copysign-copysignf-copysignl-copysign-copysignf-copysignl.md) | [`copysign`](reference/copysign-copysignf-copysignl-copysign-copysignf-copysignl.md) | [`copysignl`](reference/copysign-copysignf-copysignl-copysign-copysignf-copysignl.md) | - | - | - |
`erf` | [`erff`](reference/erf-erff-erfl-erfc-erfcf-erfcl.md) | [`erf`](reference/erf-erff-erfl-erfc-erfcf-erfcl.md) | [`erfl`](reference/erf-erff-erfl-erfc-erfcf-erfcl.md) | - | - | - |
`erfc` | [`erfcf`](reference/erf-erff-erfl-erfc-erfcf-erfcl.md) | [`erfc`](reference/erf-erff-erfl-erfc-erfcf-erfcl.md) | [`erfcl`](reference/erf-erff-erfl-erfc-erfcf-erfcl.md) | - | - | - |
`exp2` | [`exp2f`](reference/exp2-exp2f-exp2l.md) | [`exp2`](reference/exp2-exp2f-exp2l.md) | [`exp2l`](reference/exp2-exp2f-exp2l.md) | - | - | - |
`expm1` | [`expm1f`](reference/expm1-expm1f-expm1l.md) | [`expm1`](reference/expm1-expm1f-expm1l.md) | [`expm1l`](reference/expm1-expm1f-expm1l.md) | - | - | - |
`fdim` | [`fdimf`](reference/fdim-fdimf-fdiml.md) | [`fdim`](reference/fdim-fdimf-fdiml.md) | [`fdiml`](reference/fdim-fdimf-fdiml.md) | - | - | - |
`floor` | [`floorf`](reference/floor-floorf-floorl.md) | [`floor`](reference/floor-floorf-floorl.md) | [`floorl`](reference/floor-floorf-floorl.md) | - | - | - |
`fma` | [`fmaf`](reference/fma-fmaf-fmal.md) | [`fma`](reference/fma-fmaf-fmal.md) | [`fmal`](reference/fma-fmaf-fmal.md) | - | - | - |
`fmax` | [`fmaxf`](reference/fmax-fmaxf-fmaxl.md) | [`fmax`](reference/fmax-fmaxf-fmaxl.md) | [`fmaxl`](reference/fmax-fmaxf-fmaxl.md) | - | - | - |
`fmin` | [`fminf`](reference/fmin-fminf-fminl.md) | [`fmin`](reference/fmin-fminf-fminl.md) | [`fminl`](reference/fmin-fminf-fminl.md) | - | - | - |
`fmod` | [`fmodf`](reference/fmod-fmodf.md) | [`fmod`](reference/fmod-fmodf.md) | [`fmodl`](reference/fmod-fmodf.md) | - | - | - |
`frexp` | [`frexpf`](reference/frexp.md) | [`frexp`](reference/frexp.md) | [`frexpl`](reference/frexp.md) | - | - | - |
`hypot` | [`hypotf`](reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md) | [`hypot`](reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md) | [`hypotl`](reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md) | - | - | - |
`ilogb` | [`ilogbf`](reference/ilogb-ilogbf-ilogbl2.md) | [`ilogb`](reference/ilogb-ilogbf-ilogbl2.md) | [`ilogbl`](reference/ilogb-ilogbf-ilogbl2.md) | - | - | - |
`ldexp` | [`ldexpf`](reference/ldexp.md) | [`ldexp`](reference/ldexp.md) | [`ldexpl`](reference/ldexp.md) | - | - | - |
`lgamma` | [`lgammaf`](reference/lgamma-lgammaf-lgammal.md) | [`lgamma`](reference/lgamma-lgammaf-lgammal.md) | [`lgammal`](reference/lgamma-lgammaf-lgammal.md) | - | - | - |
`llrint` | [`llrintf`](reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | [`llrint`](reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | [`llrintl`](reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | - | - | - |
`llround` | [`llroundf`](reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md) | [`llround`](reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md) | [`llroundl`](reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md) | - | - | - |
`log10` | [`log10f`](reference/log-logf-log10-log10f.md) | [`log10`](reference/log-logf-log10-log10f.md) | [`log10l`](reference/log-logf-log10-log10f.md) | - | - | - |
`log1p` | [`log1pf`](reference/log1p-log1pf-log1pl2.md) | [`log1p`](reference/log1p-log1pf-log1pl2.md) | [`log1pl`](reference/log1p-log1pf-log1pl2.md) | - | - | - |
`log2` | [`log2f`](reference/log2-log2f-log2l.md) | [`log2`](reference/log2-log2f-log2l.md) | [`log2l`](reference/log2-log2f-log2l.md) | - | - | - |
`logb` | [`logbf`](reference/logb-logbf-logbl-logb-logbf.md) | [`logb`](reference/logb-logbf-logbl-logb-logbf.md) | [`logbl`](reference/logb-logbf-logbl-logb-logbf.md) | - | - | - |
`lrint` | [`lrintf`](reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | [`lrint`](reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | [`lrintl`](reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | - | - | - |
`lround` | [`lroundf`](reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md) | [`lround`](reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md) | [`lroundl`](reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md) | - | - | - |
`nearbyint` | [`nearbyintf`](reference/nearbyint-nearbyintf-nearbyintl1.md) | [`nearbyint`](reference/nearbyint-nearbyintf-nearbyintl1.md) | [`nearbyintl`](reference/nearbyint-nearbyintf-nearbyintl1.md) | - | - | - |
`nextafter` | [`nextafterf`](reference/nextafter-functions.md) | [`nextafter`](reference/nextafter-functions.md) | [`nextafterl`](reference/nextafter-functions.md) | - | - | - |
`nexttoward` | [`nexttowardf`](reference/nextafter-functions.md) | [`nexttoward`](reference/nextafter-functions.md) | [`nexttowardl`](reference/nextafter-functions.md) | - | - | - |
`remainder` | [`remainderf`](reference/remainder-remainderf-remainderl.md) | [`remainder`](reference/remainder-remainderf-remainderl.md) | [`remainderl`](reference/remainder-remainderf-remainderl.md) | - | - | - |
`remquo` | [`remquof`](reference/remquo-remquof-remquol.md) | [`remquo`](reference/remquo-remquof-remquol.md) | [`remquol`](reference/remquo-remquof-remquol.md) | - | - | - |
`rint` | [`rintf`](reference/rint-rintf-rintl.md) | [`rint`](reference/rint-rintf-rintl.md) | [`rintl`](reference/rint-rintf-rintl.md) | - | - | - |
`round` | [`roundf`](reference/round-roundf-roundl.md) | [`round`](reference/round-roundf-roundl.md) | [`roundl`](reference/round-roundf-roundl.md) | - | - | - |
`scalbln` | [`scalblnf`](reference/scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | [`scalbln`](reference/scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | [`scalblnl`](reference/scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | - | - | - |
`scalbn` | [`scalbnf`](reference/scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | [`scalbn`](reference/scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | [`scalbnl`](reference/scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | - | - | - |
`tgamma` | [`tgammaf`](reference/tgamma-tgammaf-tgammal.md) | [`tgamma`](reference/tgamma-tgammaf-tgammal.md) | [`tgammal`](reference/tgamma-tgammaf-tgammal.md) | - | - | - |
`trunc` | [`truncf`](reference/trunc-truncf-truncl.md) | [`trunc`](reference/trunc-truncf-truncl.md) | [`truncl`](reference/trunc-truncf-truncl.md) | - | - | - |
`carg` | - | - | - | [`cargf`](reference/carg-cargf-cargl.md) | [`carg`](reference/carg-cargf-cargl.md) | [`cargl`](reference/carg-cargf-cargl.md) |
`conj` | - | - | - | [`conjf`](reference/conj-conjf-conjl.md) | [`conj`](reference/conj-conjf-conjl.md) | [`conjl`](reference/conj-conjf-conjl.md) |
`creal` | - | - | - | [`crealf`](reference/creal-crealf-creall.md) | [`creal`](reference/creal-crealf-creall.md) | [`creall`](reference/creal-crealf-creall.md) |
`cimag` | - | - | - | [`cimagf`](reference/cimag-cimagf-cimagl.md) | [`cimag`](reference/cimag-cimagf-cimagl.md) | [`cimagl`](reference/cimag-cimagf-cimagl.md) |
`cproj` | - | - | - | [`cprojf`](reference/cproj-cprojf-cprojl.md) | [`cproj`](reference/cproj-cprojf-cprojl.md) | [`cprojl`](reference/cproj-cprojf-cprojl.md) |

## Requirements

[std:c++11](../build/reference/std-specify-language-standard-version.md) or later is required.

Windows SDK version 10.0.20201.0 or later. This is currently an Insider build which you can download from [Windows Insider Preview Downloads](https://www.microsoft.com/software-download/windowsinsiderpreviewSDK). See [C11 and C17: Getting Started](https://devblogs.microsoft.com/cppblog/c11-and-c17-standard-support-arriving-in-msvc/#c11-and-c17-getting-started) for instructions on installing and using this SDK.

## See also

[C Run-Time library reference](c-run-time-library-reference.md)
