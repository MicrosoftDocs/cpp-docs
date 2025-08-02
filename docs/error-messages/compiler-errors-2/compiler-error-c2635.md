---
title: "Compiler Error C2635"
description: "Learn more about: Compiler Error C2635"
ms.date: 11/04/2016
f1_keywords: ["C2635"]
helpviewer_keywords: ["C2635"]
---
# Compiler Error C2635

> cannot convert an 'identifier1*' to an 'identifier2\*'; conversion from a virtual base class is implied

## Remarks

The conversion requires a cast from a **`virtual`** base class to a derived class, which is not allowed.

## Example

The following example generates C2635:

```cpp
// C2635.cpp
class B {};
class D : virtual public B {};
class E : public B {};

int main() {
   B b;
   D d;
   E e;

   D * pD = &d;
   E * pE = &e;
   pD = (D*)&b;   // C2635
   pE = (E*)&b;   // OK
}
```
