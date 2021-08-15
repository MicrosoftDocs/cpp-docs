---
description: "Learn more about: Defining __asm Blocks as C Macros"
title: "Defining __asm Blocks as C Macros"
ms.date: "08/30/2018"
helpviewer_keywords: ["macros, __asm blocks", "Visual C, macros", "__asm keyword [C++], as C macros"]
ms.assetid: 677ba11c-21c8-4609-bba7-cd47312243b0
---
# Defining __asm Blocks as C Macros

**Microsoft Specific**

C macros offer a convenient way to insert assembly code into your source code, but they demand extra care because a macro expands into a single logical line. To create trouble-free macros, follow these rules:

- Enclose the **`__asm`** block in braces.

- Put the **`__asm`** keyword in front of each assembly instruction.

- Use old-style C comments ( `/* comment */`) instead of assembly-style comments ( `; comment`) or single-line C comments ( `// comment`).

To illustrate, the following example defines a simple macro:

```cpp
#define PORTIO __asm      \
/* Port output */         \
{                         \
   __asm mov al, 2        \
   __asm mov dx, 0xD007   \
   __asm out dx, al       \
}
```

At first glance, the last three **`__asm`** keywords seem superfluous. They are needed, however, because the macro expands into a single line:

```cpp
__asm /* Port output */ { __asm mov al, 2  __asm mov dx, 0xD007 __asm out dx, al }
```

The third and fourth **`__asm`** keywords are needed as statement separators. The only statement separators recognized in **`__asm`** blocks are the newline character and **`__asm`** keyword. Because a block defined as a macro is one logical line, you must separate each instruction with **`__asm`**.

The braces are essential as well. If you omit them, the compiler can be confused by C or C++ statements on the same line to the right of the macro invocation. Without the closing brace, the compiler cannot tell where assembly code stops, and it sees C or C++ statements after the **`__asm`** block as assembly instructions.

Assembly-style comments that start with a semicolon (**;**) continue to the end of the line. This causes problems in macros because the compiler ignores everything after the comment, all the way to the end of the logical line. The same is true of single-line C or C++ comments ( `// comment`). To prevent errors, use old-style C comments ( `/* comment */`) in **`__asm`** blocks defined as macros.

An **`__asm`** block written as a C macro can take arguments. Unlike an ordinary C macro, however, an **`__asm`** macro cannot return a value. So you cannot use such macros in C or C++ expressions.

Be careful not to invoke macros of this type indiscriminately. For instance, invoking an assembly-language macro in a function declared with the **`__fastcall`** convention may cause unexpected results. (See [Using and Preserving Registers in Inline Assembly](../../assembler/inline/using-and-preserving-registers-in-inline-assembly.md).)

**END Microsoft Specific**

## See also

[Inline Assembler](../../assembler/inline/inline-assembler.md)<br/>
