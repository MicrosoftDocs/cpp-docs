---
description: "Learn more about: utc_clock class"
title: "utc_clock class"
ms.date: 07/19/2021
f1_keywords: ["chrono/std::chrono::utc_clock", "chrono/std::chrono::utc_clock::from_stream", "chrono/std::chrono::utc_clock::now", "chrono/std::chrono::utc_clock::to_sys", "chrono/std::chrono::utc_clock::from_sys", "chrono/std::chrono::utc_clock::is_steady Constant"]
---

# utc_clock class

A clock based on Coordinated Universal Time (UTC).

## Syntax

```cpp
class utc_clock; // C++20
```

## Remarks

This clock measures time since 00:00:00 UTC on Thursday, January 1, 1970. This clock accounts for leap seconds. It is the time standard used around the world.

UTC time is based on International Atomic Time (TAI) which uses the output atomic clocks to track time. However, a leap second is occasionally added to UTC time to keep the difference between UTC time and UT1 (solar time) within +- 0.9 seconds. A discrepancy between time kept by atomic clocks, and time kept by tracking the rotation speed of the earth occurs because the earth's rotation speed is irregular, and in general is slowing down over time by about one second every 1.5 years. A leap second adjustment keeps UTC time within a second of the average length of a day.

An atomic clock is almost too accurate in the sense that a day isn't exactly 24 hours because of changes in the earth's rotational speed. To keep UTC time in sync with the sun and the stars, a leap second is occasionally added, and theoretically could be subtracted if the earth's rotation speed increases.  

At the time of this writing, 27 leap seconds have been added since the practice began in 1972. The International Earth Rotation and Reference Systems Service (IERS) determines when a leap second will be added. This practice is referred to as "leap second insertion". When a leap second is inserted, the time nearing midnight proceeds from 23:59:59 (hours:minutes:seconds) to 23:59:60 (the inserted leap second), and then to 0:0:0 (midnight), thus 'inserting' a second to UTC time. In the past, leap seconds have been added either on June 30 or December 31.

UTC time started out 10 seconds behind TAI (atomic time). Given the insertion of 27 leap seconds, UTC time is currently 37 seconds behind TAI (atomic clock) time.

`is_clock(utc_clock)` returns **true**.

## Members

|Name|Description|
|----------|-----------------|
|[from_sys](#from_sys)| Static. Converts a `sys_time` to a `utc_time`.|
|[now](#now)| Static. Returns the current time.|
|[to_sys](#to_sys)| Static. Converts this `utc_time` to a `sys_time`.|

## Non-members

| Name | Description |
|--|--|
| [`get_leap_second_info`](chrono-functions.md#std-chrono-get-leap-second-info) | Get information about whether the supplied time specifies a time when a leap second was inserted, and the sum of all the leap seconds between January 1, 1970 and the specified duration. |

## Public typedefs

|Name|Description|
|----------|-----------------|
|`utc_clock::duration`|A synonym for `duration<rep, period>` which is a duration of time specified by user-defined units (such as integer, floating point, and so on) and a fraction the represents the time in seconds between each integral value stored in the duration.|
|`utc_clock::period`|A synonym for `system_clock::period`, which is a ratio that represents the number of ticks between two integral values in the representation. For example, a period of 1/1 means one second between ticks; 1/2 means 0.5 seconds between ticks, and so on. |
|`utc_clock::rep`|A synonym for the type used to represent the number of clock ticks in this clock's `utc_clock::duration`. For example, it could be an integer, floating point, user-defined class, and so on. |
|`utc_clock::time_point`|A synonym for `time_point<clock, duration>`, where `clock` is a synonym for either the clock type itself or another clock type that is based on the same epoch and has the same nested `duration` type.|

## Public Constants

|Name|Description|
|----------|-----------------|
|[utc_clock::is_steady constant](#is_steady_constant)|Specifies whether the clock type is steady.|

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="from_sys"></a> from_sys

Static method that converts a `sys_time` to a `utc_time`.

```cpp
template<class Duration>
static utc_time<common_type_t<Duration, seconds>>
from_sys(const sys_time<Duration>& t);
```

### Parameters

*t*\
The `sys_time` to convert.

### Return value

A `utc_time` set to the time that most closely approximates the `sys_time` *`t`*. If a direct mapping doesn't exist, the time_point during a leap second insertion and the last representable value of `sys_time` prior to the insertion of the leap second is returned.

## <a name="to_sys"></a> to_sys

Static method that converts a `utc_time` to a `sys_time`.

```cpp
template<class Duration>
static sys_time<common_type_t<Duration, seconds>>
to_sys(const utc_time<Duration>& t);
```

### Parameters

*t*\
The `utc_time` to convert.

### Return Value


## <a name="is_steady_constant"></a> is_steady

Static value that specifies whether the clock type is *steady*. In this implementation, `is_steady_constant` is always **`false`**.

```cpp
static const bool is_steady = false;
```

## <a name="now"></a> now

Static method that returns the current UTC time, accounting for leap seconds.

```cpp
static time_point now() noexcept;
```

### Return Value

A [time_point](../standard-library/time-point-class.md) object that represents the current time. The returned time point is effectively `from_sys(system_clock::now())`.


## <a name="to_time_t"></a> to_time_t

Static method that returns a [`time_t`](../c-runtime-library/standard-types.md) that most closely approximates the time that is represented by *Time*.

```cpp
static time_t to_time_t(const time_point& Time) noexcept;
```

### Parameters

*Time*\
A [time_point](../standard-library/time-point-class.md) object.

## See also

[`<chrono>`](../standard-library/chrono.md)\
[`steady_clock` struct](../standard-library/steady-clock-struct.md)\
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
