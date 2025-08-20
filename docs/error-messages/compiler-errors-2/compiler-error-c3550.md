---
description: "Learn more about: Compiler Error C3550"
title: "Compiler Error C3550"
ms.date: "11/04/2016"
f1_keywords: ["C3550"]
helpviewer_keywords: ["C3550"]
ms.assetid: 9f2d5ffc-e429-41a1-89e3-7acc4fd47e14
---
# Compiler Error C3550

> only plain 'decltype(auto)' is allowed in this context

If [`decltype(auto)`](../../cpp/decltype-cpp.md#decltype-and-auto) is used as a placeholder for the return type of a function, it must be used by itself. It cannot be used as part of a pointer declaration (`decltype(auto)*`), a reference declaration (`decltype(auto)&`), or any other such qualification.

## Example

The following sample generates C3550:

```cpp
// C3550.cpp
// compile with: /c
decltype(auto)* func1();   // C3550
decltype(auto)& func2();   // C3550
decltype(auto)&& func3();   // C3550

auto* func4();   // OK
```

To resolve the error remove all illegal qualification on `decltype(auto)`. For instance, `decltype(auto)* func1()` can be turned into `auto* func1()`.

## See also

[auto](../../cpp/auto-cpp.md)
