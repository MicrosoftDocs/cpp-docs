---
description: "Learn more about: Compiler Error C3860"
title: "Compiler Error C3860"
ms.date: "11/04/2016"
f1_keywords: ["C3860"]
helpviewer_keywords: ["C3860"]
ms.assetid: 1fb5110d-594e-4f1c-8773-888233af1313
---
# Compiler Error C3860

type argument list following class type name must list parameters in the order used in type parameter list

A generic or template argument list was ill formed.

The following sample generates C3860:

```cpp
// C3860.cpp
// compile with: /LD
template <class T1, class T2>
struct A {
   void f();
};

template <class T2, class T1>
void A<T1, T2>::f() {}   // C3860
```

Possible resolution:

```cpp
// C3860b.cpp
// compile with: /c
template <class T1, class T2>
struct A {
   void f();
};

template <class T2, class T1>
void A<T2, T1>::f() {}
```

C3860 can also occur when using generics:

```cpp
// C3860c.cpp
// compile with: /clr
generic<class T,class U>
ref struct GC {
   void f();
};

generic<class T, class U>
void GC<T,T>::f() {}   // C3860
```

Possible resolution:

```cpp
// C3860d.cpp
// compile with: /clr /c
generic<class T,class U>
ref struct GC {
   void f();
};

generic<class T, class U>
void GC<T,U>::f() {}
```
