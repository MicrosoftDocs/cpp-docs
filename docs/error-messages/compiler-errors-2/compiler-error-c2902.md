---
description: "Learn more about: Compiler Error C2902"
title: "Compiler Error C2902"
ms.date: "11/04/2016"
f1_keywords: ["C2902"]
helpviewer_keywords: ["C2902"]
ms.assetid: 89d78d0e-78e5-4c2c-a0f9-a60110e9395e
---
# Compiler Error C2902

'token' : unexpected token following 'template', identifier expected

The token following the keyword **`template`** was not an identifier.

The following sample generates C2902:

```cpp
// C2902.cpp
// compile with: /c
namespace N {
   template<class T> class X {};
   class Y {};
}
void g() {
   N::template + 1;   // C2902
}

void f() {
   N::template X<int> x1;   // OK
}
```

C2902 can also occur when using generics:

```cpp
// C2902b.cpp
// compile with: /clr /c
namespace N {
   generic<class T> ref class GC {};
}

void f() {
   N::generic + 1;   // C2902
   N::generic GC<int>^ x;
}
```
