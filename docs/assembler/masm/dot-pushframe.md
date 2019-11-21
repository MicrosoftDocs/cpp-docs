---
title: ".PUSHFRAME"
ms.date: "08/30/2018"
f1_keywords: [".PUSHFRAME"]
helpviewer_keywords: [".PUSHFRAME directive"]
ms.assetid: 17b123d0-4c6d-4fd2-85eb-798e8ad0a73c
---
# .PUSHFRAME

Generates a `UWOP_PUSH_MACHFRAME` unwind code entry. If the optional *code* is specified, the unwind code entry is given a modifier of 1. Otherwise the modifier is 0.

## Syntax

> **.PUSHFRAME** ⟦*code*⟧;;

## Remarks

.PUSHFRAME allows ml64.exe users to specify how a frame function unwinds and is only allowed within the prologue, which extends from the [PROC](../../assembler/masm/proc.md) FRAME declaration to the [.ENDPROLOG](../../assembler/masm/dot-endprolog.md) directive. These directives do not generate code; they only generate `.xdata` and `.pdata`. **.PUSHFRAME** should be preceded by instructions that actually implement the actions to be unwound. It is a good practice to wrap both the unwind directives and the code they are meant to unwind in a macro to ensure agreement.

For more information, see [MASM for x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>