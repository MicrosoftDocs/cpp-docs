---
description: "Learn more about: &lt;optional&gt; functions"
title: "&lt;optional&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["optional/std::swap"]
ms.assetid: 0d6bc656-7049-4651-a4bd-c9a805e47756
---
# &lt;optional&gt; functions

## <a name="make_optional"></a> make_optional

Makes an object optional.

```cpp
template <class T>
    constexpr optional<see below> make_optional(T&&);
template <class T, class... Args>
    constexpr optional<T> make_optional(Args&&... args);
template <class T, class U, class... Args>
    constexpr optional<T> make_optional(initializer_list<U> il, Args&&... args);
```

## <a name="nullopt"></a> nullopt

```cpp
inline constexpr nullopt_t nullopt(unspecified );
```

## <a name="swap"></a> swap

```cpp
template <class T>
    void swap(optional<T>&, optional<T>&) noexcept(see below );
```
