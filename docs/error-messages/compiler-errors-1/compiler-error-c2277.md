---
title: "Compiler Error C2277"
description: "Learn more about: Compiler Error C2277"
ms.date: 08/27/2025
f1_keywords: ["C2277"]
helpviewer_keywords: ["C2277"]
---
# Compiler Error C2277

> '*function*': cannot take address of this member function

## Remarks

You cannot take the address of a [constructor](../../cpp/constructors-cpp.md) or [destructor](../../cpp/destructors-cpp.md). For more information, see [Address-of operator: `&`](../../cpp/address-of-operator-amp.md) and [Pointers to Members](../../cpp/pointers-to-members.md).

## Example

The following example generates C2277:

```cpp
// C2277.cpp
// compile with: /c

struct S
{
    S() {}
    ~S() {}
};

void (S::* pointer_to_constructor)() = &S::S;   // C2277
void (S::* pointer_to_destructor)() = &S::~S;   // C2277
```
