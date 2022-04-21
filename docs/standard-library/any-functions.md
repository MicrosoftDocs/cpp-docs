---
description: "Learn more about the free functions for use with the std::any class in the C++ Standard Library."
title: "<any> functions"
ms.date: 09/20/2021
f1_keywords: ["any/std::any_cast", "any/std::make_any", "any/std::swap"]
no-loc: ["any", "std", "class"]
---
# `<any>` functions

The [`<any>`](any.md) header declares several free functions for working with the [`any`](any-class.md) class.

## Functions

| &nbsp; | &nbsp; |
|--|--|
| [`any_cast`](#any_cast) | Makes an object into an `any`. |
| [`make_any`](#make_any) | Takes values and creates an `any` object. |
| [`swap`](#swap) | Exchanges the elements of two `any` objects. |

## <a name="any_cast"></a> `any_cast`

Makes an object into an `any`.

```cpp
template<class T>
    T any_cast(const any& operand);
template<class T>
    T any_cast(any& operand);
template<class T>
    T any_cast(any&& operand);
template<class T>
    const T* any_cast(const any* operand) noexcept;
template<class T>
    T* any_cast(any* operand) noexcept;
```

## <a name="make_any"></a> `make_any`

Takes values and creates an `any` object.

```cpp
template <class T, class... Args>
    any make_any(Args&& ...args);
template <class T, class U, class... Args>
    any make_any(initializer_list<U> il, Args&& ...args);
```

## <a name="swap"></a> `swap`

Exchanges the elements of two `any` objects.

```cpp
void swap(any& left, any& right) noexcept;
```

### Parameters

*`left`*\
An object of type `any`.

*`right`*\
An object of type `any`.

## Requirements

**Header:** \<any>

**Namespace:** `std`

**Standard:** C++17 (Use at least **`/std:c++17`** to compile.)

## See also

[`<any>`](any.md)\
[`any` class](any-class.md)\
[`bad_any_cast`](bad-any-cast-class.md)
