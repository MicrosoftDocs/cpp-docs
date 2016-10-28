---
title: "unexpected (CRT)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "unexpected"
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
  - "unexpected"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "unexpected function"
ms.assetid: 2f873763-15ad-4556-a924-dcf28f2b52b4
caps.latest.revision: 10
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
# unexpected (CRT)
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
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 [System::Exception Class](https://msdn.microsoft.com/en-us/library/system.exception.aspx)  
  
## See Also  
 [Exception Handling Routines](../crt/exception-handling-routines.md)   
 [abort](../crt/abort.md)   
 [_set_se_translator](../crt/_set_se_translator.md)   
 [set_terminate](../crt/set_terminate--crt-.md)   
 [set_unexpected](../crt/set_unexpected--crt-.md)   
 [terminate](../crt/terminate--crt-.md)