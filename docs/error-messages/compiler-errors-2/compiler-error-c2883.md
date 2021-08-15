---
description: "Learn more about: Compiler Error C2883"
title: "Compiler Error C2883"
ms.date: "11/04/2016"
f1_keywords: ["C2883"]
helpviewer_keywords: ["C2883"]
ms.assetid: 5c6d689d-ed42-41ad-b5c0-e9c2e0b8c356
---
# Compiler Error C2883

'name' : function declaration conflicts with 'identifier' introduced by using-declaration

You tried to define a function more than once. The first definition was made from a namespace with a **`using`** declaration. The second was a local definition.

The following sample generates C2883:

```cpp
// C2883.cpp
namespace A {
   void z(int);
}

int main() {
   using A::z;
   void z(int);   // C2883  z is already defined
}
```
