---
description: "Learn more about: Compiler Error C2782"
title: "Compiler Error C2782"
ms.date: "11/04/2016"
f1_keywords: ["C2782"]
helpviewer_keywords: ["C2782"]
ms.assetid: 8b685422-294d-4f64-9f3d-c14eaf03a93d
---
# Compiler Error C2782

'declaration' : template parameter 'identifier' is ambiguous

The compiler cannot determine the type of a template argument.

The following sample generates C2782:

```cpp
// C2782.cpp
template<typename T>
void f(T, T) {}

int main() {
   f(1, 'c');   // C2782
   // try the following line instead
   // f<int>(1, 'c');
}
```

C2782 can also occur when using generics:

```cpp
// C2782b.cpp
// compile with: /clr
generic<typename T> void gf(T, T) { }

int main() {
   gf(1, 'c'); // C2782
   // try the following line instead
   // gf<int>(1, 'c');
}
```
