---
description: "Learn more about: Compiler Error C2124"
title: "Compiler Error C2124"
ms.date: "11/04/2016"
f1_keywords: ["C2124"]
helpviewer_keywords: ["C2124"]
ms.assetid: 93392aaa-5582-4d68-8cc5-bd9c62a0ae7e
---
# Compiler Error C2124

divide or mod by zero

A constant expression has a zero denominator. To resolve the error, do not divide by zero.

The following sample generates C2124:

```cpp
// C2124.cpp
int main() {
  int i = 1 / 0;   // C2124  do not divide by zero
  int i2 = 12 / 2;   // OK
}
```
