---
title: basic_istream_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> basic_istream_view class, which reads (using operator>>) successive elements from an input stream. Also includes the istream_view and wistream_view specializations."
ms.date: 11/07/2022
f1_keywords: ["ranges/std::basic_istream_view", "ranges/std::istream_view", "ranges/std::wistream_view", "ranges/std::basic_istream_view::begin", "ranges/std::basic_istream_view::end", "ranges/std::istream_view::begin", "ranges/std::istream_view::end", "ranges/std::wistream_view::begin", "ranges/std::wistream_view::end"]
helpviewer_keywords: ["std::ranges::basic_istream_view [C++]", "std::ranges::istream_view [C++]", "std::ranges::wistream_view [C++]", "std::ranges::basic_istream_view::base [C++]", "std::ranges::basic_istream_view::begin [C++]", "std::ranges::basic_istream_view::end [C++]", ]
dev_langs: ["C++"]
---
# `basic_istream_view` class (C++ Standard Library)

A view of successive elements from an input stream.

## Syntax

```cpp
template<movable Val, class CharT, class Traits>
    requires default_initializable<Val> &&
    stream_extractable <Val, CharT, Traits>
class basic_istream_view : public view_interface<basic_istream_view<Val, CharT, Traits>>;
```

### Template parameters

*`CharT`*\
The character type of the stream.

*`Traits`*\
Optional. Provides details about the character type of the stream regarding comparing characters, determining the length of a string made up of that character type, and so on. An example trait is [`char_traits<wchar_t>`](char-traits-wchar-t-struct.md). If not specified, defaults to `char_traits<CharT>`.

*`Val`*\
The type of the elements to extract. For example, `double` given a stream of: `"1.1 2.2 3.3"`

`stream_extractable` refers to the requirement (concept) that the type `Val` can be extracted from a stream using the `operator>>` function. It's equivalent to:

```cpp
template<class Val, class CharT, class Traits>
concept stream_extractable =
  requires(std::basic_istream<CharT,Traits>& is, Val& t) {
    is >> t;
  };
```

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`istream`](range-adaptors.md#istream) |
| **Underlying range** | None  |
| **Element type** |The same as `Val` |
| **View iterator category** | [`input_range`](range-concepts.md#input_range) |
| **Sized** | No |
| **Is `const`-iterable** | No |
| **Common range** | No |
| **Borrowed range** | No |

## Specializations:`istream_view` and `wistream_view`

Convenience alias templates are provided for `char` and `wchar_t` streams, as follows:

```cpp
1) template<class Val>
using istream_view = ranges::basic_istream_view<Val, char>;

2) template<class Val>
using wistream_view = ranges::basic_istream_view<Val, wchar_t>;
```

1\) Reads elements from an input stream composed of `char` characters.\
2\) Reads elements from an input stream composed of `wchar_t` characters.

For 1) and 2), `Val` refers to the type of the elements to extract. For example, `Val` is `double` given a stream of: `"1.1 2.2 3.3"`

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct a `basic_istream_view`. |
| [`begin`](#begin)<sup>C++20</sup> | Read the first value and get an iterator for the view. |
| [`end`](#end)<sup>C++20</sup> | Returns `std::default_sentinel` |

No member functions are inherited from `view_interface`.

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Construct an instance of a `basic_istream_view`.

```cpp
constexpr explicit
basic_istream_view(std::basic_istream<CharT, Traits>& stream);
```

### Parameters

*`stream`*\
The stream to read from.

For information about the template parameter type, see [Template parameters](#template-parameters).

### Return value

A `basic_istream_view` instance. The `basic_istream_view` internal stream pointer is initialized to  `addressof(stream)`.

### Remarks

The best way to create a `basic_istream_view` is by using the [`views::istream`](range-adaptors.md#istream) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

### Example: `basic_istream_view`, `istream_view`, and `wistream_view`

```cpp
// requires /std:c++20, or later
#include <ranges>
#include <iostream>
#include <sstream>

int main()
{
    // range adaptor
    std::istringstream streamOfdoubles{ "1.1 2.2 3.3 4.4 5.5" };
    for (const auto& elem : std::views::istream<double>(streamOfdoubles))
    {
        std::cout << elem << ' '; // 1.1 2.2 3.3 4.4 5.5
    }
    std::cout << '\n';

    // range adaptor - create a wistream_view
    std::wistringstream streamOfInts{ L"1 2 3 4 5" };
    for (const auto& elem : std::views::istream<int>(streamOfInts))
    {
        std::cout << elem << ' '; // 1 2 3 4 5
    }
    std::cout << '\n';

    // istream_view alias
    std::istringstream cpu1{ "8 0 8 0" };
    // equivalent std::ranges::istream_view<int, char>
    for (const auto& elem : std::ranges::istream_view<int>{cpu1})
    {
        std::cout << elem; // 8080
    }
    std::cout << '\n';

    // wistream_view alias
    std::wistringstream cpu2{ L"6 5 0 2" };
    // equivalent std::ranges::istream_view<int, wchar_t>
    for (const auto& elem : std::ranges::wistream_view<int>{cpu2})
    {
        std::cout << elem; // 6502
    }
    std::cout << '\n';

    // specify all template arguments
    std::wistringstream misc(L"S T L");
    std::ranges::basic_istream_view<wchar_t, wchar_t, std::char_traits<wchar_t>> basic{misc};
    for (const auto& elem : basic)
    {
        std::wcout << elem << ' '; // S T L
    }
}
```

```output
1.1 2.2 3.3 4.4 5.5
1 2 3 4 5
8080
6502
S T L
```

## `begin`

Read the first value and get an iterator to the view.

```cpp
constexpr auto begin();
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the `basic_istream_view`.

## `end`

Get the sentinel at the end of the view.

```cpp
constexpr std::default_sentinel_t end() const noexcept;
```

### Parameters

None.

### Return value

`default_sentinel_t`

## See also

[`<ranges>`](ranges.md)\
[View classes](view-classes.md)
