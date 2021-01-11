---
description: "Learn more about: any Class"
title: "any Class"
ms.date: "04/04/2019"
f1_keywords: ["any/std::any", "any/std::any::emplace", "any/std::any::has_value", "any/std::any::reset", "any/std::any::swap", "any/std::any::type"]
helpviewer_keywords: ["any/std::any", "any/std::any::emplace", "any/std::any::has_value", "any/std::any::reset", "any/std::any::swap", "any/std::any::type"]
---
# any Class

Stores an instance of any type that satisfies the constructor requirements or it has no value, which is called the state of the class any object.

The stored instance is called the contained value. Two states are the same if either they both have no value, or both have a value and the contained values are the same.

## Syntax

```cpp
class any
```

## Members

### Constructors

|Name|Description|
|-|-|
|[any](#any)|Constructs an object of type `any`.|

### Functions

|Name|Description|
|-|-|
|[emplace](#emplace)|Sets an any value.|
|[has_value](#has_value)|Returns **`true`** if any has a value.|
|[reset](#reset)|Resets an any.|
|[swap](#swap)|Swaps two any objects.|
|[type](#type)|Returns the any type.|

### Operators

|Name|Description|
|-|-|
|[operator=](#op_eq)|Replaces the any with a copy of another any.|

## <a name="any"></a> any

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

## <a name="emplace"></a> emplace

Sets an any value.

```cpp
template <class T, class... Args>
    decay_t<T>& emplace(Args&& ...);
template <class T, class U, class... Args>
    decay_t<T>& emplace(initializer_list<U>, Args&&...);
```

## <a name="has_value"></a> has_value

Returns **`true`** if any has a value.

```cpp
bool has_value() const noexcept;
```

## <a name="op_eq"></a> operator=

Replaces the any with a copy of another any.

```cpp
any& operator=(const any& right);
any& operator=(any&& right) noexcept;
template <class T>
    any& operator=(T&& right);
```

### Parameters

*right*\
The any being copied into the any.

## <a name="reset"></a> reset

Resets an any.

```cpp
void reset() noexcept;
```

## <a name="swap"></a> swap

Swaps two any objects.

```cpp
void swap(any& rhs) noexcept;
```

## <a name="type"></a> type

Returns the any type.

```cpp
const type_info& type() const noexcept;
```
