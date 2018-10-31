---
title: "Conflicts with the x86 Compiler"
ms.date: "11/04/2016"
ms.assetid: 8e47f0d3-afe0-42d9-9efa-de239ddd3a05
---
# Conflicts with the x86 Compiler

Data types that are larger than 4 bytes are not automatically aligned on the stack when you use the x86 compiler to compile an application. Because the architecture for the x86 compiler is a 4 byte aligned stack, anything larger than 4 bytes, for example, a 64-bit integer, cannot be automatically aligned to an 8-byte address.

Working with unaligned data has two implications.

- It may take longer to access unaligned locations than it takes to access aligned locations.

- Unaligned locations cannot be used in interlocked operations.

If you require more strict alignment, use `__declspec(align(N)) on your variable declarations`. This causes the compiler to dynamically align the stack to meet your specifications. However, dynamically adjusting the stack at run time may cause slower execution of your application.

## See Also

[Types and Storage](../build/types-and-storage.md)<br/>
[align](../cpp/align-cpp.md)