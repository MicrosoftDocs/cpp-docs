---
title: "Compiler Warning (level 1) C4541"
description: "Learn more about: Compiler Warning (level 1) C4541"
ms.date: 08/24/2025
f1_keywords: ["C4541"]
helpviewer_keywords: ["C4541"]
---
# Compiler Warning (level 1) C4541

> '*operator*' used on polymorphic type '*type*' with /GR-; unpredictable behavior may result

## Remarks

You tried to use the [`dynamic_cast` operator](../../cpp/dynamic-cast-operator.md) or [`typeid` operator](../../cpp/typeid-operator.md), which requires [Run-Time Type Information](../../cpp/run-time-type-information.md) (RTTI), without enabling it. To enable RTTI, recompile with [`/GR`](../../build/reference/gr-enable-run-time-type-information.md).

## Example

The following example generates C4541:

```cpp
// C4541.cpp
// compile with: /W1 /GR-

#include <typeinfo>

struct Base
{
    virtual ~Base() {}
};

struct Derived : Base {};

int main()
{
    Derived derived;
    Base* pointer_to_base = &derived;

    dynamic_cast<Derived*>(pointer_to_base);   // C4541

    typeid(*pointer_to_base);   // C4541
    typeid(pointer_to_base);    // OK
}
```
