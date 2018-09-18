---
title: "Compiler Error C2489 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2489"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2489"]
ms.assetid: 67d8cd98-db7e-4f7f-86b4-4af7bc89ec8b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2489

'identifier' : initialized auto or register variable not allowed at function scope in 'naked' function

For more information, see [naked](../../cpp/naked-cpp.md).

The following sample generates C2489:

```
// C2489.cpp
// processor: x86
__declspec( naked ) int func() {
   int i = 1;   // C2489
   register int j = 1;   // C2489
}
```