---
description: "Learn more about: <ranges> helper functions"
title: "<ranges> helper functions"
ms.date: 06/16/2022
f1_keywords: ["ranges/std::ranges::begin", "ranges/std::ranges::end", "ranges/std::ranges::cbegin", "ranges/std::ranges::cend", "ranges/std::ranges::rbegin", "ranges/std::ranges::rend", "ranges/std::ranges::crbegin", "ranges/std::ranges::crend", "ranges/std::ranges::size","ranges/std::ranges::ssize","ranges/std::ranges::empty","ranges/std::ranges::data","ranges/std::ranges::cdata"]
helpviewer_keywords: ["std::ranges [C++], ranges::begin", "std::ranges [C++], ranges::end", "std::ranges [C++], ranges::cbegin", "std::ranges [C++], ranges::cend", "std::ranges [C++], ranges::rbegin", "std::ranges [C++], ranges::rend", "std::ranges [C++], ranges::crbegin", "std::ranges [C++], ranges::crend", "std::ranges [C++], ranges::size","std::ranges [C++], ranges::ssize","std::ranges [C++], ranges::empty","std::ranges [C++], ranges::data","std::ranges [C++], ranges::cdata"]
dev_langs: ["C++"]
---
# `<ranges>` functions

The `<ranges>`<sup>C++20</sup> header includes the following non-member helper functions.

| **Non-member functions** | **Description** |
|--|--|
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element in the range. |
| [`cbegin`](#cbegin)<sup>C++20</sup> | Get a `const` iterator to the first element in the range. |
| [`cend`](#cend)<sup>C++20</sup> | Get the sentinel at the end of the `const`-qualified range. |
| [`cdata`](#cdata)<sup>C++20</sup> | Get a `const` pointer to the first element in the contiguous range. |
| [`crbegin`](#crbegin)<sup>C++20</sup> | Get a reverse `const` iterator to the beginning of the range. |
| [`crend`](#crend)<sup>C++20</sup> | Get the sentinel at the end of what `crbegin()` returns. |
| [`data`](#data)<sup>C++20</sup> | Get a pointer to the first element in the contiguous range. |
| [`empty`](#empty)<sup>C++20</sup> | Test if the range is empty. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the range. |
| [`rbegin`](#rbegin)<sup>C++20</sup> | Get a reverse iterator to the beginning of the range. |
| [`rend`](#rend)<sup>C++20</sup> | Get a reverse iterator to the sentinel at the end of the range. |
| [`size`](#size)<sup>C++20</sup> | Get the size of the range as an unsigned value. |
| [`ssize`](#ssize)<sup>C++20</sup> | Get the size of the range as a signed value. |

Many of these 'functions' are implemented as [customization point objects](https://eel.is/c++draft/customization.point.object). A customization point object is a [function object](https://eel.is/c++draft/function.objects) that can be overloaded on user-defined types, while also enforcing constraints on which kinds of types can be passed to the function object. The net effect is that the compiler figures out if there's a valid customized function to call for the passed in type, or if the default implementation should be used, or if the call is ill-formed.

Many of these functions have corresponding functions in the `std` namespace. But when working with ranges, use these helper functions instead. These functions use C++20 concepts, which provide better compile time errors. Because they're implemented as customization points, problems related to argument dependent lookup (ADL) and const correctness are avoided.

## `begin`

Get an iterator to the first element in the range.

```cpp
template<class T>
constexpr std::input_or_output_iterator auto begin(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

An iterator to the first element in the range:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled 'begin()'. The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

If the range is an array, returns the equivalent of `rg + 0`.
If `auto(rg.begin())` yields an iterator, returns the equivalent of `auto(rg.begin())`. If that expression is ill-formed, `auto(begin(rg))` is used if that expression yields an iterator.

### Remarks

`ranges::begin()` works on all ranges, whereas `std::begin()` may not.

### Example: `begin`

```cpp
// requires /std:c++20 or later
#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    std::vector<int> v = {10, 20, 30};
    auto vi = std::ranges::begin(v);
    std::cout << *vi << ' ' << *++vi; // outputs 10 20
}
```

## `cbegin`

Get a `const` iterator to the first element in a range.
The iterator can access the elements in the range, but can't modify them.

```cpp
template<class T>
constexpr std::input_or_output_iterator auto cbegin(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

A `const` iterator to the first element in the range:

:::image type="content" source="media/cbegin-cend-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled 'cbegin()'. The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled cend().":::

If the range is an array, returns the equivalent of `rg + 0`.
If `auto(rg.cbegin())` yields an iterator, returns the equivalent of `auto(rg.cbegin())`. If that expression is ill-formed, `auto(cbegin(rg))` is used if that expression yields an iterator.

### Remarks

`ranges::cbegin()` works on all ranges, whereas `std::cbegin()` may not.

### Example: `cbegin`

```cpp
// requires /std:c++20 or later
#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    std::vector<int> v = {10, 20, 30};
    auto vi = std::ranges::cbegin(v);
    std::cout << *vi; // outputs 10
    // *vi = 100; // error because the iterator is const
}
```

## `cdata`

Get a `const` pointer to the first element in the contiguous range.

```cpp
template<class T>
constexpr std::add_pointer_t<ranges::range_reference_t<const T>> cdata(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

A `const` pointer, based on the type of the range, to the first element data in the contiguous range. For example, if the range is a vector of integers, the type of the return value is a `const int *`.

### Example: `cdata`

```cpp
#include <ranges>
#include <iostream>

int main()
{
    std::vector v{10, 20, 30};
    std::string src{ "a string" };
   
    auto c_charPtr = std::ranges::cdata(src); // ptr is a const char *
    auto c_intPtr = std::ranges::cdata(v); // ptr2 is a const int *
    std::cout << c_charPtr << ", " << *c_intPtr << '\n'; // outputs a string, 10

    // *c_intPtr = 100; // error - cannot assign to a const pointer
    // *charPtr = 'A'; // error - cannot assign to a const pointer
}
```

## `cend`

Get the sentinel at the end of the `const`-qualified range.
The iterator can access the elements in the range, but can't modify them.

```cpp
template<class T>
constexpr std::sentinel_for<decltype(ranges::cbegin(std::declval<T>()))> auto cend(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

The sentinel that follows the last element in the `const`-qualified range:

:::image type="content" source="media/cbegin-cend-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled cbegin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled cend().":::

### Remarks

`ranges::cend()` works on all ranges, whereas `std::cend()` may not.

### Example: `cend`

```cpp
// requires /std:c++20 or later
#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    std::vector<int> v = {10, 20, 30};
    auto i = std::ranges::cend(v);
    --i; // get off the sentinel and onto the last element in the range
    std::cout << *i; // outputs 30
    // *i = 300 // error because the iterator is const
}
```

## `crbegin`

Get a reverse `const` iterator to the first element in a reversed range.
A reverse iterator returns the elements of the range in reverse order.
The range itself isn't reversed; access to it is.

```cpp
template<class T>
constexpr std::input_or_output_iterator auto crbegin(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

A reverse `const` iterator to the first element in the range. This iterator returns the elements of the range in reverse order, starting at the end of the range:

:::image type="content" source="media/crbegin-crend-sentinel.png" alt-text="Picture of a vector containing the elements 10, 20, and 30. There's an imaginary box before the leftmost element (the leftmost element contains the number 10) that represents the sentinel. It's labeled crend(). The first element in the vector contains the number 10, and is labeled 'last element'. The rightmost element in the vector contains 30 and is labeled crbegin().":::

If the range is an array, returns the equivalent of `reverse_iterator{rg + n}` where `n` is the number of elements in the array.
If `auto(rg.crbegin())` yields an iterator, returns the equivalent of `auto(rg.crbegin())`. If that expression is ill-formed, `auto(crbegin(rg))` is used if that expression yields an iterator.

### Remarks

`ranges::crbegin()` works on all bidirectional ranges, whereas `std::crbegin()` may not.

### Example: `crbegin`

```cpp
// requires /std:c++20 or later
#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    std::vector v{10, 20, 30};
    auto vi = std::ranges::crbegin(v);
    std::cout << *vi << ' ' << *++vi << ' ' << *++vi; // outputs 30 20 10
    // vi[1] = 100; // error because the iterator is const
}
```

## `crend`

Get the sentinel at the end of what `crbegin()` returns.
A reverse iterator returns the elements of the range in reverse order.
The range itself isn't reversed; access to it is.

```cpp
template<class T>
std::sentinel_for<decltype(ranges::crbegin(declval<T>()))> auto crend(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

The sentinel at the end of what `cbegin()` returns. The sentinel follows the last element in a reversed view of the range:

:::image type="content" source="media/crbegin-crend-sentinel.png" alt-text="Picture of a vector containing the elements 10, 20, and 30. There's an imaginary box before the leftmost element (the leftmost element contains the number 10) that represents the sentinel. It's labeled crend(). The first element in the vector contains the number 10, and is labeled 'last element'. The rightmost element in the vector contains 30 and is labeled crbegin().":::

### Remarks

`ranges::crend()` works on all bidirectional ranges, whereas `std::crend()` may not.

### `crend`example

```cpp
// requires /std:c++20 or later
#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    std::vector v{10, 20, 30};
    auto vi = std::ranges::crend(v);
    --vi; // get off the sentinel and onto the last element in the reversed range
    std::cout << *vi; // outputs 10
    // vi[0] = 300; // error because the iterator is const    
    std::cout << *vi << ' ' << *--vi << ' ' << *--vi; // outputs 10, 20, 30
}
```

## `data`

Get a pointer to the first element in a contiguous range.

```cpp
template<class T>
constexpr std::add_pointer_t<ranges::range_reference_t<T>> data(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

A pointer, based on the type of the range, to the first element in the contiguous range. For example, if the range is a vector of integers, the type of the return value is an `int *`.

### Example

```cpp
// requires /std:c++20 or later
#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    std::vector v{10, 20, 30};
    std::string src{ "a string" };
   
    auto charPtr = std::ranges::data(src); // charPtr is a char *
    auto intPtr = std::ranges::data(v); // intPtr is an int *
    std::cout << charPtr << ", " << *intPtr << '\n'; // outputs a string, 10
    *intPtr = 100;
    *charPtr = 'A';
    std::cout << charPtr << ", " << *intPtr; // outputs A string, 100
}
```

## `empty`

Test if the range is empty.

```cpp
template<class T>
constexpr bool empty(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

Returns `true` if the range has no elements; otherwise `false.`

### Example

```cpp
// requires /std:c++20 or later
#include <vector>
#include <ranges>
#include <iostream>

int main()
{
        std::vector v{10,20,30};
    std::vector<int> v2;

    std::cout << std::boolalpha << std::ranges::empty(v); // outputs false
    std::cout << std::boolalpha << ", " << std::ranges::empty(v2); // outputs true
}
```

## `end`

Get the sentinel at the end of the range.

```cpp
template<class T>
std::sentinel_for<ranges::iterator_t<T>> auto end(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

The sentinel that follows the last element in the range:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

### Remarks

`ranges::end()` works on all ranges, whereas `std::end()` may not.

### Example

```cpp
// requires /std:c++20 or later
#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    std::vector<int> v = {10, 20, 30};
    auto i = std::ranges::end(v);
    --i; // get off the sentinel and onto the last element in the range
    std::cout << *i; // outputs 30
}
```

## `rbegin`

Get a reverse iterator to the first element in a reversed range.
A reverse iterator returns the elements of the range in reverse order.
The range itself isn't reversed; access to it is.

```cpp
template<class T>
constexpr std::input_or_output_iterator auto rbegin(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

A reverse iterator to the first element in the range. This iterator returns the elements of the range in reverse order, starting at the end of the reversed range:

:::image type="content" source="media/rbegin-rend-sentinel.png" alt-text="Picture of a vector containing the elements 10, 20, and 30. There's an imaginary box before the leftmost element (the leftmost element contains the number 10) that represents the sentinel. It's labeled rend(). The first element in the vector contains the number 10, and is labeled 'last element'. The rightmost element in the vector contains 30 and is labeled rbegin().":::

If the range is an array, returns the equivalent of `reverse_iterator{rg + n}` where `n` is the number of elements in the array.
If `auto(rg.rbegin())` yields an iterator, returns the equivalent of `auto(rg.rbegin())`. If that expression is ill-formed, `auto(rbegin(rg))` is used if that expression yields an iterator.

### Remarks

`ranges::rbegin()` works on all bidirectional ranges, whereas `std::rbegin()` may not.

### Example

```cpp
// requires /std:c++20 or later
#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    std::vector v{10, 20, 30};
    auto vi = std::ranges::rbegin(v);
    std::cout << *vi << ' ' << *++vi << ' ' << *++vi; // outputs 30 20 10
}
```

## <a name="rend"></a>`rend`

Get a reverse iterator to the sentinel at the end of a reversed view of the range.
A reverse iterator returns the elements of the range in reverse order.
The range itself isn't reversed; access to it is.

```cpp
template<class T>
constexpr 
std::sentinel_for<decltype(ranges::rbegin(std::declval<T>()))> auto rend(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

A reverse iterator to the sentinel at the end of the range. The sentinel follows the last element in a reversed view of the range:

:::image type="content" source="media/rbegin-rend-sentinel.png" alt-text="Picture of a vector containing the elements 10, 20, and 30. There's an imaginary box before the leftmost element (the leftmost element contains the number 10) that represents the sentinel. It's labeled rend(). The first element in the vector contains the number 10, and is labeled 'last element'. The rightmost element in the vector contains 30 and is labeled rbegin().":::

### Remarks

`ranges::rend()` works on all bidirectional ranges, whereas `std::rend()` may not.

### Example

```cpp
// requires /std:c++20 or later
#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    std::vector v{10, 20, 30};
    auto vi = std::ranges::rend(v);
    --vi; // get off the sentinel and onto the last element in the reversed range
    std::cout << *vi; // outputs 10
    std::cout << *vi << ' ' << *--vi << ' ' << *--vi; // outputs 10, 20, 30
}
```

## `size`

Get the number of elements in the range as an unsigned value.

```cpp
template<class T>
constexpr /*unsigned integer-like type */ size(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

The number of elements in the range as an unsigned integer-like value.

### Remarks

This function executes in constant time.

### Example

```cpp
// requires /std:c++20 or later
#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    std::vector v{10, 20, 30};
    auto s = std::ranges::size(v); // s is a size_t
    std::cout << s; // outputs 3
}
```

## <a name="ssize"></a>`ssize`

Get the size of the range as a signed value.

```cpp
template<class T>
constexpr /* signed-integer-like type */ ssize(T&& rg);
```

### Parameters

*`T`*\
The type of the range.

*`rg`*\
A range.

### Return value

The number of elements in the range as a signed integer-like value.

### Remarks

This function executes in constant time.

### Example

```cpp
// requires /std:c++20 or later
#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    std::vector v{10, 20, 30};
    auto s = std::ranges::ssize(v);
    std::cout << s; // outputs 3
}
```

## See also

[`<ranges>`](ranges.md)\
[What are customization objects](https://stackoverflow.com/questions/53495848/what-are-customization-point-objects-and-how-to-use-them)
