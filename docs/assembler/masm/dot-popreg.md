---
description: "Learn more about: .POPREG"
title: ".POPREG"
ms.date: 05/04/2026
f1_keywords: [".POPREG"]
helpviewer_keywords: [".POPREG directive"]
ai-usage: ai-assisted
---
# .POPREG

Generates a `WOD_PUSH` unwind code entry for the specified register using the current offset in the epilogue.

## Syntax

> .POPREG *register*

## Parameters

*register*\
The register to pop. Must be a general-purpose 64-bit register.

## Remarks

> [!IMPORTANT]
> This directive is experimental and is subject to change. Enable Unwind Version 3 by using the `/unwindv3` option in ml64.exe.

`.POPREG` is only valid in Unwind Version 3. It's the epilogue counterpart to [.PUSHREG](dot-pushreg.md).

`.POPREG` is only allowed within an epilogue region, between [.BEGINEPILOG](dot-beginepilog.md) and [.ENDEPILOG](dot-endepilog.md). These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code. In Unwind Version 3, `.POPREG` must appear **before** the `pop` instruction that implements the register restore. To ensure agreement, wrap both the unwind directives and the code they're meant to unwind in a macro.

*register* may be one of:\
`RAX, RCX, RDX, RBX, RDI, RSI, RBP, R8, R9, R10, R11, R12, R13, R14, R15, R16, R17, R18, R19, R20, R21, R22, R23, R24, R25, R26, R27, R28, R29, R30, R31`

In Unwind Version 3, epilogue directives are mandatory for epilogue unwind code generation. The assembler doesn't emit epilogue unwind codes without a `.BEGINEPILOG`/`.ENDEPILOG` pair.

> [!NOTE]
> In Unwind Version 1, the directive appears after the corresponding instruction. In Unwind Version 3, the directive appears **before** the instruction.

## Example for unwindv3

```asm
; ml64 /unwindv3 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE
_text SEGMENT
Example1 PROC FRAME
   .pushreg rbx
   push rbx
   .pushreg rsi
   push rsi
.endprolog
   ; rest of function ...
   .beginepilog
   .popreg rsi
   pop rsi
   .popreg rbx
   pop rbx
   .endepilog
   ret
Example1 ENDP
_text ENDS
END
```

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives Reference](directives-reference.md)\
[.PUSHREG](dot-pushreg.md)\
[.POP2REG](dot-pop2reg.md)\
[.BEGINEPILOG](dot-beginepilog.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
