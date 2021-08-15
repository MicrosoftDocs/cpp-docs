---
description: "Learn more about: Compiler Error C2932"
title: "Compiler Error C2932"
ms.date: "11/04/2016"
f1_keywords: ["C2932"]
helpviewer_keywords: ["C2932"]
ms.assetid: c28e88d9-e654-4367-bfb4-13c780bca9bd
---
# Compiler Error C2932

'class' : type-class-id redefined as a data member of 'identifier'

You cannot use a generic or template class as a data member.

The following sample generates C2932:

```cpp
// C2932.cpp
// compile with: /c
template<class T>
struct TC {};

struct MyStruct {
   int TC<int>;   // C2932
   int TC;   // OK
};
```

C2932 can also occur when using generics:

```cpp
// C2932b.cpp
// compile with: /clr /c
generic<class T>
ref struct GC {};

struct MyStruct {
   int GC<int>;   // C2932
   int GC;   // OK
};
```
