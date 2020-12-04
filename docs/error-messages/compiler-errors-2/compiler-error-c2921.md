---
description: "Learn more about: Compiler Error C2921"
title: "Compiler Error C2921"
ms.date: "11/04/2016"
f1_keywords: ["C2921"]
helpviewer_keywords: ["C2921"]
ms.assetid: 323642a0-bfc4-4942-9f41-c3adf5c54296
---
# Compiler Error C2921

redefinition : 'class' : class template or generic is being redeclared as 'type'

A generic or template class has multiple declarations that are not equivalent. To fix this error, use different names for different types, or remove the redefinition of the type name.

The following sample generates C2921:

```cpp
// C2921.cpp
// compile with: /c
template <class T> struct TC2 {};
typedef int TC2;   // C2921
// try the following line instead
// typedef struct TC2<int> x;   // OK - declare a template instance
```

C2921 can also occur when using generics.

```cpp
// C2921b.cpp
// compile with: /clr /c
generic <class T> ref struct GC2 {};
typedef int GC2;   // C2921
// try the following line instead
// typedef ref struct GC2<int> x;
```
