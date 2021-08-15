---
title: "try-except statement (C)"
description: "Microsoft C/C++ implements Structured Exception Handling (SEH) using a try-except statement language extension."
ms.date: 08/24/2020
helpviewer_keywords: ["try-except keyword [C]", "structured exception handling, try-except", "try-catch keyword [C]", "__try keyword [C]", "__except keyword [C]", "__except keyword [C], in try-except", "try-catch keyword [C], try-except keyword [C]"]
ms.assetid: f76db9d1-fc78-417f-b71f-18e545fc01c3
---
# try-except statement (C)

**Microsoft-specific**

The `try-except` statement is a Microsoft extension to the C language that enables applications to gain control of a program when events that normally terminate execution occur. Such events are called exceptions, and the mechanism that deals with exceptions is called structured exception handling.

Exceptions may be either hardware- or software-based. Even when applications can't completely recover from hardware or software exceptions, structured exception handling makes it possible to log and display error information. It's useful to trap the internal state of the application to help diagnose the problem. In particular, it's helpful for intermittent problems that aren't easy to reproduce.

## Syntax

> *`try-except-statement`*:\
> &emsp;**`__try`** *`compound-statement`* **`__except (`**  *`expression`*  **`)`** *`compound-statement`*

The compound statement after the **`__try`** clause is the *guarded section*. The compound statement after the **`__except`** clause is the *exception handler*. The handler specifies a set of actions to take if an exception is raised during execution of the guarded section. Execution proceeds as follows:

1. The guarded section is executed.

1. If no exception occurs during execution of the guarded section, execution continues at the statement after the **`__except`** clause.

1. If an exception occurs during execution of the guarded section, or in any routine the guarded section calls, the **`__except`** expression gets evaluated. The value returned determines how the exception is handled. There are three possible values:

   - `EXCEPTION_CONTINUE_SEARCH`: The exception isn't recognized. Continue to search up the stack for a handler, first for containing `try-except` statements, then for handlers with the next highest precedence.

   - `EXCEPTION_CONTINUE_EXECUTION`: The exception is recognized but dismissed. Continue execution at the point where the exception occurred.

   - `EXCEPTION_EXECUTE_HANDLER` The exception is recognized. Transfer control to the exception handler by executing the **`__except`** compound statement, then continue execution at the point the exception occurred.

Because the **`__except`** expression is evaluated as a C expression, it's limited to either a single value, the conditional-expression operator, or the comma operator. If more extensive processing is required, the expression can call a routine that returns one of the three values listed above.

> [!NOTE]
> Structured exception handling works with C and C++ source files. However, it isn't specifically designed for C++. For portable C++ programs, C++ exception handling should be used instead of structured exception handling. Also, the C++ exception handling mechanism is much more flexible, in that it can handle exceptions of any type. For more information, see [Exception handling](../cpp/exception-handling-in-visual-cpp.md) in the *C++ Language Reference*.

Each routine in an application can have its own exception handler. The **`__except`** expression executes in the scope of the **`__try`** body. It has access to any local variables declared there.

The **`__leave`** keyword is valid within a `try-except` statement block. The effect of **`__leave`** is to jump to the end of the `try-except` block. Execution resumes after the end of the exception handler. Although a **`goto`** statement can be used to accomplish the same result, a **`goto`** statement causes stack unwinding. The **`__leave`** statement is more efficient because it doesn't involve stack unwinding.

Exiting a `try-except` statement using the `longjmp` run-time function is considered abnormal termination. It isn't legal to jump into a **`__try`** statement, but it's legal to jump out of one. The exception handler isn't called if a process is killed in the middle of executing a `try-except` statement.

## Example

Here's an example of an exception handler and a termination handler. For more information about termination handlers, see [`try-finally` statement (C)](../c-language/try-finally-statement-c.md).

```C
.
.
.
puts("hello");
__try {
   puts("in try");
   __try {
      puts("in try");
      RAISE_AN_EXCEPTION();
   } __finally {
      puts("in finally");
   }
} __except( puts("in filter"), EXCEPTION_EXECUTE_HANDLER ) {
   puts("in except");
}
puts("world");
```

Here's the output from the example, with commentary added on the right:

```Output
hello
in try              /* fall into try                        */
in try              /* fall into nested try                 */
in filter           /* execute filter; returns 1 so accept  */
in finally          /* unwind nested finally                */
in except           /* transfer control to selected handler */
world               /* flow out of handler                  */
```

**END Microsoft-specific**

## See also

[`try-except` statement (C++)](../cpp/try-except-statement.md)
