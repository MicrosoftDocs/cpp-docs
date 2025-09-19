---
title: "Compiler Error C3551"
description: "Learn more about: Compiler Error C3551"
ms.date: 10/07/2023
f1_keywords: ["C3551"]
helpviewer_keywords: ["C3551"]
---
# Compiler Error C3551

> if a trailing return type is used then the leading return type shall be the single type-specifier 'auto' (not 'type')

## Remarks

The leading return type in [trailing return type](../../cpp/functions-cpp.md#trailing-return-types) syntax must contain only `auto`.

## Example

The following example generates C3551:

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
