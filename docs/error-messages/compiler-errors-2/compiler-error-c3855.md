---
description: "Learn more about: Compiler Error C3855"
title: "Compiler Error C3855"
ms.date: "11/04/2016"
f1_keywords: ["C3855"]
helpviewer_keywords: ["C3855"]
ms.assetid: ed90f8c0-4154-4243-b066-493913df5727
---
# Compiler Error C3855

'class': type parameter 'param' is incompatible with the declaration

The compiler found nontype template or generic parameters with different names. This can occur when a specified template parameter in the definition of a template specialization is incompatible with its declaration.

The following sample generates C3855:

```cpp
// C3855.cpp
template <int N>
struct C {
   void f();
};

template <char N>
void C<N>::f() {}   // C3855
```

Possible resolution:

```cpp
// C3855b.cpp
// compile with: /c
template <int N>
struct C {
   void f();
};

template <int N>
void C<N>::f() {}
```

C3855 can also occur when using generics:

```cpp
// C3855c.cpp
// compile with: /clr
generic <class T>
ref struct GC1 {
   generic <class U>
   ref struct GC2;
};

generic <class T>
generic <class U>
generic <class V>
ref struct GC1<T>::GC2 { };   // C3855
```

Possible resolution:

```cpp
// C3855d.cpp
// compile with: /clr /c
generic <class T>
ref struct GC1 {
   generic <class U>
   ref struct GC2;
};

generic <class T>
generic <class U>
ref struct GC1<T>::GC2 { };
```
