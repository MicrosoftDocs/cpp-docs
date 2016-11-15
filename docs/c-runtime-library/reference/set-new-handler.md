---
title: "_set_new_handler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_new_handler"
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
  - "_set_new_handler"
  - "set_new_handler"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_set_new_handler function"
  - "set_new_handler function"
  - "error handling"
  - "transferring control to error handler"
ms.assetid: 1d1781b6-5cf8-486a-b430-f365e0bb023f
caps.latest.revision: 17
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
# _set_new_handler
Transfers control to your error-handling mechanism if the `new` operator fails to allocate memory.  
  
## Syntax  
  
```  
_PNH _set_new_handler(  
   _PNH pNewHandler   
);  
```  
  
#### Parameters  
 `pNewHandler`  
 Pointer to the application-supplied memory handling function. An argument of 0 causes the new handler to be removed.  
  
## Return Value  
 Returns a pointer to the previous exception handling function registered by `_set_new_handler`, so that the previous function can be restored later. If no previous function has been set, the return value can be used to restore the default behavior; this value can be `NULL`.  
  
## Remarks  
 The C++ `_set_new_handler` function specifies an exception-handling function that gains control if the `new` operator fails to allocate memory. If `new` fails, the run-time system automatically calls the exception-handling function that was passed as an argument to `_set_new_handler`. `_PNH`, defined in New.h, is a pointer to a function that returns type `int` and takes an argument of type `size_t`. Use `size_t` to specify the amount of space to be allocated.  
  
 There is no default handler.  
  
 `_set_new_handler` is essentially a garbage-collection scheme. The run-time system retries allocation each time your function returns a nonzero value and fails if your function returns 0.  
  
 An occurrence of the `_set_new_handler` function in a program registers the exception-handling function specified in the argument list with the run-time system:  
  
```  
#include <new.h>  
int handle_program_memory_depletion( size_t )  
{  
   // Your code  
}  
int main( void )  
{  
   _set_new_handler( handle_program_memory_depletion );  
   int *pi = new int[BIG_NUMBER];  
}  
```  
  
 You can save the function address that was last passed to the `_set_new_handler` function and reinstate it later:  
  
```  
_PNH old_handler = _set_new_handler( my_handler );  
   // Code that requires my_handler  
   _set_new_handler( old_handler )  
   // Code that requires old_handler  
```  
  
 The C++ [_set_new_mode](../../c-runtime-library/reference/set-new-mode.md) function sets the new handler mode for [malloc](../../c-runtime-library/reference/malloc.md). The new handler mode indicates whether, on failure, `malloc` is to call the new handler routine as set by `_set_new_handler`. By default, `malloc` does not call the new handler routine on failure to allocate memory. You can override this default behavior so that, when `malloc` fails to allocate memory, `malloc` calls the new handler routine in the same way that the `new` operator does when it fails for the same reason. To override the default, call:  
  
```  
_set_new_mode(1)  
```  
  
 early in your program or link with Newmode.obj.  
  
 If a user-defined `operator new`is provided, the new handler functions are not automatically called on failure.  
  
 For more information, see [new](../../cpp/new-operator-cpp.md) and [delete](../../cpp/delete-operator-cpp.md) in the *C++ Language Reference*.  
  
 There is a single `_set_new_handler` handler for all dynamically linked DLLs or executables; even if you call `_set_new_handler` your handler might be replaced by another or that you are replacing a handler set by another DLL or executable.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_set_new_handler`|\<new.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 In this example, when the allocation fails, control is transferred to MyNewHandler. The argument passed to MyNewHandler is the number of bytes requested. The value returned from MyNewHandler is a flag indicating whether allocation should be retried: a nonzero value indicates that allocation should be retried, and a zero value indicates that allocation has failed.  
  
```  
// crt_set_new_handler.cpp  
// compile with: /c  
#include <stdio.h>  
#include <new.h>  
#define BIG_NUMBER 0x1fffffff  
  
int coalesced = 0;  
  
int CoalesceHeap()  
{  
   coalesced = 1;  // Flag RecurseAlloc to stop   
   // do some work to free memory  
   return 0;  
}  
// Define a function to be called if new fails to allocate memory.  
int MyNewHandler( size_t size )  
{  
   printf("Allocation failed. Coalescing heap.\n");  
  
   // Call a function to recover some heap space.  
   return CoalesceHeap();  
}  
  
int RecurseAlloc() {  
   int *pi = new int[BIG_NUMBER];  
   if (!coalesced)  
      RecurseAlloc();  
   return 0;  
}  
  
int main()  
{  
   // Set the failure handler for new to be MyNewHandler.  
   _set_new_handler( MyNewHandler );  
   RecurseAlloc();  
}  
```  
  
```Output  
Allocation failed. Coalescing heap.  
  
This application has requested the Runtime to terminate it in an unusual way.  
Please contact the application's support team for more information.  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)