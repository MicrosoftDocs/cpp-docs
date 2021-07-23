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

This clock measures time since 00:00:00 UTC on Thursday, January 1, 1970. This clock accounts for leap seconds.

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
| [`get_leap_second_info`](chrono-functions.md#std-chrono-get-leap-second-info) | Get the leap second info. |

## Public typedefs

|Name|Description|
|----------|-----------------|
|`utc_clock::duration`|A synonym for `duration<rep, period>`.|
|`utc_clock::period`|A synonym for `system_clock::period`, which represents the tick period, in seconds. |
|`utc_clock::rep`|A synonym for the type that represents the number of clock ticks in `utc_clock::duration`. |
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

Static method that returns the current time.

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
