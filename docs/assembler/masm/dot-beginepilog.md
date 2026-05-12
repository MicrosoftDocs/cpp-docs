---
description: "Learn more about: .BEGINEPILOG"
title: ".BEGINEPILOG"
ms.date: 05/04/2026
ai-usage: ai-assisted
f1_keywords: [".BEGINEPILOG"]
helpviewer_keywords: [".BEGINEPILOG directive"]
---
# .BEGINEPILOG

Marks the start of an epilogue unwind region. This directive doesn't emit an Unwind Operation Descriptors (WOD) code.

## Syntax

> `.BEGINEPILOG`

## Remarks

> [!IMPORTANT]
> This directive is experimental and is subject to change.
> Enable Unwind Version 3 by using `ml64.exe /unwindv3`.

`.BEGINEPILOG` is only valid in Unwind Version 3. 

- It marks the start of an epilogue region where epilogue unwind operations are recorded. Pair `.BEGINEPILOG` with a closing [.ENDEPILOG](dot-endepilog.md) or no epilog unwind codes are emitted.
- In Unwind Version 3, epilog directives are mandatory for epilog unwind code generation.
- Epilogues must contain at least one directive.
- These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code.

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
[.ENDEPILOG](dot-endepilog.md)\
[.ENDPROLOG](dot-endprolog.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
