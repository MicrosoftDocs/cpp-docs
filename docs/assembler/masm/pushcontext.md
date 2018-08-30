---
title: "PUSHCONTEXT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["PUSHCONTEXT"]
dev_langs: ["C++"]
helpviewer_keywords: ["PUSHCONTEXT directive"]
ms.assetid: 18e528ee-df6c-4ce6-8823-b35b40f757fd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# PUSHCONTEXT
Saves part or all of the current `context`: segment register assumes, radix value, listing and cref flags, or processor/coprocessor values. The `context` can be **ASSUMES**, `RADIX`, **LISTING**, **CPU**, or **ALL**.

## Syntax

```

PUSHCONTEXT context
```

## See Also
[Directives Reference](../../assembler/masm/directives-reference.md)<br/>