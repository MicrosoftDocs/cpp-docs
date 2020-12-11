---
description: "Learn more about: EXTERNDEF"
title: "EXTERNDEF"
ms.date: "12/06/2019"
f1_keywords: ["EXTERNDEF"]
helpviewer_keywords: ["EXTERNDEF directive"]
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
---
# EXTERNDEF

Defines one or more external variables, labels, or symbols called *name* whose type is *type*.

## Syntax

> **EXTERNDEF** ⟦*language-type*⟧ *name*__:__*type* ⟦__,__ ⟦*language-type*⟧ *name*__:__*type* ...⟧

## Remarks

The *language-type* argument is valid in 32-bit MASM only.

If *name* is defined in the module, it is treated as [PUBLIC](public-masm.md). If *name* is referenced in the module, it is treated as [EXTERN](extern-masm.md). If *name* is not referenced, it is ignored. The *type* can be [ABS](operator-abs.md), which imports *name* as a constant. Normally used in include files.

## See also

[Directives Reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
