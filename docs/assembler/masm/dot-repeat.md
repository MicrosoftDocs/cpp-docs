---
title: ".REPEAT"
ms.date: "11/05/2019"
f1_keywords: [".REPEAT"]
helpviewer_keywords: [".REPEAT directive"]
ms.assetid: cb8ad8c6-587b-42f9-a0ad-b5316a24918c
---
# .REPEAT (32-bit MASM)

Generates code that repeats execution of the block of *statements* until *condition* becomes true. [.UNTILCXZ](../../assembler/masm/dot-untilcxz.md), which becomes true when CX is zero, may be substituted for [.UNTIL](../../assembler/masm/dot-until.md). The *condition* is optional with **.UNTILCXZ**. (32-bit MASM only.)

## Syntax

> **.REPEAT**\
> *statements*\
> **.UNTIL** *condition*

## See also

[Directives reference](directives-reference.md)
