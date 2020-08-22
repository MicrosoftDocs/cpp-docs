---
title: "&lt;bit&gt; functions"
ms.date: "08/26/2020"
f1_keywords: ["bit/std::bit_cat", "bit/std::has_single_bit", "bit/std::bit_ceil", "bit/std::bit_floor", "bit/std::bit_width", "bit/std::rotl", "bit/std::rotr", "bit/std::countl_zero", "bit/std::countl_one","bit/std::countr_zero","bit/std::countr_one","bit/std::popcount"]
helpviewer_keywords: ["std::bit [C++], bit_cast", "std::bit [C++], has_single_bit", "std::bit [C++], bit_ceil", "std::bit [C++], bit_floor", "std::bit [C++], bit_width", "std::bit [C++], "rotl", "std::bit [C++], "rotr", "std::bit [C++], "countl_zero", "std::bit [C++], "countl_one", "std::bit [C++], countr_zero", ""std::bit [C++], "countr_one", "std::bit [C++], "popcount"]
---
# &lt;bit&gt; functions

The \<bit> header includes the following non-member functions:

| **Non-member functions** | **Description** |
|-|-|
|[bit_cast](#bit_cast) | Reinterpret the object representation of one type as that of another |
|[bit_ceil](#bit_ceil) | Finds the smallest power of 2 greater than or equal to the given value |
|[bit_floor](#bit_floor) | Finds the largest integral power of two not greater than the given value |
|[bit_width](#bit_width) | Finds the smallest number of bits needed to represent the given value |
|[has_single_bit](#has_single_bit) | Checks if a value has only a single bit set, that is, is an integral power of two. |
|[rotl](#rotl) | Computes the result of bitwise left-rotation |
|[rotr](#rotr) | Computes the result of bitwise right-rotation |
|[countl_zero](#countl_zero) | Counts the number of consecutive 0 bits, starting from the most significant bit |
|[countl_one](#countl_one) | Counts the number of consecutive 1 bits, starting from the most significant bit |
|[countr_zero](#countr_zero) | Counts the number of consecutive 0 bits, starting from the least significant bit |
|[countr_one](#countl_one) | Counts the number of consecutive 1 bits, starting from the least significant bit |
|[popcount](#popcount) | Counts the number of 1 bits in an unsigned integer |

## <a name="bit_cast"></a>`bit_cast`

Copy a bit pattern from an object of type `From` to a new object of type `To`.

```cpp
template <class To, class From>
To bit_cast(const From& from) noexcept;
```

### Parameters

*To*\
The type of the output.

*From*\
The type of the value to convert.

*from*\
The value to convert.

### Return Value

An object of type `To`

Each bit in the result matches the corresponding bit in `from`, unless there are padding bits in `To`, in which case those bits in the result are unspecified.

### Example

```cpp
#include <bit>
#include <iostream>

int main()
{
    int i = 0b1000001;
    char ch = std::bit_cast<int>(i);
    std::cout << ch;
    
    return 0;
}
```

```Output
A
```

### Remarks

Low-level code often needs to interpret an object of one type as another type. The new object has the same bit representation, but has a different type. But making the bit-for-bit conversion can be error-prone.

Instead of using `reinterpret_cast`, or `memcpy()`, `bit_cast()` is a safe way to make these conversions.

This overload only participates in overload resolution if:
-  `sizeof(To) == sizeof(From)`
- `To` and `From` are [is_trivially_copyable](https://docs.microsoft.com/cpp/standard-library/is-trivially-copyable-class?view=vs-2019`).

This function template is `constexpr` only if `To`, `From` and their subobjects are:
- not a union or pointer type
- not a pointer to member type
- not volatile-qualified
- have no non-static data member that is a reference type

## <a name="bit_ceil"></a>`bit_ceil`

Finds the smallest power of 2 greater than or equal to the given value. For example, given 3, returns 4.

```cpp
template<class T>
constexpr T bit_ceil(T value);
```

### Parameters

*T*\
The type of `value`. Must be an unsigned integer type.

*value*\
The value to test.

### Return Value

 The smallest power of 2 greater than or equal to `value`.

### Example

```cpp
#include <bit>
#include <iostream>

int main()
{
    for (auto i = 0u; i < 6u; ++i) // bit_ceil() takes an unsigned integer type
    {
        auto nextClosestPowerOf2 = std::bit_ceil(i);
        std::cout << "bit_ceil(" << std::bitset<4>(i) << ") = " << std::bitset<4>( nextClosestPowerOf2 ) << '\n';
    }
    
    return 0;
}
```

```Output
bit_ceil(0000) = 0001
bit_ceil(0001) = 0001
bit_ceil(0010) = 0010
bit_ceil(0011) = 0100
bit_ceil(0100) = 0100
bit_ceil(0101) = 1000
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, and so on.

## <a name="bit_floor"></a>`bit_floor`

Finds the largest integral power of two not greater than the given value. For example, given 5, returns 4.

```cpp
template< class T >
constexpr T bit_floor(T value) noexcept;
```

### Parameters

*T*\
The type of `value`. Must be an unsigned integer type.

*value*\
The value to test.

### Return Value

The largest integral power of two that is not greater than `value`. If `value` is zero, returns zero.

### Example

```cpp
#include <bit>
#include <iostream>

int main()
{
    for (auto i = 0u; i < 6u; ++i) // ceil() takes an unsigned integer type
    {
        auto previousPowerOf2 = std::bit_floor(i);
        std::cout << "bit_floor(" << std::bitset<4>(i) << ") = " << std::bitset<4>(previousPowerOf2) << '\n';
    }
    
    return 0;
}
```

```Output
bit_floor(0000) = 0000
bit_floor(0001) = 0001
bit_floor(0010) = 0010
bit_floor(0011) = 0010
bit_floor(0100) = 0100
bit_floor(0101) = 0100
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, and so on.

## <a name="bit_width"></a>`bit_width`

Finds the smallest number of bits needed to represent the given value. 

For example, given 5 (b101), returns 3 because it takes 3 bits to express the value 5.

```cpp
template< class T >
constexpr T bit_floor(T value) noexcept;
```

### Parameters

*T*\
The type of `value`. Must be an unsigned integer type.

*value*\
The value to test.

### Return Value

The largest integral power of two that is not greater than `value`. If `value` is zero, returns zero.

### Example

```cpp
#include <bit>
#include <iostream>

int main()
{
    for (auto i = 0u; i < 6u; ++i) // ceil() takes an unsigned integer type
    {
        auto previousPowerOf2 = std::bit_floor(i);
        std::cout << "bit_floor(" << std::bitset<4>(i) << ") = " << std::bitset<4>(previousPowerOf2) << '\n';
    }
    
    return 0;
}
```

```Output
bit_floor(0000) = 0000
bit_floor(0001) = 0001
bit_floor(0010) = 0010
bit_floor(0011) = 0010
bit_floor(0100) = 0100
bit_floor(0101) = 0100
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, and so on.

## <a name="has_single_bit"></a>`has_single_bit`

Checks if a value has only a single bit set, that is, is an integral power of two.
 
```cpp
template <class T>
constexpr bool has_single_bit(T value) noexcept;
```

### Parameters

*T*\
The type of the value to test. Must be an unsigned integer type.

*value*\
The value to test.

### Return value

`true` if `value` has only a single bit set, that is, `value` is an integral power of two; otherwise `false`.

### Example

```cpp
#include <bit>
#include <iostream>

int main()
{
   for (auto i = 0u; i < 10u; ++i) // has_single_bit() takes an unsigned integer type
    {
        std::cout << "has_single_bit(" << std::bitset<4>(i) << ") = "
            << (std::has_single_bit(i) ? "true" : "false") << '\n';
    }

    return 0;
}
```

```Output
has_single_bit(0000) = false
has_single_bit(0001) = true
has_single_bit(0010) = true
has_single_bit(0011) = false
has_single_bit(0100) = true
has_single_bit(0101) = false
has_single_bit(0110) = false
has_single_bit(0111) = false
has_single_bit(1000) = true
has_single_bit(1001) = false
```

### Remarks

This template function only participates in overload resolution if `T` is an unsigned integer type. For example: `unsigned int`, `unsigned long`, `unsigned short`, and so on.

## Requirements

**Header:** \<bit>

**Namespace:** std

/std:c++latest is required

## See also

[\<bit>](bit.md)