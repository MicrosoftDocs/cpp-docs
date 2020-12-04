---
description: "Learn more about: is_convertible Class"
title: "is_convertible Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_convertible"]
helpviewer_keywords: ["is_convertible class", "is_convertible"]
ms.assetid: 75614008-1894-42ea-bd57-974399628536
---
# is_convertible Class

Tests if one type is convertible to another.

## Syntax

```cpp
template <class From, class To>
struct is_convertible;
```

### Parameters

*From*\
The type to convert from.

*Ty*\
The type to convert to.

## Remarks

An instance of the type predicate holds true if the expression `To to = from;`, where `from` is an object of type `From`, is well-formed.

## Example

```cpp
// std__type_traits__is_convertible.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_convertible<trivial, int> == " << std::boolalpha
        << std::is_convertible<trivial, int>::value << std::endl;
    std::cout << "is_convertible<trivial, trivial> == " << std::boolalpha
        << std::is_convertible<trivial, trivial>::value << std::endl;
    std::cout << "is_convertible<char, int> == " << std::boolalpha
        << std::is_convertible<char, int>::value << std::endl;

    return (0);
    }
```

```Output
is_convertible<trivial, int> == false
is_convertible<trivial, trivial> == true
is_convertible<char, int> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_base_of Class](../standard-library/is-base-of-class.md)
