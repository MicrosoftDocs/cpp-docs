---
title: "Segment References in Inline Assembly | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-masm"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["references, inline assembly", "segment references in inline assembly", "inline assembly, segment references", "registers", "inline assembly, registers", "registers, inline assembly"]
ms.assetid: c63e6bb4-49d9-4fa1-bb22-eea21b5cbc0f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Segment References in Inline Assembly
## Microsoft Specific
You must refer to segments by register rather than by name (the segment name `_TEXT` is invalid, for instance). Segment overrides must use the register explicitly, as in ES:[BX].

**END Microsoft Specific**

## See Also
[Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>