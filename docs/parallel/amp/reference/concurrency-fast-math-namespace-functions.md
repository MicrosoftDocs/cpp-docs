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
|[acos Function (fast_math)](#acos_function)|[acosf Function (fast_math)](#acosf_function)|[asin Function (fast_math)](#asin_function)|  
|[asinf Function (fast_math)](#asinf_function)|[atan Function (fast_math)](#atan_function)|[atan2 Function (fast_math)](#atan2_function)|  
|[atan2f Function (fast_math)](#atan2f_function)|[atanf Function (fast_math)](#atanf_function)|[ceil Function (fast_math)](#ceil_function)|  
|[ceilf Function (fast_math)](#ceilf_function)|[cos Function (fast_math)](#cos_function)|[cosf Function (fast_math)](#cosf_function)|  
|[cosh Function (fast_math)](#cosh_function)|[coshf Function (fast_math)](#coshf_function)|[exp Function (fast_math)](#exp_function)|  
|[exp2 Function (fast_math)](#exp2_function)|[exp2f Function (fast_math)](#exp2f_function)|[expf Function (fast_math)](#expf_function)|  
|[fabs Function (fast_math)](#fabs_function)|[fabsf Function (fast_math)](#fabsf_function)|[floor Function (fast_math)](#floor_function)|  
|[floorf Function (fast_math)](#floorf_function)|[fmax Function (fast_math)](#fmax_function)|[fmaxf Function (fast_math)](#fmaxf_function)|  
|[fmin Function (fast_math)](#fmin_function)|[fminf Function (fast_math)](#fminf_function)|[fmod Function (fast_math)](#fmod_function)|  
|[fmodf Function (fast_math)](#fmodf_function)|[frexp Function (fast_math)](#frexp_function)|[frexpf Function (fast_math)](#frexpf_function)|  
|[isfinite Function (fast_math)](#isfinite_function)|[isinf Function (fast_math)](#isinf_function)|[isnan Function (fast_math)](#isnan_function)|  
|[ldexp Function (fast_math)](#ldexp_function)|[ldexpf Function (fast_math)](#ldexpf_function)|[log Function (fast_math)](#log_function)|  
|[log10 Function (fast_math)](#log10_function)|[log10f Function (fast_math)](#log10f_function)|[log2 Function (fast_math)](#log2_function)|  
|[log2f Function (fast_math)](#log2f_function)|[logf Function (fast_math)](#logf_function)|[modf Function (fast_math)](#modf_function)|  
|[modff Function (fast_math)](#modff_function)|[pow Function (fast_math)](#pow_function)|[powf Function (fast_math)](#powf_function)|  
|[round Function (fast_math)](#round_function)|[roundf Function (fast_math)](#roundf_function)|[rsqrt Function (fast_math)](#rsqrt_function)|  
|[rsqrtf Function (fast_math)](#rsqrtf_function)|[signbit Function (fast_math)](#signbit_function)|[signbitf Function (fast_math)](#signbitf_function)|  
|[sin Function (fast_math)](#sin_function)|[sincos Function (fast_math)](#sincos_function)|[sincosf Function (fast_math)](#sincosf_function)|  
|[sinf Function (fast_math)](#sinf_function)|[sinh Function (fast_math)](#sinh_function)|[sinhf Function (fast_math)](#sinhf_function)|  
|[sqrt Function (fast_math)](#sqrt_function)|[sqrtf Function (fast_math)](#sqrtf_function)|[tan Function (fast_math)](#tan_function)|  
|[tanf Function (fast_math)](#tanf_function)|[tanh Function (fast_math)](#tanh_function)|[tanhf Function (fast_math)](#tanhf_function)|  
|[trunc Function (fast_math)](#trunc_function)|[truncf Function (fast_math)](#truncf_function)|  
  
##  <a name="acos_function"></a>  acos Function (fast_math)  
 Calculates the arccosine of the argument  
  
```  
inline float acos(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arccosine value of the argument  
  
##  <a name="acosf_function"></a>  acosf Function (fast_math)  
 Calculates the arccosine of the argument  
  
```  
inline float acosf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arccosine value of the argument  
  
##  <a name="asin_function"></a>  asin Function (fast_math)  
 Calculates the arcsine of the argument  
  
```  
inline float asin(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arcsine value of the argument  
  
##  <a name="asinf_function"></a>  asinf Function (fast_math)  
 Calculates the arcsine of the argument  
  
```  
inline float asinf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arcsine value of the argument  
  
##  <a name="atan_function"></a>  atan Function (fast_math)  
 Calculates the arctangent of the argument  
  
```  
inline float atan(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arctangent value of the argument  
  
##  <a name="atan2_function"></a>  atan2 Function (fast_math)  
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
  
##  <a name="atan2f_function"></a>  atan2f Function (fast_math)  
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
  
##  <a name="atanf_function"></a>  atanf Function (fast_math)  
 Calculates the arctangent of the argument  
  
```  
inline float atanf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arctangent value of the argument  
  
##  <a name="ceil_function"></a>  ceil Function (fast_math)  
 Calculates the ceiling of the argument  
  
```  
inline float ceil(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the ceiling of the argument  
  
##  <a name="ceilf_function"></a>  ceilf Function (fast_math)  
 Calculates the ceiling of the argument  
  
```  
inline float ceilf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the ceiling of the argument  
  
##  <a name="cosf_function"></a>  cosf Function (fast_math)  
 Calculates the cosine of the argument  
  
```  
inline float cosf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cosine value of the argument  
  
##  <a name="coshf_function"></a>  coshf Function (fast_math)  
 Calculates the hyperbolic cosine value of the argument  
  
```  
inline float coshf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic cosine value of the argument  
  
##  <a name="cos_function"></a>  cos Function  (fast_math)  
 Calculates the cosine of the argument  
  
```  
inline float cos(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cosine value of the argument  
  
##  <a name="cosh_function"></a>  cosh Function (fast_math)  
 Calculates the hyperbolic cosine value of the argument  
  
```  
inline float cosh(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic cosine value of the argument  
  
##  <a name="exp_function"></a>  exp Function (fast_math)  
 Calculates the base-e exponential of the argument  
  
```  
inline float exp(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e exponential of the argument  
  
##  <a name="exp2_function"></a>  exp2 Function (fast_math)  
 Calculates the base-2 exponential of the argument  
  
```  
inline float exp2(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-2 exponential of the argument  
  
##  <a name="exp2f_function"></a>  exp2f Function (fast_math)  
 Calculates the base-2 exponential of the argument  
  
```  
inline float exp2f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-2 exponential of the argument  
  
##  <a name="expf_function"></a>  expf Function (fast_math)  
 Calculates the base-e exponential of the argument  
  
```  
inline float expf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e exponential of the argument  
  
##  <a name="fabs_function"></a>  fabs Function (fast_math)  
 Returns the absolute value of the argument  
  
```  
inline float fabs(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Integer value  
  
### Return Value  
 Returns the absolute value of the argument  
  
##  <a name="fabsf_function"></a>  fabsf Function (fast_math)  
 Returns the absolute value of the argument  
  
```  
inline float fabsf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the absolute value of the argument  
  
##  <a name="floor_function"></a>  floor Function (fast_math)  
 Calculates the floor of the argument  
  
```  
inline float floor(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the floor of the argument  
  
##  <a name="floorf_function"></a>  floorf Function (fast_math)  
 Calculates the floor of the argument  
  
```  
inline float floorf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the floor of the argument  
  
##  <a name="fmax_function"></a>  fmax Function (fast_math)  
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
  
##  <a name="fmaxf_function"></a>  fmaxf Function (fast_math)  
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
  
##  <a name="fmin_function"></a>  fmin Function (fast_math)  
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
  
##  <a name="fminf_function"></a>  fminf Function (fast_math)  
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
  
##  <a name="fmod_function"></a>  fmod Function (fast_math)  
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
  
##  <a name="fmodf_function"></a>  fmodf Function (fast_math)  
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
  
##  <a name="frexp_function"></a>  frexp Function (fast_math)  
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
  
##  <a name="frexpf_function"></a>  frexpf Function (fast_math)  
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
  
##  <a name="isfinite_function"></a>  isfinite Function (fast_math)  
 Determines whether the argument has a finite value  
  
```  
inline int isfinite(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has a finite value  
  
##  <a name="isinf_function"></a>  isinf Function (fast_math)  
 Determines whether the argument is an infinity  
  
```  
inline int isinf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has an infinite value  
  
##  <a name="isnan_function"></a>  isnan Function (fast_math)  
 Determines whether the argument is a NaN  
  
```  
inline int isnan(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has a NaN value  
  
##  <a name="ldexp_function"></a>  ldexp Function (fast_math)  
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
  
##  <a name="ldexpf_function"></a>  ldexpf Function (fast_math)  
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
  
##  <a name="log_function"></a>  log Function (fast_math)  
 Calculates the base-e logarithm of the argument  
  
```  
inline float log(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e logarithm of the argument  
  
##  <a name="log10_function"></a>  log10 Function (fast_math)  
 Calculates the base-10 logarithm of the argument  
  
```  
inline float log10(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
##  <a name="log10f_function"></a>  log10f Function (fast_math)  
 Calculates the base-10 logarithm of the argument  
  
```  
inline float log10f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
##  <a name="log2_function"></a>  log2 Function (fast_math)  
 Calculates the base-2 logarithm of the argument  
  
```  
inline float log2(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-2 logarithm of the argument  
  
##  <a name="log2f_function"></a>  log2f Function (fast_math)  
 Calculates the base-2 logarithm of the argument  
  
```  
inline float log2f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
##  <a name="logf_function"></a>  logf Function (fast_math)  
 Calculates the base-e logarithm of the argument  
  
```  
inline float logf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e logarithm of the argument  
  
##  <a name="modf_function"></a>  modf Function (fast_math)  
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
  
##  <a name="modff_function"></a>  modff Function (fast_math)  
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
  
##  <a name="pow_function"></a>  pow Function (fast_math)  
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
  
##  <a name="powf_function"></a>  powf Function (fast_math)  
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
  
##  <a name="round_function"></a>  round Function (fast_math)  
 Rounds _X to the nearest integer  
  
```  
inline float round(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the nearest integer of _X  
  
##  <a name="roundf_function"></a>  roundf Function (fast_math)  
 Rounds _X to the nearest integer  
  
```  
inline float roundf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the nearest integer of _X  
  
##  <a name="rsqrt_function"></a>  rsqrt Function (fast_math)  
 Returns the reciprocal of the square root of the argument  
  
```  
inline float rsqrt(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the reciprocal of the square root of the argument  
  
##  <a name="rsqrtf_function"></a>  rsqrtf Function (fast_math)  
 Returns the reciprocal of the square root of the argument  
  
```  
inline float rsqrtf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the reciprocal of the square root of the argument  
  
##  <a name="signbit_function"></a>  signbit Function (fast_math)  
 Determines whether the sign of _X is negative  
  
```  
inline int signbit(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the sign of _X is negative  
  
##  <a name="signbitf_function"></a>  signbitf Function (fast_math)  
 Determines whether the sign of _X is negative  
  
```  
inline int signbitf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the sign of _X is negative  
  
##  <a name="sin_function"></a>  sin Function (fast_math)  
 Calculates the sine value of the argument  
  
```  
inline float sin(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the sine value of the argument  
  
##  <a name="sinf_function"></a>  sinf Function (fast_math)  
 Calculates the sine value of the argument  
  
```  
inline float sinf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the sine value of the argument  
  
##  <a name="sincos_function"></a>  sincos Function (fast_math)  
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
  
##  <a name="sincosf_function"></a>  sincosf Function (fast_math)  
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
  
##  <a name="sinh_function"></a>  sinh Function (fast_math)  
 Calculates the hyperbolic sine value of the argument  
  
```  
inline float sinh(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic sine value of the argument  
  
##  <a name="sinhf_function"></a>  sinhf Function (fast_math)  
 Calculates the hyperbolic sine value of the argument  
  
```  
inline float sinhf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic sine value of the argument  
  
##  <a name="sqrt_function"></a>  sqrt Function (fast_math)  
 Calculates the squre root of the argument  
  
```  
inline float sqrt(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the squre root of the argument  
  
##  <a name="sqrtf_function"></a>  sqrtf Function (fast_math)  
 Calculates the squre root of the argument  
  
```  
inline float sqrtf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the squre root of the argument  
  
##  <a name="tan_function"></a>  tan Function (fast_math)  
 Calculates the tangent value of the argument  
  
```  
inline float tan(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the tangent value of the argument  
  
##  <a name="tanf_function"></a>  tanf Function (fast_math)  
 Calculates the tangent value of the argument  
  
```  
inline float tanf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the tangent value of the argument  
  
##  <a name="tanh_function"></a>  tanh Function (fast_math)  
 Calculates the hyperbolic tangent value of the argument  
  
```  
inline float tanh(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic tangent value of the argument  
  
##  <a name="tanhf_function"></a>  tanhf Function (fast_math)  
 Calculates the hyperbolic tangent value of the argument  
  
```  
inline float tanhf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic tangent value of the argument  
  
##  <a name="trunc_function"></a>  trunc Function (fast_math)  
 Truncates the argument to the integer component  
  
```  
inline float trunc(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the integer component of the argument  
  
##  <a name="truncf_function"></a>  truncf Function (fast_math)  
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
