---
description: "Learn more about: Data Directives and Operators in Inline Assembly"
title: "Data Directives and Operators in Inline Assembly"
ms.date: "08/30/2018"
helpviewer_keywords: ["data directives [C++]", "__asm keyword [C++], referencing limitations", "MASM (Microsoft Macro Assembler), directives", "directives [C++], MASM", "MASM (Microsoft Macro Assembler), structures", "operators [MASM]", "inline assembly, operators", "inline assembly, data directives", "MASM (Microsoft Macro Assembler), operators", "structures [C++], MASM"]
ms.assetid: fb7410c7-156a-4131-bcfc-211aa70533e3
---
# Data Directives and Operators in Inline Assembly

**Microsoft Specific**

Although an **`__asm`** block can reference C or C++ data types and objects, it cannot define data objects with MASM directives or operators. Specifically, you cannot use the definition directives **DB**, `DW`, **DD**, `DQ`, `DT`, and `DF`, or the operators `DUP` or **THIS**. MASM structures and records are also unavailable. The inline assembler doesn't accept the directives `STRUC`, `RECORD`, **WIDTH**, or **MASK**.

**END Microsoft Specific**

## See also

[Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
