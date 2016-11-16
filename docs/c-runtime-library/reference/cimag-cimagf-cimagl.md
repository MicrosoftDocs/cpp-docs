---
title: "cimag, cimagf, cimagl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "cimag"
  - "cimagf"
  - "cimagl"
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
  - "cimagf"
  - "cimagl"
  - "complex/cimag"
  - "complex/cimagf"
  - "complex/cimagl"
  - "cimag"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "cimag function"
  - "cimagf function"
  - "cimagl function"
ms.assetid: 0d8836f5-d61d-44cd-8731-6f75cb776def
caps.latest.revision: 9
author: "corob-msft"
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
# cimag, cimagf, cimagl
Retrieves the imaginary part of a complex number.  
  
## Syntax  
  
```  
double cimag(   
   _Dcomplex z   
);  
float cimag(   
   _Fcomplex z   
);  // C++  
long double cimag(   
  _Lcomplex z   
);  // C++  
float cimagf(   
   _Fcomplex z   
);  
long double cimagl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 A complex number.  
  
## Return Value  
 The imaginary part of `z`.  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `cimag` that take `_Fcomplex` or `_Lcomplex` values, and return `float` or `long double` values. In a C program, `cimag` always takes a `_Dcomplex` value and returns a `double` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`cimag`,               `cimagf`, `cimagl`|\<complex.h>|\<ccomplex>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [norm, normf, norml](../../c-runtime-library/reference/norm-normf-norml1.md)   
 [creal, crealf, creall](../../c-runtime-library/reference/creal-crealf-creall.md)   
 [cproj, cprojf, cprojl](../../c-runtime-library/reference/cproj-cprojf-cprojl.md)   
 [conj, conjf, conjl](../../c-runtime-library/reference/conj-conjf-conjl.md)   
 [carg, cargf, cargl](../../c-runtime-library/reference/carg-cargf-cargl.md)   
 [cabs, cabsf, cabsl](../../c-runtime-library/reference/cabs-cabsf-cabsl.md)