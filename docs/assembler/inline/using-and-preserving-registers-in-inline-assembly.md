---
description: "Learn more about: Using and Preserving Registers in Inline Assembly"
title: "Using and Preserving Registers in Inline Assembly"
ms.date: "08/30/2018"
helpviewer_keywords: ["__asm keyword [C++], register values", "inline assembly, registers", "registers, inline assembly", "preserving registers"]
ms.assetid: dbcd7360-6f3e-4b22-9ee2-9f65ca6f2543
---
# Using and Preserving Registers in Inline Assembly

**Microsoft Specific**

In general, you should not assume that a register will have a given value when an **`__asm`** block begins. Register values are not guaranteed to be preserved across separate **`__asm`** blocks. If you end a block of inline code and begin another, you cannot rely on the registers in the second block to retain their values from the first block. An **`__asm`** block inherits whatever register values result from the normal flow of control.

If you use the **`__fastcall`** calling convention, the compiler passes function arguments in registers instead of on the stack. This can create problems in functions with **`__asm`** blocks because a function has no way to tell which parameter is in which register. If the function happens to receive a parameter in EAX and immediately stores something else in EAX, the original parameter is lost. In addition, you must preserve the ECX register in any function declared with **`__fastcall`**.

To avoid such register conflicts, don't use the **`__fastcall`** convention for functions that contain an **`__asm`** block. If you specify the **`__fastcall`** convention globally with the /Gr compiler option, declare every function containing an **`__asm`** block with **`__cdecl`** or **`__stdcall`**. (The **`__cdecl`** attribute tells the compiler to use the C calling convention for that function.) If you are not compiling with /Gr, avoid declaring the function with the **`__fastcall`** attribute.

When using **`__asm`** to write assembly language in C/C++ functions, you don't need to preserve the EAX, EBX, ECX, EDX, ESI, or EDI registers. For example, in the POWER2.C example in [Writing Functions with Inline Assembly](../../assembler/inline/writing-functions-with-inline-assembly.md), the `power2` function doesn't preserve the value in the EAX register. However, using these registers will affect code quality because the register allocator cannot use them to store values across **`__asm`** blocks. In addition, by using EBX, ESI or EDI in inline assembly code, you force the compiler to save and restore those registers in the function prologue and epilogue.

You should preserve other registers you use (such as DS, SS, SP, BP, and flags registers) for the scope of the **`__asm`** block. You should preserve the ESP and EBP registers unless you have some reason to change them (to switch stacks, for example). Also see [Optimizing Inline Assembly](../../assembler/inline/optimizing-inline-assembly.md).

Some SSE types require eight-byte stack alignment, forcing the compiler to emit dynamic stack-alignment code. To be able to access both the local variables and the function parameters after the alignment, the compiler maintains two frame pointers.  If the compiler performs frame pointer omission (FPO), it will use EBP and ESP.  If the compiler does not perform FPO, it will use EBX and EBP. To ensure code runs correctly, do not modify EBX in asm code if the function requires dynamic stack alignment as it could modify the frame pointer. Either move the eight-byte aligned types out of the function, or avoid using EBX.

> [!NOTE]
> If your inline assembly code changes the direction flag using the STD or CLD instructions, you must restore the flag to its original value.

**END Microsoft Specific**

## See also

[Inline Assembler](../../assembler/inline/inline-assembler.md)<br/>
