---
description: "Learn more about: time_zone_link class"
title: "time_zone_link class"
ms.date: 9/1/2021
f1_keywords: ["chrono/std::chrono::time_zone_link::name", "chrono/std::chrono::time_zone_link::target"]
helpviewer_keywords: ["std::chrono [C++], time_zone_link class", "std::chrono::time_zone_link::name function", "std::chrono::time_zone_link::target function"]
---
# `time_zone_link` class

Specifies an alternative name for a `time_zone`.

## Syntax

```cpp
class time_zone_link;  // Since C++20
```

## Remarks

`const time_zone_link` instances are created when the time zone database is initialized. They can't be created by the developer.

Although this type has a default move constructor and move assignment operator, it is not copyable because only `const` access is provided to this type. Using these functions results in undefined behavior. Therefore, the move constructor and assignment operator aren't listed here.

## Members

### Public member functions and function templates

| Name | Description |
|--|--|
| [`name`](#std-chrono-time-zone-link-name) | Gets the alternate name for the time zone. |
| [`target`](#std-chrono-time-zone-link-target) | The name of the `time_zone` that this `time_zone_link` is an alternative name for. |

## Non-members

| Name | Description |
|--|--|
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `time_zone_link` objects have the same `name`. The `target` name is not considered. |
| [`operator<=>`](chrono-operators.md#op_spaceship) | Compare this `time_zone_link` against another `time_zone_link`. The `>, >=, <=, <, !=` operators are synthesized by the compiler. Returns **`true`** if `Left.name() == Right.name()`. Otherwise, returns `*false*`. |

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="std-chrono-time-zone-name"></a> `name`

Gets the name of this `time_zone_link`.

```cpp
string_view name() const noexcept;  // Since C++20
```

### Return value

Returns the alternative name of the time zone that this `time_zone_link` represents.


## See also

[`<chrono>`](./chrono.md)\
[`]
[Header files reference](./cpp-standard-library-header-files.md)