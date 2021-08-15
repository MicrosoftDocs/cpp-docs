---
description: "Learn more about: Compiler Error C2131"
title: "Compiler Error C2131"
ms.date: "02/28/2019"
f1_keywords: ["C2131"]
helpviewer_keywords: ["C2131"]
---
# Compiler Error C2131

> expression did not evaluate to a constant

An expression declared as **`const`** or **`constexpr`** didn't evaluate to a constant at compile time. The compiler must be able to determine the value of the expression at the point it's used.

## Example

This example shows a way to cause error C2131, and how to fix it.

```cpp
// c2131.cpp
// compile by using: cl /EHsc /W4 /c c2131.cpp

struct test
{
    static const int array_size; // To fix, init array_size here.
    int size_array[array_size];  // C2131
};

const int test::array_size = 42;
```

```Output
c2131.cpp
c2131.cpp(7): error C2131: expression did not evaluate to a constant
c2131.cpp(7): note: failure was caused by non-constant arguments or reference to a non-constant symbol
c2131.cpp(7): note: see usage of 'array_size'
```

## See also

[const](../../cpp/const-cpp.md)<br/>
[constexpr](../../cpp/constexpr-cpp.md)<br/>
