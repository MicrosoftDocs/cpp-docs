---
title: "Concurrency::fast_math Namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp_math/Concurrency::fast_math"
dev_langs: 
  - "C++"
ms.assetid: 54fed939-9902-49db-9f29-e98fd9821508
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Concurrency::fast_math Namespace
Functions in the `fast_math` namespace have lower accuracy, support only single-precision (`float`), and call the DirectX intrinsics. There are two versions of each function, for example `cos` and `cosf`. Both versions take and return a `float`, but each calls the same DirectX intrinsic.  
  
## Syntax  
  
```  
namespace fast_math;  
```  
  
## Members  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[cos Function  (fast_math)](concurrency-fast-math-namespace-functions.md#cos_function.md)|Calculates the arccosine of the argument|  
|[cosf Function (fast_math)](concurrency-fast-math-namespace-functions.md#cosf_function.md)|Calculates the arccosine of the argument|  
|[asin Function (fast_math)](concurrency-fast-math-namespace-functions.md#asin_function.md)|Calculates the arcsine of the argument|  
|[asinf Function (fast_math)](concurrency-fast-math-namespace-functions.md#asinf_function.md)|Calculates the arcsine of the argument|  
|[atan Function (fast_math)](concurrency-fast-math-namespace-functions.md#atan_function.md)|Calculates the arctangent of the argument|  
|[atan2 Function (fast_math)](concurrency-fast-math-namespace-functions.md#atan2_function.md)|Calculates the arctangent of _Y/_X|  
|[atan2f Function (fast_math)](concurrency-fast-math-namespace-functions.md#atan2f_function.md)|Calculates the arctangent of _Y/_X|  
|[atanf Function (fast_math)](concurrency-fast-math-namespace-functions.md#atanf_function.md)|Calculates the arctangent of the argument|  
|[ceil Function (fast_math)](concurrency-fast-math-namespace-functions.md#ceil_function.md)|Calculates the ceiling of the argument|  
|[ceilf Function (fast_math)](concurrency-fast-math-namespace-functions.md#ceilf_function.md)|Calculates the ceiling of the argument|  
|[cos Function  (fast_math)](concurrency-fast-math-namespace-functions.md#cos_function.md)|Calculates the cosine of the argument|  
|[cosf Function (fast_math)](concurrency-fast-math-namespace-functions.md#cosf_function.md)|Calculates the cosine of the argument|  
|[cosh Function (fast_math)](concurrency-fast-math-namespace-functions.md#cosh_function.md)|Calculates the hyperbolic cosine value of the argument|  
|[coshf Function (fast_math)](concurrency-fast-math-namespace-functions.md#coshf_function.md)|Calculates the hyperbolic cosine value of the argument|  
|[exp Function (fast_math)](concurrency-fast-math-namespace-functions.md#exp_function.md)|Calculates the base-e exponential of the argument|  
|[exp2 Function (fast_math)](concurrency-fast-math-namespace-functions.md#exp2_function.md)|Calculates the base-2 exponential of the argument|  
|[exp2f Function (fast_math)](concurrency-fast-math-namespace-functions.md#exp2f_function.md)|Calculates the base-2 exponential of the argument|  
|[expf Function (fast_math)](concurrency-fast-math-namespace-functions.md#expf_function.md)|Calculates the base-e exponential of the argument|  
|[fabs Function (fast_math)](concurrency-fast-math-namespace-functions.md#fabs_function.md)|Returns the absolute value of the argument|  
|[fabsf Function (fast_math)](concurrency-fast-math-namespace-functions.md#fabsf_function.md)|Returns the absolute value of the argument|  
|[floor Function (fast_math)](concurrency-fast-math-namespace-functions.md#floor_function.md)|Calculates the floor of the argument|  
|[floorf Function (fast_math)](concurrency-fast-math-namespace-functions.md#floorf_function.md)|Calculates the floor of the argument|  
|[fmax Function (fast_math)](concurrency-fast-math-namespace-functions.md#fmax_function.md)|Determine the maximum numeric value of the arguments|  
|[fmaxf Function (fast_math)](concurrency-fast-math-namespace-functions.md#fmaxf_function.md)|Determine the maximum numeric value of the arguments|  
|[fmin Function (fast_math)](concurrency-fast-math-namespace-functions.md#fmin_function.md)|Determine the minimum numeric value of the arguments|  
|[fminf Function (fast_math)](concurrency-fast-math-namespace-functions.md#fminf_function.md)|Determine the minimum numeric value of the arguments|  
|[fmod Function (fast_math)](concurrency-fast-math-namespace-functions.md#fmod_function.md)|Calculates the floating-point remainder of _X/_Y|  
|[fmodf Function (fast_math)](concurrency-fast-math-namespace-functions.md#fmodf_function.md)|Calculates the floating-point remainder of _X/_Y|  
|[frexp Function (fast_math)](concurrency-fast-math-namespace-functions.md#frexp_function.md)|Gets the mantissa and exponent of _X|  
|[frexpf Function (fast_math)](concurrency-fast-math-namespace-functions.md#frexpf_function.md)|Gets the mantissa and exponent of _X|  
|[isfinite Function (fast_math)](concurrency-fast-math-namespace-functions.md#isfinite_function.md)|Determines whether the argument has a finite value|  
|[isinf Function (fast_math)](concurrency-fast-math-namespace-functions.md#isinf_function.md)|Determines whether the argument is an infinity|  
|[isnan Function (fast_math)](concurrency-fast-math-namespace-functions.md#isnan_function.md)|Determines whether the argument is a NaN|  
|[ldexp Function (fast_math)](concurrency-fast-math-namespace-functions.md#ldexp_function.md)|Computes a real number from the mantissa and exponent|  
|[ldexpf Function (fast_math)](concurrency-fast-math-namespace-functions.md#ldexpf_function.md)|Computes a real number from the mantissa and exponent|  
|[log Function (fast_math)](concurrency-fast-math-namespace-functions.md#log_function.md)|Calculates the base-e logarithm of the argument|  
|[log10 Function (fast_math)](concurrency-fast-math-namespace-functions.md#log10_function.md)|Calculates the base-10 logarithm of the argument|  
|[log10f Function (fast_math)](concurrency-fast-math-namespace-functions.md#log10f_function.md)|Calculates the base-10 logarithm of the argument|  
|[log2 Function (fast_math)](concurrency-fast-math-namespace-functions.md#log2_function.md)|Calculates the base-2 logarithm of the argument|  
|[log2f Function (fast_math)](concurrency-fast-math-namespace-functions.md#log2f_function.md)|Calculates the base-2 logarithm of the argument|  
|[logf Function (fast_math)](concurrency-fast-math-namespace-functions.md#logf_function.md)|Calculates the base-e logarithm of the argument|  
|[modf Function (fast_math)](concurrency-fast-math-namespace-functions.md#modf_function.md)|Splits _X into fractional and integer parts.|  
|[modff Function (fast_math)](concurrency-fast-math-namespace-functions.md#modff_function.md)|Splits _X into fractional and integer parts.|  
|[pow Function (fast_math)](concurrency-fast-math-namespace-functions.md#pow_function.md)|Calculates _X raised to the power of _Y|  
|[powf Function (fast_math)](concurrency-fast-math-namespace-functions.md#powf_function.md)|Calculates _X raised to the power of _Y|  
|[round Function (fast_math)](concurrency-fast-math-namespace-functions.md#round_function.md)|Rounds _X to the nearest integer|  
|[roundf Function (fast_math)](concurrency-fast-math-namespace-functions.md#roundf_function.md)|Rounds _X to the nearest integer|  
|[rsqrt Function (fast_math)](concurrency-fast-math-namespace-functions.md#rsqrt_function.md)|Returns the reciprocal of the square root of the argument|  
|[rsqrtf Function (fast_math)](concurrency-fast-math-namespace-functions.md#rsqrtf_function.md)|Returns the reciprocal of the square root of the argument|  
|[signbit Function (fast_math)](concurrency-fast-math-namespace-functions.md#signbit_function.md)|Returns the sign of the argument|  
|[signbitf Function (fast_math)](concurrency-fast-math-namespace-functions.md#signbitf_function.md)|Returns the sign of the argument|  
|[sin Function (fast_math)](concurrency-fast-math-namespace-functions.md#sin_function.md)|Calculates the sine value of the argument|  
|[sincos Function (fast_math)](concurrency-fast-math-namespace-functions.md#sincos_function.md)|Calculates sine and cosine value of _X|  
|[sincosf Function (fast_math)](concurrency-fast-math-namespace-functions.md#sincosf_function.md)|Calculates sine and cosine value of _X|  
|[sinf Function (fast_math)](concurrency-fast-math-namespace-functions.md#sinf_function.md)|Calculates the sine value of the argument|  
|[sinh Function (fast_math)](concurrency-fast-math-namespace-functions.md#sinh_function.md)|Calculates the hyperbolic sine value of the argument|  
|[sinhf Function (fast_math)](concurrency-fast-math-namespace-functions.md#sinhf_function.md)|Calculates the hyperbolic sine value of the argument|  
|[sqrt Function (fast_math)](concurrency-fast-math-namespace-functions.md#sqrt_function.md)|Calculates the square root of the argument|  
|[sqrtf Function (fast_math)](concurrency-fast-math-namespace-functions.md#sqrtf_function.md)|Calculates the square root of the argument|  
|[tan Function (fast_math)](concurrency-fast-math-namespace-functions.md#tan_function.md)|Calculates the tangent value of the argument|  
|[tanf Function (fast_math)](concurrency-fast-math-namespace-functions.md#tanf_function.md)|Calculates the tangent value of the argument|  
|[tanh Function (fast_math)](concurrency-fast-math-namespace-functions.md#tanh_function.md)|Calculates the hyperbolic tangent value of the argument|  
|[tanhf Function (fast_math)](concurrency-fast-math-namespace-functions.md#tanhf_function.md)|Calculates the hyperbolic tangent value of the argument|  
|[trunc Function (fast_math)](concurrency-fast-math-namespace-functions.md#trunc_function.md)|Truncates the argument to the integer component|  
|[truncf Function (fast_math)](concurrency-fast-math-namespace-functions.md#truncf_function.md)|Truncates the argument to the integer component|  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::fast_math  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
