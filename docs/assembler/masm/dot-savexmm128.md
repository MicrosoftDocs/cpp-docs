---
description: "Learn more about: .SAVEXMM128"
title: ".SAVEXMM128"
ms.date: 05/04/2026
f1_keywords: [".SAVEXMM128"]
helpviewer_keywords: [".SAVEXMM128 directive"]
ai-usage: ai-assisted
---
# .SAVEXMM128

Generates either a `UWOP_SAVE_XMM128` or a `UWOP_SAVE_XMM128_FAR` unwind code entry for the specified XMM register and offset using the current prologue offset. Microsoft Assembler (MASM) chooses the most efficient encoding.

## Syntax

> `.SAVEXMM128` *xmmreg* , *offset*

## Remarks

Use `.SAVEXMM128` with `ml64.exe` to specify how a frame function unwinds. You can only use it within the prologue, which extends from the [`PROC`](proc.md) `FRAME` declaration to the [.ENDPROLOG](dot-endprolog.md) directive. These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code. Precede `.SAVEXMM128` by the instructions that actually implement the actions to be unwound. To ensure agreement, wrap both the unwind directives and the code they're meant to unwind in a macro.

*offset* must be a multiple of 16.

## Unwind Version 3 behavior

> [!IMPORTANT]
> Unwind Version 3 support is experimental and is subject to change. Enable it by using `ml64.exe /unwindv3`.

In Unwind Version 3, `.SAVEXMM128` emits either a `WOD_SAVE_XMM128` or a `WOD_SAVE_XMM128_FAR` unwind code entry. Microsoft Assembler (MASM) selects the most efficient encoding based on the size of *offset*:

| Unwind code | Condition |
|---|---|
| `WOD_SAVE_XMM128` | *offset* can be encoded as a scaled 16-bit value |
| `WOD_SAVE_XMM128_FAR` | *offset* requires a full 32-bit value |

> [!NOTE]
> In Unwind Version 1 the directives come after the instruction. In Unwind Version 3, the directives come before the instruction.
> `.SAVEXMM128` must appear **before** the instruction it describes. This requirement is the opposite of Version 1, where the directive follows the instruction.

### Example for unwindv3

```asm
; ml64 /unwindv3 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE
_text SEGMENT
Example1 PROC FRAME
   .allocstack 030h
   sub rsp, 030h
   .savexmm128 xmm6, 0
   movdqa [rsp], xmm6
   .savexmm128 xmm7, 010h
   movdqa [rsp+010h], xmm7
.endprolog
   ; rest of function ...
   movdqa xmm7, [rsp+010h]
   movdqa xmm6, [rsp]
   add rsp, 030h
   ret
Example1 ENDP
_text ENDS
END
```

The epilogue counterpart is [.RESTOREXMM128](dot-restorexmm128.md).

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)\
[MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md)
