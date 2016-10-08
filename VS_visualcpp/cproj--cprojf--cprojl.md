---
title: "cproj, cprojf, cprojl"
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
  - cproj
  - cprojf
  - cprojl
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
ms.assetid: 32b49623-13bf-4cae-802e-7912d75030fe
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
# cproj, cprojf, cprojl
Retrieves the projection of a complex number on the Reimann sphere.  
  
## Syntax  
  
```  
_Dcomplex cproj(   
   _Dcomplex z   
);  
_Fcomplex cproj(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex cproj(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex cprojf(   
   _Fcomplex z   
);  
_Lcomplex cprojl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number.  
  
## Return Value  
 The projection of `z` on the Reimann sphere.  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `cproj` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `cproj` always takes and returns a `_Dcomplex` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`cproj`,               `cprojf`, `cprojl`|<complex.h>|<ccomplex\>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [norm, normf, norml](../VS_visualcpp/norm--normf--norml1.md)   
 [creal, crealf, creall](../VS_visualcpp/creal--crealf--creall.md)   
 [conj, conjf, conjl](../VS_visualcpp/conj--conjf--conjl.md)   
 [cimag, cimagf, cimagl](../VS_visualcpp/cimag--cimagf--cimagl.md)   
 [carg, cargf, cargl](../VS_visualcpp/carg--cargf--cargl.md)   
 [cabs, cabsf, cabsl](../VS_visualcpp/cabs--cabsf--cabsl.md)