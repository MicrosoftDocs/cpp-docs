---
description: "Learn more about: .RESTOREXMM128"
title: ".RESTOREXMM128"
ms.date: 05/06/2026
f1_keywords: [".RESTOREXMM128"]
helpviewer_keywords: [".RESTOREXMM128 directive"]
ai-usage: ai-assisted
---
# .RESTOREXMM128

Generates either a `WOD_SAVE_XMM128` or a `WOD_SAVE_XMM128_FAR` Unwind Version 3 unwind code entry for the specified XMM register and offset using the current epilogue offset.

## Syntax

> `.RESTOREXMM128` *xmmreg*, *offset*

## Parameters

*xmmreg*\
The XMM register to restore.

*offset*\
The stack offset from which the register is restored. Must be a multiple of 16.

## Remarks

> [!IMPORTANT]
> This directive is experimental and is subject to change. Enable Unwind Version 3 with `ml64.exe /unwindv3`.

`.RESTOREXMM128` is only valid in Unwind Version 3. It's the epilogue counterpart to [.SAVEXMM128](dot-savexmm128.md).

Microsoft Assembler (MASM) chooses the most efficient encoding for a given offset.

- `.RESTOREXMM128` is only allowed within an epilogue region, between [.BEGINEPILOG](dot-beginepilog.md) and [.ENDEPILOG](dot-endepilog.md).
- These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code.
- In Unwind Version 3, `.RESTOREXMM128` must appear **before** the instruction that loads the XMM register from the stack.
- To ensure agreement, wrap both the unwind directives and the code they're meant to unwind in a macro.
- In Unwind Version 3, epilogue directives are mandatory for epilogue unwind code generation. No epilogue unwind codes are emitted without a `.BEGINEPILOG`/`.ENDEPILOG` pair.

> [!NOTE]
> In Unwind Version 1, the directive appears after the corresponding instruction. In Unwind Version 3, the directive appears **before** the instruction.

## Example for unwindv3

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
   .beginepilog
   .restorexmm128 xmm7, 010h
   movdqa xmm7, [rsp+010h]
   .restorexmm128 xmm6, 0
   movdqa xmm6, [rsp]
   .freestack 030h
   add rsp, 030h
   .endepilog
   ret
Example1 ENDP
_text ENDS
END
```

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives Reference](directives-reference.md)\
[.SAVEXMM128](dot-savexmm128.md)\
[.BEGINEPILOG](dot-beginepilog.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
