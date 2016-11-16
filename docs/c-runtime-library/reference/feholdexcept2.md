---
title: "feholdexcept2 | Microsoft Docs"
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
  - "feholdexcept"
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
  - "feholdexcept"
  - "fenv/feholdexcept"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "feholdexcept function"
ms.assetid: 88e512ae-b5d8-452c-afe9-c824cd3ef1d8
caps.latest.revision: 5
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
# feholdexcept
Saves the current floating-point environment in the specified object, clears the floating-point status flags, and, if possible, puts the floating-point environment into non-stop  mode.  
  
## Syntax  
  
```  
int feholdexcept(  
   fenv_t *penv  
);  
  
```  
  
#### Parameters  
 `penv`  
 Pointer to an `fenv_t` object to contain a copy of the floating-point environment.  
  
## Return Value  
 Returns zero if and only if the function is able to successfully turn on non-stop floating-point        exception handling.  
  
## Remarks  
 The `feholdexcept` function is used to store the state of the current floating point environment in the `fenv_t` object pointed to by `penv`, and to set the environment to not interrupt execution on floating-point exceptions. This is known as non-stop mode.  This mode continues until the environment is restored using [fesetenv](http://msdn.microsoft.com/Library/a34b2705-0bd4-452e-a30f-eea3898d8183) or [feupdateenv](../../c-runtime-library/reference/feupdateenv.md).  
  
 You can use this function at the beginning of a subroutine that needs to hide one or more floating-point exceptions from the caller. To report an exception, you can simply clear  the unwanted exceptions by using [feclearexcept,](../../c-runtime-library/reference/feclearexcept1.md) and then end the non-stop mode with a call to `feupdateenv`.  
  
 To use this function, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [fenv_access](../../preprocessor/fenv-access.md).  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`feholdexcept`|\<fenv.h>|\<cfenv>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [feclearexcept](../../c-runtime-library/reference/feclearexcept1.md)   
 [fesetenv](http://msdn.microsoft.com/Library/a34b2705-0bd4-452e-a30f-eea3898d8183)   
 [feupdateenv](../../c-runtime-library/reference/feupdateenv.md)