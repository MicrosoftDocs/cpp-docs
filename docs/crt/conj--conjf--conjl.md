---
title: "conj, conjf, conjl"
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
  - "conj"
  - "conjf"
  - "conjl"
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
  - "conj"
  - "conjf"
  - "conjl"
  - "complex/conj"
  - "complex/conjf"
  - "complex/conjl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "conj function"
  - "conjf function"
  - "conjl function"
ms.assetid: 792fccfa-19c6-4890-99f9-a3b89effccd6
caps.latest.revision: 10
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
# conj, conjf, conjl
Retrieves the complex conjugate of a complex number.  
  
## Syntax  
  
```  
_Dcomplex conj(   
   _Dcomplex z   
);  
_Fcomplex conj(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex conj(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex conjf(   
   _Fcomplex z   
);  
_Lcomplex conjl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number.  
  
## Return Value  
 The complex conjugate  of `z`.  The result has the same real and imaginary part as `z`, but with the opposite sign.  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `conj` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `conj` always takes and returns a `_Dcomplex` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`conj`,               `conjf`, `conjl`|\<complex.h>|\<ccomplex>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../crt/crt-alphabetical-function-reference.md)   
 [norm, normf, norml](../crt/norm--normf--norml1.md)   
 [creal, crealf, creall](../crt/creal--crealf--creall.md)   
 [cproj, cprojf, cprojl](../crt/cproj--cprojf--cprojl.md)   
 [cimag, cimagf, cimagl](../crt/cimag--cimagf--cimagl.md)   
 [carg, cargf, cargl](../crt/carg--cargf--cargl.md)   
 [cabs, cabsf, cabsl](../crt/cabs--cabsf--cabsl.md)