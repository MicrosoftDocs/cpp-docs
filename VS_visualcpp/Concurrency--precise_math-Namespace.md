---
title: "Concurrency::precise_math Namespace"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ba653308-dc28-4384-b2fd-6cd718a72f91
caps.latest.revision: 4
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Concurrency::precise_math Namespace
Functions in the `precise_math` namespace are C99 compliant. Both single precision and double precision versions of each function are included. For example, `acos` is the double-precision version and `acosf` is the single-precision version. These functions, including the single-precision functions, require extended double-precision support on the accelerator. You can use the [accelerator::supports_double_precision Data Member](../VS_visualcpp/accelerator--supports_double_precision-Data-Member.md) to determine if you can run these functions on a specific accelerator.  
  
## Syntax  
  
```cpp  
namespace precise_math;  
```  
  
#### Parameters  
  
## Members  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[acos Function](../VS_visualcpp/acos-Function.md)|Overloaded. Calculates the arccosine of the argument|  
|[acosf Function](../VS_visualcpp/acosf-Function.md)|Calculates the arccosine of the argument|  
|[acosh Function](../VS_visualcpp/acosh-Function.md)|Overloaded. Calculates the inverse hyperbolic cosine of the argument|  
|[acoshf Function](../VS_visualcpp/acoshf-Function.md)|Calculates the inverse hyperbolic cosine of the argument|  
|[asin Function](../VS_visualcpp/asin-Function.md)|Overloaded. Calculates the arcsine of the argument|  
|[asinf Function](../VS_visualcpp/asinf-Function.md)|Calculates the arcsine of the argument|  
|[asinh Function](../VS_visualcpp/asinh-Function.md)|Overloaded. Calculates the inverse hyperbolic sine of the argument|  
|[asinhf Function](../VS_visualcpp/asinhf-Function.md)|Calculates the inverse hyperbolic sine of the argument|  
|[atan Function](../VS_visualcpp/atan-Function.md)|Overloaded. Calculates the arctangent of the argument|  
|[atan2 Function](../VS_visualcpp/atan2-Function.md)|Overloaded. Calculates the arctangent of _Y/_X|  
|[atan2f Function](../VS_visualcpp/atan2f-Function.md)|Calculates the arctangent of _Y/_X|  
|[atanf Function](../VS_visualcpp/atanf-Function.md)|Calculates the arctangent of the argument|  
|[atanh Function](../VS_visualcpp/atanh-Function.md)|Overloaded. Calculates the inverse hyperbolic tangent of the argument|  
|[atanhf Function](../VS_visualcpp/atanhf-Function.md)|Calculates the inverse hyperbolic tangent of the argument|  
|[cbrt Function](../VS_visualcpp/cbrt-Function.md)|Overloaded. Computes the real cube root of the argument|  
|[cbrtf Function](../VS_visualcpp/cbrtf-Function.md)|Computes the real cube root of the argument|  
|[ceil Function](../VS_visualcpp/ceil-Function.md)|Overloaded. Calculates the ceiling of the argument|  
|[ceilf Function](../VS_visualcpp/ceilf-Function.md)|Calculates the ceiling of the argument|  
|[copysign Function](../VS_visualcpp/copysign-Function.md)|Overloaded. Produces a value with the magnitude of _X and the sign of _Y|  
|[copysignf Function](../VS_visualcpp/copysignf-Function.md)|Produces a value with the magnitude of _X and the sign of _Y|  
|[cos Function](../VS_visualcpp/cos-Function.md)|Overloaded. Calculates the cosine of the argument|  
|[cosf Function](../VS_visualcpp/cosf-Function.md)|Calculates the cosine of the argument|  
|[cosh Function](../VS_visualcpp/cosh-Function.md)|Overloaded. Calculates the hyperbolic cosine value of the argument|  
|[coshf Function](../VS_visualcpp/coshf-Function.md)|Calculates the hyperbolic cosine value of the argument|  
|[cospi Function](../VS_visualcpp/cospi-Function.md)|Overloaded. Calculates the cosine value of pi * _X|  
|[cospif Function](../VS_visualcpp/cospif-Function.md)|Calculates the cosine value of pi * _X|  
|[erf Function](../VS_visualcpp/erf-Function.md)|Overloaded. Computes the error function of _X|  
|[erfc Function](../VS_visualcpp/erfc-Function.md)|Overloaded. Computes the complementary error function of _X|  
|[erfcf Function](../VS_visualcpp/erfcf-Function.md)|Computes the complementary error function of _X|  
|[erfcinv Function](../VS_visualcpp/erfcinv-Function.md)|Overloaded. Computes the inverse complementary error function of _X|  
|[erfcinvf Function](../VS_visualcpp/erfcinvf-Function.md)|Computes the inverse complementary error function of _X|  
|[erff Function](../VS_visualcpp/erff-Function.md)|Computes the error function of _X|  
|[erfinv Function](../VS_visualcpp/erfinv-Function.md)|Overloaded. Computes the inverse error function of _X|  
|[erfinvf Function](../VS_visualcpp/erfinvf-Function.md)|Computes the inverse error function of _X|  
|[exp Function](../VS_visualcpp/exp-Function.md)|Overloaded. Calculates the base-e exponential of the argument|  
|[exp10 Function](../VS_visualcpp/exp10-Function.md)|Overloaded. Calculates the base-10 exponential of the argument|  
|[exp10f Function](../VS_visualcpp/exp10f-Function.md)|Calculates the base-10 exponential of the argument|  
|[exp2 Function](../VS_visualcpp/exp2-Function.md)|Overloaded. Calculates the base-2 exponential of the argument|  
|[exp2f Function](../VS_visualcpp/exp2f-Function.md)|Calculates the base-2 exponential of the argument|  
|[expf Function](../VS_visualcpp/expf-Function.md)|Calculates the base-e exponential of the argument|  
|[expm1 Function](../VS_visualcpp/expm1-Function.md)|Overloaded. Calculates the base-e exponential of the argument, minus 1|  
|[expm1f Function](../VS_visualcpp/expm1f-Function.md)|Calculates the base-e exponential of the argument, minus 1|  
|[fabs Function](../VS_visualcpp/fabs-Function.md)|Overloaded. Returns the absolute value of the argument|  
|[fabsf Function](../VS_visualcpp/fabsf-Function.md)|Returns the absolute value of the argument|  
|[fdim Function](../VS_visualcpp/fdim-Function.md)|Overloaded. Determines the positive difference between the arguments|  
|[fdimf Function](../VS_visualcpp/fdimf-Function.md)|Determines the positive difference between the arguments|  
|[floor Function](../VS_visualcpp/floor-Function.md)|Overloaded. Calculates the floor of the argument|  
|[floorf Function](../VS_visualcpp/floorf-Function.md)|Calculates the floor of the argument|  
|[fma Function](../VS_visualcpp/fma-Function.md)|Overloaded. Compute (_X * _Y) + _Z, rounded as one ternary operation|  
|[fmaf Function](../VS_visualcpp/fmaf-Function.md)|Compute (_X * _Y) + _Z, rounded as one ternary operation|  
|[fmax Function](../VS_visualcpp/fmax-Function.md)|Overloaded. Determine the maximum numeric value of the arguments|  
|[fmaxf Function](../VS_visualcpp/fmaxf-Function.md)|Determine the maximum numeric value of the arguments|  
|[fmin Function](../VS_visualcpp/fmin-Function.md)|Overloaded. Determine the minimum numeric value of the arguments|  
|[fminf Function](../VS_visualcpp/fminf-Function.md)|Determine the minimum numeric value of the arguments|  
|[fmod Function (C++ AMP)](../VS_visualcpp/fmod-Function--C---AMP-.md)|Overloaded. Calculates the floating-point remainder of _X/_Y|  
|[fmodf Function](../VS_visualcpp/fmodf-Function.md)|Calculates the floating-point remainder of _X/_Y|  
|[fpclassify Function](../VS_visualcpp/fpclassify-Function.md)|Overloaded. Classifies the argument value as NaN, infinite, normal, subnormal, zero|  
|[frexp Function](../VS_visualcpp/frexp-Function.md)|Overloaded. Gets the mantissa and exponent of _X|  
|[frexpf Function](../VS_visualcpp/frexpf-Function.md)|Gets the mantissa and exponent of _X|  
|[hypot Function](../VS_visualcpp/hypot-Function.md)|Overloaded. Computes the square root of the sum of the squares of _X and _Y|  
|[hypotf Function](../VS_visualcpp/hypotf-Function.md)|Computes the square root of the sum of the squares of _X and _Y|  
|[ilogb Function](../VS_visualcpp/ilogb-Function.md)|Overloaded. Extract the exponent of _X as a signed int value|  
|[ilogbf Function](../VS_visualcpp/ilogbf-Function.md)|Extract the exponent of _X as a signed int value|  
|[isfinite Function](../VS_visualcpp/isfinite-Function.md)|Overloaded. Determines whether the argument has a finite value|  
|[isinf Function](../VS_visualcpp/isinf-Function.md)|Overloaded. Determines whether the argument is an infinity|  
|[isnan Function](../VS_visualcpp/isnan-Function.md)|Overloaded. Determines whether the argument is a NaN|  
|[isnormal Function](../VS_visualcpp/isnormal-Function.md)|Overloaded. Determines whether the argument is a normal|  
|[ldexp Function](../VS_visualcpp/ldexp-Function.md)|Overloaded. Computes a real number from the mantissa and exponent|  
|[ldexpf Function](../VS_visualcpp/ldexpf-Function.md)|Computes a real number from the mantissa and exponent|  
|[lgamma Function](../VS_visualcpp/lgamma-Function.md)|Overloaded. Computes the natural logarithm of the absolute value of gamma of the argument|  
|[lgammaf Function](../VS_visualcpp/lgammaf-Function.md)|Computes the natural logarithm of the absolute value of gamma of the argument|  
|[log Function](../VS_visualcpp/log-Function.md)|Overloaded. Calculates the base-e logarithm of the argument|  
|[log10 Function](../VS_visualcpp/log10-Function.md)|Overloaded. Calculates the base-10 logarithm of the argument|  
|[log10f Function](../VS_visualcpp/log10f-Function.md)|Calculates the base-10 logarithm of the argument|  
|[log1p Function](../VS_visualcpp/log1p-Function.md)|Overloaded. Calculates the base-e logarithm of 1 plus the argument|  
|[log1pf Function](../VS_visualcpp/log1pf-Function.md)|Calculates the base-e logarithm of 1 plus the argument|  
|[log2 Function](../VS_visualcpp/log2-Function.md)|Overloaded. Calculates the base-2 logarithm of the argument|  
|[log2f Function](../VS_visualcpp/log2f-Function.md)|Calculates the base-2 logarithm of the argument|  
|[logb Function](../VS_visualcpp/logb-Function.md)|Overloaded. Extracts the exponent of _X, as a signed integer value in floating-point format|  
|[logbf Function](../VS_visualcpp/logbf-Function.md)|Extracts the exponent of _X, as a signed integer value in floating-point format|  
|[logf Function](../VS_visualcpp/logf-Function.md)|Calculates the base-e logarithm of the argument|  
|[modf Function](../VS_visualcpp/modf-Function.md)|Overloaded. Splits _X into fractional and integer parts.|  
|[modff Function](../VS_visualcpp/modff-Function.md)|Splits _X into fractional and integer parts.|  
|[nan Function](../VS_visualcpp/nan-Function.md)|Returns a quiet NaN|  
|[nanf Function](../VS_visualcpp/nanf-Function.md)|Returns a quiet NaN|  
|[nearbyint Function](../VS_visualcpp/nearbyint-Function.md)|Overloaded. Rounds the argument to an integer value in floating-point format, using the current rounding direction.|  
|[nearbyintf Function](../VS_visualcpp/nearbyintf-Function.md)|Rounds the argument to an integer value in floating-point format, using the current rounding direction.|  
|[nextafter Function](../VS_visualcpp/nextafter-Function.md)|Overloaded. Determine the next representable value, in the type of the function, after _X in the direction of _Y|  
|[nextafterf Function](../VS_visualcpp/nextafterf-Function.md)|Determine the next representable value, in the type of the function, after _X in the direction of _Y|  
|[phi Function](../VS_visualcpp/phi-Function.md)|Overloaded. Returns the cumulative distribution function of the argument|  
|[phif Function](../VS_visualcpp/phif-Function.md)|Returns the cumulative distribution function of the argument|  
|[pow Function](../VS_visualcpp/pow-Function.md)|Overloaded. Calculates _X raised to the power of _Y|  
|[powf Function](../VS_visualcpp/powf-Function.md)|Calculates _X raised to the power of _Y|  
|[probit Function](../VS_visualcpp/probit-Function.md)|Overloaded. Returns the inverse cumulative distribution function of the argument|  
|[probitf Function](../VS_visualcpp/probitf-Function.md)|Returns the inverse cumulative distribution function of the argument|  
|[rcbrt Function](../VS_visualcpp/rcbrt-Function.md)|Overloaded. Returns the reciprocal of the cube root of the argument|  
|[rcbrtf Function](../VS_visualcpp/rcbrtf-Function.md)|Returns the reciprocal of the cube root of the argument|  
|[remainder Function](../VS_visualcpp/remainder-Function.md)|Overloaded. Computes the remainder: _X REM _Y|  
|[remainderf Function](../VS_visualcpp/remainderf-Function.md)|Computes the remainder: _X REM _Y|  
|[remquo Function](../VS_visualcpp/remquo-Function.md)|Overloaded. Computes the same remainder as _X REM _Y. Also calculates the lower 23 bits of the integral quotient _X/_Y, and gives that value the same sign as _X/_Y. It stores this signed value in the integer pointed to by _Quo.|  
|[remquof Function](../VS_visualcpp/remquof-Function.md)|Computes the same remainder as _X REM _Y. Also calculates the lower 23 bits of the integral quotient _X/_Y, and gives that value the same sign as _X/_Y. It stores this signed value in the integer pointed to by _Quo.|  
|[round Function](../VS_visualcpp/round-Function.md)|Overloaded. Rounds _X to the nearest integer|  
|[roundf Function](../VS_visualcpp/roundf-Function.md)|Rounds _X to the nearest integer|  
|[rsqrt Function](../VS_visualcpp/rsqrt-Function.md)|Overloaded. Returns the reciprocal of the square root of the argument|  
|[rsqrtf Function](../VS_visualcpp/rsqrtf-Function.md)|Returns the reciprocal of the square root of the argument|  
|[scalb Function](../VS_visualcpp/scalb-Function.md)|Overloaded. Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbf Function](../VS_visualcpp/scalbf-Function.md)|Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbn Function](../VS_visualcpp/scalbn-Function.md)|Overloaded. Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbnf Function](../VS_visualcpp/scalbnf-Function.md)|Multiplies _X by FLT_RADIX to the power _Y|  
|[signbit Function](../VS_visualcpp/signbit-Function.md)|Overloaded. Determines whether the sign of _X is negative|  
|[signbitf Function](../VS_visualcpp/signbitf-Function.md)|Determines whether the sign of _X is negative|  
|[sin Function](../VS_visualcpp/sin-Function.md)|Overloaded. Calculates the sine value of the argument|  
|[sincos Function](../VS_visualcpp/sincos-Function.md)|Overloaded. Calculates sine and cosine value of _X|  
|[sincosf Function](../VS_visualcpp/sincosf-Function.md)|Calculates sine and cosine value of _X|  
|[sinf Function](../VS_visualcpp/sinf-Function.md)|Calculates the sine value of the argument|  
|[sinh Function](../VS_visualcpp/sinh-Function.md)|Overloaded. Calculates the hyperbolic sine value of the argument|  
|[sinhf Function](../VS_visualcpp/sinhf-Function.md)|Calculates the hyperbolic sine value of the argument|  
|[sinpi Function](../VS_visualcpp/sinpi-Function.md)|Overloaded. Calculates the sine value of pi * _X|  
|[sinpif Function](../VS_visualcpp/sinpif-Function.md)|Calculates the sine value of pi * _X|  
|[sqrt Function](../VS_visualcpp/sqrt-Function.md)|Overloaded. Calculates the squre root of the argument|  
|[sqrtf Function](../VS_visualcpp/sqrtf-Function.md)|Calculates the squre root of the argument|  
|[tan Function](../VS_visualcpp/tan-Function.md)|Overloaded. Calculates the tangent value of the argument|  
|[tanf Function](../VS_visualcpp/tanf-Function.md)|Calculates the tangent value of the argument|  
|[tanh Function](../VS_visualcpp/tanh-Function.md)|Overloaded. Calculates the hyperbolic tangent value of the argument|  
|[tanhf Function](../VS_visualcpp/tanhf-Function.md)|Calculates the hyperbolic tangent value of the argument|  
|[tanpi Function](../VS_visualcpp/tanpi-Function.md)|Overloaded. Calculates the tangent value of pi * _X|  
|[tanpif Function](../VS_visualcpp/tanpif-Function.md)|Calculates the tangent value of pi * _X|  
|[tgamma Function](../VS_visualcpp/tgamma-Function.md)|Overloaded. Computes the gamma function of _X|  
|[tgammaf Function](../VS_visualcpp/tgammaf-Function.md)|Computes the gamma function of _X|  
|[trunc Function](../VS_visualcpp/trunc-Function.md)|Overloaded. Truncates the argument to the integer component|  
|[truncf Function](../VS_visualcpp/truncf-Function.md)|Truncates the argument to the integer component|  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)