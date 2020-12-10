---
description: "Learn more about: is_const Class"
title: "is_const Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_const"]
helpviewer_keywords: ["is_const class", "is_const"]
ms.assetid: 55b8e887-9c3f-4a1d-823a-4a257337b205
---
# is_const Class

Tests if type is const.

## Syntax

```cpp
template <class Ty>
struct is_const;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if *Ty* is `const-qualified`.

## Example

```cpp
// std__type_traits__is_const.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
{
    int val;
};

int main()
{
    std::cout << "is_const<trivial> == " << std::boolalpha
        << std::is_const<trivial>::value << std::endl;
    std::cout << "is_const<const trivial> == " << std::boolalpha
        << std::is_const<const trivial>::value << std::endl;
    std::cout << "is_const<int> == " << std::boolalpha
        << std::is_const<int>::value << std::endl;
    std::cout << "is_const<const int> == " << std::boolalpha
        << std::is_const<const int>::value << std::endl;

    return (0);
}
```

```Output
is_const<trivial> == false
is_const<const trivial> == true
is_const<int> == false
is_const<const int> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_volatile Class](../standard-library/is-volatile-class.md)
