---
description: "Learn more about: Compiler Error C2451"
title: "Compiler Error C2451"
ms.date: "11/04/2016"
f1_keywords: ["C2451"]
helpviewer_keywords: ["C2451"]
ms.assetid: a64c93a5-ab8d-4d39-ae57-9ee7ef803036
---
# Compiler Error C2451

conditional expression of type 'type' is illegal

The conditional expression evaluates to an integer type.

The following sample generates C2451:

```cpp
// C2451.cpp
class B {};

int main () {
   B b1;
   int i = 0;
   if (b1)   // C2451
   // try the following line instead
   // if (i)
      ;
}
```
