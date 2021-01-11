---
description: "Learn more about: Compiler Error C3203"
title: "Compiler Error C3203"
ms.date: "11/04/2016"
f1_keywords: ["C3203"]
helpviewer_keywords: ["C3203"]
ms.assetid: 6356770e-22c1-434c-91fe-f60b0aa23b91
---
# Compiler Error C3203

'type' : unspecialized class template or generic can't be used as a template or generic argument for template or generic parameter 'param', expected a real type

You passed an invalid argument to a class template or generic. The class template or generic expects a type as a parameter.

This error can be generated as a result of compiler conformance work that was done for Visual Studio 2005: an unspecialized class template can't be used as a template argument in a base class list. To resolve C3203, explicitly add the template type parameter(s) to the template class name when using it as a template parameter in a base class list.

```cpp
// C3203.cpp
template< typename T >
struct X {
   void f(X) {}
};

template< typename T >
struct Y : public X<Y> {   // C3203
// try the following line instead
// struct Y : public X<Y<T> > {
   void f(Y) {}
};

int main() {
   Y<int> y;
}
```

The following sample generates C3203 and shows how to fix it:

```cpp
// C3203_b.cpp
// compile with: /c
template <class T>
struct S1 {};

template <class T>
class C1 {};

typedef C1<S1> MyC1;   // C3203

// OK
template <template <class> class T>
class C2 {};

typedef C2<S1> MyC1;

template <class T>
class C3 {};

typedef C3<S1<int> > MyC12;
```

C3203 can also occur when using generics:

```cpp
// C3203_c.cpp
// compile with: /clr /c
generic <class T>
value struct GS1 {};

generic <class T>
value struct GC1 {};

typedef GC1<GS1> MyGC1;   // C3203
typedef GC1<GS1<int> > MyGC2;   // OK
```
