---
description: "Learn more about: time_zone_link class"
title: "time_zone_link class"
ms.date: 08/31/2021
f1_keywords: ["chrono/std::chrono::time_zone_link::name", "chrono/std::chrono::time_zone_link::target"]
helpviewer_keywords: ["std::chrono [C++], time_zone_link class", "std::chrono::time_zone_link::name function", "std::chrono::time_zone_link::target function"]
---
# `time_zone_link` class

A `time_zone_link` Specifies an alternative name for a `time_zone`. Constructed when the time zone database is initialized.

Microsoft C++ supports the `time_zone_link` class starting in Visual Studio 2019 version 16.10. The `time_zone_link` class is a C++20 feature. The [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option is required.

## Syntax

```cpp
namespace std::chrono {
    class time_zone_link {  // Since C++20
    public:
        time_zone_link(time_zone_link&&) = default;
        time_zone_link& operator=(time_zone_link&&) = default;
        string_view name() const noexcept;
        string_view target() const noexcept;
    };
}
```

## Members

### Public member functions and function templates

| Name | Description |
|--|--|
| [`time_zone_link::name`](#std-chrono-time-zone-link-name) | Gets the alternate name for the time zone. |
| [`time_zone_link::target`](#std-chrono-time-zone-link-target) | The name of the `time_zone` that this is an alternative name for. |

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

## <a name="std-chrono-time-zone-link-name"></a> `name`

The function template `get_info` has two overloads that get a `sys_info` or `local_info` for this `time_zone_link`.

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

Microsoft C++ supports `time_zone_link::get_info` starting in Visual Studio 2019 version 16.10. The function is a C++20 feature that requires the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option.

## <a name="std-chrono-time-zone-name"></a> `name`

Gets the name of this `time_zone_link`.

```cpp
string_view name() const noexcept;  // Since C++20
```

### Return value

Returns the name of the time zone as a `string_view`.

### Remarks

Microsoft C++ supports `time_zone_link::name` starting in Visual Studio 2019 version 16.10.

## <a name="std-chrono-time-zone-to-local"></a> `to_local`

The function template `to_local` converts a `sys_time` to a `local_time` in this `time_zone_link`.

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

`to_local` returns the `local_time` associated with *`st`* in this `time_zone_link`.

### Remarks

Microsoft C++ supports `time_zone_link::to_local` starting in Visual Studio 2019 version 16.10. The function is a C++20 feature that requires the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option.

## <a name="std-chrono-time-zone-to-sys"></a> `to_sys`

The function template `to_sys` has two overloads that convert a `local_time` to a `sys_time` in this `time_zone_link`.

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

`to_sys` returns a `sys_time` that's at least as fine as `seconds`. It's finer if the argument *`lt`* has finer precision. The returned `sys_time` is the UTC equivalent of *`lt`* according to the rules of this time_zone_link.

The one-parameter overload throws an `ambiguous_local_time` exception if the conversion from *`lt`* to a `sys_time` is ambiguous, and a `nonexistent_local_time` exception if the local time point represents a non-existent local time point. Ambiguity can happen during a daylight saving time to standard time transition. Two instances of the same local time point may occur in one day. A non-existent local time point represents a time point in the transition from standard time to daylight saving time.

The two-parameter overload doesn't throw an exception in these cases. If the conversion from  *`lt`* to a `sys_time` is ambiguous, `to_sys` returns the earlier `sys_time` if *`z`* is `choose::earliest`, and returns the later `sys_time` if *`z`* is `choose::latest`. If the *`lt`* represents a non-existent time between two UTC time points, then the two UTC time points are the same, so `to_sys` returns that UTC time point.

### Remarks

Microsoft C++ supports `time_zone_link::to_sys` starting in Visual Studio 2019 version 16.10. The function is a C++20 feature that requires the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option.

## See also

[`<chrono>`](./chrono.md)\
[Header files reference](./cpp-standard-library-header-files.md)
