---
description: "Learn more about: Compiler Error C3551"
title: "Compiler Error C3551"
ms.date: "10/07/2023"
f1_keywords: ["C3551"]
helpviewer_keywords: ["C3551"]
ms.assetid: c8ee23da-6568-40db-93a6-3ddb7ac47712
---
# Compiler Error C3551

> if a trailing return type is used then the leading return type shall be the single type-specifier 'auto' (not 'type')

The leading return type in [trailing return type](../../cpp/functions-cpp.md#trailing-return-types) syntax must contain only `auto`.

```cpp
// C3551.cpp
// compile with: /c
const auto func1() -> const int;   // C3551
auto* func2() -> int*;   // C3551
auto& func3() -> int&;   // C3551
auto&& func4() -> int&&;   // C3551
decltype(auto) func5() -> int;   // C3551

auto func6() -> int;   // OK
```
