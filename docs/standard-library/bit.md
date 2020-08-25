---
title: "&lt;bit&gt;"
description: "Functions to access, manipulate, and process individual bits and sequences of bits."
ms.date: "08/24/2020"
f1_keywords: ["<bit>"]
helpviewer_keywords: ["bit header"]
---

# &lt;bit&gt;

This header provides functions to access, manipulate, and process individual bits and sequences of bits.

For example, rotate bits, find the number of consecutive set or clear bits, see if a number is an integral power of two, find the smallest number of bits to represent a number, and so on.

## Requirements

**Header:** \<bit>

**Namespace:** std

/std:c++latest is required

## Members

### Types

| Type | Description |
|-|:-|
| [endian](bit_enum.md) | Specifies the endianness of scalar types. |

### Functions

| Function | Description |
|-|:-|
|[bit_cast](bit-functions.md#bit_cast) | Reinterpret the object representation of one type as that of another |
|[bit_ceil](bit-functions.md#bit_ceil) | Finds the smallest power of 2 greater than or equal to the given value |
|[bit_floor](bit-functions.md#bit_floor) | Finds the largest integral power of two not greater than the given value |
|[bit_width](bit-functions.md#bit_width) | Finds the smallest number of bits needed to represent the given value |
|[countl_zero](bit-functions.md#countl_zero) | Counts the number of consecutive 0 bits, starting from the most significant bit |
|[countl_one](bit-functions.md#countl_one) | Counts the number of consecutive 1 bits, starting from the most significant bit |
|[countr_zero](bit-functions.md#countr_zero) | Counts the number of consecutive 0 bits, starting from the least significant bit |
|[countr_one](bit-functions.md#countl_one) | Counts the number of consecutive 1 bits, starting from the least significant bit |
|[has_single_bit](bit-functions.md#has_single_bit) | Checks if a value has only a single bit set, that is, is an integral power of two. |
|[popcount](bit-functions.md#popcount) | Counts the number of 1 bits in an unsigned integer |
|[rotl](bit-functions.md#rotl) | Computes the result of bitwise left-rotation |
|[rotr](bit-functions.md#rotr) | Computes the result of bitwise right-rotation |

## See also

[Header Files Reference](cpp-standard-library-header-files.md)