---
title: "longjmp | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "longjmp"
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
  - "longjmp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "restoring stack environment and execution locale"
  - "longjmp function"
ms.assetid: 0e13670a-5130-45c1-ad69-6862505b7a2f
caps.latest.revision: 9
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
# longjmp
Restores stack environment and execution locale.  
  
## Syntax  
  
```  
  
      void longjmp(  
   jmp_buf env,  
   int value   
);  
```  
  
#### Parameters  
 `env`  
 Variable in which environment is stored.  
  
 *value*  
 Value to be returned to `setjmp` call.  
  
## Remarks  
 The `longjmp` function restores a stack environment and execution locale previously saved in `env` by `setjmp`. `setjmp` and `longjmp` provide a way to execute a nonlocal `goto`; they are typically used to pass execution control to error-handling or recovery code in a previously called routine without using the normal call and return conventions.  
  
 A call to `setjmp` causes the current stack environment to be saved in `env`. A subsequent call to `longjmp` restores the saved environment and returns control to the point immediately following the corresponding `setjmp` call. Execution resumes as if *value* had just been returned by the `setjmp` call. The values of all variables (except register variables) that are accessible to the routine receiving control contain the values they had when `longjmp` was called. The values of register variables are unpredictable. The value returned by `setjmp` must be nonzero. If *value* is passed as 0, the value 1 is substituted in the actual return.  
  
 Call `longjmp` before the function that called `setjmp` returns; otherwise the results are unpredictable.  
  
 Observe the following restrictions when using `longjmp`:  
  
-   Do not assume that the values of the register variables will remain the same. The values of register variables in the routine calling `setjmp` may not be restored to the proper values after `longjmp` is executed.  
  
-   Do not use `longjmp` to transfer control out of an interrupt-handling routine unless the interrupt is caused by a floating-point exception. In this case, a program may return from an interrupt handler via `longjmp` if it first reinitializes the floating-point math package by calling `_fpreset`.  
  
     **Note** Be careful when using `setjmp` and `longjmp` in C++ programs. Because these functions do not support C++ object semantics, it is safer to use the C++ exception-handling mechanism.  
  
 For more information, see [Using setjmp and longjmp](../../cpp/using-setjmp-longjmp.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`longjmp`|\<setjmp.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## Example  
 See the example for [_fpreset](../../c-runtime-library/reference/fpreset.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)   
 [setjmp](../../c-runtime-library/reference/setjmp.md)