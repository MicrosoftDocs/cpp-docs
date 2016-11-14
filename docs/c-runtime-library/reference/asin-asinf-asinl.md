---
title: "asin, asinf, asinl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "asinf"
  - "asinl"
  - "asin"
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
  - "asin"
  - "asinl"
  - "asinf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "asin function"
  - "asinl function"
  - "asinf function"
  - "trigonometric functions"
  - "arcsine function"
ms.assetid: ca05f9ea-b711-49f6-9f32-2f4019abfd69
caps.latest.revision: 14
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
# asin, asinf, asinl
Calculates the arcsine.  
  
## Syntax  
  
```  
double asin(   
   double x   
);  
float asin(  
   float x  
);  // C++ only  
long double asin(  
   long double x  
);  // C++ only  
float asinf (   
   float x   
);  
long double asinl(  
   long double x  
);  
```  
  
#### Parameters  
 `x`  
 Value whose arcsine is to be calculated.  
  
## Return Value  
 The `asin` function returns the arcsine (the inverse sine function) of `x` in the range –π/2 to π/2 radians.  
  
 By default, if `x` is less than –1 or greater than 1, `asin` returns an indefinite.  
  
|Input|SEH Exception|Matherr Exception|  
|-----------|-------------------|-----------------------|  
|± ∞|`INVALID`|`_DOMAIN`|  
|± `QNAN`,`IND`|none|`_DOMAIN`|  
|&#124;x&#124;>1|`INVALID`|`_DOMAIN`|  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `asin` with `float` and `long double` values. In a C program, `asin` always takes and returns a double.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`asin`, `asinf`, `asinl`|\<math.h>|  
  
## Example  
 For more information, see [acos, acosf, acosl](../../c-runtime-library/reference/acos-acosf-acosl.md).  
  
## .NET Framework Equivalent  
 [System::Math::Asin](https://msdn.microsoft.com/en-us/library/system.math.asin.aspx)  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [acos, acosf, acosl](../../c-runtime-library/reference/acos-acosf-acosl.md)   
 [atan, atanf, atanl, atan2, atan2f, atan2l](../../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)   
 [cos, cosf, cosl, cosh, coshf, coshl](../../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)   
 [_matherr](../../c-runtime-library/reference/matherr.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)   
 [tan, tanf, tanl, tanh, tanhf, tanhl](../../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)