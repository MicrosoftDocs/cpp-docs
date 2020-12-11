---
description: "Learn more about: Compiler Error C2884"
title: "Compiler Error C2884"
ms.date: "11/04/2016"
f1_keywords: ["C2884"]
helpviewer_keywords: ["C2884"]
ms.assetid: 8b4d43e3-3fb5-4360-86c8-de59d8736d4f
---
# Compiler Error C2884

'name' : introduced by using-declaration conflicts with local function 'function'

You tried to define a function more than once. The first definition is a local definition. The second is from a namespace with a **`using`** declaration.

The following sample generates C2884:

```cpp
// C2884.cpp
namespace A {
   void z(int);
}

void f() {
   void z(int);
   using A::z;   // C2884 z is already defined
}
```
