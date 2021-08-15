---
description: "Learn more about: Compiler Error C3723"
title: "Compiler Error C3723"
ms.date: "11/04/2016"
f1_keywords: ["C3723"]
helpviewer_keywords: ["C3723"]
ms.assetid: ef0fb1ff-3f9a-4093-a6b6-894d1ab0c4b9
---
# Compiler Error C3723

> 'function': could not resolve event

`function` could not resolve which event to call.

The following sample generates C3723:

```cpp
// C3723.cpp
struct A {
   // To resolve, comment void f(int); and uncomment the __event function
   void f(int);
   // __event void f(int);
   void f(float);

};

struct B {
   void g(int);
   B(A* a) {
   __hook(&A::f, a, &B::g);   // C3723
   }
};

int main() {
}
```

**`__hook`** and **`__unhook`** are not compatible with **`/clr`** programming.  Use the += and -= operators instead.

The following sample generates C3723:

```cpp
// C3723b.cpp
// compile with: /clr
using namespace System;

public delegate void delegate1();

public ref class CPSource {
public:
   event delegate1^ event1;
};

public ref class CReceiver {
public:
   void Handler1() {
   }

   void UnhookAll(CPSource^ pSrc) {
      __unhook(&CPSource::event1, pSrc, &CReceiver::Handler1); // C3723
      // Try the following line instead.
      // pSrc->event1 -= gcnew delegate1(this, &CReceiver::Handler1);
   }
};

int main() {
}
```
