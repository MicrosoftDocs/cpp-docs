---
title: "atexit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "atexit"
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
  - "atexit"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "processing, at exit"
  - "atexit function"
ms.assetid: 92c156d2-8052-4e58-96dc-00128baac6f9
caps.latest.revision: 12
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
# atexit
Processes the specified function at exit.  
  
## Syntax  
  
```  
int atexit(  
   void (__cdecl *func )( void )  
);  
```  
  
#### Parameters  
 `func`  
 Function to be called.  
  
## Return Value  
 `atexit` returns 0 if successful, or a nonzero value if an error occurs.  
  
## Remarks  
 The `atexit` function is passed the address of a function (`func`) to be called when the program terminates normally. Successive calls to `atexit` create a register of functions that are executed in last-in, first-out (LIFO) order. The functions passed to `atexit` cannot take parameters. `atexit` and `_onexit` use the heap to hold the register of functions. Thus, the number of functions that can be registered is limited only by heap memory.  
  
 The code in the `atexit` function should not contain any dependency on any DLL which could have already been unloaded when the `atexit` function is called.  
  
 To generate an ANSI-compliant application, use the ANSI-standard `atexit` function (rather than the similar `_onexit` function).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`atexit`|\<stdlib.h>|  
  
## Example  
 This program pushes four functions onto the stack of functions to be executed when `atexit` is called. When the program exits, these programs are executed on a last in, first out basis.  
  
```  
// crt_atexit.c  
#include <stdlib.h>  
#include <stdio.h>  
  
void fn1( void ), fn2( void ), fn3( void ), fn4( void );  
  
int main( void )  
{  
   atexit( fn1 );  
   atexit( fn2 );  
   atexit( fn3 );  
   atexit( fn4 );  
   printf( "This is executed first.\n" );  
}  
  
void fn1()  
{  
   printf( "next.\n" );  
}  
  
void fn2()  
{  
   printf( "executed " );  
}  
  
void fn3()  
{  
   printf( "is " );  
}  
  
void fn4()  
{  
   printf( "This " );  
}  
```  
  
```Output  
This is executed first.  
This is executed next.  
```  
  
## .NET Framework Equivalent  
 [System::Diagnostics::Process::Exited](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.exited.aspx)  
  
## See Also  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [_onexit, _onexit_m](../../c-runtime-library/reference/onexit-onexit-m.md)