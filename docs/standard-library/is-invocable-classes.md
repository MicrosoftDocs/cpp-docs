---
description: "Learn more about: is_invocable, is_invocable_r, is_nothrow_invocable, is_nothrow_invocable_r classes"
title: "is_invocable, is_invocable_r, is_nothrow_invocable, is_nothrow_invocable_r classes"
ms.date: "02/21/2019"
f1_keywords: ["type_traits/std::is_invocable", "type_traits/std::is_invocable_r", "type_traits/std::is_nothrow_invocable", "type_traits/std::is_nothrow_invocable_r"]
helpviewer_keywords: ["is_invocable class", "is_invocable", "is_invocable_r class", "is_invocable_r", "is_nothrow_invocable class", "is_nothrow_invocable", "is_nothrow_invocable_r class", "is_nothrow_invocable_r"]
---
# is_invocable, is_invocable_r, is_nothrow_invocable, is_nothrow_invocable_r classes

These templates determine if a type can be invoked with the specified argument types. `is_invocable_r` and `is_nothrow_invocable_r` also determine if the result of the invocation is convertible to a specific type. `is_nothrow_invocable` and `is_nothrow_invocable_r` also determine if the invocation is known not to throw exceptions. Added in C++17.

## Syntax

```cpp
template <class Callable, class... Args>
struct is_invocable;

template <class Convertible, class Callable, class... Args>
struct is_invocable_r;

template <class Callable, class... Args>
struct is_nothrow_invocable;

template <class Convertible, class Callable, class... Args>
struct is_nothrow_invocable_r;

// Helper templates
template <class Callable, class... Args>
inline constexpr bool is_invocable_v =
    std::is_invocable<Callable, Args...>::value;

template <class Convertible, class Callable, class... Args>
inline constexpr bool is_invocable_r_v =
    std::is_invocable_r<Convertible, Callable, Args...>::value;

template <class Callable, class... Args>
inline constexpr bool is_nothrow_invocable_v =
    std::is_nothrow_invocable<Callable, Args...>::value;

template <class Convertible, class Callable, class... Args>
inline constexpr bool is_nothrow_invocable_r_v =
    std::is_nothrow_invocable_r<Convertible, Callable, Args...>::value;
```

### Parameters

*Callable*\
The callable type to query.

*Args*\
The argument types to query.

*Convertible*\
The type the result of *Callable* must be convertible to.

## Remarks

The `is_invocable` type predicate holds true if the callable type *Callable* can be invoked using the arguments *Args* in an unevaluated context.

The `is_invocable_r` type predicate holds true if the callable type *Callable* can be invoked using the arguments *Args* in an unevaluated context to produce a result type convertible to *Convertible*.

The `is_nothrow_invocable` type predicate holds true if the callable type *Callable* can be invoked using the arguments *Args* in an unevaluated context, and that such a call is known not to throw an exception.

The `is_nothrow_invocable_r` type predicate holds true if the callable type *Callable* can be invoked using the arguments *Args* in an unevaluated context to produce a result type convertible to *Convertible*, and that such a call is known not to throw an exception.

Each of the types *Convertible*, *Callable*, and the types in the parameter pack *Args* must be a complete type, an array of unknown bound, or a possibly cv-qualified **`void`**. Otherwise, the behavior of the predicate is undefined.

## Example

```cpp
// std__type_traits__is_invocable.cpp
// compile using: cl /EHsc /std:c++17 std__type_traits__is_invocable.cpp
#include <type_traits>

auto test1(int) noexcept -> int (*)()
{
    return nullptr;
}

auto test2(int) -> int (*)()
{
    return nullptr;
}

int main()
{
    static_assert( std::is_invocable<decltype(test1), short>::value );

    static_assert( std::is_invocable_r<int(*)(), decltype(test1), int>::value );
    static_assert( std::is_invocable_r<long(*)(), decltype(test1), int>::value ); // fails

    static_assert( std::is_nothrow_invocable<decltype(test1), int>::value );
    static_assert( std::is_nothrow_invocable<decltype(test2), int>::value ); // fails

    static_assert( std::is_nothrow_invocable_r<int(*)(), decltype(test1), int>::value );
    static_assert( std::is_nothrow_invocable_r<int(*)(), decltype(test2), int>::value ); // fails
}
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[invoke](functional-functions.md#invoke)
