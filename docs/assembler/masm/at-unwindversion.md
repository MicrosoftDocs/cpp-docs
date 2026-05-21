---
description: "Learn more about: @UnwindVersion"
title: "@UnwindVersion"
ms.date: 05/07/2026
f1_keywords: ["@UnwindVersion"]
helpviewer_keywords: ["@UnwindVersion symbol"]
ai-usage: ai-assisted
---
# \@UnwindVersion

A predefined macro that returns the unwind version the `.asm` file is being assembled with.

## Syntax

> **\@UnwindVersion**

## Remarks

> [!IMPORTANT]
> This symbol is experimental and is subject to change. Enable Unwind Version 3 with `ml64.exe /unwindv3`.

**\@UnwindVersion** is set to the unwind version used by the assembler. When `/unwindv3` is passed to `ml64.exe`, **\@UnwindVersion** is set to `3`; otherwise it's set to `1`.

Use this macro with conditional assembly directives such as `IF` to assemble different code paths depending on the unwind version.

This example is intended to be assembled only as it doesn't define an application entry point:

## Example for unwindv3

```asm
; ml64 /c /unwindv3 ex1.asm
.code

IF @UnwindVersion EQ 3

foo PROC FRAME
    .pushreg r12
    push r12

    .endprolog

    mov rax, 0

    .beginepilog
    .popreg r12
    pop r12
    .endepilog
    ret
foo ENDP
ELSE
    .ERR <@UnwindVersion should be 3>
ENDIF

END
```

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[MASM BNF Grammar](masm-bnf-grammar.md)
