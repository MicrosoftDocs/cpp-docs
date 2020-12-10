---
description: "Learn more about: Compiler Error C2104"
title: "Compiler Error C2104"
ms.date: "11/04/2016"
f1_keywords: ["C2104"]
helpviewer_keywords: ["C2104"]
ms.assetid: 2ea78896-72a6-4901-a1fa-f33ea88ad61b
---
# Compiler Error C2104

'&' on bit field ignored

You cannot take the address of a bit field.

The following sample generates C2104:

```cpp
// C2104.cpp
struct X {
   int sb : 1;
};

int main() {
   X x;
   &x.sb;   // C2104
   x.sb;   // OK
}
```
