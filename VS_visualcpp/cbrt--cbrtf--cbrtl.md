---
title: "cbrt, cbrtf, cbrtl"
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
  - cbrt
  - cbrtf
  - cbrtl
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
ms.assetid: ab51d916-3db2-4beb-b46a-28b4062cd33f
caps.latest.revision: 6
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
# cbrt, cbrtf, cbrtl
Calculates the cube root.  
  
## Syntax  
  
```  
double cbrt(  
   double x   
);  
float cbrt(  
   float x   
);  // C++ only  
long double cbrt(  
   long double x  
);  // C++ only  
float cbrtf(  
   float x   
);  
long double cbrtl(  
   long double x  
);  
```  
  
#### Parameters  
 `x`  
 Floating-point value  
  
## Return Value  
 The `cbrt` functions return the cube-root of `x`.  
  
|Input|SEH Exception|`_matherr` Exception|  
|-----------|-------------------|--------------------------|  
|± ∞, QNAN, IND|none|none|  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `cbrt` that take `float` or `long double` types. In a C program, `cbrt` always takes and returns `double`.  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`cbrt`, `cbrtf`, `cbrtl`|<math.h>|<cmath\>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```c  
// crt_cbrt.c  
// Compile using: cl /W4 crt_cbrt.c  
// This program calculates a cube root.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double question = -64.64;  
   double answer;  
  
   answer = cbrt(question);  
   printf("The cube root of %.2f is %.6f\n", question, answer);  
}  
```  
  
 **The cube root of -64.64 is -4.013289**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [exp, expf](../VS_visualcpp/exp--expf.md)   
 [log, logf, log10, log10f](../VS_visualcpp/log--logf--log10--log10f.md)   
 [pow, powf, powl](../VS_visualcpp/pow--powf--powl.md)