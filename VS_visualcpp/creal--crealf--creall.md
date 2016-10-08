---
title: "creal, crealf, creall"
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
  - creal
  - crealf
  - creall
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
ms.assetid: fa3ac62f-7aa3-4238-a71f-d6b00cd0c7c8
caps.latest.revision: 12
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
# creal, crealf, creall
Retrieves the real part of a complex number.  
  
## Syntax  
  
```  
double creal(   
   _Dcomplex z   
);  
float creal(   
   _Fcomplex z   
);  // C++ only  
long double creal(   
   _Lcomplex z   
);  // C++ only  
float crealf(   
   _Fcomplex z   
);  
long double creall(   
  _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number.  
  
## Return Value  
 The real part of `z`.  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `creal` that take `_Fcomplex` or `_Lcomplex` values, and return `float` or `long double` values. In a C program, `creal` always takes a `_Dcomplex` value and returns a `double` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`creal`,               `crealf`, `creall`|<complex.h>|<ccomplex\>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [norm, normf, norml](../VS_visualcpp/norm--normf--norml1.md)   
 [cproj, cprojf, cprojl](../VS_visualcpp/cproj--cprojf--cprojl.md)   
 [conj, conjf, conjl](../VS_visualcpp/conj--conjf--conjl.md)   
 [cimag, cimagf, cimagl](../VS_visualcpp/cimag--cimagf--cimagl.md)   
 [carg, cargf, cargl](../VS_visualcpp/carg--cargf--cargl.md)   
 [cabs, cabsf, cabsl](../VS_visualcpp/cabs--cabsf--cabsl.md)