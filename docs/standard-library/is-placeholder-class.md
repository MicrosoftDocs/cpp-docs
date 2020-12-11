---
description: "Learn more about: is_placeholder Class"
title: "is_placeholder Class"
ms.date: "11/04/2016"
f1_keywords: ["functional/std::is_placeholder"]
helpviewer_keywords: ["is_placeholder class"]
ms.assetid: 2b21a792-96d1-4bb8-b911-0db796510835
---
# is_placeholder Class

Tests if type is a placeholder.

## Syntax

struct is_placeholder {
   static const int value;
};

## Remarks

The constant value `value` is 0 if the type `Ty` is not a placeholder; otherwise, its value is the position of the function call argument that it binds to. You use it to determine the value `N` for the Nth placeholder `_N`.

## Example

```cpp
// std__functional__is_placeholder.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

using namespace std::placeholders;

template<class Expr>
void test_for_placeholder(const Expr&)
{
    std::cout << std::is_placeholder<Expr>::value << std::endl;
}

int main()
{
    test_for_placeholder(3.0);
    test_for_placeholder(_3);

    return (0);
}
```

```Output
0
3
```
