---
description: "Learn more about: .ENDEPILOG"
title: ".ENDEPILOG"
ms.date: "04/29/2026"
ai-usage: ai-assisted
f1_keywords: [".ENDEPILOG"]
helpviewer_keywords: [".ENDEPILOG directive"]
---
# .ENDEPILOG

Marks the end of an epilogue unwind region. This directive doesn't emit a Windows unwind data (WOD) unwind code.

## Syntax

> **.ENDEPILOG**

## Remarks

> [!IMPORTANT]
> This directive is experimental and is subject to change.
> Enable Unwind Version 3 by using `ml64.exe /unwindv3`.

**.ENDEPILOG** is only valid in Unwind Version 3.

- It marks the end of an epilogue region started by [.BEGINEPILOG](dot-beginepilog.md).
- These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code.
- Epilogues must contain at least one directive.
- Epilogue directives are mandatory for epilogue unwind code generation. No epilogue unwind codes are emitted without a `.BEGINEPILOG`/`.ENDEPILOG` pair.
- It's an error to use epilogue directives outside of the region between [.BEGINEPILOG](dot-beginepilog.md) and **.ENDEPILOG**.

> [!NOTE]
> In Unwind Version 1, the directive appears after the corresponding instruction. In Unwind Version 3, the directive appears **before** the instruction.

## Example

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
[.BEGINEPILOG](dot-beginepilog.md)\
[.ENDPROLOG](dot-endprolog.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
