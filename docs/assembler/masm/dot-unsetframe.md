---
description: "Learn more about: .UNSETFRAME"
title: ".UNSETFRAME"
ms.date: 05/04/2026
f1_keywords: [".UNSETFRAME"]
helpviewer_keywords: [".UNSETFRAME directive"]
ai-usage: ai-assisted
---
# .UNSETFRAME

Generates a `WOD_SET_FPREG` unwind code entry for the specified register and offset using the current offset in the epilogue.

## Syntax

> `.UNSETFRAME` *reg*, *offset*

## Parameters

*reg*\
The frame pointer register to unset.

*offset*\
The offset into the stack frame where the frame pointer was established.

## Remarks

> [!IMPORTANT]
> This directive is experimental and is subject to change. Enable Unwind Version 3 with `ml64.exe /unwindv3`.

`.UNSETFRAME` is only valid in Unwind Version 3. It's the epilogue counterpart to [.SETFRAME](dot-setframe.md).

`.UNSETFRAME` is only allowed within an epilogue region, between [.BEGINEPILOG](dot-beginepilog.md) and [.ENDEPILOG](dot-endepilog.md). These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code.\
In Unwind Version 3, `.UNSETFRAME` must appear **before** the instruction that restores the stack pointer from the frame pointer register.\
It's a good practice to wrap both the unwind directives and the code they're meant to unwind in a macro to ensure agreement.

In Unwind Version 3, epilogue directives are mandatory for epilogue unwind code generation. No epilogue unwind codes are emitted without a `.BEGINEPILOG`/`.ENDEPILOG` pair.

> [!NOTE]
> In Unwind Version 1, the directive appears after the corresponding instruction. In Unwind Version 3, the directive appears **before** the instruction.

## Example for unwindv3

```asm
; ml64 /unwindv3 frmex2.asm /link /entry:frmex2 /SUBSYSTEM:CONSOLE
_text SEGMENT
frmex2 PROC FRAME
   .pushreg rbp
   push rbp
   .allocstack 010h
   sub rsp, 010h
   .setframe rbp, 0
   mov rbp, rsp
.endprolog
   ; modify the stack pointer outside of the prologue (similar to alloca)
   sub rsp, 060h

   ; we can unwind from the following AV because of the frame pointer
   mov rax, 0
   mov rax, [rax] ; AV!

   add rsp, 060h
   .beginepilog
   .unsetframe rbp, 0
   mov rsp, rbp
   .freestack 010h
   add rsp, 010h
   .popreg rbp
   pop rbp
   .endepilog
   ret
frmex2 ENDP
_text ENDS
END
```

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives Reference](directives-reference.md)\
[.SETFRAME](dot-setframe.md)\
[.BEGINEPILOG](dot-beginepilog.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
