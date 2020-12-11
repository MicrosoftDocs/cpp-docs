---
description: "Learn more about: Compiler Error C2184"
title: "Compiler Error C2184"
ms.date: "11/04/2016"
f1_keywords: ["C2184"]
helpviewer_keywords: ["C2184"]
ms.assetid: 80fc8bff-7d76-4bde-94d2-01d84bb6824a
---
# Compiler Error C2184

'type' : illegal type for __except expression, must be an integral

A type was used in an [__except](../../c-language/try-except-statement-c.md) statement, but the type is not allowed.

The following sample generates C2184:

```cpp
// C2184.cpp
void f() {
   int * p;
   __try{}
   __except(p){};   // C2184
}
```

Possible resolution:

```cpp
// C2184b.cpp
// compile with: /c
void f() {
   int i = 0;
   __try{}
   __except(i){};
}
```
