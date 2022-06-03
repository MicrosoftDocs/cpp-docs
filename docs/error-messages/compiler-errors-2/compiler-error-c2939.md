---
description: "Learn more about: Compiler Error C2939"
title: "Compiler Error C2939"
ms.date: 06/01/2022
f1_keywords: ["C2939"]
helpviewer_keywords: ["C2939"]
ms.assetid: 455b050b-f2dc-4b5b-bd6a-e1f81d3d1644
---
# Compiler Error C2939

> '*class*' : type-class-id redefined as a local data variable

You can't use a generic or template class as a local data variable.

This error is obsolete in Visual Studio 2022 and later versions.

This error can be caused if braces are improperly matched.

The following sample generates C2939:

```cpp
// C2939.cpp
template<class T>
struct TC { };
int main() {
   int TC<int>;   // C2939
   int TC;   // OK
}
```

C2939 can also occur when using generics:

```cpp
// C2939b.cpp
// compile with: /clr
generic<class T>
ref struct GC { };

int main() {
   int GC<int>;   // C2939
   int GC;   // OK
}
```
