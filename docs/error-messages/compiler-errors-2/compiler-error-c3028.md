---
description: "Learn more about: Compiler Error C3028"
title: "Compiler Error C3028"
ms.date: "11/04/2016"
f1_keywords: ["C3028"]
helpviewer_keywords: ["C3028"]
ms.assetid: 175e697f-8e8f-492a-8456-6240ffbbb900
---
# Compiler Error C3028

'member' : only a variable or static data member can be used in a data-sharing clause

A symbol other than a variable or static data member was passed to the reduction clause.

The following sample generates C3028:

```cpp
// C3028.cpp
// compile with: /openmp /link vcomps.lib
int g_i;

class MyClass {
public:
   MyClass();
   MyClass(int x);
   static int x_public;
   int mbr;
private:
   static int x_private;
};

int MyClass::x_public;
int MyClass::x_private;

namespace XyzNS {
   struct xyz { int x; };
   xyz xyz;
}

namespace NS {
   int a1;
   struct Bar {
      static MyClass MyClass;
   };
   struct Baz : public Bar {
      using NS::Bar::MyClass;
   };
}

MyClass NS::Bar::MyClass;

typedef int MyInt;

template <class T, size_t n> class CTempl {
public:
   static T public_array[n];
private:
   static T private_array[n];
};

template<class T,size_t n> T CTempl<T,n>::public_array[n];
template<class T,size_t n> T CTempl<T,n>::private_array[n];

CTempl<int,5> tx;

struct Incomplete;
extern Incomplete inc;

MyClass::MyClass(int x) {

   #pragma omp parallel reduction(+: x, g_i, x_public, x_private)
   // OK
      ;

   #pragma omp parallel reduction(+: x, g_i, MyClass::x_public, MyClass::x_private)
   // OK
      ;

   #pragma omp parallel reduction(+: mbr)
   // C3028, member of a class.
      ;
}

int main() {

   #pragma omp parallel reduction(+:main)
   // C3028, main is a function.
      ;

   #pragma omp parallel reduction(+: XyzNS)
   // C3028, XyzNS is a namespace.
      ;
}
```
