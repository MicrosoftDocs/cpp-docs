---
title: "EVEN and ALIGN Directives | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "conceptual"
f1_keywords: ["align", "EVEN"]
dev_langs: ["C++"]
helpviewer_keywords: ["EVEN directive", "directives, MASM", "MASM (Microsoft Macro Assembler), directives", "NOP (no operation instruction)", "ALIGN directive"]
ms.assetid: 7357ab2d-4a5c-43ca-accb-a5f21cdfcde5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# EVEN and ALIGN Directives

**Microsoft Specific**

Although the inline assembler doesn't support most MASM directives, it does support `EVEN` and **ALIGN**. These directives put **NOP** (no operation) instructions in the assembly code as needed to align labels to specific boundaries. This makes instruction-fetch operations more efficient for some processors.

**END Microsoft Specific**

## See also

[Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>