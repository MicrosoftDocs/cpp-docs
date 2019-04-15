---
title: "optional Class"
ms.date: "11/04/2016"
f1_keywords: ["optional/std::optional", "optional/std::optional::has_value", "optional/std::optional::reset", "optional/std::optional::value", "optional/std::optional::value_or"]
helpviewer_keywords: ["optional/std::optional", "optional/std::optional::has_value", "optional/std::optional::reset", "optional/std::optional::value", "optional/std::optional::value_or"]
ms.assetid: 89a3b805-ab60-4858-b772-5855130c11b1
---
# optional Class

Describes an object that may or may not contain a value.

## Syntax

```cpp
template <class T>
class optional
{
    using value_type = T;
};

template<class T> optional(T) -> optional<T>;
```

### Constructors

|Constructor|Description|
|-|-|
|[optional](#optional)|Constructs an object of type `optional`.|

### Member functions

|Member function|Description|
|-|-|
|[has_value](#has_value)|Returns **true** if `optional` contains value.|
|[reset](#reset)|Resets the `optional`.|
|[value](#value)|Evaluates the `optional` value.|
|[value_or](#value_or)|Evaluates the `optional` value.|

### Operators

|Operator|Description|
|-|-|
|[operator=](#op_eq)|Replaces the `optional` with a copy of another `optional`.|
|[operator->](#op_as)|Assign value to `optional`.|
|[operator*](#op_mem)|Reference memory of `optional`.|
|[operator bool](#op_bool)|Return Boolean of `optional` value.|

## Requirements

**Header:** \<optional>

**Namespace:** std

## <a name="has_value"></a>  optional::has_value

No description.

```cpp
constexpr bool has_value() const noexcept;
```

## <a name="optional"></a> optional::optional

Constructs an object of type `optional`.

```cpp
constexpr optional() noexcept;
constexpr optional(nullopt_t) noexcept;
constexpr optional(const optional&);
constexpr optional(optional&&) noexcept(see below);

template <class... Args>
    constexpr explicit optional(in_place_t, Args&&...);
template <class U, class... Args>
    constexpr explicit optional(in_place_t, initializer_list<U>, Args&&...);
template <class U = T>
    explicit constexpr optional(U&&);
template <class U>
    explicit optional(const optional<U>&);
template <class U>
    explicit optional(optional<U>&&);
```

## <a name="op_eq"></a>  optional::operator=

Replaces the `optional` with a copy of another `optional`.

```cpp
optional& operator=(nullopt_t) noexcept;
optional& operator=(const optional&);
optional& operator=(optional&&) noexcept(see below);

template <class U = T>
    optional& operator=(U&&); template <class U> optional& operator=(const optional<U>&);
template <class U>
    optional& operator=(optional<U>&&); template <class... Args> T& emplace(Args&&...);
template <class U, class... Args>
    T& emplace(initializer_list<U>, Args&&...);
```

## <a name="op_as"></a>  optional::operator->

No description.

```cpp
constexpr const T* operator->() const;
constexpr T* operator->();
```

## <a name="op_mem"></a>  optional::operator*

No description.

```cpp
constexpr const T& operator*() const&;
constexpr T& operator*() &;
constexpr T&& operator*() &&;
constexpr const T&& operator*() const&&;
```

## <a name="op_bool"></a>  optional::operator bool

No description.

```cpp
constexpr explicit operator bool() const noexcept;
```

## <a name="reset"></a>  optional::reset

No description.

```cpp
void reset() noexcept;
```

## <a name="value"></a>  optional::value

No description.

```cpp
constexpr const T& value() const&;
constexpr T& value() &;
constexpr T&& value() &&;
constexpr const T&& value() const&&;
```

## <a name="value_or"></a>  optional::value_or

No description.

```cpp
template <class U>
    constexpr T value_or(U&&) const&;
template <class U>
    constexpr T value_or(U&&) &&;
```

## See also

[<optional>](../standard-library/forward-list.md)<br/>
