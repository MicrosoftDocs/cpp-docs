---
title: "MASM Macro Directives in Inline Assembly | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["directives, macros", "inline assembly, macro directives", "macros, directives", "MASM (Microsoft Macro Assembler), inline assembly macro directives"]
ms.assetid: 83643a09-1699-40a8-8ef2-13502bc4ac2c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# MASM Macro Directives in Inline Assembly
## Microsoft Specific  
 The inline assembler is not a macro assembler. You cannot use MASM macro directives (**MACRO**, `REPT`, **IRC**, `IRP`, and `ENDM`) or macro operators (**<>**, **!**, **&**, `%`, and `.TYPE`). An `__asm` block can use C preprocessor directives, however. See [Using C or C++ in __asm Blocks](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md) for more information.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)