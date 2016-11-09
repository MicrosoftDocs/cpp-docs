---
title: "Concurrency::precise_math Namespace"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
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
Functions in the `precise_math` namespace are C99 compliant. Both single precision and double precision versions of each function are included. For example, `acos` is the double-precision version and `acosf` is the single-precision version. These functions, including the single-precision functions, require extended double-precision support on the accelerator. You can use the [accelerator::supports_double_precision Data Member](../Topic/accelerator::supports_double_precision%20Data%20Member.md) to determine if you can run these functions on a specific accelerator.  
  
## Syntax  
  
```cpp  
namespace precise_math;  
```  
  
#### Parameters  
  
## Members  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[acos Function](../Topic/acos%20Function.md)|Overloaded. Calculates the arccosine of the argument|  
|[acosf Function](../Topic/acosf%20Function.md)|Calculates the arccosine of the argument|  
|[acosh Function](../Topic/acosh%20Function.md)|Overloaded. Calculates the inverse hyperbolic cosine of the argument|  
|[acoshf Function](../Topic/acoshf%20Function.md)|Calculates the inverse hyperbolic cosine of the argument|  
|[asin Function](../Topic/asin%20Function.md)|Overloaded. Calculates the arcsine of the argument|  
|[asinf Function](../Topic/asinf%20Function.md)|Calculates the arcsine of the argument|  
|[asinh Function](../Topic/asinh%20Function.md)|Overloaded. Calculates the inverse hyperbolic sine of the argument|  
|[asinhf Function](../Topic/asinhf%20Function.md)|Calculates the inverse hyperbolic sine of the argument|  
|[atan Function](../Topic/atan%20Function.md)|Overloaded. Calculates the arctangent of the argument|  
|[atan2 Function](../Topic/atan2%20Function.md)|Overloaded. Calculates the arctangent of _Y/_X|  
|[atan2f Function](../Topic/atan2f%20Function.md)|Calculates the arctangent of _Y/_X|  
|[atanf Function](../Topic/atanf%20Function.md)|Calculates the arctangent of the argument|  
|[atanh Function](../Topic/atanh%20Function.md)|Overloaded. Calculates the inverse hyperbolic tangent of the argument|  
|[atanhf Function](../Topic/atanhf%20Function.md)|Calculates the inverse hyperbolic tangent of the argument|  
|[cbrt Function](../Topic/cbrt%20Function.md)|Overloaded. Computes the real cube root of the argument|  
|[cbrtf Function](../Topic/cbrtf%20Function.md)|Computes the real cube root of the argument|  
|[ceil Function](../Topic/ceil%20Function.md)|Overloaded. Calculates the ceiling of the argument|  
|[ceilf Function](../Topic/ceilf%20Function.md)|Calculates the ceiling of the argument|  
|[copysign Function](../Topic/copysign%20Function.md)|Overloaded. Produces a value with the magnitude of _X and the sign of _Y|  
|[copysignf Function](../Topic/copysignf%20Function.md)|Produces a value with the magnitude of _X and the sign of _Y|  
|[cos Function](../Topic/cos%20Function.md)|Overloaded. Calculates the cosine of the argument|  
|[cosf Function](../Topic/cosf%20Function.md)|Calculates the cosine of the argument|  
|[cosh Function](../Topic/cosh%20Function.md)|Overloaded. Calculates the hyperbolic cosine value of the argument|  
|[coshf Function](../Topic/coshf%20Function.md)|Calculates the hyperbolic cosine value of the argument|  
|[cospi Function](../Topic/cospi%20Function.md)|Overloaded. Calculates the cosine value of pi * _X|  
|[cospif Function](../Topic/cospif%20Function.md)|Calculates the cosine value of pi * _X|  
|[erf Function](../Topic/erf%20Function.md)|Overloaded. Computes the error function of _X|  
|[erfc Function](../Topic/erfc%20Function.md)|Overloaded. Computes the complementary error function of _X|  
|[erfcf Function](../Topic/erfcf%20Function.md)|Computes the complementary error function of _X|  
|[erfcinv Function](../Topic/erfcinv%20Function.md)|Overloaded. Computes the inverse complementary error function of _X|  
|[erfcinvf Function](../Topic/erfcinvf%20Function.md)|Computes the inverse complementary error function of _X|  
|[erff Function](../Topic/erff%20Function.md)|Computes the error function of _X|  
|[erfinv Function](../Topic/erfinv%20Function.md)|Overloaded. Computes the inverse error function of _X|  
|[erfinvf Function](../Topic/erfinvf%20Function.md)|Computes the inverse error function of _X|  
|[exp Function](../Topic/exp%20Function.md)|Overloaded. Calculates the base-e exponential of the argument|  
|[exp10 Function](../Topic/exp10%20Function.md)|Overloaded. Calculates the base-10 exponential of the argument|  
|[exp10f Function](../Topic/exp10f%20Function.md)|Calculates the base-10 exponential of the argument|  
|[exp2 Function](../Topic/exp2%20Function.md)|Overloaded. Calculates the base-2 exponential of the argument|  
|[exp2f Function](../Topic/exp2f%20Function.md)|Calculates the base-2 exponential of the argument|  
|[expf Function](../Topic/expf%20Function.md)|Calculates the base-e exponential of the argument|  
|[expm1 Function](../Topic/expm1%20Function.md)|Overloaded. Calculates the base-e exponential of the argument, minus 1|  
|[expm1f Function](../Topic/expm1f%20Function.md)|Calculates the base-e exponential of the argument, minus 1|  
|[fabs Function](../Topic/fabs%20Function.md)|Overloaded. Returns the absolute value of the argument|  
|[fabsf Function](../Topic/fabsf%20Function.md)|Returns the absolute value of the argument|  
|[fdim Function](../Topic/fdim%20Function.md)|Overloaded. Determines the positive difference between the arguments|  
|[fdimf Function](../Topic/fdimf%20Function.md)|Determines the positive difference between the arguments|  
|[floor Function](../Topic/floor%20Function.md)|Overloaded. Calculates the floor of the argument|  
|[floorf Function](../Topic/floorf%20Function.md)|Calculates the floor of the argument|  
|[fma Function](../Topic/fma%20Function.md)|Overloaded. Compute (_X * _Y) + _Z, rounded as one ternary operation|  
|[fmaf Function](../Topic/fmaf%20Function.md)|Compute (_X * _Y) + _Z, rounded as one ternary operation|  
|[fmax Function](../Topic/fmax%20Function.md)|Overloaded. Determine the maximum numeric value of the arguments|  
|[fmaxf Function](../Topic/fmaxf%20Function.md)|Determine the maximum numeric value of the arguments|  
|[fmin Function](../Topic/fmin%20Function.md)|Overloaded. Determine the minimum numeric value of the arguments|  
|[fminf Function](../Topic/fminf%20Function.md)|Determine the minimum numeric value of the arguments|  
|[fmod Function (C++ AMP)](../Topic/fmod%20Function%20\(C++%20AMP\).md)|Overloaded. Calculates the floating-point remainder of _X/_Y|  
|[fmodf Function](../Topic/fmodf%20Function.md)|Calculates the floating-point remainder of _X/_Y|  
|[fpclassify Function](../Topic/fpclassify%20Function.md)|Overloaded. Classifies the argument value as NaN, infinite, normal, subnormal, zero|  
|[frexp Function](../Topic/frexp%20Function.md)|Overloaded. Gets the mantissa and exponent of _X|  
|[frexpf Function](../Topic/frexpf%20Function.md)|Gets the mantissa and exponent of _X|  
|[hypot Function](../Topic/hypot%20Function.md)|Overloaded. Computes the square root of the sum of the squares of _X and _Y|  
|[hypotf Function](../Topic/hypotf%20Function.md)|Computes the square root of the sum of the squares of _X and _Y|  
|[ilogb Function](../Topic/ilogb%20Function.md)|Overloaded. Extract the exponent of _X as a signed int value|  
|[ilogbf Function](../Topic/ilogbf%20Function.md)|Extract the exponent of _X as a signed int value|  
|[isfinite Function](../Topic/isfinite%20Function.md)|Overloaded. Determines whether the argument has a finite value|  
|[isinf Function](../Topic/isinf%20Function.md)|Overloaded. Determines whether the argument is an infinity|  
|[isnan Function](../Topic/isnan%20Function.md)|Overloaded. Determines whether the argument is a NaN|  
|[isnormal Function](../Topic/isnormal%20Function.md)|Overloaded. Determines whether the argument is a normal|  
|[ldexp Function](../Topic/ldexp%20Function.md)|Overloaded. Computes a real number from the mantissa and exponent|  
|[ldexpf Function](../Topic/ldexpf%20Function.md)|Computes a real number from the mantissa and exponent|  
|[lgamma Function](../Topic/lgamma%20Function.md)|Overloaded. Computes the natural logarithm of the absolute value of gamma of the argument|  
|[lgammaf Function](../Topic/lgammaf%20Function.md)|Computes the natural logarithm of the absolute value of gamma of the argument|  
|[log Function](../Topic/log%20Function.md)|Overloaded. Calculates the base-e logarithm of the argument|  
|[log10 Function](../Topic/log10%20Function.md)|Overloaded. Calculates the base-10 logarithm of the argument|  
|[log10f Function](../Topic/log10f%20Function.md)|Calculates the base-10 logarithm of the argument|  
|[log1p Function](../Topic/log1p%20Function.md)|Overloaded. Calculates the base-e logarithm of 1 plus the argument|  
|[log1pf Function](../Topic/log1pf%20Function.md)|Calculates the base-e logarithm of 1 plus the argument|  
|[log2 Function](../Topic/log2%20Function.md)|Overloaded. Calculates the base-2 logarithm of the argument|  
|[log2f Function](../Topic/log2f%20Function.md)|Calculates the base-2 logarithm of the argument|  
|[logb Function](../Topic/logb%20Function.md)|Overloaded. Extracts the exponent of _X, as a signed integer value in floating-point format|  
|[logbf Function](../Topic/logbf%20Function.md)|Extracts the exponent of _X, as a signed integer value in floating-point format|  
|[logf Function](../Topic/logf%20Function.md)|Calculates the base-e logarithm of the argument|  
|[modf Function](../Topic/modf%20Function.md)|Overloaded. Splits _X into fractional and integer parts.|  
|[modff Function](../Topic/modff%20Function.md)|Splits _X into fractional and integer parts.|  
|[nan Function](../Topic/nan%20Function.md)|Returns a quiet NaN|  
|[nanf Function](../Topic/nanf%20Function.md)|Returns a quiet NaN|  
|[nearbyint Function](../Topic/nearbyint%20Function.md)|Overloaded. Rounds the argument to an integer value in floating-point format, using the current rounding direction.|  
|[nearbyintf Function](../Topic/nearbyintf%20Function.md)|Rounds the argument to an integer value in floating-point format, using the current rounding direction.|  
|[nextafter Function](../Topic/nextafter%20Function.md)|Overloaded. Determine the next representable value, in the type of the function, after _X in the direction of _Y|  
|[nextafterf Function](../Topic/nextafterf%20Function.md)|Determine the next representable value, in the type of the function, after _X in the direction of _Y|  
|[phi Function](../Topic/phi%20Function.md)|Overloaded. Returns the cumulative distribution function of the argument|  
|[phif Function](../Topic/phif%20Function.md)|Returns the cumulative distribution function of the argument|  
|[pow Function](../Topic/pow%20Function.md)|Overloaded. Calculates _X raised to the power of _Y|  
|[powf Function](../Topic/powf%20Function.md)|Calculates _X raised to the power of _Y|  
|[probit Function](../Topic/probit%20Function.md)|Overloaded. Returns the inverse cumulative distribution function of the argument|  
|[probitf Function](../Topic/probitf%20Function.md)|Returns the inverse cumulative distribution function of the argument|  
|[rcbrt Function](../Topic/rcbrt%20Function.md)|Overloaded. Returns the reciprocal of the cube root of the argument|  
|[rcbrtf Function](../Topic/rcbrtf%20Function.md)|Returns the reciprocal of the cube root of the argument|  
|[remainder Function](../Topic/remainder%20Function.md)|Overloaded. Computes the remainder: _X REM _Y|  
|[remainderf Function](../Topic/remainderf%20Function.md)|Computes the remainder: _X REM _Y|  
|[remquo Function](../Topic/remquo%20Function.md)|Overloaded. Computes the same remainder as _X REM _Y. Also calculates the lower 23 bits of the integral quotient _X/_Y, and gives that value the same sign as _X/_Y. It stores this signed value in the integer pointed to by _Quo.|  
|[remquof Function](../Topic/remquof%20Function.md)|Computes the same remainder as _X REM _Y. Also calculates the lower 23 bits of the integral quotient _X/_Y, and gives that value the same sign as _X/_Y. It stores this signed value in the integer pointed to by _Quo.|  
|[round Function](../Topic/round%20Function.md)|Overloaded. Rounds _X to the nearest integer|  
|[roundf Function](../Topic/roundf%20Function.md)|Rounds _X to the nearest integer|  
|[rsqrt Function](../Topic/rsqrt%20Function.md)|Overloaded. Returns the reciprocal of the square root of the argument|  
|[rsqrtf Function](../Topic/rsqrtf%20Function.md)|Returns the reciprocal of the square root of the argument|  
|[scalb Function](../Topic/scalb%20Function.md)|Overloaded. Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbf Function](../Topic/scalbf%20Function.md)|Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbn Function](../Topic/scalbn%20Function.md)|Overloaded. Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbnf Function](../Topic/scalbnf%20Function.md)|Multiplies _X by FLT_RADIX to the power _Y|  
|[signbit Function](../Topic/signbit%20Function.md)|Overloaded. Determines whether the sign of _X is negative|  
|[signbitf Function](../Topic/signbitf%20Function.md)|Determines whether the sign of _X is negative|  
|[sin Function](../Topic/sin%20Function.md)|Overloaded. Calculates the sine value of the argument|  
|[sincos Function](../Topic/sincos%20Function.md)|Overloaded. Calculates sine and cosine value of _X|  
|[sincosf Function](../Topic/sincosf%20Function.md)|Calculates sine and cosine value of _X|  
|[sinf Function](../Topic/sinf%20Function.md)|Calculates the sine value of the argument|  
|[sinh Function](../Topic/sinh%20Function.md)|Overloaded. Calculates the hyperbolic sine value of the argument|  
|[sinhf Function](../Topic/sinhf%20Function.md)|Calculates the hyperbolic sine value of the argument|  
|[sinpi Function](../Topic/sinpi%20Function.md)|Overloaded. Calculates the sine value of pi * _X|  
|[sinpif Function](../Topic/sinpif%20Function.md)|Calculates the sine value of pi * _X|  
|[sqrt Function](../Topic/sqrt%20Function.md)|Overloaded. Calculates the squre root of the argument|  
|[sqrtf Function](../Topic/sqrtf%20Function.md)|Calculates the squre root of the argument|  
|[tan Function](../Topic/tan%20Function.md)|Overloaded. Calculates the tangent value of the argument|  
|[tanf Function](../Topic/tanf%20Function.md)|Calculates the tangent value of the argument|  
|[tanh Function](../Topic/tanh%20Function.md)|Overloaded. Calculates the hyperbolic tangent value of the argument|  
|[tanhf Function](../Topic/tanhf%20Function.md)|Calculates the hyperbolic tangent value of the argument|  
|[tanpi Function](../Topic/tanpi%20Function.md)|Overloaded. Calculates the tangent value of pi * _X|  
|[tanpif Function](../Topic/tanpif%20Function.md)|Calculates the tangent value of pi * _X|  
|[tgamma Function](../Topic/tgamma%20Function.md)|Overloaded. Computes the gamma function of _X|  
|[tgammaf Function](../Topic/tgammaf%20Function.md)|Computes the gamma function of _X|  
|[trunc Function](../Topic/trunc%20Function.md)|Overloaded. Truncates the argument to the integer component|  
|[truncf Function](../Topic/truncf%20Function.md)|Truncates the argument to the integer component|  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
