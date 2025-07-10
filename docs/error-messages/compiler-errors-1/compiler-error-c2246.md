---
title: "Compiler Error C2246"
description: "Learn more about: Compiler Error C2246"
ms.date: 11/04/2016
f1_keywords: ["C2246"]
helpviewer_keywords: ["C2246"]
---
# Compiler Error C2246

'identifier' : illegal static data member in locally defined class

A member of a class, structure, or union with local scope is declared **`static`**.

The following sample generates C2246:

```cpp
// C2246.cpp
// compile with: /c
void func( void ) {
   class A { static int i; };   // C2246  i is local to func
   static int j;   // OK
}
```
