---
title: "LABEL (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["Label"]
dev_langs: ["C++"]
helpviewer_keywords: ["LABEL directive"]
ms.assetid: 39ec44e8-91e6-4f3c-8cf0-b66479974e42
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# LABEL (MASM)

Creates a new label by assigning the current location-counter value and the given *type* to *name*.

## Syntax

> *name* LABEL *type*

> *name* LABEL [[NEAR | FAR | PROC]] PTR [[*type*]]

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>