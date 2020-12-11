---
description: "Learn more about: Compiler Error C3190"
title: "Compiler Error C3190"
ms.date: "11/04/2016"
f1_keywords: ["C3190"]
helpviewer_keywords: ["C3190"]
ms.assetid: 7c701afa-85a7-4f7a-8881-0662436ac244
---
# Compiler Error C3190

'instantiation' with the provided template arguments is not the explicit instantiation of any member function of 'type'

The compiler detected an attempt to make an explicit function instantiation; however, the provided type arguments do not match any of the possible functions.

The following sample generates C3190:

```cpp
// C3190.cpp
// compile with: /LD
template<class T>
struct A {
   A(int x = 0) {
   }
   A(int x, int y) {
   }
};

template A<float>::A();   // C3190
// try the following line instead
// template A<int>::A(int);

struct Y {
   template<class T> void f(T);
};

template<class T> void Y::f(T) { }

template void Y::f(int,int);   // C3190

template<class OT> class X {
   template<class T> void f2(T,OT);
};

template<class OT> template<class T> void X<OT>::f2(T,OT) {}

template void X<float>::f2<int>(int,char);   // C3190
// try one of the following lines instead
// template void X<char>::f2(int, char);
// template void X<char>::f2<int>(int,char);
// template void X<char>::f2<>(int,char);
```
