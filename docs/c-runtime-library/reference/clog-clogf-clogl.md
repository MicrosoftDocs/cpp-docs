---
title: "clog, clogf, clogl | Microsoft Docs"
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
  - "clog"
  - "clogf"
  - "clogl"
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
  - "clog"
  - "clogf"
  - "clogl"
  - "complex/clog"
  - "complex/clogf"
  - "complex/clogl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "clog function"
  - "clogf function"
  - "clogl function"
ms.assetid: 870b9b0b-6618-46f3-bfcf-da595cbd5e18
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
# clog, clogf, clogl
Retrieves the natural logarithm of a complex number, with a branch cut along the negative real axis.  
  
## Syntax  
  
```  
_Dcomplex clog(   
   _Dcomplex z   
);  
_Fcomplex clog(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex clog(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex clogf(   
   _Fcomplex z   
);  
_Lcomplex clogl(   
   _Lcomplex z   
);  
```  
  
#### Parameters  
 `z`  
 The base of the logarithm.  
  
## Return Value  
 The natural logarithm of `z`. The result is unbounded along the real axis and in the interval [−iπ, +iπ] along the imaginary axis.  
  
 The possible return values are:  
  
|z parameter|Return value|  
|-----------------|------------------|  
|Positive|The base 10 logarithm of z|  
|Zero|- ∞|  
|Negative|NaN|  
|NaN|NaN|  
|+ ∞|+ ∞|  
  
## Remarks  
 Because C++ allows overloading, you can call overloads of `clog` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `clog` always takes and returns a `_Dcomplex` value.  
  
## Requirements  
  
|Routine|C header|C++ header|  
|-------------|--------------|------------------|  
|`clog`,               `clogf`, `clogl`|\<complex.h>|\<ccomplex>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [cexp, cexpf, cexpl](../../c-runtime-library/reference/cexp-cexpf-cexpl.md)   
 [cpow, cpowf, cpowl](../../c-runtime-library/reference/cpow-cpowf-cpowl.md)   
 [clog10, clog10f, clog10l](../../c-runtime-library/reference/clog10-clog10f-clog10l.md)