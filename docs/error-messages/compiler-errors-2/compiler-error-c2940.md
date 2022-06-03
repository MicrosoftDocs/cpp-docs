---
description: "Learn more about: Compiler Error C2940"
title: "Compiler Error C2940"
ms.date: 06/01/2022
f1_keywords: ["C2940"]
helpviewer_keywords: ["C2940"]
ms.assetid: af6bf2bf-8de6-4cfd-bbf0-4c6b32a30edf
---
# Compiler Error C2940

> '*class*' : type-class-id redefined as a local typedef

You can't use a generic or template class as a local **`typedef`**.

This error is obsolete in Visual Studio 2022 and later versions.

The following sample generates C2940:

```cpp
// C2940.cpp
template<class T>
struct TC {};
int main() {
   typedef int TC<int>;   // C2940
   typedef int TC;   // OK
}
```

C2940 can also occur when using generics:

```cpp
// C2940b.cpp
// compile with: /clr
generic<class T>
ref struct GC { };

int main() {
   typedef int GC<int>;   // C2940
   typedef int GC;
}
```
