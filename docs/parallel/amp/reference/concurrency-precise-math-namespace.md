---
title: "Concurrency::precise_math Namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp_math/Concurrency::precise_math"
dev_langs: 
  - "C++"
ms.assetid: ba653308-dc28-4384-b2fd-6cd718a72f91
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Concurrency::precise_math Namespace
Functions in the `precise_math` namespace are C99 compliant. Both single precision and double precision versions of each function are included. For example, `acos` is the double-precision version and `acosf` is the single-precision version. These functions, including the single-precision functions, require extended double-precision support on the accelerator. You can use the [accelerator::supports_double_precision Data Member](accelerator-class.md#supports_double_precision) to determine if you can run these functions on a specific accelerator. 

  
## Syntax  
  
```cpp  
namespace precise_math;  
```  
  
#### Parameters  
  
## Members  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[acos Function](concurrency-precise-math-namespace-functions.md#acos_function)|Overloaded. Calculates the arccosine of the argument|  
|[acosf Function](concurrency-precise-math-namespace-functions.md#acosf_function)|Calculates the arccosine of the argument|  
|[acosh Function](concurrency-precise-math-namespace-functions.md#acosh_function)|Overloaded. Calculates the inverse hyperbolic cosine of the argument|  
|[acoshf Function](concurrency-precise-math-namespace-functions.md#acoshf_function)|Calculates the inverse hyperbolic cosine of the argument|  
|[asin Function](concurrency-precise-math-namespace-functions.md#asin_function)|Overloaded. Calculates the arcsine of the argument|  
|[asinf Function](concurrency-precise-math-namespace-functions.md#asinf_function)|Calculates the arcsine of the argument|  
|[asinh Function](concurrency-precise-math-namespace-functions.md#asinh_function)|Overloaded. Calculates the inverse hyperbolic sine of the argument|  
|[asinhf Function](concurrency-precise-math-namespace-functions.md#asinhf_function)|Calculates the inverse hyperbolic sine of the argument|  
|[atan Function](concurrency-precise-math-namespace-functions.md#atan_function)|Overloaded. Calculates the arctangent of the argument|  
|[atan2 Function](concurrency-precise-math-namespace-functions.md#atan2_function)|Overloaded. Calculates the arctangent of _Y/_X|  
|[atan2f Function](concurrency-precise-math-namespace-functions.md#atan2f_function)|Calculates the arctangent of _Y/_X|  
|[atanf Function](concurrency-precise-math-namespace-functions.md#atanf_function)|Calculates the arctangent of the argument|  
|[atanh Function](concurrency-precise-math-namespace-functions.md#atanh_function)|Overloaded. Calculates the inverse hyperbolic tangent of the argument|  
|[atanhf Function](concurrency-precise-math-namespace-functions.md#atanhf_function)|Calculates the inverse hyperbolic tangent of the argument|  
|[cbrt Function](concurrency-precise-math-namespace-functions.md#cbrt_function)|Overloaded. Computes the real cube root of the argument|  
|[cbrtf Function](concurrency-precise-math-namespace-functions.md#cbrtf_function)|Computes the real cube root of the argument|  
|[ceil Function](concurrency-precise-math-namespace-functions.md#ceil_function)|Overloaded. Calculates the ceiling of the argument|  
|[ceilf Function](concurrency-precise-math-namespace-functions.md#ceilf_function)|Calculates the ceiling of the argument|  
|[copysign Function](concurrency-precise-math-namespace-functions.md#copysign_function)|Overloaded. Produces a value with the magnitude of _X and the sign of _Y|  
|[copysignf Function](concurrency-precise-math-namespace-functions.md#copysignf_function)|Produces a value with the magnitude of _X and the sign of _Y|  
|[cos Function](concurrency-precise-math-namespace-functions.md#cos_function)|Overloaded. Calculates the cosine of the argument|  
|[cosf Function](concurrency-precise-math-namespace-functions.md#cosf_function)|Calculates the cosine of the argument|  
|[cosh Function](concurrency-precise-math-namespace-functions.md#cosh_function)|Overloaded. Calculates the hyperbolic cosine value of the argument|  
|[coshf Function](concurrency-precise-math-namespace-functions.md#coshf_function)|Calculates the hyperbolic cosine value of the argument|  
|[cospi Function](concurrency-precise-math-namespace-functions.md#cospi_function)|Overloaded. Calculates the cosine value of pi * _X|  
|[cospif Function](concurrency-precise-math-namespace-functions.md#cospif_function)|Calculates the cosine value of pi * _X|  
|[erf Function](concurrency-precise-math-namespace-functions.md#erf_function)|Overloaded. Computes the error function of _X|  
|[erfc Function](concurrency-precise-math-namespace-functions.md#erfc_function)|Overloaded. Computes the complementary error function of _X|  
|[erfcf Function](concurrency-precise-math-namespace-functions.md#erfcf_function)|Computes the complementary error function of _X|  
|[erfcinv Function](concurrency-precise-math-namespace-functions.md#erfcinv_function)|Overloaded. Computes the inverse complementary error function of _X|  
|[erfcinvf Function](concurrency-precise-math-namespace-functions.md#erfcinvf_function)|Computes the inverse complementary error function of _X|  
|[erff Function](concurrency-precise-math-namespace-functions.md#erff_function)|Computes the error function of _X|  
|[erfinv Function](concurrency-precise-math-namespace-functions.md#erfinv_function)|Overloaded. Computes the inverse error function of _X|  
|[erfinvf Function](concurrency-precise-math-namespace-functions.md#erfinvf_function)|Computes the inverse error function of _X|  
|[exp Function](concurrency-precise-math-namespace-functions.md#exp_function)|Overloaded. Calculates the base-e exponential of the argument|  
|[exp10 Function](concurrency-precise-math-namespace-functions.md#exp10_function)|Overloaded. Calculates the base-10 exponential of the argument|  
|[exp10f Function](concurrency-precise-math-namespace-functions.md#exp10f_function)|Calculates the base-10 exponential of the argument|  
|[exp2 Function](concurrency-precise-math-namespace-functions.md#exp2_function)|Overloaded. Calculates the base-2 exponential of the argument|  
|[exp2f Function](concurrency-precise-math-namespace-functions.md#exp2f_function)|Calculates the base-2 exponential of the argument|  
|[expf Function](concurrency-precise-math-namespace-functions.md#expf_function)|Calculates the base-e exponential of the argument|  
|[expm1 Function](concurrency-precise-math-namespace-functions.md#expm1_function)|Overloaded. Calculates the base-e exponential of the argument, minus 1|  
|[expm1f Function](concurrency-precise-math-namespace-functions.md#expm1f_function)|Calculates the base-e exponential of the argument, minus 1|  
|[fabs Function](concurrency-precise-math-namespace-functions.md#fabs_function)|Overloaded. Returns the absolute value of the argument|  
|[fabsf Function](concurrency-precise-math-namespace-functions.md#fabsf_function)|Returns the absolute value of the argument|  
|[fdim Function](concurrency-precise-math-namespace-functions.md#fdim_function)|Overloaded. Determines the positive difference between the arguments|  
|[fdimf Function](concurrency-precise-math-namespace-functions.md#fdimf_function)|Determines the positive difference between the arguments|  
|[floor Function](concurrency-precise-math-namespace-functions.md#floor_function)|Overloaded. Calculates the floor of the argument|  
|[floorf Function](concurrency-precise-math-namespace-functions.md#floorf_function)|Calculates the floor of the argument|  
|[fma Function](concurrency-precise-math-namespace-functions.md#fma_function)|Overloaded. Compute (_X * _Y) + _Z, rounded as one ternary operation|  
|[fmaf Function](concurrency-precise-math-namespace-functions.md#fmaf_function)|Compute (_X * _Y) + _Z, rounded as one ternary operation|  
|[fmax Function](concurrency-precise-math-namespace-functions.md#fmax_function)|Overloaded. Determine the maximum numeric value of the arguments|  
|[fmaxf Function](concurrency-precise-math-namespace-functions.md#fmaxf_function)|Determine the maximum numeric value of the arguments|  
|[fmin Function](concurrency-precise-math-namespace-functions.md#fmin_function)|Overloaded. Determine the minimum numeric value of the arguments|  
|[fminf Function](concurrency-precise-math-namespace-functions.md#fminf_function)|Determine the minimum numeric value of the arguments|  
|[fmod Function (C++ AMP)](concurrency-precise-math-namespace-functions.md#fmod_function)|Overloaded. Calculates the floating-point remainder of _X/_Y|  
|[fmodf Function](concurrency-precise-math-namespace-functions.md#fmodf_function)|Calculates the floating-point remainder of _X/_Y|  
|[fpclassify Function](concurrency-precise-math-namespace-functions.md#fpclassify_function)|Overloaded. Classifies the argument value as NaN, infinite, normal, subnormal, zero|  
|[frexp Function](concurrency-precise-math-namespace-functions.md#frexp_function)|Overloaded. Gets the mantissa and exponent of _X|  
|[frexpf Function](concurrency-precise-math-namespace-functions.md#frexpf_function)|Gets the mantissa and exponent of _X|  
|[hypot Function](concurrency-precise-math-namespace-functions.md#hypot_function)|Overloaded. Computes the square root of the sum of the squares of _X and _Y|  
|[hypotf Function](concurrency-precise-math-namespace-functions.md#hypotf_function)|Computes the square root of the sum of the squares of _X and _Y|  
|[ilogb Function](concurrency-precise-math-namespace-functions.md#ilogb_function)|Overloaded. Extract the exponent of _X as a signed int value|  
|[ilogbf Function](concurrency-precise-math-namespace-functions.md#ilogbf_function)|Extract the exponent of _X as a signed int value|  
|[isfinite Function](concurrency-precise-math-namespace-functions.md#isfinite_function)|Overloaded. Determines whether the argument has a finite value|  
|[isinf Function](concurrency-precise-math-namespace-functions.md#isinf_function)|Overloaded. Determines whether the argument is an infinity|  
|[isnan Function](concurrency-precise-math-namespace-functions.md#isnan_function)|Overloaded. Determines whether the argument is a NaN|  
|[isnormal Function](concurrency-precise-math-namespace-functions.md#isnormal_function)|Overloaded. Determines whether the argument is a normal|  
|[ldexp Function](concurrency-precise-math-namespace-functions.md#ldexp_function)|Overloaded. Computes a real number from the mantissa and exponent|  
|[ldexpf Function](concurrency-precise-math-namespace-functions.md#ldexpf_function)|Computes a real number from the mantissa and exponent|  
|[lgamma Function](concurrency-precise-math-namespace-functions.md#lgamma_function)|Overloaded. Computes the natural logarithm of the absolute value of gamma of the argument|  
|[lgammaf Function](concurrency-precise-math-namespace-functions.md#lgammaf_function)|Computes the natural logarithm of the absolute value of gamma of the argument|  
|[log Function](concurrency-precise-math-namespace-functions.md#log_function)|Overloaded. Calculates the base-e logarithm of the argument|  
|[log10 Function](concurrency-precise-math-namespace-functions.md#log10_function)|Overloaded. Calculates the base-10 logarithm of the argument|  
|[log10f Function](concurrency-precise-math-namespace-functions.md#log10f_function)|Calculates the base-10 logarithm of the argument|  
|[log1p Function](concurrency-precise-math-namespace-functions.md#log1p_function)|Overloaded. Calculates the base-e logarithm of 1 plus the argument|  
|[log1pf Function](concurrency-precise-math-namespace-functions.md#log1pf_function)|Calculates the base-e logarithm of 1 plus the argument|  
|[log2 Function](concurrency-precise-math-namespace-functions.md#log2_function)|Overloaded. Calculates the base-2 logarithm of the argument|  
|[log2f Function](concurrency-precise-math-namespace-functions.md#log2f_function)|Calculates the base-2 logarithm of the argument|  
|[logb Function](concurrency-precise-math-namespace-functions.md#logb_function)|Overloaded. Extracts the exponent of _X, as a signed integer value in floating-point format|  
|[logbf Function](concurrency-precise-math-namespace-functions.md#logbf_function)|Extracts the exponent of _X, as a signed integer value in floating-point format|  
|[logf Function](concurrency-precise-math-namespace-functions.md#logf_function)|Calculates the base-e logarithm of the argument|  
|[modf Function](concurrency-precise-math-namespace-functions.md#modf_function)|Overloaded. Splits _X into fractional and integer parts.|  
|[modff Function](concurrency-precise-math-namespace-functions.md#modff_function)|Splits _X into fractional and integer parts.|  
|[nan Function](concurrency-precise-math-namespace-functions.md#nan_function)|Returns a quiet NaN|  
|[nanf Function](concurrency-precise-math-namespace-functions.md#nanf_function)|Returns a quiet NaN|  
|[nearbyint Function](concurrency-precise-math-namespace-functions.md#nearbyint_function)|Overloaded. Rounds the argument to an integer value in floating-point format, using the current rounding direction.|  
|[nearbyintf Function](concurrency-precise-math-namespace-functions.md#nearbyintf_function)|Rounds the argument to an integer value in floating-point format, using the current rounding direction.|  
|[nextafter Function](concurrency-precise-math-namespace-functions.md#nextafter_function)|Overloaded. Determine the next representable value, in the type of the function, after _X in the direction of _Y|  
|[nextafterf Function](concurrency-precise-math-namespace-functions.md#nextafterf_function)|Determine the next representable value, in the type of the function, after _X in the direction of _Y|  
|[phi Function](concurrency-precise-math-namespace-functions.md#phi_function)|Overloaded. Returns the cumulative distribution function of the argument|  
|[phif Function](concurrency-precise-math-namespace-functions.md#phif_function)|Returns the cumulative distribution function of the argument|  
|[pow Function](concurrency-precise-math-namespace-functions.md#pow_function)|Overloaded. Calculates _X raised to the power of _Y|  
|[powf Function](concurrency-precise-math-namespace-functions.md#powf_function)|Calculates _X raised to the power of _Y|  
|[probit Function](concurrency-precise-math-namespace-functions.md#probit_function)|Overloaded. Returns the inverse cumulative distribution function of the argument|  
|[probitf Function](concurrency-precise-math-namespace-functions.md#probitf_function)|Returns the inverse cumulative distribution function of the argument|  
|[rcbrt Function](concurrency-precise-math-namespace-functions.md#rcbrt_function)|Overloaded. Returns the reciprocal of the cube root of the argument|  
|[rcbrtf Function](concurrency-precise-math-namespace-functions.md#rcbrtf_function)|Returns the reciprocal of the cube root of the argument|  
|[remainder Function](concurrency-precise-math-namespace-functions.md#remainder_function)|Overloaded. Computes the remainder: _X REM _Y|  
|[remainderf Function](concurrency-precise-math-namespace-functions.md#remainderf_function)|Computes the remainder: _X REM _Y|  
|[remquo Function](concurrency-precise-math-namespace-functions.md#remquo_function)|Overloaded. Computes the same remainder as _X REM _Y. Also calculates the lower 23 bits of the integral quotient _X/_Y, and gives that value the same sign as _X/_Y. It stores this signed value in the integer pointed to by _Quo.|  
|[remquof Function](concurrency-precise-math-namespace-functions.md#remquof_function)|Computes the same remainder as _X REM _Y. Also calculates the lower 23 bits of the integral quotient _X/_Y, and gives that value the same sign as _X/_Y. It stores this signed value in the integer pointed to by _Quo.|  
|[round Function](concurrency-precise-math-namespace-functions.md#round_function)|Overloaded. Rounds _X to the nearest integer|  
|[roundf Function](concurrency-precise-math-namespace-functions.md#roundf_function)|Rounds _X to the nearest integer|  
|[rsqrt Function](concurrency-precise-math-namespace-functions.md#rsqrt_function)|Overloaded. Returns the reciprocal of the square root of the argument|  
|[rsqrtf Function](concurrency-precise-math-namespace-functions.md#rsqrtf_function)|Returns the reciprocal of the square root of the argument|  
|[scalb Function](concurrency-precise-math-namespace-functions.md#scalb_function)|Overloaded. Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbf Function](concurrency-precise-math-namespace-functions.md#scalbf_function)|Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbn Function](concurrency-precise-math-namespace-functions.md#scalbn_function)|Overloaded. Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbnf Function](concurrency-precise-math-namespace-functions.md#scalbnf_function)|Multiplies _X by FLT_RADIX to the power _Y|  
|[signbit Function](concurrency-precise-math-namespace-functions.md#signbit_function)|Overloaded. Determines whether the sign of _X is negative|  
|[signbitf Function](concurrency-precise-math-namespace-functions.md#signbitf_function)|Determines whether the sign of _X is negative|  
|[sin Function](concurrency-precise-math-namespace-functions.md#sin_function)|Overloaded. Calculates the sine value of the argument|  
|[sincos Function](concurrency-precise-math-namespace-functions.md#sincos_function)|Overloaded. Calculates sine and cosine value of _X|  
|[sincosf Function](concurrency-precise-math-namespace-functions.md#sincosf_function)|Calculates sine and cosine value of _X|  
|[sinf Function](concurrency-precise-math-namespace-functions.md#sinf_function)|Calculates the sine value of the argument|  
|[sinh Function](concurrency-precise-math-namespace-functions.md#sinh_function)|Overloaded. Calculates the hyperbolic sine value of the argument|  
|[sinhf Function](concurrency-precise-math-namespace-functions.md#sinhf_function)|Calculates the hyperbolic sine value of the argument|  
|[sinpi Function](concurrency-precise-math-namespace-functions.md#sinpi_function)|Overloaded. Calculates the sine value of pi * _X|  
|[sinpif Function](concurrency-precise-math-namespace-functions.md#sinpif_function)|Calculates the sine value of pi * _X|  
|[sqrt Function](concurrency-precise-math-namespace-functions.md#sqrt_function)|Overloaded. Calculates the squre root of the argument|  
|[sqrtf Function](concurrency-precise-math-namespace-functions.md#sqrtf_function)|Calculates the squre root of the argument|  
|[tan Function](concurrency-precise-math-namespace-functions.md#tan_function)|Overloaded. Calculates the tangent value of the argument|  
|[tanf Function](concurrency-precise-math-namespace-functions.md#tanf_function)|Calculates the tangent value of the argument|  
|[tanh Function](concurrency-precise-math-namespace-functions.md#tanh_function)|Overloaded. Calculates the hyperbolic tangent value of the argument|  
|[tanhf Function](concurrency-precise-math-namespace-functions.md#tanhf_function)|Calculates the hyperbolic tangent value of the argument|  
|[tanpi Function](concurrency-precise-math-namespace-functions.md#tanpi_function)|Overloaded. Calculates the tangent value of pi * _X|  
|[tanpif Function](concurrency-precise-math-namespace-functions.md#tanpif_function)|Calculates the tangent value of pi * _X|  
|[tgamma Function](concurrency-precise-math-namespace-functions.md#tgamma_function)|Overloaded. Computes the gamma function of _X|  
|[tgammaf Function](concurrency-precise-math-namespace-functions.md#tgammaf_function)|Computes the gamma function of _X|  
|[trunc Function](concurrency-precise-math-namespace-functions.md#trunc_function)|Overloaded. Truncates the argument to the integer component|  
|[truncf Function](concurrency-precise-math-namespace-functions.md#truncf_function)|Truncates the argument to the integer component|  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
