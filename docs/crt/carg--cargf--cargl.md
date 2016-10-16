---
title: "carg, cargf, cargl"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "carg"
  - "cargf"
  - "cargl"
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
  - "carg"
  - "cargf"
  - "cargl"
  - "complex/carg"
  - "complex/cargf"
  - "complex/cargl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "carg function"
  - "cargf function"
  - "cargl function"
ms.assetid: 610d6a93-b929-46ab-a966-b77db0b804be
caps.latest.revision: 8
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
|`carg`,               `cargf`, `cargl`|\<complex.h>|\<ccomplex>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../crt/crt-alphabetical-function-reference.md)   
 [norm, normf, norml](../crt/norm--normf--norml1.md)   
 [creal, crealf, creall](../crt/creal--crealf--creall.md)   
 [cproj, cprojf, cprojl](../crt/cproj--cprojf--cprojl.md)   
 [conj, conjf, conjl](../crt/conj--conjf--conjl.md)   
 [cimag, cimagf, cimagl](../crt/cimag--cimagf--cimagl.md)   
 [cabs, cabsf, cabsl](../crt/cabs--cabsf--cabsl.md)