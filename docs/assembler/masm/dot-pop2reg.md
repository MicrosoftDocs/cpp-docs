---
description: "Learn more about: .POP2REG"
title: ".POP2REG"
ms.date: 05/04/2026
f1_keywords: [".POP2REG"]
helpviewer_keywords: [".POP2REG directive"]
ai-usage: ai-assisted
---
# .POP2REG

Generates a two-register pop unwind code entry for the specified register pair using the current offset in the epilogue.

## Syntax

> **.POP2REG** *register1*, *register2*

## Parameters

*register1*\
The first register to pop. Must be a general-purpose 64-bit register.

*register2*\
The second register to pop. Must be a general-purpose 64-bit register.

*register1* and *register2* may each be one of:\
`RAX, RCX, RDX, RBX, RDI, RSI, RBP, R8, R9, R10, R11, R12, R13, R14, R15, R16, R17, R18, R19, R20, R21, R22, R23, R24, R25, R26, R27, R28, R29, R30, R31`.

## Remarks

> [!IMPORTANT]
> This directive is experimental and is subject to change. Enable Unwind Version 3 with `ml64.exe /unwindv3`.

- **.POP2REG** is only valid in Unwind Version 3. It's the epilogue counterpart to [.PUSH2REG](dot-push2reg.md).
- **.POP2REG** is only allowed within an epilogue region, between [.BEGINEPILOG](dot-beginepilog.md) and [.ENDEPILOG](dot-endepilog.md).
- These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code.
- In Unwind Version 3, **.POP2REG** must appear **before** the instruction that actually implements the action to be unwound.
- In Unwind Version 3, epilogue directives are mandatory for epilogue unwind code generation. No epilogue unwind codes are emitted without a `.BEGINEPILOG`/`.ENDEPILOG` pair.
- To ensure agreement, wrap both the unwind directives and the code they're meant to unwind in a macro.

If *register1* and *register2* are consecutive and in increasing order, MASM emits a `WOD_PUSH_CONSECUTIVE_2` unwind code. Otherwise, MASM emits a `WOD_PUSH2` unwind code.

> [!NOTE]
> In Unwind Version 1, the directive appears after the corresponding instruction. In Unwind Version 3, the directive appears **before** the instruction.

## Example

```asm
; ml64 /unwindv3 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE
_text SEGMENT
Example1 PROC FRAME
   .push2reg rbx, rsi
   push2 rbx, rsi
   .push2reg r10, r11
   push2 r10, r11
.endprolog
   ; rest of function ...
   .beginepilog
   .pop2reg r10, r11
   pop2 r10, r11
   .pop2reg rbx, rsi
   pop2 rbx, rsi
   .endepilog
   ret
Example1 ENDP
_text ENDS
END
```

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives Reference](directives-reference.md)\
[.PUSH2REG](dot-push2reg.md)\
[.POPREG](dot-popreg.md)\
[.BEGINEPILOG](dot-beginepilog.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
