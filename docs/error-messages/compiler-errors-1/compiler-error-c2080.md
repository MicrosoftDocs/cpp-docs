---
description: "Learn more about: Compiler Error C2080"
title: "Compiler Error C2080"
ms.date: 08/18/2022
f1_keywords: ["C2080"]
helpviewer_keywords: ["C2080"]
---
# Compiler Error C2080

> '*identifier*': the type for '*type*' can only be deduced from a single initializer expression

## Remarks

The compiler can only deduce the type for `auto` or `decltype(auto)` if the declaration uses direct list-initialization and the initializer-list has a single element.

## Example

The following sample shows some declarations that cause C2080:

```cpp
auto x1(1, 2);           // C2080
auto x2({4});            // C2080
decltype(auto) x3(1, 2); // C2080
decltype(auto) x4({4});  // C2080
```

To resolve the issue, use a single value initializer:

```cpp
auto x1 = 1;             // Valid
auto x2(1);              // Valid
decltype(auto) x3 = 1;   // Valid
decltype(auto) x4(1);    // Valid
```
