---
description: "Learn more about: EXTERN"
title: "EXTERN (MASM)"
ms.date: "12/06/2019"
helpviewer_keywords: ["EXTERN directive"]
ms.assetid: 667d703d-3aaf-4139-a586-29bc5dab1aff
---
# EXTERN

Defines one or more external variables, labels, or symbols called *name* whose type is *type*.

## Syntax

> **EXTERN** ⟦*language-type*⟧ *name* ⟦ __(__*altid*__)__ ⟧ __:__ *type* ⟦__,__ ⟦*language-type*⟧ *name* ⟦ __(__*altid*__)__ ⟧ __:__ *type* ...⟧

## Remarks

The *language-type* argument is valid in 32-bit MASM only.

The *type* can be [ABS](operator-abs.md), which imports *name* as a constant. Same as [EXTRN](extrn.md).

## See also

[Directives Reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
