---
title: "Math and floating-point support | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["c.math"]
dev_langs: ["C++"]
helpviewer_keywords: ["floating-point numbers, math routines", "math routines", "floating-point numbers"]
ms.assetid: e4fcaf69-5c8e-4854-a9bb-1f412042131e
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Math and floating-point support

The Universal C Runtime library (UCRT) provides many integral and floating-point math library functions, including all of those required by ISO C99. The floating-point functions are implemented to balance performance with correctness. Because producing the correctly rounded result may be prohibitively expensive, these functions are designed to efficiently produce a close approximation to the correctly rounded result. In most cases, the result produced is within +/-1 ulp of the correctly rounded result, though there may be cases where there is greater inaccuracy.

Many of the floating point math library functions have different implementations for different CPU architectures. For example, the 32-bit x86 CRT may have a different implementation than the 64-bit x64 CRT. In addition, some of the functions may have multiple implementations for a given CPU architecture. The most efficient implementation is selected dynamically at run-time depending on the instruction sets supported by the CPU. For example, in the 32-bit x86 CRT, some functions have both an x87 implementation and an SSE2 implementation. When running on a CPU that supports SSE2, the faster SSE2 implementation is used. When running on a CPU that does not support SSE2, the slower x87 implementation is used. Because different implementations of the math library functions may use different CPU instructions and different algorithms to produce their results, the functions may produce different results across CPUs. In most cases, the results are within +/-1 ulp of the correctly rounded result, but the actual results may vary across CPUs.

Previous 16-bit versions of Microsoft C/C++ and Microsoft Visual C++ supported the **long double** type as an 80-bit precision floating-point data type. In later versions of Visual C++, the **long double** data type is a 64-bit precision floating-point data type identical to the **double** type. The compiler treats **long double** and **double** as distinct types, but the **long double** functions are identical to their **double** counterparts. The CRT provides **long double** versions of the math functions for ISO C99 source code compatibility, but note that the binary representation may differ from other compilers.

## Supported math and floating-point routines

The CRT supports these floating point functions:

|Routine|Use|
|-|-|
[abs, labs, llabs, _abs64](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|Computes the absolute value of an integer type
[acos, acosf, acosl](../c-runtime-library/reference/acos-acosf-acosl.md)|Computes the arc cosine
[acosh, acoshf, acoshl](../c-runtime-library/reference/acosh-acoshf-acoshl.md)|Computes the hyperbolic arc cosine
[asin, asinf, asinl](../c-runtime-library/reference/asin-asinf-asinl.md)|Computes the arc sine
[asinh, asinhf, asinhl](../c-runtime-library/reference/asinh-asinhf-asinhl.md)|Computes the hyperbolic arc sine
[atan, atanf, atanl, atan2, atan2f, atan2l](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|Computes the arc tangent
[atanh, atanhf, atanhl](../c-runtime-library/reference/atanh-atanhf-atanhl.md)|Computes the hyperbolic arc tangent
[_atodbl, _atodbl_l](../c-runtime-library/reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)|Converts a locale-specific string to a **double**
[atof, _atof_l](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)|Converts a string to a **double**
[_atoflt, _atoflt_l, _atoldbl, _atoldbl_l](../c-runtime-library/reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)|Converts a locale-specific string to a **float** or **long double**
[cbrt, cbrtf, cbrtl](../c-runtime-library/reference/cbrt-cbrtf-cbrtl.md)|Computes the cube root
[ceil, ceilf, ceill](../c-runtime-library/reference/ceil-ceilf-ceill.md)|Computes the ceiling
[_chgsign, _chgsignf, _chgsignl](../c-runtime-library/reference/chgsign-chgsignf-chgsignl.md)|Computes the additive inverse
[_clear87, _clearfp](../c-runtime-library/reference/clear87-clearfp.md)|Gets and clears the floating-point status register
[_control87, \__control87_2, _controlfp](../c-runtime-library/reference/control87-controlfp-control87-2.md)|Gets and sets the floating-point control word
[_controlfp_s](../c-runtime-library/reference/controlfp-s.md)|Secure version of **_controlfp**
[copysign, copysignf, copysignl, _copysign, _copysignf, _copysignl](../c-runtime-library/reference/copysign-copysignf-copysignl-copysign-copysignf-copysignl.md)|Returns a value that has the magnitude of one argument and the sign of another
[cos, cosf, cosl](../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)|Computes the sine
[cosh, coshf, coshl](../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)|Computes the hyperbolic sine
[div, ldiv, lldiv](../c-runtime-library/reference/div.md)|Computes the quotient and the remainder of two integer values
[_ecvt](../c-runtime-library/reference/ecvt.md), [ecvt](../c-runtime-library/reference/posix-ecvt.md)|Converts a **double** to a string
[_ecvt_s](../c-runtime-library/reference/ecvt-s.md)|Secure version of **_ecvt**
[erf, erff, erfl](../c-runtime-library/reference/erf-erff-erfl-erfc-erfcf-erfcl.md)|Computes the error function
[erfc, erfcf, erfcl](../c-runtime-library/reference/erf-erff-erfl-erfc-erfcf-erfcl.md)|Computes the complementary error function
[exp, expf, expl](../c-runtime-library/reference/exp-expf.md)|Computes the exponential *e*<sup>x</sup>
[exp2, exp2f, exp2l](../c-runtime-library/reference/exp2-exp2f-exp2l.md)|Computes the exponential 2<sup>x</sup>
[expm1, expm1f, expm1l](../c-runtime-library/reference/expm1-expm1f-expm1l.md)|Computes *e*<sup>x</sup>-1
[fabs, fabsf, fabsl](../c-runtime-library/reference/fabs-fabsf-fabsl.md)|Computes the absolute value of a floating-point type
[_fcvt](../c-runtime-library/reference/fcvt.md), [fcvt](../c-runtime-library/reference/posix-fcvt.md)|Converts a floating-point number to a string
[_fcvt_s](../c-runtime-library/reference/fcvt-s.md)|Secure version of **_fcvt**
[fdim, fdimf, fdiml](../c-runtime-library/reference/fdim-fdimf-fdiml.md)|Determines the positive difference between two values
[feclearexcept](../c-runtime-library/reference/feclearexcept1.md)|Clears specified floating-point exceptions
[fegetenv](../c-runtime-library/reference/fegetenv1.md)|Stores the current floating-point environment
[fegetexceptflag](../c-runtime-library/reference/fegetexceptflag2.md)|Gets the specified floating-point exception status
[fegetround](../c-runtime-library/reference/fegetround-fesetround2.md)|Gets the floating-point rounding mode
[feholdexcept](../c-runtime-library/reference/feholdexcept2.md)|Sets non-stop floating-point exception mode
[feraiseexcept](../c-runtime-library/reference/feraiseexcept.md)|Raises the specified floating-point exceptions
[fesetenv](../c-runtime-library/reference/fesetenv1.md)|Sets the current floating-point environment
[fesetexceptflag](../c-runtime-library/reference/fesetexceptflag2.md)|Sets the specified floating-point status flags
[fesetround](../c-runtime-library/reference/fegetround-fesetround2.md)|Sets the specified floating-point rounding mode
[fetestexcept](../c-runtime-library/reference/fetestexcept1.md)|Determines which floating-point exception status flags are set
[feupdateenv](../c-runtime-library/reference/feupdateenv.md)|Restores a floating-point environment then raises previous exceptions
[_finite, _finitef](../c-runtime-library/reference/finite-finitef.md)|Determines whether a value is finite
[floor, floorf, floorl](../c-runtime-library/reference/floor-floorf-floorl.md)|Computes the floor
[fma, fmaf, fmal](../c-runtime-library/reference/fma-fmaf-fmal.md)|Computes a fused multiply-add
[fmax, fmaxf, fmaxl](../c-runtime-library/reference/fmax-fmaxf-fmaxl.md)|Computes the maximum of the arguments
[fmin, fminf, fminl](../c-runtime-library/reference/fmin-fminf-fminl.md)|Computes the minumum of the arguments
[fmod, fmodf, fmodl](../c-runtime-library/reference/fmod-fmodf.md)|Computes the floating-point remainder
[_fpclass, _fpclassf](../c-runtime-library/reference/fpclass-fpclassf.md)|Returns the classification of a floating-point value
[fpclassify](../c-runtime-library/reference/fpclassify.md)|Returns the classification of a floating-point value
[_fpieee_flt](../c-runtime-library/reference/fpieee-flt.md)|Sets a handler for floating-point exceptions
[_fpreset](../c-runtime-library/reference/fpreset.md)|Resets the floating-point environment
[frexp, frexpf, frexpl](../c-runtime-library/reference/frexp.md)|Gets the mantissa and exponent of a floating-point number
[_gcvt](../c-runtime-library/reference/gcvt.md), [gcvt](../c-runtime-library/reference/posix-gcvt.md)|Converts a floating-point number to a string
[_gcvt_s](../c-runtime-library/reference/gcvt-s.md)|Secure version of **_gcvt**
[_get_FMA3_enable, _set_FMA3_enable](../c-runtime-library/reference/get-fma3-enable-set-fma3-enable.md)|Gets or sets a flag for use of FMA3 instructions on x64
[hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl](../c-runtime-library/reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md)|Computes the hypotenuse
[ilogb, ilogbf, ilogbl](../c-runtime-library/reference/ilogb-ilogbf-ilogbl2.md)|Computes the integer base-2 exponent
[imaxabs](../c-runtime-library/reference/imaxabs.md)|Computes the absolute value of an integer type
[imaxdiv](../c-runtime-library/reference/imaxdiv.md)|Computes the quotient and the remainder of two integer values
[isnan, _isnan, _isnanf](../c-runtime-library/reference/isnan-isnan-isnanf.md)|Tests a floating-point value for NaN
[_j0, _j1, _jn](../c-runtime-library/reference/bessel-functions-j0-j1-jn-y0-y1-yn.md)|Computes the Bessel function
[ldexp, ldexpf, ldexpl](../c-runtime-library/reference/ldexp.md)|Computes x*2<sup>n</sup>
[lgamma, lgammaf, lgammal](../c-runtime-library/reference/lgamma-lgammaf-lgammal.md)|Computes the natural logarithm of the absolute value of the gamma function
[llrint, llrintf, llrintl](../c-runtime-library/reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)|Rounds a floating-point value to the nearest **long long** value
[llround, llroundf, llroundl](../c-runtime-library/reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md)|Rounds a floating-point value to the nearest **long long** value
[log, logf, logl, log10, log10f, log10l](../c-runtime-library/reference/log-logf-log10-log10f.md)|Computes the natural or base-10 logarithm
[log1p, log1pf, log1pl](../c-runtime-library/reference/log1p-log1pf-log1pl2.md)|Computes the natural logarithm of 1+x
[log2, log2f, log2l](../c-runtime-library/reference/log2-log2f-log2l.md)|Computes the base-2 logarithm
[logb, logbf, logbl, _logb, _logbf](../c-runtime-library/reference/logb-logbf-logbl-logb-logbf.md)|Returns the exponent of a floating-point value
[lrint, lrintf, lrintl](../c-runtime-library/reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)|Rounds a floating-point value to the nearest **long** value
[_lrotl, _lrotr](../c-runtime-library/reference/lrotl-lrotr.md)|Rotates an integer value left or right
[lround, lroundf, lroundl](../c-runtime-library/reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md)|Rounds a floating-point value to the nearest **long** value
[_matherr](../c-runtime-library/reference/matherr.md)|The default math error handler
[__max](../c-runtime-library/reference/max.md)|Macro that returns the larger of two values
[__min](../c-runtime-library/reference/min.md)|Macro that returns the smaller of two values
[modf, modff, modfl](../c-runtime-library/reference/modf-modff-modfl.md)|Splits a floating-point value into fractional and integer parts
[nan, nanf, nanl](../c-runtime-library/reference/nan-nanf-nanl.md)|Returns a quiet NaN value
[nearbyint, nearbyintf, nearbyintl](../c-runtime-library/reference/nearbyint-nearbyintf-nearbyintl1.md)|Returns the rounded value
[nextafter, nextafterf, nextafterl, _nextafter, _nextafterf](../c-runtime-library/reference/nextafter-functions.md)|Returns the next representable floating-point value
[nexttoward, nexttowardf, nexttowardl](../c-runtime-library/reference/nextafter-functions.md)|Returns the next representable floating-point value
[pow, powf, powl](../c-runtime-library/reference/pow-powf-powl.md)|Returns the value of *x*<sup>*y*</sup>
[remainder, remainderf, remainderl](../c-runtime-library/reference/remainder-remainderf-remainderl.md)|Computes the remainder of the quotient of two floating-point values
[remquo, remquof, remquol](../c-runtime-library/reference/remquo-remquof-remquol.md)|Computes the remainder of two integer values
[rint, rintf, rintl](../c-runtime-library/reference/rint-rintf-rintl.md)|Rounds a floating-point value
[_rotl, _rotl64, _rotr, _rotr64](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|Rotates bits in integer types
[round, roundf, roundl](../c-runtime-library/reference/round-roundf-roundl.md)|Rounds a floating-point value
[_scalb, _scalbf](../c-runtime-library/reference/scalb.md)|Scales argument by a power of 2
[scalbn, scalbnf, scalbnl, scalbln, scalblnf, scalblnl](../c-runtime-library/reference/scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md)|Multiplies a floating-point number by an integral power of **FLT_RADIX**
[_set_controlfp](../c-runtime-library/reference/set-controlfp.md)|
[_set_SSE2_enable](../c-runtime-library/reference/set-sse2-enable.md)|
[sin, sinf, sinl](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)|
[sinh, sinhf, sinhl](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)|
[sqrt, sqrtf, sqrtl](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|
[_status87, _statusfp, _statusfp2](../c-runtime-library/reference/status87-statusfp-statusfp2.md)|
[strtof, _strtof_l](../c-runtime-library/reference/strtof-strtof-l-wcstof-wcstof-l.md)|
[strtold, _strtold_l](../c-runtime-library/reference/strtold-strtold-l-wcstold-wcstold-l.md)|
[tan, tanf, tanl](../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)|
[tanh, tanhf, tanhl](../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)|
[tgamma, tgammaf, tgammal](../c-runtime-library/reference/tgamma-tgammaf-tgammal.md)|
[trunc, truncf, truncl](../c-runtime-library/reference/trunc-truncf-truncl.md)|
[_wtof, _wtof_l](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)|
[_y0, _y1, _yn](../c-runtime-library/reference/bessel-functions-j0-j1-jn-y0-y1-yn.md)|

## See also

[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)