---
description: "Learn more about: Compiler Error C3280"
title: "Compiler Error C3280"
ms.date: "11/04/2016"
f1_keywords: ["C3280"]
helpviewer_keywords: ["C3280"]
ms.assetid: 86dc5bbc-8818-4786-a728-9334268d308b
---
# Compiler Error C3280

'class' : a member-function of a managed type cannot be compiled as an unmanaged function

Managed class member functions cannot be compiled as unmanaged functions.

The following sample generates C3280:

```cpp
// C3280_2.cpp
// compile with: /clr
ref struct A {
   void func();
};

#pragma managed(push,off)

void A::func()   // C3280
{
}

#pragma managed(pop)
```
