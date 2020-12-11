---
description: "Learn more about: Compiler Error C2177"
title: "Compiler Error C2177"
ms.date: "11/04/2016"
f1_keywords: ["C2177"]
helpviewer_keywords: ["C2177"]
ms.assetid: 2a39a880-cddb-4d3e-a572-645a14c4c478
---
# Compiler Error C2177

constant too big

A constant value is too large for the variable type it is assigned.

The following sample generates C2177:

```cpp
// C2177.cpp
int main() {
   int a=18446744073709551616;   // C2177
   int b=18446744073709551615;   // OK
}
```
