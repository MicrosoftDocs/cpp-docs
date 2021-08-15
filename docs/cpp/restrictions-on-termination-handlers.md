---
title: "Restrictions on termination handlers"
description: "The restrictions on structured exception handling termination handlers."
ms.date: 08/24/2020
helpviewer_keywords: ["termination handlers [C++], limitations", "restrictions, termination handlers", "try-catch keyword [C++], termination handlers"]
ms.assetid: 8b1cb481-303f-4e79-b409-57a002a9fa9e
---
# Restrictions on Termination Handlers

You can't use a **`goto`** statement to jump into a **`__try`** statement block or a **`__finally`** statement block. Instead, you must enter the statement block through normal flow of control. (You can, however, jump out of a **`__try`** statement block.) Also, you can't nest an exception handler or termination handler inside a **`__finally`** block.

Some kinds of code permitted in a termination handler produce questionable results, so you should use them with caution, if at all. One is a **`goto`** statement that jumps out of a **`__finally`** statement block. If the block executes as part of normal termination, nothing unusual happens. But if the system is unwinding the stack, that unwinding stops. Then, the current function gains control as if there were no abnormal termination.

A **`return`** statement inside a **`__finally`** statement block presents roughly the same situation. Control returns to the immediate caller of the function that contains the termination handler. If the system was unwinding the stack, this process is halted. Then, the program proceeds as if no exception had been raised.

## See also

[Writing a termination handler](../cpp/writing-a-termination-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
