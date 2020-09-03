---
title: "Type-generic math"
description: "Describes macros in <tgmath.h> that make it easier to write C code that calls the right math function, based on argument type." 
ms.date: "9/3/2020"
helpviewer_keywords: ["CRT tgmath.h"]
---

# Type-generic math

For C11 and later, the `<tgmath.h>` header, in addition to including `<math.h>` and `<complex.h>`, provides macros that invoke a corresponding math function based on the types of the parameters.

C run-time library math functions come in real and complex variants. Each variant comes in three `flavors`, depending on the type of the argument: `float`, `double`, and `long double`.

For example, to get the absolute value of a real floating-point value, you`d call one of `fabsf`, `fabs`, or `fabsl` depending on whether you are passing a `float`, `double`, or `long double` argument, respectively. To get the complex (or norm, modulus, or magnitude) absolute value, you`d call one of `cabsf`, `cabs`, or `cabsl` depending on whether you are passing a `float`, `double`, and `long double`complex argument, respectively.

`<tgmath.h>` contains macros that simplify the selection of the right math function to call. The macros examine the type that you pass them, and then call the right function. For example, the `sqrt` macro turns `sqrt(9.9f)` into a call to `sqrtf()`, whereas it turns `sqrt(9.9)`into a call to `sqrt()`.

These macros are implemented using the C11 keyword _Generic, so they are portable.

The following table lists the macros that are available and what they expand to:

|Macro  |Real</br>`float`  | Real</br>`double` | Real</br>`long double` | Complex</br>`float` | Complex</br>`double` | Complex</br>`long double` |
|---------|---------|---------|---------|---------|---------|---------|
`acos` | [acosf]() | [acos]() | [acosl]() | [cacosf]() | [cacos]() | [cacosl]() |
`acosh` | [acoshf]() | [acosh]() | [acoshl]() | [cacoshf]() | [cacosh]() | [cacoshl]() |
`asin` | [asinf]() | [asin]() | [asinl]() | [casinf]() | [casin]() | [casinl]() |
`asinh` | [asinhf]() | [asinh]() | [asinhl]() | [casinhf]() | [casinh]() | [casinhl]() |
`atan` | [atanf]() | [atan]() | [atanl]() | [catanf]() | [catan]() | [catanl]() |
`atanh` | [atanhf]() | [atanh]() | [atanhl]() | [catanhf]() | [catanh]() | [catanhl]() |
`cos` | [cosf]() | [cos]() | [cosl]() | [ccosf]() | [ccos]() | [ccosl]() |
`cosh` | [coshf]() | [cosh]() | [coshl]() | [ccoshf]() | [ccosh]() | [ccoshl]() |
`exp` | [expf]() | [exp]() | [expl]() | [cexpf]() | [cexp]() | [cexpl]() |
`fabs` | [fabsf]() | [fabs]() | [fabsl]() | [cabsf]() | [cabs]() | [cabsl]() |
`log` | [logf]() | [log]() | [logl]() | [clogf]() | [clog]() | [clogl]() |
`pow` | [powf]() | [pow]() | [powl]() | [cpowf]() | [cpow]() | [cpowl]() |
`sin` | [sinf]() | [sin]() | [sinl]() | [csinf]() | [csin]() | [csinl]() |
`sinh` | [sinhf]() | [sinh]() | [sinhl]() | [csinhf]() | [csinh]() | [csinhl]() |
`sqrt` | [sqrtf]() | [sqrt]() | [sqrtl]() | [csqrtf]() | [csqrt]() | [csqrtl]() |
`tan` | [tanf]() | [tan]() | [tanl]() | [ctanf]() | [ctan]() | [ctanl]() |
`tanh` | [tanhf]() | [tanh]() | [tanhl]() | [ctanhf]() | [ctanh]() | [ctanhl]() |
`atan2` | [atan2f]() | [atan2]() | [atan2l]() | - | - | - |
`cbrt` | [cbrtf]() | [cbrt]() | [cbrtl]() | - | - | - |
`ceil` | [ceilf]() | [ceil]() | [ceill]() | - | - | - |
`copysign` | [copysignf]() | [copysign]() | [copysignl]() | - | - | - |
`erf` | [erff]() | [erf]() | [erfl]() | - | - | - |
`erfc` | [erfcf]() | [erfc]() | [erfcl]() | - | - | - |
`exp2` | [exp2f]() | [exp2]() | [exp2l]() | - | - | - |
`expm1` | [expm1f]() | [expm1]() | [expm1l]() | - | - | - |
`fdim` | [fdimf]() | [fdim]() | [fdiml]() | - | - | - |
`floor` | [floorf]() | [floor]() | [floorl]() | - | - | - |
`fma` | [fmaf]() | [fma]() | [fmal]() | - | - | - |
`fmax` | [fmaxf]() | [fmax]() | [fmaxl]() | - | - | - |
`fmin` | [fminf]() | [fmin]() | [fminl]() | - | - | - |
`fmod` | [fmodf]() | [fmod]() | [fmodl]() | - | - | - |
`frexp` | [frexpf]() | [frexp]() | [frexpl]() | - | - | - |
`hypot` | [hypotf]() | [hypot]() | [hypotl]() | - | - | - |
`ilogb` | [ilogbf]() | [ilogb]() | [ilogbl]() | - | - | - |
`ldexp` | [ldexpf]() | [ldexp]() | [ldexpl]() | - | - | - |
`lgamma` | [lgammaf]() | [lgamma]() | [lgammal]() | - | - | - |
`llrint` | [llrintf]() | [llrint]() | [llrintl]() | - | - | - |
`llround` | [llroundf]() | [llround]() | [llroundl]() | - | - | - |
`log10` | [log10f]() | [log10]() | [log10l]() | - | - | - |
`log1p` | [log1pf]() | [log1p]() | [log1pl]() | - | - | - |
`log2` | [log2f]() | [log2]() | [log2l]() | - | - | - |
`logb` | [logbf]() | [logb]() | [logbl]() | - | - | - |
`lrint` | [lrintf]() | [lrint]() | [lrintl]() | - | - | - |
`lround` | [lroundf]() | [lround]() | [lroundl]() | - | - | - |
`nearbyint` | [nearbyintf]() | [nearbyint]() | [nearbyintl]() | - | - | - |
`nextafter` | [nextafterf]() | [nextafter]() | [nextafterl]() | - | - | - |
`nexttoward` | [nexttowardf]() | [nexttoward]() | [nexttowardl]() | - | - | - |
`remainder` | [remainderf]() | [remainder]() | [remainderl]() | - | - | - |
`remquo` | [remquof]() | [remquo]() | [remquol]() | - | - | - |
`rint` | [rintf]() | [rint]() | [rintl]() | - | - | - |
`round` | [roundf]() | [round]() | [roundl]() | - | - | - |
`scalbln` | [scalblnf]() | [scalbln]() | [scalblnl]() | - | - | - |
`scalbn` | [scalbnf]() | [scalbn]() | [scalbnl]() | - | - | - |
`tgamma` | [tgammaf]() | [tgamma]() | [tgammal]() | - | - | - |
`trunc` | [truncf]() | [trunc]() | [truncl]() | - | - | - |
`carg` | - | - | - | [cargf]() | [carg]() | [cargl]() |
`conj` | - | - | - | [conjf]() | [conj]() | [conjl]() |
`creal` | - | - | - | [crealf]() | [creal]() | [creall]() |
`cimag` | - | - | - | [cimagf]() | [cimag]() | [cimagl]() |
`cproj` | - | - | - | [cprojf]() | [cproj]() | [cprojl]() |

## See also

[C Run-Time library reference](c-run-time-library-reference.md)
