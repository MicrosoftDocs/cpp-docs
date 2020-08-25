---
title: "try-finally statement (C)"
description: "Microsoft C/C++ implements Structured Exception Handling (SEH) using a try-finally statement language extension."
ms.date: 08/24/2020
helpviewer_keywords: ["try-finally keyword [C]", "__finally keyword [C], try-finally statement syntax", "__finally keyword [C]", "structured exception handling, try-finally"]
ms.assetid: 514400c1-c322-4bf3-9e48-3047240b8a82
---
# try-finally statement (C)

**Microsoft-specific**

The `try-finally` statement is a Microsoft extension to the C language that enables applications to guarantee execution of cleanup code when execution of a block of code is interrupted. Cleanup consists of such tasks as deallocating memory, closing files, and releasing file handles. The `try-finally` statement is especially useful for routines that have several places where a check is made for an error that could cause premature return from the routine.

> *`try-finally-statement`*:\
> &emsp;**`__try`** *`compound-statement`* **`__finally`** *`compound-statement`*

The compound statement after the **`__try`** clause is the guarded section. The compound statement after the **`__finally`** clause is the termination handler. The handler specifies a set of actions that execute when the guarded section is exited. It doesn't matter whether the guarded section is exited by an exception (abnormal termination) or by standard fall through (normal termination).

Control reaches a **`__try`** statement by simple sequential execution (fall through). When control enters the **`__try`** statement, its associated handler becomes active. Execution proceeds as follows:

1. The guarded section is executed.

1. The termination handler is invoked.

1. When the termination handler completes, execution continues after the **`__finally`** statement. No matter how the guarded section ends (for example, via a **`goto`** statement out of the guarded body or via a **`return`** statement), the termination handler is executed before the flow of control moves out of the guarded section.

The **`__leave`** keyword is valid within a `try-finally` statement block. The effect of **`__leave`** is to jump to the end of the `try-finally` block. The termination handler is immediately executed. Although a **`goto`** statement can be used to accomplish the same result, a **`goto`** statement causes stack unwinding. The **`__leave`** statement is more efficient because it doesn't involve stack unwinding.

Exiting a `try-finally` statement using a **`return`** statement or the `longjmp` run-time function is considered abnormal termination. It's not legal to jump into a **`__try`** statement, but legal to jump out of one. All **`__finally`** statements that are active between the point of departure and the destination must be run. It's called a *local unwind*.

The termination handler isn't called if a process is killed while executing a `try-finally` statement.

> [!NOTE]
> Structured exception handling works with C and C++ source files. However, it isn't specifically designed for C++. For portable C++ programs, C++ exception handling should be used instead of structured exception handling. Also, the C++ exception handling mechanism is much more flexible, in that it can handle exceptions of any type. For more information, see [Exception handling](../cpp/exception-handling-in-visual-cpp.md) in the *C++ Language Reference*.

See the example for the [`try-except` statement](../c-language/try-except-statement-c.md) to see how the `try-finally` statement works.

**END Microsoft-specific**

## See also

[`try-finally` statement (C++)](../cpp/try-finally-statement.md)
