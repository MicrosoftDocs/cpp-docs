---
title: "copysign, copysignf, copysignl, _copysign, _copysignf, _copysignl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "copysignf"
  - "copysignl"
  - "_copysignl"
  - "_copysign"
  - "_copysignf"
  - "copysign"
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
  - "_copysignl"
  - "copysign"
  - "copysignf"
  - "_copysign"
  - "copysignl"
  - "_copysignf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "copysignl function"
  - "_copysignl function"
  - "copysign function"
  - "_copysignf function"
  - "_copysign function"
  - "copysignf function"
ms.assetid: 009216d6-72a2-402d-aa6c-91d924b2c9e4
caps.latest.revision: 16
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
# copysign, copysignf, copysignl, _copysign, _copysignf, _copysignl
Returns a value that has the magnitude of one argument and the sign of another.  
  
## Syntax  
  
```  
double copysign(   
   double x,  
   double y   
);  
float copysign(   
   float x,  
   float y   
); // C++ only  
long double copysign(   
   long double x,  
   long double y   
); // C++ only  
float copysignf(   
   float x,  
   float y   
); // C++ only  
long double copysignl(   
   long double x,  
   long double y   
); // C++ only  
double _copysign(   
   double x,  
   double y   
);  
long double _copysignl(   
   long double x,  
   long double y   
);  
```  
  
#### Parameters  
 `x`  
 The floating-point value that's returned as the magnitude of the result.  
  
 `y`  
 The floating-point value that's returned as the sign of the result.  
  
 [Floating-Point Support Routines](../../c-runtime-library/floating-point-support.md)  
  
## Return Value  
 The `copysign` functions return a floating-point value that combines the magnitude of `x` and the sign of `y`. There is no error return.  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `copysign` that take and return `float` or `long double` values. In a C program, `copysign` always takes and returns a `double`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_copysign`|\<float.h>|  
|`copysign`, `copysignf`, `copysignl`, `_copysignf``_copysignl`|\<math.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [fabs, fabsf, fabsl](../../c-runtime-library/reference/fabs-fabsf-fabsl.md)   
 [_chgsign, _chgsignf, _chgsignl](../../c-runtime-library/reference/chgsign-chgsignf-chgsignl.md)