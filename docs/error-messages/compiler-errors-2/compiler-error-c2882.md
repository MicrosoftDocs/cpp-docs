---
description: "Learn more about: Compiler Error C2882"
title: "Compiler Error C2882"
ms.date: "11/04/2016"
f1_keywords: ["C2882"]
helpviewer_keywords: ["C2882"]
ms.assetid: 617018ee-5a0d-4b8d-9612-77e8ae52679b
---
# Compiler Error C2882

'name' : illegal use of namespace identifier in expression

You tried to use the name of a namespace in an expression.

The following sample generates C2882:

```cpp
// C2882.cpp
// compile with: /c
namespace A {
   int k;
}

int i = A;   // C2882, can't assign A to i
```
