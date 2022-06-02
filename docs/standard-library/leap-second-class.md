---
description: "Learn more about: leap_second class"
title: "leap_second class"
ms.date: 05/31/2022
f1_keywords: ["chrono/std::chrono::leap_second", "chrono/std::chrono::leap_second::date", "chrono/std::chrono::leap_second::value"]
helpviewer_keywords: ["std::chrono [C++], leap_second class", "std::chrono::leap_second::date function", "std::chrono::leap_second::value function"]
---
# `leap_second` class

A `leap_second` represents a date and a value for an inserted leap second. The library creates `leap_second` objects as part of its time zone database initialization. It provides **`const`** access to the created objects. You can't construct or copy a `leap_second` object, and use of the default move constructor or default move assignment operator results in undefined behavior.

## Syntax

```cpp
class leap_second  // Since C++20
```

## Members

| Name | Description |
|--|--|
| [Constructor](#leap_second) | Construct a `leap_second` |
| [`date`](#std-chrono-leap-second-date) | Gets the date and time when the leap second was inserted. |
| [`value`](#std-chrono-leap-second-value) | Gets the positive or negative number of leap seconds inserted. |

## Requirements

**Header:** `<chrono>`

Microsoft C++ supports the `leap_second` class starting in Visual Studio 2019 version 16.10. The `leap_second` class is a C++20 feature. The [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option is required.

An international standards body specifies when new leap seconds should be accounted for. A database of these changes was added starting in Windows 10 version 1809 and later, and Windows Server 2019 and later.

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="leap_second"></a> Constructor

Construct a `leap_second`.

```cpp
leap_second(const leap_second& ls) = default;
```

### Parameters

*`ls`*\
The `leap_second` that this object will be a copy of.

### Remarks

You can't construct `leap_second` objects except by copying an existing `leap_second`. `leap_second` instances are provided by the library. You typically don't create them.

## <a name="std-chrono-leap-second-date"></a> `date`

Gets the date and time when the leap second was inserted.

```cpp
constexpr sys_seconds date() const noexcept;  // Since C++20
```

### Return value

Returns a `date` containing the date and time when the leap second was inserted.

### Remarks

Microsoft C++ supports `leap_second::date` starting in Visual Studio 2019 version 16.10. The function is a C++20 feature that requires the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option.

## <a name="std-chrono-leap-second-value"></a> `name`

Gets the name of this `leap_second`.

```cpp
constexpr seconds value() const noexcept;  // Since C++20
```

### Return value

Returns `+1s` or `-1s` to indicate whether a positive or negative leap second was inserted.

### Remarks

Microsoft C++ supports `leap_second::value` starting in Visual Studio 2019 version 16.10. The function is a C++20 feature that requires the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option.

## See also

[`<chrono>`](./chrono.md)\
[`get_leap_second_info` function](./chrono-functions.md#std-chrono-get-leap-second-info)\
[`leap_second_info` struct](./leap-second-info-struct.md)\
[Header files reference](./cpp-standard-library-header-files.md)
