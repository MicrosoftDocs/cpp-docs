---
description: "Learn more about: XMMWORD"
title: "XMMWORD"
ms.date: "12/17/2019"
f1_keywords: ["XMMWORD"]
helpviewer_keywords: ["XMMWORD directive"]
ms.assetid: 18026d32-5cab-403e-ad7e-382fb41aa9b8
---
# XMMWORD

Used for 128-bit multimedia operands with MMX and SSE (XMM) instructions.

## Syntax

> **XMMWORD**

## Remarks

**XMMWORD** is intended to represent the same type as [__m128](../../cpp/m128.md).

## Example

```asm
    movdqa   xmm0, xmmword ptr [ebx]
```

## See Also

[MASM BNF Grammar](masm-bnf-grammar.md)
