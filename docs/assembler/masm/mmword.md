---
description: "Learn more about: MMWORD"
title: "MMWORD"
ms.date: "12/17/2019"
f1_keywords: ["MMWORD"]
helpviewer_keywords: ["MMWORD directive"]
ms.assetid: b4c5a104-9078-4fb4-afc3-d1e63abe562a
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

## See Also

[MASM BNF Grammar](masm-bnf-grammar.md)
