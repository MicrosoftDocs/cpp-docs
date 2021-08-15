---
description: "Learn more about: Compiler Error C2877"
title: "Compiler Error C2877"
ms.date: "11/04/2016"
f1_keywords: ["C2877"]
helpviewer_keywords: ["C2877"]
ms.assetid: 0b54837e-fcae-4d90-9658-623250435e24
---
# Compiler Error C2877

'symbol' is not accessible from 'class'

All members derived from a base class must be accessible in the derived class.

The following sample generates C2877:

```cpp
// C2877.cpp
// compile with: /c
class A {
private:
   int a;
};

class B : public A {
   using A::a;   // C2877
};
```
