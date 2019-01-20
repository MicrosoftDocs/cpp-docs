---
title: "Direction Flag"
ms.date: "11/04/2016"
f1_keywords: ["c.flags"]
helpviewer_keywords: ["direction flag"]
ms.assetid: 0836b4af-dbbb-4ab8-a4b2-156f2e2099e2
---
# Direction Flag

The direction flag is a CPU flag specific to all Intel x86-compatible CPUs. It applies to all assembly instructions that use the REP (repeat) prefix, such as MOVS, MOVSD, MOVSW, and others. Addresses provided to applicable instructions are increased if the direction flag is cleared.

The C run-time routines assume that the direction flag is cleared. If you are using other functions with the C run-time functions, you must ensure that the other functions leave the direction flag alone or restore it to its original condition. Expecting the direction flag to be clear upon entry makes the run-time code faster and more efficient.

The C Run-Time library functions, such as the string-manipulation and buffer-manipulation routines, expect the direction flag to be clear.

## See also

- [CRT Library Features](../c-runtime-library/crt-library-features.md)
