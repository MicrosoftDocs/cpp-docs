---
title: "fmod, fmodf"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "fmod"
  - "fmodf"
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
  - "fmod"
  - "_fmodl"
  - "fmodf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "calculating floating-point remainders"
  - "fmodf function"
  - "fmod function"
  - "floating-point numbers, calculating remainders"
ms.assetid: 6962d369-d11f-40b1-a6d7-6f67239f8a23
caps.latest.revision: 11
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# fmod, fmodf
Calculates the floating-point remainder.  
  
## Syntax  
  
```  
double fmod(   
   double x,  
   double y   
);  
float fmod(  
   float x,  
   float y   
);  // C++ only  
long double fmod(  
   long double x,  
   long double y  
);  // C++ only  
float fmodf(   
   float x,  
   float y   
);  
```  
  
#### Parameters  
 `x`, `y`  
 Floating-point values.  
  
## Return Value  
 `fmod` returns the floating-point remainder of `x` / `y`. If the value of `y` is 0.0, `fmod` returns a quiet NaN. For information about representation of a quiet NaN by the `printf` family, see [printf](../crt/printf--_printf_l--wprintf--_wprintf_l.md).  
  
## Remarks  
 The `fmod` function calculates the floating-point remainder `f` of `x` / `y` such that `x` = `i` `*` `y` + `f`, where `i` is an integer, `f` has the same sign as `x`, and the absolute value of `f` is less than the absolute value of `y`.  
  
 C++ allows overloading, so you can call overloads of `fmod`. In a C program, `fmod` always takes two doubles and returns a double.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fmod`, `fmodf`|\<math.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_fmod.c  
// This program displays a floating-point remainder.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double w = -10.0, x = 3.0, z;  
  
   z = fmod( w, x );  
   printf( "The remainder of %.2f / %.2f is %f\n", w, x, z );  
}  
```  
  
 **The remainder of -10.00 / 3.00 is -1.000000**   
## .NET Framework Equivalent  
 [System::Math::IEEERemainder](https://msdn.microsoft.com/en-us/library/system.math.ieeeremainder.aspx)  
  
## See Also  
 [Floating-Point Support](../crt/floating-point-support.md)   
 [ceil, ceilf, ceill](../crt/ceil--ceilf--ceill.md)   
 [fabs, fabsf, fabsl](../crt/fabs--fabsf--fabsl.md)   
 [floor, floorf, floorl](../crt/floor--floorf--floorl.md)   
 [_CIfmod](../crt/_cifmod.md)