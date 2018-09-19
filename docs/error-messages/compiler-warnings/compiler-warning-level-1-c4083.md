---
title: "Compiler Warning (level 1) C4083 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4083"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4083"]
ms.assetid: e7d3344e-5645-4d56-8460-d1acc9145ada
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4083

expected 'token'; found identifier 'identifier'

An identifier occurs in the wrong place in a **#pragma** statement.

## Example

```
// C4083.cpp
// compile with: /W1 /LD
#pragma warning disable:4083    // C4083
#pragma warning(disable:4083)   //correct
```

Check the syntax of the [#pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md) directives.