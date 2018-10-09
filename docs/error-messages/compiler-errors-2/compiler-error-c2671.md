---
title: "Compiler Error C2671 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2671"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2671"]
ms.assetid: fc0ee40f-c8f3-408f-b89d-745d149c4169
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2671

'function' : static member functions do not have 'this' pointers

A `static` member function tried to access `this`.

The following sample generates C2671:

```
// C2671.cpp
struct S {
   static S* const func() { return this; }  // C2671
};
```