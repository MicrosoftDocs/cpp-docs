---
description: "Learn more about: Compiler Error C2514"
title: "Compiler Error C2514"
ms.date: "11/04/2016"
f1_keywords: ["C2514"]
helpviewer_keywords: ["C2514"]
ms.assetid: 4b7085e5-6714-4261-80b7-bc72e64ab3e8
---
# Compiler Error C2514

'class' : class has no constructors

The class, structure, or union has no constructor with a parameter list that matches the parameters being used to instantiate it.

A class must be fully declared before it can be instantiated.

The following sample generates C2514:

```cpp
// C2514.cpp
// compile with: /c
class f;

class g {
public:
    g (int x);
};

class fmaker {
   f *func1() {
      return new f(2);   // C2514
   }

   g *func2() {
      return new g(2);   // OK
   }
};
```
