---
description: "Learn more about: Compiler Error C2382"
title: "Compiler Error C2382"
ms.date: 12/10/2021
f1_keywords: ["C2382"]
helpviewer_keywords: ["C2382"]
ms.assetid: 4d4436f9-d0d6-4bd0-b8ec-767b89adfb2f
---
# Compiler Error C2382

> '*function*' : redefinition; different exception specifications

This error indicates that a function overload was attempted only on the [exception specification](../../cpp/exception-specifications-throw-cpp.md).

## Remarks

By default, the compiler considers a `noexcept` specification to be equivalent to a `throw()` or `throw(some_type)` specification. Under [`/Za`](../../build/reference/za-ze-disable-language-extensions.md), this check is more strict.

To resolve this issue, change all declarations and definitions of the function (or the specific function overload) to use the same exception specification.

## Example

The following sample generates C2382:

```cpp
// C2382.cpp
// compile with: /Za /c
void f1(void) noexcept {}
void f1(void) {}   // C2382
void f2(void) throw() {}   // OK
```

## See also

[`/Za` (Disable language extensions)](../../build/reference/za-ze-disable-language-extensions.md)
