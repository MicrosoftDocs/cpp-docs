---
description: "Learn more about: _1 Object"
title: "_1 Object"
ms.date: "01/15/2021"
f1_keywords: ["_1", "std::_1", "functional/std::_1", "std::_2", "functional/std::_2", "std::_3", "functional/std::_3", "std::_4", "functional/std::_4", "std::_5", "functional/std::_5", "std::_6", "functional/std::_6", "std::_7", "functional/std::_7", "std::_8", "functional/std::_8", "std::_9", "functional/std::_9", "std::_10", "functional/std::_10", "std::_11", "functional/std::_11", "std::_12", "functional/std::_12", "std::_13", "functional/std::_13", "std::_14", "functional/std::_14", "std::_15", "functional/std::_15", "std::_16", "functional/std::_16", "std::_17", "functional/std::_17", "std::_18", "functional/std::_18", "std::_19", "functional/std::_19", "std::_20", "functional/std::_20", "functional/std::placeholders", "std::placeholders"]
helpviewer_keywords: ["_1 object"]
ms.assetid: 30c3c480-ff31-4708-94be-7d0d65f243c9
---
# `_1` Object

Placeholders for replaceable arguments.

## Syntax

```cpp
namespace placeholders {
    extern unspecified _1, _2, ... _N
} // namespace placeholders (within std)
```

## Remarks

The objects `_1, _2, ... _N` are placeholders that represent the first, second, ..., through Nth argument, respectively in a function call to an object returned by [`bind`](functional-functions.md#bind). For example, you use `_6` to specify where the sixth argument should be inserted when the `bind` expression is evaluated.

In the Microsoft implementation, the value of `_N` is 20.

## Example

```cpp
// std__functional_placeholder.cpp
// compile with: /EHsc
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std::placeholders;

void square(double x)
    {
    std::cout << x << "^2 == " << x * x << std::endl;
    }

void product(double x, double y)
    {
    std::cout << x << "*" << y << " == " << x * y << std::endl;
    }

int main()
    {
    double arg[] = {1, 2, 3};

    std::for_each(&arg[0], &arg[3], square);
    std::cout << std::endl;

    std::for_each(&arg[0], &arg[3], std::bind(product, _1, 2));
    std::cout << std::endl;

    std::for_each(&arg[0], &arg[3], std::bind(square, _1));

    return (0);
    }
```

```Output
1^2 == 1
2^2 == 4
3^2 == 9

1*2 == 2
2*2 == 4
3*2 == 6

1^2 == 1
2^2 == 4
3^2 == 9
```
