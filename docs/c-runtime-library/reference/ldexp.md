---
title: "ldexp | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "ldexp"
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
  - "ldexp"
  - "_ldexpl"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "calculating real numbers"
  - "computing real numbers"
  - "mantissas, floating-point variables"
  - "ldexp function"
  - "exponent, floating-point numbers"
  - "floating-point functions, mantissa and exponent"
ms.assetid: aa7f5310-3879-4f63-ae74-86a39fbdedfa
caps.latest.revision: 12
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
# ldexp
Multiplies a floating-point number by an integral power of two.  
  
## Syntax  
  
```  
double ldexp(  
   double x,  
   int exp   
);  
float ldexp(  
   float x,  
   int exp  
);  // C++ only  
long double ldexp(  
   long double x,  
   int exp  
);  // C++ only   
float ldexpf(  
   float x,  
   int exp  
);   
long double ldexpl(  
   long double x,  
   int exp  
);   
```  
  
#### Parameters  
 `x`  
 Floating-point value.  
  
 `exp`  
 Integer exponent.  
  
## Return Value  
 The `ldexp` function returns the value of `x` * 2<sup>exp</sup> if successful. On overflow, and depending on the sign of `x`, `ldexp` returns +/– `HUGE_VAL`; the `errno` value is set to `ERANGE`.  
  
 For more information about `errno` and possible error return values, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `ldexp` that take `float` or `long double` types. In a C program, `ldexp` always takes a `double` and an `int` and returns a `double`.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`ldexp`, `ldexpf`, `ldexpl`|\<math.h>|\<cmath>|  
  
 For compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_ldexp.c  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 4.0, y;  
   int p = 3;  
  
   y = ldexp( x, p );  
   printf( "%2.1f times two to the power of %d is %2.1f\n", x, p, y );  
}  
```  
  
## Output  
  
```  
4.0 times two to the power of 3 is 32.0  
```  
  
## .NET Framework Equivalent  
 [System::Math::Pow](https://msdn.microsoft.com/en-us/library/system.math.pow.aspx)  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [frexp](../../c-runtime-library/reference/frexp.md)   
 [modf, modff, modfl](../../c-runtime-library/reference/modf-modff-modfl.md)