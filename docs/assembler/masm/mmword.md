---
title: "MMWORD"
description: "Learn more about: MMWORD"
ms.date: 12/17/2019
f1_keywords: ["MMWORD"]
helpviewer_keywords: ["MMWORD directive"]
---
# MMWORD

Used for 64-bit multimedia operands with MMX and SSE (XMM) instructions.

## Syntax

> **MMWORD**

## Remarks

**MMWORD** is a type.  Prior to **MMWORD** being added to MASM, equivalent functionality could have been achieved with:

```asm
    mov mm0, qword ptr [ebx]
```

While both instructions work on 64-bit operands, **QWORD** is the type for 64-bit unsigned integers and **MMWORD** is the type for a 64-bit multimedia value.

**MMWORD** is intended to represent the same type as [__m64](../../cpp/m64.md).

## Example

```asm
    movq     mm0, mmword ptr [ebx]
```

## See also

[MASM BNF Grammar](masm-bnf-grammar.md)
