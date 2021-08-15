---
description: "Learn more about: Compiler Error C2247"
title: "Compiler Error C2247"
ms.date: "11/04/2016"
f1_keywords: ["C2247"]
helpviewer_keywords: ["C2247"]
ms.assetid: 72efa03e-615e-4ef9-aede-0a98654b20fd
---
# Compiler Error C2247

'identifier' not accessible because 'class' uses 'specifier' to inherit from 'class'

`identifier` is inherited from a class declared with private or protected access.

The following sample generates C2247:

```cpp
// C2247.cpp
class A {
public:
   int i;
};
class B : private A {};    // B inherits a private A
class C : public B {} c;   // so even though C's B is public
int j = c.i;               // C2247, i not accessible
```

This error can also be generated as a result of compiler conformance work that was done for Visual Studio .NET 2003: access control with protected members. A protected member (n) can only be accessed through a member function of a class (B) that inherits from the class (A) of which it (n) is a member.

For code that is valid in both the Visual Studio .NET 2003 and Visual Studio .NET versions of Visual C++, declare the member to be a friend of the type. Public inheritance could also be used.

```cpp
// C2247b.cpp
// compile with: /c
// C2247 expected
class A {
public:
   void f();
   int n;
};

class B: protected A {
   // Uncomment the following line to resolve.
   // friend void A::f();
};

void A::f() {
   B b;
   b.n;
}
```

C2247 can also be generated as a result of compiler conformance work that was done for Visual Studio .NET 2003: private base classes now inaccessible. A class (A) that is a private base class to a type (B) should not be accessible to a type (C) that uses B as a base class.

For code that is valid in both the Visual Studio .NET 2003 and Visual Studio .NET versions of Visual C++, use the scope operator.

```cpp
// C2247c.cpp
// compile with: /c
struct A {};

struct B: private A {};

struct C : B {
   void f() {
      A *p1 = (A*) this;   // C2247
      // try the following line instead
      // ::A *p2 = (::A*) this;
   }
};
```
