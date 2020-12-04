---
description: "Learn more about: Compiler Error C2876"
title: "Compiler Error C2876"
ms.date: "11/04/2016"
f1_keywords: ["C2876"]
helpviewer_keywords: ["C2876"]
ms.assetid: 8b674bf1-f9f4-4a8e-8127-e884c1d1708f
---
# Compiler Error C2876

'class::symbol' : not all overloads are accessible

All overloaded forms of a function in a base class must be accessible to the derived class.

The following sample generates C2876:

```cpp
// C2876.cpp
// compile with: /c
class A {
public:
   double a(double);
private:
   int a(int);
};

class B : public A {
   using A::a;   // C2876 one overload is private in base class
};
```
