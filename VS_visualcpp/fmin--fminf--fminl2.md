---
title: "fmin, fminf, fminl2"
ms.custom: na
ms.date: 10/06/2016
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - cpp
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - fmin
  - fminf
  - fminl
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
H1: fmin, fminf, fminl
ms.assetid: 1916dfb5-99c1-4b0d-aefb-513525c3f2ac
caps.latest.revision: 5
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
# fmin, fminf, fminl2
Determines the smaller of the two specified values.  
  
## Syntax  
  
```  
double fmin(  
   double x,   
   double y  
);  
  
float fmin(  
   float x,   
   float y  
); //C++ only  
  
long double fmin(  
   long double x,   
   long double y  
); //C++ only  
  
float fminf(  
   float x,   
   float y  
);  
  
long double fminl(  
   long double x,   
   long double y  
);  
  
```  
  
#### Parameters  
 `x`  
 The first value to compare.  
  
 `y`  
 The second value to compare.  
  
## Return Value  
 If successful, returns the smaller of `x` or `y`.  
  
|Input|Result|  
|-----------|------------|  
|`x` is NaN|`y`|  
|`y` is NaN|`x`|  
|`x` and `y` are NaN|nan|  
  
 The function does not cause [_matherr](../VS_visualcpp/_matherr.md) to be invoked, cause any floating-point exceptions, or change the value of `errno`.  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `fmin` that take and return float and long double types. In a C program, `fmin` always takes and returns a double.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`fmin`,                `fminf`,  `fminl`|C: <math.h><br /><br /> C++: <math.h> or <cmath\>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)