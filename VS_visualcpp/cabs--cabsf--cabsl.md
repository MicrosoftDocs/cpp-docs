---
title: "cabs, cabsf, cabsl"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - cpp
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - cabs
  - cabsf
  - cabsl
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
ms.assetid: 6b8eb453-cc8f-4972-bebf-351cbdfdfc15
caps.latest.revision: 10
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
# cabs, cabsf, cabsl
Retrieves the absolute value of a complex number.  
  
## Syntax  
  
```  
double cabs(   
   _Dcomplex z   
);  
float cabs(   
   _Fcomplex z   
);  // C++ only  
long double cabs(   
   _Lcomplex z   
);  // C++ only  
float cabsf(   
   _Fcomplex z   
);  
long double cabsl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number.  
  
## Return Value  
 The absolute value of `z`.  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `cabs` that take `_Fcomplex` or `_Lcomplex` values, and return `float` or `long double` values. In a C program, `cabs` always takes a `_Dcomplex` value and returns a `double` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`cabs`,               `cabsf`, `cabsl`|<complex.h>|<ccomplex\>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [norm, normf, norml](../VS_visualcpp/norm--normf--norml1.md)   
 [creal, crealf, creall](../VS_visualcpp/creal--crealf--creall.md)   
 [cproj, cprojf, cprojl](../VS_visualcpp/cproj--cprojf--cprojl.md)   
 [conj, conjf, conjl](../VS_visualcpp/conj--conjf--conjl.md)   
 [cimag, cimagf, cimagl](../VS_visualcpp/cimag--cimagf--cimagl.md)   
 [carg, cargf, cargl](../VS_visualcpp/carg--cargf--cargl.md)