---
description: "Learn more about: integral_constant Class, bool_constant Class"
title: "integral_constant Class, bool_constant Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::integral_constant", "XTR1COMMON/std::integral_constant", "type_traits/std::bool_constant", "XTR1COMMON/std::bool_constant"]
helpviewer_keywords: ["std::integral_constant [C++]", "std::bool_constant [C++]"]
ms.assetid: 11c002c6-4d31-4042-9341-f2543f43e108
---
# integral_constant Class, bool_constant Class

Makes an integral constant from a type and value.

## Syntax

```cpp
template<class T, T v>
struct integral_constant {
   static constexpr T value = v;
   typedef T value_type;
   typedef integral_constant<T, v> type;
   constexpr operator value_type() const noexcept;
   constexpr value_type operator()() const noexcept;
   };
```

### Parameters

*T*\
The type of the constant.

*v*\
The value of the constant.

## Remarks

The `integral_constant` class template, when specialized with an integral type *T* and a value *v* of that type, represents an object that holds a constant of that integral type with the specified value. The member named `type` is an alias for the generated template specialization type, and the `value` member holds the value *v* used to create the specialization.

The `bool_constant` class template is an explicit partial specialization of `integral_constant` that uses **`bool`** as the *T* argument.

## Example

```cpp
// std__type_traits__integral_constant.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

int main()
    {
    std::cout << "integral_constant<int, 5> == "
        << std::integral_constant<int, 5>::value << std::endl;
    std::cout << "integral_constant<bool, false> == " << std::boolalpha
        << std::integral_constant<bool, false>::value << std::endl;

    return (0);
    }
```

```Output
integral_constant<int, 5> == 5
integral_constant<bool, false> == false
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[false_type](../standard-library/type-traits-typedefs.md#false_type)\
[true_type](../standard-library/type-traits-typedefs.md#true_type)
