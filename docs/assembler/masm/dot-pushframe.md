---
title: ".PUSHFRAME"
description: "Describes the .PUSHFRAME MASM directive, used to specify how to unwind a frame function."
ms.date: "12/06/2019"
f1_keywords: [".PUSHFRAME"]
helpviewer_keywords: [".PUSHFRAME directive"]
ai-usage: ai-assisted
---
# .PUSHFRAME

Generates a `UWOP_PUSH_MACHFRAME` unwind code entry. If you specify the optional **CODE** keyword, the unwind code entry gets a modifier of 1. Otherwise, the modifier is 0.

## Syntax

> `.PUSHFRAME` ⟦**CODE**⟧ ;Prior to Unwind Version 3
> `.PUSHFRAME` ⟦**CODE**⟧ | [0-255] ;Unwind Version 3 specific

## Remarks

Use `.PUSHFRAME` with `ml64.exe` to specify how a frame function unwinds. You can only use it within the prologue, which extends from the [PROC](proc.md) `FRAME` declaration to the [.ENDPROLOG](dot-endprolog.md) directive.
- These directives generate unwind metadata (`.xdata` and `.pdata` sections) but don't produce executable code. 
- Precede `.PUSHFRAME` with the instructions that implement the actions to be unwound.
- To ensure agreement, wrap both the unwind directives and the code they're meant to unwind in a macro.

## Unwind Version 3 behavior

> [!IMPORTANT]
> Unwind Version 3 support is experimental and is subject to change. Enable it by using `ml64.exe /unwindv3`.

In Unwind Version 3, `.PUSHFRAME` emits a `WOD_PUSH_CANONICAL_FRAME` unwind code entry.\
When you specify the optional **CODE** keyword, the unwind code entry modifier value is 1.\
If you specify an optional *value*, the directive uses it directly.\
If you don't pass an argument, the value is 0. The *value* must be in the range 0–255.

> **Note:** In Unwind Version 1 the directives come after the instruction. In Unwind Version 3, the directives come before the instruction.
> `.PUSHFRAME` must appear **before** the instruction it describes. This behavior is the opposite of Version 1, where the directive follows the instruction.

### Example for unwindv3

```asm
; ml64 /unwindv3 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE
_text SEGMENT
Example1 PROC FRAME
   .pushframe CODE
.endprolog
   ; interrupt handler body ...
   iretq
Example1 ENDP
_text ENDS
END
```

The epilogue counterpart is [.POPFRAME](dot-popframe.md).

## See also

[x64 Unwind Version 3 (experimental)](directives-reference.md#x64-unwind-version-3-experimental)\
[Directives reference](directives-reference.md)\
[.POPFRAME](dot-popframe.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)\
[MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md)
