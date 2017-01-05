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
|[acos Function](concurrency-precise-math-namespace-functions.md#acos)|Overloaded. Calculates the arccosine of the argument|  
|[acosf Function](concurrency-precise-math-namespace-functions.md#acosf)|Calculates the arccosine of the argument|  
|[acosh Function](concurrency-precise-math-namespace-functions.md#acosh)|Overloaded. Calculates the inverse hyperbolic cosine of the argument|  
|[acoshf Function](concurrency-precise-math-namespace-functions.md#acoshf)|Calculates the inverse hyperbolic cosine of the argument|  
|[asin Function](concurrency-precise-math-namespace-functions.md#asin)|Overloaded. Calculates the arcsine of the argument|  
|[asinf Function](concurrency-precise-math-namespace-functions.md#asinf)|Calculates the arcsine of the argument|  
|[asinh Function](concurrency-precise-math-namespace-functions.md#asinh)|Overloaded. Calculates the inverse hyperbolic sine of the argument|  
|[asinhf Function](concurrency-precise-math-namespace-functions.md#asinhf)|Calculates the inverse hyperbolic sine of the argument|  
|[atan Function](concurrency-precise-math-namespace-functions.md#atan)|Overloaded. Calculates the arctangent of the argument|  
|[atan2 Function](concurrency-precise-math-namespace-functions.md#atan2)|Overloaded. Calculates the arctangent of _Y/_X|  
|[atan2f Function](concurrency-precise-math-namespace-functions.md#atan2f)|Calculates the arctangent of _Y/_X|  
|[atanf Function](concurrency-precise-math-namespace-functions.md#atanf)|Calculates the arctangent of the argument|  
|[atanh Function](concurrency-precise-math-namespace-functions.md#atanh)|Overloaded. Calculates the inverse hyperbolic tangent of the argument|  
|[atanhf Function](concurrency-precise-math-namespace-functions.md#atanhf)|Calculates the inverse hyperbolic tangent of the argument|  
|[cbrt Function](concurrency-precise-math-namespace-functions.md#cbrt)|Overloaded. Computes the real cube root of the argument|  
|[cbrtf Function](concurrency-precise-math-namespace-functions.md#cbrtf)|Computes the real cube root of the argument|  
|[ceil Function](concurrency-precise-math-namespace-functions.md#ceil)|Overloaded. Calculates the ceiling of the argument|  
|[ceilf Function](concurrency-precise-math-namespace-functions.md#ceilf)|Calculates the ceiling of the argument|  
|[copysign Function](concurrency-precise-math-namespace-functions.md#copysign)|Overloaded. Produces a value with the magnitude of _X and the sign of _Y|  
|[copysignf Function](concurrency-precise-math-namespace-functions.md#copysignf)|Produces a value with the magnitude of _X and the sign of _Y|  
|[cos Function](concurrency-precise-math-namespace-functions.md#cos)|Overloaded. Calculates the cosine of the argument|  
|[cosf Function](concurrency-precise-math-namespace-functions.md#cosf)|Calculates the cosine of the argument|  
|[cosh Function](concurrency-precise-math-namespace-functions.md#cosh)|Overloaded. Calculates the hyperbolic cosine value of the argument|  
|[coshf Function](concurrency-precise-math-namespace-functions.md#coshf)|Calculates the hyperbolic cosine value of the argument|  
|[cospi Function](concurrency-precise-math-namespace-functions.md#cospi)|Overloaded. Calculates the cosine value of pi * _X|  
|[cospif Function](concurrency-precise-math-namespace-functions.md#cospif)|Calculates the cosine value of pi * _X|  
|[erf Function](concurrency-precise-math-namespace-functions.md#erf)|Overloaded. Computes the error function of _X|  
|[erfc Function](concurrency-precise-math-namespace-functions.md#erfc)|Overloaded. Computes the complementary error function of _X|  
|[erfcf Function](concurrency-precise-math-namespace-functions.md#erfcf)|Computes the complementary error function of _X|  
|[erfcinv Function](concurrency-precise-math-namespace-functions.md#erfcinv)|Overloaded. Computes the inverse complementary error function of _X|  
|[erfcinvf Function](concurrency-precise-math-namespace-functions.md#erfcinvf)|Computes the inverse complementary error function of _X|  
|[erff Function](concurrency-precise-math-namespace-functions.md#erff)|Computes the error function of _X|  
|[erfinv Function](concurrency-precise-math-namespace-functions.md#erfinv)|Overloaded. Computes the inverse error function of _X|  
|[erfinvf Function](concurrency-precise-math-namespace-functions.md#erfinvf)|Computes the inverse error function of _X|  
|[exp Function](concurrency-precise-math-namespace-functions.md#exp)|Overloaded. Calculates the base-e exponential of the argument|  
|[exp10 Function](concurrency-precise-math-namespace-functions.md#exp10)|Overloaded. Calculates the base-10 exponential of the argument|  
|[exp10f Function](concurrency-precise-math-namespace-functions.md#exp10f)|Calculates the base-10 exponential of the argument|  
|[exp2 Function](concurrency-precise-math-namespace-functions.md#exp2)|Overloaded. Calculates the base-2 exponential of the argument|  
|[exp2f Function](concurrency-precise-math-namespace-functions.md#exp2f)|Calculates the base-2 exponential of the argument|  
|[expf Function](concurrency-precise-math-namespace-functions.md#expf)|Calculates the base-e exponential of the argument|  
|[expm1 Function](concurrency-precise-math-namespace-functions.md#expm1)|Overloaded. Calculates the base-e exponential of the argument, minus 1|  
|[expm1f Function](concurrency-precise-math-namespace-functions.md#expm1f)|Calculates the base-e exponential of the argument, minus 1|  
|[fabs Function](concurrency-precise-math-namespace-functions.md#fabs)|Overloaded. Returns the absolute value of the argument|  
|[fabsf Function](concurrency-precise-math-namespace-functions.md#fabsf)|Returns the absolute value of the argument|  
|[fdim Function](concurrency-precise-math-namespace-functions.md#fdim)|Overloaded. Determines the positive difference between the arguments|  
|[fdimf Function](concurrency-precise-math-namespace-functions.md#fdimf)|Determines the positive difference between the arguments|  
|[floor Function](concurrency-precise-math-namespace-functions.md#floor)|Overloaded. Calculates the floor of the argument|  
|[floorf Function](concurrency-precise-math-namespace-functions.md#floorf)|Calculates the floor of the argument|  
|[fma Function](concurrency-precise-math-namespace-functions.md#fma)|Overloaded. Compute (_X * _Y) + _Z, rounded as one ternary operation|  
|[fmaf Function](concurrency-precise-math-namespace-functions.md#fmaf)|Compute (_X * _Y) + _Z, rounded as one ternary operation|  
|[fmax Function](concurrency-precise-math-namespace-functions.md#fmax)|Overloaded. Determine the maximum numeric value of the arguments|  
|[fmaxf Function](concurrency-precise-math-namespace-functions.md#fmaxf)|Determine the maximum numeric value of the arguments|  
|[fmin Function](concurrency-precise-math-namespace-functions.md#fmin)|Overloaded. Determine the minimum numeric value of the arguments|  
|[fminf Function](concurrency-precise-math-namespace-functions.md#fminf)|Determine the minimum numeric value of the arguments|  
|[fmod Function (C++ AMP)](concurrency-precise-math-namespace-functions.md#fmod)|Overloaded. Calculates the floating-point remainder of _X/_Y|  
|[fmodf Function](concurrency-precise-math-namespace-functions.md#fmodf)|Calculates the floating-point remainder of _X/_Y|  
|[fpclassify Function](concurrency-precise-math-namespace-functions.md#fpclassify)|Overloaded. Classifies the argument value as NaN, infinite, normal, subnormal, zero|  
|[frexp Function](concurrency-precise-math-namespace-functions.md#frexp)|Overloaded. Gets the mantissa and exponent of _X|  
|[frexpf Function](concurrency-precise-math-namespace-functions.md#frexpf)|Gets the mantissa and exponent of _X|  
|[hypot Function](concurrency-precise-math-namespace-functions.md#hypot)|Overloaded. Computes the square root of the sum of the squares of _X and _Y|  
|[hypotf Function](concurrency-precise-math-namespace-functions.md#hypotf)|Computes the square root of the sum of the squares of _X and _Y|  
|[ilogb Function](concurrency-precise-math-namespace-functions.md#ilogb)|Overloaded. Extract the exponent of _X as a signed int value|  
|[ilogbf Function](concurrency-precise-math-namespace-functions.md#ilogbf)|Extract the exponent of _X as a signed int value|  
|[isfinite Function](concurrency-precise-math-namespace-functions.md#isfinite)|Overloaded. Determines whether the argument has a finite value|  
|[isinf Function](concurrency-precise-math-namespace-functions.md#isinf)|Overloaded. Determines whether the argument is an infinity|  
|[isnan Function](concurrency-precise-math-namespace-functions.md#isnan)|Overloaded. Determines whether the argument is a NaN|  
|[isnormal Function](concurrency-precise-math-namespace-functions.md#isnormal)|Overloaded. Determines whether the argument is a normal|  
|[ldexp Function](concurrency-precise-math-namespace-functions.md#ldexp)|Overloaded. Computes a real number from the mantissa and exponent|  
|[ldexpf Function](concurrency-precise-math-namespace-functions.md#ldexpf)|Computes a real number from the mantissa and exponent|  
|[lgamma Function](concurrency-precise-math-namespace-functions.md#lgamma)|Overloaded. Computes the natural logarithm of the absolute value of gamma of the argument|  
|[lgammaf Function](concurrency-precise-math-namespace-functions.md#lgammaf)|Computes the natural logarithm of the absolute value of gamma of the argument|  
|[log Function](concurrency-precise-math-namespace-functions.md#log)|Overloaded. Calculates the base-e logarithm of the argument|  
|[log10 Function](concurrency-precise-math-namespace-functions.md#log10)|Overloaded. Calculates the base-10 logarithm of the argument|  
|[log10f Function](concurrency-precise-math-namespace-functions.md#log10f)|Calculates the base-10 logarithm of the argument|  
|[log1p Function](concurrency-precise-math-namespace-functions.md#log1p)|Overloaded. Calculates the base-e logarithm of 1 plus the argument|  
|[log1pf Function](concurrency-precise-math-namespace-functions.md#log1pf)|Calculates the base-e logarithm of 1 plus the argument|  
|[log2 Function](concurrency-precise-math-namespace-functions.md#log2)|Overloaded. Calculates the base-2 logarithm of the argument|  
|[log2f Function](concurrency-precise-math-namespace-functions.md#log2f)|Calculates the base-2 logarithm of the argument|  
|[logb Function](concurrency-precise-math-namespace-functions.md#logb)|Overloaded. Extracts the exponent of _X, as a signed integer value in floating-point format|  
|[logbf Function](concurrency-precise-math-namespace-functions.md#logbf)|Extracts the exponent of _X, as a signed integer value in floating-point format|  
|[logf Function](concurrency-precise-math-namespace-functions.md#logf)|Calculates the base-e logarithm of the argument|  
|[modf Function](concurrency-precise-math-namespace-functions.md#modf)|Overloaded. Splits _X into fractional and integer parts.|  
|[modff Function](concurrency-precise-math-namespace-functions.md#modff)|Splits _X into fractional and integer parts.|  
|[nan Function](concurrency-precise-math-namespace-functions.md#nan)|Returns a quiet NaN|  
|[nanf Function](concurrency-precise-math-namespace-functions.md#nanf)|Returns a quiet NaN|  
|[nearbyint Function](concurrency-precise-math-namespace-functions.md#nearbyint)|Overloaded. Rounds the argument to an integer value in floating-point format, using the current rounding direction.|  
|[nearbyintf Function](concurrency-precise-math-namespace-functions.md#nearbyintf)|Rounds the argument to an integer value in floating-point format, using the current rounding direction.|  
|[nextafter Function](concurrency-precise-math-namespace-functions.md#nextafter)|Overloaded. Determine the next representable value, in the type of the function, after _X in the direction of _Y|  
|[nextafterf Function](concurrency-precise-math-namespace-functions.md#nextafterf)|Determine the next representable value, in the type of the function, after _X in the direction of _Y|  
|[phi Function](concurrency-precise-math-namespace-functions.md#phi)|Overloaded. Returns the cumulative distribution function of the argument|  
|[phif Function](concurrency-precise-math-namespace-functions.md#phif)|Returns the cumulative distribution function of the argument|  
|[pow Function](concurrency-precise-math-namespace-functions.md#pow)|Overloaded. Calculates _X raised to the power of _Y|  
|[powf Function](concurrency-precise-math-namespace-functions.md#powf)|Calculates _X raised to the power of _Y|  
|[probit Function](concurrency-precise-math-namespace-functions.md#probit)|Overloaded. Returns the inverse cumulative distribution function of the argument|  
|[probitf Function](concurrency-precise-math-namespace-functions.md#probitf)|Returns the inverse cumulative distribution function of the argument|  
|[rcbrt Function](concurrency-precise-math-namespace-functions.md#rcbrt)|Overloaded. Returns the reciprocal of the cube root of the argument|  
|[rcbrtf Function](concurrency-precise-math-namespace-functions.md#rcbrtf)|Returns the reciprocal of the cube root of the argument|  
|[remainder Function](concurrency-precise-math-namespace-functions.md#remainder)|Overloaded. Computes the remainder: _X REM _Y|  
|[remainderf Function](concurrency-precise-math-namespace-functions.md#remainderf)|Computes the remainder: _X REM _Y|  
|[remquo Function](concurrency-precise-math-namespace-functions.md#remquo)|Overloaded. Computes the same remainder as _X REM _Y. Also calculates the lower 23 bits of the integral quotient _X/_Y, and gives that value the same sign as _X/_Y. It stores this signed value in the integer pointed to by _Quo.|  
|[remquof Function](concurrency-precise-math-namespace-functions.md#remquof)|Computes the same remainder as _X REM _Y. Also calculates the lower 23 bits of the integral quotient _X/_Y, and gives that value the same sign as _X/_Y. It stores this signed value in the integer pointed to by _Quo.|  
|[round Function](concurrency-precise-math-namespace-functions.md#round)|Overloaded. Rounds _X to the nearest integer|  
|[roundf Function](concurrency-precise-math-namespace-functions.md#roundf)|Rounds _X to the nearest integer|  
|[rsqrt Function](concurrency-precise-math-namespace-functions.md#rsqrt)|Overloaded. Returns the reciprocal of the square root of the argument|  
|[rsqrtf Function](concurrency-precise-math-namespace-functions.md#rsqrtf)|Returns the reciprocal of the square root of the argument|  
|[scalb Function](concurrency-precise-math-namespace-functions.md#scalb)|Overloaded. Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbf Function](concurrency-precise-math-namespace-functions.md#scalbf)|Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbn Function](concurrency-precise-math-namespace-functions.md#scalbn)|Overloaded. Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbnf Function](concurrency-precise-math-namespace-functions.md#scalbnf)|Multiplies _X by FLT_RADIX to the power _Y|  
|[signbit Function](concurrency-precise-math-namespace-functions.md#signbit)|Overloaded. Determines whether the sign of _X is negative|  
|[signbitf Function](concurrency-precise-math-namespace-functions.md#signbitf)|Determines whether the sign of _X is negative|  
|[sin Function](concurrency-precise-math-namespace-functions.md#sin)|Overloaded. Calculates the sine value of the argument|  
|[sincos Function](concurrency-precise-math-namespace-functions.md#sincos)|Overloaded. Calculates sine and cosine value of _X|  
|[sincosf Function](concurrency-precise-math-namespace-functions.md#sincosf)|Calculates sine and cosine value of _X|  
|[sinf Function](concurrency-precise-math-namespace-functions.md#sinf)|Calculates the sine value of the argument|  
|[sinh Function](concurrency-precise-math-namespace-functions.md#sinh)|Overloaded. Calculates the hyperbolic sine value of the argument|  
|[sinhf Function](concurrency-precise-math-namespace-functions.md#sinhf)|Calculates the hyperbolic sine value of the argument|  
|[sinpi Function](concurrency-precise-math-namespace-functions.md#sinpi)|Overloaded. Calculates the sine value of pi * _X|  
|[sinpif Function](concurrency-precise-math-namespace-functions.md#sinpif)|Calculates the sine value of pi * _X|  
|[sqrt Function](concurrency-precise-math-namespace-functions.md#sqrt)|Overloaded. Calculates the squre root of the argument|  
|[sqrtf Function](concurrency-precise-math-namespace-functions.md#sqrtf)|Calculates the squre root of the argument|  
|[tan Function](concurrency-precise-math-namespace-functions.md#tan)|Overloaded. Calculates the tangent value of the argument|  
|[tanf Function](concurrency-precise-math-namespace-functions.md#tanf)|Calculates the tangent value of the argument|  
|[tanh Function](concurrency-precise-math-namespace-functions.md#tanh)|Overloaded. Calculates the hyperbolic tangent value of the argument|  
|[tanhf Function](concurrency-precise-math-namespace-functions.md#tanhf)|Calculates the hyperbolic tangent value of the argument|  
|[tanpi Function](concurrency-precise-math-namespace-functions.md#tanpi)|Overloaded. Calculates the tangent value of pi * _X|  
|[tanpif Function](concurrency-precise-math-namespace-functions.md#tanpif)|Calculates the tangent value of pi * _X|  
|[tgamma Function](concurrency-precise-math-namespace-functions.md#tgamma)|Overloaded. Computes the gamma function of _X|  
|[tgammaf Function](concurrency-precise-math-namespace-functions.md#tgammaf)|Computes the gamma function of _X|  
|[trunc Function](concurrency-precise-math-namespace-functions.md#trunc)|Overloaded. Truncates the argument to the integer component|  
|[truncf Function](concurrency-precise-math-namespace-functions.md#truncf)|Truncates the argument to the integer component|  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
