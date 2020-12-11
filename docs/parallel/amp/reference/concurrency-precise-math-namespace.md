---
description: "Learn more about: Concurrency::precise_math Namespace"
title: "Concurrency::precise_math Namespace"
ms.date: "11/04/2016"
f1_keywords: ["AMP_MATH/Concurrency::acos", "AMP_MATH/Concurrency::acosf", "AMP_MATH/Concurrency::acosh", "AMP_MATH/Concurrency::acoshf", "AMP_MATH/Concurrency::asin", "AMP_MATH/Concurrency::asinf", "AMP_MATH/Concurrency::asinh", "AMP_MATH/Concurrency::asinhf", "AMP_MATH/Concurrency::atan", "AMP_MATH/Concurrency::atan2", "AMP_MATH/Concurrency::atan2f", "AMP_MATH/Concurrency::atanf", "AMP_MATH/Concurrency::atanh", "AMP_MATH/Concurrency::atanhf", "AMP_MATH/Concurrency::cbrt", "AMP_MATH/Concurrency::cbrtf", "AMP_MATH/Concurrency::ceil", "AMP_MATH/Concurrency::ceilf", "AMP_MATH/Concurrency::copysign", "AMP_MATH/Concurrency::copysignf", "AMP_MATH/Concurrency::cos", "AMP_MATH/Concurrency::cosf", "AMP_MATH/Concurrency::cosh", "AMP_MATH/Concurrency::coshf", "AMP_MATH/Concurrency::cospi", "AMP_MATH/Concurrency::cospif", "AMP_MATH/Concurrency::erf", "AMP_MATH/Concurrency::erfc", "AMP_MATH/Concurrency::erfcf", "AMP_MATH/Concurrency::erfcinv", "AMP_MATH/Concurrency::erfcinvf", "AMP_MATH/Concurrency::erff", "AMP_MATH/Concurrency::erfinv", "AMP_MATH/Concurrency::erfinvf", "AMP_MATH/Concurrency::exp", "AMP_MATH/Concurrency::exp10", "AMP_MATH/Concurrency::exp10f", "AMP_MATH/Concurrency::exp2", "AMP_MATH/Concurrency::exp2f", "AMP_MATH/Concurrency::expf", "AMP_MATH/Concurrency::expm1", "AMP_MATH/Concurrency::expm1f", "AMP_MATH/Concurrency::fabs", "AMP_MATH/Concurrency::fabsf", "AMP_MATH/Concurrency::fdim", "AMP_MATH/Concurrency::fdimf", "AMP_MATH/Concurrency::floor", "AMP_MATH/Concurrency::floorf", "AMP_MATH/Concurrency::fma", "AMP_MATH/Concurrency::fmaf", "AMP_MATH/Concurrency::fmax", "AMP_MATH/Concurrency::fmaxf", "AMP_MATH/Concurrency::fmin", "AMP_MATH/Concurrency::fminf", "AMP_MATH/Concurrency::fmodf", "AMP_MATH/Concurrency::fpclassify", "AMP_MATH/Concurrency::frexp", "AMP_MATH/Concurrency::frexpf", "AMP_MATH/Concurrency::hypot", "AMP_MATH/Concurrency::hypotf", "AMP_MATH/Concurrency::ilogb", "AMP_MATH/Concurrency::ilogbf", "AMP_MATH/Concurrency::isfinite", "AMP_MATH/Concurrency::isinf", "AMP_MATH/Concurrency::isnan", "AMP_MATH/Concurrency::isnormal", "AMP_MATH/Concurrency::ldexp", "AMP_MATH/Concurrency::ldexpf", "AMP_MATH/Concurrency::lgamma", "AMP_MATH/Concurrency::lgammaf", "AMP_MATH/Concurrency::log", "AMP_MATH/Concurrency::log10", "AMP_MATH/Concurrency::log10f", "AMP_MATH/Concurrency::log1p", "AMP_MATH/Concurrency::log1pf", "AMP_MATH/Concurrency::log2", "AMP_MATH/Concurrency::log2f", "AMP_MATH/Concurrency::logb", "AMP_MATH/Concurrency::logbf", "AMP_MATH/Concurrency::logf", "AMP_MATH/Concurrency::modf", "AMP_MATH/Concurrency::modff", "AMP_MATH/Concurrency::nan", "AMP_MATH/Concurrency::nanf", "AMP_MATH/Concurrency::nearbyint", "AMP_MATH/Concurrency::nearbyintf", "AMP_MATH/Concurrency::nextafter", "AMP_MATH/Concurrency::nextafterf", "AMP_MATH/Concurrency::phi", "AMP_MATH/Concurrency::phif", "AMP_MATH/Concurrency::pow", "AMP_MATH/Concurrency::powf", "AMP_MATH/Concurrency::probit", "AMP_MATH/Concurrency::probitf", "AMP_MATH/Concurrency::rcbrt", "AMP_MATH/Concurrency::rcbrtf", "AMP_MATH/Concurrency::remainder", "AMP_MATH/Concurrency::remainderf", "AMP_MATH/Concurrency::remquo", "AMP_MATH/Concurrency::remquof", "AMP_MATH/Concurrency::round", "AMP_MATH/Concurrency::roundf", "AMP_MATH/Concurrency::rsqrt", "AMP_MATH/Concurrency::rsqrtf", "AMP_MATH/Concurrency::scalb", "AMP_MATH/Concurrency::scalbf", "AMP_MATH/Concurrency::scalbn", "AMP_MATH/Concurrency::scalbnf", "AMP_MATH/Concurrency::signbit", "AMP_MATH/Concurrency::signbitf", "AMP_MATH/Concurrency::sin", "AMP_MATH/Concurrency::sincos", "AMP_MATH/Concurrency::sincosf", "AMP_MATH/Concurrency::sinf", "AMP_MATH/Concurrency::sinh", "AMP_MATH/Concurrency::sinhf", "AMP_MATH/Concurrency::sinpi", "AMP_MATH/Concurrency::sinpif", "AMP_MATH/Concurrency::sqrt", "AMP_MATH/Concurrency::sqrtf", "AMP_MATH/Concurrency::tan", "AMP_MATH/Concurrency::tanf", "AMP_MATH/Concurrency::tanh", "AMP_MATH/Concurrency::tanhf", "AMP_MATH/Concurrency::tanpi", "AMP_MATH/Concurrency::tanpif", "AMP_MATH/Concurrency::tgamma", "AMP_MATH/Concurrency::tgammaf", "AMP_MATH/Concurrency::trunc", "AMP_MATH/Concurrency::truncf"]
ms.assetid: ba653308-dc28-4384-b2fd-6cd718a72f91
---
# Concurrency::precise_math Namespace

Functions in the `precise_math` namespace are C99 compliant. Both single precision and double precision versions of each function are included. For example, `acos` is the double-precision version and `acosf` is the single-precision version. These functions, including the single-precision functions, require extended double-precision support on the accelerator. You can use the [accelerator::supports_double_precision](accelerator-class.md#supports_double_precision) to determine if you can run these functions on a specific accelerator.

## Syntax

```cpp
namespace precise_math;
```

### Parameters

## Members

### Functions

|Name|Description|
|----------|-----------------|
|[acos](concurrency-precise-math-namespace-functions.md#acos)|Overloaded. Calculates the arccosine of the argument|
|[acosf](concurrency-precise-math-namespace-functions.md#acosf)|Calculates the arccosine of the argument|
|[acosh](concurrency-precise-math-namespace-functions.md#acosh)|Overloaded. Calculates the inverse hyperbolic cosine of the argument|
|[acoshf](concurrency-precise-math-namespace-functions.md#acoshf)|Calculates the inverse hyperbolic cosine of the argument|
|[asin](concurrency-precise-math-namespace-functions.md#asin)|Overloaded. Calculates the arcsine of the argument|
|[asinf](concurrency-precise-math-namespace-functions.md#asinf)|Calculates the arcsine of the argument|
|[asinh](concurrency-precise-math-namespace-functions.md#asinh)|Overloaded. Calculates the inverse hyperbolic sine of the argument|
|[asinhf](concurrency-precise-math-namespace-functions.md#asinhf)|Calculates the inverse hyperbolic sine of the argument|
|[atan](concurrency-precise-math-namespace-functions.md#atan)|Overloaded. Calculates the arctangent of the argument|
|[atan2](concurrency-precise-math-namespace-functions.md#atan2)|Overloaded. Calculates the arctangent of _Y/_X|
|[atan2f](concurrency-precise-math-namespace-functions.md#atan2f)|Calculates the arctangent of _Y/_X|
|[atanf](concurrency-precise-math-namespace-functions.md#atanf)|Calculates the arctangent of the argument|
|[atanh](concurrency-precise-math-namespace-functions.md#atanh)|Overloaded. Calculates the inverse hyperbolic tangent of the argument|
|[atanhf](concurrency-precise-math-namespace-functions.md#atanhf)|Calculates the inverse hyperbolic tangent of the argument|
|[cbrt](concurrency-precise-math-namespace-functions.md#cbrt)|Overloaded. Computes the real cube root of the argument|
|[cbrtf](concurrency-precise-math-namespace-functions.md#cbrtf)|Computes the real cube root of the argument|
|[ceil](concurrency-precise-math-namespace-functions.md#ceil)|Overloaded. Calculates the ceiling of the argument|
|[ceilf](concurrency-precise-math-namespace-functions.md#ceilf)|Calculates the ceiling of the argument|
|[copysign](concurrency-precise-math-namespace-functions.md#copysign)|Overloaded. Produces a value with the magnitude of _X and the sign of _Y|
|[copysignf](concurrency-precise-math-namespace-functions.md#copysignf)|Produces a value with the magnitude of _X and the sign of _Y|
|[cos](concurrency-precise-math-namespace-functions.md#cos)|Overloaded. Calculates the cosine of the argument|
|[cosf](concurrency-precise-math-namespace-functions.md#cosf)|Calculates the cosine of the argument|
|[cosh](concurrency-precise-math-namespace-functions.md#cosh)|Overloaded. Calculates the hyperbolic cosine value of the argument|
|[coshf](concurrency-precise-math-namespace-functions.md#coshf)|Calculates the hyperbolic cosine value of the argument|
|[cospi](concurrency-precise-math-namespace-functions.md#cospi)|Overloaded. Calculates the cosine value of pi \* _X|
|[cospif](concurrency-precise-math-namespace-functions.md#cospif)|Calculates the cosine value of pi \* _X|
|[erf](concurrency-precise-math-namespace-functions.md#erf)|Overloaded. Computes the error function of _X|
|[erfc](concurrency-precise-math-namespace-functions.md#erfc)|Overloaded. Computes the complementary error function of _X|
|[erfcf](concurrency-precise-math-namespace-functions.md#erfcf)|Computes the complementary error function of _X|
|[erfcinv](concurrency-precise-math-namespace-functions.md#erfcinv)|Overloaded. Computes the inverse complementary error function of _X|
|[erfcinvf](concurrency-precise-math-namespace-functions.md#erfcinvf)|Computes the inverse complementary error function of _X|
|[erff](concurrency-precise-math-namespace-functions.md#erff)|Computes the error function of _X|
|[erfinv](concurrency-precise-math-namespace-functions.md#erfinv)|Overloaded. Computes the inverse error function of _X|
|[erfinvf](concurrency-precise-math-namespace-functions.md#erfinvf)|Computes the inverse error function of _X|
|[exp](concurrency-precise-math-namespace-functions.md#exp)|Overloaded. Calculates the base-e exponential of the argument|
|[exp10](concurrency-precise-math-namespace-functions.md#exp10)|Overloaded. Calculates the base-10 exponential of the argument|
|[exp10f](concurrency-precise-math-namespace-functions.md#exp10f)|Calculates the base-10 exponential of the argument|
|[exp2](concurrency-precise-math-namespace-functions.md#exp2)|Overloaded. Calculates the base-2 exponential of the argument|
|[exp2f](concurrency-precise-math-namespace-functions.md#exp2f)|Calculates the base-2 exponential of the argument|
|[expf](concurrency-precise-math-namespace-functions.md#expf)|Calculates the base-e exponential of the argument|
|[expm1](concurrency-precise-math-namespace-functions.md#expm1)|Overloaded. Calculates the base-e exponential of the argument, minus 1|
|[expm1f](concurrency-precise-math-namespace-functions.md#expm1f)|Calculates the base-e exponential of the argument, minus 1|
|[fabs](concurrency-precise-math-namespace-functions.md#fabs)|Overloaded. Returns the absolute value of the argument|
|[fabsf](concurrency-precise-math-namespace-functions.md#fabsf)|Returns the absolute value of the argument|
|[fdim](concurrency-precise-math-namespace-functions.md#fdim)|Overloaded. Determines the positive difference between the arguments|
|[fdimf](concurrency-precise-math-namespace-functions.md#fdimf)|Determines the positive difference between the arguments|
|[floor](concurrency-precise-math-namespace-functions.md#floor)|Overloaded. Calculates the floor of the argument|
|[floorf](concurrency-precise-math-namespace-functions.md#floorf)|Calculates the floor of the argument|
|[fma](concurrency-precise-math-namespace-functions.md#fma)|Overloaded. Compute (_X \* _Y) + _Z, rounded as one ternary operation|
|[fmaf](concurrency-precise-math-namespace-functions.md#fmaf)|Compute (_X \* _Y) + _Z, rounded as one ternary operation|
|[fmax](concurrency-precise-math-namespace-functions.md#fmax)|Overloaded. Determine the maximum numeric value of the arguments|
|[fmaxf](concurrency-precise-math-namespace-functions.md#fmaxf)|Determine the maximum numeric value of the arguments|
|[fmin](concurrency-precise-math-namespace-functions.md#fmin)|Overloaded. Determine the minimum numeric value of the arguments|
|[fminf](concurrency-precise-math-namespace-functions.md#fminf)|Determine the minimum numeric value of the arguments|
|[fmod Function (C++ AMP)](concurrency-precise-math-namespace-functions.md#fmod)|Overloaded. Calculates the floating-point remainder of _X/_Y|
|[fmodf](concurrency-precise-math-namespace-functions.md#fmodf)|Calculates the floating-point remainder of _X/_Y|
|[fpclassify](concurrency-precise-math-namespace-functions.md#fpclassify)|Overloaded. Classifies the argument value as NaN, infinite, normal, subnormal, zero|
|[frexp](concurrency-precise-math-namespace-functions.md#frexp)|Overloaded. Gets the mantissa and exponent of _X|
|[frexpf](concurrency-precise-math-namespace-functions.md#frexpf)|Gets the mantissa and exponent of _X|
|[hypot](concurrency-precise-math-namespace-functions.md#hypot)|Overloaded. Computes the square root of the sum of the squares of _X and _Y|
|[hypotf](concurrency-precise-math-namespace-functions.md#hypotf)|Computes the square root of the sum of the squares of _X and _Y|
|[ilogb](concurrency-precise-math-namespace-functions.md#ilogb)|Overloaded. Extract the exponent of _X as a signed int value|
|[ilogbf](concurrency-precise-math-namespace-functions.md#ilogbf)|Extract the exponent of _X as a signed int value|
|[isfinite](concurrency-precise-math-namespace-functions.md#isfinite)|Overloaded. Determines whether the argument has a finite value|
|[isinf](concurrency-precise-math-namespace-functions.md#isinf)|Overloaded. Determines whether the argument is an infinity|
|[isnan](concurrency-precise-math-namespace-functions.md#isnan)|Overloaded. Determines whether the argument is a NaN|
|[isnormal](concurrency-precise-math-namespace-functions.md#isnormal)|Overloaded. Determines whether the argument is a normal|
|[ldexp](concurrency-precise-math-namespace-functions.md#ldexp)|Overloaded. Computes a real number from the mantissa and exponent|
|[ldexpf](concurrency-precise-math-namespace-functions.md#ldexpf)|Computes a real number from the mantissa and exponent|
|[lgamma](concurrency-precise-math-namespace-functions.md#lgamma)|Overloaded. Computes the natural logarithm of the absolute value of gamma of the argument|
|[lgammaf](concurrency-precise-math-namespace-functions.md#lgammaf)|Computes the natural logarithm of the absolute value of gamma of the argument|
|[log](concurrency-precise-math-namespace-functions.md#log)|Overloaded. Calculates the base-e logarithm of the argument|
|[log10](concurrency-precise-math-namespace-functions.md#log10)|Overloaded. Calculates the base-10 logarithm of the argument|
|[log10f](concurrency-precise-math-namespace-functions.md#log10f)|Calculates the base-10 logarithm of the argument|
|[log1p](concurrency-precise-math-namespace-functions.md#log1p)|Overloaded. Calculates the base-e logarithm of 1 plus the argument|
|[log1pf](concurrency-precise-math-namespace-functions.md#log1pf)|Calculates the base-e logarithm of 1 plus the argument|
|[log2](concurrency-precise-math-namespace-functions.md#log2)|Overloaded. Calculates the base-2 logarithm of the argument|
|[log2f](concurrency-precise-math-namespace-functions.md#log2f)|Calculates the base-2 logarithm of the argument|
|[logb](concurrency-precise-math-namespace-functions.md#logb)|Overloaded. Extracts the exponent of _X, as a signed integer value in floating-point format|
|[logbf](concurrency-precise-math-namespace-functions.md#logbf)|Extracts the exponent of _X, as a signed integer value in floating-point format|
|[logf](concurrency-precise-math-namespace-functions.md#logf)|Calculates the base-e logarithm of the argument|
|[modf](concurrency-precise-math-namespace-functions.md#modf)|Overloaded. Splits _X into fractional and integer parts.|
|[modff](concurrency-precise-math-namespace-functions.md#modff)|Splits _X into fractional and integer parts.|
|[nan](concurrency-precise-math-namespace-functions.md#nan)|Returns a quiet NaN|
|[nanf](concurrency-precise-math-namespace-functions.md#nanf)|Returns a quiet NaN|
|[nearbyint](concurrency-precise-math-namespace-functions.md#nearbyint)|Overloaded. Rounds the argument to an integer value in floating-point format, using the current rounding direction.|
|[nearbyintf](concurrency-precise-math-namespace-functions.md#nearbyintf)|Rounds the argument to an integer value in floating-point format, using the current rounding direction.|
|[nextafter](concurrency-precise-math-namespace-functions.md#nextafter)|Overloaded. Determine the next representable value, in the type of the function, after _X in the direction of _Y|
|[nextafterf](concurrency-precise-math-namespace-functions.md#nextafterf)|Determine the next representable value, in the type of the function, after _X in the direction of _Y|
|[phi](concurrency-precise-math-namespace-functions.md#phi)|Overloaded. Returns the cumulative distribution function of the argument|
|[phif](concurrency-precise-math-namespace-functions.md#phif)|Returns the cumulative distribution function of the argument|
|[pow](concurrency-precise-math-namespace-functions.md#pow)|Overloaded. Calculates _X raised to the power of _Y|
|[powf](concurrency-precise-math-namespace-functions.md#powf)|Calculates _X raised to the power of _Y|
|[probit](concurrency-precise-math-namespace-functions.md#probit)|Overloaded. Returns the inverse cumulative distribution function of the argument|
|[probitf](concurrency-precise-math-namespace-functions.md#probitf)|Returns the inverse cumulative distribution function of the argument|
|[rcbrt](concurrency-precise-math-namespace-functions.md#rcbrt)|Overloaded. Returns the reciprocal of the cube root of the argument|
|[rcbrtf](concurrency-precise-math-namespace-functions.md#rcbrtf)|Returns the reciprocal of the cube root of the argument|
|[remainder](concurrency-precise-math-namespace-functions.md#remainder)|Overloaded. Computes the remainder: _X REM _Y|
|[remainderf](concurrency-precise-math-namespace-functions.md#remainderf)|Computes the remainder: _X REM _Y|
|[remquo](concurrency-precise-math-namespace-functions.md#remquo)|Overloaded. Computes the same remainder as _X REM _Y. Also calculates the lower 23 bits of the integral quotient _X/_Y, and gives that value the same sign as _X/_Y. It stores this signed value in the integer pointed to by _Quo.|
|[remquof](concurrency-precise-math-namespace-functions.md#remquof)|Computes the same remainder as _X REM _Y. Also calculates the lower 23 bits of the integral quotient _X/_Y, and gives that value the same sign as _X/_Y. It stores this signed value in the integer pointed to by _Quo.|
|[round](concurrency-precise-math-namespace-functions.md#round)|Overloaded. Rounds _X to the nearest integer|
|[roundf](concurrency-precise-math-namespace-functions.md#roundf)|Rounds _X to the nearest integer|
|[rsqrt](concurrency-precise-math-namespace-functions.md#rsqrt)|Overloaded. Returns the reciprocal of the square root of the argument|
|[rsqrtf](concurrency-precise-math-namespace-functions.md#rsqrtf)|Returns the reciprocal of the square root of the argument|
|[scalb](concurrency-precise-math-namespace-functions.md#scalb)|Overloaded. Multiplies _X by FLT_RADIX to the power _Y|
|[scalbf](concurrency-precise-math-namespace-functions.md#scalbf)|Multiplies _X by FLT_RADIX to the power _Y|
|[scalbn](concurrency-precise-math-namespace-functions.md#scalbn)|Overloaded. Multiplies _X by FLT_RADIX to the power _Y|
|[scalbnf](concurrency-precise-math-namespace-functions.md#scalbnf)|Multiplies _X by FLT_RADIX to the power _Y|
|[signbit](concurrency-precise-math-namespace-functions.md#signbit)|Overloaded. Determines whether the sign of _X is negative|
|[signbitf](concurrency-precise-math-namespace-functions.md#signbitf)|Determines whether the sign of _X is negative|
|[sin](concurrency-precise-math-namespace-functions.md#sin)|Overloaded. Calculates the sine value of the argument|
|[sincos](concurrency-precise-math-namespace-functions.md#sincos)|Overloaded. Calculates sine and cosine value of _X|
|[sincosf](concurrency-precise-math-namespace-functions.md#sincosf)|Calculates sine and cosine value of _X|
|[sinf](concurrency-precise-math-namespace-functions.md#sinf)|Calculates the sine value of the argument|
|[sinh](concurrency-precise-math-namespace-functions.md#sinh)|Overloaded. Calculates the hyperbolic sine value of the argument|
|[sinhf](concurrency-precise-math-namespace-functions.md#sinhf)|Calculates the hyperbolic sine value of the argument|
|[sinpi](concurrency-precise-math-namespace-functions.md#sinpi)|Overloaded. Calculates the sine value of pi \* _X|
|[sinpif](concurrency-precise-math-namespace-functions.md#sinpif)|Calculates the sine value of pi \* _X|
|[sqrt](concurrency-precise-math-namespace-functions.md#sqrt)|Overloaded. Calculates the squre root of the argument|
|[sqrtf](concurrency-precise-math-namespace-functions.md#sqrtf)|Calculates the squre root of the argument|
|[tan](concurrency-precise-math-namespace-functions.md#tan)|Overloaded. Calculates the tangent value of the argument|
|[tanf](concurrency-precise-math-namespace-functions.md#tanf)|Calculates the tangent value of the argument|
|[tanh](concurrency-precise-math-namespace-functions.md#tanh)|Overloaded. Calculates the hyperbolic tangent value of the argument|
|[tanhf](concurrency-precise-math-namespace-functions.md#tanhf)|Calculates the hyperbolic tangent value of the argument|
|[tanpi](concurrency-precise-math-namespace-functions.md#tanpi)|Overloaded. Calculates the tangent value of pi \* _X|
|[tanpif](concurrency-precise-math-namespace-functions.md#tanpif)|Calculates the tangent value of pi \* _X|
|[tgamma](concurrency-precise-math-namespace-functions.md#tgamma)|Overloaded. Computes the gamma function of _X|
|[tgammaf](concurrency-precise-math-namespace-functions.md#tgammaf)|Computes the gamma function of _X|
|[trunc](concurrency-precise-math-namespace-functions.md#trunc)|Overloaded. Truncates the argument to the integer component|
|[truncf](concurrency-precise-math-namespace-functions.md#truncf)|Truncates the argument to the integer component|

## Requirements

**Header:** amp_math.h

**Namespace:** Concurrency

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
