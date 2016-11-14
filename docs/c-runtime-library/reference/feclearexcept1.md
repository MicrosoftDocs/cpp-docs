---
title: "feclearexcept1 | Microsoft Docs"
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
  - "feclearexcept"
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
  - "feclearexcept"
  - "fenv/feclearexcept"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "feclearexcept function"
ms.assetid: ef419da3-c248-4432-b53c-8e7a475d9533
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
# feclearexcept
Attempts to clear the floating-point exception flags        specified by the argument.  
  
## Syntax  
  
```  
int feclearexcept(  
   int excepts  
);  
```  
  
#### Parameters  
 `excepts`  
 The exception status flags to clear.  
  
## Return Value  
 Returns zero if `excepts` is zero, or if all        the specified exceptions were successfully cleared. Otherwise, returns a nonzero value.  
  
## Remarks  
 The `feclearexcept` function attempts to clear the floating point exception status flags specified by `excepts`. The function supports these exception macros, defined in fenv.h:  
  
|Exception Macro|Description|  
|---------------------|-----------------|  
|FE_DIVBYZERO|A singularity or pole error occurred in an earlier floating-point operation; an infinity value was created.|  
|FE_INEXACT|The function was forced to round the stored result of an earlier floating-point operation.|  
|FE_INVALID|A domain error occurred in an earlier floating-point operation.|  
|FE_OVERFLOW|A range error occurred; an earlier floating-point operation result was too large to be represented.|  
|FE_UNDERFLOW|An earlier floating-point operation result was too small to be represented at full precision; a denormal value was created.|  
|FE_ALLEXCEPT|The bitwise OR of all supported floating-point exceptions.|  
  
 The `excepts` argument may be zero, or the bitwise OR of one or more of the supported exception macros. The result of any other argument value is undefined.  
  
## Requirements  
  
|Function|C header|C++ header|  
|--------------|--------------|------------------|  
|`feclearexcept`|\<fenv.h>|\<cfenv>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fetestexcept](../../c-runtime-library/reference/fetestexcept1.md)