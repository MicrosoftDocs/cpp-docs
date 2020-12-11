---
description: "Learn more about: Inline Assembler (C)"
title: "Inline Assembler (C)"
ms.date: "11/04/2016"
helpviewer_keywords: ["__asm keyword [C]", "inline assembler [C]"]
ms.assetid: 821acc77-60b1-434c-ba54-2ba930a25ab4
---
# Inline Assembler (C)

**Microsoft Specific**

The inline assembler lets you embed assembly-language instructions directly in your C source programs without extra assembly and link steps. The inline assembler is built into the compiler — you don't need a separate assembler such as the Microsoft Macro Assembler (MASM).

Because the inline assembler doesn't require separate assembly and link steps, it is more convenient than a separate assembler. Inline assembly code can use any C variable or function name that is in scope, so it is easy to integrate it with your program's C code. And because the assembly code can be mixed with C statements, it can do tasks that are cumbersome or impossible in C alone.

The **`__asm`** keyword invokes the inline assembler and can appear wherever a C statement is legal. It cannot appear by itself. It must be followed by an assembly instruction, a group of instructions enclosed in braces, or, at the very least, an empty pair of braces. The term "**`__asm`** block" here refers to any instruction or group of instructions, whether or not in braces.

The code below is a simple **`__asm`** block enclosed in braces. (The code is a custom function prolog sequence.)

```
__asm
{
   push ebp
   mov  ebp, esp
   sub  esp, __LOCAL_SIZE
}
```

Alternatively, you can put **`__asm`** in front of each assembly instruction:

```
__asm push ebp
__asm mov  ebp, esp
__asm sub  esp, __LOCAL_SIZE
```

Since the **`__asm`** keyword is a statement separator, you can also put assembly instructions on the same line:

```
__asm push ebp   __asm mov  ebp, esp   __asm sub  esp, __LOCAL_SIZE
```

**END Microsoft Specific**

## See also

[Function Attributes](../c-language/function-attributes.md)
