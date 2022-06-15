---
description: "Learn more about: time_zone class"
title: "time_zone class"
ms.date: 05/31/2022
f1_keywords: ["chrono/std::chrono::time_zone::name", "chrono/std::chrono::time_zone::get_info", "chrono/std::chrono::time_zone::to_sys", "chrono/std::chrono::time_zone::to_local"]
helpviewer_keywords: ["std::chrono [C++], time_zone class", "std::chrono::time_zone::name function", "std::chrono::time_zone::get_info function", "std::chrono::time_zone::to_sys function", "std::chrono::time_zone::to_local function"]
dev_langs: ["C++"]
---
# `time_zone` class

A `time_zone` represents the time zone for a specific geographic area. It has the full history of time zone rules for each area so time conversions will be accurate if you convert a time for a date back when the rules are different for the time zone than they are today.

## Syntax

```cpp
class time_zone;  // Since C++20
```

## Remarks

The `<chrono>` library creates `time_zone` objects as part of its time zone database initialization. It provides **`const`** access to the created objects.

You can't construct or copy a `time_zone` object, and using the default move constructor or default move assignment operator results in undefined behavior.

This is how you get a `time_zone` instance:

```cpp
const auto& timeZoneDatabase = get_tzdb(); // initialize the time zone database
const auto& currentZone = timeZoneDatabase.current_zone();
```

Microsoft C++ supports the `time_zone` class starting in Visual Studio 2019 version 16.10. The `time_zone` class is a C++20 feature. The [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option is required.

## Members

### Public member functions and function templates

| Name | Description |
|--|--|
| [`get_info`](#std-chrono-time-zone-get-info) | Gets a `sys_info` or `local_info` for this `time_zone`. |
| [`name`](#std-chrono-time-zone-name) | Gets the name of this `time_zone`. |
| [`to_local`](#std-chrono-time-zone-to-local) | Converts a `sys_time` to a `local_time` in this `time_zone`. |
| [`to_sys`](#std-chrono-time-zone-to-sys) | Converts a `local_time` to a `sys_time` in this `time_zone`. |

## Requirements

**Header:** `<chrono>`

Time-zone data is only available for Windows 10 version 1903/19H1 and later, and Windows Server 2022 and later.

**Namespace:** `std::chrono`

## <a name="std-chrono-time-zone-get-info"></a> `get_info`

The function template `get_info` has two overloads that get a `sys_info` or `local_info` for this `time_zone`.

```cpp
template<class Duration>
sys_info get_info(const sys_time<Duration>& st) const;  // Since C++20
    
template<class Duration>
local_info get_info(const local_time<Duration>& lt) const;  // Since C++20
```

### Parameters

*`Duration`*\
The `duration` class for the `sys_time` or `local_time` parameter.

*`st`*\
The `sys_time` time point used to get a `sys_info` result.

*`lt`*\
The `local_time` time point used to get a `local_info` result.

### Return value

In the `get_info` function template that takes a `sys_time` time point *`st`*, it returns a `sys_info` object *`i`* such that *`st`* is in the range `[i.begin, i.end)`.

In the `get_info` function template that takes a `local_time` time point *`lt`*, it returns a `local_info` object.

### Remarks

Microsoft C++ supports `time_zone::get_info` starting in Visual Studio 2019 version 16.10. The function is a C++20 feature that requires the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option.

## <a name="std-chrono-time-zone-name"></a> `name`

Gets the name of this `time_zone`.

```cpp
string_view name() const noexcept;  // Since C++20
```

### Return value

Returns the name of the time zone as a `string_view`.

### Remarks

Microsoft C++ supports `time_zone::name` starting in Visual Studio 2019 version 16.10.

## <a name="std-chrono-time-zone-to-local"></a> `to_local`

The function template `to_local` converts a `sys_time` to a `local_time` in this `time_zone`.

```cpp
template<class Duration>
local_time<common_type_t<Duration, seconds>>
to_local(const sys_time<Duration>& st) const;  // Since C++20
```

### Parameters

*`Duration`*\
The `duration` class for the `sys_time` or `local_time` parameter.

*`st`*\
The `sys_time` time point used to get a `sys_info` result.

### Return value

`to_local` returns the `local_time` associated with *`st`* in this `time_zone`.

### Remarks

Microsoft C++ supports `time_zone::to_local` starting in Visual Studio 2019 version 16.10. The function is a C++20 feature that requires the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option.

### Example: convert `sys_time` to `local_time`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    const auto& timeZoneDatabase = get_tzdb();
    const auto& currentZone = timeZoneDatabase.current_zone();
    local_time<system_clock::duration> lt = currentZone->to_local(system_clock::now());

    std::cout << "local_time: " << lt << "\n";
   
    return 0;
}
```

```output
local_time: 2021-09-08 15:15:53.1830646
```

## <a name="std-chrono-time-zone-to-sys"></a> `to_sys`

The function template `to_sys` has two overloads that convert a `local_time` to a `sys_time` in this `time_zone`.

```cpp
template<class Duration>
sys_time<common_type_t<Duration, seconds>>
to_sys(const local_time<Duration>& lt) const;  // Since C++20

template<class Duration>
sys_time<common_type_t<Duration, seconds>>
to_sys(const local_time<Duration>& lt, choose z) const;  // Since C++20
```

### Parameters

*`Duration`*\
The `duration` class for the `local_time` parameter.

*`lt`*\
The `local_time` time point to convert.

*`z`*\
A value of `choose::earliest` or `choose::latest`. It's used to resolve otherwise ambiguous results.

### Return value

`to_sys` returns a `sys_time` that's at least as fine as `seconds`. It's finer if the argument *`lt`* has finer precision. The returned `sys_time` is the UTC equivalent of *`lt`* according to the rules of this time_zone.

The one-parameter overload throws an `ambiguous_local_time` exception if the conversion from *`lt`* to a `sys_time` is ambiguous, and a `nonexistent_local_time` exception if the local time point represents a non-existent local time point. Ambiguity can happen during a daylight saving time to standard time transition. Two instances of the same local time point may occur in one day. A non-existent local time point represents a time point in the transition from standard time to daylight saving time.

The two-parameter overload doesn't throw an exception in these cases. If the conversion from  *`lt`* to a `sys_time` is ambiguous, `to_sys` returns the earlier `sys_time` if *`z`* is `choose::earliest`, and returns the later `sys_time` if *`z`* is `choose::latest`. If the *`lt`* represents a non-existent time between two UTC time points, then the two UTC time points are the same, so `to_sys` returns that UTC time point.

### Remarks

Microsoft C++ supports `time_zone::to_sys` starting in Visual Studio 2019 version 16.10. The function is a C++20 feature that requires the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option.

### Example: convert `local_time` to `sys_time`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    const auto& timeZoneDatabase = get_tzdb();
    const auto& currentZone = timeZoneDatabase.current_zone();

    auto st = currentZone->to_sys(local_days{2021y/September/15d}+16h+45min, choose::earliest);

    std::cout << "sys_time: " << st << "\n";
   
    return 0;
}
```

```output
sys_time: 2021-09-15 23:45:00.0000000
```

## See also

[`<chrono>`](./chrono.md)\
[Header files reference](./cpp-standard-library-header-files.md)
