---
title: "Concurrency::precise_math namespace functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: fae53ab4-d1c5-45bb-a6a0-a74258e9aea3
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Concurrency::precise_math namespace functions
||||  
|-|-|-|  
|[acos Function](#acos)|[acosf Function](#acosf)|[acosh Function](#acosh)|  
|[acoshf Function](#acoshf)|[asin Function](#asin)|[asinf Function](#asinf)|  
|[asinh Function](#asinh)|[asinhf Function](#asinhf)|[atan Function](#atan)|  
|[atan2 Function](#atan2)|[atan2f Function](#atan2f)|[atanf Function](#atanf)|  
|[atanh Function](#atanh)|[atanhf Function](#atanhf)|[cbrt Function](#cbrt)|  
|[cbrtf Function](#cbrtf)|[ceil Function](#ceil)|[ceilf Function](#ceilf)|  
|[copysign Function](#copysign)|[copysignf Function](#copysignf)|[cos Function](#cos)|  
|[cosf Function](#cosf)|[cosh Function](#cosh)|[coshf Function](#coshf)|  
|[cospi Function](#cospi)|[cospif Function](#cospif)|[erf Function](#erf)|  
|[erfc Function](#erfc)|[erfcf Function](#erfcf)|[erfcinv Function](#erfcinv)|  
|[erfcinvf Function](#erfcinvf)|[erff Function](#erff)|[erfinv Function](#erfinv)|  
|[erfinvf Function](#erfinvf)|[exp Function](#exp)|[exp10 Function](#exp10)|  
|[exp10f Function](#exp10f)|[exp2 Function](#exp2)|[exp2f Function](#exp2f)|  
|[expf Function](#expf)|[expm1 Function](#expm1)|[expm1f Function](#expm1f)|  
|[fabs Function](#fabs)|[fabsf Function](#fabsf)|[floor Function](#floor)| 
|[fdim Function](#fdim)|[fdimf Function](#fdimf)|| 
|[floorf Function](#floorf)|[fma Function](#fma)|[fmaf Function](#fmaf)|
[fmax Function](#fmax)|[fmaxf Function](#fmaxf)|| 
|[fmin Function](#fmin)|[fminf Function](#fminf)|[fmod Function](#fmod)|  
|[fmodf Function](#fmodf)|[fpclassify Function](#fpclassify)|[frexp Function](#frexp)|  
|[frexpf Function](#frexpf)|[hypot Function](#hypot)|[hypotf Function](#hypotf)|  
|[ilogb Function](#ilogb)|[ilogbf Function](#ilogbf)|[isfinite Function](#isfinite)|  
|[isinf Function](#isinf)|[isnan Function](#isnan)|[isnormal Function](#isnormal)|  
|[ldexp Function](#ldexp)|[ldexpf Function](#ldexpf)|[lgamma Function](#lgamma)|  
|[lgammaf Function](#lgammaf)|[log Function](#log)|[log10 Function](#log10)|  
|[log10f Function](#log10f)|[log1p Function](#log1p)|[log1pf Function](#log1pf)|  
|[log2 Function](#log2)|[log2f Function](#log2f)|[logb Function](#logb)|  
|[logbf Function](#logbf)|[logf Function](#logf)|[modf Function](#modf)|  
|[modff Function](#modff)|[nan Function](#nan)|[nanf Function](#nanf)|  
|[nearbyint Function](#nearbyint)|[nearbyintf Function](#nearbyintf)|[nextafter Function](#nextafter)|  
|[nextafterf Function](#nextafterf)|[phi Function](#phi)|[phif Function](#phif)|  
|[pow Function](#pow)|[powf Function](#powf)|[probit Function](#probit)|  
|[probitf Function](#probitf)|[rcbrt Function](#rcbrt)|[rcbrtf Function](#rcbrtf)|  
|[remainder Function](#remainder)|[remainderf Function](#remainderf)|[remquo Function](#remquo)|  
|[remquof Function](#remquof)|[round Function](#round)|[roundf Function](#roundf)|  
|[rsqrt Function](#rsqrt)|[rsqrtf Function](#rsqrtf)|[scalb Function](#scalb)|  
|[scalbf Function](#scalbf)|[scalbn Function](#scalbn)|[scalbnf Function](#scalbnf)|  
|[signbit Function](#signbit)|[signbitf Function](#signbitf)|[sin Function](#sin)|  
|[sincos Function](#sincos)|[sincosf Function](#sincosf)|[sinf Function](#sinf)|  
|[sinh Function](#sinh)|[sinhf Function](#sinhf)|[sinpi Function](#sinpi)|  
|[sinpif Function](#sinpif)|[sqrt Function](#sqrt)|[sqrtf Function](#sqrtf)|  
|[tan Function](#tan)|[tanf Function](#tanf)|[tanh Function](#tanh)|  
|[tanhf Function](#tanhf)|[tanpi Function](#tanpi)|[tanpif Function](#tanpif)|  
|[tgamma Function](#tgamma)|[tgammaf Function](#tgammaf)|[trunc Function](#trunc)|  
|[truncf Function](#truncf)|  
  
##  <a name="acos"></a>  acos Function  
 Calculates the arccosine of the argument  
  
```  
inline float acos(float _X) restrict(amp);

 
inline double acos(double _X) restrict(amp);
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
  
##  <a name="acosh"></a>  acosh Function  
 Calculates the inverse hyperbolic cosine of the argument  
  
```  
inline float acosh(float _X) restrict(amp);

 
inline double acosh(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the inverse hyperbolic cosine value of the argument  
  
##  <a name="acoshf"></a>  acoshf Function  
 Calculates the inverse hyperbolic cosine of the argument  
  
```  
inline float acoshf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the inverse hyperbolic cosine value of the argument  
  
##  <a name="asin"></a>  asin Function  
 Calculates the arcsine of the argument  
  
```  
inline float asin(float _X) restrict(amp);

 
inline double asin(double _X) restrict(amp);
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
  
##  <a name="asinh"></a>  asinh Function  
 Calculates the inverse hyperbolic sine of the argument  
  
```  
inline float asinh(float _X) restrict(amp);

 
inline double asinh(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the inverse hyperbolic sine value of the argument  
  
##  <a name="asinhf"></a>  asinhf Function  
 Calculates the inverse hyperbolic sine of the argument  
  
```  
inline float asinhf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the inverse hyperbolic sine value of the argument  
  
##  <a name="atan"></a>  atan Function  
 Calculates the arctangent of the argument  
  
```  
inline float atan(float _X) restrict(amp);

 
inline double atan(double _X) restrict(amp);
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

 
inline double atan2(
    double _Y,  
    double _X) restrict(amp);
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
  
##  <a name="atanh"></a>  atanh Function  
 Calculates the inverse hyperbolic tangent of the argument  
  
```  
inline float atanh(float _X) restrict(amp);

 
inline double atanh(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the inverse hyperbolic tangent value of the argument  
  
##  <a name="atanhf"></a>  atanhf Function  
 Calculates the inverse hyperbolic tangent of the argument  
  
```  
inline float atanhf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the inverse hyperbolic tangent value of the argument  
  
##  <a name="cbrt"></a>  cbrt Function  
 Computes the real cube root of the argument  
  
```  
inline float cbrt(float _X) restrict(amp);

 
inline double cbrt(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the real cube root of the argument  
  
##  <a name="cbrtf"></a>  cbrtf Function  
 Computes the real cube root of the argument  
  
```  
inline float cbrtf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the real cube root of the argument  
  
##  <a name="ceil"></a>  ceil Function  
 Calculates the ceiling of the argument  
  
```  
inline float ceil(float _X) restrict(amp);

 
inline double ceil(double _X) restrict(amp);
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
  
##  <a name="copysign"></a>  copysign Function  
 Produces a value with the magnitude of _X and the sign of _Y  
  
```  
inline float copysign(
    float _X,  
    float _Y) restrict(amp);

 
inline double copysign(
    double _X,  
    double _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Returns a value with the magnitude of _X and the sign of _Y  
  
##  <a name="copysignf"></a>  copysignf Function  
 Produces a value with the magnitude of _X and the sign of _Y  
  
```  
inline float copysignf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Returns a value with the magnitude of _X and the sign of _Y  
  
##  <a name="cos"></a>  cos Function  
 Calculates the cosine of the argument  
  
```  
inline float cos(float _X) restrict(amp);

 
inline double cos(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cosine value of the argument  
  
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
  
##  <a name="cosh"></a>  cosh Function  
 Calculates the hyperbolic cosine value of the argument  
  
```  
inline float cosh(float _X) restrict(amp);

 
inline double cosh(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the hyperbolic cosine value of the argument  
  
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
  
##  <a name="cospi"></a>  cospi Function  
 Calculates the cosine value of pi * _X  
  
```  
inline float cospi(float _X) restrict(amp);

 
inline double cospi(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cosine value of pi * _X  
  
##  <a name="cospif"></a>  cospif Function  
 Calculates the cosine value of pi * _X  
  
```  
inline float cospif(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cosine value of pi * _X  
  
##  <a name="erf"></a>  erf Function  
 Computes the error function of _X  
  
```  
inline float erf(float _X) restrict(amp);

 
inline double erf(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the error function of _X  
  
##  <a name="erfc"></a>  erfc Function  
 Computes the complementary error function of _X  
  
```  
inline float erfc(float _X) restrict(amp);

 
inline double erfc(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the complementary error function of _X  
  
##  <a name="erfcf"></a>  erfcf Function  
 Computes the complementary error function of _X  
  
```  
inline float erfcf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the complementary error function of _X  
  
##  <a name="erfcinv"></a>  erfcinv Function  
 Computes the inverse complementary error function of _X  
  
```  
inline float erfcinv(float _X) restrict(amp);

 
inline double erfcinv(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the inverse complementary error function of _X  
  
##  <a name="erfcinvf"></a>  erfcinvf Function  
 Computes the inverse complementary error function of _X  
  
```  
inline float erfcinvf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the inverse complementary error function of _X  
  
##  <a name="erff"></a>  erff Function  
 Computes the error function of _X  
  
```  
inline float erff(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the error function of _X  
  
##  <a name="erfinv"></a>  erfinv Function  
 Computes the inverse error function of _X  
  
```  
inline float erfinv(float _X) restrict(amp);

 
inline double erfinv(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the inverse error function of _X  
  
##  <a name="erfinvf"></a>  erfinvf Function  
 Computes the inverse error function of _X  
  
```  
inline float erfinvf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the inverse error function of _X  
  
##  <a name="exp10"></a>  exp10 Function  
 Calculates the base-10 exponential of the argument  
  
```  
inline float exp10(float _X) restrict(amp);

 
inline double exp10(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 exponential of the argument  
  
##  <a name="exp10f"></a>  exp10f Function  
 Calculates the base-10 exponential of the argument  
  
```  
inline float exp10f(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 exponential of the argument  
  
##  <a name="expm1"></a>  expm1 Function  
 Calculates the base-e exponential of the argument, minus 1  
  
```  
inline float expm1(float exponent) restrict(amp);

 
inline double expm1(double exponent) restrict(amp);
```  
  
### Parameters  
 `exponent`  
 The exponential term *n* of the mathematical expression `e`<sup>n</sup>, where `e` is the base of the natural logarithm.  
  
### Return Value  
 Returns the base-e exponential of the argument, minus 1  
  
##  <a name="expm1f"></a>  expm1f Function  
 Calculates the base-e exponential of the argument, minus 1  
  
```  
inline float expm1f(float exponent) restrict(amp);
```  
  
### Parameters  
 `exponent`  
 The exponential term *n* of the mathematical expression `e`<sup>n</sup>, where `e` is the base of the natural logarithm.  
  
### Return Value  
 Returns the base-e exponential of the argument, minus 1  
  
##  <a name="exp"></a>  exp Function  
 Calculates the base-e exponential of the argument  
  
```  
inline float exp(float _X) restrict(amp);

 
inline double exp(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e exponential of the argument  
  
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
  
##  <a name="exp2"></a>  exp2 Function  
 Calculates the base-2 exponential of the argument  
  
```  
inline float exp2(float _X) restrict(amp);

 
inline double exp2(double _X) restrict(amp);
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
  
##  <a name="fabs"></a>  fabs Function  
 Returns the absolute value of the argument  
  
```  
inline float fabs(float _X) restrict(amp);

 
inline double fabs(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
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

## <a name="fdim"></a> fdim Function  
Computes the positive difference between the arguments.
```  
inline float fdim(
   float _X,
   float _Y
) restrict(amp);
inline double fdim(
   double _X,
   double _Y
) restrict(amp);
``` 
### Parameters
`_X`
Floating-point value
`_Y`
Floating-point value


### Return Value
The difference between _X and _Y if _X is greater than _Y; otherwise, +0.
 
## <a name="fdimf"></a> fdimf Function
Computes the positive difference between the arguments.
```
inline float fdimf(
   float _X,
   float _Y
) restrict(amp);
```
### Parameters
`_X`
Floating-point value
`_Y`
Floating-point value

### Return Value
The difference between _X and _Y if _X is greater than _Y; otherwise, +0. 
  
##  <a name="floor"></a>  floor Function  
 Calculates the floor of the argument  
  
```  
inline float floor(float _X) restrict(amp);

 
inline double floor(double _X) restrict(amp);
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

## <a name="fma"> fma Function  
Computes the product of the first and second specified arguments, then adds the third specified argument to the result; the entire computation is performed as a single operation.
```
inline float fma(
   float _X,
   float _Y,
   float _Z
) restrict(amp);

inline double fma(
   double _X,
   double _Y,
   double _Z
) restrict(amp);
```
### Parameters
`_X`
The first floating-point argument.
`_Y`
The second floating-point argument.
`_Z`
The third floating-point argument.

### Return Value
The result of the expression (_X * _Y) + _Z. The entire computation is performed as a single operation; that is, the sub-expressions are calculated to infinite precision, and only the final result is rounded. 

## <a name="fmaf"></a> fmaf Function  
Computes the product of the first and second specified arguments, then adds the third specified argument to the result; the entire computation is performed as a single operation.
```
inline float fmaf(
   float _X,
   float _Y,
   float _Z
) restrict(amp);
```  
### Parameters
`_X`
The first floating-point argument.
`_Y`
The second floating-point argument.
`_Z`
The third floating-point argument.

### Return Value
The result of the expression (_X * _Y) + _Z. The entire computation is performed as a single operation; that is, the sub-expressions are calculated to infinite precision, and only the final result is rounded.
  
##  <a name="fmax"></a>  fmax Function  
 Determine the maximum numeric value of the arguments  
  
```  
inline float fmax(
    float _X,  
    float _Y) restrict(amp);

 
inline double fmax(
    double _X,  
    double _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
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
inline float fmin(
    float _X,  
    float _Y) restrict(amp);

 
inline double fmin(
    double _X,  
    double _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
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
  
##  <a name="fmod"></a>  fmod Function (C++ AMP)  
 Computes the remainder of the first specified argument divided by the second specified argument.  
  
```  
inline float fmod(
    float _X,  
    float _Y) restrict(amp);

 
inline double fmod(
    double _X,  
    double _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 The first floating-point argument.  
  
 `_Y`  
 The second floating-point argument.  
  
### Return Value  
 The remainder of `_X` divided by `_Y`; that is, the value of `_X` - `_Y`*n*, where *n* is a whole integer such that the magnitude of `_X` - `_Y`*n* is less than the magnitude of `_Y`.  
  
##  <a name="fmodf"></a>  fmodf Function  
 Computes the remainder of the first specified argument divided by the second specified argument.  
  
```  
inline float fmodf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 The first floating-point argument.  
  
 `_Y`  
 The second floating-point argument.  
  
### Return Value  
 The remainder of `_X` divided by `_Y`; that is, the value of `_X` - `_Y`*n*, where *n* is a whole integer such that the magnitude of `_X` - `_Y`*n* is less than the magnitude of `_Y`.  
  
##  <a name="fpclassify"></a>  fpclassify Function  
 Classifies the argument value as NaN, infinite, normal, subnormal, zero  
  
```  
inline int fpclassify(float _X) restrict(amp);

 
inline int fpclassify(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the value of the number classification macro appropriate to the value of the argument.  
  
##  <a name="frexp"></a>  frexp Function  
 Gets the mantissa and exponent of _X  
  
```  
inline float frexp(
    float _X,  
    _Out_ int* _Exp) restrict(amp);

 
inline double frexp(
    double _X,  
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
  
##  <a name="hypot"></a>  hypot Function  
 Computes the square root of the sum of the squares of _X and _Y  
  
```  
inline float hypot(
    float _X,  
    float _Y) restrict(amp);

 
inline double hypot(
    double _X,  
    double _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Returns the square root of the sum of the squares of _X and _Y  
  
##  <a name="hypotf"></a>  hypotf Function  
 Computes the square root of the sum of the squares of _X and _Y  
  
```  
inline float hypotf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Returns the square root of the sum of the squares of _X and _Y  
  
##  <a name="ilogb"></a>  ilogb Function  
 Extract the exponent of _X as a signed int value  
  
```  
inline int ilogb(float _X) restrict(amp);

 
inline int ilogb(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the exponent of _X as a signed int value  
  
##  <a name="ilogbf"></a>  ilogbf Function  
 Extract the exponent of _X as a signed int value  
  
```  
inline int ilogbf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the exponent of _X as a signed int value  
  
##  <a name="isfinite"></a>  isfinite Function  
 Determines whether the argument has a finite value  
  
```  
inline int isfinite(float _X) restrict(amp);

 
inline int isfinite(double _X) restrict(amp);
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

 
inline int isinf(double _X) restrict(amp);
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

 
inline int isnan(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has a NaN value  
  
##  <a name="isnormal"></a>  isnormal Function  
 Determines whether the argument is a normal  
  
```  
inline int isnormal(float _X) restrict(amp);

 
inline int isnormal(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns a nonzero value if and only if the argument has a normal value  
  
##  <a name="ldexp"></a>  ldexp Function  
 Computes a real number from the specified mantissa and exponent.  
  
```  
inline float ldexp(
    float _X,  
    int _Exp) restrict(amp);

 
inline double ldexp(
    double _X,  
    double _Exp) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value, mantissa  
  
 `_Exp`  
 Integer value, exponent  
  
### Return Value  
 Returns _X * 2^_Exp  
  
##  <a name="ldexpf"></a>  ldexpf Function  
 Computes a real number from the specified mantissa and exponent.  
  
```  
inline float ldexpf(
    float _X,  
    int _Exp) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value, mantissa  
  
 `_Exp`  
 Integer value, exponent  
  
### Return Value  
 Returns _X * 2^_Exp  
  
##  <a name="lgamma"></a>  lgamma Function  
 Computes the natural logarithm of the absolute value of gamma of the argument  
  
```  
inline float lgamma(
    float _X,  
    _Out_ int* _Sign) restrict(amp);

 
inline double lgamma(
    double _X,  
    _Out_ int* _Sign) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Sign`  
 Returns the sign  
  
### Return Value  
 Returns the natural logarithm of the absolute value of gamma of the argument  
  
##  <a name="lgammaf"></a>  lgammaf Function  
 Computes the natural logarithm of the absolute value of gamma of the argument  
  
```  
inline float lgammaf(
    float _X,  
    _Out_ int* _Sign) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Sign`  
 Returns the sign  
  
### Return Value  
 Returns the natural logarithm of the absolute value of gamma of the argument  
  
##  <a name="log"></a>  log Function  
 Calculates the base-e logarithm of the argument  
  
```  
inline float log(float _X) restrict(amp);

 
inline double log(double _X) restrict(amp);
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

 
inline double log10(double _X) restrict(amp);
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
  
##  <a name="log1p"></a>  log1p Function  
 Calculates the base-e logarithm of 1 plus the argument  
  
```  
inline float log1p(float _X) restrict(amp);

 
inline double log1p(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e logarithm of 1 plus the argument  
  
##  <a name="log1pf"></a>  log1pf Function  
 Calculates the base-e logarithm of 1 plus the argument  
  
```  
inline float log1pf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-e logarithm of 1 plus the argument  
  
##  <a name="log2"></a>  log2 Function  
 Calculates the base-2 logarithm of the argument  
  
```  
inline float log2(float _X) restrict(amp);

 
inline double log2(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the base-10 logarithm of the argument  
  
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
  
##  <a name="logb"></a>  logb Function  
 Extracts the exponent of _X, as a signed integer value in floating-point format  
  
```  
inline float logb(float _X) restrict(amp);

 
inline double logb(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the signed exponent of _X  
  
##  <a name="logbf"></a>  logbf Function  
 Extracts the exponent of _X, as a signed integer value in floating-point format  
  
```  
inline float logbf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the signed exponent of _X  
  
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
 Splits the specified argument into fractional and integer parts.  
  
```  
inline float modf(
    float _X,  
    _Out_ float* _Iptr) restrict(amp);

 
inline double modf(
    double _X,  
    _Out_ double* _Iptr) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Iptr` (out parameter)  
 The integer portion of `_X`, as a floating-point value.  
  
### Return Value  
 The signed fractional portion of `_X`.  
  
##  <a name="modff"></a>  modff Function  
 Splits the specified argument into fractional and integer parts.  
  
```  
inline float modff(
    float _X,  
    _Out_ float* _Iptr) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Iptr`  
 The integer portion of `_X`, as a floating-point value.  
  
### Return Value  
 Returns the signed fractional portion of `_X`.  
  
##  <a name="nan"></a>  nan Function  
 Returns a quiet NaN  
  
```  
inline double nan(int _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Integer value  
  
### Return Value  
 Returns a quiet NaN, if available, with the content indicated in _X  
  
##  <a name="nanf"></a>  nanf Function  
 Returns a quiet NaN  
  
```  
inline float nanf(int _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Integer value  
  
### Return Value  
 Returns a quiet NaN, if available, with the content indicated in _X  
  
##  <a name="nearbyint"></a>  nearbyint Function  
 Rounds the argument to an integer value in floating-point format, using the current rounding direction.  
  
```  
inline float nearbyint(float _X) restrict(amp);

 
inline double nearbyint(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the rounded integer value.  
  
##  <a name="nearbyintf"></a>  nearbyintf Function  
 Rounds the argument to an integer value in floating-point format, using the current rounding direction.  
  
```  
inline float nearbyintf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the rounded integer value.  
  
##  <a name="nextafter"></a>  nextafter Function  
 Determine the next representable value, in the type of the function, after _X in the direction of _Y  
  
```  
inline float nextafter(
    float _X,  
    float _Y) restrict(amp);

 
inline double nextafter(
    double _X,  
    double _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Returns the next representable value, in the type of the function, after _X in the direction of _Y  
  
##  <a name="nextafterf"></a>  nextafterf Function  
 Determine the next representable value, in the type of the function, after _X in the direction of _Y  
  
```  
inline float nextafterf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Returns the next representable value, in the type of the function, after _X in the direction of _Y  
  
##  <a name="phi"></a>  phi Function  
 Returns the cumulative distribution function of the argument  
  
```  
inline float phi(float _X) restrict(amp);

 
inline double phi(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cumulative distribution function of the argument  
  
##  <a name="phif"></a>  phif Function  
 Returns the cumulative distribution function of the argument  
  
```  
inline float phif(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the cumulative distribution function of the argument  
  
##  <a name="pow"></a>  pow Function  
 Calculates _X raised to the power of _Y  
  
```  
inline float pow(
    float _X,  
    float _Y) restrict(amp);

 
inline double pow(
    double _X,  
    double _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value, base  
  
 `_Y`  
 Floating-point value, exponent  
  
### Return Value  
  
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
  
##  <a name="probit"></a>  probit Function  
 Returns the inverse cumulative distribution function of the argument  
  
```  
inline float probit(float _X) restrict(amp);

 
inline double probit(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the inverse cumulative distribution function of the argument  
  
##  <a name="probitf"></a>  probitf Function  
 Returns the inverse cumulative distribution function of the argument  
  
```  
inline float probitf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the inverse cumulative distribution function of the argument  
  
##  <a name="rcbrt"></a>  rcbrt Function  
 Returns the reciprocal of the cube root of the argument  
  
```  
inline float rcbrt(float _X) restrict(amp);

 
inline double rcbrt(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the reciprocal of the cube root of the argument  
  
##  <a name="rcbrtf"></a>  rcbrtf Function  
 Returns the reciprocal of the cube root of the argument  
  
```  
inline float rcbrtf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the reciprocal of the cube root of the argument  
  
##  <a name="remainder"></a>  remainder Function  
 Computes the remainder: _X REM _Y  
  
```  
inline float remainder(
    float _X,  
    float _Y) restrict(amp);

 
inline double remainder(
    double _X,  
    double _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Returns _X REM _Y  
  
##  <a name="remainderf"></a>  remainderf Function  
 Computes the remainder: _X REM _Y  
  
```  
inline float remainderf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Returns _X REM _Y  
  
##  <a name="remquo"></a>  remquo Function  
 Computes the remainder of the first specified argument divided by the second specified argument. Also computes the quotient of the significand of the first specified argument divided by the significand of the second specified argument, and returns the quotient using the location specified in the third argument.  
  
```  
inline float remquo(
    float _X,  
    float _Y,  
    _Out_ int* _Quo) restrict(amp);

 
inline double remquo(
    double _X,  
    double _Y,  
    _Out_ int* _Quo) restrict(amp);
```  
  
### Parameters  
 `_X`  
 The first floating-point argument.  
  
 `_Y`  
 The second floating-point argument.  
  
 `_Quo` (out parameter)  
 The address of an integer that’s used to return the quotient of the fractional bits of `_X` divided by the fractional bits of `_Y`.  
  
### Return Value  
 Returns the remainder of `_X` divided by `_Y`.  
  
##  <a name="remquof"></a>  remquof Function  
 Computes the remainder of the first specified argument divided by the second specified argument. Also computes the quotient of the significand of the first specified argument divided by the significand of the second specified argument, and returns the quotient using the location specified in the third argument.  
  
```  
inline float remquof(
    float _X,  
    float _Y,  
    _Out_ int* _Quo) restrict(amp);
```  
  
### Parameters  
 `_X`  
 The first floating-point argument.  
  
 `_Y`  
 The second floating-point argument.  
  
 `_Quo` (out parameter)  
 The address of an integer that’s used to return the quotient of the fractional bits of `_X` divided by the fractional bits of `_Y`.  
  
### Return Value  
 Returns the remainder of `_X` divided by `_Y`.  
  
##  <a name="round"></a>  round Function  
 Rounds _X to the nearest integer  
  
```  
inline float round(float _X) restrict(amp);

 
inline double round(double _X) restrict(amp);
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

 
inline double rsqrt(double _X) restrict(amp);
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
  
##  <a name="scalb"></a>  scalb Function  
 Multiplies _X by FLT_RADIX to the power _Y  
  
```  
inline float scalb(
    float _X,  
    float _Y) restrict(amp);

 
inline double scalb(
    double _X,  
    double _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Returns _X * (FLT_RADIX ^ _Y)  
  
##  <a name="scalbf"></a>  scalbf Function  
 Multiplies _X by FLT_RADIX to the power _Y  
  
```  
inline float scalbf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
### Return Value  
 Returns _X * (FLT_RADIX ^ _Y)  
  
##  <a name="scalbn"></a>  scalbn Function  
 Multiplies _X by FLT_RADIX to the power _Y  
  
```  
inline float scalbn(
    float _X,  
    int _Y) restrict(amp);

 
inline double scalbn(
    double _X,  
    int _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Integer value  
  
### Return Value  
 Returns _X * (FLT_RADIX ^ _Y)  
  
##  <a name="scalbnf"></a>  scalbnf Function  
 Multiplies _X by FLT_RADIX to the power _Y  
  
```  
inline float scalbnf(
    float _X,  
    int _Y) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Integer value  
  
### Return Value  
 Returns _X * (FLT_RADIX ^ _Y)  
  
##  <a name="signbit"></a>  signbit Function  
 Determines whether the sign of _X is negative  
  
```  
inline int signbit(float _X) restrict(amp);

 
inline int signbit(double _X) restrict(amp);
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

 
inline double sin(double _X) restrict(amp);
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
    _Out_ float* _S,  
    _Out_ float* _C) restrict(amp);

 
inline void sincos(
    double _X,  
    _Out_ double* _S,  
    _Out_ double* _C) restrict(amp);
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
    _Out_ float* _S,  
    _Out_ float* _C) restrict(amp);
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

 
inline double sinh(double _X) restrict(amp);
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
  
##  <a name="sinpi"></a>  sinpi Function  
 Calculates the sine value of pi * _X  
  
```  
inline float sinpi(float _X) restrict(amp);

 
inline double sinpi(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the sine value of pi * _X  
  
##  <a name="sinpif"></a>  sinpif Function  
 Calculates the sine value of pi * _X  
  
```  
inline float sinpif(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the sine value of pi * _X  
  
##  <a name="sqrt"></a>  sqrt Function  
 Calculates the squre root of the argument  
  
```  
inline float sqrt(float _X) restrict(amp);

 
inline double sqrt(double _X) restrict(amp);
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

 
inline double tan(double _X) restrict(amp);
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

 
inline double tanh(double _X) restrict(amp);
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
  
##  <a name="tanpi"></a>  tanpi Function  
 Calculates the tangent value of pi * _X  
  
```  
inline float tanpi(float _X) restrict(amp);

 
inline double tanpi(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the tangent value of pi * _X  
  
##  <a name="tanpif"></a>  tanpif Function  
 Calculates the tangent value of pi * _X  
  
```  
inline float tanpif(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the tangent value of pi * _X  
  
##  <a name="tgamma"></a>  tgamma Function  
 Computes the gamma function of _X  
  
```  
inline float tgamma(float _X) restrict(amp);

 
inline double tgamma(double _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the result of gamma function of _X  
  
##  <a name="tgammaf"></a>  tgammaf Function  
 Computes the gamma function of _X  
  
```  
inline float tgammaf(float _X) restrict(amp);
```  
  
### Parameters  
 `_X`  
 Floating-point value  
  
### Return Value  
 Returns the result of gamma function of _X  
  
##  <a name="trunc"></a>  trunc Function  
 Truncates the argument to the integer component  
  
```  
inline float trunc(float _X) restrict(amp);

 
inline double trunc(double _X) restrict(amp);
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
 [Concurrency::precise_math Namespace](concurrency-precise-math-namespace.md)
