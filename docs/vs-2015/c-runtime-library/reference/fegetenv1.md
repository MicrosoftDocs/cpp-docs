---
title: "fegetenv1 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "fetegenv"
api_location: 
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
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "fegetenv"
  - "fenv/fegetenv"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "fetegenv function"
ms.assetid: 68962421-6978-4b27-8e4c-ad1577830cf6
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fegetenv
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [fegetenv1](https://docs.microsoft.com/cpp/c-runtime-library/reference/fegetenv1).  
  
Stores the current floating-point environment in the specified object.  
  
## Syntax  
  
```  
int fegetenv(  
   fenv_t *penv  
);  
  
```  
  
#### Parameters  
 `penv`  
 Pointer to an `fenv_t` object to contain the current floating-point environment values.  
  
## Return Value  
 Returns 0 if the floating-point environment was successfully stored in `penv`. Otherwise, returns a non-zero value.  
  
## Remarks  
 The `fegetenv` function stores the current floating-point environment in the object pointed to by `penv`. The floating point environment is the set of status flags and control modes that affect floating-point calculations. This includes the rounding direction mode and the status flags for floating-point exceptions.  If `penv` does not point to a valid `fenv_t` object, subsequent behavior is undefined.  
  
 To use this function, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [fenv_access](../../preprocessor/fenv-access.md).  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`fegetenv`|\<fenv.h>|\<cfenv>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fesetenv](../../c-runtime-library/reference/fesetenv1.md)





