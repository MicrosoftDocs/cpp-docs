---
title: "Timing of Exception Handling: A Summary"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 5d1da546-73fd-4673-aa1a-7ac0f776c420
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Timing of Exception Handling: A Summary
A termination handler is executed no matter how the `__try` statement block is terminated. Causes include jumping out of the `__try` block, a `longjmp` statement that transfers control out of the block, and unwinding the stack due to exception handling.  
  
> [!NOTE]
>  Visual C++ supports two forms of the `setjmp` and `longjmp` statements. The fast version bypasses termination handling but is more efficient. To use this version, include the file SETJMP.H. The other version supports termination handling as described in the previous paragraph. To use this version, include the file SETJMPEX.H. The increase in performance of the fast version depends on hardware configuration.  
  
 The operating system executes all termination handlers in the proper order before any other code can be executed, including the body of an exception handler.  
  
 When the cause for interruption is an exception, the system must first execute the filter portion of one or more exception handlers before deciding what to terminate. The order of events is:  
  
1.  An exception is raised.  
  
2.  The system looks at the hierarchy of active exception handlers and executes the filter of the handler with highest precedence; this is the exception handler most recently installed and most deeply nested, in terms of blocks and function calls.  
  
3.  If this filter passes control (returns 0), the process continues until a filter is found that does not pass control.  
  
4.  If this filter returns –1, execution continues where the exception was raised, and no termination takes place.  
  
5.  If the filter returns 1, the following events occur:  
  
    -   The system unwinds the stack, clearing all stack frames between the currently executing code (where the exception was raised) and the stack frame that contains the exception handler gaining control.  
  
    -   As the stack is unwound, each termination handler on the stack is executed.  
  
    -   The exception handler itself is executed.  
  
    -   Control passes to the line of code after the end of this exception handler.  
  
## See Also  
 [Writing a Termination Handler](../VS_visualcpp/Writing-a-Termination-Handler.md)   
 [Structured Exception Handling (C/C++)](../VS_visualcpp/Structured-Exception-Handling--C-C---.md)