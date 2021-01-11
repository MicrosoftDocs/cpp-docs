---
description: "Learn more about: Compiler Error C2952"
title: "Compiler Error C2952"
ms.date: "11/04/2016"
f1_keywords: ["C2952"]
helpviewer_keywords: ["C2952"]
ms.assetid: a40e18a2-d02c-4511-854f-6c6fd6789a1a
---
# Compiler Error C2952

'declaration' : type declaration missing template parameter list

A template declaration was ill formed.

The following sample generates C2952:

```cpp
// C2952.cpp
// compile with: /c
template <class T>
struct S {
   template <class T1>
   struct S1 {
      void f();
   };
};

template <class T> void S<T>::S1<T>::f() {}   // C2952

// OK
template <class T>
template <class T1>
void S<T>::S1<T1>::f() {}
```

C2952 can also occur when using generics:

```cpp
// C2952b.cpp
// compile with: /clr /c
generic <class T>
ref struct GC {
   generic <class T1>
   ref struct GC1 {
      void f();
   };
};

generic <class T> void GC<T>::GC1<T>::f() {}   // C2952

// OK
generic <class T>
generic <class T1>
void GC<T>::GC1<T1>::f() {}
```
