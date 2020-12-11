---
description: "Learn more about: /DISASM"
title: "/DISASM"
ms.date: "01/17/2018"
f1_keywords: ["/disasm"]
helpviewer_keywords: ["-DISASM dumpbin option", "DISASM dumpbin option", "/DISASM dumpbin option"]
---
# /DISASM

Print the disassembly of code sections in the DUMPBIN output.

## Syntax

> **/DISASM**{**:**\[**BYTES**|**NOBYTES**]}

### Arguments

**BYTES**<br/>
Includes the instruction bytes together with the interpreted opcodes and arguments in the disassembly output. This is the default option.

**NOBYTES**<br/>
Does not include the instruction bytes in the disassembly output.

## Remarks

The **/DISASM** option displays disassembly of code sections in the file. It uses debug symbols if they are present in the file.

**/DISASM** should only be used on native, not managed, images. The equivalent tool for managed code is [ILDASM](/dotnet/framework/tools/ildasm-exe-il-disassembler).

Only the [/HEADERS](headers.md) DUMPBIN option is available for use on files produced by the [/GL (Whole program optimization)](gl-whole-program-optimization.md) compiler option.

## See also

[DUMPBIN Options](dumpbin-options.md)
