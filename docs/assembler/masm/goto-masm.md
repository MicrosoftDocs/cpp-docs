---
description: "Learn more about: GOTO"
title: "GOTO (MASM)"
ms.date: "12/16/2019"
helpviewer_keywords: ["GOTO directive"]
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
---
# GOTO

Transfers assembly to the line marked **:**_macrolabel_.

## Syntax

> **GOTO** *macrolabel*

## Remarks

**GOTO** is permitted only inside [MACRO](macro.md), [FOR](for-masm.md), [FORC](forc.md), [REPEAT](repeat.md), and [WHILE](while-masm.md) blocks. The *macrolabel* target must be the only directive on the line and must be preceded by a leading colon.

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
