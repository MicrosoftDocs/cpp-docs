---
description: "Learn more about: Writing a Termination Handler"
title: "Writing a Termination Handler"
ms.date: "11/04/2016"
helpviewer_keywords: ["structured exception handling [C++], termination handlers", "exceptions [C++], terminating", "termination handlers [C++], writing", "handlers [C++]", "handlers [C++], termination", "termination handlers", "exception handling [C++], termination handlers", "try-catch keyword [C++], termination handlers"]
ms.assetid: 52aa1f8f-f8dd-44b8-be94-5e2fc88d44fb
---
# Writing a Termination Handler

Unlike an exception handler, a termination handler is always executed, regardless of whether the protected block of code terminated normally. The sole purpose of the termination handler should be to ensure that resources, such as memory, handles, and files, are properly closed regardless of how a section of code finishes executing.

Termination handlers use the try-finally statement.

## What do you want to know more about?

- [The try-finally statement](../cpp/try-finally-statement.md)

- [Cleaning up resources](../cpp/cleaning-up-resources.md)

- [Timing of actions in exception handling](../cpp/timing-of-exception-handling-a-summary.md)

- [Restrictions on termination handlers](../cpp/restrictions-on-termination-handlers.md)

## See also

[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
