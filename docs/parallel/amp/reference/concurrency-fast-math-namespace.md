---
description: "Learn more about: Concurrency::fast_math Namespace"
title: "Concurrency::fast_math Namespace"
ms.date: "11/04/2016"
f1_keywords: ["amp_math/Concurrency::fast_math"]
ms.assetid: 54fed939-9902-49db-9f29-e98fd9821508
---
# Concurrency::fast_math Namespace

Functions in the `fast_math` namespace have lower accuracy, support only single-precision (**`float`**), and call the DirectX intrinsics. There are two versions of each function, for example `cos` and `cosf`. Both versions take and return a **`float`**, but each calls the same DirectX intrinsic.

## Syntax

```cpp
namespace fast_math;
```

## Members

### Functions

|Name|Description|
|----------|-----------------|
|[cos](concurrency-fast-math-namespace-functions.md#cos)|Calculates the arccosine of the argument|
|[cosf](concurrency-fast-math-namespace-functions.md#cosf)|Calculates the arccosine of the argument|
|[asin](concurrency-fast-math-namespace-functions.md#asin)|Calculates the arcsine of the argument|
|[asinf](concurrency-fast-math-namespace-functions.md#asinf)|Calculates the arcsine of the argument|
|[atan](concurrency-fast-math-namespace-functions.md#atan)|Calculates the arctangent of the argument|
|[atan2](concurrency-fast-math-namespace-functions.md#atan2)|Calculates the arctangent of _Y/_X|
|[atan2f](concurrency-fast-math-namespace-functions.md#atan2f)|Calculates the arctangent of _Y/_X|
|[atanf](concurrency-fast-math-namespace-functions.md#atanf)|Calculates the arctangent of the argument|
|[ceil](concurrency-fast-math-namespace-functions.md#ceil)|Calculates the ceiling of the argument|
|[ceilf](concurrency-fast-math-namespace-functions.md#ceilf)|Calculates the ceiling of the argument|
|[cos](concurrency-fast-math-namespace-functions.md#cos)|Calculates the cosine of the argument|
|[cosf](concurrency-fast-math-namespace-functions.md#cosf)|Calculates the cosine of the argument|
|[cosh](concurrency-fast-math-namespace-functions.md#cosh)|Calculates the hyperbolic cosine value of the argument|
|[coshf](concurrency-fast-math-namespace-functions.md#coshf)|Calculates the hyperbolic cosine value of the argument|
|[exp](concurrency-fast-math-namespace-functions.md#exp)|Calculates the base-e exponential of the argument|
|[exp2](concurrency-fast-math-namespace-functions.md#exp2)|Calculates the base-2 exponential of the argument|
|[exp2f](concurrency-fast-math-namespace-functions.md#exp2f)|Calculates the base-2 exponential of the argument|
|[expf](concurrency-fast-math-namespace-functions.md#expf)|Calculates the base-e exponential of the argument|
|[fabs](concurrency-fast-math-namespace-functions.md#fabs)|Returns the absolute value of the argument|
|[fabsf](concurrency-fast-math-namespace-functions.md#fabsf)|Returns the absolute value of the argument|
|[floor](concurrency-fast-math-namespace-functions.md#floor)|Calculates the floor of the argument|
|[floorf](concurrency-fast-math-namespace-functions.md#floorf)|Calculates the floor of the argument|
|[fmax](concurrency-fast-math-namespace-functions.md#fmax)|Determine the maximum numeric value of the arguments|
|[fmaxf](concurrency-fast-math-namespace-functions.md#fmaxf)|Determine the maximum numeric value of the arguments|
|[fmin](concurrency-fast-math-namespace-functions.md#fmin)|Determine the minimum numeric value of the arguments|
|[fminf](concurrency-fast-math-namespace-functions.md#fminf)|Determine the minimum numeric value of the arguments|
|[fmod](concurrency-fast-math-namespace-functions.md#fmod)|Calculates the floating-point remainder of _X/_Y|
|[fmodf](concurrency-fast-math-namespace-functions.md#fmodf)|Calculates the floating-point remainder of _X/_Y|
|[frexp](concurrency-fast-math-namespace-functions.md#frexp)|Gets the mantissa and exponent of _X|
|[frexpf](concurrency-fast-math-namespace-functions.md#frexpf)|Gets the mantissa and exponent of _X|
|[isfinite](concurrency-fast-math-namespace-functions.md#isfinite)|Determines whether the argument has a finite value|
|[isinf](concurrency-fast-math-namespace-functions.md#isinf)|Determines whether the argument is an infinity|
|[isnan](concurrency-fast-math-namespace-functions.md#isnan)|Determines whether the argument is a NaN|
|[ldexp](concurrency-fast-math-namespace-functions.md#ldexp)|Computes a real number from the mantissa and exponent|
|[ldexpf](concurrency-fast-math-namespace-functions.md#ldexpf)|Computes a real number from the mantissa and exponent|
|[log](concurrency-fast-math-namespace-functions.md#log)|Calculates the base-e logarithm of the argument|
|[log10](concurrency-fast-math-namespace-functions.md#log10)|Calculates the base-10 logarithm of the argument|
|[log10f](concurrency-fast-math-namespace-functions.md#log10f)|Calculates the base-10 logarithm of the argument|
|[log2](concurrency-fast-math-namespace-functions.md#log2)|Calculates the base-2 logarithm of the argument|
|[log2f](concurrency-fast-math-namespace-functions.md#log2f)|Calculates the base-2 logarithm of the argument|
|[logf](concurrency-fast-math-namespace-functions.md#logf)|Calculates the base-e logarithm of the argument|
|[modf](concurrency-fast-math-namespace-functions.md#modf)|Splits _X into fractional and integer parts.|
|[modff](concurrency-fast-math-namespace-functions.md#modff)|Splits _X into fractional and integer parts.|
|[pow](concurrency-fast-math-namespace-functions.md#pow)|Calculates _X raised to the power of _Y|
|[powf](concurrency-fast-math-namespace-functions.md#powf)|Calculates _X raised to the power of _Y|
|[round](concurrency-fast-math-namespace-functions.md#round)|Rounds _X to the nearest integer|
|[roundf](concurrency-fast-math-namespace-functions.md#roundf)|Rounds _X to the nearest integer|
|[rsqrt](concurrency-fast-math-namespace-functions.md#rsqrt)|Returns the reciprocal of the square root of the argument|
|[rsqrtf](concurrency-fast-math-namespace-functions.md#rsqrtf)|Returns the reciprocal of the square root of the argument|
|[signbit](concurrency-fast-math-namespace-functions.md#signbit)|Returns the sign of the argument|
|[signbitf](concurrency-fast-math-namespace-functions.md#signbitf)|Returns the sign of the argument|
|[sin](concurrency-fast-math-namespace-functions.md#sin)|Calculates the sine value of the argument|
|[sincos](concurrency-fast-math-namespace-functions.md#sincos)|Calculates sine and cosine value of _X|
|[sincosf](concurrency-fast-math-namespace-functions.md#sincosf)|Calculates sine and cosine value of _X|
|[sinf](concurrency-fast-math-namespace-functions.md#sinf)|Calculates the sine value of the argument|
|[sinh](concurrency-fast-math-namespace-functions.md#sinh)|Calculates the hyperbolic sine value of the argument|
|[sinhf](concurrency-fast-math-namespace-functions.md#sinhf)|Calculates the hyperbolic sine value of the argument|
|[sqrt](concurrency-fast-math-namespace-functions.md#sqrt)|Calculates the square root of the argument|
|[sqrtf](concurrency-fast-math-namespace-functions.md#sqrtf)|Calculates the square root of the argument|
|[tan](concurrency-fast-math-namespace-functions.md#tan)|Calculates the tangent value of the argument|
|[tanf](concurrency-fast-math-namespace-functions.md#tanf)|Calculates the tangent value of the argument|
|[tanh](concurrency-fast-math-namespace-functions.md#tanh)|Calculates the hyperbolic tangent value of the argument|
|[tanhf](concurrency-fast-math-namespace-functions.md#tanhf)|Calculates the hyperbolic tangent value of the argument|
|[trunc](concurrency-fast-math-namespace-functions.md#trunc)|Truncates the argument to the integer component|
|[truncf](concurrency-fast-math-namespace-functions.md#truncf)|Truncates the argument to the integer component|

## Requirements

**Header:** amp_math.h

**Namespace:** Concurrency::fast_math

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
