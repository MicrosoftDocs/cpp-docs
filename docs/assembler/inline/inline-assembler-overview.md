---
description: "Learn more about: Inline Assembler Overview"
title: "Inline Assembler Overview"
ms.date: "08/30/2018"
helpviewer_keywords: ["inline assembler", "__asm keyword [C++], invoking inline assembler", "invoking inline assembler", "inline assembly, inline assembler"]
ms.assetid: d990331a-0e33-4760-8d7a-b720b0288335
---
# Inline Assembler Overview

**Microsoft Specific**

The inline assembler lets you embed assembly-language instructions in your C and C++ source programs without extra assembly and link steps. The inline assembler is built into the compiler — you don't need a separate assembler such as the Microsoft Macro Assembler (MASM).

Because the inline assembler doesn't require separate assembly and link steps, it is more convenient than a separate assembler. Inline assembly code can use any C or C++ variable or function name that is in scope, so it is easy to integrate it with your program's C and C++ code. And because the assembly code can be mixed with C and C++ statements, it can do tasks that are cumbersome or impossible in C or C++ alone.

The [__asm](../../assembler/inline/asm.md) keyword invokes the inline assembler and can appear wherever a C or C++ statement is legal. It cannot appear by itself. It must be followed by an assembly instruction, a group of instructions enclosed in braces, or, at the very least, an empty pair of braces. The term "**`__asm`** block" here refers to any instruction or group of instructions, whether or not in braces.

The following code is a simple **`__asm`** block enclosed in braces. (The code is a custom function prolog sequence.)

```cpp
// asm_overview.cpp
// processor: x86
void __declspec(naked) main()
{
    // Naked functions must provide their own prolog...
    __asm {
        push ebp
        mov ebp, esp
        sub esp, __LOCAL_SIZE
    }

    // ... and epilog
    __asm {
        pop ebp
        ret
    }
}
```

Alternatively, you can put **`__asm`** in front of each assembly instruction:

```cpp
__asm push ebp
__asm mov  ebp, esp
__asm sub  esp, __LOCAL_SIZE
```

Since the **`__asm`** keyword is a statement separator, you can also put assembly instructions on the same line:

```cpp
__asm push ebp   __asm mov  ebp, esp   __asm sub  esp, __LOCAL_SIZE
```

**END Microsoft Specific**

## See also

[Inline Assembler](../../assembler/inline/inline-assembler.md)<br/>
