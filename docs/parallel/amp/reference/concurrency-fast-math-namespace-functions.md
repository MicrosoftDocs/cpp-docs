---
description: "Learn more about: Concurrency::fast_math namespace functions"
title: "Concurrency::fast_math namespace functions"
ms.date: "11/04/2016"
f1_keywords: ["amp_math/Concurrency::fast_math::acos", "amp_math/Concurrency::fast_math::asin", "amp_math/Concurrency::fast_math::asinf", "amp_math/Concurrency::fast_math::atan2", "amp_math/Concurrency::fast_math::atan2f", "amp_math/Concurrency::fast_math::ceil", "amp_math/Concurrency::fast_math::ceilf", "amp_math/Concurrency::fast_math::cosf", "amp_math/Concurrency::fast_math::cosh", "amp_math/Concurrency::fast_math::exp", "amp_math/Concurrency::fast_math::exp2", "amp_math/Concurrency::fast_math::expf", "amp_math/Concurrency::fast_math::fabs", "amp_math/Concurrency::fast_math::floor", "amp_math/Concurrency::fast_math::floorf", "amp_math/Concurrency::fast_math::fmaxf", "amp_math/Concurrency::fast_math::fmin", "amp_math/Concurrency::fast_math::fmod", "amp_math/Concurrency::fast_math::fmodf", "amp_math/Concurrency::fast_math::frexpf", "amp_math/Concurrency::fast_math::isfinite", "amp_math/Concurrency::fast_math::isnan", "amp_math/Concurrency::fast_math::ldexp", "amp_math/Concurrency::fast_math::log", "amp_math/Concurrency::fast_math::log10", "amp_math/Concurrency::fast_math::log2", "amp_math/Concurrency::fast_math::log2f", "amp_math/Concurrency::fast_math::modf", "amp_math/Concurrency::fast_math::modff", "amp_math/Concurrency::fast_math::powf", "amp_math/Concurrency::fast_math::round", "amp_math/Concurrency::fast_math::rsqrt", "amp_math/Concurrency::fast_math::rsqrtf", "amp_math/Concurrency::fast_math::signbitf", "amp_math/Concurrency::fast_math::sin", "amp_math/Concurrency::fast_math::sincosf", "amp_math/Concurrency::fast_math::sinf", "amp_math/Concurrency::fast_math::sinhf", "amp_math/Concurrency::fast_math::sqrt", "amp_math/Concurrency::fast_math::tan", "amp_math/Concurrency::fast_math::tanf", "amp_math/Concurrency::fast_math::tanhf", "amp_math/Concurrency::fast_math::trunc"]
ms.assetid: f5763d62-795b-4de6-a7a5-c7115f158708
---
# Concurrency::fast_math namespace functions

:::row:::
   :::column span="":::
      [`acos`](#acos)\
      [`acosf`](#acosf)\
      [`asin`](#asin)\
      [`asinf`](#asinf)\
      [`atan`](#atan)\
      [`atan2`](#atan2)\
      [`atan2f`](#atan2f)\
      [`atanf`](#atanf)\
      [`ceil`](#ceil)\
      [`ceilf`](#ceilf)\
      [`cos`](#cos)\
      [`cosf`](#cosf)\
      [`cosh`](#cosh)\
      [`coshf`](#coshf)\
      [`exp`](#exp)\
      [`exp2`](#exp2)\
      [`exp2f`](#exp2f)
   :::column-end:::
   :::column span="":::
      [`expf`](#expf)\
      [`fabs`](#fabs)\
      [`fabsf`](#fabsf)\
      [`floor`](#floor)\
      [`floorf`](#floorf)\
      [`fmax`](#fmax)\
      [`fmaxf`](#fmaxf)\
      [`fmin`](#fmin)\
      [`fminf`](#fminf)\
      [`fmod`](#fmod)\
      [`fmodf`](#fmodf)\
      [`frexp`](#frexp)\
      [`frexpf`](#frexpf)\
      [`isfinite`](#isfinite)\
      [`isinf`](#isinf)\
      [`isnan`](#isnan)
   :::column-end:::
   :::column span="":::
      [`ldexp`](#ldexp)\
      [`ldexpf`](#ldexpf)\
      [`log`](#log)\
      [`log10`](#log10)\
      [`log10f`](#log10f)\
      [`log2`](#log2)\
      [`log2f`](#log2f)\
      [`logf`](#logf)\
      [`modf`](#modf)\
      [`modff`](#modff)\
      [`pow`](#pow)\
      [`powf`](#powf)\
      [`round`](#round)\
      [`roundf`](#roundf)\
      [`rsqrt`](#rsqrt)\
      [`rsqrtf`](#rsqrtf)
   :::column-end:::
   :::column span="":::
      [`signbit`](#signbit)\
      [`signbitf`](#signbitf)\
      [`sin`](#sin)\
      [`sincos`](#sincos)\
      [`sincosf`](#sincosf)\
      [`sinf`](#sinf)\
      [`sinh`](#sinh)\
      [`sinhf`](#sinhf)\
      [`sqrt`](#sqrt)\
      [`sqrtf`](#sqrtf)\
      [`tan`](#tan)\
      [`tanf`](#tanf)\
      [`tanh`](#tanh)\
      [`tanhf`](#tanhf)\
      [`trunc`](#trunc)\
      [`truncf`](#truncf)
   :::column-end:::
:::row-end:::

## <a name="acos"></a> acos

Calculates the arccosine of the argument

```cpp
inline float acos(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the arccosine value of the argument

## <a name="acosf"></a> acosf

Calculates the arccosine of the argument

```cpp
inline float acosf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the arccosine value of the argument

## <a name="asin"></a> asin

Calculates the arcsine of the argument

```cpp
inline float asin(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the arcsine value of the argument

## <a name="asinf"></a> asinf

Calculates the arcsine of the argument

```cpp
inline float asinf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the arcsine value of the argument

## <a name="atan"></a> atan

Calculates the arctangent of the argument

```cpp
inline float atan(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the arctangent value of the argument

## <a name="atan2"></a> atan2

Calculates the arctangent of _Y/_X

```cpp
inline float atan2(
    float _Y,
    float _X) restrict(amp);
```

### Parameters

*_Y*<br/>
Floating-point value

*_X*<br/>
Floating-point value

### Return Value

Returns the arctangent value of _Y/_X

## <a name="atan2f"></a> atan2f

Calculates the arctangent of _Y/_X

```cpp
inline float atan2f(
    float _Y,
    float _X) restrict(amp);
```

### Parameters

*_Y*<br/>
Floating-point value

*_X*<br/>
Floating-point value

### Return Value

Returns the arctangent value of _Y/_X

## <a name="atanf"></a> atanf

Calculates the arctangent of the argument

```cpp
inline float atanf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the arctangent value of the argument

## <a name="ceil"></a> ceil

Calculates the ceiling of the argument

```cpp
inline float ceil(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the ceiling of the argument

## <a name="ceilf"></a> ceilf

Calculates the ceiling of the argument

```cpp
inline float ceilf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the ceiling of the argument

## <a name="cosf"></a> cosf

Calculates the cosine of the argument

```cpp
inline float cosf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the cosine value of the argument

## <a name="coshf"></a> coshf

Calculates the hyperbolic cosine value of the argument

```cpp
inline float coshf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the hyperbolic cosine value of the argument

## <a name="cos"></a> cos

Calculates the cosine of the argument

```cpp
inline float cos(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the cosine value of the argument

## <a name="cosh"></a> cosh

Calculates the hyperbolic cosine value of the argument

```cpp
inline float cosh(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the hyperbolic cosine value of the argument

## <a name="exp"></a> exp

Calculates the base-e exponential of the argument

```cpp
inline float exp(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the base-e exponential of the argument

## <a name="exp2"></a> exp2

Calculates the base-2 exponential of the argument

```cpp
inline float exp2(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the base-2 exponential of the argument

## <a name="exp2f"></a> exp2f

Calculates the base-2 exponential of the argument

```cpp
inline float exp2f(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the base-2 exponential of the argument

## <a name="expf"></a> expf

Calculates the base-e exponential of the argument

```cpp
inline float expf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the base-e exponential of the argument

## <a name="fabs"></a> fabs

Returns the absolute value of the argument

```cpp
inline float fabs(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Integer value

### Return Value

Returns the absolute value of the argument

## <a name="fabsf"></a> fabsf

Returns the absolute value of the argument

```cpp
inline float fabsf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the absolute value of the argument

## <a name="floor"></a> floor

Calculates the floor of the argument

```cpp
inline float floor(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the floor of the argument

## <a name="floorf"></a> floorf

Calculates the floor of the argument

```cpp
inline float floorf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the floor of the argument

## <a name="fmax"></a> fmax

Determine the maximum numeric value of the arguments

```cpp
inline float max(
    float _X,
    float _Y) restrict(amp);
```

### Parameters

*_X*<br/>
Integer value

*_Y*<br/>
Integer value

### Return Value

Return the maximum numeric value of the arguments

## <a name="fmaxf"></a> fmaxf

Determine the maximum numeric value of the arguments

```cpp
inline float fmaxf(
    float _X,
    float _Y) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

*_Y*<br/>
Floating-point value

### Return Value

Return the maximum numeric value of the arguments

## <a name="fmin"></a> fmin

Determine the minimum numeric value of the arguments

```cpp
inline float min(
    float _X,
    float _Y) restrict(amp);
```

### Parameters

*_X*<br/>
Integer value

*_Y*<br/>
Integer value

### Return Value

Return the minimum numeric value of the arguments

## <a name="fminf"></a> fminf

Determine the minimum numeric value of the arguments

```cpp
inline float fminf(
    float _X,
    float _Y) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

*_Y*<br/>
Floating-point value

### Return Value

Return the minimum numeric value of the arguments

## <a name="fmod"></a> fmod

Calculates the floating-point remainder of _X/_Y

```cpp
inline float fmod(
    float _X,
    float _Y) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

*_Y*<br/>
Floating-point value

### Return Value

Returns the floating-point remainder of _X/_Y

## <a name="fmodf"></a> fmodf

Calculates the floating-point remainder of _X/_Y.

```cpp
inline float fmodf(
    float _X,
    float _Y) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

*_Y*<br/>
Floating-point value

### Return Value

Returns the floating-point remainder of _X/_Y

## <a name="frexp"></a> frexp

Gets the mantissa and exponent of _X

```cpp
inline float frexp(
    float _X,
    _Out_ int* _Exp) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

*_Exp*<br/>
Returns the integer exponent of _X in floating-point value

### Return Value

Returns the mantissa _X

## <a name="frexpf"></a> frexpf

Gets the mantissa and exponent of _X

```cpp
inline float frexpf(
    float _X,
    _Out_ int* _Exp) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

*_Exp*<br/>
Returns the integer exponent of _X in floating-point value

### Return Value

Returns the mantissa _X

## <a name="isfinite"></a> isfinite

Determines whether the argument has a finite value

```cpp
inline int isfinite(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns a nonzero value if and only if the argument has a finite value

## <a name="isinf"></a> isinf

Determines whether the argument is an infinity

```cpp
inline int isinf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns a nonzero value if and only if the argument has an infinite value

## <a name="isnan"></a> isnan

Determines whether the argument is a NaN

```cpp
inline int isnan(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns a nonzero value if and only if the argument has a NaN value

## <a name="ldexp"></a> ldexp

Computes a real number from the mantissa and exponent

```cpp
inline float ldexp(
    float _X,
    int _Exp) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value, mentissa

*_Exp*<br/>
Integer exponent

### Return Value

Returns _X \* 2^_Exp

## <a name="ldexpf"></a> ldexpf

Computes a real number from the mantissa and exponent

```cpp
inline float ldexpf(
    float _X,
    int _Exp) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value, mentissa

*_Exp*<br/>
Integer exponent

### Return Value

Returns _X \* 2^_Exp

## <a name="log"></a> log

Calculates the base-e logarithm of the argument

```cpp
inline float log(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the base-e logarithm of the argument

## <a name="log10"></a> log10

Calculates the base-10 logarithm of the argument

```cpp
inline float log10(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the base-10 logarithm of the argument

## <a name="log10f"></a> log10f

Calculates the base-10 logarithm of the argument

```cpp
inline float log10f(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the base-10 logarithm of the argument

## <a name="log2"></a> log2

Calculates the base-2 logarithm of the argument

```cpp
inline float log2(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the base-2 logarithm of the argument

## <a name="log2f"></a> log2f

Calculates the base-2 logarithm of the argument

```cpp
inline float log2f(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the base-10 logarithm of the argument

## <a name="logf"></a> logf

Calculates the base-e logarithm of the argument

```cpp
inline float logf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the base-e logarithm of the argument

## <a name="modf"></a> modf

Splits _X into fractional and integer parts.

```cpp
inline float modf(
    float _X,
    float* _Ip) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

*_Ip*<br/>
Receives integer part of the value

### Return Value

Returns the signed fractional portion of _X

## <a name="modff"></a> modff

Splits _X into fractional and integer parts.

```cpp
inline float modff(
    float _X,
    float* _Ip) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

*_Ip*<br/>
Receives integer part of the value

### Return Value

Returns the signed fractional portion of _X

## <a name="pow"></a> pow

Calculates _X raised to the power of _Y

```cpp
inline float pow(
    float _X,
    float _Y) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value, base

*_Y*<br/>
Floating-point value, exponent

### Return Value

Returns the value of _X raised to the power of _Y

## <a name="powf"></a> powf

Calculates _X raised to the power of _Y

```cpp
inline float powf(
    float _X,
    float _Y) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value, base

*_Y*<br/>
Floating-point value, exponent

### Return Value

## <a name="round"></a> round

Rounds _X to the nearest integer

```cpp
inline float round(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the nearest integer of _X

## <a name="roundf"></a> roundf

Rounds _X to the nearest integer

```cpp
inline float roundf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the nearest integer of _X

## <a name="rsqrt"></a> rsqrt

Returns the reciprocal of the square root of the argument

```cpp
inline float rsqrt(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the reciprocal of the square root of the argument

## <a name="rsqrtf"></a> rsqrtf

Returns the reciprocal of the square root of the argument

```cpp
inline float rsqrtf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the reciprocal of the square root of the argument

## <a name="signbit"></a> signbit

Determines whether the sign of _X is negative

```cpp
inline int signbit(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns a nonzero value if and only if the sign of _X is negative

## <a name="signbitf"></a> signbitf

Determines whether the sign of _X is negative

```cpp
inline int signbitf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns a nonzero value if and only if the sign of _X is negative

## <a name="sin"></a> sin

Calculates the sine value of the argument

```cpp
inline float sin(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the sine value of the argument

## <a name="sinf"></a> sinf

Calculates the sine value of the argument

```cpp
inline float sinf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the sine value of the argument

## <a name="sincos"></a> sincos

Calculates sine and cosine value of _X

```cpp
inline void sincos(
    float _X,
    float* _S,
    float* _C) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

*_S*<br/>
Returns the sine value of _X

*_C*<br/>
Returns the cosine value of _X

## <a name="sincosf"></a> sincosf

Calculates sine and cosine value of _X

```cpp
inline void sincosf(
    float _X,
    float* _S,
    float* _C) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

*_S*<br/>
Returns the sine value of _X

*_C*<br/>
Returns the cosine value of _X

## <a name="sinh"></a> sinh

Calculates the hyperbolic sine value of the argument

```cpp
inline float sinh(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the hyperbolic sine value of the argument

## <a name="sinhf"></a> sinhf

Calculates the hyperbolic sine value of the argument

```cpp
inline float sinhf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the hyperbolic sine value of the argument

## <a name="sqrt"></a> sqrt

Calculates the squre root of the argument

```cpp
inline float sqrt(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the squre root of the argument

## <a name="sqrtf"></a> sqrtf

Calculates the squre root of the argument

```cpp
inline float sqrtf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the squre root of the argument

## <a name="tan"></a> tan

Calculates the tangent value of the argument

```cpp
inline float tan(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the tangent value of the argument

## <a name="tanf"></a> tanf

Calculates the tangent value of the argument

```cpp
inline float tanf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the tangent value of the argument

## <a name="tanh"></a> tanh

Calculates the hyperbolic tangent value of the argument

```cpp
inline float tanh(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the hyperbolic tangent value of the argument

## <a name="tanhf"></a> tanhf

Calculates the hyperbolic tangent value of the argument

```cpp
inline float tanhf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the hyperbolic tangent value of the argument

## <a name="trunc"></a> trunc

Truncates the argument to the integer component

```cpp
inline float trunc(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the integer component of the argument

## <a name="truncf"></a> truncf

Truncates the argument to the integer component

```cpp
inline float truncf(float _X) restrict(amp);
```

### Parameters

*_X*<br/>
Floating-point value

### Return Value

Returns the integer component of the argument

## Requirements

**Header:** amp_math.h
**Namespace:** Concurrency::fast_math

## See also

[Concurrency::fast_math Namespace](concurrency-fast-math-namespace.md)
