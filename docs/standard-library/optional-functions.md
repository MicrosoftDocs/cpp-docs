---
title: "&lt;optional&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["optional/std::swap"]
ms.assetid: 0d6bc656-7049-4651-a4bd-c9a805e47756
---
# &lt;optional&gt; functions

||
|-|
|[make_optional](#make_optional)|

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

## See also

[<optional>](../standard-library/optional.md)<br/>
