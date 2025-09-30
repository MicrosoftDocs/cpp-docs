---
title: "Compiler Error C2600"
description: "Learn more about: Compiler Error C2600"
ms.date: 11/04/2016
f1_keywords: ["C2600"]
helpviewer_keywords: ["C2600"]
---
# Compiler Error C2600

> 'function' : cannot define a compiler-generated special member function (must be declared in the class first)

## Remarks

Before member functions such as constructors or destructors can be defined for a class, they must be declared in the class. The compiler can generate default constructors and destructors (called special member functions) if none are declared in the class. However, if you define one of these functions without a matching declaration in the class, the compiler detects a conflict.

To fix this error, in the class declaration, declare each member function that you define outside the class declaration.

## Example

The following example generates C2600:

```cpp
// C2600.cpp
// compile with: /c
class C {};
C::~C() {}   // C2600

class D {
   D::~D();
};

D::~D() {}
```
