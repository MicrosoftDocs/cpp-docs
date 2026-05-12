---
description: "Learn more about: .SAVEREG"
title: ".SAVEREG"
ms.date: 05/06/2026
f1_keywords: [".SAVEREG"]
helpviewer_keywords: [".SAVEREG directive"]
ai-usage: ai-assisted
---
# .SAVEREG

Generates either a `UWOP_SAVE_NONVOL` or a `UWOP_SAVE_NONVOL_FAR` unwind code entry for the specified register (*reg*) and offset (*offset*) using the current prologue offset. Microsoft Assembler (MASM) chooses the most efficient encoding.

## Syntax

> `.SAVEREG` *reg*__,__ *offset*

## Remarks

Use `.SAVEREG` with `ml64.exe` to specify how a frame function unwinds. You can only use it within the prologue, which extends from the [`PROC`](proc.md) `FRAME` declaration to the [.ENDPROLOG](dot-endprolog.md) directive.
- These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code.
- Precede `.SAVEREG` with instructions that actually implement the actions to be unwound.
- To ensure agreement, wrap both the unwind directives and the code they're meant to unwind in a macro.

## Unwind Version 3 behavior

> [!IMPORTANT]
> Unwind Version 3 support is experimental and is subject to change. Enable it by using `ml64.exe /unwindv3`.

In Unwind Version 3, `.SAVEREG` emits either a `WOD_SAVE_NONVOL` or a `WOD_SAVE_NONVOL_FAR` unwind code entry. MASM selects the most efficient encoding based on the size of *offset*:

| Unwind code | Condition |
|---|---|
| `WOD_SAVE_NONVOL` | *offset* can be encoded as a scaled 16-bit value |
| `WOD_SAVE_NONVOL_FAR` | *offset* requires a full 32-bit value |

> [!NOTE]
> In Unwind Version 1, the directive appears after the corresponding instruction. In Unwind Version 3, the directive appears **before** the instruction.
> `.SAVEREG` must appear **before** the instruction it describes. This requirement is the opposite of Version 1, where the directive follows the instruction.

### Example for unwindv3

```asm
; ml64 /unwindv3 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE
_text SEGMENT
Example1 PROC FRAME
   .allocstack 020h
   sub rsp, 020h
   .savereg rbx, 0
   mov [rsp], rbx
   .savereg rsi, 8
   mov [rsp+8], rsi
.endprolog
   ; rest of function ...
   mov rsi, [rsp+8]
   mov rbx, [rsp]
   add rsp, 020h
   ret
Example1 ENDP
_text ENDS
END
```

The epilogue counterpart is [.RESTOREREG](dot-restorereg.md).

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives reference](directives-reference.md)\
[MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
