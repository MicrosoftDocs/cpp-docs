---
title: "XMMWORD"
description: "Learn more about: XMMWORD"
ms.date: 12/17/2019
f1_keywords: ["XMMWORD"]
helpviewer_keywords: ["XMMWORD directive"]
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

## See also

[MASM BNF Grammar](masm-bnf-grammar.md)
