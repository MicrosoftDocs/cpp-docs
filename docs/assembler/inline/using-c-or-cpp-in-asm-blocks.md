---
description: "Learn more about: Using C or C++ in __asm Blocks"
title: "Using C or C++ in __asm Blocks"
ms.date: "08/30/2018"
helpviewer_keywords: ["inline assembly, mixing instructions with C/C++ statements", "symbols, in __asm blocks", "macros, __asm blocks", "preprocessor directives, used in __asm blocks", "type names, used in __asm blocks", "preprocessor directives", "preprocessor, directives", "constants, in __asm blocks", "comments, in __asm blocks", "typedef names, used in __asm blocks", "__asm keyword [C++], C/C++ elements in"]
ms.assetid: ae8b2b52-6b75-42e3-ac0c-ad02d922ed97
---
# Using C or C++ in __asm Blocks

**Microsoft Specific**

Because inline assembly instructions can be mixed with C or C++ statements, they can refer to C or C++ variables by name and use many other elements of those languages.

An **`__asm`** block can use the following language elements:

- Symbols, including labels and variable and function names

- Constants, including symbolic constants and **`enum`** members

- Macros and preprocessor directives

- Comments (both __/\* \*/__ and __//__ )

- Type names (wherever a MASM type would be legal)

- **`typedef`** names, generally used with operators such as **PTR** and **TYPE** or to specify structure or union members

Within an **`__asm`** block, you can specify integer constants with either C notation or assembler radix notation (0x100 and 100h are equivalent, for example). This allows you to define (using `#define`) a constant in C and then use it in both C or C++ and assembly portions of the program. You can also specify constants in octal by preceding them with a 0. For example, 0777 specifies an octal constant.

## What do you want to know more about?

- [Using Operators in __asm Blocks](../../assembler/inline/using-operators-in-asm-blocks.md)

- [Using C or C++ Symbols_in __asm Blocks](../../assembler/inline/using-c-or-cpp-symbols-in-asm-blocks.md)

- [Accessing C or C++ Data in __asm Blocks](../../assembler/inline/accessing-c-or-cpp-data-in-asm-blocks.md)

- [Writing Functions with Inline Assembly](../../assembler/inline/writing-functions-with-inline-assembly.md)

**END Microsoft Specific**

## See also

[Inline Assembler](../../assembler/inline/inline-assembler.md)<br/>
