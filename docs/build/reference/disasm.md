---
title: "/DISASM | Microsoft Docs"
ms.date: "1/17/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/disasm"]
dev_langs: ["C++"]
helpviewer_keywords: ["-DISASM dumpbin option", "DISASM dumpbin option", "/DISASM dumpbin option"]
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /DISASM

Print the disassembly of code sections in the DUMPBIN output.

## Syntax

> **/DISASM**{**:**\[**BYTES**|**NOBYTES**]}  

### Arguments

**BYTES**  
Includes the instruction bytes together with the interpreted opcodes and arguments in the disassembly output. This is the default option.

**NOBYTES**  
Does not include the instruction bytes in the disassembly output.

## Remarks

The **/DISASM** option displays disassembly of code sections in the file. It uses debug symbols if they are present in the file.

**/DISASM** should only be used on native, not managed, images. The equivalent tool for managed code is [ILDASM](/dotnet/framework/tools/ildasm-exe-il-disassembler).

Only the [/HEADERS](../../build/reference/headers.md) DUMPBIN option is available for use on files produced by the [/GL (Whole program optimization)](../../build/reference/gl-whole-program-optimization.md) compiler option.

## See also

[DUMPBIN Options](../../build/reference/dumpbin-options.md)  
