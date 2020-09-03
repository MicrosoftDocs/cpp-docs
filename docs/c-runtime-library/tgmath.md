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
`acos` | [acosf](mbsnbicmp-mbsnbicmp-l.md) | [acos](mbsnbicmp-mbsnbicmp-l.md) | [acosl](mbsnbicmp-mbsnbicmp-l.md) | [cacosf](cacos-cacosf-cacosl.md) | [cacos](cacos-cacosf-cacosl.md) | [cacosl](cacos-cacosf-cacosl.md) |
`acosh` | [acoshf](acosh-acoshf-acoshl.md) | [acosh](acosh-acoshf-acoshl.md) | [acoshl](acosh-acoshf-acoshl.md) | [cacoshf](cacosh-cacoshf-cacoshl.md) | [cacosh](cacosh-cacoshf-cacoshl.md) | [cacoshl](cacosh-cacoshf-cacoshl.md) |
`asin` | [asinf](asin-asinf-asinl.md) | [asin](asin-asinf-asinl.md) | [asinl](asin-asinf-asinl.md) | [casinf](casin-casinf-casinl.md) | [casin](casin-casinf-casinl.md) | [casinl](casin-casinf-casinl.md) |
`asinh` | [asinhf](asin-asinf-asinl.md) | [asinh](asin-asinf-asinl.md) | [asinhl](asin-asinf-asinl.md) | [casinhf](casinh-casinhf-casinhl.md) | [casinh](casinh-casinhf-casinhl.md) | [casinhl](casinh-casinhf-casinhl.md) |
`atan` | [atanf](atan-atanf-atanl-atan2-atan2f-atan2l.md) | [atan](atan-atanf-atanl-atan2-atan2f-atan2l.md) | [atanl](atan-atanf-atanl-atan2-atan2f-atan2l.md) | [catanf](catan-catanf-catanl.md) | [catan](catan-catanf-catanl.md) | [catanl](catan-catanf-catanl.md) |
`atanh` | [atanhf](atanh-atanhf-atanhl.md) | [atanh](atanh-atanhf-atanhl.md) | [atanhl](atanh-atanhf-atanhl.md) | [catanhf](catanh-catanhf-catanhl.md) | [catanh](catanh-catanhf-catanhl.md) | [catanhl](catanh-catanhf-catanhl.md) |
`cos` | [cosf](cos-cosf-cosl.md) | [cos](cos-cosf-cosl.md) | [cosl](cos-cosf-cosl.md) | [ccosf](ccos-ccosf-ccosl.md) | [ccos](ccos-ccosf-ccosl.md) | [ccosl](ccos-ccosf-ccosl.md) |
`cosh` | [coshf](cosh-coshf-coshl.md) | [cosh](cosh-coshf-coshl.md) | [coshl](cosh-coshf-coshl.md) | [ccoshf](ccosh-ccoshf-ccoshl.md) | [ccosh](ccosh-ccoshf-ccoshl.md) | [ccoshl](ccosh-ccoshf-ccoshl.md) |
`exp` | [expf](exp-expf.md) | [exp](exp-expf.md) | [expl](exp-expf.md) | [cexpf](cexp-cexpf-cexpl.md) | [cexp](cexp-cexpf-cexpl.md) | [cexpl](cexp-cexpf-cexpl.md) |
`fabs` | [fabsf](fabs-fabsf-fabsl.md) | [fabs](fabs-fabsf-fabsl.md) | [fabsl](fabs-fabsf-fabsl.md) | [cabsf](cabs-cabsf-cabsl.md) | [cabs](cabs-cabsf-cabsl.md) | [cabsl](cabs-cabsf-cabsl.md) |
`log` | [logf](log-logf-log10-log10f.md) | [log](log-logf-log10-log10f.md) | [logl](log-logf-log10-log10f.md) | [clogf](clog-clogf-clogl.md) | [clog](clog-clogf-clogl.md) | [clogl](clog-clogf-clogl.md) |
`pow` | [powf](pow-powf-powl.md) | [pow](pow-powf-powl.md) | [powl](pow-powf-powl.md) | [cpowf](cpow-cpowf-cpowl.md) | [cpow](cpow-cpowf-cpowl.md) | [cpowl](cpow-cpowf-cpowl.md) |
`sin` | [sinf](sin-sinf-sinl.md) | [sin](sin-sinf-sinl.md) | [sinl](sin-sinf-sinl.md) | [csinf](csin-csinf-csinl.md) | [csin](csin-csinf-csinl.md) | [csinl](csin-csinf-csinl.md) |
`sinh` | [sinhf](sinh-sinhf-sinhl.md) | [sinh](sinh-sinhf-sinhl.md) | [sinhl](sinh-sinhf-sinhl.md) | [csinhf](csinh-csinhf-csinhl.md) | [csinh](csinh-csinhf-csinhl.md) | [csinhl](csinh-csinhf-csinhl.md) |
`sqrt` | [sqrtf](sqrt-sqrtf-sqrtl.md) | [sqrt](sqrt-sqrtf-sqrtl.md) | [sqrtl](sqrt-sqrtf-sqrtl.md) | [csqrtf](csqrt-csqrtf-csqrtl.md) | [csqrt](csqrt-csqrtf-csqrtl.md) | [csqrtl](csqrt-csqrtf-csqrtl.md) |
`tan` | [tanf](tan-tanf-tanl.md) | [tan](tan-tanf-tanl.md) | [tanl](tan-tanf-tanl.md) | [ctanf](ctan-ctanf-ctanl.md) | [ctan](ctan-ctanf-ctanl.md) | [ctanl](ctan-ctanf-ctanl.md) |
`tanh` | [tanhf](tanh-tanhf-tanhl.md) | [tanh](tanh-tanhf-tanhl.md) | [tanhl](tanh-tanhf-tanhl.md) | [ctanhf](ctanh-ctanhf-ctanhl.md) | [ctanh](ctanh-ctanhf-ctanhl.md) | [ctanhl](ctanh-ctanhf-ctanhl.md) |
`atan2` | [atan2f](atan-atanf-atanl-atan2-atan2f-atan2l.md) | [atan2](atan-atanf-atanl-atan2-atan2f-atan2l.md) | [atan2l](atan-atanf-atanl-atan2-atan2f-atan2l.md) | - | - | - |
`cbrt` | [cbrtf](cbrt-cbrtf-cbrtl.md) | [cbrt](cbrt-cbrtf-cbrtl.md) | [cbrtl](cbrt-cbrtf-cbrtl.md) | - | - | - |
`ceil` | [ceilf](ceil-ceilf-ceill.md) | [ceil](ceil-ceilf-ceill.md) | [ceill](ceil-ceilf-ceill.md) | - | - | - |
`copysign` | [copysignf](copysign-copysignf-copysignl-copysign-copysignf-copysignl.md) | [copysign](copysign-copysignf-copysignl-copysign-copysignf-copysignl.md) | [copysignl](copysign-copysignf-copysignl-copysign-copysignf-copysignl.md) | - | - | - |
`erf` | [erff](erf-erff-erfl-erfc-erfcf-erfcl.md) | [erf](erf-erff-erfl-erfc-erfcf-erfcl.md) | [erfl](erf-erff-erfl-erfc-erfcf-erfcl.md) | - | - | - |
`erfc` | [erfcf](erf-erff-erfl-erfc-erfcf-erfcl.md) | [erfc](erf-erff-erfl-erfc-erfcf-erfcl.md) | [erfcl](erf-erff-erfl-erfc-erfcf-erfcl.md) | - | - | - |
`exp2` | [exp2f](exp2-exp2f-exp2l.md) | [exp2](exp2-exp2f-exp2l.md) | [exp2l](exp2-exp2f-exp2l.md) | - | - | - |
`expm1` | [expm1f](expm1-expm1f-expm1l.md) | [expm1](expm1-expm1f-expm1l.md) | [expm1l](expm1-expm1f-expm1l.md) | - | - | - |
`fdim` | [fdimf](fdim-fdimf-fdiml.md) | [fdim](fdim-fdimf-fdiml.md) | [fdiml](fdim-fdimf-fdiml.md) | - | - | - |
`floor` | [floorf](floor-floorf-floorl.md) | [floor](floor-floorf-floorl.md) | [floorl](floor-floorf-floorl.md) | - | - | - |
`fma` | [fmaf](fma-fmaf-fmal.md) | [fma](fma-fmaf-fmal.md) | [fmal](fma-fmaf-fmal.md) | - | - | - |
`fmax` | [fmaxf](fmax-fmaxf-fmaxl.md) | [fmax](fmax-fmaxf-fmaxl.md) | [fmaxl](fmax-fmaxf-fmaxl.md) | - | - | - |
`fmin` | [fminf](fmin-fminf-fminl.md) | [fmin](fmin-fminf-fminl.md) | [fminl](fmin-fminf-fminl.md) | - | - | - |
`fmod` | [fmodf](fmod-fmodf.md) | [fmod](fmod-fmodf.md) | [fmodl](fmod-fmodf.md) | - | - | - |
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
