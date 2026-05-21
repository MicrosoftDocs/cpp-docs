---
description: "Learn more about: .SETFRAME"
title: ".SETFRAME"
ms.date: 05/04/2026
f1_keywords: [".SETFRAME"]
helpviewer_keywords: [".SETFRAME directive"]
ai-usage: ai-assisted
---
# .SETFRAME

Fills in the frame register field and offset in the unwind information using the specified register (*reg*) and offset (*offset*). The offset must be a multiple of 16 and less than or equal to 240. This directive also generates a `UWOP_SET_FPREG` unwind code entry for the specified register using the current prologue offset.

## Syntax

> `.SETFRAME` *reg*, *offset*

## Remarks

Use `.SETFRAME` to specify how a frame function unwinds. You can only use it within the prologue, which extends from the [`PROC`](proc.md) `FRAME` declaration to the [.ENDPROLOG](dot-endprolog.md) directive. These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code. Precede `.SETFRAME` with instructions that implement the actions to be unwound. To ensure agreement, wrap both the unwind directives and the code they're meant to unwind in a macro.

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

## Unwind Version 3 behavior

> [!IMPORTANT]
> Unwind Version 3 support is experimental and is subject to change. Enable it by using `ml64.exe /unwindv3`.

In Unwind Version 3, `.SETFRAME` emits a `WOD_SET_FPREG` unwind code entry for the specified register using the current prologue offset. It also fills in the frame register field and offset in the unwind information. The *offset* must be a multiple of 16 and less than or equal to 240.

> [!NOTE]
> In Unwind Version 1 the directives come after the instruction. In Unwind Version 3, the directives come before the instruction.
> `.SETFRAME` must appear **before** the instruction it describes. This requirement is the opposite of Version 1, where the directive follows the instruction.

### Example for unwindv3

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
   add rsp, 010h
   pop rbp
   ret
frmex2 ENDP
_text ENDS
END
```

The epilogue counterpart is [.UNSETFRAME](dot-unsetframe.md).

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md)\
[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
