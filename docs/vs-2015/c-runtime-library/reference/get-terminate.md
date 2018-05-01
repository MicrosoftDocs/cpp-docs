---
title: "_get_terminate | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_get_terminate"
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
  - "get_terminate"
  - "_get_terminate"
  - "__get_terminate"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__get_terminate function"
  - "get_terminate function"
  - "_get_terminate function"
ms.assetid: c8f168c4-0ad5-4832-a522-dd1ef383c208
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _get_terminate
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_get_terminate](https://docs.microsoft.com/cpp/c-runtime-library/reference/get-terminate).  
  
Returns the termination routine to be called by `terminate`.  
  
## Syntax  
  
```  
terminate_function _get_terminate( void );  
```  
  
## Return Value  
 Returns a pointer to the function registered by [set_terminate](../../c-runtime-library/reference/set-terminate-crt.md). If no function has been set, the return value may be used to restore the default behavior; this value may be NULL.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_terminate`|\<eh.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`.  
  
## See Also  
 [Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [set_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)





