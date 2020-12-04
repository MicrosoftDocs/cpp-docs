---
description: "Learn more about: Segment References in Inline Assembly"
title: "Segment References in Inline Assembly"
ms.date: "08/30/2018"
helpviewer_keywords: ["references, inline assembly", "segment references in inline assembly", "inline assembly, segment references", "registers", "inline assembly, registers", "registers, inline assembly"]
ms.assetid: c63e6bb4-49d9-4fa1-bb22-eea21b5cbc0f
---
# Segment References in Inline Assembly

**Microsoft Specific**

You must refer to segments by register rather than by name (the segment name `_TEXT` is invalid, for instance). Segment overrides must use the register explicitly, as in ES:[BX].

**END Microsoft Specific**

## See also

[Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
