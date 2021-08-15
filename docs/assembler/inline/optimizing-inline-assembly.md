---
description: "Learn more about: Optimizing Inline Assembly"
title: "Optimizing Inline Assembly"
ms.date: "08/30/2018"
helpviewer_keywords: ["storage, optimizing in inline assembly", "optimization, inline assembly", "inline assembly, optimizing", "optimizing performance, inline assembly", "__asm keyword [C++], optimizing"]
ms.assetid: 52a7ec83-9782-4d96-94c1-53bb2ac9e8c8
---
# Optimizing Inline Assembly

**Microsoft Specific**

The presence of an **`__asm`** block in a function affects optimization in several ways. First, the compiler doesn't try to optimize the **`__asm`** block itself. What you write in assembly language is exactly what you get. Second, the presence of an **`__asm`** block affects register variable storage. The compiler avoids enregistering variables across an **`__asm`** block if the register's contents would be changed by the **`__asm`** block. Finally, some other function-wide optimizations will be affected by the inclusion of assembly language in a function.

**END Microsoft Specific**

## See also

[Inline Assembler](../../assembler/inline/inline-assembler.md)<br/>
