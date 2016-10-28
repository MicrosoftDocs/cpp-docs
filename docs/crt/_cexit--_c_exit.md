---
title: "_cexit, _c_exit"
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
  - "_c_exit"
  - "_cexit"
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
  - "_cexit"
  - "c_exit"
  - "_c_exit"
  - "cexit"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "cleanup operations during processes"
  - "cexit function"
  - "_c_exit function"
  - "_cexit function"
  - "c_exit function"
ms.assetid: f3072045-9924-4b1a-9fef-b0dcd6d12663
caps.latest.revision: 12
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
# _cexit, _c_exit
Performs cleanup operations and returns without terminating the process.  
  
## Syntax  
  
```  
void _cexit( void );  
void _c_exit( void );  
```  
  
## Remarks  
 The `_cexit` function calls, in last-in, first-out (LIFO) order, the functions registered by `atexit` and `_onexit`. Then `_cexit` flushes all I/O buffers and closes all open streams before returning. `_c_exit` is the same as `_exit` but returns to the calling process without processing `atexit` or `_onexit` or flushing stream buffers. The behavior of `exit`,`_exit`, `_cexit`, and `_c_exit` is shown in the following table.  
  
|Function|Behavior|  
|--------------|--------------|  
|`exit`|Performs complete C library termination procedures, terminates process, and exits with supplied status code.|  
|`_exit`|Performs quick C library termination procedures, terminates process, and exits with supplied status code.|  
|`_cexit`|Performs complete C library termination procedures and returns to caller, but does not terminate process.|  
|`_c_exit`|Performs quick C library termination procedures and returns to caller, but does not terminate process.|  
  
 When you call the `_cexit` or `_c_exit` functions, the destructors for any temporary or automatic objects that exist at the time of the call are not called. An automatic object is an object that is defined in a function where the object is not declared to be static. A temporary object is an object created by the compiler. To destroy an automatic object before calling `_cexit` or `_c_exit`, explicitly call the destructor for the object, as follows:  
  
```  
myObject.myClass::~myClass( );  
```  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_cexit`|\<process.h>|  
|`_c_exit`|\<process.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 [System::Diagnostics::Process::CloseMainWindow](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.closemainwindow.aspx)  
  
## See Also  
 [Process and Environment Control](../crt/process-and-environment-control.md)   
 [abort](../crt/abort.md)   
 [atexit](../crt/atexit.md)   
 [_exec, _wexec Functions](../crt/_exec--_wexec-functions.md)   
 [exit, _Exit, _exit](../crt/exit--_exit--_exit.md)   
 [_onexit, _onexit_m](../crt/_onexit--_onexit_m.md)   
 [_spawn, _wspawn Functions](../crt/_spawn--_wspawn-functions.md)   
 [system, _wsystem](../crt/system--_wsystem.md)