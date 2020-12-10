---
description: "Learn more about: Compiler Error C2250"
title: "Compiler Error C2250"
ms.date: "11/04/2016"
f1_keywords: ["C2250"]
helpviewer_keywords: ["C2250"]
ms.assetid: f990986f-5c7d-4af4-a25c-b35540f1e217
---
# Compiler Error C2250

'identifier' : ambiguous inheritance of 'class::member'

The derived class inherits more than one override of a virtual function of a virtual base class. These overrides are ambiguous in the derived class.

The following sample generates C2286:

```cpp
// C2250.cpp
// compile with: /c
// C2250 expected
struct V {
   virtual void vf();
};

struct A : virtual V {
   void vf();
};

struct B : virtual V {
   void vf();
};

struct D : A, B {
   // Uncomment the following line to resolve.
   // void vf();
};
```
