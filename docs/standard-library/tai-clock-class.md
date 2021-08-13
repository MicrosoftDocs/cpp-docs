---
description: "Learn more about: tai_clock class"
title: "tai_clock class"
ms.date: 08/13/2021
f1_keywords: ["chrono/std::chrono::tai_clock", "chrono/std::chrono::tai_clock::from_stream", "chrono/std::chrono::tai_clock::now", "chrono/std::chrono::tai_clock::to_sys", "chrono/std::chrono::tai_clock::from_sys", "chrono/std::chrono::tai_clock::is_steady Constant"]
---

# tai_clock class

This clock reports international atomic time since 00:00:00 on Thursday, January 1, 1958. This clock doesn't account for leap seconds.

## Syntax

```cpp
class tai_clock; // C++20
```

## Remarks

This clock reports International Atomic Time (TAI, from the French *temps atomique international*). International Atomic Time uses a weighted average of many atomic clocks to track time.

It's different from UTC time because a leap second is occasionally added to UTC time to keep the difference between UTC time and UT1 (solar time) within +- 0.9 second. A discrepancy gradually occurs between the time kept by atomic clocks, and the time kept by tracking the rotation speed of the earth, because the earth's rotation speed is irregular and in general is slowing down over time by about one second every 1.5 years. TAI time doesn't keep track of this discrepancy, and as of this writing, it's now 37 seconds ahead of UTC time because of an addition of 10 seconds at the start of 1972 and the leap seconds that have been inserted since 1972.

`is_clock(tai_clock)` returns **true**.

## Members

|Name|Description|
|----------|-----------------|
|[from_utc](#from_utc)| Static. Converts a `utc_time` to a `tai_time`.|
|[now](#now)| Static. Returns the current International Atomic Time. |
|[to_utc](#to_utc)| Static. Converts `tai_time` to `utc_time`.|

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `tai_clock` from the given stream using the specified format. |
| [`get_leap_second_info`](chrono-functions.md#std-chrono-get-leap-second-info) | Get information about whether the supplied time specifies a time when a leap second was inserted, and the sum of all the leap seconds between January 1, 1970 and the specified duration. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `tai_clock` to the given stream. |

## Public typedefs

|Name|Description|
|----------|-----------------|
|`tai_clock::duration`|A synonym for `duration<rep, period>`, which is a fraction that represents the time in seconds between each integral value stored in the duration.|
|`tai_clock::period`| Microsoft's implementation defines this as a synonym for `system_clock::period`, which defines a fraction that represents the time in seconds between two integral values in the representation. For example, a period of 1/1 means one second between ticks, 1/2 means 0.5 seconds between ticks, and so on. |
|`tai_clock::rep`|A synonym for the type used to represent the integral units in this clock's `tai_clock::duration`. |
|`tai_clock::time_point`|A synonym for `chrono::time_point<tai_clock>`|

## Public constants

|Name|Description|
|----------|-----------------|
|[tai_clock::is_steady constant](#is_steady_constant)|Indicates whether the clock type is steady.|

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="from_utc"></a> from_utc

Static method that converts a `utc_time` to a `tai_time`.

```cpp
template <class Duration>
static tai_time<common_type_t<Duration, seconds>>
from_utc(const utc_time<Duration>& t) noexcept;
```

### Parameters

*`t`*\
The `utc_time` to convert.

### Return value

A `tai_time` that represents the equivalent `utc_time` as *`t`*. It's calculated by taking the time since the epoch of the UTC clock and adding `378691210s`. Note that `378691210s == sys_days{1970y/January/1} - sys_days{1958y/January/1} + 10s`

## <a name="to_utc"></a> to_utc

Static method that converts a `tai_time` to a `utc_time`.

```cpp
template<class Duration>
static utc_time<common_type_t<Duration, seconds>>
to_utc(const tai_time<Duration>& t) noexcept;
```

### Parameters

*`t`*\
The `tai_time` to convert.

### Return Value

A `utc_time` that represents the equivalent `tai_time` as *`t`*. It's calculated as `utc_time<common_type_t<Duration, seconds>>{t.time_since_epoch()} - 378691210s`. Note that `378691210s == sys_days{1970y/January/1} - sys_days{1958y/January/1} + 10s`

## <a name="is_steady_constant"></a> is_steady

Static value that specifies whether the clock type is *steady*. In the Microsoft implementation, `is_steady_constant` is **`false`**.

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

## See also

[`<chrono>`](../standard-library/chrono.md)\
[`steady_clock` struct](../standard-library/steady-clock-struct.md)\
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)