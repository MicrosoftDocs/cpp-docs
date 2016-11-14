---
title: "try-except Statement (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__except"
  - "try"
  - "__try"
  - "except"
  - "__except_cpp"
  - "__try_cpp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "try-except keyword [C]"
  - "structured exception handling, try-except"
  - "try-catch keyword [C]"
  - "__try keyword [C]"
  - "__except keyword [C]"
  - "__except keyword [C], in try-except"
  - "try-catch keyword [C], try-except keyword [C]"
ms.assetid: f76db9d1-fc78-417f-b71f-18e545fc01c3
caps.latest.revision: 8
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
# try-except Statement (C)
**Microsoft Specific**  
  
 The **try-except** statement is a Microsoft extension to the C language that enables applications to gain control of a program when events that normally terminate execution occur. Such events are called exceptions, and the mechanism that deals with exceptions is called structured exception handling.  
  
 Exceptions can be either hardware- or software-based. Even when applications cannot completely recover from hardware or software exceptions, structured exception handling makes it possible to display error information and trap the internal state of the application to help diagnose the problem. This is especially useful for intermittent problems that cannot be reproduced easily.  
  
## Syntax  
 *try-except-statement*:  
 **__try**  *compound-statement*  
  
 **__except (**  *expression*  **)**  *compound-statement*  
  
 The compound statement after the `__try` clause is the guarded section. The compound statement after the `__except` clause is the exception handler. The handler specifies a set of actions to be taken if an exception is raised during execution of the guarded section. Execution proceeds as follows:  
  
1.  The guarded section is executed.  
  
2.  If no exception occurs during execution of the guarded section, execution continues at the statement after the `__except` clause.  
  
3.  If an exception occurs during execution of the guarded section or in any routine the guarded section calls, the`__except` expression is evaluated and the value returned determines how the exception is handled. There are three values:  
  
     `EXCEPTION_CONTINUE_SEARCH` Exception is not recognized. Continue to search up the stack for a handler, first for containing **try-except** statements, then for handlers with the next highest precedence.  
  
     `EXCEPTION_CONTINUE_EXECUTION` Exception is recognized but dismissed. Continue execution at the point where the exception occurred.  
  
     `EXCEPTION_EXECUTE_HANDLER` Exception is recognized. Transfer control to the exception handler by executing the `__except` compound statement, then continue execution at the point the exception occurred.  
  
 Because the `__except` expression is evaluated as a C expression, it is limited to a single value, the conditional-expression operator, or the comma operator. If more extensive processing is required, the expression can call a routine that returns one of the three values listed above.  
  
> [!NOTE]
>  Structured exception handling works with C and C++ source files. However, it is not specifically designed for C++. You can ensure that your code is more portable by using C++ exception handling. Also, the C++ exception handling mechanism is much more flexible, in that it can handle exceptions of any type.  
  
> [!NOTE]
>  For C++ programs, C++ exception handling should be used instead of structured exception handling. For more information, see [Exception Handling](../cpp/exception-handling-in-visual-cpp.md) in the *C++ Language Reference*.  
  
 Each routine in an application can have its own exception handler. The `__except` expression executes in the scope of the `__try` body. This means it has access to any local variables declared there.  
  
 The `__leave` keyword is valid within a **try-except** statement block. The effect of `__leave` is to jump to the end of the **try-except** block. Execution resumes after the end of the exception handler. Although a `goto` statement can be used to accomplish the same result, a `goto` statement causes stack unwinding. The `__leave` statement is more efficient because it does not involve stack unwinding.  
  
 Exiting a **try-except** statement using the `longjmp` run-time function is considered abnormal termination. It is illegal to jump into a `__try` statement, but legal to jump out of one. The exception handler is not called if a process is killed in the middle of executing a **try-except** statement.  
  
## Example  
 Following is an example of an exception handler and a termination handler. See [The try-finally Statement](../c-language/try-finally-statement-c.md) for more information about termination handlers.  
  
```  
.  
.  
.  
puts("hello");  
__try{  
   puts("in try");  
   __try{  
      puts("in try");  
      RAISE_AN_EXCEPTION();  
   }__finally{  
      puts("in finally");  
   }  
}__except( puts("in filter"), EXCEPTION_EXECUTE_HANDLER ){  
   puts("in except");  
}  
puts("world");  
```  
  
 This is the output from the example, with commentary added on the right:  
  
```  
hello  
in try              /* fall into try                     */  
in try              /* fall into nested try                */  
in filter           /* execute filter; returns 1 so accept  */  
in finally          /* unwind nested finally                */  
in except           /* transfer control to selected handler */  
world               /* flow out of handler                  */  
```  
  
 **END Microsoft Specific**  
  
## See Also  
 [try-except Statement](../cpp/try-except-statement.md)