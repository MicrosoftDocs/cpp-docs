---
title: "fesetenv1 | Microsoft Docs"
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
  - "fesetenv"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "fesetenv"
  - "fenv/fesetenv"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "fesetenv function"
ms.assetid: ffc64fff-8ea7-4d59-9e04-ff96ef8cd012
caps.latest.revision: 6
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
# fesetenv
Sets the current floating-point environment.  
  
## Syntax  
  
```  
int fesetenv(  
   const fenv_t *penv  
);  
  
```  
  
#### Parameters  
 `penv`  
 Pointer to a `fenv_t` object that contains a floating-point environment as set by a call to [fegetenv](http://msdn.microsoft.com/Library/61df848d-6ba8-4c6e-be35-216436fe7736) or [feholdexcept](http://msdn.microsoft.com/Library/c286ace3-ec39-482a-be8b-f998d31003d9). You can also specify the default startup floating-point environment by using the FE_DFL_ENV macro.  
  
## Return Value  
 Returns 0 if the environment was successfully set.        Otherwise, returns a nonzero value.  
  
## Remarks  
 The `fesetenv` function sets the current floating-point environment from the value stored in the `fenv_t` object pointed to by `penv`. The floating point environment is the set of status flags and control modes that affect floating-point calculations. This includes the rounding mode and the status flags for floating-point exceptions.  If `penv` is not FE_DFL_ENV or does not point to a valid `fenv_t` object, subsequent behavior is undefined.  
  
 A call to this function sets the exception status flags that are in the `penv` object, but it does not raise those exceptions.  
  
 To use this function, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [fenv_access](../../preprocessor/fenv-access.md).  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`fesetenv`|\<fenv.h>|\<cfenv>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fegetenv](../../c-runtime-library/reference/fegetenv1.md)   
 [feclearexcept](../../c-runtime-library/reference/feclearexcept1.md)   
 [feholdexcept](../../c-runtime-library/reference/feholdexcept2.md)   
 [fesetexceptflag](../../c-runtime-library/reference/fesetexceptflag2.md)