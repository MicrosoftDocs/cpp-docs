---
title: "EXTERNDEF"
ms.date: "08/30/2018"
f1_keywords: ["EXTERNDEF"]
helpviewer_keywords: ["EXTERNDEF directive"]
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
---
# EXTERNDEF

Defines one or more external variables, labels, or symbols called *name* whose type is `type`.

## Syntax

> EXTERNDEF [[langtype]] name:type [[, [[langtype]] name:type]]...

## Remarks

If *name* is defined in the module, it is treated as [PUBLIC](../../assembler/masm/public-masm.md). If *name* is referenced in the module, it is treated as [EXTERN](../../assembler/masm/extern-masm.md). If *name* is not referenced, it is ignored. The `type` can be [ABS](../../assembler/masm/operator-abs.md), which imports *name* as a constant. Normally used in include files.

## See also

- [Directives Reference](../../assembler/masm/directives-reference.md)
