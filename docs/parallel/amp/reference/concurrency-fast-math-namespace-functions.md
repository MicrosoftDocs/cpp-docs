---
title: "Concurrency::fast_math namespace functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: f5763d62-795b-4de6-a7a5-c7115f158708
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Concurrency::fast_math namespace functions
||||  
|-|-|-|  
|[acos Function (fast_math)](#acos)|[acosf Function (fast_math)](#acosf)|[asin Function (fast_math)](#asin)|  
|[asinf Function (fast_math)](#asinf)|[atan Function (fast_math)](#atan)|[atan2 Function (fast_math)](#atan2)|  
|[atan2f Function (fast_math)](#atan2f)|[atanf Function (fast_math)](#atanf)|[ceil Function (fast_math)](#ceil)|  
|[ceilf Function (fast_math)](#ceilf)|[cos Function (fast_math)](#cos)|[cosf Function (fast_math)](#cosf)|  
|[cosh Function (fast_math)](#cosh)|[coshf Function (fast_math)](#coshf)|[exp Function (fast_math)](#exp)|  
|[exp2 Function (fast_math)](#exp2)|[exp2f Function (fast_math)](#exp2f)|[expf Function (fast_math)](#expf)|  
|[fabs Function (fast_math)](#fabs)|[fabsf Function (fast_math)](#fabsf)|[floor Function (fast_math)](#floor)|  
|[floorf Function (fast_math)](#floorf)|[fmax Function (fast_math)](#fmax)|[fmaxf Function (fast_math)](#fmaxf)|  
|[fmin Function (fast_math)](#fmin)|[fminf Function (fast_math)](#fminf)|[fmod Function (fast_math)](#fmod)|  
|[fmodf Function (fast_math)](#fmodf)|[frexp Function (fast_math)](#frexp)|[frexpf Function (fast_math)](#frexpf)|  
|[isfinite Function (fast_math)](#isfinite)|[isinf Function (fast_math)](#isinf)|[isnan Function (fast_math)](#isnan)|  
|[ldexp Function (fast_math)](#ldexp)|[ldexpf Function (fast_math)](#ldexpf)|[log Function (fast_math)](#log)|  
|[log10 Function (fast_math)](#log10)|[log10f Function (fast_math)](#log10f)|[log2 Function (fast_math)](#log2)|  
|[log2f Function (fast_math)](#log2f)|[logf Function (fast_math)](#logf)|[modf Function (fast_math)](#modf)|  
|[modff Function (fast_math)](#modff)|[pow Function (fast_math)](#pow)|[powf Function (fast_math)](#powf)|  
|[round Function (fast_math)](#round)|[roundf Function (fast_math)](#roundf)|[rsqrt Function (fast_math)](#rsqrt)|  
|[rsqrtf Function (fast_math)](#rsqrtf)|[signbit Function (fast_math)](#signbit)|[signbitf Function (fast_math)](#signbitf)|  
|[sin Function (fast_math)](#sin)|[sincos Function (fast_math)](#sincos)|[sincosf Function (fast_math)](#sincosf)|  
|[sinf Function (fast_math)](#sinf)|[sinh Function (fast_math)](#sinh)|[sinhf Function (fast_math)](#sinhf)|  
|[sqrt Function (fast_math)](#sqrt)|[sqrtf Function (fast_math)](#sqrtf)|[tan Function (fast_math)](#tan)|  
|[tanf Function (fast_math)](#tanf)|[tanh Function (fast_math)](#tanh)|[tanhf Function (fast_math)](#tanhf)|  
|[trunc Function (fast_math)](#trunc)|[truncf Function (fast_math)](#truncf)|  
  
##  <a name="acos"></a>  acos Function (fast_math)  
 Calculates the arccosine of the argument  
  
```  
inline float acos(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arccosine value of the argument  
  
##  <a name="acosf"></a>  acosf Function (fast_math)  
 Calculates the arccosine of the argument  
  
```  
inline float acosf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arccosine value of the argument  
  
##  <a name="asin"></a>  asin Function (fast_math)  
 Calculates the arcsine of the argument  
  
```  
inline float asin(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arcsine value of the argument  
  
##  <a name="asinf"></a>  asinf Function (fast_math)  
 Calculates the arcsine of the argument  
  
```  
inline float asinf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arcsine value of the argument  
  
##  <a name="atan"></a>  atan Function (fast_math)  
 Calculates the arctangent of the argument  
  
```  
inline float atan(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arctangent value of the argument  
  
##  <a name="atan2"></a>  atan2 Function (fast_math)  
 Calculates the arctangent of _Y/_X  
  
```  
inline float atan2(
    float _Y,  
    float _X) restrict(amp);
```  
  
### Parameters  
 `_Y`  
 Floating-point value  
  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arctangent value of _Y/_X  
  
##  <a name="atan2f"></a>  atan2f Function (fast_math)  
 Calculates the arctangent of _Y/_X  
  
```  
inline float atan2f(
    float _Y,  
    float _X) restrict(amp);
```  
  
### Parameters  
 `_Y`  
 Floating-point value  
  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arctangent value of _Y/_X  
  
##  <a name="atanf"></a>  atanf Function (fast_math)  
 Calculates the arctangent of the argument  
  
```  
inline float atanf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arctangent value of the argument  
  
##  <a name="ceil"></a>  ceil Function (fast_math)  
 Calculates the ceiling of the argument  
  
```  
inline float ceil(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the ceiling of the argument  
  
##  <a name="ceilf"></a>  ceilf Function (fast_math)  
 Calculates the ceiling of the argument  
  
```  
inline float ceilf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the ceiling of the argument  
  
##  <a name="cosf"></a>  cosf Function (fast_math)  
 Calculates the cosine of the argument  
  
```  
inline float cosf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cosine value of the argument  
  
##  <a name="coshf"></a>  coshf Function (fast_math)  
 Calculates the hyperbolic cosine value of the argument  
  
```  
inline float coshf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic cosine value of the argument  
  
##  <a name="cos"></a>  cos Function  (fast_math)  
 Calculates the cosine of the argument  
  
```  
inline float cos(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cosine value of the argument  
  
##  <a name="cosh"></a>  cosh Function (fast_math)  
 Calculates the hyperbolic cosine value of the argument  
  
```  
inline float cosh(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic cosine value of the argument  
  
##  <a name="exp"></a>  exp Function (fast_math)  
 Calculates the base-e exponential of the argument  
  
```  
inline float exp(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e exponential of the argument  
  
##  <a name="exp2"></a>  exp2 Function (fast_math)  
 Calculates the base-2 exponential of the argument  
  
```  
inline float exp2(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-2 exponential of the argument  
  
##  <a name="exp2f"></a>  exp2f Function (fast_math)  
 Calculates the base-2 exponential of the argument  
  
```  
inline float exp2f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-2 exponential of the argument  
  
##  <a name="expf"></a>  expf Function (fast_math)  
 Calculates the base-e exponential of the argument  
  
```  
inline float expf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e exponential of the argument  
  
##  <a name="fabs"></a>  fabs Function (fast_math)  
 Returns the absolute value of the argument  
  
```  
inline float fabs(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Integer value  
  
### Return Value  
 Returns the absolute value of the argument  
  
##  <a name="fabsf"></a>  fabsf Function (fast_math)  
 Returns the absolute value of the argument  
  
```  
inline float fabsf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the absolute value of the argument  
  
##  <a name="floor"></a>  floor Function (fast_math)  
 Calculates the floor of the argument  
  
```  
inline float floor(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the floor of the argument  
  
##  <a name="floorf"></a>  floorf Function (fast_math)  
 Calculates the floor of the argument  
  
```  
inline float floorf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the floor of the argument  
  
##  <a name="fmax"></a>  fmax Function (fast_math)  
 Determine the maximum numeric value of the arguments  
  
```  
inline float max(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Integer value  
  
 `_Y`  
 Integer value  
  
### Return Value  
 Return the maximum numeric value of the arguments  
  
##  <a name="fmaxf"></a>  fmaxf Function (fast_math)  
 Determine the maximum numeric value of the arguments  
  
```  
inline float fmaxf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Return the maximum numeric value of the arguments  
  
##  <a name="fmin"></a>  fmin Function (fast_math)  
 Determine the minimum numeric value of the arguments  
  
```  
inline float min(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Integer value  
  
 `_Y`  
 Integer value  
  
### Return Value  
 Return the minimum numeric value of the arguments  
  
##  <a name="fminf"></a>  fminf Function (fast_math)  
 Determine the minimum numeric value of the arguments  
  
```  
inline float fminf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Return the minimum numeric value of the arguments  
  
##  <a name="fmod"></a>  fmod Function (fast_math)  
 Calculates the floating-point remainder of _X/_Y  
  
```  
inline float fmod(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Returns the floating-point remainder of _X/_Y  
  
##  <a name="fmodf"></a>  fmodf Function (fast_math)  
 Calculates the floating-point remainder of _X/_Y.  
  
```  
inline float fmodf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Returns the floating-point remainder of _X/_Y  
  
##  <a name="frexp"></a>  frexp Function (fast_math)  
 Gets the mantissa and exponent of _X  
  
```  
inline float frexp(
    float _X,  
    _Out_ int* _Exp) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Exp`  
 Returns the integer exponent of _X in floating-point value  
  
### Return Value  
 Returns the mantissa _X  
  
##  <a name="frexpf"></a>  frexpf Function (fast_math)  
 Gets the mantissa and exponent of _X  
  
```  
inline float frexpf(
    float _X,  
    _Out_ int* _Exp) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Exp`  
 Returns the integer exponent of _X in floating-point value  
  
### Return Value  
 Returns the mantissa _X  
  
##  <a name="isfinite"></a>  isfinite Function (fast_math)  
 Determines whether the argument has a finite value  
  
```  
inline int isfinite(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has a finite value  
  
##  <a name="isinf"></a>  isinf Function (fast_math)  
 Determines whether the argument is an infinity  
  
```  
inline int isinf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has an infinite value  
  
##  <a name="isnan"></a>  isnan Function (fast_math)  
 Determines whether the argument is a NaN  
  
```  
inline int isnan(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has a NaN value  
  
##  <a name="ldexp"></a>  ldexp Function (fast_math)  
 Computes a real number from the mantissa and exponent  
  
```  
inline float ldexp(
    float _X,  
    int _Exp) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value, mentissa  
  
 `_Exp`  
 Integer exponent  
  
### Return Value  
 Returns _X * 2^_Exp  
  
##  <a name="ldexpf"></a>  ldexpf Function (fast_math)  
 Computes a real number from the mantissa and exponent  
  
```  
inline float ldexpf(
    float _X,  
    int _Exp) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value, mentissa  
  
 `_Exp`  
 Integer exponent  
  
### Return Value  
 Returns _X * 2^_Exp  
  
##  <a name="log"></a>  log Function (fast_math)  
 Calculates the base-e logarithm of the argument  
  
```  
inline float log(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e logarithm of the argument  
  
##  <a name="log10"></a>  log10 Function (fast_math)  
 Calculates the base-10 logarithm of the argument  
  
```  
inline float log10(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
##  <a name="log10f"></a>  log10f Function (fast_math)  
 Calculates the base-10 logarithm of the argument  
  
```  
inline float log10f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
##  <a name="log2"></a>  log2 Function (fast_math)  
 Calculates the base-2 logarithm of the argument  
  
```  
inline float log2(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-2 logarithm of the argument  
  
##  <a name="log2f"></a>  log2f Function (fast_math)  
 Calculates the base-2 logarithm of the argument  
  
```  
inline float log2f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
##  <a name="logf"></a>  logf Function (fast_math)  
 Calculates the base-e logarithm of the argument  
  
```  
inline float logf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e logarithm of the argument  
  
##  <a name="modf"></a>  modf Function (fast_math)  
 Splits _X into fractional and integer parts.  
  
```  
inline float modf(
    float _X,  
    float* _Ip) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Ip`  
  
### Return Value  
 Returns the signed fractional portion of _X  
  
##  <a name="modff"></a>  modff Function (fast_math)  
 Splits _X into fractional and integer parts.  
  
```  
inline float modff(
    float _X,  
    float* _Ip) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Ip`  
  
### Return Value  
 Returns the signed fractional portion of _X  
  
##  <a name="pow"></a>  pow Function (fast_math)  
 Calculates _X raised to the power of _Y  
  
```  
inline float pow(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value, base  
  
 `_Y`  
 Floating-point value, exponent  
  
### Return Value  
 Returns the value of _X raised to the power of _Y  
  
##  <a name="powf"></a>  powf Function (fast_math)  
 Calculates _X raised to the power of _Y  
  
```  
inline float powf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value, base  
  
 `_Y`  
 Floating-point value, exponent  
  
### Return Value  
  
##  <a name="round"></a>  round Function (fast_math)  
 Rounds _X to the nearest integer  
  
```  
inline float round(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the nearest integer of _X  
  
##  <a name="roundf"></a>  roundf Function (fast_math)  
 Rounds _X to the nearest integer  
  
```  
inline float roundf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the nearest integer of _X  
  
##  <a name="rsqrt"></a>  rsqrt Function (fast_math)  
 Returns the reciprocal of the square root of the argument  
  
```  
inline float rsqrt(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the reciprocal of the square root of the argument  
  
##  <a name="rsqrtf"></a>  rsqrtf Function (fast_math)  
 Returns the reciprocal of the square root of the argument  
  
```  
inline float rsqrtf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the reciprocal of the square root of the argument  
  
##  <a name="signbit"></a>  signbit Function (fast_math)  
 Determines whether the sign of _X is negative  
  
```  
inline int signbit(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the sign of _X is negative  
  
##  <a name="signbitf"></a>  signbitf Function (fast_math)  
 Determines whether the sign of _X is negative  
  
```  
inline int signbitf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the sign of _X is negative  
  
##  <a name="sin"></a>  sin Function (fast_math)  
 Calculates the sine value of the argument  
  
```  
inline float sin(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the sine value of the argument  
  
##  <a name="sinf"></a>  sinf Function (fast_math)  
 Calculates the sine value of the argument  
  
```  
inline float sinf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the sine value of the argument  
  
##  <a name="sincos"></a>  sincos Function (fast_math)  
 Calculates sine and cosine value of _X  
  
```  
inline void sincos(
    float _X,  
    float* _S,  
    float* _C) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_S`  
 Returns the sine value of _X  
  
 `_C`  
 Returns the cosine value of _X  
  
##  <a name="sincosf"></a>  sincosf Function (fast_math)  
 Calculates sine and cosine value of _X  
  
```  
inline void sincosf(
    float _X,  
    float* _S,  
    float* _C) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_S`  
 Returns the sine value of _X  
  
 `_C`  
 Returns the cosine value of _X  
  
##  <a name="sinh"></a>  sinh Function (fast_math)  
 Calculates the hyperbolic sine value of the argument  
  
```  
inline float sinh(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic sine value of the argument  
  
##  <a name="sinhf"></a>  sinhf Function (fast_math)  
 Calculates the hyperbolic sine value of the argument  
  
```  
inline float sinhf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic sine value of the argument  
  
##  <a name="sqrt"></a>  sqrt Function (fast_math)  
 Calculates the squre root of the argument  
  
```  
inline float sqrt(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the squre root of the argument  
  
##  <a name="sqrtf"></a>  sqrtf Function (fast_math)  
 Calculates the squre root of the argument  
  
```  
inline float sqrtf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the squre root of the argument  
  
##  <a name="tan"></a>  tan Function (fast_math)  
 Calculates the tangent value of the argument  
  
```  
inline float tan(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the tangent value of the argument  
  
##  <a name="tanf"></a>  tanf Function (fast_math)  
 Calculates the tangent value of the argument  
  
```  
inline float tanf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the tangent value of the argument  
  
##  <a name="tanh"></a>  tanh Function (fast_math)  
 Calculates the hyperbolic tangent value of the argument  
  
```  
inline float tanh(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic tangent value of the argument  
  
##  <a name="tanhf"></a>  tanhf Function (fast_math)  
 Calculates the hyperbolic tangent value of the argument  
  
```  
inline float tanhf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic tangent value of the argument  
  
##  <a name="trunc"></a>  trunc Function (fast_math)  
 Truncates the argument to the integer component  
  
```  
inline float trunc(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the integer component of the argument  
  
##  <a name="truncf"></a>  truncf Function (fast_math)  
 Truncates the argument to the integer component  
  
```  
inline float truncf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the integer component of the argument  
  
## See Also  
 [Concurrency::fast_math Namespace](concurrency-fast-math-namespace.md)
