---
description: "Learn more about: Built-in types (C++)"
title: "Built-in types  (C++)"
ms.date: 07/22/2020
f1_keywords: ["__int128_cpp", "__wchar_t_cpp", "char_cpp", "char8_t_cpp", "char16_t_cpp", "char32_t_cpp", "double_cpp", "float_cpp", "int_cpp", "long_cpp", "long_double_cpp", "short_cpp", "signed_cpp", "unsigned_cpp", "unsigned_int_cpp", "wchar_t_cpp"]
helpviewer_keywords: ["specifiers [C++], type", "float keyword [C++]", "char keyword [C++]", "__wchar_t keyword [C++]", "signed types [C++], summary of data types", "Integer data type [C++], C++ data types", "arithmetic operations [C++], types", "int data type", "unsigned types [C++], summary of data types", "short data type [C++]", "double data type [C++], summary of types", "long long keyword [C++]", "long double keyword [C++]", "unsigned types [C++]", "signed types [C++]", "void keyword [C++]", "storage [C++], basic type", "integral types, C++", "wchar_t keyword [C++]", "floating-point numbers [C++], C++ data types", "long keyword [C++]", "type specifiers [C++]", "integral types", "long keyword [C++]", "storing types [C++]", "data types [C++], void"]
ms.assetid: 58b0106a-0406-4b74-a430-7cbd315c0f89
---
# Built-in types (C++)

Built-in types (also called *fundamental types*) are specified by the C++ language standard and are built into the compiler. Built-in types aren't defined in any header file. Built-in types are divided into three main categories: *integral*, *floating-point*, and *void*. Integral types represent whole numbers. Floating-point types can specify values that may have fractional parts. Most built-in types are treated as distinct types by the compiler. However, some types are *synonyms*, or treated as equivalent types by the compiler.

## Void type

The [`void`](void-cpp.md) type describes an empty set of values. No variable of type **`void`** can be specified. The **`void`** type is used primarily to declare functions that return no values or to declare generic pointers to untyped or arbitrarily typed data. Any expression can be explicitly converted or cast to type **`void`**. However, such expressions are restricted to the following uses:

- An expression statement. (For more information, see [Expressions](expressions-cpp.md).)

- The left operand of the comma operator. (For more information, see [Comma Operator](comma-operator.md).)

- The second or third operand of the conditional operator (`? :`). (For more information, see [Expressions with the Conditional Operator](conditional-operator-q.md).)

## std::nullptr_t

The keyword **`nullptr`** is a null-pointer constant of type `std::nullptr_t`, which is convertible to any raw pointer type. For more information, see [`nullptr`](nullptr.md).

## Boolean type

The [`bool`](bool-cpp.md) type can have values [`true`](../cpp/true-cpp.md) and [`false`](../cpp/false-cpp.md). The size of the **`bool`** type is implementation-specific. See [Sizes of built-in types](#sizes-of-built-in-types) for Microsoft-specific implementation details.

## Character types

The **`char`** type is a character representation type that efficiently encodes members of the basic execution character set. The C++ compiler treats variables of type **`char`**, **`signed char`**, and **`unsigned char`** as having different types.

**Microsoft-specific**: Variables of type **`char`** are promoted to **`int`** as if from type **`signed char`** by default, unless the [`/J`](../build/reference/j-default-char-type-is-unsigned.md) compilation option is used. In this case, they're treated as type **`unsigned char`** and are promoted to **`int`** without sign extension.

A variable of type **`wchar_t`** is a wide-character or multibyte character type. Use the **`L`** prefix before a character or string literal to specify the wide-character type.

**Microsoft-specific**: By default, **`wchar_t`** is a native type, but you can use [`/Zc:wchar_t-`](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) to make **`wchar_t`** a typedef for **`unsigned short`**. The **`__wchar_t`** type is a Microsoft-specific synonym for the native **`wchar_t`** type.

The **`char8_t`** type is used for UTF-8 character representation. It has the same representation as **`unsigned char`**, but is treated as a distinct type by the compiler. The **`char8_t`** type is new in C++20. **Microsoft-specific**: use of **`char8_t`**  requires the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option.

The **`char16_t`** type is used for UTF-16 character representation. It must be large enough to represent any UTF-16 code unit. It's treated as a distinct type by the compiler.

The **`char32_t`** type is used for UTF-32 character representation. It must be large enough to represent any UTF-32 code unit. It's treated as a distinct type by the compiler.

## Floating-point types

Floating-point types use an IEEE-754 representation to provide an approximation of fractional values over a wide range of magnitudes. The following table lists the floating-point types in C++ and the comparative restrictions on floating-point type sizes. These restrictions are mandated by the C++ standard and are independent of the Microsoft implementation. The absolute size of built-in floating-point types isn't specified in the standard.

| Type | Contents |
|--|--|
| **`float`** | Type **`float`** is the smallest floating point type in C++. |
| **`double`** | Type **`double`** is a floating point type that is larger than or equal to type **`float`**, but shorter than or equal to the size of type **`long double`**. |
| **`long double`** | Type **`long double`** is a floating point type that is larger than or equal to type **`double`**. |

**Microsoft-specific**: The representation of **`long double`** and **`double`** is identical. However, **`long double`** and **`double`** are treated as distinct types by the compiler. The Microsoft C++ compiler uses the 4- and 8-byte IEEE-754 floating-point representations. For more information, see [IEEE floating-point representation](../build/ieee-floating-point-representation.md).

## Integer types

The **`int`** type is the default basic integer type. It can represent all of the whole numbers over an implementation-specific range.

A *signed* integer representation is one that can hold both positive and negative values. It's used by default, or when the **`signed`** modifier keyword is present. The **`unsigned`** modifier keyword specifies an *unsigned* representation that can only hold non-negative values.

A size modifier specifies the width in bits of the integer representation used. The language supports **`short`**, **`long`**, and **`long long`** modifiers. A **`short`** type must be at least 16 bits wide. A **`long`** type must be at least 32 bits wide. A **`long long`** type must be at least 64 bits wide. The standard specifies a size relationship between the integral types:

`1 == sizeof(char) <= sizeof(short) <= sizeof(int) <= sizeof(long) <= sizeof(long long)`

An implementation must maintain both the minimum size requirements and the size relationship for each type. However, the actual sizes can and do vary between implementations. See [Sizes of built-in types](#sizes-of-built-in-types) for Microsoft-specific implementation details.

The **`int`** keyword may be omitted when **`signed`**, **`unsigned`**, or size modifiers are specified. The modifiers and **`int`** type, if present, may appear in any order. For example, **`short unsigned`** and **`unsigned int short`** refer to the same type.

### Integer type synonyms

The following groups of types are considered synonyms by the compiler:

- **`short`**, **`short int`**, **`signed short`**, **`signed short int`**

- **`unsigned short`**, **`unsigned short int`**

- **`int`**, **`signed`**, **`signed int`**

- **`unsigned`**, **`unsigned int`**

- **`long`**, **`long int`**, **`signed long`**, **`signed long int`**

- **`unsigned long`**, **`unsigned long int`**

- **`long long`**, **`long long int`**, **`signed long long`**, **`signed long long int`**

- **`unsigned long long`**, **`unsigned long long int`**

**Microsoft-specific** integer types include the specific-width **`__int8`**, **`__int16`**, **`__int32`**, and **`__int64`** types. These types may use the **`signed`** and **`unsigned`** modifiers. The **`__int8`** data type is synonymous with type **`char`**, **`__int16`** is synonymous with type **`short`**, **`__int32`** is synonymous with type **`int`**, and **`__int64`** is synonymous with type **`long long`**.

## Sizes of built-in types

Most built-in types have implementation-defined sizes. The following table lists the amount of storage required for built-in types in Microsoft C++. In particular, **`long`** is 4 bytes even on 64-bit operating systems.

| Type | Size |
|--|--|
| **`bool`**, **`char`**, **`char8_t`**, **`unsigned char`**, **`signed char`**, **`__int8`** | 1 byte |
| **`char16_t`**, **`__int16`**, **`short`**, **`unsigned short`**, **`wchar_t`**, **`__wchar_t`** | 2 bytes |
| **`char32_t`**, **`float`**, **`__int32`**, **`int`**, **`unsigned int`**, **`long`**, **`unsigned long`** | 4 bytes |
| **`double`**, **`__int64`**, **`long double`**, **`long long`**, **`unsigned long long`** | 8 bytes |

See [Data type ranges](data-type-ranges.md) for a summary of the range of values of each type.

For more information about type conversion, see [Standard conversions](standard-conversions.md).

## See also

[Data type ranges](data-type-ranges.md)
