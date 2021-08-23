---
description: "Learn more about: steady_clock struct"
title: "steady_clock struct"
ms.date: 08/19/2021
f1_keywords: ["chrono/std::chrono::steady_clock"]
---
# steady_clock struct

Represents a *steady* clock.

## Syntax

```cpp
struct steady_clock;
```

## Remarks

A `steady_clock` is a monotonic clock, which means that time only moves forward. A `steady_clock` ensures that the time between clicks doesn't vary, making it better for measuring intervals than using a system clock that provides wall-clock time. The problem with using wall-clock time to measure elapsed time is that the wall-clock time may get modified while measuring an interval. It could be modified by synchronizing with another clock over the network, adjusting the time for daylight savings time, and so on. A `steady_clock` isn't subject to these adjustments, making it the preferred way to keep track of elapsed time.

The value that is returned by a first call to `now` is always less than or equal to the value that is returned by the next call to `now`.

`high_resolution_clock` is a typedef for `steady_clock`. On Windows, `steady_clock` wraps the `QueryPerformanceCounter` function.

### Public typedefs

|Name|Description|
|----------|-----------------|
|`steady_clock::duration`|In Microsoft's implementation, it's a synonym for `nanoseconds`, which is defined as `duration<long long, nano>`. It represents a duration of time measured in billionths of a second. |
|`steady_clock::period`|In Microsoft's implementation, it's a synonym for `nano`, which is defined as `std::ratio<1i64, 1000000000i64>` . It represents the time in seconds (one billionth of a second) between each tick in the duration.|
|`steady_clock::rep`|A synonym for **`long long`**, which is the type used in the Microsoft implementation to represent the number of clock ticks in a `steady_clock::duration`|
|`steady_clock::time_point`|A synonym for `time_point<steady_clock>`. Used to represent a `time_point` for this clock. |

## Public functions

|Function|Description|
|--------------|-----------------|
|`now`|Returns the current time from the `steady_clock` as a `time_point` value.|

## Public constants

|Name|Description|
|----------|-----------------|
|`steady_clock::is_steady`|Holds **`true`**. A `steady_clock` is *steady*. That means you can use this clock to get the time before an event, the time after an event, and reliably subtract them to get the duration of the event because the clock won't be adjusted during that time.|

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

[`<chrono>`](chrono.md)\
[`file_clock class`](file-clock-class.md)\
[`high_resolution_clock`](high-resolution-clock-struct.md)\
[`local_t` struct](local_t.md)\
[`system_clock` struct](system-clock-structure.md)\
[`tai_clock` class](tai-clock-class.md)\
[`utc_clock` class](utc-clock-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)