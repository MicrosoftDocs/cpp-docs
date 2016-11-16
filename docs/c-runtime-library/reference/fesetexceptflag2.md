---
title: "fesetexceptflag2 | Microsoft Docs"
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
  - "fesetexceptflag"
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
  - "fesetexceptflag"
  - "fenv/fesetexceptflag"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "fesetexceptflag function"
ms.assetid: 2f7dad77-9e54-4097-a3e3-35176ace4de5
caps.latest.revision: 7
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
# fesetexceptflag
Sets the specified floating-point status flags in the current floating-point environment.  
  
## Syntax  
  
```  
int fesetexceptflag(  
     const fexcept_t *pstatus,  
     int excepts  
);  
  
```  
  
#### Parameters  
 `pstatus`  
 Pointer to an  `fexcept_t` object containing the values to set the exception status flags to. The object may be set by a previous call to [fegetexceptflag](http://msdn.microsoft.com/Library/5031bc1a-9834-4573-9113-160a55eb9654).  
  
 `excepts`  
 The floating-point exception status flags to set.  
  
## Return Value  
 If all the specified exception status flags are set successfully, returns 0. Otherwise, returns     a nonzero value.  
  
## Remarks  
 The `fesetexceptflag` function sets the state of the floating-point exception status flags specified by `excepts` to the corresponding values set in the `fexcept_t` object pointed to by `pstatus`.  It does not raise the exceptions. The `pstatus` pointer must point to a valid `fexcept_t` object, or subsequent behavior is undefined. The `fesetexceptflag` function supports these exception macro values in `excepts`, defined in \<fenv.h>:  
  
|Exception Macro|Description|  
|---------------------|-----------------|  
|FE_DIVBYZERO|A singularity or pole error occurred in an earlier floating-point operation; an infinity value was created.|  
|FE_INEXACT|The function was forced to round the stored result of an earlier floating-point operation.|  
|FE_INVALID|A domain error occurred in an earlier floating-point operation.|  
|FE_OVERFLOW|A range error occurred; an earlier floating-point operation result was too large to be represented.|  
|FE_UNDERFLOW|An earlier floating-point operation result was too small to be represented at full precision; a denormal value was created.|  
|FE_ALLEXCEPT|The bitwise OR of all supported floating-point exceptions.|  
  
 The `excepts` argument may be zero, one of the supported floating-point exception macros, or the bitwise OR of two or more of the macros. The effect of any other argument value is undefined.  
  
 To use this function, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [fenv_access](../../preprocessor/fenv-access.md).  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`fesetexceptflag`|\<fenv.h>|\<cfenv>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fegetexceptflag](../../c-runtime-library/reference/fegetexceptflag2.md)