---
description: "Learn more about: .STACK (32-bit MASM)"
title: ".STACK"
ms.date: "11/05/2019"
f1_keywords: [".STACK"]
helpviewer_keywords: [".STACK directive"]
ms.assetid: 70019463-5d4f-41b6-8464-023a8ac2466f
---
# .STACK (32-bit MASM)

When used with [.MODEL](dot-model.md), defines a stack segment (with segment name **STACK**). The optional *size* specifies the number of bytes for the stack (default 1,024). The **.STACK** directive automatically closes the stack statement. (32-bit MASM only.)

## Syntax

> **.STACK** ⟦*size*⟧

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
