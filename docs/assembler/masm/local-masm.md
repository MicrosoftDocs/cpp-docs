---
title: "LOCAL (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["Local"]
dev_langs: ["C++"]
helpviewer_keywords: ["LOCAL directive"]
ms.assetid: 76147e2d-23ca-4f1e-8817-81428becd113
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# LOCAL (MASM)

In the first directive, within a macro, **LOCAL** defines labels that are unique to each instance of the macro.

## Syntax

> LOCAL *localname* [[, *localname*]] ...

> LOCAL *label* [[ [*count*] ]] [[:*type*]] [[, *label* [[ [*count*] ]] [[*type*]] ]] ...

## Remarks

In the second directive, within a procedure definition (**PROC**), **LOCAL** creates stack-based variables that exist for the duration of the procedure. The *label* may be a simple variable or an array containing *count* elements.

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>