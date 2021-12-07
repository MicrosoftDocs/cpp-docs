---
title: "<bit>"
description: "Functions to access, manipulate, and process individual bits and sequences of bits."
ms.date: "08/28/2020"
f1_keywords: ["<bit>"]
helpviewer_keywords: ["bit header"]
---
# `<bit>`

Defines functions to access, manipulate, and process individual bits and sequences of bits.

For example, there are functions to rotate bits, find the number of consecutive set or cleared bits, see if a number is an integral power of two, find the smallest number of bits to represent a number, and so on.

## Requirements

**Header:** \<bit>

**Namespace:** std

[`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Members

### Types

| Type | Description |
|--------|----------|
| [endian](bit-enum.md) | Specifies the endianness of scalar types. |

### Functions

| Function | Description |
|-----|-----|
|[bit_cast](bit-functions.md#bit_cast) | Reinterpret the object representation from one type to another. |
|[bit_ceil](bit-functions.md#bit_ceil) | Find the smallest power of two greater than or equal to a value. |
|[bit_floor](bit-functions.md#bit_floor) | Find the largest integral power of two not greater than a value. |
|[bit_width](bit-functions.md#bit_width) | Find the smallest number of bits needed to represent a value. |
|[countl_zero](bit-functions.md#countl_zero) | Count the number of consecutive bits set to zero, starting from the most significant bit. |
|[countl_one](bit-functions.md#countl_one) | Count the number of consecutive bits set to one, starting from the most significant bit. |
|[countr_zero](bit-functions.md#countr_zero) | Count the number of consecutive bits set to zero, starting from the least significant bit. |
|[countr_one](bit-functions.md#countl_one) | Count the number of consecutive bits set to one, starting from the least significant bit. |
|[has_single_bit](bit-functions.md#has_single_bit) | Check if a value has only a single bit set to one. This is the same as testing whether a value is a power of two. |
|[popcount](bit-functions.md#popcount) | Count the number of bits set to one. |
|[rotl](bit-functions.md#rotl) | Compute the result of a bitwise left-rotation. |
|[rotr](bit-functions.md#rotr) | Compute the result of a bitwise right-rotation. |

## See also

[Header Files Reference](cpp-standard-library-header-files.md)
