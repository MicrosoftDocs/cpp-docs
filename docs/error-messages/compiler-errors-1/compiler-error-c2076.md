---
description: "Learn more about: Compiler Error C2076"
title: "Compiler Error C2076"
ms.date: 08/18/2022
f1_keywords: ["C2076"]
helpviewer_keywords: ["C2076"]
---
# Compiler Error C2076

> a brace-enclosed initializer list cannot be used in a new-expression whose type contains 'auto/decltype(auto)'

If an **`auto`** type-specifier appears in the specifier sequence of a new type-identifier or the type-identifier of a **`new`** expression, the expression must contain an initializer of the form `( assignment-expression )`. The compiler deduces the type-identifier from the `assignment-expression` in the initializer. For example,

```cpp
new auto(42);            // new allocates int
auto c = new auto('a');  // c is of type char*, new allocates char
new (auto*)(static_cast<short*>(nullptr));   // allocates type short*
```

To resolve this issue, use parentheses to enclose the initialization value of the **`new`** expression.
