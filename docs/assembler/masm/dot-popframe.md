---
description: "Learn more about: .POPFRAME"
title: ".POPFRAME"
ms.date: 05/01/2026
f1_keywords: [".POPFRAME"]
helpviewer_keywords: [".POPFRAME directive"]
ai-usage: ai-assisted
---
# .POPFRAME

Generates a `WOD_PUSH_CANONICAL_FRAME` Windows unwind data (WOD) unwind code entry in the epilogue.

## Syntax

> **.POPFRAME** ⟦**CODE** | *value*⟧

## Parameters

*value*\
An optional numeric modifier in the range 0–255.\
Mutually exclusive with **CODE**. If you specify the optional **CODE** keyword, the unwind code entry receives a modifier of 1.\
If you specify an optional numeric *value* instead, it receives the specified value.\
If you don't pass an argument, the value is 0.

## Remarks

> [!IMPORTANT]
> This directive is experimental and is subject to change. Enable Unwind Version 3 with `ml64.exe /unwindv3`.

The **.POPFRAME** directive lets `ml64.exe` users specify how a frame function unwinds in an epilog. You can only use it within an epilog region, between [.BEGINEPILOG](dot-beginepilog.md) and [.ENDEPILOG](dot-endepilog.md).

- **.POPFRAME** is only valid in Unwind Version 3. It's the epilog counterpart of [.PUSHFRAME](dot-pushframe.md). The operand value should match the corresponding **.PUSHFRAME** in the prologue.
- In Unwind Version 3, **.POPFRAME** must appear **before** the instruction that implements the action to be unwound. To ensure agreement, wrap both the unwind directives and the code they're meant to unwind in a macro.
- In Unwind Version 3, epilogue directives are mandatory for epilogue unwind code generation. No epilogue unwind codes are emitted without a `.BEGINEPILOG`/`.ENDEPILOG` pair.
- These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code.

> [!NOTE]
> In Unwind Version 1, directives appear after the corresponding instruction. In Unwind Version 3, directives appear **before** the instruction.

## Example for unwindv3

The following example shows how to use **.POPFRAME** in an epilogue to indicate an interrupt handler that pushes and pops a canonical machine frame.

```asm
; ml64 /unwindv3 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE
_text SEGMENT
Example1 PROC FRAME
   .pushframe
   .pushreg rbx
   push rbx
   .allocstack 32
   sub rsp, 32
.endprolog
   ; interrupt handler body ...
   .beginepilog
   .freestack 32
   add rsp, 32
   .popreg rbx
   pop rbx
   .popframe
   .endepilog
   iretq
Example1 ENDP
_text ENDS
END
```

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[.PUSHFRAME](dot-pushframe.md)\
[.BEGINEPILOG](dot-beginepilog.md)\
[.ENDEPILOG](dot-endepilog.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
