---
title: "Compiler Error C2110"
description: "Learn more about: Compiler Error C2110"
ms.date: 11/04/2016
f1_keywords: ["C2110"]
helpviewer_keywords: ["C2110"]
---
# Compiler Error C2110

'+' : cannot add two pointers

An attempt was made to add two pointer values using the plus (`+`) operator.

The following sample generates C2110:

```cpp
// C2110.cpp
int main() {
   int a = 0;
   int *pa;
   int *pb;
   a = pa + pb;   // C2110
}
```
