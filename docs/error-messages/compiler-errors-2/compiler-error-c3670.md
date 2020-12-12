---
description: "Learn more about: Compiler Error C3670"
title: "Compiler Error C3670"
ms.date: "11/04/2016"
f1_keywords: ["C3670"]
helpviewer_keywords: ["C3670"]
ms.assetid: d0fa9c6e-8f90-48c7-9066-31b4fa5942eb
---
# Compiler Error C3670

'override' : cannot override inaccessible base class method 'method'

An override can only take place on a function whose access level makes it available in a derived type. For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

The following sample generates C3670:

```cpp
// C3670.cpp
// compile with: /clr /c
public ref class C {
// Uncomment the following line to resolve.
// public:
   virtual void g() { }
};

public ref class D : public C {
public:
   virtual void f() new sealed = C::g {};   // C3670
};
```
