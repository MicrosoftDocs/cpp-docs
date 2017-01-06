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
|[acos Function](#acos)|[acosf Function](#acosf)|[asin Function](#asin)|  
|[asinf Function](#asinf)|[atan Function](#atan)|[atan2 Function](#atan2)|  
|[atan2f Function](#atan2f)|[atanf Function](#atanf)|[ceil Function](#ceil)|  
|[ceilf Function](#ceilf)|[cos Function](#cos)|[cosf Function](#cosf)|  
|[cosh Function](#cosh)|[coshf Function](#coshf)|[exp Function](#exp)|  
|[exp2 Function](#exp2)|[exp2f Function](#exp2f)|[expf Function](#expf)|  
|[fabs Function](#fabs)|[fabsf Function](#fabsf)|[floor Function](#floor)|  
|[floorf Function](#floorf)|[fmax Function](#fmax)|[fmaxf Function](#fmaxf)|  
|[fmin Function](#fmin)|[fminf Function](#fminf)|[fmod Function](#fmod)|  
|[fmodf Function](#fmodf)|[frexp Function](#frexp)|[frexpf Function](#frexpf)|  
|[isfinite Function](#isfinite)|[isinf Function](#isinf)|[isnan Function](#isnan)|  
|[ldexp Function](#ldexp)|[ldexpf Function](#ldexpf)|[log Function](#log)|  
|[log10 Function](#log10)|[log10f Function](#log10f)|[log2 Function](#log2)|  
|[log2f Function](#log2f)|[logf Function](#logf)|[modf Function](#modf)|  
|[modff Function](#modff)|[pow Function](#pow)|[powf Function](#powf)|  
|[round Function](#round)|[roundf Function](#roundf)|[rsqrt Function](#rsqrt)|  
|[rsqrtf Function](#rsqrtf)|[signbit Function](#signbit)|[signbitf Function](#signbitf)|  
|[sin Function](#sin)|[sincos Function](#sincos)|[sincosf Function](#sincosf)|  
|[sinf Function](#sinf)|[sinh Function](#sinh)|[sinhf Function](#sinhf)|  
|[sqrt Function](#sqrt)|[sqrtf Function](#sqrtf)|[tan Function](#tan)|  
|[tanf Function](#tanf)|[tanh Function](#tanh)|[tanhf Function](#tanhf)|  
|[trunc Function](#trunc)|[truncf Function](#truncf)|  
  
##  <a name="acos"></a>  acos Function  
 Calculates the arccosine of the argument  
  
```  
inline float acos(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arccosine value of the argument  
  
##  <a name="acosf"></a>  acosf Function  
 Calculates the arccosine of the argument  
  
```  
inline float acosf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arccosine value of the argument  
  
##  <a name="asin"></a>  asin Function  
 Calculates the arcsine of the argument  
  
```  
inline float asin(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arcsine value of the argument  
  
##  <a name="asinf"></a>  asinf Function  
 Calculates the arcsine of the argument  
  
```  
inline float asinf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arcsine value of the argument  
  
##  <a name="atan"></a>  atan Function  
 Calculates the arctangent of the argument  
  
```  
inline float atan(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arctangent value of the argument  
  
##  <a name="atan2"></a>  atan2 Function  
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
  
##  <a name="atan2f"></a>  atan2f Function  
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
  
##  <a name="atanf"></a>  atanf Function  
 Calculates the arctangent of the argument  
  
```  
inline float atanf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arctangent value of the argument  
  
##  <a name="ceil"></a>  ceil Function  
 Calculates the ceiling of the argument  
  
```  
inline float ceil(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the ceiling of the argument  
  
##  <a name="ceilf"></a>  ceilf Function  
 Calculates the ceiling of the argument  
  
```  
inline float ceilf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the ceiling of the argument  
  
##  <a name="cosf"></a>  cosf Function  
 Calculates the cosine of the argument  
  
```  
inline float cosf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cosine value of the argument  
  
##  <a name="coshf"></a>  coshf Function  
 Calculates the hyperbolic cosine value of the argument  
  
```  
inline float coshf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic cosine value of the argument  
  
##  <a name="cos"></a>  cos Function   
 Calculates the cosine of the argument  
  
```  
inline float cos(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cosine value of the argument  
  
##  <a name="cosh"></a>  cosh Function  
 Calculates the hyperbolic cosine value of the argument  
  
```  
inline float cosh(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic cosine value of the argument  
  
##  <a name="exp"></a>  exp Function  
 Calculates the base-e exponential of the argument  
  
```  
inline float exp(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e exponential of the argument  
  
##  <a name="exp2"></a>  exp2 Function  
 Calculates the base-2 exponential of the argument  
  
```  
inline float exp2(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-2 exponential of the argument  
  
##  <a name="exp2f"></a>  exp2f Function  
 Calculates the base-2 exponential of the argument  
  
```  
inline float exp2f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-2 exponential of the argument  
  
##  <a name="expf"></a>  expf Function  
 Calculates the base-e exponential of the argument  
  
```  
inline float expf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e exponential of the argument  
  
##  <a name="fabs"></a>  fabs Function  
 Returns the absolute value of the argument  
  
```  
inline float fabs(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Integer value  
  
### Return Value  
 Returns the absolute value of the argument  
  
##  <a name="fabsf"></a>  fabsf Function  
 Returns the absolute value of the argument  
  
```  
inline float fabsf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the absolute value of the argument  
  
##  <a name="floor"></a>  floor Function  
 Calculates the floor of the argument  
  
```  
inline float floor(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the floor of the argument  
  
##  <a name="floorf"></a>  floorf Function  
 Calculates the floor of the argument  
  
```  
inline float floorf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the floor of the argument  
  
##  <a name="fmax"></a>  fmax Function  
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
  
##  <a name="fmaxf"></a>  fmaxf Function  
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
  
##  <a name="fmin"></a>  fmin Function  
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
  
##  <a name="fminf"></a>  fminf Function  
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
  
##  <a name="fmod"></a>  fmod Function  
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
  
##  <a name="fmodf"></a>  fmodf Function  
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
  
##  <a name="frexp"></a>  frexp Function  
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
  
##  <a name="frexpf"></a>  frexpf Function  
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
  
##  <a name="isfinite"></a>  isfinite Function  
 Determines whether the argument has a finite value  
  
```  
inline int isfinite(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has a finite value  
  
##  <a name="isinf"></a>  isinf Function  
 Determines whether the argument is an infinity  
  
```  
inline int isinf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has an infinite value  
  
##  <a name="isnan"></a>  isnan Function  
 Determines whether the argument is a NaN  
  
```  
inline int isnan(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has a NaN value  
  
##  <a name="ldexp"></a>  ldexp Function  
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
  
##  <a name="ldexpf"></a>  ldexpf Function  
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
  
##  <a name="log"></a>  log Function  
 Calculates the base-e logarithm of the argument  
  
```  
inline float log(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e logarithm of the argument  
  
##  <a name="log10"></a>  log10 Function  
 Calculates the base-10 logarithm of the argument  
  
```  
inline float log10(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
##  <a name="log10f"></a>  log10f Function  
 Calculates the base-10 logarithm of the argument  
  
```  
inline float log10f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
##  <a name="log2"></a>  log2 Function  
 Calculates the base-2 logarithm of the argument  
  
```  
inline float log2(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-2 logarithm of the argument  
  
##  <a name="log2f"></a>  log2f Function  
 Calculates the base-2 logarithm of the argument  
  
```  
inline float log2f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
##  <a name="logf"></a>  logf Function  
 Calculates the base-e logarithm of the argument  
  
```  
inline float logf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e logarithm of the argument  
  
##  <a name="modf"></a>  modf Function  
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
  
##  <a name="modff"></a>  modff Function  
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
  
##  <a name="pow"></a>  pow Function  
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
  
##  <a name="powf"></a>  powf Function  
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
  
##  <a name="round"></a>  round Function  
 Rounds _X to the nearest integer  
  
```  
inline float round(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the nearest integer of _X  
  
##  <a name="roundf"></a>  roundf Function  
 Rounds _X to the nearest integer  
  
```  
inline float roundf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the nearest integer of _X  
  
##  <a name="rsqrt"></a>  rsqrt Function  
 Returns the reciprocal of the square root of the argument  
  
```  
inline float rsqrt(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the reciprocal of the square root of the argument  
  
##  <a name="rsqrtf"></a>  rsqrtf Function  
 Returns the reciprocal of the square root of the argument  
  
```  
inline float rsqrtf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the reciprocal of the square root of the argument  
  
##  <a name="signbit"></a>  signbit Function  
 Determines whether the sign of _X is negative  
  
```  
inline int signbit(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the sign of _X is negative  
  
##  <a name="signbitf"></a>  signbitf Function  
 Determines whether the sign of _X is negative  
  
```  
inline int signbitf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the sign of _X is negative  
  
##  <a name="sin"></a>  sin Function  
 Calculates the sine value of the argument  
  
```  
inline float sin(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the sine value of the argument  
  
##  <a name="sinf"></a>  sinf Function  
 Calculates the sine value of the argument  
  
```  
inline float sinf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the sine value of the argument  
  
##  <a name="sincos"></a>  sincos Function  
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
  
##  <a name="sincosf"></a>  sincosf Function  
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
  
##  <a name="sinh"></a>  sinh Function  
 Calculates the hyperbolic sine value of the argument  
  
```  
inline float sinh(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic sine value of the argument  
  
##  <a name="sinhf"></a>  sinhf Function  
 Calculates the hyperbolic sine value of the argument  
  
```  
inline float sinhf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic sine value of the argument  
  
##  <a name="sqrt"></a>  sqrt Function  
 Calculates the squre root of the argument  
  
```  
inline float sqrt(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the squre root of the argument  
  
##  <a name="sqrtf"></a>  sqrtf Function  
 Calculates the squre root of the argument  
  
```  
inline float sqrtf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the squre root of the argument  
  
##  <a name="tan"></a>  tan Function  
 Calculates the tangent value of the argument  
  
```  
inline float tan(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the tangent value of the argument  
  
##  <a name="tanf"></a>  tanf Function  
 Calculates the tangent value of the argument  
  
```  
inline float tanf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the tangent value of the argument  
  
##  <a name="tanh"></a>  tanh Function  
 Calculates the hyperbolic tangent value of the argument  
  
```  
inline float tanh(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic tangent value of the argument  
  
##  <a name="tanhf"></a>  tanhf Function  
 Calculates the hyperbolic tangent value of the argument  
  
```  
inline float tanhf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic tangent value of the argument  
  
##  <a name="trunc"></a>  trunc Function  
 Truncates the argument to the integer component  
  
```  
inline float trunc(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the integer component of the argument  
  
##  <a name="truncf"></a>  truncf Function  
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
