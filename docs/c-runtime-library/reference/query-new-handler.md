---
title: "_query_new_handler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_query_new_handler"
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
  - "_query_new_handler"
  - "query_new_handler"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "query_new_handler function"
  - "handler routines"
  - "error handling"
  - "_query_new_handler function"
ms.assetid: 9a84b5c3-fe33-4c01-83a0-be87dc3ec518
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
# _query_new_handler
Returns the address of the current new handler routine.  
  
## Syntax  
  
```  
_PNH _query_new_handler(  
   void   
);  
```  
  
## Return Value  
 Returns the address of the current new handler routine as set by `_set_new_handler`.  
  
## Remarks  
 The C++ `_query_new_handler` function returns the address of the current exception-handling function set by the C++ [_set_new_handler](../../c-runtime-library/reference/set-new-handler.md) function. `_set_new_handler` is used to specify an exception-handling function that is to gain control if the **new** operator fails to allocate memory. For more information, see the discussion of the [new and delete operators](../../cpp/new-and-delete-operators.md) in the C++ Language Reference.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_query_new_handler`|\<new.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)   
 [free](../../c-runtime-library/reference/free.md)