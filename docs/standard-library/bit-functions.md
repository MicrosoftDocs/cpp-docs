---
title: "&lt;bit&gt; functions"
ms.date: "08/10/2020"
f1_keywords: ["charconv/std::to_chars", "charconv/std::from_chars"]
helpviewer_keywords: ["std::charconv [C++], to_chars", "std::charconv [C++], from_chars"]
---
# &lt;bit&gt; functions

The \<bit> header includes the following non-member functions:

| **Non-member functions** | **Description** |
|-|-|
|[bit_cast](#bit_cast) | Reinterpret the object representation of one type as that of another |
|[has_single_bit](#has_single_bit) | Checks if a number is an integral power of two |
|[bit_ceil](#bit_ceil) | Finds the smallest integral power of two not less than the given value |
|[bit_floor](#bit_floor) | Finds the largest integral power of two not greater than the given value |
|[bit_width](#bit_width) | Finds the smallest number of bits needed to represent the given value |
|[rotl](#rotl) | Computes the result of bitwise left-rotation |
|[rotr](#rotr) | Computes the result of bitwise right-rotation |
|[countl_zero](#countl_zero) | Counts the number of consecutive 0 bits, starting from the most significant bit |
|[countl_one](#countl_one) | Counts the number of consecutive 1 bits, starting from the most significant bit |
|[countr_zero](#countr_zero) | Counts the number of consecutive 0 bits, starting from the least significant bit |
|[countr_one](#countl_one) | Counts the number of consecutive 1 bits, starting from the least significant bit |
|[popcount](#popcount) | Counts the number of 1 bits in an unsigned integer |

## <a name="as_bytes"></a>`as_bytes`

Get a read-only view of the object representation of the elements in the span.

```cpp
template <class T, size_t Extent>
auto as_bytes(span<T, Extent> s) noexcept;
```

### Parameters

*T*\
The type of the elements in the span.

*Extent*\
The number of elements in the span (if known at compile time), otherwise `dynamic_extent` indicating that the number of elements isn't known until runtime.

*s*\
The span to get the raw representation of.

### Return Value

A `span<const byte, S>` to the first item stored in the span where `S` is `{reinterpret_cast<const std::byte*>(s.data()), s.size_bytes()}`

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    auto bytes = std::as_bytes(mySpan);
}
```

## Requirements

**Header:** \<bit>

**Namespace:** std

/std:c++20, or later, is required.

## See also

[\<bit>](bit.md)