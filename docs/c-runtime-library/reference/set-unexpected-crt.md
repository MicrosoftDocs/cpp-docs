---
title: "set_unexpected (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "set_unexpected"
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
  - "set_unexpected"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "set_unexpected function"
  - "unexpected function"
  - "exception handling, termination"
ms.assetid: ebcef032-4771-48e5-88aa-2a1ab8750aa6
caps.latest.revision: 11
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
# set_unexpected (CRT)
Installs your own termination function to be called by `unexpected`.  
  
## Syntax  
  
```  
unexpected_function set_unexpected(  
   unexpected_function unexpFunction   
);  
```  
  
#### Parameters  
 `unexpFunction`  
 Pointer to a function that you write to replace the `unexpected` function.  
  
## Return Value  
 Returns a pointer to the previous termination function registered by `_set_unexpected` so that the previous function can be restored later. If no previous function has been set, the return value may be used to restore the default behavior; this value may be NULL.  
  
## Remarks  
 The `set_unexpected` function installs `unexpFunction` as the function called by `unexpected`. `unexpected` is not used in the current C++ exception-handling implementation. The `unexpected_function` type is defined in EH.H as a pointer to a user-defined unexpected function, `unexpFunction` that returns `void`. Your custom `unexpFunction` function should not return to its caller.  
  
```  
typedef void ( *unexpected_function )( );  
```  
  
 By default, `unexpected` calls `terminate`. You can change this default behavior by writing your own termination function and calling `set_unexpected` with the name of your function as its argument. `unexpected` calls the last function given as an argument to `set_unexpected`.  
  
 Unlike the custom termination function installed by a call to `set_terminate`, an exception can be thrown from within `unexpFunction`.  
  
 In a multithreaded environment, unexpected functions are maintained separately for each thread. Each new thread needs to install its own unexpected function. Thus, each thread is in charge of its own unexpected handling.  
  
 In the current Microsoft implementation of C++ exception handling, `unexpected` calls `terminate` by default and is never called by the exception-handling run-time library. There is no particular advantage to calling `unexpected` rather than `terminate`.  
  
 There is a single `set_unexpected` handler for all dynamically linked DLLs or EXEs; even if you call `set_unexpected` your handler may be replaced by another or that you are replacing a handler set by another DLL or EXE.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`set_unexpected`|\<eh.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [_get_unexpected](../../c-runtime-library/reference/get-unexpected.md)   
 [set_terminate](../../c-runtime-library/reference/set-terminate-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)