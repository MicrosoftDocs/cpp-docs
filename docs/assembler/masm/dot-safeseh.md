---
description: "Learn more about: .SAFESEH (32-bit MASM)"
title: ".SAFESEH"
ms.date: "11/05/2019"
f1_keywords: [".SAFESEH"]
helpviewer_keywords: ["registering functions as exception handlers", "SAFESEH directive", ".SAFESEH directive"]
ms.assetid: 6eaac8c4-c46f-47ae-8a66-f5cfeb267e43
---
# .SAFESEH (32-bit MASM)

Registers a function as a structured exception handler. (32-bit MASM only.)

## Syntax

> **.SAFESEH** *identifier*

## Remarks

*identifier* must be the ID for a locally defined [PROC](proc.md) or [EXTRN](extrn.md) PROC. A [LABEL](label-masm.md) is not allowed. The .SAFESEH directive requires the [/safeseh](ml-and-ml64-command-line-reference.md) ml.exe command-line option.

For more information about structured exception handlers, see [/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md).

For example, to register a safe exception handler, create a new MASM file (as follows), assemble with /safeseh, and add it to the linked objects.

```asm
.386
.model  flat
MyHandler   proto
.safeseh    MyHandler
end
```

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
