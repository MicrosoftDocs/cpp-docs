---
description: "Learn more about: Compiler Error C3867"
title: "Compiler Error C3867"
ms.date: "11/04/2016"
f1_keywords: ["C3867"]
helpviewer_keywords: ["C3867"]
ms.assetid: bc5de03f-e01a-4407-88c3-2c63f0016a1e
---
# Compiler Error C3867

'func': function call missing argument list; use '&func' to create a pointer to member

You tried to take the address of a member function without qualifying the member function with its class name and the address-of operator.

This error can also be generated as a result of compiler conformance work that was done for Visual Studio 2005: enhanced pointer-to-member conformance. Code that compiled prior to Visual Studio 2005 will now generate C3867.

## Examples

C3867 can be issued from the compiler with a misleading suggested resolution. Whenever possible, use the most derived class.

The following sample generates C3867 and shows how to fix it.

```cpp
// C3867_1.cpp
// compile with: /c
struct Base {
protected:
   void Test() {}
};

class Derived : public Base {
   virtual void Bar();
};

void Derived::Bar() {
   void (Base::*p1)() = Test;   // C3867
   &Derived::Test;   // OK
}
```

The following sample generates C3867 and shows how to fix it.

```cpp
// C3867_2.cpp
#include<stdio.h>

struct S {
   char *func() {
      return "message";
   }
};

class X {
public:
   void f() {}
};

int main() {
   X::f;   // C3867

   // OK
   X * myX = new X;
   myX->f();

   S s;
   printf_s("test %s", s.func);   // C3867
   printf_s("test %s", s.func());   // OK
}
```

The following sample generates C3867 and shows how to fix it.

```cpp
// C3867_3.cpp
class X {
public:
   void mf(){}
};

int main() {
   void (X::*pmf)() = X::mf;   // C3867

   // try the following line instead
   void (X::*pmf2)() = &X::mf;
}
```

The following sample generates C3867.

```cpp
// C3867_4.cpp
// compile with: /c
class A {
public:
   void f(int) {}

   typedef void (A::*TAmtd)(int);

   struct B {
      TAmtd p;
   };

   void g() {
      B b1;
      b1.p = f;   // C3867
   }
};
```

The following sample generates C3867.

```cpp
// C3867_5.cpp
// compile with: /EHsc
#include <iostream>

class Testpm {
public:
   void m_func1() {
      std::cout << m_num << "\tm_func1\n";
    }

   int m_num;
   typedef void (Testpm::*pmfn1)();
   void func(Testpm* p);
};

void Testpm::func(Testpm* p) {
   pmfn1 s = m_func1;   // C3867
   pmfn1 s2 = &Testpm::m_func1;   // OK
   (p->*s2)();
}

int main() {
   Testpm *pTestpm = new Testpm;
   pTestpm->m_num = 10;

   pTestpm->func(pTestpm);
}
```
