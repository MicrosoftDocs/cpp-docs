---
description: "Learn more about: Compiler Error C2553"
title: "Compiler Error C2553"
ms.date: "11/04/2016"
f1_keywords: ["C2553"]
helpviewer_keywords: ["C2553"]
ms.assetid: 64bc1e9a-627f-4ce9-b7bc-dc911bdb9180
---
# Compiler Error C2553

'base_function': overriding virtual function return type differs from 'override_function'

A function in a derived class attempted to override a virtual function in a base class, but the derived class function did not have the same return type as the base class function.  An override function signature must match the signature of the function being overridden.

The following sample generates C2553:

```cpp
// C2553.cpp
// compile with: /clr /c
ref struct C {
   virtual void f();
};

ref struct D : C {
   virtual int f() override ;   // C2553

   // try the following line instead
   // virtual void f() override;
};
```
