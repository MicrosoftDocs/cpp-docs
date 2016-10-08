---
title: "acos, acosf, acosl"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - acosf
  - acos
  - acosl
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
ms.assetid: 00b89c48-8faf-4824-aa95-fa4349a4975d
caps.latest.revision: 17
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
# acos, acosf, acosl
Calculates the arccosine.  
  
## Syntax  
  
```  
double acos(   
   double x   
);  
float acos(  
   float x   
);   // C++ only  
long double acos(  
   long double x  
);   // C++ only  
float acosf(  
   float x   
);  
long double acosl(  
   long double x  
);  
```  
  
#### Parameters  
 `x`  
 Value between –1 and 1, for which to calculate the arccosine (the inverse cosine).  
  
## Return Value  
 The `acos` function returns the arccosine of `x` in the range 0 to π radians.  
  
 By default, if `x` is less than –1 or greater than 1, `acos` returns an indefinite.  
  
|Input|SEH Exception|Matherr Exception|  
|-----------|-------------------|-----------------------|  
|± ∞|`INVALID`|`_DOMAIN`|  
|± QNAN,IND|none|`_DOMAIN`|  
|&#124;x&#124;>1|`INVALID`|`_DOMAIN`|  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `acos` that take and return `float` and `long double` types. In a C program, `acos` always takes and returns a `double`.  
  
## Requirements  
  
|Routine|Required header|Optional headers|  
|-------------|---------------------|----------------------|  
|`acos`, `acosf`, `acosl`|<math.h>|<errno.h>|  
  
## Example  
 This program prompts for a value in the range -1 to 1. Input values outside this range produce `_DOMAIN` error messages. If a valid value is entered, the program prints the arcsine and the arccosine of that value.  
  
```  
// crt_asincos.c  
// arguments: 0  
  
#include <math.h>  
#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
  
int main( int ac, char* av[] )  
{  
    double  x,  
            y;  
    errno_t err;   
  
    // argument checking  
    if (ac != 2)  
    {  
        fprintf_s( stderr, "Usage: %s <number between -1 and 1>\n",  
                   av[0]);  
        return 1;  
    }  
  
    // Convert argument into a double value  
    if ((err = sscanf_s( av[1], "%lf", &x )) != 1)  
    {  
        fprintf_s( stderr, "Error converting argument into ",  
                   "double value.\n");  
        return 1;  
    }  
  
    // Arcsine of X  
    y = asin( x );  
    printf_s( "Arcsine of %f = %f\n", x, y );  
  
    // Arccosine of X  
    y = acos( x );  
    printf_s( "Arccosine of %f = %f\n", x, y );  
}  
```  
  
 **Arcsine of 0.000000 = 0.000000**  
**Arccosine of 0.000000 = 1.570796**   
## .NET Framework Equivalent  
 [System::Math::Acos](https://msdn.microsoft.com/en-us/library/system.math.acos.aspx)  
  
## See Also  
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [asin, asinf, asinl](../VS_visualcpp/asin--asinf--asinl.md)   
 [atan, atanf, atanl, atan2, atan2f, atan2l](../VS_visualcpp/atan--atanf--atanl--atan2--atan2f--atan2l.md)   
 [cos, cosf, cosl, cosh, coshf, coshl](../VS_visualcpp/cos--cosf--cosl--cosh--coshf--coshl.md)   
 [_matherr](../VS_visualcpp/_matherr.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../VS_visualcpp/sin--sinf--sinl--sinh--sinhf--sinhl.md)   
 [tan, tanf, tanl, tanh, tanhf, tanhl](../VS_visualcpp/tan--tanf--tanl--tanh--tanhf--tanhl.md)