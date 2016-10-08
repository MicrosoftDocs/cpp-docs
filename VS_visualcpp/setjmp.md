---
title: "setjmp"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - setjmp
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
apitype: DLLExport
ms.assetid: 684a8b27-e8eb-455b-b4a8-733ca1cbd7d2
caps.latest.revision: 12
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# setjmp
Saves the current state of the program.  
  
## Syntax  
  
```  
int setjmp(  
   jmp_buf env   
);  
```  
  
#### Parameters  
 `env`  
 Variable in which environment is stored.  
  
## Return Value  
 Returns 0 after saving the stack environment. If `setjmp` returns as a result of a `longjmp` call, it returns the `value` argument of `longjmp`, or if the `value` argument of `longjmp` is 0, `setjmp` returns 1. There is no error return.  
  
## Remarks  
 The `setjmp` function saves a stack environment, which you can subsequently restore, using `longjmp`. When used together, `setjmp` and `longjmp` provide a way to execute a non-local `goto`. They are typically used to pass execution control to error-handling or recovery code in a previously called routine without using the normal calling or return conventions.  
  
 A call to `setjmp` saves the current stack environment in `env`. A subsequent call to `longjmp` restores the saved environment and returns control to the point just after the corresponding `setjmp` call. All variables (except register variables) accessible to the routine receiving control contain the values they had when `longjmp` was called.  
  
 It is not possible to use `setjmp` to jump from native to managed code.  
  
 **Note** `setjmp` and `longjmp` do not support C++ object semantics. In C++ programs, use the C++ exception-handling mechanism.  
  
 For more information, see [Using setjmp and longjmp](../VS_visualcpp/Using-setjmp-longjmp.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`setjmp`|<setjmp.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
 See the example for [_fpreset](../VS_visualcpp/_fpreset.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Process and Environment Control](../VS_visualcpp/Process-and-Environment-Control.md)   
 [longjmp](../VS_visualcpp/longjmp.md)   
 [_setjmp3](../VS_visualcpp/_setjmp3.md)