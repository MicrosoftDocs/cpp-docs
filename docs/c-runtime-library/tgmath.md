---
title: "Type-generic math"
description: "Describes macros in <tgmath.h> that make it easier to write C code that calls the right math function, based on argument type." 
ms.date: "9/3/2020"
helpviewer_keywords: ["CRT tgmath.h"]
---

# Type-generic math

For ISO C Standard 11 (C11) and later, the \<tgmath.h> header, in addition to including \<math.h> and \<complex.h>, provides macros that invoke a corresponding math function based on the types of the parameters.

C runtime library math functions come in real and complex variants. Each variant comes in three `flavors`, depending on the type of the argument: `float`, `double`, and `long double`. Because C doesn't support overloading like C++ does, each variant has a different name. For example, to get the absolute value of a real floating-point value, you'd call either `fabsf`, `fabs`, or `fabsl` depending on whether you are passing a `float`, `double`, or `long double` value, respectively. To get the complex absolute value, you'd call one of `cabsf`, `cabs`, or `cabsl` depending on whether you are passing a `float`, `double`, and `long double`complex value, respectively.

\<tgmath.h> contains macros that simplify the selection of the right math function to call. The macros examine the type they are passed and then call the right function. For example, the `sqrt` macro binds `sqrt(9.9f)` to `sqrtf()`, whereas it binds `sqrt(9.9)` to `sqrt()`. If at least one macro argument for a generic parameter is complex, then the macro binds to a complex function; otherwise, it invokes a real function.

The type-generic macros in \<tgmath.h> allow you to write more portable code because you don't need to manage casting or selecting different function names depending on the type of argument.

These macros are in their own header so that programs written using the `<math.h>` header won't break. So `double x = sin(42);` behaves as it always has when you include \<math.h>. Even so, most existing C programs are expected to be unaffected when the \<tgmath.h> header is included instead of \<math.h> or \<complex.h>.

The following table lists the macros that are available in \<tgmath.h> and what they expand to. The following functions are not listed in this table because they don't have a corresponding type-generic macro as it wasn't clear how to make them safe without complicating type resolution:`modf()`, `j0()`, `j1()`, `y0()`, `y1()`, and `yn()`.

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
`frexp` | [frexpf](frexp.md) | [frexp](frexp.md) | [frexpl](frexp.md) | - | - | - |
`hypot` | [hypotf](hypot-hypotf-hypotl-hypot-hypotf-hypotl.md) | [hypot](hypot-hypotf-hypotl-hypot-hypotf-hypotl.md) | [hypotl](hypot-hypotf-hypotl-hypot-hypotf-hypotl.md) | - | - | - |
`ilogb` | [ilogbf](ilogb-ilogbf-ilogbl2.md) | [ilogb](ilogb-ilogbf-ilogbl2.md) | [ilogbl](ilogb-ilogbf-ilogbl2.md) | - | - | - |
`ldexp` | [ldexpf](ldexp.md) | [ldexp](ldexp.md) | [ldexpl](ldexp.md) | - | - | - |
`lgamma` | [lgammaf](lgamma-lgammaf-lgammal.md) | [lgamma](lgamma-lgammaf-lgammal.md) | [lgammal](lgamma-lgammaf-lgammal.md) | - | - | - |
`llrint` | [llrintf](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | [llrint](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | [llrintl](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | - | - | - |
`llround` | [llroundf](lround-lroundf-lroundl-llround-llroundf-llroundl.md) | [llround](lround-lroundf-lroundl-llround-llroundf-llroundl.md) | [llroundl](lround-lroundf-lroundl-llround-llroundf-llroundl.md) | - | - | - |
`log10` | [log10f](log-logf-log10-log10f.md) | [log10](log-logf-log10-log10f.md) | [log10l](log-logf-log10-log10f.md) | - | - | - |
`log1p` | [log1pf](log1p-log1pf-log1pl2.md) | [log1p](log1p-log1pf-log1pl2.md) | [log1pl](log1p-log1pf-log1pl2.md) | - | - | - |
`log2` | [log2f](log2-log2f-log2l.md) | [log2](log2-log2f-log2l.md) | [log2l](log2-log2f-log2l.md) | - | - | - |
`logb` | [logbf](logb-logbf-logbl-logb-logbf.md) | [logb](logb-logbf-logbl-logb-logbf.md) | [logbl](logb-logbf-logbl-logb-logbf.md) | - | - | - |
`lrint` | [lrintf](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | [lrint](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | [lrintl](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | - | - | - |
`lround` | [lroundf](lround-lroundf-lroundl-llround-llroundf-llroundl.md) | [lround](lround-lroundf-lroundl-llround-llroundf-llroundl.md) | [lroundl](lround-lroundf-lroundl-llround-llroundf-llroundl.md) | - | - | - |
`nearbyint` | [nearbyintf](nearbyint-nearbyintf-nearbyintl1.md) | [nearbyint](nearbyint-nearbyintf-nearbyintl1.md) | [nearbyintl](nearbyint-nearbyintf-nearbyintl1.md) | - | - | - |
`nextafter` | [nextafterf](nextafter-functions.md) | [nextafter](nextafter-functions.md) | [nextafterl](nextafter-functions.md) | - | - | - |
`nexttoward` | [nexttowardf](nextafter-functions.md) | [nexttoward](nextafter-functions.md) | [nexttowardl](nextafter-functions.md) | - | - | - |
`remainder` | [remainderf](remainder-remainderf-remainderl.md) | [remainder](remainder-remainderf-remainderl.md) | [remainderl](remainder-remainderf-remainderl.md) | - | - | - |
`remquo` | [remquof](remquo-remquof-remquol.md) | [remquo](remquo-remquof-remquol.md) | [remquol](remquo-remquof-remquol.md) | - | - | - |
`rint` | [rintf](rint-rintf-rintl.md) | [rint](rint-rintf-rintl.md) | [rintl](rint-rintf-rintl.md) | - | - | - |
`round` | [roundf](round-roundf-roundl.md) | [round](round-roundf-roundl.md) | [roundl](round-roundf-roundl.md) | - | - | - |
`scalbln` | [scalblnf](scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | [scalbln](scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | [scalblnl](scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | - | - | - |
`scalbn` | [scalbnf](scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | [scalbn](scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | [scalbnl](scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | - | - | - |
`tgamma` | [tgammaf](tgamma-tgammaf-tgammal.md) | [tgamma](tgamma-tgammaf-tgammal.md) | [tgammal](tgamma-tgammaf-tgammal.md) | - | - | - |
`trunc` | [truncf](trunc-truncf-truncl.md) | [trunc](trunc-truncf-truncl.md) | [truncl](trunc-truncf-truncl.md) | - | - | - |
`carg` | - | - | - | [cargf](carg-cargf-cargl.md) | [carg](carg-cargf-cargl.md) | [cargl](carg-cargf-cargl.md) |
`conj` | - | - | - | [conjf](conj-conjf-conjl.md) | [conj](conj-conjf-conjl.md) | [conjl](conj-conjf-conjl.md) |
`creal` | - | - | - | [crealf](creal-crealf-creall.md) | [creal](creal-crealf-creall.md) | [creall](creal-crealf-creall.md) |
`cimag` | - | - | - | [cimagf](cimag-cimagf-cimagl.md) | [cimag](cimag-cimagf-cimagl.md) | [cimagl](cimag-cimagf-cimagl.md) |
`cproj` | - | - | - | [cprojf](cproj-cprojf-cprojl.md) | [cproj](cproj-cprojf-cprojl.md) | [cprojl](cproj-cprojf-cprojl.md) |

## See also

[C Run-Time library reference](c-run-time-library-reference.md)
