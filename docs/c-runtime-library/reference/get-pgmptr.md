---
title: "_get_pgmptr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_get_pgmptr"
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
  - "get_pgmptr"
  - "_get_pgmptr"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "get_pgmptr function"
  - "_get_pgmptr function"
  - "pgmptr global variable"
  - "_pgmptr global variable"
ms.assetid: 29f16a9f-a685-4721-add3-7fad4f67eece
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
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
# _get_pgmptr
Gets the current value of the `_pgmptr`global variable.  
  
## Syntax  
  
```  
errno_t _get_pgmptr(   
   char **pValue   
);  
```  
  
#### Parameters  
 [out] `pValue`  
 A pointer to a string to be filled with the current value of the `_pgmptr` variable.  
  
## Return Value  
 Returns zero if successful; an error code on failure. If `pValue` is `NULL`, the invalid parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `EINVAL`.  
  
## Remarks  
 The `_pgmptr`global variable contains the full path to the executable associated with the process. For more information, see [_pgmptr, _wpgmptr](../../c-runtime-library/pgmptr-wpgmptr.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_pgmptr`|\<stdlib.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [_get_wpgmptr](../../c-runtime-library/reference/get-wpgmptr.md)