---
title: "_query_new_mode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_query_new_mode"
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
  - "api-ms-win-crt-heap-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "query_new_mode"
  - "_query_new_mode"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "query_new_mode function"
  - "handler modes"
  - "_query_new_mode function"
ms.assetid: e185c5f9-b73b-4257-8eff-b47648374768
caps.latest.revision: 10
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
# _query_new_mode
Returns an integer indicating the new handler mode set by `_set_new_mode` for `malloc`.  
  
## Syntax  
  
```  
  
      int _query_new_mode(  
   void   
);  
```  
  
## Return Value  
 Returns the current new handler mode, namely 0 or 1, for `malloc`. A return value of 1 indicates that, on failure to allocate memory, `malloc` calls the new handler routine; a return value of 0 indicates that it does not.  
  
## Remarks  
 The C++ `_query_new_mode` function returns an integer that indicates the new handler mode that is set by the C++ [_set_new_mode](../../c-runtime-library/reference/set-new-mode.md) function for [malloc](../../c-runtime-library/reference/malloc.md). The new handler mode indicates whether, on failure to allocate memory, `malloc` is to call the new handler routine as set by [_set_new_handler](../../c-runtime-library/reference/set-new-handler.md). By default, `malloc` does not call the new handler routine on failure. You can use `_set_new_mode` to override this behavior so that on failure `malloc` calls the new handler routine in the same way that the **new** operator does when it fails to allocate memory. For more information, see the discussion of the [new and delete operators](../../cpp/new-and-delete-operators.md) in the C++ Language Reference.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_query_new_mode`|\<new.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [_query_new_handler](../../c-runtime-library/reference/query-new-handler.md)