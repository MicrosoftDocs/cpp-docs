---
title: "unexpected (CRT) | Microsoft Docs"
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
  - "unexpected"
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
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "unexpected"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "unexpected function"
ms.assetid: 2f873763-15ad-4556-a924-dcf28f2b52b4
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# unexpected (CRT)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [unexpected (CRT)](https://docs.microsoft.com/cpp/c-runtime-library/reference/unexpected-crt).  
  
Calls `terminate` or function you specify using `set_unexpected`.  
  
## Syntax  
  
```  
void unexpected( void );  
```  
  
## Remarks  
 The `unexpected` routine is not used with the current implementation of C++ exception handling. `unexpected` calls `terminate` by default. You can change this default behavior by writing a custom termination function and calling `set_unexpected` with the name of your function as its argument. `unexpected` calls the last function given as an argument to `set_unexpected`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`unexpected`|\<eh.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 [System::Exception Class](https://msdn.microsoft.com/library/system.exception.aspx)  
  
## See Also  
 [Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [_set_se_translator](../../c-runtime-library/reference/set-se-translator.md)   
 [set_terminate](../../c-runtime-library/reference/set-terminate-crt.md)   
 [set_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)





