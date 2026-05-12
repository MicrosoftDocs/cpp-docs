---
description: "Learn more about: .ENDPROLOG"
title: ".ENDPROLOG"
ms.date: 05/06/2026
f1_keywords: [".ENDPROLOG"]
helpviewer_keywords: [".ENDPROLOG directive"]
ai-usage: ai-assisted
---
# .ENDPROLOG

Marks the end of the prologue declarations.

## Syntax

> **.ENDPROLOG**

## Remarks

It's an error to use any of the prologue declarations outside of the region between [PROC](proc.md) `FRAME` and **.ENDPROLOG**.

For more information, see [MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

## Unwind Version 3 behavior

> [!IMPORTANT]
> Unwind Version 3 support is experimental and is subject to change.
> Enable it with `ml64.exe /unwindv3`.

`.ENDPROLOG` is also used in Unwind Version 3 and continues to mark the end of the function prologue. It doesn't generate a Windows unwind data (WOD) unwind code entry.

It's an error to use any prologue directive outside the region between `PROC FRAME` and `.ENDPROLOG`.

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives Reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
