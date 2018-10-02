---
title: "Compiler Warning (level 1) C4186 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4186"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4186"]
ms.assetid: caf3f7d8-f305-426b-8d4e-2b96f5c269ea
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4186

\#import attribute 'attribute' requires count arguments; ignored

A `#import` attribute has the wrong number of arguments.

## Example

```
// C4186.cpp
// compile with: /W1 /c
#import "stdole2.tlb" no_namespace("abc") rename("a","b","c")  // C4186
```

The `no_namespace` attribute takes no arguments. The **rename** attribute takes only two arguments.