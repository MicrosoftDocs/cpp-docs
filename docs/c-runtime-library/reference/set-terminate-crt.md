---
title: "set_terminate (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "set_terminate"
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
  - "set_terminate"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "set_terminate function"
  - "terminate function"
  - "exception handling, termination"
ms.assetid: 3ff1456a-7898-44bc-9266-a328a80b6006
caps.latest.revision: 13
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
# set_terminate (CRT)
Installs your own termination routine to be called by `terminate`.  
  
## Syntax  
  
```  
terminate_function set_terminate(  
   terminate_function termFunction  
);  
```  
  
#### Parameters  
 `termFunction`  
 Pointer to a terminate function that you write.  
  
## Return Value  
 Returns a pointer to the previous function registered by `set_terminate` so that the previous function can be restored later. If no previous function has been set, the return value may be used to restore the default behavior; this value may be NULL.  
  
## Remarks  
 The `set_terminate` function installs `termFunction` as the function called by `terminate`. `set_terminate` is used with C++ exception handling and may be called at any point in your program before the exception is thrown. `terminate` calls `abort` by default. You can change this default by writing your own termination function and calling `set_terminate` with the name of your function as its argument. `terminate` calls the last function given as an argument to `set_terminate`. After performing any desired cleanup tasks, `termFunction` should exit the program. If it does not exit (if it returns to its caller), `abort` is called.  
  
 In a multithreaded environment, terminate functions are maintained separately for each thread. Each new thread needs to install its own terminate function. Thus, each thread is in charge of its own termination handling.  
  
 The `terminate_function` type is defined in EH.H as a pointer to a user-defined termination function, `termFunction` that returns `void`. Your custom function `termFunction` can take no arguments and should not return to its caller. If it does, `abort` is called. An exception may not be thrown from within `termFunction`.  
  
```  
typedef void ( *terminate_function )( );  
```  
  
> [!NOTE]
>  The `set_terminate` function only works outside the debugger.  
  
 There is a single `set_terminate` handler for all dynamically linked DLLs or EXEs; even if you call `set_terminate` your handler may be replaced by another, or you may be replacing a handler set by another DLL or EXE.  
  
 This function is not supported under **/clr:pure**.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`set_terminate`|\<eh.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 See the example for [terminate](../../c-runtime-library/reference/terminate-crt.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [_get_terminate](../../c-runtime-library/reference/get-terminate.md)   
 [set_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)