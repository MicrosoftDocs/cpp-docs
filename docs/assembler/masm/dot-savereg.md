---
description: "Learn more about: .SAVEREG"
title: ".SAVEREG"
ms.date: "12/16/2019"
f1_keywords: [".SAVEREG"]
helpviewer_keywords: [".SAVEREG directive"]
ms.assetid: 1dbc2ef6-a197-40e7-9e55-fddcae8cef29
---
# .SAVEREG

Generates either a `UWOP_SAVE_NONVOL` or a `UWOP_SAVE_NONVOL_FAR` unwind code entry for the specified register (*reg*) and offset (*offset*) using the current prologue offset. MASM will choose the most efficient encoding.

## Syntax

> **.SAVEREG** *reg*__,__ *offset*

## Remarks

**.SAVEREG** allows ml64.exe users to specify how a frame function unwinds and is only allowed within the prologue, which extends from the [PROC](proc.md) FRAME declaration to the [.ENDPROLOG](dot-endprolog.md) directive. These directives do not generate code; they only generate `.xdata` and `.pdata`. **.SAVEREG** should be preceded by instructions that actually implement the actions to be unwound. It is a good practice to wrap both the unwind directives and the code they are meant to unwind in a macro to ensure agreement.

For more information, see [MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
