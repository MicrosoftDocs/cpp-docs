---
description: "Learn more about: .FREESTACK"
title: ".FREESTACK"
ms.date: 05/06/2026
f1_keywords: [".FREESTACK"]
helpviewer_keywords: [".FREESTACK directive"]
ai-usage: ai-assisted
---
# .FREESTACK

Generates a **WOD_ALLOC_SMALL**, **WOD_ALLOC_LARGE**, or **WOD_ALLOC_HUGE** unwind code entry with the specified size for the current offset in the epilogue.

## Syntax

> **.FREESTACK** *size*

## Parameters

*size*\
The number of bytes to deallocate from the stack. Must be a multiple of 8.

## Remarks

> [!IMPORTANT]
> This directive is experimental and is subject to change.
> Enable Unwind Version 3 by using `ml64.exe /unwindv3`.

- You can use **.FREESTACK** only in Unwind Version 3. It's the epilogue counterpart to [.ALLOCSTACK](dot-allocstack.md).
- You can use **.FREESTACK** only within an epilogue region, between [.BEGINEPILOG](dot-beginepilog.md) and [.ENDEPILOG](dot-endepilog.md).
- In Unwind Version 3, **.FREESTACK** must appear **before** the `add rsp, N` instruction that implements the stack deallocation.
- To ensure agreement, wrap both the unwind directives and the code they're meant to unwind in a macro.
- These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code. 
- Microsoft Assembler (MASM) chooses the most efficient encoding for a given size.

MASM emits one of three unwind codes depending on the size:

| Unwind code | Condition |
|---|---|
| `WOD_ALLOC_SMALL` | *size* ≤ 128 bytes |
| `WOD_ALLOC_LARGE` | *size* ≤ 32 KB |
| `WOD_ALLOC_HUGE` | *size* > 32 KB |

In Unwind Version 3, epilogue directives are mandatory for epilogue unwind code generation. The assembler doesn't emit epilogue unwind codes without a `.BEGINEPILOG`/`.ENDEPILOG` pair.

> [!NOTE]
> In Unwind Version 1, the directive appears after the corresponding instruction. In Unwind Version 3, the directive appears **before** the instruction.

## Example for unwindv3

```asm
; ml64 /unwindv3 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE
_text SEGMENT
Example1 PROC FRAME
   .allocstack 16
   sub rsp, 16
.endprolog
   ; function body
   .beginepilog
   .freestack 16
   add rsp, 16
   .endepilog
   ret
Example1 ENDP
_text ENDS
END
```

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives Reference](directives-reference.md)\
[.ALLOCSTACK](dot-allocstack.md)\
[.BEGINEPILOG](dot-beginepilog.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
