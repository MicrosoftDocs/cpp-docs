---
title: "INSTR | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["InStr"]
dev_langs: ["C++"]
helpviewer_keywords: ["INSTR directive"]
ms.assetid: fc37f6a2-3c95-47b2-b6bb-1066edd25994
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# INSTR

Finds the first occurrence of *textitem2* in *textitem1*.

## Syntax

> *name* INSTR [[*position*,]] *textitem1*, *textitem2*

## Remarks

The starting *position* is optional. Each text item can be a literal string, a constant preceded by a `%`, or the string returned by a macro function.

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>