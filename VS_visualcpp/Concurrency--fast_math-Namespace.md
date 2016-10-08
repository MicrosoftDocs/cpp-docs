---
title: "Concurrency::fast_math Namespace"
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
ms.assetid: 54fed939-9902-49db-9f29-e98fd9821508
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
|[cos Function  (fast_math)](../VS_visualcpp/cos-Function---fast_math-.md)|Calculates the arccosine of the argument|  
|[cosf Function (fast_math)](../VS_visualcpp/cosf-Function--fast_math-.md)|Calculates the arccosine of the argument|  
|[asin Function (fast_math)](../VS_visualcpp/asin-Function--fast_math-.md)|Calculates the arcsine of the argument|  
|[asinf Function (fast_math)](../VS_visualcpp/asinf-Function--fast_math-.md)|Calculates the arcsine of the argument|  
|[atan Function (fast_math)](../VS_visualcpp/atan-Function--fast_math-.md)|Calculates the arctangent of the argument|  
|[atan2 Function (fast_math)](../VS_visualcpp/atan2-Function--fast_math-.md)|Calculates the arctangent of _Y/_X|  
|[atan2f Function (fast_math)](../VS_visualcpp/atan2f-Function--fast_math-.md)|Calculates the arctangent of _Y/_X|  
|[atanf Function (fast_math)](../VS_visualcpp/atanf-Function--fast_math-.md)|Calculates the arctangent of the argument|  
|[ceil Function (fast_math)](../VS_visualcpp/ceil-Function--fast_math-.md)|Calculates the ceiling of the argument|  
|[ceilf Function (fast_math)](../VS_visualcpp/ceilf-Function--fast_math-.md)|Calculates the ceiling of the argument|  
|[cos Function  (fast_math)](../VS_visualcpp/cos-Function---fast_math-.md)|Calculates the cosine of the argument|  
|[cosf Function (fast_math)](../VS_visualcpp/cosf-Function--fast_math-.md)|Calculates the cosine of the argument|  
|[cosh Function (fast_math)](../VS_visualcpp/cosh-Function--fast_math-.md)|Calculates the hyperbolic cosine value of the argument|  
|[coshf Function (fast_math)](../VS_visualcpp/coshf-Function--fast_math-.md)|Calculates the hyperbolic cosine value of the argument|  
|[exp Function (fast_math)](../VS_visualcpp/exp-Function--fast_math-.md)|Calculates the base-e exponential of the argument|  
|[exp2 Function (fast_math)](../VS_visualcpp/exp2-Function--fast_math-.md)|Calculates the base-2 exponential of the argument|  
|[exp2f Function (fast_math)](../VS_visualcpp/exp2f-Function--fast_math-.md)|Calculates the base-2 exponential of the argument|  
|[expf Function (fast_math)](../VS_visualcpp/expf-Function--fast_math-.md)|Calculates the base-e exponential of the argument|  
|[fabs Function (fast_math)](../VS_visualcpp/fabs-Function--fast_math-.md)|Returns the absolute value of the argument|  
|[fabsf Function (fast_math)](../VS_visualcpp/fabsf-Function--fast_math-.md)|Returns the absolute value of the argument|  
|[floor Function (fast_math)](../VS_visualcpp/floor-Function--fast_math-.md)|Calculates the floor of the argument|  
|[floorf Function (fast_math)](../VS_visualcpp/floorf-Function--fast_math-.md)|Calculates the floor of the argument|  
|[fmax Function (fast_math)](../VS_visualcpp/fmax-Function--fast_math-.md)|Determine the maximum numeric value of the arguments|  
|[fmaxf Function (fast_math)](../VS_visualcpp/fmaxf-Function--fast_math-.md)|Determine the maximum numeric value of the arguments|  
|[fmin Function (fast_math)](../VS_visualcpp/fmin-Function--fast_math-.md)|Determine the minimum numeric value of the arguments|  
|[fminf Function (fast_math)](../VS_visualcpp/fminf-Function--fast_math-.md)|Determine the minimum numeric value of the arguments|  
|[fmod Function (fast_math)](../VS_visualcpp/fmod-Function--fast_math-.md)|Calculates the floating-point remainder of _X/_Y|  
|[fmodf Function (fast_math)](../VS_visualcpp/fmodf-Function--fast_math-.md)|Calculates the floating-point remainder of _X/_Y|  
|[frexp Function (fast_math)](../VS_visualcpp/frexp-Function--fast_math-.md)|Gets the mantissa and exponent of _X|  
|[frexpf Function (fast_math)](../VS_visualcpp/frexpf-Function--fast_math-.md)|Gets the mantissa and exponent of _X|  
|[isfinite Function (fast_math)](../VS_visualcpp/isfinite-Function--fast_math-.md)|Determines whether the argument has a finite value|  
|[isinf Function (fast_math)](../VS_visualcpp/isinf-Function--fast_math-.md)|Determines whether the argument is an infinity|  
|[isnan Function (fast_math)](../VS_visualcpp/isnan-Function--fast_math-.md)|Determines whether the argument is a NaN|  
|[ldexp Function (fast_math)](../VS_visualcpp/ldexp-Function--fast_math-.md)|Computes a real number from the mantissa and exponent|  
|[ldexpf Function (fast_math)](../VS_visualcpp/ldexpf-Function--fast_math-.md)|Computes a real number from the mantissa and exponent|  
|[log Function (fast_math)](../VS_visualcpp/log-Function--fast_math-.md)|Calculates the base-e logarithm of the argument|  
|[log10 Function (fast_math)](../VS_visualcpp/log10-Function--fast_math-.md)|Calculates the base-10 logarithm of the argument|  
|[log10f Function (fast_math)](../VS_visualcpp/log10f-Function--fast_math-.md)|Calculates the base-10 logarithm of the argument|  
|[log2 Function (fast_math)](../VS_visualcpp/log2-Function--fast_math-.md)|Calculates the base-2 logarithm of the argument|  
|[log2f Function (fast_math)](../VS_visualcpp/log2f-Function--fast_math-.md)|Calculates the base-2 logarithm of the argument|  
|[logf Function (fast_math)](../VS_visualcpp/logf-Function--fast_math-.md)|Calculates the base-e logarithm of the argument|  
|[modf Function (fast_math)](../VS_visualcpp/modf-Function--fast_math-.md)|Splits _X into fractional and integer parts.|  
|[modff Function (fast_math)](../VS_visualcpp/modff-Function--fast_math-.md)|Splits _X into fractional and integer parts.|  
|[pow Function (fast_math)](../VS_visualcpp/pow-Function--fast_math-.md)|Calculates _X raised to the power of _Y|  
|[powf Function (fast_math)](../VS_visualcpp/powf-Function--fast_math-.md)|Calculates _X raised to the power of _Y|  
|[round Function (fast_math)](../VS_visualcpp/round-Function--fast_math-.md)|Rounds _X to the nearest integer|  
|[roundf Function (fast_math)](../VS_visualcpp/roundf-Function--fast_math-.md)|Rounds _X to the nearest integer|  
|[rsqrt Function (fast_math)](../VS_visualcpp/rsqrt-Function--fast_math-.md)|Returns the reciprocal of the square root of the argument|  
|[rsqrtf Function (fast_math)](../VS_visualcpp/rsqrtf-Function--fast_math-.md)|Returns the reciprocal of the square root of the argument|  
|[signbit Function (fast_math)](../VS_visualcpp/signbit-Function--fast_math-.md)|Returns the sign of the argument|  
|[signbitf Function (fast_math)](../VS_visualcpp/signbitf-Function--fast_math-.md)|Returns the sign of the argument|  
|[sin Function (fast_math)](../VS_visualcpp/sin-Function--fast_math-.md)|Calculates the sine value of the argument|  
|[sincos Function (fast_math)](../VS_visualcpp/sincos-Function--fast_math-.md)|Calculates sine and cosine value of _X|  
|[sincosf Function (fast_math)](../VS_visualcpp/sincosf-Function--fast_math-.md)|Calculates sine and cosine value of _X|  
|[sinf Function (fast_math)](../VS_visualcpp/sinf-Function--fast_math-.md)|Calculates the sine value of the argument|  
|[sinh Function (fast_math)](../VS_visualcpp/sinh-Function--fast_math-.md)|Calculates the hyperbolic sine value of the argument|  
|[sinhf Function (fast_math)](../VS_visualcpp/sinhf-Function--fast_math-.md)|Calculates the hyperbolic sine value of the argument|  
|[sqrt Function (fast_math)](../VS_visualcpp/sqrt-Function--fast_math-.md)|Calculates the square root of the argument|  
|[sqrtf Function (fast_math)](../VS_visualcpp/sqrtf-Function--fast_math-.md)|Calculates the square root of the argument|  
|[tan Function (fast_math)](../VS_visualcpp/tan-Function--fast_math-.md)|Calculates the tangent value of the argument|  
|[tanf Function (fast_math)](../VS_visualcpp/tanf-Function--fast_math-.md)|Calculates the tangent value of the argument|  
|[tanh Function (fast_math)](../VS_visualcpp/tanh-Function--fast_math-.md)|Calculates the hyperbolic tangent value of the argument|  
|[tanhf Function (fast_math)](../VS_visualcpp/tanhf-Function--fast_math-.md)|Calculates the hyperbolic tangent value of the argument|  
|[trunc Function (fast_math)](../VS_visualcpp/trunc-Function--fast_math-.md)|Truncates the argument to the integer component|  
|[truncf Function (fast_math)](../VS_visualcpp/truncf-Function--fast_math-.md)|Truncates the argument to the integer component|  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::fast_math  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)