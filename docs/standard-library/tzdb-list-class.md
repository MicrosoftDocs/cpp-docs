---
description: "Learn more about: tzdb_list class"
title: "tzdb_list struct"
ms.date: 10/13/2021
f1_keywords: ["chrono/std::chrono::tzdb_list", "chrono/std::chrono::tzdb_list::front", "chrono/std::chrono::tzdb_list::erase_after", "chrono/std::chrono::tzdb_list::begin", "chrono/std::chrono::tzdb_list::cbegin", "chrono/std::chrono::tzdb_list::end", "chrono/std::chrono::tzdb_list::cend"]
helpviewer_keywords: ["std::chrono [C++], tzdb_list"]
dev_langs: ["C++"]
---
# `tzdb_list` class

A list of time zone databases.

## Syntax

```cpp
class tzdb_list; // C++ 20
```

## Remarks

You can't construct a `tzdb_list`. To get one, call [`get_tzdb_list()`](chrono-functions.md#std-chrono-get-tzdb-list).

You can't use copy assignment with a `tzdb_list` as `operator=` is deleted.

`tzdb_list` is a singleton.

## Member functions

|Function|Description|
|---------|-------------|
|[`begin`, `cbegin`](#begin)| Get an iterator to the start of the list of `tzdb` objects.|
|[`end`, `cend`](#end)| Get an iterator past the end of the list of `tzdb` objects. |
|[`erase_after`](#erase_after)| Erase the `tzdb` that immediately follows the element pointed to by the passed in iterator.|
|[`front`](#front)| Get the first element in the list of `tzdb` objects. |

## Member types

|Member type|Description|
|---------|-------------|
|`class const_iterator` | A constant iterator of type `tzdb`.|

## <a name="begin"></a> `begin`, `cbegin`

Gets an iterator that points to the start of the list.

```cpp
const_iterator begin() const noexcept; // C++20
const_iterator cbegin() const noexcept; // C++20
```

### Return value

An iterator pointing to the first `tzdb` in the list.

## <a name="end"></a> `end`, `cend`

Get an iterator past the end of the list.

```cpp
const_iterator end() const noexcept; // C++20
const_iterator cend() const noexcept; // C++20)
```

### Return value

An iterator pointing past the end of the last `tzdb` in the list.

### Remarks

Because the returned iterator points past the end of the list, it shouldn't be dereferenced. Instead, use it to compare when you've reached the end of the list.

## <a name="front"></a> `front`

Gets the first [`tzdb`](tzdb-struct.md) in the list.

```cpp
const tzdb& front() const noexcept; // C++20
```

### Return value

The first time zone database in the list.

### Remarks

You can simultaneously call this function and [`reload_tzdb`](chrono-functions.md#std-chrono-reload-tzdb) without risk of a race condition.

## <a name="erase_after"></a> `erase_after`

Erase the `tzdb` that follows the element pointed to by the passed-in iterator.

```cpp
const_iterator erase_after(const_iterator p);
```

### Parameters

*`p`*\
An iterator that points to the element before the one to erase.

### Return value

An iterator following the erased `tzdb`. If there isn't an element following the erased `tzdb`, then `end()`

### Remarks

It isn't possible to erase the first element in the list.

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## See also

[`<chrono>`](chrono.md)\
[`tzdb` struct](tzdb-struct.md)\
[Header Files Reference](cpp-standard-library-header-files.md)