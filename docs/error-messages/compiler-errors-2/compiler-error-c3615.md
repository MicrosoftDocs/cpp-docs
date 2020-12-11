---
description: "Learn more about: Compiler Error C3615"
title: "Compiler Error C3615"
ms.date: "10/24/2017"
f1_keywords: ["C3615"]
helpviewer_keywords: ["C3615"]
ms.assetid: 5ce96ba9-3d31-49f3-9aa8-24e5cdf6dcfc
---
# Compiler Error C3615

> constexpr function '*function*' cannot result in a constant expression

The function *function* could not be evaluated as **`constexpr`** at compile time. To be **`constexpr`**, a function can only call other **`constexpr`** functions.

## Example

Visual Studio 2017 correctly raises an error when the left-hand operand of a conditionally evaluating operation is not valid in a **`constexpr`** context. The following code compiles in Visual Studio 2015 but not in Visual Studio 2017.

```cpp
// C3615.cpp
// Compile with: /c

template<int N>
struct myarray
{
    int size() const { return N; }
};

constexpr bool f(const myarray<1> &arr)
{
    return arr.size() == 10 || arr.size() == 11; // C3615 starting in Visual Studio 2017
}
```

To fix this issue, either declare the `array::size()` function as **`constexpr`** or remove the **`constexpr`** qualifier from `f`.
