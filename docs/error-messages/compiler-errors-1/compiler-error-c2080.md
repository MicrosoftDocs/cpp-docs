---
description: "Learn more about: Compiler Error C2080"
title: "Compiler Error C2080"
ms.date: 08/18/2022
f1_keywords: ["C2080"]
helpviewer_keywords: ["C2080"]
---
# Compiler Error C2080

> '*identifier*': the type for '*type*' can only be deduced from a single initializer expression

The compiler can only deduce the type for `auto` or `decltype(auto)` if the declaration uses direct list-initialization and the initializer-list has a single element.

```cpp
auto x1 = 1;     // Valid
auto x2(1);      // Valid
auto x3(1, 2);   // Invalid
auto x4({4});    // Invalid
decltype(auto) x1 = 1;   // Valid
decltype(auto) x2(1);    // Valid
decltype(auto) x3(1, 2); // Invalid
decltype(auto) x4({4});  // Invalid
```

To resolve this issue, use a single value initializer.
