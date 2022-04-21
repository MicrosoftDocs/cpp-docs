---
title: "<cstddef>"
description: "Describes <stddef.h>, which ensures that the names declared using external linkage in the C standard library header are declared in the `std` namespace."
ms.date: "9/4/2020"
f1_keywords: ["<cstddef>"]
helpviewer_keywords: ["cstddef header"]
ms.assetid: be8d1e39-5974-41ee-b41d-eafa6c82ffce
---
# `<cstddef>`

Includes the C standard library header \<stddef.h> and adds associated names to the `std` namespace. Including this header ensures that the names declared using external linkage in the C standard library header are declared in the `std` namespace.

> [!NOTE]
> \<cstddef> includes type **byte** and doesn't include type **`wchar_t`**.

## Syntax

```cpp
#include <cstddef>
```

## Namespace and Macros

```cpp
namespace std {
    using ptrdiff_t = see definition;
    using size_t = see definition;
    using max_align_t = see definition;
    using nullptr_t = decltype(nullptr);
}

#define NULL  // an implementation-defined null pointer constant
#define offsetof(type, member-designator)
```

### Parameters

*ptrdiff_t*\
An implementation-defined signed integer type that can hold the difference of two subscripts in an array object.

*size_t*\
An implementation-defined unsigned integer type that is large enough to contain the size in bytes of any object.

*max_align_t*\
A POD type whose alignment requirement is at least as great as that of every scalar type, and whose alignment requirement is supported in every context.

*nullptr_t*\
A synonym for the type of a **`nullptr`** expression. Although a **`nullptr`** address can't be taken, the address of another *nullptr_t* object that is an lvalue can be taken.

## byte Class

```cpp
enum class byte : unsigned char {};

template <class IntType>
    constexpr byte& operator<<=(byte& b, IntType shift) noexcept;
    constexpr byte operator<<(byte b, IntType shift) noexcept;
    constexpr byte& operator>>=(byte& b, IntType shift) noexcept;
    constexpr byte operator>>(byte b, IntType shift) noexcept;

constexpr byte& operator|=(byte& left, byte right) noexcept;
constexpr byte operator|(byte left, byte right) noexcept;
constexpr byte& operator&=(byte& left, byte right) noexcept;
constexpr byte operator&(byte left, byte right) noexcept;
constexpr byte& operator^=(byte& left, byte right) noexcept;
constexpr byte operator^(byte left, byte right) noexcept;
constexpr byte operator~(byte b) noexcept;

template <class IntType>
    IntType to_integer(byte b) noexcept;
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
