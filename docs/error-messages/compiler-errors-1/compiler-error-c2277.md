---
description: "Learn more about: Compiler Error C2277"
title: "Compiler Error C2277"
ms.date: "11/04/2016"
f1_keywords: ["C2277"]
helpviewer_keywords: ["C2277"]
ms.assetid: 15a83b07-8731-4524-810b-267f65a7844f
---
# Compiler Error C2277

'identifier' : cannot take address of this member function

You cannot take the address of a member function.

The following sample generates C2277:

```cpp
// C2277.cpp
class A {
public:
   A();
};
(*pctor)() = &A::A;   // C2277
```
