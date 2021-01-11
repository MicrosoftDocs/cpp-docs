---
description: "Learn more about: Fatal Error C1026"
title: "Fatal Error C1026"
ms.date: "11/04/2016"
f1_keywords: ["C1026"]
helpviewer_keywords: ["C1026"]
ms.assetid: 89bb9d40-673a-44aa-a9f4-b42c07b49d44
---
# Fatal Error C1026

parser stack overflow, program too complex

The space required to parse the program caused a compiler stack overflow.

Decrease the complexity of expressions by:

- Decreasing nesting in **`for`** and **`switch`** statements. Put more deeply nested statements in separate functions.

- Breaking up long expressions that involve comma operators or function calls.
