---
description: "Learn more about: Compiler Error C2671"
title: "Compiler Error C2671"
ms.date: "11/04/2016"
f1_keywords: ["C2671"]
helpviewer_keywords: ["C2671"]
ms.assetid: fc0ee40f-c8f3-408f-b89d-745d149c4169
---
# Compiler Error C2671

'function' : static member functions do not have 'this' pointers

A **`static`** member function tried to access **`this`**.

The following sample generates C2671:

```cpp
// C2671.cpp
struct S {
   static S* const func() { return this; }  // C2671
};
```
