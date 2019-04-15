---
title: "variant Class"
ms.date: "11/04/2016"
f1_keywords: ["forward_list/std::forward_list", "forward_list/std::forward_list::allocator_type", "forward_list/std::forward_list::const_iterator", "forward_list/std::forward_list::const_pointer", "forward_list/std::forward_list::const_reference", "forward_list/std::forward_list::difference_type", "forward_list/std::forward_list::iterator", "forward_list/std::forward_list::pointer", "forward_list/std::forward_list::reference", "forward_list/std::forward_list::size_type", "forward_list/std::forward_list::value_type", "forward_list/std::forward_list::assign", "forward_list/std::forward_list::before_begin", "forward_list/std::forward_list::begin", "forward_list/std::forward_list::cbefore_begin", "forward_list/std::forward_list::cbegin", "forward_list/std::forward_list::cend", "forward_list/std::forward_list::clear", "forward_list/std::forward_list::emplace_after", "forward_list/std::forward_list::emplace_front", "forward_list/std::forward_list::empty", "forward_list/std::forward_list::end", "forward_list/std::forward_list::erase_after", "forward_list/std::forward_list::front", "forward_list/std::forward_list::get_allocator", "forward_list/std::forward_list::insert_after", "forward_list/std::forward_list::max_size", "forward_list/std::forward_list::merge", "forward_list/std::forward_list::pop_front", "forward_list/std::forward_list::push_front", "forward_list/std::forward_list::remove", "forward_list/std::forward_list::remove_if", "forward_list/std::forward_list::resize", "forward_list/std::forward_list::reverse", "forward_list/std::forward_list::sort", "forward_list/std::forward_list::splice_after", "forward_list/std::forward_list::swap", "forward_list/std::forward_list::unique"]
helpviewer_keywords: ["std::forward_list", "std::forward_list::allocator_type", "std::forward_list::const_iterator", "std::forward_list::const_pointer", "std::forward_list::const_reference", "std::forward_list::difference_type", "std::forward_list::iterator", "std::forward_list::pointer", "std::forward_list::reference", "std::forward_list::size_type", "std::forward_list::value_type", "std::forward_list::assign", "std::forward_list::before_begin", "std::forward_list::begin", "std::forward_list::cbefore_begin", "std::forward_list::cbegin", "std::forward_list::cend", "std::forward_list::clear", "std::forward_list::emplace_after", "std::forward_list::emplace_front", "std::forward_list::empty", "std::forward_list::end", "std::forward_list::erase_after", "std::forward_list::front", "std::forward_list::get_allocator", "std::forward_list::insert_after", "std::forward_list::max_size", "std::forward_list::merge", "std::forward_list::pop_front", "std::forward_list::push_front", "std::forward_list::remove", "std::forward_list::remove_if", "std::forward_list::resize", "std::forward_list::reverse", "std::forward_list::sort", "std::forward_list::splice_after", "std::forward_list::swap", "std::forward_list::unique"]
---
# variant Class

Any instance of variant at any given time either holds a value of one of its alternative types, or it holds no value.

namespace std {
template <class... Types>
class variant {

// 23.7.3.5, value status

constexpr size_t index() const noexcept;
};
}

## Syntax

```cpp
template <class Type,
    class Allocator = allocator<Type>>
class forward_list
```

### Constructors

|Constructor|Description|
|-|-|
|[variant](#variant)|Constructs an object of type `variant`.|

### Member functions

|Member function|Description|
|-|-|
|[emplace](#emplace)|Erases elements from a forward list and copies a new set of elements to a target forward list.|
|[index](#index)|Erases elements from a forward list and copies a new set of elements to a target forward list.|
|[valueless_by_exception](#emplace)|Erases elements from a forward list and copies a new set of elements to a target forward list.|

### Operators

|Operator|Description|
|-|-|
|[operator=](#op_eq)|Replaces the variant with a copy of another variant.|

## Requirements

**Header:** \<variant>

**Namespace:** std

## <a name="emplace"></a>  variant::emplace

No description.

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

## <a name="index"></a>  variant::index

No description.

```cpp

```

## <a name="variant"></a>  variant::variant

Constructs an object of type `variant`.

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
// allocator-extended constructors
template <class Alloc>
variant(allocator_arg_t, const Alloc&);
template <class Alloc>
variant(allocator_arg_t, const Alloc&, const variant&);
template <class Alloc>
variant(allocator_arg_t, const Alloc&, variant&&);
template <class Alloc, class T>
variant(allocator_arg_t, const Alloc&, T&&);
template <class Alloc, class T, class... Args>
variant(allocator_arg_t, const Alloc&, in_place_type_t<T>, Args&&...);
template <class Alloc, class T, class U, class... Args>
variant(allocator_arg_t, const Alloc&, in_place_type_t<T>, initializer_list<U>, Args&&...);
template <class Alloc, size_t I, class... Args>
variant(allocator_arg_t, const Alloc&, in_place_index_t<I>, Args&&...);
template <class Alloc, size_t I, class U, class... Args>
variant(allocator_arg_t, const Alloc&, in_place_index_t<I>, initializer_list<U>, Args&&...);
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|*Al*|The allocator class to use with this object.|
|*Count*|The number of elements in the list constructed.|
|*Val*|The value of the elements in the list constructed.|
|*Right*|The list of which the constructed list is to be a copy.|
|*First*|The position of the first element in the range of elements to be copied.|
|*Last*|The position of the first element beyond the range of elements to be copied.|
|*IList*|The initializer_list to copy.|

## <a name="op_eq"></a>  variant::operator=

Replaces the variant with a copy of another variant.

```cpp
variant& operator=(const variant&);
variant& operator=(variant&&) noexcept(see below);
template <class T>
    variant& operator=(T&&) noexcept(see below);
```

## <a name="valueless"></a>  variant::valueless_by_exception

No description.

```cpp
constexpr bool valueless_by_exception() const noexcept;
```

## See also

[<variant>](../standard-library/variant.md)<br/>
