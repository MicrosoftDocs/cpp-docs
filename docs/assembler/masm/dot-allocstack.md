---
description: "Learn more about: .ALLOCSTACK"
title: ".ALLOCSTACK"
ms.date: 05/11/2026
f1_keywords: [".ALLOCSTACK"]
helpviewer_keywords: [".ALLOCSTACK directive"]
ai-usage: ai-assisted
---
# .ALLOCSTACK

`.ALLOCSTACK` generates a **UWOP_ALLOC_SMALL** or a **UWOP_ALLOC_LARGE** with the specified size for the current offset in the prologue.

## Syntax

> `.ALLOCSTACK` *size*

## Remarks

Microsoft Assembler (MASM) chooses the most efficient encoding for a given size.

`.ALLOCSTACK` allows `ml64.exe` users to specify how a frame function unwinds and is only allowed within the prologue, which extends from the [PROC](proc.md) `FRAME` declaration to the [.ENDPROLOG](dot-endprolog.md) directive.
- These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code.
- Precede `.ALLOCSTACK` with the instructions that actually implement the actions to be unwound. Wrap both the unwind directives and the code they're meant to unwind in a macro to ensure agreement.

The *size* operand must be a multiple of 8.

The epilogue counterpart is [.FREESTACK](dot-freestack.md).

## Example: specify an unwind version 3 unwind/exception handler

The following sample shows how to specify an unwind/exception handler:

```asm
; ml64 ex3.asm /link /entry:Example3 /SUBSYSTEM:Console
text SEGMENT
PUBLIC Example3
PUBLIC Example3_UW
Example3_UW PROC
   ; exception/unwind handler body

   ret 0

Example3_UW ENDP

Example3 PROC FRAME : Example3_UW

   sub rsp, 16
.allocstack 16

.endprolog

   ; function body
    add rsp, 16
   ret 0

Example3 ENDP
text ENDS
END
```

## Unwind Version 3 behavior

> [!IMPORTANT]
> Unwind Version 3 support is experimental and is subject to change. Enable it by using `ml64.exe /unwindv3`.

`.ALLOCSTACK` generates a `WOD_ALLOC_SMALL`, `WOD_ALLOC_LARGE`, or `WOD_ALLOC_HUGE` Unwind Version 3 unwind code entry with the specified size for the current offset in the prolog.

`.ALLOCSTACK` must appear **before** the `sub rsp, N` instruction it describes. This requirement is the opposite of Version 1, where the directive follows the instruction.

MASM emits one of three unwind codes depending on the allocation size:

| Unwind code | Condition |
|---|---|
| `WOD_ALLOC_SMALL` | *size* ≤ 128 bytes |
| `WOD_ALLOC_LARGE` | *size* ≤ 32 KB |
| `WOD_ALLOC_HUGE` | *size* > 32 KB |

Version 1 generates only `UWOP_ALLOC_SMALL` or `UWOP_ALLOC_LARGE`. Version 3 adds a third variant, `WOD_ALLOC_HUGE`, for allocations larger than 32 KB.

> [!NOTE]
> In Unwind Version 1, the directive appears after the corresponding instruction. In Unwind Version 3, the directive appears **before** the instruction.

### Example for unwindv3

```asm
; ml64 ex3.asm /unwindv3 /link /entry:Example3 /SUBSYSTEM:Console
text SEGMENT
PUBLIC Example3
PUBLIC Example3_UW
Example3_UW PROC
   ; exception/unwind handler body

   ret 0

Example3_UW ENDP

Example3 PROC FRAME : Example3_UW

.allocstack 16
   sub rsp, 16

.endprolog

   ; function body
    add rsp, 16
   ret 0

Example3 ENDP
text ENDS
END
```

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives Reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)\
[MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md)