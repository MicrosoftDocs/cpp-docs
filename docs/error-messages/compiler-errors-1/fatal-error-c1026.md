---
title: "Fatal Error C1026 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1026"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1026"]
ms.assetid: 89bb9d40-673a-44aa-a9f4-b42c07b49d44
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1026

parser stack overflow, program too complex

The space required to parse the program caused a compiler stack overflow.

Decrease the complexity of expressions by:

- Decreasing nesting in `for` and `switch` statements. Put more deeply nested statements in separate functions.

- Breaking up long expressions that involve comma operators or function calls.