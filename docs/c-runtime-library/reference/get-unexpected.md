---
title: "_get_unexpected | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-standard-libraries"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_get_unexpected"
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
apitype: "DLLExport"
f1_keywords: 
  - "__get_unexpected"
  - "_get_unexpected"
  - "get_unexpected"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__get_unexpected function"
  - "get_unexpected function"
  - "_get_unexpected function"
ms.assetid: a5f7a7a0-18e0-485e-953d-db291068a1e8
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
# _get_unexpected
Returns the termination routine to be called by `unexpected`.  
  
## Syntax  
  
```  
unexpected_function _get_unexpected( void );  
```  
  
## Return Value  
 Returns a pointer to the function registered by [set_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md). If no function has been set, the return value may be used to restore the default behavior; this value may be NULL.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_unexpected`|\<eh.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## See Also  
 [Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [set_terminate](../../c-runtime-library/reference/set-terminate-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)