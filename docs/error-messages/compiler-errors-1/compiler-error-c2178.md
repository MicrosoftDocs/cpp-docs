---
title: "Compiler Error C2178"
description: "Learn more about: Compiler Error C2178"
ms.date: 05/08/2017
f1_keywords: ["C2178"]
helpviewer_keywords: ["C2178"]
---
# Compiler Error C2178

> '*identifier*' cannot be declared with '*specifier*' specifier

## Remarks

A **`mutable`** specifier was used in a declaration, but the specifier is not allowed in this context. It can only be applied to non-static, non-const, and non-reference data members. For more information, see [Mutable Data Members](../../cpp/mutable-data-members-cpp.md).

A **`consteval`** specifier was used on a [destructor](../../cpp/destructors-cpp.md), allocation function, or deallocation function.

## Example: `mutable`

The following example shows how C2178 may occur with the **`mutable`** specifier, and how to resolve it:

```cpp
// C2178_mutable.cpp
// compile with: /c

struct S
{
    mutable const int i;   // C2178, remove mutable or const to resolve
};

mutable int x = 4;   // C2178, remove mutable to resolve
```
