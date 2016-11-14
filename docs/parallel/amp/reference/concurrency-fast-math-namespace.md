---
title: "Concurrency::fast_math Namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
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
|[cos Function  (fast_math)](../Topic/cos%20Function%20%20\(fast_math\).md)|Calculates the arccosine of the argument|  
|[cosf Function (fast_math)](../Topic/cosf%20Function%20\(fast_math\).md)|Calculates the arccosine of the argument|  
|[asin Function (fast_math)](../Topic/asin%20Function%20\(fast_math\).md)|Calculates the arcsine of the argument|  
|[asinf Function (fast_math)](../Topic/asinf%20Function%20\(fast_math\).md)|Calculates the arcsine of the argument|  
|[atan Function (fast_math)](../Topic/atan%20Function%20\(fast_math\).md)|Calculates the arctangent of the argument|  
|[atan2 Function (fast_math)](../Topic/atan2%20Function%20\(fast_math\).md)|Calculates the arctangent of _Y/_X|  
|[atan2f Function (fast_math)](../Topic/atan2f%20Function%20\(fast_math\).md)|Calculates the arctangent of _Y/_X|  
|[atanf Function (fast_math)](../Topic/atanf%20Function%20\(fast_math\).md)|Calculates the arctangent of the argument|  
|[ceil Function (fast_math)](../Topic/ceil%20Function%20\(fast_math\).md)|Calculates the ceiling of the argument|  
|[ceilf Function (fast_math)](../Topic/ceilf%20Function%20\(fast_math\).md)|Calculates the ceiling of the argument|  
|[cos Function  (fast_math)](../Topic/cos%20Function%20%20\(fast_math\).md)|Calculates the cosine of the argument|  
|[cosf Function (fast_math)](../Topic/cosf%20Function%20\(fast_math\).md)|Calculates the cosine of the argument|  
|[cosh Function (fast_math)](../Topic/cosh%20Function%20\(fast_math\).md)|Calculates the hyperbolic cosine value of the argument|  
|[coshf Function (fast_math)](../Topic/coshf%20Function%20\(fast_math\).md)|Calculates the hyperbolic cosine value of the argument|  
|[exp Function (fast_math)](../Topic/exp%20Function%20\(fast_math\).md)|Calculates the base-e exponential of the argument|  
|[exp2 Function (fast_math)](../Topic/exp2%20Function%20\(fast_math\).md)|Calculates the base-2 exponential of the argument|  
|[exp2f Function (fast_math)](../Topic/exp2f%20Function%20\(fast_math\).md)|Calculates the base-2 exponential of the argument|  
|[expf Function (fast_math)](../Topic/expf%20Function%20\(fast_math\).md)|Calculates the base-e exponential of the argument|  
|[fabs Function (fast_math)](../Topic/fabs%20Function%20\(fast_math\).md)|Returns the absolute value of the argument|  
|[fabsf Function (fast_math)](../Topic/fabsf%20Function%20\(fast_math\).md)|Returns the absolute value of the argument|  
|[floor Function (fast_math)](../Topic/floor%20Function%20\(fast_math\).md)|Calculates the floor of the argument|  
|[floorf Function (fast_math)](../Topic/floorf%20Function%20\(fast_math\).md)|Calculates the floor of the argument|  
|[fmax Function (fast_math)](../Topic/fmax%20Function%20\(fast_math\).md)|Determine the maximum numeric value of the arguments|  
|[fmaxf Function (fast_math)](../Topic/fmaxf%20Function%20\(fast_math\).md)|Determine the maximum numeric value of the arguments|  
|[fmin Function (fast_math)](../Topic/fmin%20Function%20\(fast_math\).md)|Determine the minimum numeric value of the arguments|  
|[fminf Function (fast_math)](../Topic/fminf%20Function%20\(fast_math\).md)|Determine the minimum numeric value of the arguments|  
|[fmod Function (fast_math)](../Topic/fmod%20Function%20\(fast_math\).md)|Calculates the floating-point remainder of _X/_Y|  
|[fmodf Function (fast_math)](../Topic/fmodf%20Function%20\(fast_math\).md)|Calculates the floating-point remainder of _X/_Y|  
|[frexp Function (fast_math)](../Topic/frexp%20Function%20\(fast_math\).md)|Gets the mantissa and exponent of _X|  
|[frexpf Function (fast_math)](../Topic/frexpf%20Function%20\(fast_math\).md)|Gets the mantissa and exponent of _X|  
|[isfinite Function (fast_math)](../Topic/isfinite%20Function%20\(fast_math\).md)|Determines whether the argument has a finite value|  
|[isinf Function (fast_math)](../Topic/isinf%20Function%20\(fast_math\).md)|Determines whether the argument is an infinity|  
|[isnan Function (fast_math)](../Topic/isnan%20Function%20\(fast_math\).md)|Determines whether the argument is a NaN|  
|[ldexp Function (fast_math)](../Topic/ldexp%20Function%20\(fast_math\).md)|Computes a real number from the mantissa and exponent|  
|[ldexpf Function (fast_math)](../Topic/ldexpf%20Function%20\(fast_math\).md)|Computes a real number from the mantissa and exponent|  
|[log Function (fast_math)](../Topic/log%20Function%20\(fast_math\).md)|Calculates the base-e logarithm of the argument|  
|[log10 Function (fast_math)](../Topic/log10%20Function%20\(fast_math\).md)|Calculates the base-10 logarithm of the argument|  
|[log10f Function (fast_math)](../Topic/log10f%20Function%20\(fast_math\).md)|Calculates the base-10 logarithm of the argument|  
|[log2 Function (fast_math)](../Topic/log2%20Function%20\(fast_math\).md)|Calculates the base-2 logarithm of the argument|  
|[log2f Function (fast_math)](../Topic/log2f%20Function%20\(fast_math\).md)|Calculates the base-2 logarithm of the argument|  
|[logf Function (fast_math)](../Topic/logf%20Function%20\(fast_math\).md)|Calculates the base-e logarithm of the argument|  
|[modf Function (fast_math)](../Topic/modf%20Function%20\(fast_math\).md)|Splits _X into fractional and integer parts.|  
|[modff Function (fast_math)](../Topic/modff%20Function%20\(fast_math\).md)|Splits _X into fractional and integer parts.|  
|[pow Function (fast_math)](../Topic/pow%20Function%20\(fast_math\).md)|Calculates _X raised to the power of _Y|  
|[powf Function (fast_math)](../Topic/powf%20Function%20\(fast_math\).md)|Calculates _X raised to the power of _Y|  
|[round Function (fast_math)](../Topic/round%20Function%20\(fast_math\).md)|Rounds _X to the nearest integer|  
|[roundf Function (fast_math)](../Topic/roundf%20Function%20\(fast_math\).md)|Rounds _X to the nearest integer|  
|[rsqrt Function (fast_math)](../Topic/rsqrt%20Function%20\(fast_math\).md)|Returns the reciprocal of the square root of the argument|  
|[rsqrtf Function (fast_math)](../Topic/rsqrtf%20Function%20\(fast_math\).md)|Returns the reciprocal of the square root of the argument|  
|[signbit Function (fast_math)](../Topic/signbit%20Function%20\(fast_math\).md)|Returns the sign of the argument|  
|[signbitf Function (fast_math)](../Topic/signbitf%20Function%20\(fast_math\).md)|Returns the sign of the argument|  
|[sin Function (fast_math)](../Topic/sin%20Function%20\(fast_math\).md)|Calculates the sine value of the argument|  
|[sincos Function (fast_math)](../Topic/sincos%20Function%20\(fast_math\).md)|Calculates sine and cosine value of _X|  
|[sincosf Function (fast_math)](../Topic/sincosf%20Function%20\(fast_math\).md)|Calculates sine and cosine value of _X|  
|[sinf Function (fast_math)](../Topic/sinf%20Function%20\(fast_math\).md)|Calculates the sine value of the argument|  
|[sinh Function (fast_math)](../Topic/sinh%20Function%20\(fast_math\).md)|Calculates the hyperbolic sine value of the argument|  
|[sinhf Function (fast_math)](../Topic/sinhf%20Function%20\(fast_math\).md)|Calculates the hyperbolic sine value of the argument|  
|[sqrt Function (fast_math)](../Topic/sqrt%20Function%20\(fast_math\).md)|Calculates the square root of the argument|  
|[sqrtf Function (fast_math)](../Topic/sqrtf%20Function%20\(fast_math\).md)|Calculates the square root of the argument|  
|[tan Function (fast_math)](../Topic/tan%20Function%20\(fast_math\).md)|Calculates the tangent value of the argument|  
|[tanf Function (fast_math)](../Topic/tanf%20Function%20\(fast_math\).md)|Calculates the tangent value of the argument|  
|[tanh Function (fast_math)](../Topic/tanh%20Function%20\(fast_math\).md)|Calculates the hyperbolic tangent value of the argument|  
|[tanhf Function (fast_math)](../Topic/tanhf%20Function%20\(fast_math\).md)|Calculates the hyperbolic tangent value of the argument|  
|[trunc Function (fast_math)](../Topic/trunc%20Function%20\(fast_math\).md)|Truncates the argument to the integer component|  
|[truncf Function (fast_math)](../Topic/truncf%20Function%20\(fast_math\).md)|Truncates the argument to the integer component|  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::fast_math  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
