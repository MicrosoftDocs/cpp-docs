---
title: "UNION | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["union"]
dev_langs: ["C++"]
helpviewer_keywords: ["UNION directive"]
ms.assetid: 52504abf-7dc1-47c5-944c-b886803a0c6a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# UNION

Declares a union of one or more data types. The *field-declarations* must be valid data definitions. Omit the [ENDS](../../assembler/masm/ends-masm.md) *name* label on nested **UNION** definitions.

## Syntax

> *name* UNION [[*alignment*]] [[, NONUNIQUE]]<br/>
> *field-declarations*<br/>
> [[*name*]] ENDS

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>