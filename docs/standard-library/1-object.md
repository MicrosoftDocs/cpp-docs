---
description: "Learn more about: _1 Object"
title: "_1 Object"
ms.date: "11/04/2016"
f1_keywords: ["_1", "std::_1", "functional/std::_1"]
helpviewer_keywords: ["_1 object"]
ms.assetid: 30c3c480-ff31-4708-94be-7d0d65f243c9
---
# _1 Object

Placeholders for replaceable arguments.

## Syntax

```cpp
namespace placeholders {
    extern unspecified _1, _2, ... _M
} // namespace placeholders (within std)
```

## Remarks

The objects `_1, _2, ... _M` are placeholders designating the first, second, ..., Mth argument, respectively in a function call to an object returned by [bind](functional-functions.md#bind). You use `_N` to specify where the Nth argument should be inserted when the bind expression is evaluated.

In this implementation the value of `M` is 20.

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
