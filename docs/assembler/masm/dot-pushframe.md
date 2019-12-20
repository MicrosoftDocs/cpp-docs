---
title: ".PUSHFRAME"
description: "Describes the .PUSHFRAME MASM directive, used to specify how to unwind a frame function."
ms.date: "12/06/2019"
f1_keywords: [".PUSHFRAME"]
helpviewer_keywords: [".PUSHFRAME directive"]
ms.assetid: 17b123d0-4c6d-4fd2-85eb-798e8ad0a73c
---
# .PUSHFRAME

Generates a `UWOP_PUSH_MACHFRAME` unwind code entry. If the optional **CODE** keyword is specified, the unwind code entry is given a modifier of 1. Otherwise the modifier is 0.

## Syntax

> **.PUSHFRAME** ⟦**CODE**⟧;;

## Remarks

.PUSHFRAME allows ml64.exe users to specify how a frame function unwinds. It's only allowed within the prologue, which extends from the [PROC](proc.md) FRAME declaration to the [.ENDPROLOG](dot-endprolog.md) directive. These directives don't generate code; they only generate `.xdata` and `.pdata`. **.PUSHFRAME** should be preceded by instructions that actually implement the actions to be unwound. It's a good practice to wrap both the unwind directives and the code they're meant to unwind in a macro to ensure agreement.

For more information, see [MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
