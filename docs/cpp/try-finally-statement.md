---
title: "try-finally statement"
description: "The Microsoft C++ reference to the __try and __finally structured exception handling statements."
ms.date: 08/25/2020
f1_keywords: ["__try", "_try", "__leave_cpp", "__leave", "__finally_cpp", "__try_cpp", "__finally", "_finally"]
helpviewer_keywords: ["__try keyword [C++]", "__finally keyword [C++]", "__leave keyword [C++]", "try-catch keyword [C++], try-finally keyword", "try-finally keyword [C++]", "__finally keyword [C++], try-finally statement syntax", "__leave keyword [C++], try-finally statement", "structured exception handling [C++], try-finally"]
---
# `try-finally` statement

The `try-finally` statement is a **Microsoft-specific** extension that supports structured exception handling in the C and C++ languages.

## Syntax

The following syntax describes the `try-finally` statement:

```cpp
    // . . .
    __try {
        // guarded code
    }
    __finally {
        // termination code
    }
    // . . .
```

## Grammar

> *`try-finally-statement`*:\
> &emsp;**`__try`** *`compound-statement`* **`__finally`** *`compound-statement`*

The `try-finally` statement is a Microsoft extension to the C and C++ languages that enable target applications to guarantee execution of cleanup code when execution of a block of code is interrupted. Cleanup consists of such tasks as deallocating memory, closing files, and releasing file handles. The `try-finally` statement is especially useful for routines that have several places where a check is made for an error that could cause premature return from the routine.

For related information and a code sample, see [`try-except` Statement](../cpp/try-except-statement.md). For more information on structured exception handling in general, see [Structured Exception Handling](../cpp/structured-exception-handling-c-cpp.md). For more information on handling exceptions in managed applications with C++/CLI, see [Exception Handling under `/clr`](../extensions/exception-handling-cpp-component-extensions.md).

> [!NOTE]
> Structured exception handling works with Win32 for both C and C++ source files. However, it is not specifically designed for C++. You can ensure that your code is more portable by using C++ exception handling. Also, C++ exception handling is more flexible, in that it can handle exceptions of any type. For C++ programs, it is recommended that you use the C++ exception-handling mechanism ([`try`, `catch`, and `throw`](../cpp/try-throw-and-catch-statements-cpp.md) statements).

The compound statement after the **`__try`** clause is the guarded section. The compound statement after the **`__finally`** clause is the termination handler. The handler specifies a set of actions that execute when the guarded section is exited, whether it exits the guarded section by an exception (abnormal termination), or by standard fall through (normal termination).

Control reaches a **`__try`** statement by simple sequential execution (fall through). When control enters the **`__try`**, its associated handler becomes active. If the flow of control reaches the end of the try block, execution proceeds as follows:

1. The termination handler is invoked.

1. When the termination handler completes, execution continues after the **`__finally`** statement. However the guarded section ends (for example, via a **`goto`** out of the guarded body or a **`return`** statement), the termination handler is executed *before* the flow of control moves out of the guarded section.

   A **`__finally`** statement doesn't block searching for an appropriate exception handler.

If an exception occurs in the **`__try`** block, the operating system must find a handler for the exception, or the program will fail. If a handler is found, any and all **`__finally`** blocks are executed and execution resumes in the handler.

For example, suppose a series of function calls links function A to function D, as shown in the following figure. Each function has one termination handler. If an exception is raised in function D and handled in A, the termination handlers are called in this order as the system unwinds the stack: D, C, B.

:::image type="complex" source="../cpp/media/vc38cx1.gif" alt-text="Diagram of the order of termination handler execution.":::
The diagram starts with function A, which calls function B, which calls function C, which calls function D. Function D raises an exception. The termination handlers are then called in this order: D's termination handler, then C's, then B's, and then A handles the exception.
:::image-end:::
*Order of termination-handler execution*

> [!NOTE]
> The behavior of try-finally is different from some other languages that support the use of **`finally`**, such as C#.  A single **`__try`** may have either, but not both, of **`__finally`** and **`__except`**.  If both are to be used together, an outer try-except statement must enclose the inner try-finally statement.  The rules specifying when each block executes are also different.

For compatibility with previous versions, **`_try`**, **`_finally`**, and **`_leave`** are synonyms for **`__try`**, **`__finally`**, and **`__leave`** unless compiler option [`/Za` (Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

## The __leave Keyword

The **`__leave`** keyword is valid only within the guarded section of a `try-finally` statement, and its effect is to jump to the end of the guarded section. Execution continues at the first statement in the termination handler.

A **`goto`** statement can also jump out of the guarded section, but it degrades performance because it invokes stack unwinding. The **`__leave`** statement is more efficient because it doesn't cause stack unwinding.

## Abnormal Termination

Exiting a `try-finally` statement using the [longjmp](../c-runtime-library/reference/longjmp.md) run-time function is considered abnormal termination. It isn't legal to jump into a **`__try`** statement, but it's legal to jump out of one. All **`__finally`** statements that are active between the point of departure (normal termination of the **`__try`** block) and the destination (the **`__except`** block that handles the exception) must be run. It's called a *local unwind*.

If a **`__try`** block is prematurely terminated for any reason, including a jump out of the block, the system executes the associated **`__finally`** block as a part of the process of unwinding the stack. In such cases, the [`AbnormalTermination`](/windows/win32/Debug/abnormaltermination) function returns **`true`** if called from within the **`__finally`** block; otherwise, it returns **`false`**.

The termination handler isn't called if a process is killed in the middle of executing a `try-finally` statement.

**END Microsoft-specific**

## See also

[Writing a termination handler](../cpp/writing-a-termination-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[Termination-handler syntax](/windows/win32/Debug/termination-handler-syntax)
