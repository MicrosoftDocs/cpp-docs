---
description: "Learn more about: .SETFRAME"
title: ".SETFRAME"
ms.date: "12/17/2019"
f1_keywords: [".SETFRAME"]
helpviewer_keywords: [".SETFRAME directive"]
ms.assetid: eaa9b5ed-4daa-4f1e-bdb6-100758007ab3
---
# .SETFRAME

Fills in the frame register field and offset in the unwind information using the specified register (*reg*) and offset (*offset*). The offset must be a multiple of 16 and less than or equal to 240. This directive also generates a `UWOP_SET_FPREG` unwind code entry for the specified register using the current prologue offset.

## Syntax

> **.SETFRAME** *reg*, *offset*

## Remarks

**.SETFRAME** allows ml64.exe users to specify how a frame function unwinds, and is only allowed within the prologue, which extends from the [PROC](proc.md) FRAME declaration to the [.ENDPROLOG](dot-endprolog.md) directive. These directives do not generate code; they only generate `.xdata` and `.pdata`. **.SETFRAME** should be preceded by instructions that actually implement the actions to be unwound. It is a good practice to wrap both the unwind directives and the code they are meant to unwind in a macro to ensure agreement.

For more information, see [MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

## Sample

### Description

The following sample shows how to use a frame pointer:

### Code

```asm
; ml64 frmex2.asm /link /entry:frmex2 /SUBSYSTEM:CONSOLE
_text SEGMENT
frmex2 PROC FRAME
   push rbp
.pushreg rbp
   sub rsp, 010h
.allocstack 010h
   mov rbp, rsp
.setframe rbp, 0
.endprolog
   ; modify the stack pointer outside of the prologue (similar to alloca)
   sub rsp, 060h

   ; we can unwind from the following AV because of the frame pointer
   mov rax, 0
   mov rax, [rax] ; AV!

   add rsp, 060h
   add rsp, 010h
   pop rbp
   ret
frmex2 ENDP
_text ENDS
END
```

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
