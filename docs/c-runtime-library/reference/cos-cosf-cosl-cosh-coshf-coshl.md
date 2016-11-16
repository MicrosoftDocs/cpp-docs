---
title: "cos, cosf, cosl, cosh, coshf, coshl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "coshl"
  - "cosh"
  - "cos"
  - "cosl"
  - "cosf"
  - "coshf"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-math-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "coshl"
  - "cos"
  - "cosf"
  - "cosh"
  - "cosl"
  - "coshf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "cosines"
  - "cosl function"
  - "calculating cosine"
  - "cosf function"
  - "cos function"
  - "cosh function"
  - "coshf function"
  - "trigonometric functions"
  - "cosines, calculating"
  - "coshl function"
  - "hyperbolic functions"
ms.assetid: ae90435e-6b68-4a47-a81f-be87d5c08f16
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
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
# cos, cosf, cosl, cosh, coshf, coshl
Calculates the cosine (`cos`, `cosf`, or `cosl`), or hyperbolic cosine (`cosh`, `coshf`, or `coshl`).  
  
## Syntax  
  
```  
double cos(   
   double x   
);  
float cos(  
   float x   
);  // C++ only  
long double cos(  
   long double x  
);  // C++ only  
float cosf(   
   float x   
);  
long double cosl(  
   long double x  
);  
double cosh(   
   double x   
);  
float cosh(  
   float x   
);  // C++ only  
long double cosh(  
   long double x  
);  // C++ only  
float coshf(  
   float x   
);  
long double coshl(  
   long double x  
);  
```  
  
#### Parameters  
 `x`  
 Angle in radians.  
  
## Return Value  
 The cosine or hyperbolic cosine of `x`. If `x` is greater than or equal to 263, or less than or equal to –263, a loss of significance in the result of a call to `cos`, `cosf`, or `cosl` occurs.  
  
 By default, if the result is too large in a `cosh`, `coshf`, or `coshl` call, the function returns `HUGE_VAL` and sets `errno` to `ERANGE`.  
  
|Input|SEH Exception|Matherr Exception|  
|-----------|-------------------|-----------------------|  
|± `QNAN`,`IND`|none|`_DOMAIN`|  
|± ∞  (`cosf`, `cos`, `cosl`)|`INVALID`|`_DOMAIN`|  
|x ≥ 7.104760e+002  (`cosh`, `coshf`, `coshl`)|`INEXACT`+`OVERFLOW`|`OVERFLOW`|  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `cos` and `cosh` that take and return `float` or `long double` values. In a C program, `cos` and `cosh` always take and return a `double`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`cos`, `cosh`, `cosf`, `coshf`, `cosl`, `coshl`|\<math.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 See the example in [sin, sinf, sinl, sinh, sinhf, sinhl](../../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md).  
  
## .NET Framework Equivalent  
  
-   [System::Math::Cos](https://msdn.microsoft.com/en-us/library/system.math.cos.aspx)  
  
-   [System::Math::Cosh](https://msdn.microsoft.com/en-us/library/system.math.cosh.aspx)  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [acos, acosf, acosl](../../c-runtime-library/reference/acos-acosf-acosl.md)   
 [asin, asinf, asinl](../../c-runtime-library/reference/asin-asinf-asinl.md)   
 [atan, atanf, atanl, atan2, atan2f, atan2l](../../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)   
 [_matherr](../../c-runtime-library/reference/matherr.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)   
 [tan, tanf, tanl, tanh, tanhf, tanhl](../../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)   
 [_CIcos](../../c-runtime-library/cicos.md)