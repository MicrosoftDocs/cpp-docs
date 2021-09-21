---
description: "Learn more about the std::any class from the C++ Standard Library."
title: "any class"
ms.date: 09/20/2021
f1_keywords: ["any/std::any", "any/std::any::emplace", "any/std::any::has_value", "any/std::any::reset", "any/std::any::swap", "any/std::any::type"]
helpviewer_keywords: ["any/std::any", "any/std::any::emplace", "any/std::any::has_value", "any/std::any::reset", "any/std::any::swap", "any/std::any::type"]
no-loc: ["any", "std", "class"]
---
# `any` class

An `any` object either stores an instance of a type that satisfies the constructor requirements, or it has no value. Whether it has a stored instance, or no value, is called the *state* of the `any` object.

The stored instance is called the *contained value*. Two `any` objects have the same state if either they both have no value, or both have a contained value and those values are the same.

## Syntax

```cpp
class any;
```

## Members

### Constructors

| Name | Description |
|--|--|
| [`any`](#any) | Constructs an object of type `any`. |

### Functions

| Name | Description |
|--|--|
| [`emplace`](#emplace) | Sets an `any` value. |
| [`has_value`](#has_value) | Returns **`true`** if `any` has a value. |
| [`reset`](#reset) | Resets an `any`. |
| [`swap`](#swap) | Exchanges two `any` objects. |
| [`type`](#type) | Returns the `any` type. |

### Operators

| Name | Description |
|--|--|
| [`operator=`](#op_eq) | Replaces the `any` with a copy of another `any`. |

## <a name="any"></a> `any`

Constructs an object of type `any`. Also includes a destructor.

```cpp
constexpr any() noexcept;
any(const any& other);
any(any&& other) noexcept;
template <class T>
    any(T&& value);
template <class T, class... Args>
    explicit any(in_place_type_t<T>, Args&&...);
template <class T, class U, class... Args>
    explicit any(in_place_type_t<T>, initializer_list<U>, Args&&...);

~any();
```

## <a name="emplace"></a> `emplace`

Sets an `any` value.

```cpp
template <class T, class... Args>
    decay_t<T>& emplace(Args&& ...);
template <class T, class U, class... Args>
    decay_t<T>& emplace(initializer_list<U>, Args&&...);
```

## <a name="has_value"></a> `has_value`

Returns **`true`** if the `any` object has a value.

```cpp
bool has_value() const noexcept;
```

## <a name="op_eq"></a> `operator=`

Replaces the `any` content with a copy of another `any`.

```cpp
any& operator=(const any& right);
any& operator=(any&& right) noexcept;
template <class T>
    any& operator=(T&& right);
```

### Parameters

*`right`*\
The `any` being copied into this `any`.

## <a name="reset"></a> `reset`

Resets an `any`.

```cpp
void reset() noexcept;
```

## <a name="swap"></a> `swap`

Exchanges two `any` objects.

```cpp
void swap(any& rhs) noexcept;
```

## <a name="type"></a> `type`

Returns the `any` type.

```cpp
const type_info& type() const noexcept;
```

## Requirements

**Header:** \<any>

**Namespace:** `std`

**Standard:** C++17 (Use at least **`/std:c++17`** to compile.)

## See also

[`<any>`](any.md)\
[`any_cast`](any-functions.md#any_cast)\
[`make_any`](any-functions.md#make_any)\
[`swap`](any-functions.md#swap)\
[`bad_any_cast`](bad-any-cast-class.md)
