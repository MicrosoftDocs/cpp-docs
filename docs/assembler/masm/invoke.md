---
title: "INVOKE"
ms.date: "08/30/2018"
f1_keywords: ["Invoke"]
helpviewer_keywords: ["INVOKE directive"]
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
---
# INVOKE

Calls the procedure at the address given by *expression*, passing the arguments on the stack or in registers according to the standard calling conventions of the language type.

## Syntax

> INVOKE *expression* [[, *arguments*]]

## Remarks

Each argument passed to the procedure may be an expression, a register pair, or an address expression (an expression preceded by `ADDR`).

## See also

- [Directives Reference](../../assembler/masm/directives-reference.md)
