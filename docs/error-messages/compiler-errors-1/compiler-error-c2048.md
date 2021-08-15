---
description: "Learn more about: Compiler Error C2048"
title: "Compiler Error C2048"
ms.date: "11/04/2016"
f1_keywords: ["C2048"]
helpviewer_keywords: ["C2048"]
ms.assetid: 44704726-85fc-42f0-afb9-194df8c4ca7c
---
# Compiler Error C2048

more than one default

A **`switch`** statement contains multiple **`default`** labels. Delete one of the **`default`** labels to resolve the error.

The following sample generates C2048:

```cpp
// C2048.cpp
int main() {
   int a = 1;
   switch (a) {
      case 1:
         a = 0;
      default:
         a = 2;
      default:   // C2048
         a = 3;
   }
}
```

Possible resolution:

```cpp
// C2048b.cpp
int main() {
   int a = 1;
   switch (a) {
      case 1:
         a = 0;
      default:
         a = 2;
   }
}
```
