---
description: "Learn more about: identity Structure"
title: "identity Structure"
ms.date: 04/11/2026
f1_keywords: ["utility/std::identity"]
helpviewer_keywords: ["identity class", "identity structure"]
ai-usage: ai-assisted
---
# `identity` Structure

`std::identity` (introduced in C++20) is a function object whose `operator()` returns its argument unchanged.

> [!NOTE]
> There's a Microsoft-specific `identity` structure from `<utility>` that is deprecated and isn't available in later versions of Visual Studio. For C++20 and later, use `std::identity` from [`<functional>`](functional.md) instead, which is the standard-conforming equivalent described below.

## `std::identity` (C++20)

Many standard library APIs take a callable argument such as a projection or transformation function. If you need to pass a callable but don't want to change the data, pass `std::identity`. This is common in ranges algorithms. Many `<algorithm>` ranges overloads have a projection parameter that defaults to `std::identity{}`.

### Syntax

```cpp
struct identity
{
    template <class T>
    _NODISCARD constexpr T&& operator()(T&& t) const noexcept;
    using is_transparent = int;
};
```

### Remarks

The `is_transparent` member type is a tag that marks `std::identity` as a transparent function object. Its presence indicates that algorithms can perform comparisons or projections without needing to convert types to a common form first. This is useful for associative containers and algorithms that support heterogeneous lookup, allowing them to compare different types directly without constructing temporary objects. 

### Examples

```cpp
#include <algorithm>
#include <functional>
#include <iostream>
#include <ranges>
#include <vector>

int main()
{
    std::vector<int> v{3, 1, 4, 1, 5, 9, 2, 6};

    // Ranges algorithms can apply a projection before comparison.
    // But if you don't want to apply a projection, i.e. you don't want to modify the data
    // before comparison, you can use std::identity to leave each element unchanged.
    // Here, std::identity{} means "project each element as itself".
    // So the comparator sees the original int values unchanged.
    std::ranges::sort(v, std::less{}, std::identity{});

    // This call is equivalent because std::identity{} is the default projection.
    // In both calls, elements are sorted directly; no field extraction or
    // value transformation happens first.
    std::ranges::sort(v);

    for (int n : v)
    {
        std::cout << n << ' ';
    }
    std::cout << '\n';
    // Output: 1 1 2 3 4 5 6 9
}
```

This example searches a `std::vector<std::string>` with a `std::string_view` key. Because `std::identity` has the `is_transparent` member, the algorithm knows to compare these types directly. This way the key doesn't get converted to a temporary `std::string` just to do the comparison.

```cpp
#include <algorithm>
#include <functional>
#include <iostream>
#include <ranges>
#include <string>
#include <string_view>
#include <vector>

int main()
{
    std::vector<std::string> words{"apple", "banana", "cherry", "date"};
    std::string_view key = "cherry";

    // `std::less<>` is transparent, so it can compare `std::string` and
    // `std::string_view` directly.
    // `std::identity` is also marked transparent (`is_transparent`), so the
    // projection stays type-flexible instead of forcing one fixed type.
    auto it = std::ranges::lower_bound(words, key, std::less<>{}, std::identity{});

    if (it != words.end() && *it == key)
    {
        std::cout << "Found: " << *it << '\n';
    }
}
```
