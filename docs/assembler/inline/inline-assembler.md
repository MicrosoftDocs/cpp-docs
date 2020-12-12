---
description: "Learn more about: Inline Assembler"
title: "Inline Assembler"
ms.date: "08/30/2018"
helpviewer_keywords: ["assembler [C++]", "assembler [C++], inline", "assembly language [C++], inline", "inline assembler [C++]", "inline assembly [C++]"]
ms.assetid: 7e13f18f-3628-4306-8b81-4a6d09c043fe
---
# Inline Assembler

**Microsoft Specific**

Assembly language serves many purposes, such as improving program speed, reducing memory needs, and controlling hardware. You can use the inline assembler to embed assembly-language instructions directly in your C and C++ source programs without extra assembly and link steps. The inline assembler is built into the compiler, so you don't need a separate assembler such as the Microsoft Macro Assembler (MASM).

> [!NOTE]
> Programs with inline assembler code are not fully portable to other hardware platforms. If you are designing for portability, avoid using inline assembler.

Inline assembly is not supported on the ARM and x64 processors.  The following topics explain how to use the Visual C/C++ inline assembler with x86 processors:

- [Inline Assembler Overview](../../assembler/inline/inline-assembler-overview.md)

- [Advantages of Inline Assembly](../../assembler/inline/advantages-of-inline-assembly.md)

- [__asm](../../assembler/inline/asm.md)

- [Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)

- [Using C or C++ in __asm Blocks](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)

- [Using and Preserving Registers in Inline Assembly](../../assembler/inline/using-and-preserving-registers-in-inline-assembly.md)

- [Jumping to Labels in Inline Assembly](../../assembler/inline/jumping-to-labels-in-inline-assembly.md)

- [Calling C Functions in Inline Assembly](../../assembler/inline/calling-c-functions-in-inline-assembly.md)

- [Calling C++ Functions in Inline Assembly](../../assembler/inline/calling-cpp-functions-in-inline-assembly.md)

- [Defining __asm Blocks as C Macros](../../assembler/inline/defining-asm-blocks-as-c-macros.md)

- [Optimizing Inline Assembly](../../assembler/inline/optimizing-inline-assembly.md)

**END Microsoft Specific**

## See also

[Compiler Intrinsics and Assembly Language](../../intrinsics/compiler-intrinsics-and-assembly-language.md)<br/>
[C++ Language Reference](../../cpp/cpp-language-reference.md)<br/>
