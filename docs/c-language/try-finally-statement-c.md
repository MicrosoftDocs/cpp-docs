---
title: "try-finally Statement (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "try_cpp"
  - "try"
  - "finally"
  - "finally_cpp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "try-catch keyword [C], try-finally keyword [C]"
  - "__finally keyword [C], try-finally statement syntax"
  - "try-finally keyword [C]"
  - "__finally keyword [C]"
  - "try-catch keyword [C]"
  - "structured exception handling, try-finally"
ms.assetid: 514400c1-c322-4bf3-9e48-3047240b8a82
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
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
# try-finally Statement (C)
**Microsoft Specific**  
  
 The `try-finally` statement is a Microsoft extension to the C language that enables applications to guarantee execution of cleanup code when execution of a block of code is interrupted. Cleanup consists of such tasks as deallocating memory, closing files, and releasing file handles. The `try-finally` statement is especially useful for routines that have several places where a check is made for an error that could cause premature return from the routine.  
  
 *try-finally-statement*:  
 **__try**  *compound-statement*  
  
 **__finally**  *compound-statement*  
  
 The compound statement after the `__try` clause is the guarded section. The compound statement after the `__finally` clause is the termination handler. The handler specifies a set of actions that execute when the guarded section is exited, whether the guarded section is exited by an exception (abnormal termination) or by standard fall through (normal termination).  
  
 Control reaches a `__try` statement by simple sequential execution (fall through). When control enters the `__try` statement, its associated handler becomes active. Execution proceeds as follows:  
  
1.  The guarded section is executed.  
  
2.  The termination handler is invoked.  
  
3.  When the termination handler completes, execution continues after the `__finally` statement. Regardless of how the guarded section ends (for example, via a `goto` statement out of the guarded body or via a `return` statement), the termination handler is executed before the flow of control moves out of the guarded section.  
  
 The `__leave` keyword is valid within a `try-finally` statement block. The effect of `__leave` is to jump to the end of the `try-finally` block. The termination handler is immediately executed. Although a `goto` statement can be used to accomplish the same result, a `goto` statement causes stack unwinding. The `__leave` statement is more efficient because it does not involve stack unwinding.  
  
 Exiting a `try-finally` statement using a `return` statement or the `longjmp` run-time function is considered abnormal termination. It is illegal to jump into a `__try` statement, but legal to jump out of one. All `__finally` statements that are active between the point of departure and the destination must be run. This is called a "local unwind."  
  
 The termination handler is not called if a process is killed while executing a `try-finally` statement.  
  
> [!NOTE]
>  Structured exception handling works with C and C++ source files. However, it is not specifically designed for C++. You can ensure that your code is more portable by using C++ exception handling. Also, the C++ exception handling mechanism is much more flexible, in that it can handle exceptions of any type.  
  
> [!NOTE]
>  For C++ programs, C++ exception handling should be used instead of structured exception handling. For more information, see [Exception Handling](../cpp/exception-handling-in-visual-cpp.md) in the *C++ Language Reference*.  
  
 See the example for the [try-except statement](../c-language/try-except-statement-c.md) to see how the `try-finally` statement works.  
  
 **END Microsoft Specific**  
  
## See Also  
 [try-finally Statement](../cpp/try-finally-statement.md)