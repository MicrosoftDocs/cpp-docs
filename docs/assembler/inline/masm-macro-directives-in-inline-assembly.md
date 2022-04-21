---
description: "Learn more about: MASM Macro Directives in Inline Assembly"
title: "MASM Macro Directives in Inline Assembly"
ms.date: "08/30/2018"
helpviewer_keywords: ["directives, macros", "inline assembly, macro directives", "macros, directives", "MASM (Microsoft Macro Assembler), inline assembly macro directives"]
ms.assetid: 83643a09-1699-40a8-8ef2-13502bc4ac2c
---
# MASM Macro Directives in Inline Assembly

**Microsoft Specific**

The inline assembler isn't a macro assembler. You can't use MASM macro directives (`MACRO`, `REPT`, `IRC`, `IRP`, and `ENDM`) or macro operators (**`<>`**, **`!`**, **`&`**, **`%`**, and `.TYPE`). An **`__asm`** block can use C preprocessor directives, however. For more information, see [Using C or C++ in `__asm` blocks](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md).

**END Microsoft Specific**

## See also

[Using assembly language in `__asm` blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)
