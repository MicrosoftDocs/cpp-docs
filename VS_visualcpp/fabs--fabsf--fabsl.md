---
title: "fabs, fabsf, fabsl"
ms.custom: na
ms.date: 10/06/2016
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
  - fabsf
  - fabs
  - fabsl
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
ms.assetid: 23bca210-f408-4f5e-b46b-0ccaaec31e36
caps.latest.revision: 11
manager: ghogen
translation.priority.mt: 
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
# fabs, fabsf, fabsl
Calculates the absolute value of the floating-point argument.  
  
## Syntax  
  
```  
double fabs(   
   double x   
);  
float fabs(  
   float x   
); // C++ only  
long double fabs(  
   long double x  
); // C++ only  
float fabsf(   
   float x   
);  
long double fabsl(  
   long double x  
);  
```  
  
#### Parameters  
 `x`  
 Floating-point value.  
  
## Return Value  
 The `fabs` functions return the absolute value of the argument `x`. There is no error return.  
  
|Input|SEH Exception|Matherr Exception|  
|-----------|-------------------|-----------------------|  
|± QNAN,IND|none|_DOMAIN|  
  
## Remarks  
 C++ allows overloading, so you can call overloads of `fabs` if you include the <cmath\> header. In a C program, `fabs` always takes and returns a double.  
  
## Requirements  
  
|Function|Required C header|Required C++ header|  
|--------------|-----------------------|---------------------------|  
|`fabs`, `fabsf`, `fabsl`|<math.h>|<cmath\> or <math.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
 See the example for [abs](../VS_visualcpp/abs--labs--llabs--_abs64.md).  
  
## See Also  
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [abs, labs, llabs, _abs64](../VS_visualcpp/abs--labs--llabs--_abs64.md)   
 [_cabs](../VS_visualcpp/_cabs.md)   
 [labs, llabs](../Topic/labs,%20llabs.md)