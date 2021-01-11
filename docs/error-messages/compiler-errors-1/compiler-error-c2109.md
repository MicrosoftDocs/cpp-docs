---
description: "Learn more about: Compiler Error C2109"
title: "Compiler Error C2109"
ms.date: "11/04/2016"
f1_keywords: ["C2109"]
helpviewer_keywords: ["C2109"]
ms.assetid: 2d1ac79d-a985-4904-a38b-b270578d664d
---
# Compiler Error C2109

subscript requires array or pointer type

The subscript was used on a variable that was not an array.

The following sample generates C2109:

```cpp
// C2109.cpp
int main() {
   int a, b[10] = {0};
   a[0] = 1;   // C2109
   b[0] = 1;   // OK
}
```
