---
description: "Learn more about: .ALLOCSTACK"
title: ".ALLOCSTACK"
ms.date: "12/17/2019"
f1_keywords: [".ALLOCSTACK"]
helpviewer_keywords: [".ALLOCSTACK directive"]
ms.assetid: 9801594b-7ac2-4df2-a49d-07d9dd9af99e
---
# .ALLOCSTACK

Generates a **UWOP_ALLOC_SMALL** or a **UWOP_ALLOC_LARGE** with the specified size for the current offset in the prologue.

## Syntax

> **.ALLOCSTACK** *size*

## Remarks

MASM will choose the most efficient encoding for a given size.

**.ALLOCSTACK** allows ml64.exe users to specify how a frame function unwinds and is only allowed within the prologue, which extends from the [PROC](proc.md) FRAME declaration to the [.ENDPROLOG](dot-endprolog.md) directive. These directives do not generate code; they only generate `.xdata` and `.pdata`. **.ALLOCSTACK** should be preceded by instructions that actually implement the actions to be unwound. It is a good practice to wrap both the unwind directives and the code they are meant to unwind in a macro to ensure agreement.

The *size* operand must be a multiple of 8.

For more information, see [MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

## Sample

The following sample shows how to specify an unwind/exception handler:

```asm
; ml64 ex3.asm /link /entry:Example1  /SUBSYSTEM:Console
text SEGMENT
PUBLIC Example3
PUBLIC Example3_UW
Example3_UW PROC NEAR
   ; exception/unwind handler body

   ret 0

Example3_UW ENDP

Example3 PROC FRAME : Example3_UW

   sub rsp, 16
.allocstack 16

.endprolog

   ; function body
    add rsp, 16
   ret 0

Example3 ENDP
text ENDS
END
```

## See also

[Directives Reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
