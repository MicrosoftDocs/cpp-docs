---
description: "Learn more about: .PUSHREG"
title: ".PUSHREG"
ms.date: 05/04/2026
f1_keywords: [".PUSHREG"]
helpviewer_keywords: [".PUSHREG directive"]
ai-usage: ai-assisted
---
# .PUSHREG

Generates a `UWOP_PUSH_NONVOL` unwind code entry for the specified register number using the current offset in the prologue.

## Syntax

> .PUSHREG *register*

*register* may be one of:\
`RAX, RCX, RDX, RBX, RDI, RSI, RBP, R8, R9, R10, R11, R12, R13, R14, R15`

Unwind Version 3 extends register support to include R16–R31. *register* may be one of:\
`RAX, RCX, RDX, RBX, RDI, RSI, RBP, R8, R9, R10, R11, R12, R13, R14, R15, R16, R17, R18, R19, R20, R21, R22, R23, R24, R25, R26, R27, R28, R29, R30, R31`

## Remarks

Use `.PUSHREG` with `ml64.exe` to specify how a frame function unwinds. You can only use `.PUSHREG` within the prologue, which extends from the [PROC](proc.md) `FRAME` declaration to the [.ENDPROLOG](dot-endprolog.md) directive. These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code. Precede `.PUSHREG` with the instructions that actually implement the actions to be unwound. To ensure agreement, wrap both the unwind directives and the code they're meant to unwind in a macro.

### Code

The following sample shows how to push nonvolatile registers.

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

## Unwind Version 3 behavior

> [!IMPORTANT]
> Unwind Version 3 support is experimental and is subject to change. Enable it by using `ml64.exe /unwindv3`.

> [!NOTE]
> In Unwind Version 1, the directive appears after the corresponding instruction. In Unwind Version 3, the directive appears **before** the instruction.
> In Unwind Version 3, `.PUSHREG` generates a `WOD_PUSH` unwind code entry and must appear **before** the `push reg` instruction it describes. This requirement is the opposite of Version 1, where the directive follows the instruction.

### Example for unwindv3

```asm
; ml64 /unwindv3 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE
_text SEGMENT
Example1 PROC FRAME
   .pushreg r10
   push r10
   .pushreg r15
   push r15
   .pushreg rbx
   push rbx
   .pushreg rsi
   push rsi
.endprolog
   ; rest of function ...
   ret
Example1 ENDP
_text ENDS
END
```

The epilogue counterpart is [.POPREG](dot-popreg.md).

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)\
[MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md)