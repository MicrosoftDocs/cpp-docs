---
title: "Compiler Error C3244"
description: "Learn more about: Compiler Error C3244"
ms.date: 11/04/2016
f1_keywords: ["C3244"]
helpviewer_keywords: ["C3244"]
---
# Compiler Error C3244

> 'method' : this method was introduced by 'interface' not by 'interface'

## Remarks

You tried to [explicitly override](../../cpp/explicit-overrides-cpp.md) a member that does not exist in the specified interface but does exist in another base class.

## Example

The following example generates C3244:

```cpp
// C3244.cpp
#pragma warning(disable:4199)

__interface IX15A {
   void f();
};

__interface IX15B {
   void g();
};

class CX15 : public IX15A, public IX15B {
public:
   void IX15A::f();
   void IX15B::g();
};

void CX15::IX15A::g()   // C3244 occurs here
{
}
```
