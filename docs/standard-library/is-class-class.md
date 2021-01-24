---
description: "Learn more about: is_class Class"
title: "is_class Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_class"]
helpviewer_keywords: ["is_class class", "is_class"]
ms.assetid: 96fc34a3-a81b-4ec6-b7fb-baafde1a0f4e
---
# is_class Class

Tests if type is a class.

## Syntax

```cpp
template <class Ty>
struct is_class;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a type defined as a **`class`** or a **`struct`**, or a `cv-qualified` form of one of them, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_class.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_class<trivial> == " << std::boolalpha
        << std::is_class<trivial>::value << std::endl;
    std::cout << "is_class<int> == " << std::boolalpha
        << std::is_class<int>::value << std::endl;

    return (0);
    }
```

```Output
is_class<trivial> == true
is_class<int> == false
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_compound Class](../standard-library/is-compound-class.md)\
[is_union Class](../standard-library/is-union-class.md)
