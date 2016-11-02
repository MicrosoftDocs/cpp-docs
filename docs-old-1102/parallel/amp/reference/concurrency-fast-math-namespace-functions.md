---
title: "Concurrency::fast_math namespace functions"
ms.custom: ""
ms.date: "10/28/2016"
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
|[acos Function (fast_math)](#acos_function__fast_math_)|[acosf Function (fast_math)](#acosf_function__fast_math_)|[asin Function (fast_math)](#asin_function__fast_math_)|  
|[asinf Function (fast_math)](#asinf_function__fast_math_)|[atan Function (fast_math)](#atan_function__fast_math_)|[atan2 Function (fast_math)](#atan2_function__fast_math_)|  
|[atan2f Function (fast_math)](#atan2f_function__fast_math_)|[atanf Function (fast_math)](#atanf_function__fast_math_)|[ceil Function (fast_math)](#ceil_function__fast_math_)|  
|[ceilf Function (fast_math)](#ceilf_function__fast_math_)|[cos Function (fast_math)](#cos_function___fast_math_)|[cosf Function (fast_math)](#cosf_function__fast_math_)|  
|[cosh Function (fast_math)](#cosh_function__fast_math_)|[coshf Function (fast_math)](#coshf_function__fast_math_)|[exp Function (fast_math)](#exp_function__fast_math_)|  
|[exp2 Function (fast_math)](#exp2_function__fast_math_)|[exp2f Function (fast_math)](#exp2f_function__fast_math_)|[expf Function (fast_math)](#expf_function__fast_math_)|  
|[fabs Function (fast_math)](#fabs_function__fast_math_)|[fabsf Function (fast_math)](#fabsf_function__fast_math_)|[floor Function (fast_math)](#floor_function__fast_math_)|  
|[floorf Function (fast_math)](#floorf_function__fast_math_)|[fmax Function (fast_math)](#fmax_function__fast_math_)|[fmaxf Function (fast_math)](#fmaxf_function__fast_math_)|  
|[fmin Function (fast_math)](#fmin_function__fast_math_)|[fminf Function (fast_math)](#fminf_function__fast_math_)|[fmod Function (fast_math)](#fmod_function__fast_math_)|  
|[fmodf Function (fast_math)](#fmodf_function__fast_math_)|[frexp Function (fast_math)](#frexp_function__fast_math_)|[frexpf Function (fast_math)](#frexpf_function__fast_math_)|  
|[isfinite Function (fast_math)](#isfinite_function__fast_math_)|[isinf Function (fast_math)](#isinf_function__fast_math_)|[isnan Function (fast_math)](#isnan_function__fast_math_)|  
|[ldexp Function (fast_math)](#ldexp_function__fast_math_)|[ldexpf Function (fast_math)](#ldexpf_function__fast_math_)|[log Function (fast_math)](#log_function__fast_math_)|  
|[log10 Function (fast_math)](#log10_function__fast_math_)|[log10f Function (fast_math)](#log10f_function__fast_math_)|[log2 Function (fast_math)](#log2_function__fast_math_)|  
|[log2f Function (fast_math)](#log2f_function__fast_math_)|[logf Function (fast_math)](#logf_function__fast_math_)|[modf Function (fast_math)](#modf_function__fast_math_)|  
|[modff Function (fast_math)](#modff_function__fast_math_)|[pow Function (fast_math)](#pow_function__fast_math_)|[powf Function (fast_math)](#powf_function__fast_math_)|  
|[round Function (fast_math)](#round_function__fast_math_)|[roundf Function (fast_math)](#roundf_function__fast_math_)|[rsqrt Function (fast_math)](#rsqrt_function__fast_math_)|  
|[rsqrtf Function (fast_math)](#rsqrtf_function__fast_math_)|[signbit Function (fast_math)](#signbit_function__fast_math_)|[signbitf Function (fast_math)](#signbitf_function__fast_math_)|  
|[sin Function (fast_math)](#sin_function__fast_math_)|[sincos Function (fast_math)](#sincos_function__fast_math_)|[sincosf Function (fast_math)](#sincosf_function__fast_math_)|  
|[sinf Function (fast_math)](#sinf_function__fast_math_)|[sinh Function (fast_math)](#sinh_function__fast_math_)|[sinhf Function (fast_math)](#sinhf_function__fast_math_)|  
|[sqrt Function (fast_math)](#sqrt_function__fast_math_)|[sqrtf Function (fast_math)](#sqrtf_function__fast_math_)|[tan Function (fast_math)](#tan_function__fast_math_)|  
|[tanf Function (fast_math)](#tanf_function__fast_math_)|[tanh Function (fast_math)](#tanh_function__fast_math_)|[tanhf Function (fast_math)](#tanhf_function__fast_math_)|  
|[trunc Function (fast_math)](#trunc_function__fast_math_)|[truncf Function (fast_math)](#truncf_function__fast_math_)|  
  
##  <a name="acos_function__fast_math_"></a>  acos Function (fast_math)  
 Calculates the arccosine of the argument  
  
```  
inline float acos(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arccosine value of the argument  
  
##  <a name="acosf_function__fast_math_"></a>  acosf Function (fast_math)  
 Calculates the arccosine of the argument  
  
```  
inline float acosf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arccosine value of the argument  
  
##  <a name="asin_function__fast_math_"></a>  asin Function (fast_math)  
 Calculates the arcsine of the argument  
  
```  
inline float asin(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arcsine value of the argument  
  
##  <a name="asinf_function__fast_math_"></a>  asinf Function (fast_math)  
 Calculates the arcsine of the argument  
  
```  
inline float asinf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arcsine value of the argument  
  
##  <a name="atan_function__fast_math_"></a>  atan Function (fast_math)  
 Calculates the arctangent of the argument  
  
```  
inline float atan(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arctangent value of the argument  
  
##  <a name="atan2_function__fast_math_"></a>  atan2 Function (fast_math)  
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
  
##  <a name="atan2f_function__fast_math_"></a>  atan2f Function (fast_math)  
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
  
##  <a name="atanf_function__fast_math_"></a>  atanf Function (fast_math)  
 Calculates the arctangent of the argument  
  
```  
inline float atanf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the arctangent value of the argument  
  
##  <a name="ceil_function__fast_math_"></a>  ceil Function (fast_math)  
 Calculates the ceiling of the argument  
  
```  
inline float ceil(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the ceiling of the argument  
  
##  <a name="ceilf_function__fast_math_"></a>  ceilf Function (fast_math)  
 Calculates the ceiling of the argument  
  
```  
inline float ceilf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the ceiling of the argument  
  
##  <a name="cosf_function__fast_math_"></a>  cosf Function (fast_math)  
 Calculates the cosine of the argument  
  
```  
inline float cosf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cosine value of the argument  
  
##  <a name="coshf_function__fast_math_"></a>  coshf Function (fast_math)  
 Calculates the hyperbolic cosine value of the argument  
  
```  
inline float coshf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic cosine value of the argument  
  
##  <a name="cos_function___fast_math_"></a>  cos Function  (fast_math)  
 Calculates the cosine of the argument  
  
```  
inline float cos(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cosine value of the argument  
  
##  <a name="cosh_function__fast_math_"></a>  cosh Function (fast_math)  
 Calculates the hyperbolic cosine value of the argument  
  
```  
inline float cosh(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic cosine value of the argument  
  
##  <a name="exp_function__fast_math_"></a>  exp Function (fast_math)  
 Calculates the base-e exponential of the argument  
  
```  
inline float exp(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e exponential of the argument  
  
##  <a name="exp2_function__fast_math_"></a>  exp2 Function (fast_math)  
 Calculates the base-2 exponential of the argument  
  
```  
inline float exp2(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-2 exponential of the argument  
  
##  <a name="exp2f_function__fast_math_"></a>  exp2f Function (fast_math)  
 Calculates the base-2 exponential of the argument  
  
```  
inline float exp2f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-2 exponential of the argument  
  
##  <a name="expf_function__fast_math_"></a>  expf Function (fast_math)  
 Calculates the base-e exponential of the argument  
  
```  
inline float expf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e exponential of the argument  
  
##  <a name="fabs_function__fast_math_"></a>  fabs Function (fast_math)  
 Returns the absolute value of the argument  
  
```  
inline float fabs(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Integer value  
  
### Return Value  
 Returns the absolute value of the argument  
  
##  <a name="fabsf_function__fast_math_"></a>  fabsf Function (fast_math)  
 Returns the absolute value of the argument  
  
```  
inline float fabsf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the absolute value of the argument  
  
##  <a name="floor_function__fast_math_"></a>  floor Function (fast_math)  
 Calculates the floor of the argument  
  
```  
inline float floor(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the floor of the argument  
  
##  <a name="floorf_function__fast_math_"></a>  floorf Function (fast_math)  
 Calculates the floor of the argument  
  
```  
inline float floorf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the floor of the argument  
  
##  <a name="fmax_function__fast_math_"></a>  fmax Function (fast_math)  
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
  
##  <a name="fmaxf_function__fast_math_"></a>  fmaxf Function (fast_math)  
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
  
##  <a name="fmin_function__fast_math_"></a>  fmin Function (fast_math)  
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
  
##  <a name="fminf_function__fast_math_"></a>  fminf Function (fast_math)  
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
  
##  <a name="fmod_function__fast_math_"></a>  fmod Function (fast_math)  
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
  
##  <a name="fmodf_function__fast_math_"></a>  fmodf Function (fast_math)  
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
  
##  <a name="frexp_function__fast_math_"></a>  frexp Function (fast_math)  
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
  
##  <a name="frexpf_function__fast_math_"></a>  frexpf Function (fast_math)  
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
  
##  <a name="isfinite_function__fast_math_"></a>  isfinite Function (fast_math)  
 Determines whether the argument has a finite value  
  
```  
inline int isfinite(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has a finite value  
  
##  <a name="isinf_function__fast_math_"></a>  isinf Function (fast_math)  
 Determines whether the argument is an infinity  
  
```  
inline int isinf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has an infinite value  
  
##  <a name="isnan_function__fast_math_"></a>  isnan Function (fast_math)  
 Determines whether the argument is a NaN  
  
```  
inline int isnan(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has a NaN value  
  
##  <a name="ldexp_function__fast_math_"></a>  ldexp Function (fast_math)  
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
  
##  <a name="ldexpf_function__fast_math_"></a>  ldexpf Function (fast_math)  
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
  
##  <a name="log_function__fast_math_"></a>  log Function (fast_math)  
 Calculates the base-e logarithm of the argument  
  
```  
inline float log(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e logarithm of the argument  
  
##  <a name="log10_function__fast_math_"></a>  log10 Function (fast_math)  
 Calculates the base-10 logarithm of the argument  
  
```  
inline float log10(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
##  <a name="log10f_function__fast_math_"></a>  log10f Function (fast_math)  
 Calculates the base-10 logarithm of the argument  
  
```  
inline float log10f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
##  <a name="log2_function__fast_math_"></a>  log2 Function (fast_math)  
 Calculates the base-2 logarithm of the argument  
  
```  
inline float log2(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-2 logarithm of the argument  
  
##  <a name="log2f_function__fast_math_"></a>  log2f Function (fast_math)  
 Calculates the base-2 logarithm of the argument  
  
```  
inline float log2f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
##  <a name="logf_function__fast_math_"></a>  logf Function (fast_math)  
 Calculates the base-e logarithm of the argument  
  
```  
inline float logf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e logarithm of the argument  
  
##  <a name="modf_function__fast_math_"></a>  modf Function (fast_math)  
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
  
##  <a name="modff_function__fast_math_"></a>  modff Function (fast_math)  
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
  
##  <a name="pow_function__fast_math_"></a>  pow Function (fast_math)  
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
  
##  <a name="powf_function__fast_math_"></a>  powf Function (fast_math)  
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
  
##  <a name="round_function__fast_math_"></a>  round Function (fast_math)  
 Rounds _X to the nearest integer  
  
```  
inline float round(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the nearest integer of _X  
  
##  <a name="roundf_function__fast_math_"></a>  roundf Function (fast_math)  
 Rounds _X to the nearest integer  
  
```  
inline float roundf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the nearest integer of _X  
  
##  <a name="rsqrt_function__fast_math_"></a>  rsqrt Function (fast_math)  
 Returns the reciprocal of the square root of the argument  
  
```  
inline float rsqrt(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the reciprocal of the square root of the argument  
  
##  <a name="rsqrtf_function__fast_math_"></a>  rsqrtf Function (fast_math)  
 Returns the reciprocal of the square root of the argument  
  
```  
inline float rsqrtf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the reciprocal of the square root of the argument  
  
##  <a name="signbit_function__fast_math_"></a>  signbit Function (fast_math)  
 Determines whether the sign of _X is negative  
  
```  
inline int signbit(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the sign of _X is negative  
  
##  <a name="signbitf_function__fast_math_"></a>  signbitf Function (fast_math)  
 Determines whether the sign of _X is negative  
  
```  
inline int signbitf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the sign of _X is negative  
  
##  <a name="sin_function__fast_math_"></a>  sin Function (fast_math)  
 Calculates the sine value of the argument  
  
```  
inline float sin(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the sine value of the argument  
  
##  <a name="sinf_function__fast_math_"></a>  sinf Function (fast_math)  
 Calculates the sine value of the argument  
  
```  
inline float sinf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the sine value of the argument  
  
##  <a name="sincos_function__fast_math_"></a>  sincos Function (fast_math)  
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
  
##  <a name="sincosf_function__fast_math_"></a>  sincosf Function (fast_math)  
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
  
##  <a name="sinh_function__fast_math_"></a>  sinh Function (fast_math)  
 Calculates the hyperbolic sine value of the argument  
  
```  
inline float sinh(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic sine value of the argument  
  
##  <a name="sinhf_function__fast_math_"></a>  sinhf Function (fast_math)  
 Calculates the hyperbolic sine value of the argument  
  
```  
inline float sinhf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic sine value of the argument  
  
##  <a name="sqrt_function__fast_math_"></a>  sqrt Function (fast_math)  
 Calculates the squre root of the argument  
  
```  
inline float sqrt(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the squre root of the argument  
  
##  <a name="sqrtf_function__fast_math_"></a>  sqrtf Function (fast_math)  
 Calculates the squre root of the argument  
  
```  
inline float sqrtf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the squre root of the argument  
  
##  <a name="tan_function__fast_math_"></a>  tan Function (fast_math)  
 Calculates the tangent value of the argument  
  
```  
inline float tan(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the tangent value of the argument  
  
##  <a name="tanf_function__fast_math_"></a>  tanf Function (fast_math)  
 Calculates the tangent value of the argument  
  
```  
inline float tanf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the tangent value of the argument  
  
##  <a name="tanh_function__fast_math_"></a>  tanh Function (fast_math)  
 Calculates the hyperbolic tangent value of the argument  
  
```  
inline float tanh(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic tangent value of the argument  
  
##  <a name="tanhf_function__fast_math_"></a>  tanhf Function (fast_math)  
 Calculates the hyperbolic tangent value of the argument  
  
```  
inline float tanhf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic tangent value of the argument  
  
##  <a name="trunc_function__fast_math_"></a>  trunc Function (fast_math)  
 Truncates the argument to the integer component  
  
```  
inline float trunc(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the integer component of the argument  
  
##  <a name="truncf_function__fast_math_"></a>  truncf Function (fast_math)  
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
 [Concurrency::fast_math Namespace](../../../parallel/amp/reference/concurrency-fast-math-namespace.md)
