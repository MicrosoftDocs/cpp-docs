---
description: "Learn more about: .RESTOREREG"
title: ".RESTOREREG"
ms.date: 05/04/2026
f1_keywords: [".RESTOREREG"]
helpviewer_keywords: [".RESTOREREG directive"]
ai-usage: ai-assisted
---
# .RESTOREREG

Generates either a `WOD_SAVE_NONVOL` or a `WOD_SAVE_NONVOL_FAR` unwind code entry for the specified register and offset, using the current epilogue offset.

## Syntax

> `.RESTOREREG` *reg*, *offset*

## Parameters

*reg*\
The nonvolatile register to restore.

*offset*\
The stack offset from which the register is restored.

## Remarks

> [!IMPORTANT]
> This directive is experimental and is subject to change. Enable Unwind Version 3 by using `ml64.exe /unwindv3`.

`.RESTOREREG` is only valid in Unwind Version 3. It's the epilogue counterpart to [.SAVEREG](dot-savereg.md).

Microsoft Assembler (MASM) chooses the most efficient encoding for a given offset.

- `.RESTOREREG` is only allowed within an epilogue region, between [.BEGINEPILOG](dot-beginepilog.md) and [.ENDEPILOG](dot-endepilog.md).
- These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code.
- In Unwind Version 3, `.RESTOREREG` must appear **before** the instruction that loads the register from the stack.
- To ensure agreement, wrap both the unwind directives and the code they're meant to unwind in a macro.
- In Unwind Version 3, epilogue directives are mandatory for epilogue unwind code generation. No epilogue unwind codes are emitted without a `.BEGINEPILOG`/`.ENDEPILOG` pair.

> [!NOTE]
> In Unwind Version 1, the directive appears after the corresponding instruction. In Unwind Version 3, the directive appears **before** the instruction.

## Example for unwindv3

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
   .beginepilog
   .restorereg rsi, 8
   mov rsi, [rsp+8]
   .restorereg rbx, 0
   mov rbx, [rsp]
   .freestack 020h
   add rsp, 020h
   .endepilog
   ret
Example1 ENDP
_text ENDS
END
```

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives Reference](directives-reference.md)\
[.SAVEREG](dot-savereg.md)\
[.BEGINEPILOG](dot-beginepilog.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
