---
description: "Learn more about: is_integral Class"
title: "is_integral Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_integral"]
helpviewer_keywords: ["is_integral class", "is_integral"]
ms.assetid: fe9279d0-4495-4e88-bf23-153cc6602397
---
# is_integral Class

Tests if type is integral.

## Syntax

```cpp
template <class Ty>
struct is_integral;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is one of the integral types, or a `cv-qualified` form of one of the integral types, otherwise it holds false.

An integral type is one of **`bool`**, **`char`**, **`unsigned char`**, **`signed char`**, **`wchar_t`**, **`short`**, **`unsigned short`**, **`int`**, **`unsigned int`**, **`long`**, and **`unsigned long`**. In addition, with compilers that provide them, an integral type can be one of **`long long`**, **`unsigned long long`**, **`__int64`**, and **unsigned __int64**.

## Example

```cpp
// std__type_traits__is_integral.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_integral<trivial> == " << std::boolalpha
        << std::is_integral<trivial>::value << std::endl;
    std::cout << "is_integral<int> == " << std::boolalpha
        << std::is_integral<int>::value << std::endl;
    std::cout << "is_integral<float> == " << std::boolalpha
        << std::is_integral<float>::value << std::endl;

    return (0);
    }
```

```Output
is_integral<trivial> == false
is_integral<int> == true
is_integral<float> == false
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_enum Class](../standard-library/is-enum-class.md)\
[is_floating_point Class](../standard-library/is-floating-point-class.md)
