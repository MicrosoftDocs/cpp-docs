---
title: "Compiler Error C2250"
description: "Learn more about: Compiler Error C2250"
ms.date: 11/04/2016
f1_keywords: ["C2250"]
helpviewer_keywords: ["C2250"]
---
# Compiler Error C2250

> 'identifier' : ambiguous inheritance of 'class::member'

## Remarks

The derived class inherits more than one override of a virtual function of a virtual base class. These overrides are ambiguous in the derived class.

## Example

The following example generates C2250:

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
