---
description: "Learn more about: Compiler Error C2624"
title: "Compiler Error C2624"
ms.date: "11/04/2016"
f1_keywords: ["C2624"]
helpviewer_keywords: ["C2624"]
ms.assetid: 32f2ec15-a7cd-4049-a64b-131746d3152b
---
# Compiler Error C2624

local classes cannot be used to declare 'extern' variables

A local class or structure cannot be used to declare **`extern`** variables.

The following sample generates C2624:

```cpp
// C2624.cpp
int main() {
   struct C {};
   extern C ac;   // C2624
}
```
