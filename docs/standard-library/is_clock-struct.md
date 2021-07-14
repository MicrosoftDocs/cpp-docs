---
description: "Learn more about: is_clock struct"
title: "add_pointer Class"
ms.date: "7/12/2021"
f1_keywords: ["chrono/std::is_clock"]
helpviewer_keywords: ["std::chrono [C++], is_clock"]
---

# `is_clock` class

A type trait that determines whether the specified type meets the requirements to be a [Cpp17Clock](http://eel.is/c++draft/time.clock.req).

## Syntax

```cpp
template<class T> struct is_clock;
```

### Parameters

*`T`*\
The type to test.

## Remarks


## Example

The following example demonstrates that `add_pointer` of a type is the same as a pointer to that type.

```cpp
#include <type_traits>
#include <iostream>

int main()
{
    std::add_pointer_t<int> *p = (int **)0;

    p = p;  // to quiet "unused" warning
    std::cout << "add_pointer_t<int> == "
        << typeid(*p).name() << std::endl;

    return (0);
}
```

```Output
add_pointer_t<int> == int *
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](type-traits.md)\
[remove_pointer Class](remove-pointer-class.md)
