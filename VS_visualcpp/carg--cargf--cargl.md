---
title: "carg, cargf, cargl"
ms.custom: na
ms.date: 10/05/2016
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
  - carg
  - cargf
  - cargl
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
ms.assetid: 610d6a93-b929-46ab-a966-b77db0b804be
caps.latest.revision: 8
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
# carg, cargf, cargl
Retrieves the argument  of a complex number, with a branch cut along the negative real axis.  
  
## Syntax  
  
```  
double carg(   
   _Dcomplex z   
);  
float carg(   
   _Fcomplex z   
);  // C++ only  
long double carg(   
   _Lcomplex z   
);  // C++ only  
float cargf(   
   _Fcomplex z   
);  
long double cargl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number.  
  
## Return Value  
 The argument (also known as the phase) of `z`. The result is in the interval [−π, +π].  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `carg` that take `_Fcomplex` or `_Lcomplex` values, and return `float` or `long double` values. In a C program, `carg` always takes a `_Dcomplex` value and returns a `double` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`carg`,               `cargf`, `cargl`|<complex.h>|<ccomplex\>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [norm, normf, norml](../VS_visualcpp/norm--normf--norml1.md)   
 [creal, crealf, creall](../VS_visualcpp/creal--crealf--creall.md)   
 [cproj, cprojf, cprojl](../VS_visualcpp/cproj--cprojf--cprojl.md)   
 [conj, conjf, conjl](../VS_visualcpp/conj--conjf--conjl.md)   
 [cimag, cimagf, cimagl](../VS_visualcpp/cimag--cimagf--cimagl.md)   
 [cabs, cabsf, cabsl](../VS_visualcpp/cabs--cabsf--cabsl.md)