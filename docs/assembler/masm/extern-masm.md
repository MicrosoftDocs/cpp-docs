---
description: "Learn more about the MASM directive: EXTERN"
title: "EXTERN (MASM)"
ms.date: 1/10/2025
helpviewer_keywords: ["EXTERN directive"]
---
# EXTERN

Defines one or more external variables, labels, or symbols called *name* whose type is *type*.

## Syntax

> **EXTERN** ⟦*language-type*⟧ *name* ⟦ __(__*altid*__)__ ⟧ __:__ *type* ⟦__,__ ⟦*language-type*⟧ *name* ⟦ __(__*altid*__)__ ⟧ __:__ *type* ...⟧

## Remarks

The *language-type* argument is valid in 32-bit MASM only.

The *type* can be [`ABS`](operator-abs.md), which imports *name* as a constant. Same as [`EXTRN`](extrn.md).

The *type* can also be [`PROC`](proc.md), in which case *name* is treated as an external procedure.

## See also

[Directives Reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
