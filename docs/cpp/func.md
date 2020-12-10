---
description: "Learn more about: __func__"
title: "__func__"
ms.date: "10/19/2017"
f1_keywords: ["__func__"]
ms.assetid: a5299b8d-f0ee-4af2-91dd-8fb165e68798
---
# __func__

**(C++11)** The predefined identifier &#95;&#95;func&#95;&#95; is implicitly defined as a string that contains the unqualified and unadorned name of the enclosing function. &#95;&#95;func&#95;&#95; is mandated by the C++ standard and is not a Microsoft extension.

## Syntax

```cpp
__func__
```

## Return Value

Returns a null-terminated const char array of characters that contains the function name.

## Example

```cpp
#include <string>
#include <iostream>

namespace Test
{
    struct Foo
    {
        static void DoSomething(int i, std::string s)
        {
           std::cout << __func__ << std::endl; // Output: DoSomething
        }
    };
}

int main()
{
    Test::Foo::DoSomething(42, "Hello");

    return 0;
}
```

## Requirements

C++11
