---
description: "Learn more about: optional Class"
title: "optional Class"
ms.date: "11/04/2016"
f1_keywords: ["optional/std::optional", "optional/std::optional::has_value", "optional/std::optional::reset", "optional/std::optional::value", "optional/std::optional::value_or"]
helpviewer_keywords: ["optional/std::optional", "optional/std::optional::has_value", "optional/std::optional::reset", "optional/std::optional::value", "optional/std::optional::value_or"]
---
# optional Class

The class template `optional<T>` describes an object that may or may not contain a value of type `T`, known as the *contained value*.

When an instance of `optional<T>` contains a value, the contained value is allocated within the storage of the `optional` object, in a region suitably aligned for type `T`. When an `optional<T>` is converted to **`bool`**, the result is **`true`** if the object contains a value; otherwise, it's **`false`**.

The contained object type `T` must not be [in_place_t](in-place-t-struct.md) or [nullopt_t](nullopt-t-structure.md). `T` must be *destructible*, that is, its destructor must reclaim all owned resources, and may throw no exceptions.

The `optional` class is new in C++17.

## Syntax

```cpp
template <class T>
class optional
{
    using value_type = T;
};

template<class T> optional(T) -> optional<T>;
```

## Members

### Constructors

|Name|Description|
|-|-|
| **Constructors and destructor** | |
|[optional](#optional) | Constructs an object of type `optional`. |
|[~optional](#optional-destructor) | Destroys an object of type `optional`. |
| **Assignment** | |
| [operator=](#op_eq) | Replaces the `optional` with a copy of another `optional`. |
| [emplace](#op_eq) | Initializes the contained value with specified arguments. |
| **Swap** | |
| [swap](#swap) | Swaps the contained value or the empty state with another `optional`. |
| **Observers** | |
| [has_value](#has_value) | Returns whether an `optional` object contains a value. |
| [value](#value) | Returns the contained value. |
| [value_or](#value_or) | Returns the contained value, or an alternative if no value is present. |
| [operator->](#op_as) | References the contained value of an `optional` object. |
| [operator*](#op_mem) | References the contained value of an `optional` object. |
| [operator bool](#op_bool) | Returns whether an `optional` object contains a value. |
| **Modifiers** | |
| [reset](#reset) | Resets the `optional` by destroying any contained value. |

## <a name="has_value"></a> has_value

```cpp
constexpr bool has_value() const noexcept;
```

## <a name="optional"></a> optional constructor

Constructs an object of type `optional`.

```cpp
constexpr optional() noexcept;
constexpr optional(nullopt_t nullopt) noexcept;
constexpr optional(const optional& rhs);
constexpr optional(optional&& rhs) noexcept;

template <class... Args>
constexpr explicit optional(in_place_t, Args&&... args);

template <class U, class... Args>
constexpr explicit optional(in_place_t, initializer_list<U> i_list, Args&&... args);

template <class U = T>
explicit constexpr optional(U&& rhs);

template <class U>
explicit optional(const optional<U>& rhs);

template <class U>
explicit optional(optional<U>&& rhs);
```

### Parameters

*rhs*\
The `optional` to copy or move construct the contained value from.

*i_list*\
The initializer list to construct the contained value from.

*args*\
The argument list to construct the contained value from.

### Remarks

`constexpr optional() noexcept;`
`constexpr optional(nullopt_t nullopt) noexcept;`
These constructors construct an `optional` that doesn't contain a value.

`constexpr optional(const optional& rhs);`
The copy constructor initializes the contained value from the contained value of the argument. It's defined as **deleted** unless `is_copy_constructible_v<T>` is true, and it's trivial if `is_trivially_copy_constructible_v<T>` is true.

`constexpr optional(optional&& rhs) noexcept;`
The move constructor initializes the contained value by moving from the contained value of the argument. It doesn't participate in overload resolution unless `is_move_constructible_v<T>` is true, and it's trivial if `is_trivially_move_constructible_v<T>` is true.

`template <class... Args> constexpr explicit optional(in_place_t, Args&&... args);`
Direct initializes the contained value as if using the arguments `std::forward<Args>(args)`. This constructor is **`constexpr`** if the `T` constructor used is **`constexpr`**. It doesn't participate in overload resolution unless `is_constructible_v<T, Args...>` is true.

`template <class U, class... Args> constexpr explicit optional(in_place_t, initializer_list<U> i_list, Args&&... args);`
Direct initializes the contained value as if using the arguments `i_list, std::forward<Args>(args)`. This constructor is **`constexpr`** if the `T` constructor used is **`constexpr`**. It doesn't participate in overload resolution unless `is_constructible_v<T, initializer_list<U>&, Args&&...>` is true.

`template <class U = T> explicit constexpr optional(U&& rhs);`
Direct initializes the contained value as if using `std::forward<U>(v)`. This constructor is **`constexpr`** if the `T` constructor used is **`constexpr`**. It doesn't participate in overload resolution unless `is_constructible_v<T, U&&>` is true, and `is_same_v<remove_cvref_t<U>, in_place_t>` and `is_same_v<remove_cvref_t<U>, optional>` are false.

`template <class U> explicit optional(const optional<U>& rhs);`
If *rhs* contains a value, direct initializes the contained value from the contained value of the argument. It doesn't participate in overload resolution unless `is_constructible_v<T, const U&>` is true, and `is_constructible_v<T, optional<U>&>`, `is_constructible_v<T, optional<U>&&>`, `is_constructible_v<T, const optional<U>&>`, `is_constructible_v<T, const optional<U>&&>`, `is_convertible_v<optional<U>&, T>`, `is_convertible_v<optional<U>&&, T>`, `is_convertible_v<const optional<U>&, T>`, and `is_convertible_v<const optional<U>&&, T>` are all false.

`template <class U> explicit optional(optional<U>&& rhs);`
If *rhs* contains a value, direct initializes the contained value as if using `std::move(*rhs)`. It doesn't participate in overload resolution unless `is_constructible_v<T, U&&>` is true, and `is_constructible_v<T, optional<U>&>`, `is_constructible_v<T, optional<U>&&>`, `is_constructible_v<T, const optional<U>&>`, `is_constructible_v<T, const optional<U>&&>`, `is_convertible_v<optional<U>&, T>`, `is_convertible_v<optional<U>&&, T>`, `is_convertible_v<const optional<U>&, T>`, and `is_convertible_v<const optional<U>&&, T>` are all false.

## <a name="optional-destructor"></a> ~optional destructor

Destroys any non-trivially destructible contained value, if one is present, by invoking its destructor.

```cpp
~optional();
```

### Remarks

If `T` is trivially destructible, then `optional<T>` is also trivially destructible.

## <a name="op_eq"></a> operator=

Replaces the contained value of an `optional` with a copy or move from another `optional` contained value.

```cpp
optional& operator=(nullopt_t) noexcept;
optional& operator=(const optional& rhs);
optional& operator=(optional&&) noexcept( /* see below */ );

template <class U = T>
    optional& operator=(U&&);

template <class U>
optional& operator=(const optional<U>&);

template <class U>
    optional& operator=(optional<U>&&);

template <class... Args>
T& emplace(Args&&...);

template <class U, class... Args>
T& emplace(initializer_list<U>, Args&&...);
```

## <a name="op_as"></a> operator->

Dereferences the contained value of an `optional` object.

```cpp
constexpr const T* operator->() const;
constexpr T* operator->();
```

## <a name="op_mem"></a> operator*

Dereferences the contained value of an `optional` object.

```cpp
constexpr const T& operator*() const&;
constexpr T& operator*() &;
constexpr T&& operator*() &&;
constexpr const T&& operator*() const&&;
```

## <a name="op_bool"></a> operator bool

Reports whether the `optional` object has a contained value.

```cpp
constexpr explicit operator bool() const noexcept;
```

## <a name="reset"></a> reset

Effectively, calls the destructor of the contained object, if any, and sets it to an uninitialized state.

```cpp
void reset() noexcept;
```

## <a name="swap"></a> swap

```cpp
template<class T>
void swap(optional<T>&, optional<T>&) noexcept;
```

## <a name="value"></a> value

```cpp
constexpr const T& value() const&;
constexpr T& value() &;
constexpr T&& value() &&;
constexpr const T&& value() const&&;
```

## <a name="value_or"></a> value_or

```cpp
template <class U>
    constexpr T value_or(U&&) const&;
template <class U>
    constexpr T value_or(U&&) &&;
```

## See also

[\<optional>](optional.md)
