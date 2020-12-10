---
description: "Learn more about: &lt;any&gt; functions"
title: "&lt;any&gt; functions"
ms.date: "04/04/2019"
f1_keywords: ["any/std::any_cast", "any/std::make_any", "any/std::swap"]
---
# &lt;any&gt; functions

## <a name="any_cast"></a> any_cast

Makes an object into an any.

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

## <a name="make_any"></a> make_any

Takes values and creates an any object.

```cpp
template <class T, class... Args>
    any make_any(Args&& ...args);
template <class T, class U, class... Args>
    any make_any(initializer_list<U> il, Args&& ...args);
```

## <a name="swap"></a> swap

Exchanges the elements of two objects any.

```cpp
void swap(any& left, any& right) noexcept;
```

### Parameters

*left*\
An object of type `any`.

*right*\
An object of type `any`.
