---
description: "Learn more about: Compiler Error C2627"
title: "Compiler Error C2627"
ms.date: "11/04/2016"
f1_keywords: ["C2627"]
helpviewer_keywords: ["C2627"]
ms.assetid: 7fc6c5ac-c7c9-4f0b-ad52-f52252526458
---
# Compiler Error C2627

'function' : member function not allowed in anonymous union

An [anonymous union](../../cpp/unions.md#anonymous_unions) cannot have member functions.

The following sample generates C2627:

```cpp
// C2627.cpp
int main() {
   union { void f(){} };   // C2627
   union X { void f(){} };
}
```
