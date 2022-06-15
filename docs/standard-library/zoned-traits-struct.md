---
description: "Learn more about: zoned_traits struct"
title: "zoned_traits struct"
ms.date: 05/31/2022
f1_keywords: ["chrono/std::chrono::zoned_traits::get_info", "chrono/std::chrono::zoned_traits::default_zone", "chrono/std::chrono::zoned_traits::locate_zone"]
helpviewer_keywords: ["std::chrono [C++], zoned_traits struct", "std::chrono::zoned_traits::default_zone function", "std::chrono::zoned_traits::locate_zone function"]
dev_lang: ["C++"]
---

# `zoned_traits` struct

Allows you to associate a different default time zone with a `zoned_time`, and optionally map a custom name to a time zone.

## Syntax

```cpp
1)
template<class T>
struct zoned_traits {}; // C++20

2)
template <>
struct zoned_traits<const time_zone*>; // C++20
```

### Parameters

1\) `T` - A pointer to a type that provides a custom `time_zone`.\
2\) When you don't provide the `time_zone*` template argument, this specialization provides `const std::chrono::time_zone*`, which defaults to the UTC time zone.

## Remarks

The pointer to the type that you supply doesn't have to provide the static functions `default_zone()` or `locate_zone()`. But if it doesn't, the `zoned_time` constructors won't be considered during overload resolution.

## Members

|Name|Description|
|-|-|
|[`default_zone`](#default_zone) | Gets the `time_zone` pointer for the default time zone.|
|[`locate_zone`](#locate_zone) | Gets the `time_zone` pointer for the specified time zone. |

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

Microsoft C++ supports `zoned_traits` class starting in Visual Studio 2019 version 16.10.

Time-zone data is only available for Windows 10 version 1903/19H1 and later, and Windows Server 2022 and later.

## <a name="default_zone"></a> `default_zone`

Gets the [`time_zone`](time-zone-class.md) for the default time zone. For more information about how this works, see the code [example](#example-zoned_traits) at the end of this topic.

```cpp
static const time_zone* default_zone();
```

### Return value

If the template argument isn't provided, then the template specialization provides `zoned_traits<const time_zone*>`, which returns the UTC time zone. Otherwise, it returns the default time zone provided by the template argument `T`.

## <a name="locate_zone"></a> `locate_zone`

Returns the [`time_zone`](time-zone-class.md) pointer for the specified time zone. For more information about how this works, see the code [example](#example-zoned_traits) at the end of this topic.

```cpp
static const time_zone* locate_zone(string_view name);
```

### Template parameters

*`name`*\
The name of the time zone to locate. For example, `"UTC"`.

### Return value

If you constructed a `zoned_traits` without providing the template argument of a custom time zone pointer, then the return value is `std::chrono::locate_zone(name)`. Otherwise, it returns the value of `locate_zone()` as defined in the template argument `T`.

## Example: `zoned_traits`

This following example shows how to use `zoned_traits` to supply a custom default time zone.

First, `CustomTimeZonePtr` is defined, which provides the pointer to the custom time zone type via `operator->()`.

Then, a `zoned_traits` is declared in which `default_zone` is defined to return the custom default time zone. In this case, the South Pole.

In the example, `zoned_traits<CustomTimeZonePtr>::locate_zone()` passes the specified time zone name to `std::chrono::locate_zone()`. This function is where you could map a custom time zone name to another time zone.

Finally, `stdZT` is defined, which uses the standard `time_zone` pointer because it doesn't provide a template argument, so the specialization is used that provides `const std::chrono::time_zone*`.

Run this example to see the `zoned_time` use the custom, and then the standard, `time_zone` pointer.

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

struct CustomTimeZonePtr
{
    CustomTimeZonePtr() {}
    CustomTimeZonePtr(const time_zone* tz) : tzptr(tz) {}

    const time_zone* operator->() const
    {
        return tzptr;
    }

private:
    const time_zone* tzptr;
};

template <>
struct zoned_traits<CustomTimeZonePtr>
{
    static const CustomTimeZonePtr default_zone()
    {
        return CustomTimeZonePtr{ locate_zone("Antarctica/South_Pole") };
    }

    static const CustomTimeZonePtr locate_zone(std::string_view name)
    {
        // Here you can provide your own mapping between the name
        // parameter and another time zone before passing it to locate_zone()
        return CustomTimeZonePtr{ std::chrono::locate_zone(name) };
    }
};

int main()
{
    std::cout << "-- Custom time zone pointer with specialized zoned_traits and different default zone behavior --\n";
    zoned_time<seconds, CustomTimeZonePtr> myZT;
    std::cout << myZT.get_info() << "\n";

    std::cout << "-- Built-in time zone pointer with standard zoned_traits --\n";
    zoned_time<seconds, const time_zone*> stdZT;
    std::cout << stdZT.get_info() << "\n";

    return 0;
}
```

```output
-- Custom time zone pointer with specialized zoned_traits and different default zone behavior --
begin: 1945-12-31 12:00:00, end: 1974-11-02 14:00:00, offset: 43200s, save: 0min, abbrev: GMT+12
-- Built-in time zone pointer with standard zoned_traits --
begin: -32767-01-01 00:00:00, end: 32767-12-31 23:59:59, offset: 0s, save: 0min, abbrev: UTC
```

## See also

[`<chrono>`](chrono.md)\
[`time_zone`](time-zone-class.md)\
[`zoned_time` class](zoned-time-class.md)\
[Header files reference](./cpp-standard-library-header-files.md)