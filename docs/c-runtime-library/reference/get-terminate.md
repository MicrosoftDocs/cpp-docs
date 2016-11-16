---
title: "_get_terminate | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_get_terminate"
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
caps.latest.revision: 8
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
# _get_terminate
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
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [set_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)