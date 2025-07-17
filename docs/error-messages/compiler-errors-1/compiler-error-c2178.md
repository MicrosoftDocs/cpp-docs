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

A **`mutable`** specifier was used in a declaration, but the specifier is not allowed in this context.

The **`mutable`** specifier can be applied only to names of class data members, and cannot be applied to names declared **`const`** or **`static`**, and cannot be applied to reference members.

## Example

The following example shows how C2178 may occur, and how to fix it.

```cpp
// C2178.cpp
// compile with: cl /c /W4 C2178.cpp

class S {
    mutable const int i; // C2178
    // To fix, declare either const or mutable, not both.
};

mutable int x = 4; // C2178
// To fix, remove mutable keyword
```
