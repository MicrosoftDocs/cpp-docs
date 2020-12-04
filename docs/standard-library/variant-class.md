---
description: "Learn more about: variant Class"
title: "variant Class"
ms.date: "04/04/2019"
f1_keywords: ["variant/std::variant", "variant/std::variant::emplace", "variant/std::variant::index", "variant/std::variant::valueless_by_exception"]
helpviewer_keywords: ["variant/std::variant", "variant/std::variant::emplace", "variant/std::variant::index", "variant/std::variant::valueless_by_exception"]
---
# variant Class

Any instance of variant at any given time either holds a value of one of its alternative types, or it holds no value.

## Syntax

```cpp
template <class... Types>
    class variant
```

## Members

### Constructors

|Name|Description|
|-|-|
|[variant](#variant)|Constructs an object of type `variant`.|

### Functions

|Name|Description|
|-|-|
|[emplace](#emplace)|Creates a new contained value.|
|[index](#index)|Returns the index of a contained value.|
|[swap](#swap)||
|[valueless_by_exception](#emplace)|Returns **`false`** if the variant holds a value.|

### Operators

|Name|Description|
|-|-|
|[operator=](#op_eq)|Replaces the variant with a copy of another variant.|

## <a name="emplace"></a> emplace

Creates a new contained value.

```cpp
template <class T, class... Args>
    T& emplace(Args&&...);
template <class T, class U, class... Args>
    T& emplace(initializer_list<U>, Args&&...);
template <size_t I, class... Args>
    variant_alternative_t<I, variant<Types...>>& emplace(Args&&...);
template <size_t I, class U, class... Args>
    variant_alternative_t<I, variant<Types...>>& emplace(initializer_list<U>, Args&&...);
```

## <a name="index"></a> index

Returns the index of a contained value.

```cpp
constexpr size_t index() const noexcept;
```

## <a name="variant"></a> variant

Constructs an object of type `variant`. Also includes a destructor.

```cpp
constexpr variant() noexcept(see below);
variant(const variant&);
variant(variant&&) noexcept(see below);
template <class T>
    constexpr variant(T&&) noexcept(see below);
template <class T, class... Args>
    constexpr explicit variant(in_place_type_t<T>, Args&&...);
template <class T, class U, class... Args>
    constexpr explicit variant(in_place_type_t<T>, initializer_list<U>, Args&&...);
template <size_t I, class... Args>
    constexpr explicit variant(in_place_index_t<I>, Args&&...);
template <size_t I, class U, class... Args>
    constexpr explicit variant(in_place_index_t<I>, initializer_list<U>, Args&&...);

template <class Alloc>
    variant(allocator_arg_t, const Al&);
template <class Alloc>
    variant(allocator_arg_t, const Al&, const variant&);
template <class Alloc>
    variant(allocator_arg_t, const Al&, variant&&);
template <class Alloc, class T>
    variant(allocator_arg_t, const Al&, T&&);
template <class Alloc, class T, class... Args>
    variant(allocator_arg_t, const Al&, in_place_type_t<T>, Args&&...);
template <class Alloc, class T, class U, class... Args>
    variant(allocator_arg_t, const Al&, in_place_type_t<T>, initializer_list<U>, Args&&...);
template <class Alloc, size_t I, class... Args>
    variant(allocator_arg_t, const Al&, in_place_index_t<I>, Args&&...);
template <class Alloc, size_t I, class U, class... Args>
    variant(allocator_arg_t, const Al&, in_place_index_t<I>, initializer_list<U>, Args&&...);

~variant();
```

### Parameters

*Al*\
The allocator class to use with this object.

## <a name="op_eq"></a> operator=

Replaces the variant with a copy of another variant.

```cpp
variant& operator=(const variant&);
variant& operator=(variant&&) noexcept(see below);
template <class T>
    variant& operator=(T&&) noexcept(see below);
```

## <a name="swap"></a> swap

```cpp
void swap(variant&) noexcept(see below);
```

## <a name="valueless"></a> valueless_by_exception

Returns **`false`** if the variant holds a value.

```cpp
constexpr bool valueless_by_exception() const noexcept;
```
