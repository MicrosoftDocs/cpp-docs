---
description: "Learn more about: time_zone_link class"
title: "time_zone_link class"
ms.date: 05/31/2022
f1_keywords: ["chrono/std::chrono::time_zone_link::name", "chrono/std::chrono::time_zone_link::target"]
helpviewer_keywords: ["std::chrono [C++], time_zone_link class", "std::chrono::time_zone_link::name function", "std::chrono::time_zone_link::target function"]
dev_langs: ["C++"]
---
# `time_zone_link` class

Specifies an alternative name for a `time_zone`.

## Syntax

```cpp
class time_zone_link;  // Since C++20
```

## Remarks

`time_zone_link` instances are created when the time zone database is initialized. They can't be created directly. Get an instance via `get_tzdb().links`, as shown in the example at the end of this topic.

Although this type has a default move constructor and move assignment operator, it isn't copyable because only `const` access is provided to this type. Using those functions results in undefined behavior, which is why the move constructor and assignment operator aren't listed here.

**Differences with IANA database**

In Microsoft's implementation, time zone data can differ in some cases from the Internet Assigned Numbers Authority (IANA) time zone database. For example, `"America/Nuuk"` is returned instead of `"America/Godthab"` (`"America/Nuuk"` was renamed `"America/Godthab"` in April 2020). We don't supply the `"Eastern War Time EWT"` time zone at this time. For more information, see [Issue #1786](https://github.com/microsoft/STL/issues/1786) on the Microsoft STL GitHub repo.

## Members

### Public member functions and function templates

| Name | Description |
|--|--|
| [`name`](#std-chrono-time-zone-link-name) | Gets the alternate name for the time zone. |
| [`target`](#std-chrono-time-zone-link-target) | The name of the `time_zone` that this `time_zone_link` is an alternative name for. |

## Non-members

| Name | Description |
|--|--|
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `time_zone_link` objects have the same `name`. The `target` name isn't part of the equality check. |
| [`operator<=>`](chrono-operators.md#op_spaceship) | Compare this `time_zone_link` against another `time_zone_link`. The `>, >=, <=, <, !=` operators are synthesized by the compiler. Returns  `Left.name() <=> Right.name()`. |

## Requirements

**Header:** `<chrono>`

Time-zone data is only available for Windows 10 version 1903/19H1 and later, and Windows Server 2022 and later.

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="std-chrono-time-zone-link-name"></a> `name`

Gets the alternate name for the time zone.

```cpp
string_view name() const noexcept;
```

## <a name="std-chrono-time-zone-link-target"></a> `target`

Gets the name of the `time_zone` that this `time_zone_link` is an alternative name for.

```cpp
string_view target() const noexcept;  // Since C++20
```

## Example: show `time_zone_link` name

The following example displays the names of each `time_zone_link` in the [IANA time zone database](https://www.iana.org/time-zones).

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    const auto& my_tzdb = get_tzdb(); // get the IANA time zone database
    auto& links = my_tzdb.links; // get the list of time_zone_links from the database
    std::for_each(links.begin(), links.end(), // display each time_zone_link name and target
        [](auto& l)
        {
            std::cout << "Name: " << l.name() << "Target" << l.target() << '\n';
        });

    return 0;
}
```

```output
Name: ACT Target:Australia/Darwin
Name: AET Target:Australia/Sydney
Name: AGT Target:America/Buenos_Aires
Name: ART Target:Africa/Cairo
Name: AST Target:America/Anchorage
Name: Africa/Asmara Target:Africa/Asmera
Name: Africa/Timbuktu Target:Africa/Bamako
Name: America/Argentina/Buenos_Aires Target:America/Buenos_Aires
Name: America/Argentina/Catamarca Target:America/Catamarca
...
Name: Zulu Target:Etc/UTC
```

## See also

[`<chrono>`](chrono.md)\
[`time_zone`](time-zone-class.md)\
[Header files reference](cpp-standard-library-header-files.md)