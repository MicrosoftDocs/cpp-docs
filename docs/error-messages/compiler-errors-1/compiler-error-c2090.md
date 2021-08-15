---
description: "Learn more about: Compiler Error C2090"
title: "Compiler Error C2090"
ms.date: "11/04/2016"
f1_keywords: ["C2090"]
helpviewer_keywords: ["C2090"]
ms.assetid: e8176e55-382b-453d-aa27-6597f0274afd
---
# Compiler Error C2090

function returns array

A function cannot return an array. Return a pointer to an array instead.

The following sample generates C2090:

```cpp
// C2090.cpp
int func1(void)[] {}   // C2090
```

Possible resolution:

```cpp
// C2090b.cpp
// compile with: /c
int* func2(int * i) {
   return i;
}
```
