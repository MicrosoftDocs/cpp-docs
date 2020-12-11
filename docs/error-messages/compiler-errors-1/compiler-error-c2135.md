---
description: "Learn more about: Compiler Error C2135"
title: "Compiler Error C2135"
ms.date: "11/04/2016"
f1_keywords: ["C2135"]
helpviewer_keywords: ["C2135"]
ms.assetid: aa360d22-4f79-4de1-b384-93cadd10975f
---
# Compiler Error C2135

'bit operator' : illegal bit field operation

The address-of operator (`&`) cannot be applied to a bit field.

The following sample generates C2135:

```cpp
// C2135.cpp
struct S {
   int i : 1;
};

struct T {
   int j;
};
int main() {
   &S::i;   // C2135 address of a bit field
   &T::j;   // OK
}
```
