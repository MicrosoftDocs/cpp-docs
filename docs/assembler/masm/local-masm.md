---
description: "Learn more about: LOCAL"
title: "LOCAL (MASM)"
ms.date: "12/16/2019"
f1_keywords: ["Local"]
helpviewer_keywords: ["LOCAL directive"]
ms.assetid: 76147e2d-23ca-4f1e-8817-81428becd113
---
# LOCAL

In the first directive, within a macro, **LOCAL** defines labels that are unique to each instance of the macro.

## Syntax

> **LOCAL** *localId* ⟦, *localId* ...⟧
>
> **LOCAL** *labelId* ⟦ __\[__*count*__]__ ⟧ ⟦__:__*qualifiedType*⟧ ⟦__,__ *labelId* ⟦ __\[__*count*__]__ ⟧ ⟦*qualifiedType*⟧ ...⟧

## Remarks

In the second directive, within a procedure definition (**PROC**), **LOCAL** creates stack-based variables that exist for the duration of the procedure. The *labelId* may be a simple variable or an array containing *count* elements, where *count* is a constant expression.

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
