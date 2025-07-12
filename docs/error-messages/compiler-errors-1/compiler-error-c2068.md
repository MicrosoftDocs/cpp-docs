---
title: "Compiler Error C2068"
description: "Learn more about: Compiler Error C2068"
ms.date: 08/18/2022
f1_keywords: ["C2068"]
helpviewer_keywords: ["C2068"]
---
# Compiler Error C2068

> illegal use of overloaded function. Missing argument list?

## Remarks

The compiler detected the invalid use of an overloaded function with no arguments.

## Example

For example:

```cpp
void f(int x) {}
void f(char x) {}
void g() noexcept( noexcept(f) );
```

To resolve this issue, include the argument types required to resolve the function overload.
