---
title: "EXTERN (MASM)"
ms.date: "08/30/2018"
f1_keywords: ["extern"]
helpviewer_keywords: ["EXTERN directive"]
ms.assetid: 667d703d-3aaf-4139-a586-29bc5dab1aff
---
# EXTERN (MASM)

Defines one or more external variables, labels, or symbols called *name* whose type is *type*.

## Syntax

> **EXTERN** ⟦*language-type*⟧ *name* ⟦ __(__*altid*__)__ ⟧ __:__ *type* ⟦__,__ ⟦*language-type*⟧ *name* ⟦ __(__*altid*__)__ ⟧ __:__ *type* ...⟧

## Remarks

The *type* can be [ABS](../../assembler/masm/operator-abs.md), which imports *name* as a constant. Same as [EXTRN](../../assembler/masm/extrn.md).

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)
