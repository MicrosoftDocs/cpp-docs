---
title: "Compiler Error C3243"
description: "Learn more about: Compiler Error C3243"
ms.date: 11/04/2016
f1_keywords: ["C3243"]
helpviewer_keywords: ["C3243"]
---
# Compiler Error C3243

> none of the overload functions were introduced by 'interface'

## Remarks

You tried to [explicitly override](../../cpp/explicit-overrides-cpp.md) a member that does not exist in the specified interface.

## Example

The following example generates C3243:

```cpp
// C3243.cpp
#pragma warning(disable:4199)
__interface IX14A {
   void g();
};

__interface IX14B {
   void f();
   void f(int);
};

class CX14 : public IX14A, public IX14B {
public:
   void IX14A::g();
   void IX14B::f();
   void IX14B::f(int);
};

void CX14::IX14A::f()   // C3243 occurs here
{
}
```
