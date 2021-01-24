---
description: "Learn more about: INVOKE"
title: "INVOKE"
ms.date: "11/05/2019"
f1_keywords: ["Invoke"]
helpviewer_keywords: ["INVOKE directive"]
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
---
# INVOKE

(32-bit MASM only.) Calls the procedure at the address given by *expression*, passing the arguments on the stack or in registers according to the standard calling conventions of the language type.

## Syntax

> **INVOKE** *expression* ⟦__,__ *argument* ...⟧

## Remarks

Each argument passed to the procedure may be an expression, a register pair, or an address expression (an expression preceded by **ADDR**).

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
