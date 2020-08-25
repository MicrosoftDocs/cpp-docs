---
title: "Timing of exception handling: A summary"
description: "The timing and order of execution of exception handling in Microsoft C++."
ms.date: 08/24/2020
helpviewer_keywords: ["sequence [C++]", "sequence, of handlers", "exception handling [C++], timing", "setjmpex.h", "termination handlers [C++], timing", "setjmp.h", "handlers [C++], order of exception", "structured exception handling [C++], timing"]
ms.assetid: 5d1da546-73fd-4673-aa1a-7ac0f776c420
---
# Timing of exception handling: A summary

A termination handler is executed no matter how the **`__try`** statement block is terminated. Causes include jumping out of the **`__try`** block, a `longjmp` statement that transfers control out of the block, and unwinding the stack due to exception handling.

> [!NOTE]
> The Microsoft C++ compiler supports two forms of the `setjmp` and `longjmp` statements. The fast version bypasses termination handling but is more efficient. To use this version, include the file \<setjmp.h>. The other version supports termination handling as described in the previous paragraph. To use this version, include the file \<setjmpex.h>. The increase in performance of the fast version depends on hardware configuration.

The operating system executes all termination handlers in the proper order before any other code can be executed, including the body of an exception handler.

When the cause for interruption is an exception, the system must first execute the filter portion of one or more exception handlers before deciding what to terminate. The order of events is:

1. An exception is raised.

1. The system looks at the hierarchy of active exception handlers and executes the filter of the handler with highest precedence. That's the exception handler most recently installed and most deeply nested, going by blocks and function calls.

1. If this filter passes control (returns 0), the process continues until a filter is found that doesn't pass control.

1. If this filter returns -1, execution continues where the exception was raised, and no termination takes place.

1. If the filter returns 1, the following events occur:

   - The system unwinds the stack: It clears all stack frames between where the exception was raised and the stack frame that contains the exception handler.

   - As the stack is unwound, each termination handler on the stack is executed.

   - The exception handler itself is executed.

   - Control passes to the line of code after the end of this exception handler.

## See also

[Writing a termination handler](../cpp/writing-a-termination-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
