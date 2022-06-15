---
description: "Learn more about: zoned_time class"
title: "zoned_time class"
ms.date: 05/31/2022
f1_keywords: ["chrono/std::chrono::zoned_time::get_info", "chrono/std::chrono::zoned_time::get_local_time", "chrono/std::chrono::zoned_time::get_sys_time", "chrono/std::chrono::zoned_time::get_time_zone","chrono/std::chrono::zoned_time:operator=", "chrono/std::chrono::zoned_time:operator local_time", "chrono/std::chrono::zoned_time:operator sys_time"]
helpviewer_keywords: ["std::chrono [C++], zoned_time class", "std::chrono::zoned_time::get_info function", "std::chrono::zoned_time::get_local_time function", "std::chrono::zoned_time::get_sys_time function", "std::chrono::zoned_time::get_time_zone function"]
dev_langs: ["C++"]
---

# `zoned_time` class

A `zoned_time` is a pairing of a [`time_zone`](time-zone-class.md) and a [`time_point`](time-point-class.md). It gives a `time_point` meaning within a specific time zone.

## Syntax

```cpp
template<class Duration, class TimeZonePtr = const time_zone*>
class zoned_time ;  // C++20
```

## Remarks

A `zoned_time` always refers to a valid time zone and represents a point in time that exists and isn't ambiguous in that time zone.

## Members

|Name|Description|
|-|-|
|[Constructors](#ctor)| Construct a `zoned_time`.|
|[`get_info`](#get_info) | Uses the time zone in this `zoned_time` to get information about the time point in the `zoned_time`.|
|[`get_local_time`](#get_local_time) | Combines the time zone in the `zoned_time` with the stored time point to produce the local time in that time zone.|
|[`get_sys_time`](#get_sys_time) | Gets the time point stored in this `zoned_time` without applying the time zone.|
|[`get_time_zone`](#get_time_zone) | Gets the [time_zone](time-zone-class.md) stored in this `zoned_time`. |
|[`operator=`](#op_=)| Assign the value of another `zoned_time`, or another `zoned_time`'s `local_time` or `sys_time`, to this `zoned_time`.|
|[`operator local_time`](#op_local_time)| Combines the `zoned_time`'s time zone with the stored time point to produce the local time in that time zone.|
|[`operator sys_time`](#op_local_time)| Gets the time stored in this `zoned_time` without applying the time zone. |

## Non-members

| Name | Description |
|--|--|
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `zoned_time` instances are equal. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `zoned_time` to the given stream. |

## Convenience type aliases

| Name | Description |
|--|--|
| `zoned_seconds` | A synonym for `zoned_time<seconds>;`|
| `zoned_time::duration` | A duration measured in seconds. It's a synonym for `common_type_t<Duration, seconds>;` |

## Requirements

**Header:** `<chrono>`

Microsoft C++ supports the `zoned_time` class starting in Visual Studio 2019 version 16.10.

Time-zone data is only available for Windows 10 version 1903/19H1 and later, and Windows Server 2022 and later.

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="ctor"></a> Constructors

Construct a `zoned_time`.

```cpp
1) zoned_time();
2) zoned_time(const zoned_time& zt) = default;
3) explicit zoned_time(TimeZonePtr z);
4) zoned_time(const sys_time<Duration>& st);
5) explicit zoned_time(string_view name);
6) zoned_time(TimeZonePtr z, const local_time<Duration>& tp);
7) zoned_time(TimeZonePtr z, const local_time<Duration>& tp, choose c);
8) zoned_time(TimeZonePtr z, const sys_time<Duration>& st);
9) zoned_time(string_view name, const local_time<Duration>& tp);
10) zoned_time(string_view name, const local_time<Duration>& tp, choose c);
11) zoned_time(string_view name, const sys_time<Duration>& st);
12) template<class Duration, class TimeZonePtr> zoned_time(string_view name, const zoned_time<Duration>& y);
13) template<class Duration, class TimeZonePtr> zoned_time(string_view name, const zoned_time<Duration>& y, choose c);
14) template<class Duration> zoned_time(const zoned_time<Duration, TimeZonePtr>& y);
15) template<class Duration, class TimeZonePtr> zoned_time(TimeZonePtr z, const zoned_time<Duration, TimeZonePtr>& y);
16) template<class Duration, class TimeZonePtr> zoned_time(TimeZonePtr z, const zoned_time<Duration, TimeZonePtr>& y, choose);
```

### Parameters

*`c`*\
Indicates how to handle ambiguous or nonexistent local times when converting a `local_time` to a `sys_time`. For more information, see [`choose` enum](choose-enum.md).

*`name`*\
The name of a time zone.

*`st`*\
A `sys_time` with a specified duration. Used to set the time.

*`tp`*\
A `local_time` with a specified duration. Used to set the time.

*`y`*\
A `zoned_time` copied to construct a new `zoned_time`.

*`z`*\
A [`time_zone`](time-zone-class.md) that is `std::move(z)`'d into the constructed `zoned_time`.

*`zt`*\
A `zoned_time` pointer that is `std::move(zt)`'d into the constructed `zoned_time`.

### Remarks

1\) Initializes the time zone with `traits::default_zone()`, and default constructs the time point.\
2\) The default copy constructor.\
3\) Initializes the time zone with `std::move(z)`, and default constructs the time point.\
4\) Initializes the time zone with `traits::default_zone()`, and the time with `st`.\
5\) Initializes the time zone with `traits::locate_zone(name)` and default constructs the time point.\
6\) Initializes the time zone with `std::move(z)`, and the time by converting `tp` as though by `z->to_sys(tp)`.\
7\) Initializes the time zone with `std::move(z)`, and the time as though by `z->to_sys(tp, c)`. See [`choose` enum](choose-enum.md) for how the parameter `c` affects the outcome.\
8\) Initializes the time zone with `std::move(z)`, and the time with `st`.\
9\) Equivalent to construction with `{traits::locate_zone(name), tp}`.\
10\) Equivalent to construction with `{traits::locate_zone(name), tp, c}`.\
11\) Equivalent to construction with `{traits::locate_zone(name), st}`.\
12\) Equivalent to construction with `{traits::locate_zone(name), y}`.\
13\) Equivalent to construction with `{traits::locate_zone(name), y, c}`. The `choose` parameter, `c`, has no effect.\
14\) Initializes the time zone from `y`'s time zone and time point.\
15\) Initializes the time zone with `std::move(z)` and the time from `y`'s time point.\
16\) Equivalent to construction with `{z, y}`. The `choose` parameter, `c`, has no effect.

> [!NOTE]
> `zoned_time` doesn't have a move constructor. Trying to move it results in a copy using the default copy constructor.

### Example: construct a `zoned_time`

The following shows how to create a `zoned_time` instance for the time zone `"Antartica/Casey"`, on 9/15/2021 at 4:45pm:

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    zoned_time zt("Antarctica/Casey", sys_days{2021y/September/15d}+16h+45min);
    std::cout << zt;
    
    return 0;
}
```

```output
2021-09-16 03:45:00 GMT+11
```

## <a name="get_info"></a> `get_info`

Uses the time zone in this `zoned_time` to get information about the time point in the `zoned_time`.

```cpp
sys_info get_info() const;
```

### Return value

A [`sys_info`](sys-info-struct.md) that contains the UTC offset for the time zone and time, the daylight savings time adjustment offset, and so on.

### Example: `get_info`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    zoned_time zt("Antarctica/Casey", sys_days{2021y/September/15d}+16h+45min);
    sys_info si = zt.get_info();
    std::cout << si;

    return 0;
}
```

```output
begin: 2020-10-03 16:01:00, end: 32767-12-31 23:59:59, offset: 39600s, save: 0min, abbrev: GMT+11
```

## <a name="get_local_time"></a> `get_local_time`

Gets a `local_time<duration>` that represents the local time given this `zoned_time`'s time zone and time point.

```cpp
local_time<duration> get_local_time() const;
```

### Return value

The returned `local_time` is a synonym for `time_point<local_t, duration>`.

### Example: `get_local_time`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    zoned_time zt("Antarctica/Casey", sys_days{2021y/September/15d}+16h+45min);
    std::cout << zt.get_info();

    return 0;
}
```

```output
2021-09-16 03:45:00
```

## <a name="get_sys_time"></a> `get_sys_time`

Gets the time stored in the `zoned_time` for the [`system_clock`](system-clock-structure.md).

```cpp
sys_time<duration> get_sys_time() const;
```

### Return value

The time stored in this `zoned_time`, without any adjustment for time zone. It represents the system-wide wall clock time as a [time_point](time-point-class.md). The returned `sys_time` is a synonym for `template <class Duration> time_point<system_clock Duration>;`

### Example: `get_sys_time`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    zoned_time zt("Antarctica/Casey", sys_days{2021y/September/15d}+16h+45min);
    std::cout << zt.get_sys_time();

    return 0;
}
```

```output
2021-09-15 16:45:00
```

## <a name="get_time_zone"></a> `get_time_zone`

Gets the time zone stored in this `zoned_time`.

```cpp
TimeZonePtr get_time_zone() const;
```

### Return value

A pointer to the [time_zone](time-zone-class.md) stored in this `zoned_time`.

### Example: `get_time_zone`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    zoned_time zt("Antarctica/Casey", sys_days{2021y/September/15d}+16h+45min);
    auto pTZ = zt.get_time_zone();
    std::cout << pTZ->name();

    return 0;
}
```

```output
Antarctica/Casey
```

## <a name="op_="></a> `operator=`

Assign another `zoned_time` to `this` one. Or assign just the other `zoned_time`'s `sys_time` or `local_time`.

```cpp
1) zoned_time& operator=(const zoned_time& zt) = default;
2) zoned_time& operator=(const sys_time<Duration>& st);
3) zoned_time& operator=(const local_time<Duration>& lt);
```

### Parameters

*`zt`*\
The `zoned_time` to assign to `this` one.

*`st`*\
The `sys_time` to assign to the stored `time_point` in this `zoned_time`.

*`lt`*\
The `local_time` to assign to the stored `time_point` in this `zoned_time`.

### Return value

`*this`

### Example: `operator=`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    zoned_time zt1{}, zt2("Pacific/Galapagos", sys_days{2021y/September/15d} + 16h + 45min);
    std::cout << zt2.get_local_time() << "\n";
    zt1 = zt2.get_local_time();
    std::cout << zt1.get_local_time();

    return 0;
}
```

```output
2021-09-15 10:45:00
2021-09-15 10:45:00
```

### Remarks

1\) The default copy assignment operator. Copies (doesn't move) the stored [`time_point`](time-point-class.md) and [time_zone](time-zone-class.md) pointer from the other `zoned_time` into this `zoned_time`.
2\) Assigns `st` to the [`time_point`](time-point-class.md) in this `zoned_time`.  After the assignment, `*this->get_sys_time() == st;`
3\) Converts `lt` (a `local_time`) to a `sys_time`. It does this essentially as `timeZone->to_sys(lt)`, and assigns the result to the [`time_point`] in this `zoned_time`. After the assignment, `*this->get_local_time() == lt;`

## <a name="op_local_time"></a> `operator local_time`

Combines the `zoned_time`'s time zone with the stored time point to produce the local time in that time zone.

```cpp
explicit operator local_time<duration>() const;
```

### Return value

A `time_point<local_t, Duration>` that represents the local time for the time and time zone in this `zoned_time`. You can use the convenience alias `local_time` to represent a value returned by this function.

The return value is effectively `timeZone->to_local(get_sys_time());`

### Example: `operator local_time`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    zoned_time zt("Pacific/Galapagos", sys_days{ 2021y / September / 15d } + 16h + 45min);
    std::cout << (local_time<seconds>)zt;

    return 0;
}
```

```output
2021-09-15 10:45:00
```

## <a name="op_sys_time"></a> `operator sys_time`

Gets the time point stored in this `zoned_time` without applying the time zone.

```cpp
operator sys_time<duration>() const;
```

### Return value

The time stored in this `zoned_time`, without any adjustment for time zone. The returned `sys_time` is a synonym for `template <class Duration> time_point<system_clock Duration>;` and represents the same point in time that is stored in this `zoned_time`.

### Example: `operator sys_time`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    zoned_time zt("Pacific/Galapagos", sys_days{2021y/September/15d} + 16h + 45min);
    std::cout << (sys_time<seconds>)zt;

    return 0;
}
```

```output
2021-09-15 16:45:00
```

## See also

[`<chrono>`](chrono.md)\
[`time_point`](time-point-class.md)\
[`time_zone`](time-zone-class.md)\
[`zoned_traits` struct](zoned-traits-struct.md)\
[Header files reference](./cpp-standard-library-header-files.md)