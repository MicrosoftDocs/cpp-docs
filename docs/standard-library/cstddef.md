---
title: "&lt;cstddef&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<cstddef>"]
helpviewer_keywords: ["cstddef header"]
ms.assetid: be8d1e39-5974-41ee-b41d-eafa6c82ffce
---
# &lt;cstddef&gt;

Includes the Standard C library header \<stddef.h> and adds the associated names to the `std` namespace.

> [!NOTE]
> `cstddef` doesn't include **wchar_t** but does include the type **byte**.

## Syntax

```cpp
    #include <cstddef>
```

## Types

```cpp
    ptrdiff_t = see below;
    using size_t = see below;
    using max_align_t = see below;
    using nullptr_t = decltype(nullptr);
```

## Enums

```cpp
    enum class byte : unsigned char {};
```

## Operators

```cpp
    template <class IntType> byte& operator<<=(byte& b, IntType shift)
    template <class IntType> byte operator<<(byte b, IntType shift) noexcept;
    template <class IntType> byte& operator>>=(byte& b, IntType shift) noexcept;
    template <class IntType> byte operator>>(byte b, IntType shift) noexcept;
    byte& operator|=(byte& l, byte r) noexcept;
    byte operator|(byte l, byte r) noexcept;
    byte& operator&=(byte& l, byte r) noexcept;
    byte operator&(byte l, byte r) noexcept;
    byte& operator^=(byte& l, byte r) noexcept;
    byte operator^(byte l, byte r) noexcept;
    byte operator~(byte b) noexcept;
```

## Functions

```cpp
    template <class IntType> IntType to_integer(byte b) noexcept;
```

## Remarks

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
