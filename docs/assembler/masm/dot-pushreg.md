---
description: "Learn more about: .PUSHREG"
title: ".PUSHREG"
ms.date: "12/16/2019"
f1_keywords: [".PUSHREG"]
helpviewer_keywords: [".PUSHREG directive"]
ms.assetid: e0c83758-dfed-40ea-afe6-cb833c8d2d30
---
# .PUSHREG

Generates a `UWOP_PUSH_NONVOL` unwind code entry for the specified register number using the current offset in the prologue.

## Syntax

> .PUSHREG *register*

## Remarks

**.PUSHREG** allows ml64.exe users to specify how a frame function unwinds, and is only allowed within the prologue, which extends from the [PROC](proc.md) **FRAME** declaration to the [.ENDPROLOG](dot-endprolog.md) directive. These directives do not generate code; they only generate `.xdata` and `.pdata`. **.PUSHREG** should be preceded by instructions that actually implement the actions to be unwound. It is a good practice to wrap both the unwind directives and the code they are meant to unwind in a macro to ensure agreement.

*register* may be one of:\
RAX | RCX | RDX | RBX | RDI | RSI | RBP | R8 | R9 | R10 | R11 | R12 | R13 | R14 | R15.

For more information, see [MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

## Sample

### Description

The following sample shows how to push non-volatile registers.

### Code

```asm
; ml64 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE
_text SEGMENT
Example1 PROC FRAME
   push r10
.pushreg r10
   push r15
.pushreg r15
   push rbx
.pushreg rbx
   push rsi
.pushreg rsi
.endprolog
   ; rest of function ...
   ret
Example1 ENDP
_text ENDS
END
```

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
