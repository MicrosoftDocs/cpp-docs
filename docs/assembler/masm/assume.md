---
description: "Learn more about: ASSUME"
title: "ASSUME"
ms.date: "11/05/2019"
f1_keywords: ["ASSUME"]
helpviewer_keywords: ["ASSUME directive"]
ms.assetid: cd162070-aee9-4c65-babc-005c6cc73d7c
---
# ASSUME

Enables error checking for register values. (32-bit MASM only.)

## Syntax

> **ASSUME**  *segregister*__:__*name* ⟦__,__ *segregister*__:__*name*...⟧\
> **ASSUME**  *dataregister*__:__*type* ⟦__,__ *dataregister*__:__*type*...⟧\
> **ASSUME**  *register*__:ERROR__ ⟦__,__ *register*__:ERROR__...⟧\
> **ASSUME**  ⟦*register*__:__⟧**NOTHING** ⟦__,__ *register*__:NOTHING__...⟧

## Remarks

After an **ASSUME** is put into effect, the assembler watches for changes to the values of the given registers. **ERROR** generates an error if the register is used. **NOTHING** removes register error checking. You can combine different kinds of assumptions in one statement.

## See also

[Directives Reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
