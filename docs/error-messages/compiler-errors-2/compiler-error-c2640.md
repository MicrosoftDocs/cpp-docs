---
description: "Learn more about: Compiler Error C2640"
title: "Compiler Error C2640"
ms.date: "11/04/2016"
f1_keywords: ["C2640"]
helpviewer_keywords: ["C2640"]
ms.assetid: e4d137ab-ed1d-457c-9eec-b70d97f1b0b4
---
# Compiler Error C2640

'identifier' : __based modifier illegal on reference

The **`__based`** modifier can be used on pointers only.

The following sample generates C2640:

```cpp
// C2640.cpp
void f(int i) {
    void *vp;
    int _based(vp) &vr = I;  // C2640
}
```
