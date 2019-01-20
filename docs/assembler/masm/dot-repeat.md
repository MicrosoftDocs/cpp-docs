---
title: ".REPEAT"
ms.date: "08/30/2018"
f1_keywords: [".REPEAT"]
helpviewer_keywords: [".REPEAT directive"]
ms.assetid: cb8ad8c6-587b-42f9-a0ad-b5316a24918c
---
# .REPEAT

Generates code that repeats execution of the block of *statements* until `condition` becomes true. [.UNTILCXZ](../../assembler/masm/dot-untilcxz.md), which becomes true when CX is zero, may be substituted for [.UNTIL](../../assembler/masm/dot-until.md). The `condition` is optional with **.UNTILCXZ**.

## Syntax

> .REPEAT<br/>
> statements<br/>
> .UNTIL condition

## See also

- [Directives Reference](../../assembler/masm/directives-reference.md)
