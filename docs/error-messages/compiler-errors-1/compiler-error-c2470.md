---
title: "Compiler Error C2470"
description: "Learn more about: Compiler Error C2470"
ms.date: "03/29/2025"
f1_keywords: ["C2470"]
helpviewer_keywords: ["C2470"]
---
# Compiler Error C2470

> '*function*': looks like a function definition, but there is no parameter list; skipping apparent body

## Remarks

A function definition is missing its argument list.

## Example

The following example generates C2470:

```cpp
// C2470.cpp
// compile with: /c
template <typename T>
class C
{
    int func();
};

template <typename T>
int C<T>::func   // C2470
// Use the following line to resolve the error:
// int C<T>::func()
{
    return 0;
}
```
