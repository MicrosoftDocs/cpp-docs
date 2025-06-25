---
title: "Compiler Warning (level 1) C4172"
description: "Learn more about: Compiler Warning (level 1) C4172"
ms.date: 06/20/2025
f1_keywords: ["C4172"]
helpviewer_keywords: ["C4172"]
---
# Compiler Warning (level 1) C4172

> returning address of local variable or temporary

## Remarks

A function returns the address of a local variable or temporary object. Local variables and temporary objects are destroyed when a function returns, so the address returned is not valid.

Redesign the function so that it does not return the address of a local object.

## Example

The following example generates C4172:

```cpp
// C4172.cpp
// compile with: /c /W1

const int* func1()
{
    int i = 42;
    return &i;   // C4172
}

float f = 1.f;

const double& func2()
// Try one of the following lines instead:
// const float& func2()
// const auto& func2()
{
    // The problem is that a temporary is created to convert f to a double.
    // C4172 in this case refers to returning the address of a temporary.
    return f;   // C4172
}
```
