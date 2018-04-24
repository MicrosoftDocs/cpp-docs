---
title: "_cexit, _c_exit | Microsoft Docs"
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
  - "_c_exit"
  - "_cexit"
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
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _cexit, _c_exit
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_cexit, _c_exit](https://docs.microsoft.com/cpp/c-runtime-library/reference/cexit-c-exit).  
  
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
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 [System::Diagnostics::Process::CloseMainWindow](https://msdn.microsoft.com/library/system.diagnostics.process.closemainwindow.aspx)  
  
## See Also  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [_onexit, _onexit_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)   
 [system, _wsystem](../../c-runtime-library/reference/system-wsystem.md)





