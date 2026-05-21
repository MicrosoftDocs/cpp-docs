---
description: "Learn more about: .PUSH2REG"
title: ".PUSH2REG"
ms.date: 05/04/2026
f1_keywords: [".PUSH2REG"]
helpviewer_keywords: [".PUSH2REG directive"]
ai-usage: ai-assisted
---
# .PUSH2REG

Generates a two-register push unwind code entry for the specified register pair using the current offset in the prologue.

## Syntax

> `.PUSH2REG` *register1*, *register2*

## Parameters

*register1*\
The first register to push. Must be a general-purpose 64-bit register.

*register2*\
The second register to push. Must be a general-purpose 64-bit register.

*register1* and *register2* may each be one of:\
`RAX, RCX, RDX, RBX, RDI, RSI, RBP, R8, R9, R10, R11, R12, R13, R14, R15, R16, R17, R18, R19, R20, R21, R22, R23, R24, R25, R26, R27, R28, R29, R30, R31.`

## Remarks

> [!IMPORTANT]
> This directive is experimental and is subject to change. Enable Unwind Version 3 by using `ml64.exe /unwindv3`.

- Use `.PUSH2REG` to specify how a frame function unwinds. You can only use this directive within the prologue, which extends from the [PROC](proc.md) `FRAME` declaration to the [.ENDPROLOG](dot-endprolog.md) directive.
- These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code. In Unwind Version 3, `.PUSH2REG` must appear **before** the instruction that actually implements the action to be unwound. To ensure agreement, it's a good practice to wrap both the unwind directives and the code they're meant to unwind in a macro.
- If *register1* and *register2* are consecutive and in increasing order, MASM emits a `WOD_PUSH_CONSECUTIVE_2` unwind code. Otherwise, MASM emits a `WOD_PUSH2` unwind code.

> [!NOTE]
> In Unwind Version 1, the directive appears after the corresponding instruction. In Unwind Version 3, the directive appears **before** the instruction.

## Example for unwindv3

```asm
; ml64 /unwindv3 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE
_text SEGMENT
Example1 PROC FRAME
   .push2reg r10, r11
   push2 r10, r11
   .push2reg rbx, rsi
   push2 rbx, rsi
.endprolog
   ; rest of function ...
   ret
Example1 ENDP
_text ENDS
END
```

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives Reference](directives-reference.md)\
[.POP2REG](dot-pop2reg.md)\
[.PUSHREG](dot-pushreg.md)\
[.ENDPROLOG](dot-endprolog.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
