---
description: "Learn more about: Compiler Error C2118"
title: "Compiler Error C2118"
ms.date: "11/04/2016"
f1_keywords: ["C2118"]
helpviewer_keywords: ["C2118"]
ms.assetid: bf4315d0-f085-4323-b813-96ee61a13bde
---
# Compiler Error C2118

negative subscript

The value defining the array size is larger than the maximum array size or smaller than zero.

The following sample generates C2118:

```cpp
// C2118.cpp
int main() {
   int array1[-1];   // C2118
   int array2[3];   // OK
}
```
