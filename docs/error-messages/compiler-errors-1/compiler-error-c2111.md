---
description: "Learn more about: Compiler Error C2111"
title: "Compiler Error C2111"
ms.date: "11/04/2016"
f1_keywords: ["C2111"]
helpviewer_keywords: ["C2111"]
ms.assetid: 38fd42ec-1480-4a44-aaca-ae4593ed5f50
---
# Compiler Error C2111

'+' : pointer addition requires integral operand

An attempt was made to add a nonintegral value to a pointer using the plus ( `+` ) operator.

The following sample generates C2111:

```cpp
// C2111.cpp
int main() {
   int *a = 0, *pa = 0, b = 0;
   double d = 0.00;

   a = pa + d;   // C2111
   a = pa + b;   // OK
}
```
