---
title: "try-finally Statement | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__try"
  - "__leave_cpp"
  - "__leave"
  - "__finally_cpp"
  - "__try_cpp"
  - "__finally"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__try keyword [C++]"
  - "__finally keyword [C++]"
  - "__leave keyword [C++]"
  - "try-catch keyword [C++], try-finally keyword"
  - "try-finally keyword [C++]"
  - "__finally keyword [C++], try-finally statement syntax"
  - "__leave keyword [C++], try-finally statement"
  - "structured exception handling, try-finally"
ms.assetid: 826e0347-ddfe-4f6e-a7bc-0398e0edc7c2
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# try-finally Statement
**Microsoft Specific**  
  
 The following syntax describes the `try-finally` statement:  
  
```  
__try {  
   // guarded code  
}  
__finally {  
   // termination code  
}  
```  
  
## Grammar  
 *try-finally-statement*:  
 `__try` *compound-statement*  
  
 `__finally` *compound-statement*  
  
 The `try-finally` statement is a Microsoft extension to the C and C++ languages that enables target applications to guarantee execution of cleanup code when execution of a block of code is interrupted. Cleanup consists of such tasks as deallocating memory, closing files, and releasing file handles. The `try-finally` statement is especially useful for routines that have several places where a check is made for an error that could cause premature return from the routine.  
  
 For related information and a code sample, see [try-except Statement](../cpp/try-except-statement.md). For more information on structured exception handling in general, see [Structured Exception Handling](../cpp/structured-exception-handling-c-cpp.md). For more information on handling exceptions in managed applications, see [Exception Handling under /clr](../windows/exception-handling-cpp-component-extensions.md).  
  
> [!NOTE]
>  Structured exception handling works with Win32 for both C and C++ source files. However, it is not specifically designed for C++. You can ensure that your code is more portable by using C++ exception handling. Also, C++ exception handling is more flexible, in that it can handle exceptions of any type. For C++ programs, it is recommended that you use the C++ exception-handling mechanism ([try, catch, and throw](../cpp/try-throw-and-catch-statements-cpp.md) statements).  
  
 The compound statement after the `__try` clause is the guarded section. The compound statement after the `__finally` clause is the termination handler. The handler specifies a set of actions that execute when the guarded section is exited, regardless of whether the guarded section is exited by an exception (abnormal termination), or by standard fall through (normal termination).  
  
 Control reaches a `__try` statement by simple sequential execution (fall through). When control enters the `__try`, its associated handler becomes active. If the flow of control reaches the end of the try block, execution proceeds as follows:  
  
1.  The termination handler is invoked.  
  
2.  When the termination handler completes, execution continues after the `__finally` statement. Regardless of how the guarded section ends (for example, via a `goto` out of the guarded body or a `return` statement), the termination handler is executed `before` the flow of control moves out of the guarded section.  
  
     A **__finally** statement does not block searching for an appropriate exception handler.  
  
 If an exception occurs in the `__try` block, the operating system must find a handler for the exception or the program will fail. If a handler is found, any and all `__finally` blocks are executed and execution resumes in the handler.  
  
 For example, suppose a series of function calls links function A to function D, as shown in the following figure. Each function has one termination handler. If an exception is raised in function D and handled in A, the termination handlers are called in this order as the system unwinds the stack: D, C, B.  
  
 ![Order of termination&#45;handler execution](../cpp/media/vc38cx1.gif "vc38CX1")  
Order of Termination-Handler Execution  
  
> [!NOTE]
>  The behavior of try-finally is different from some other languages that support the use of **finally**, such as C#.  A single `__try` may have either, but not both, of `__finally` and `__except`.  If both are to be used together, an outer try-except statement must enclose the inner try-finally statement.  The rules specifying when each block executes are also different.  
  
## The __leave Keyword  
 The `__leave` keyword is valid only within the guarded section of a `try-finally` statement, and its effect is to jump to the end of the guarded section. Execution continues at the first statement in the termination handler.  
  
 A `goto` statement can also jump out of the guarded section, but it degrades performance because it invokes stack unwinding. The `__leave` statement is more efficient because it does not cause stack unwinding.  
  
## Abnormal Termination  
 Exiting a `try-finally` statement using the [longjmp](../c-runtime-library/reference/longjmp.md) run-time function is considered abnormal termination. It is illegal to jump into a `__try` statement, but legal to jump out of one. All `__finally` statements that are active between the point of departure (normal termination of the `__try` block) and the destination (the `__except` block that handles the exception) must be run. This is called a local unwind.  
  
 If a **try** block is prematurely terminated for any reason, including a jump out of the block, the system executes the associated **finally** block as a part of the process of unwinding the stack. In such cases, the [AbnormalTermination](http://msdn.microsoft.com/library/windows/desktop/ms679265) function returns TRUE if called from within the **finally** block; otherwise, it returns FALSE.  
  
 The termination handler is not called if a process is killed in the middle of executing a `try-finally` statement.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Writing a Termination Handler](../cpp/writing-a-termination-handler.md)   
 [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)   
 [Keywords](../cpp/keywords-cpp.md)   
 [Termination-Handler Syntax](http://msdn.microsoft.com/library/windows/desktop/ms681393)