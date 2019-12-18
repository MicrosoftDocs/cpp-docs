---
title: ".ENDPROLOG"
ms.date: "12/17/2019"
f1_keywords: [".ENDPROLOG"]
helpviewer_keywords: [".ENDPROLOG directive"]
ms.assetid: 61a2474c-9527-46e6-9f9d-bc4b42c10f35
---
# .ENDPROLOG

Signals the end of the prologue declarations.

## Syntax

> **.ENDPROLOG**

## Remarks

It is an error to use any of the prologue declarations outside of the region between [PROC](../../assembler/masm/proc.md) **FRAME** and **.ENDPROLOG**.

For more information, see [MASM for x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>
[MASM BNF Grammar](masm-bnf-grammar.md)
