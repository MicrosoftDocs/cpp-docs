---
title: "Stack Usage (C++) - Visual Studio"
ms.date: "12/14/2018"
ms.assetid: 383f0072-0438-489f-8829-cca89582408c
---
# Stack Usage

All memory beyond the current address of RSP is considered volatile: The OS, or a debugger, may overwrite this memory during a user debug session, or an interrupt handler. Thus, RSP must always be set before attempting to read or write values to a stack frame.

This section discusses the allocation of stack space for local variables and the **alloca** intrinsic.

- [Stack Allocation](stack-allocation.md)

- [Dynamic Parameter Stack Area Construction](dynamic-parameter-stack-area-construction.md)

- [Function Types](function-types.md)

- [malloc Alignment](malloc-alignment.md)

- [alloca](alloca.md)

## See Also

[x64 Software Conventions](x64-software-conventions.md)