---
title: "<bit> functions"
description: "Functions to access, manipulate, and process individual bits and sequences of bits"
ms.date: "08/28/2020"
f1_keywords: ["bit/std::bit_cast", "bit/std::has_single_bit", "bit/std::bit_ceil", "bit/std::bit_floor", "bit/std::bit_width", "bit/std::rotl", "bit/std::rotr", "bit/std::countl_zero", "bit/std::countl_one","bit/std::countr_zero","bit/std::countr_one","bit/std::popcount"]
helpviewer_keywords: ["std::bit [C++], bit_cast", "std::bit [C++], has_single_bit", "std::bit [C++], bit_ceil", "std::bit [C++], bit_floor", "std::bit [C++], bit_width", "std::bit [C++], rotl", "std::bit [C++], rotr", "std::bit [C++], countl_zero", "std::bit [C++], countl_one", "std::bit [C++], countr_zero", "std::bit [C++], countr_one", "std::bit [C++], popcount"]
---
# `<bit>` functions

The `<bit>` header includes the following non-member template functions:

| **Non-member functions** | **Description** |
|--------|---------|
|[`bit_cast`](#bit_cast) | Reinterpret the object representation from one type to another. |
|[`bit_ceil`](#bit_ceil) | Find the smallest power of two greater than or equal to a value. |
|[`bit_floor`](#bit_floor) | Find the largest power of two not greater than a value. |
|[`bit_width`](#bit_width) | Find the smallest number of bits needed to represent a value. |
|[`countl_zero`](#countl_zero) | Count the number of consecutive bits set to zero, starting from the most significant bit. |
|[`countl_one`](#countl_one) | Count the number of consecutive bits set to one, starting from the most significant bit. |
|[`countr_zero`](#countr_zero) | Count the number of consecutive bits set to zero, starting from the least significant bit. |
|[`countr_one`](#countl_one) | Count the number of consecutive bits set to one, starting from the least significant bit. |
|[`has_single_bit`](#has_single_bit) | Check if a value has only a single bit set to one. This is the same as testing whether a value is a power of two. |
|[`popcount`](#popcount) | Count the number of bits set to one. |
|[`rotl`](#rotl) | Compute the result of a bitwise left rotation. |
|[`rotr`](#rotr) | Compute the result of a bitwise right rotation. |

## <a name="bit_cast"></a>`bit_cast`

Copy a bit pattern from an object of type `From` to a new object of type `To`.

```cpp
template <class To, class From>
[[nodiscard]] constexpr To bit_cast(const From& from) noexcept;
```

### Parameters

*To*\
The type of the output.

*From*\
The type of the value to convert.

*from*\
The value to convert.

### Return value

An object of type `To`.

Each bit in the result matches the corresponding bit in `from` unless there are padding bits in `To`, in which case those bits in the result are unspecified.

### Example

```cpp
#include <bit>
#include <iostream>

int main()
{
    float f = std::numeric_limits<float>::infinity();
    int i = std::bit_cast<int>(f);
    std::cout << "float f = " << std::hex << f
              << "\nstd::bit_cast<int>(f) = " << std::hex << i << '\n';
    return 0;
}
```

```Output
float f = inf
std::bit_cast<int>(f) = 7f800000
```

### Remarks

Low-level code often needs to interpret an object of one type as another type. The reinterpreted object has the same bit representation as the original, but is a different type.

Instead of using `reinterpret_cast`, or `memcpy()`, `bit_cast()` is a better way to make these conversions. It's better because:

- `bit_cast()` is `constexpr`
- `bit_cast()` requires the types to be trivially copyable and the same size. This prevents potential problems that you could encounter using `reinterpret_cast` and `memcpy` because they could be used to inadvertently, and incorrectly, convert non-trivially-copyable types. Also, `memcpy()` could be used to inadvertently copy between types that aren't the same size. For example, a double (8 bytes) into an unsigned int (4 bytes), or the other way around.

This overload only participates in overload resolution if:

- `sizeof(To) == sizeof(From)`
- `To` and `From` are [is_trivially_copyable](is-trivially-copyable-class.md).

This function template is `constexpr` if and only if `To`, `From`, and the types of their subobjects are:

- Not a union or pointer type
- Not a pointer to member type
- Not volatile-qualified
- Have no non-static data member that is a reference type

## <a name="bit_ceil"></a>`bit_ceil`

Find the smallest power of two greater than or equal to a value. For example, given `3`, returns `4`.

```cpp
template<class T>
[[nodiscard]] constexpr T bit_ceil(T value);
```

### Parameters

*`value`*\
The unsigned integer value to test.

### Return value

 The smallest power of two greater than or equal to `value`.

### Example

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    for (auto i = 0u; i < 6u; ++i) // bit_ceil() takes an unsigned integer type
    {
        auto nextClosestPowerOf2 = std::bit_ceil(i);
        std::cout << "\nbit_ceil(0b" << std::bitset<4>(i) << ") = "
                  << "0b" << std::bitset<4>(nextClosestPowerOf2);
    }
    return 0;
}
```

```Output
bit_ceil(0b0000) = 0b0001
bit_ceil(0b0001) = 0b0001
bit_ceil(0b0010) = 0b0010
bit_ceil(0b0011) = 0b0100
bit_ceil(0b0100) = 0b0100
bit_ceil(0b0101) = 0b1000
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, `unsigned char`, and so on.

## <a name="bit_floor"></a>`bit_floor`

Find the largest power of two not greater than a value. For example, given `5`, returns `4`.

```cpp
template< class T >
[[nodiscard]] constexpr T bit_floor(T value) noexcept;
```

### Parameters

*`value`*\
The unsigned integer value to test.

### Return value

The largest power of two that isn't greater than `value`.\
If `value` is zero, returns zero.

### Example

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    for (auto i = 0u; i < 6u; ++i) // bit_floor() takes an unsigned integer type
    {
        auto previousPowerOf2 = std::bit_floor(i);
        std::cout << "\nbit_floor(0b" << std::bitset<4>(i) << ") = 0b"
                  << std::bitset<4>(previousPowerOf2);
    }
    return 0;
}
```

```Output
bit_floor(0b0000) = 0b0000
bit_floor(0b0001) = 0b0001
bit_floor(0b0010) = 0b0010
bit_floor(0b0011) = 0b0010
bit_floor(0b0100) = 0b0100
bit_floor(0b0101) = 0b0100
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, `unsigned char`, and so on.

## <a name="bit_width"></a>`bit_width`

Find the smallest number of bits needed to represent a value.

For example, given 5 (0b101), returns 3 because it takes 3 binary bits to express the value 5.

```cpp
template<class T>
[[nodiscard]] constexpr T bit_width(T value) noexcept;
```

### Parameters

*`value`*\
The unsigned integer value to test.

### Return value

The number of bits needed to represent `value`.\
If `value` is zero, returns zero.

### Example

```cpp
#include <bit>
#include <iostream>

int main()
{
    for (unsigned i=0u; i <= 8u; ++i)
    {
        std::cout << "\nbit_width(" << i << ") = "
                  << std::bit_width(i);
    }
    return 0;
}
```

```Output
bit_width(0) = 0
bit_width(1) = 1
bit_width(2) = 2
bit_width(3) = 2
bit_width(4) = 3
bit_width(5) = 3
bit_width(6) = 3
bit_width(7) = 3
bit_width(8) = 4
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, `unsigned char`, and so on.

## <a name="countl_zero"></a>`countl_zero`

Count the number of consecutive bits set to zero, starting from the most significant bit.

```cpp
template<class T>
[[nodiscard]] constexpr int countl_zero(T value) noexcept;
```

### Parameters

*`value`*\
The unsigned integer value to test.

### Return value

The number of consecutive zero bits, starting from the most significant bit.\
If `value` is zero, the number of bits in the type of `value`.

### Example

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    for (unsigned char result = 0, i = 0; i < 9; i++)
    {
        std::cout << "\ncountl_zero(0b" << std::bitset<8>(result) << ") = " << std::countl_zero(result);
        result = result == 0 ? 1 : result * 2;
    }
    return 0;
}
```

```Output
countl_zero(0b00000000) = 8
countl_zero(0b00000001) = 7
countl_zero(0b00000010) = 6
countl_zero(0b00000100) = 5
countl_zero(0b00001000) = 4
countl_zero(0b00010000) = 3
countl_zero(0b00100000) = 2
countl_zero(0b01000000) = 1
countl_zero(0b10000000) = 0
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, `unsigned char`, and so on.

## <a name="countl_one"></a>`countl_one`

Count the number of consecutive bits set to one, starting from the most significant bit.

```cpp
template<class T>
[[nodiscard]] constexpr int countl_one(T value) noexcept;
```

### Parameters

*`value`*\
The unsigned integer value to test.

### Return value

The number of consecutive bits set to one, starting from the most significant bit.

### Example

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    unsigned char value = 0;
    for (unsigned char bit = 128; bit > 0; bit /= 2)
    {
        value |= bit;
        std::cout << "\ncountl_one(0b" << std::bitset<8>(value) << ") = "
                  << std::countl_one(value);
    }
    return 0;
}
```

```Output
countl_one(0b10000000) = 1
countl_one(0b11000000) = 2
countl_one(0b11100000) = 3
countl_one(0b11110000) = 4
countl_one(0b11111000) = 5
countl_one(0b11111100) = 6
countl_one(0b11111110) = 7
countl_one(0b11111111) = 8
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, `unsigned char`, and so on.

## <a name="countr_zero"></a>`countr_zero`

Count the number of consecutive bits set to zero, starting from the least significant bit.

```cpp
template<class T>
[[nodiscard]] constexpr int countr_zero(T value) noexcept;
```

### Parameters

*`value`*\
The unsigned integer value to test.

### Return value

The number of consecutive zero bits, starting from the least significant bit.\
If `value` is zero, the number of bits in the type of `value`.

### Example

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    for (unsigned char result = 0, i = 0; i < 9; i++)
    {
        std::cout << "\ncountr_zero(0b" << std::bitset<8>(result) << ") = "
                  << std::countr_zero(result);
        result = result == 0 ? 1 : result * 2;
    }
    return 0;
}
```

```Output
countr_zero(0b00000000) = 8
countr_zero(0b00000001) = 0
countr_zero(0b00000010) = 1
countr_zero(0b00000100) = 2
countr_zero(0b00001000) = 3
countr_zero(0b00010000) = 4
countr_zero(0b00100000) = 5
countr_zero(0b01000000) = 6
countr_zero(0b10000000) = 7
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, `unsigned char`, and so on.

## <a name="countr_one"></a>`countr_one`

Count the number of consecutive bits set to one, starting from the least significant bit.

```cpp
template<class T>
[[nodiscard]] constexpr int countr_one(T value) noexcept;
```

### Parameters

*`value`*\
The unsigned integer value to test.

### Return value

The number of consecutive bits set to one, starting from the least significant bit.

### Example

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    unsigned char value = 0;
    for (int bit = 1; bit <= 128; bit *= 2)
    {
        value |= bit;
        std::cout << "\ncountr_one(0b" << std::bitset<8>(value) << ") = "
                  << std::countr_one(value);
    }
    return 0;
}
```

```Output
countr_one(0b00000001) = 1
countr_one(0b00000011) = 2
countr_one(0b00000111) = 3
countr_one(0b00001111) = 4
countr_one(0b00011111) = 5
countr_one(0b00111111) = 6
countr_one(0b01111111) = 7
countr_one(0b11111111) = 8
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, `unsigned char`, and so on.

## <a name="has_single_bit"></a>`has_single_bit`

Check if a value has only one bit set.This is the same as testing whether a value is a power of two.

```cpp
template <class T>
[[nodiscard]] constexpr bool has_single_bit(T value) noexcept;
```

### Parameters

*`value`*\
The unsigned integer value to test.

### Return value

`true` if `value` has only one bit set, which also means that `value` is a power of two. Otherwise, `false`.

### Example

```cpp
#include <bit>
#include <bitset>
#include <iostream>
#include <iomanip>

int main()
{
    for (auto i = 0u; i < 10u; ++i)
    {
        std::cout << "has_single_bit(0b" << std::bitset<4>(i) << ") = "
                  << std::boolalpha << std::has_single_bit(i) << '\n';
    }
    return 0;
}
```

```Output
has_single_bit(0b0000) = false
has_single_bit(0b0001) = true
has_single_bit(0b0010) = true
has_single_bit(0b0011) = false
has_single_bit(0b0100) = true
has_single_bit(0b0101) = false
has_single_bit(0b0110) = false
has_single_bit(0b0111) = false
has_single_bit(0b1000) = true
has_single_bit(0b1001) = false
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, `unsigned char`, and so on.

## <a name="popcount"></a>`popcount`

Count the number of bits set to one in an unsigned integer value.

```cpp
template<class T>
[[nodiscard]] constexpr int popcount(T value) noexcept;
```

### Parameters

*`value`*\
The unsigned integer value to test.

### Return value

The number bits set to one in `value`.

### Example

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
   for (unsigned char value = 0; value < 16; value++)
    {
        std::cout << "\npopcount(0b" << std::bitset<4>(value) << ") = "
                  << std::popcount(value);
    }
    return 0;
}
```

```Output
popcount(0b0000) = 0
popcount(0b0001) = 1
popcount(0b0010) = 1
popcount(0b0011) = 2
popcount(0b0100) = 1
popcount(0b0101) = 2
popcount(0b0110) = 2
popcount(0b0111) = 3
popcount(0b1000) = 1
popcount(0b1001) = 2
popcount(0b1010) = 2
popcount(0b1011) = 3
popcount(0b1100) = 2
popcount(0b1101) = 3
popcount(0b1110) = 3
popcount(0b1111) = 4
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, `unsigned char`, and so on.

## <a name="rotl"></a>`rotl`

Rotates the bits of  an unsigned integer value left the specified number of times. Bits that "fall out" of the leftmost bit are rotated into the rightmost bit.

```cpp
template<class T>
[[nodiscard]] constexpr T rotl(T value, int s) noexcept;
```

### Parameters

*`value`*\
The unsigned integer value to rotate.

*s*\
The number of left rotations to perform.

### Return value

The result of rotating `value` left, `s` times.\
If `s` is zero, returns `value`.\
If `s` is negative, does `rotr(value, -s)`. Bits that 'fall out' of the rightmost bit are rotated into the leftmost bit.

### Example

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    unsigned char bits = 1;
    for (int i = 0; i < 8; ++i)
    {
        std::cout << "rotl(0b" << std::bitset<8>(bits) << ", 1) = ";
        bits = std::rotl(bits, 1);
        std::cout << "0b" << std::bitset<8>(bits) << '\n';
    }
    std::cout << "rotl(0b" << std::bitset<8>(bits) << ",-1) = ";
    bits = std::rotl(bits, -1);
    std::cout << "0b" << std::bitset<8>(bits);
    return 0;
}
```

```Output
rotl(0b00000001, 1) = 0b00000010
rotl(0b00000010, 1) = 0b00000100
rotl(0b00000100, 1) = 0b00001000
rotl(0b00001000, 1) = 0b00010000
rotl(0b00010000, 1) = 0b00100000
rotl(0b00100000, 1) = 0b01000000
rotl(0b01000000, 1) = 0b10000000
rotl(0b10000000, 1) = 0b00000001
rotl(0b00000001,-1) = 0b10000000
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, `unsigned char`, and so on.

## <a name="rotr"></a>`rotr`

Rotates the bits of `value` right the specified number of times. Bits that 'fall out' of the rightmost bit are rotated back into the leftmost bit.

```cpp
template<class T>
[[nodiscard]] constexpr T rotr(T value, int s) noexcept;
```

### Parameters

*`value`*\
The unsigned integer value to rotate.

*`s`*\
The number of right rotations to perform.

### Return value

The result of rotating `value` right, `s` times.\
If `s` is zero, returns `value`.\
If `s` is negative, does `rotl(value, -s)`. Bits that 'fall out' of the leftmost bit are rotated back into the rightmost bit.

### Example

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    unsigned char bits = 128;
    for (int i = 0; i < 8; ++i)
    {
        std::cout << "rotr(0b" << std::bitset<8>(bits) << ", 1) = ";
        bits = std::rotr(bits, 1);
        std::cout << "0b" << std::bitset<8>(bits) << '\n';
    }
    std::cout << "rotr(0b" << std::bitset<8>(bits) << ",-1) = ";
    bits = std::rotr(bits, -1);
    std::cout << "0b" << std::bitset<8>(bits);
    return 0;
}
```

```Output
rotr(0b10000000, 1) = 0b01000000
rotr(0b01000000, 1) = 0b00100000
rotr(0b00100000, 1) = 0b00010000
rotr(0b00010000, 1) = 0b00001000
rotr(0b00001000, 1) = 0b00000100
rotr(0b00000100, 1) = 0b00000010
rotr(0b00000010, 1) = 0b00000001
rotr(0b00000001, 1) = 0b10000000
rotr(0b10000000,-1) = 0b00000001
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, `unsigned char`, and so on.

## Requirements

**Header:** `<bit>`

**Namespace:** std

[`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## See also

[`<bit>`](bit.md)
