---
description: "Learn more about: Compiler Error C2976"
title: "Compiler Error C2976"
ms.date: "11/04/2016"
f1_keywords: ["C2976"]
helpviewer_keywords: ["C2976"]
ms.assetid: d9bf9836-325e-4f72-a7e3-a67cf19d32e7
---
# Compiler Error C2976

'identifier' : too few type arguments

A generic or template is missing one or more actual arguments. Check the generic or template declaration to find the correct number of parameters.

This error can be caused by missing template arguments in C++ Standard Library components.

The following sample generates C2976:

```cpp
// C2976.cpp
template <class T>
struct TC {
   T t;
};
int main() {
   TC<>* t;   // C2976
   TC<int>* t2;   // OK
}
```

C2976 can also occur when using generics:

```cpp
// C2976b.cpp
// compile with: /clr
generic <class T>
ref struct GC {
   T t;
};

int main() {
   GC<>^ g;   // C2976
   GC<int>^ g2;   // OK
}
```
