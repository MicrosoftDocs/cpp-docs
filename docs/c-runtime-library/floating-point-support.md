---
title: "Math and floating-point support"
description: "Describes floating-point support in the Microsoft Universal C Runtime library (UCRT)"
ms.date: "9/14/2020"
f1_keywords: ["c.math"]
helpviewer_keywords: ["floating-point numbers, math routines", "math routines", "floating-point numbers"]
---
# Math and floating-point support

The Universal C Runtime library (UCRT) provides many integral and floating-point math library functions, including all of the functions required by ISO C99. The floating-point functions are implemented to balance performance with correctness. Because producing the correctly rounded result may be prohibitively expensive, these functions are designed to efficiently produce a close approximation to the correctly rounded result. In most cases, the result produced is within +/-1 ULP (unit of least precision) of the correctly rounded result, though there may be cases where there's greater inaccuracy.

For ISO C Standard 11 (C11) and later, the `<tgmath.h>` header, in addition to including `<math.h>` and `<complex.h>`, provides macros that invoke a corresponding math function based on the types of the parameters. See [Type-generic math](tgmath.md) for details.

Many of the floating point math library functions have different implementations for different CPU architectures. For example, the 32-bit x86 CRT may have a different implementation than the 64-bit x64 CRT. In addition, some of the functions may have multiple implementations for a given CPU architecture. The most efficient implementation is selected dynamically at run-time depending on the instruction sets supported by the CPU. For example, in the 32-bit x86 CRT, some functions have both an x87 implementation and an SSE2 implementation. When running on a CPU that supports SSE2, the faster SSE2 implementation is used. When running on a CPU that doesn't support SSE2, the slower x87 implementation is used. Because different implementations of the math library functions may use different CPU instructions and different algorithms to produce their results, the functions may produce different results across CPUs. In most cases, the results are within +/-1 ULP of the correctly rounded result, but the actual results may vary across CPUs.

Previous 16-bit versions of Microsoft C/C++ and Microsoft Visual C++ supported the **`long double`** type as an 80-bit precision floating-point data type. In later versions of Visual C++, the **`long double`** data type is a 64-bit precision floating-point data type identical to the **`double`** type. The compiler treats **`long double`** and **`double`** as distinct types, but the **`long double`** functions are identical to their **`double`** counterparts. The CRT provides **`long double`** versions of the math functions for ISO C99 source code compatibility, but note that the binary representation may differ from other compilers.

## Supported math and floating-point routines

| Routine | Use |
|---|---|
| [`abs`, `labs`, `llabs`, `_abs64`](./reference/abs-labs-llabs-abs64.md) | Computes the absolute value of an integer type |
| [`acos`, `acosf`, `acosl`](./reference/acos-acosf-acosl.md) | Computes the arc cosine |
| [`acosh`, `acoshf`, `acoshl`](./reference/acosh-acoshf-acoshl.md) | Computes the hyperbolic arc cosine |
| [`asin`, `asinf`, `asinl`](./reference/asin-asinf-asinl.md) | Computes the arc sine |
| [`asinh`, `asinhf`, `asinhl`](./reference/asinh-asinhf-asinhl.md) | Computes the hyperbolic arc sine |
| [`atan`, `atanf`, `atanl`, `atan2`, `atan2f`, `atan2l`](./reference/atan-atanf-atanl-atan2-atan2f-atan2l.md) | Computes the arc tangent |
| [`atanh`, `atanhf`, `atanhl`](./reference/atanh-atanhf-atanhl.md) | Computes the hyperbolic arc tangent |
| [`_atodbl`, `_atodbl_l`](./reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md) | Converts a locale-specific string to a **`double`** |
| [`atof`, `_atof_l`](./reference/atof-atof-l-wtof-wtof-l.md) | Converts a string to a **`double`** |
| [`_atoflt`, `_atoflt_l`, `_atoldbl`, `_atoldbl_l`](./reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md) | Converts a locale-specific string to a **`float`** or **`long double`** |
| [`cbrt`, `cbrtf`, `cbrtl`](./reference/cbrt-cbrtf-cbrtl.md) | Computes the cube root |
| [`ceil`, `ceilf`, `ceill`](./reference/ceil-ceilf-ceill.md) | Computes the ceiling |
| [`_chgsign`, `_chgsignf`, `_chgsignl`](./reference/chgsign-chgsignf-chgsignl.md) | Computes the additive inverse |
| [`_clear87`, `_clearfp`](./reference/clear87-clearfp.md) | Gets and clears the floating-point status register |
| [`_control87`, `_controlfp`, `__control87_2`](./reference/control87-controlfp-control87-2.md) | Gets and sets the floating-point control word |
| [`_controlfp_s`](./reference/controlfp-s.md) | Secure version of **`_controlfp`** |
| [`copysign`, `copysignf`, `copysignl`, `_copysign`, `_copysignf`, `_copysignl`](./reference/copysign-copysignf-copysignl-copysign-copysignf-copysignl.md) | Returns a value that has the magnitude of one argument and the sign of another |
| [`cos`, `cosf`, `cosl`](./reference/cos-cosf-cosl.md) | Computes the sine |
| [`cosh`, `coshf`, `coshl`](./reference/cosh-coshf-coshl.md) | Computes the hyperbolic sine |
| [`div`, `ldiv`, `lldiv`](./reference/div.md) | Computes the quotient and the remainder of two integer values |
| [`_ecvt`](./reference/ecvt.md), [`ecvt`](./reference/posix-ecvt.md) | Converts a **`double`** to a string |
| [`_ecvt_s`](./reference/ecvt-s.md) | Secure version of **`_ecvt`** |
| [`erf`, `erff`, `erfl`](./reference/erf-erff-erfl-erfc-erfcf-erfcl.md) | Computes the error function |
| [`erfc`, `erfcf`, `erfcl`](./reference/erf-erff-erfl-erfc-erfcf-erfcl.md) | Computes the complementary error function |
| [`exp`, `expf`, `expl`](./reference/exp-expf.md) | Computes the exponential *e*<sup>x</sup> |
| [`exp2`, `exp2f`, `exp2l`](./reference/exp2-exp2f-exp2l.md) | Computes the exponential 2<sup>x</sup> |
| [`expm1`, `expm1f`, `expm1l`](./reference/expm1-expm1f-expm1l.md) | Computes *e*<sup>x</sup>-1 |
| [`fabs`, `fabsf`, `fabsl`](./reference/fabs-fabsf-fabsl.md) | Computes the absolute value of a floating-point type |
| [`_fcvt`](./reference/fcvt.md), [`fcvt`](./reference/posix-fcvt.md) | Converts a floating-point number to a string |
| [`_fcvt_s`](./reference/fcvt-s.md) | Secure version of **`_fcvt`** |
| [`fdim`, `fdimf`, `fdiml`](./reference/fdim-fdimf-fdiml.md) | Determines the positive difference between two values |
| [`feclearexcept`](./reference/feclearexcept1.md) | Clears specified floating-point exceptions |
| [`fegetenv`](./reference/fegetenv1.md) | Stores the current floating-point environment |
| [`fegetexceptflag`](./reference/fegetexceptflag2.md) | Gets the specified floating-point exception status |
| [`fegetround`](./reference/fegetround-fesetround2.md) | Gets the floating-point rounding mode |
| [`feholdexcept`](./reference/feholdexcept2.md) | Sets non-stop floating-point exception mode |
| [`feraiseexcept`](./reference/feraiseexcept.md) | Raises the specified floating-point exceptions |
| [`fesetenv`](./reference/fesetenv1.md) | Sets the current floating-point environment |
| [`fesetexceptflag`](./reference/fesetexceptflag2.md) | Sets the specified floating-point status flags |
| [`fesetround`](./reference/fegetround-fesetround2.md) | Sets the specified floating-point rounding mode |
| [`fetestexcept`](./reference/fetestexcept1.md) | Determines which floating-point exception status flags are set |
| [`feupdateenv`](./reference/feupdateenv.md) | Restores a floating-point environment then raises previous exceptions |
| [`floor`, `floorf`, `floorl`](./reference/floor-floorf-floorl.md) | Computes the floor |
| [`fma`, `fmaf`, `fmal`](./reference/fma-fmaf-fmal.md) | Computes a fused multiply-add |
| [`fmax`, `fmaxf`, `fmaxl`](./reference/fmax-fmaxf-fmaxl.md) | Computes the maximum of the arguments |
| [`fmin`, `fminf`, `fminl`](./reference/fmin-fminf-fminl.md) | Computes the minimum of the arguments |
| [`fmod`, `fmodf`, `fmodl`](./reference/fmod-fmodf.md) | Computes the floating-point remainder |
| [`_fpclass`, `_fpclassf`](./reference/fpclass-fpclassf.md) | Returns the classification of a floating-point value |
| [`fpclassify`](./reference/fpclassify.md) | Returns the classification of a floating-point value |
| [`_fpieee_flt`](./reference/fpieee-flt.md) | Sets a handler for floating-point exceptions |
| [`_fpreset`](./reference/fpreset.md) | Resets the floating-point environment |
| [`frexp`, `frexpf`, `frexpl`](./reference/frexp.md) | Gets the mantissa and exponent of a floating-point number |
| [`_gcvt`](./reference/gcvt.md), [`gcvt`](./reference/posix-gcvt.md) | Converts a floating-point number to a string |
| [`_gcvt_s`](./reference/gcvt-s.md) | Secure version of **`_gcvt`** |
| [`_get_FMA3_enable`, `_set_FMA3_enable`](./reference/get-fma3-enable-set-fma3-enable.md) | Gets or sets a flag for use of FMA3 instructions on x64 |
| [`hypot`, `hypotf`, `hypotl`, `_hypot`, `_hypotf`, `_hypotl`](./reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md) | Computes the hypotenuse |
| [`ilogb`, `ilogbf`, `ilogbl`](./reference/ilogb-ilogbf-ilogbl2.md) | Computes the integer base-2 exponent |
| [`imaxabs`](./reference/imaxabs.md) | Computes the absolute value of an integer type |
| [`imaxdiv`](./reference/imaxdiv.md) | Computes the quotient and the remainder of two integer values |
| [`isfinite`, `_finite`, `_finitef`](./reference/finite-finitef.md) | Determines whether a value is finite |
| [`isgreater`, `isgreaterequal`, `isless`, `islessequal`, `islessgreater`, `isunordered`](./reference/floating-point-ordering.md) | Compare the order of two floating point values |
| [`isinf`](./reference/isinf.md) | Determines whether a floating-point value is infinite |
| [`isnan`, `_isnan`, `_isnanf`](./reference/isnan-isnan-isnanf.md) | Tests a floating-point value for NaN |
| [`isnormal`](./reference/isnormal.md) | Tests whether a floating-point value is both finite and not subnormal |
| [`_j0`, `_j1`, `_jn`](./reference/bessel-functions-j0-j1-jn-y0-y1-yn.md) | Computes the Bessel function |
| [`ldexp`, `ldexpf`, `ldexpl`](./reference/ldexp.md) | Computes x*2<sup>n</sup> |
| [`lgamma`, `lgammaf`, `lgammal`](./reference/lgamma-lgammaf-lgammal.md) | Computes the natural logarithm of the absolute value of the gamma function |
| [`llrint`, `llrintf`, `llrintl`](./reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | Rounds a floating-point value to the nearest **`long long`** value |
| [`llround`, `llroundf`, `llroundl`](./reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md) | Rounds a floating-point value to the nearest **`long long`** value |
| [`log`, `logf`, `logl`, `log10`, `log10f`, `log10l`](./reference/log-logf-log10-log10f.md) | Computes the natural or base-10 logarithm |
| [`log1p`, `log1pf`, `log1pl`](./reference/log1p-log1pf-log1pl2.md) | Computes the natural logarithm of 1+x |
| [`log2`, `log2f`, `log2l`](./reference/log2-log2f-log2l.md) | Computes the base-2 logarithm |
| [`logb`, `logbf`, `logbl`, `_logb`, `_logbf`](./reference/logb-logbf-logbl-logb-logbf.md) | Returns the exponent of a floating-point value |
| [`lrint`, `lrintf`, `lrintl`](./reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md) | Rounds a floating-point value to the nearest **`long`** value |
| [`_lrotl`, `_lrotr`](./reference/lrotl-lrotr.md) | Rotates an integer value left or right |
| [`lround`, `lroundf`, `lroundl`](./reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md) | Rounds a floating-point value to the nearest **`long`** value |
| [`_matherr`](./reference/matherr.md) | The default math error handler |
| [`__max`](./reference/max.md) | Macro that returns the larger of two values |
| [`__min`](./reference/min.md) | Macro that returns the smaller of two values |
| [`modf`, `modff`, `modfl`](./reference/modf-modff-modfl.md) | Splits a floating-point value into fractional and integer parts |
| [`nan`, `nanf`, `nanl`](./reference/nan-nanf-nanl.md) | Returns a quiet NaN value |
| [`nearbyint`, `nearbyintf`, `nearbyintl`](./reference/nearbyint-nearbyintf-nearbyintl1.md) | Returns the rounded value |
| [`nextafter`, `nextafterf`, `nextafterl`, `_nextafter`, `_nextafterf`](./reference/nextafter-functions.md) | Returns the next representable floating-point value |
| [`nexttoward`, `nexttowardf`, `nexttowardl`](./reference/nextafter-functions.md) | Returns the next representable floating-point value |
| [`pow`, `powf`, `powl`](./reference/pow-powf-powl.md) | Returns the value of *`x`*<sup>*`y`*</sup> |
| [`remainder`, `remainderf`, `remainderl`](./reference/remainder-remainderf-remainderl.md) | Computes the remainder of the quotient of two floating-point values |
| [`remquo`, `remquof`, `remquol`](./reference/remquo-remquof-remquol.md) | Computes the remainder of two integer values |
| [`rint`, `rintf`, `rintl`](./reference/rint-rintf-rintl.md) | Rounds a floating-point value |
| [`_rotl`, `_rotl64`, `_rotr`, `_rotr64`](./reference/rotl-rotl64-rotr-rotr64.md) | Rotates bits in integer types |
| [`round`, `roundf`, `roundl`](./reference/round-roundf-roundl.md) | Rounds a floating-point value |
| [`_scalb`, `_scalbf`](./reference/scalb.md) | Scales argument by a power of 2 |
| [`scalbn`, `scalbnf`, `scalbnl`, `scalbln`, `scalblnf`, `scalblnl`](./reference/scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md) | Multiplies a floating-point number by an integral power of `FLT_RADIX` |
| [`_set_controlfp`](./reference/set-controlfp.md) | Sets the floating-point control word |
| [`_set_SSE2_enable`](./reference/set-sse2-enable.md) | Enables or disables SSE2 instructions |
| [`signbit`](./reference/signbit.md) | Tests the sign bit of a floating-point value |
| [`sin`, `sinf`, `sinl`](./reference/sin-sinf-sinl.md) | Computes the sine |
| [`sinh`, `sinhf`, `sinhl`](./reference/sinh-sinhf-sinhl.md) | Computes the hyperbolic sine |
| [`sqrt`, `sqrtf`, `sqrtl`](./reference/sqrt-sqrtf-sqrtl.md) | Computes the square root |
| [`_status87`, `_statusfp`, `_statusfp2`](./reference/status87-statusfp-statusfp2.md) | Gets the floating-point status word |
| [`strtof`, `_strtof_l`](./reference/strtof-strtof-l-wcstof-wcstof-l.md) | Converts a string to a **`float`** |
| [`strtold`, `_strtold_l`](./reference/strtold-strtold-l-wcstold-wcstold-l.md) | Converts a string to a **`long double`** |
| [`tan`, `tanf`, `tanl`](./reference/tan-tanf-tanl.md) | Computes the tangent |
| [`tanh`, `tanhf`, `tanhl`](./reference/tanh-tanhf-tanhl.md) | Computes the hyperbolic tangent |
| [`tgamma`, `tgammaf`, `tgammal`](./reference/tgamma-tgammaf-tgammal.md) | Computes the gamma function |
| [`trunc`, `truncf`, `truncl`](./reference/trunc-truncf-truncl.md) | Truncates the fractional part |
| [`_wtof`, `_wtof_l`](./reference/atof-atof-l-wtof-wtof-l.md) | Converts a wide string to a **`double`** |
| [`_y0`, `_y1`, `_yn`](./reference/bessel-functions-j0-j1-jn-y0-y1-yn.md) | Computes the Bessel function |

## See also

[Universal C runtime routines by category](./run-time-routines-by-category.md)\
[Floating-point primitives](./reference/floating-point-primitives.md)
