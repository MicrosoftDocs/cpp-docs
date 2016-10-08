---
title: "remquo, remquof, remquol"
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
apiname: 
  - remquof
  - remquo
  - remquol
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
  - api-ms-win-crt-math-l1-1-0.dll
apitype: DLLExport
ms.assetid: a1d3cb8b-8027-4cd3-8deb-04eb17f299fc
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# remquo, remquof, remquol
Computes the remainder of two integer values, and stores an integer value with the sign and approximate magnitude of the quotient in a location that's specified in a parameter.  
  
## Syntax  
  
```  
double remquo(   
   double numer,  
   double denom,  
   int* quo  
);  
float remquo(   
   float numer,  
   float denom,  
   int* quo  
); /* C++ only */  
long double remquo(   
   long double numer,  
   long double denom,  
   int* quo  
); /* C++ only */  
float remquof(   
   float numer,  
   float denom,  
   int* quo  
);  
long double remquol(   
   long double numer,  
   long double denom,  
   int* quo  
);  
  
```  
  
#### Parameters  
 `numer`  
 The numerator.  
  
 `denom`  
 The denominator.  
  
 `quo`  
 A pointer to an integer to store a value that has the sign and approximate magnitude of the quotient.  
  
## Return Value  
 `remquo` returns the floating-point remainder of `x` / `y`. If the value of `y` is 0.0, `remquo` returns a quiet NaN. For information about the representation of a quiet NaN by the `printf` family, see [printf, _printf_l, wprintf, _wprintf_l](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md).  
  
## Remarks  
 The `remquo` function calculates the floating-point remainder `f` of `x` / `y` such that `x` = `i` `*` `y` + `f`, where `i` is an integer, `f` has the same sign as `x`, and the absolute value of `f` is less than the absolute value of `y`.  
  
 C++ allows overloading, so you can call overloads of `remquo` that take and return `float` or `long double` values. In a C program, `remquo` always takes two doubles and returns a double.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`remquo`, `remquof`, `remquol`|<math.h>|  
  
 For compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```c  
// crt_remquo.c  
// This program displays a floating-point remainder.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double w = -10.0, x = 3.0, z;  
   int quo = 0;  
  
   z = remquo(w, x, &quo);  
   printf("The remainder of %.2f / %.2f is %f\n", w, x, z);  
   printf("Approximate signed quotient is %d\n", quo);  
}  
```  
  
 **The remainder of -10.00 / 3.00 is -1.000000**  
**Approximate signed quotient is -3**   
## .NET Framework Equivalent  
 [System::Math::IEEERemainder](https://msdn.microsoft.com/en-us/library/system.math.ieeeremainder.aspx)  
  
## See Also  
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [ldiv, lldiv](../VS_visualcpp/ldiv--lldiv.md)   
 [imaxdiv](../VS_visualcpp/imaxdiv.md)   
 [fmod, fmodf](../VS_visualcpp/fmod--fmodf.md)   
 [remainder, remainderf, remainderl](../VS_visualcpp/remainder--remainderf--remainderl.md)