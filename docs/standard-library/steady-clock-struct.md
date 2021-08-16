---
description: "Learn more about: steady_clock struct"
title: "steady_clock struct"
ms.date: 07/27/2021
f1_keywords: ["chrono/std::chrono::steady_clock"]
---
# steady_clock struct

Represents a *steady* clock.

## Syntax

```cpp
struct steady_clock;
```

## Remarks

On Windows, `steady_clock` wraps the `QueryPerformanceCounter` function.

A `steady_clock` is a monotonic clock, which means that time measurement only moves forward. A `steady_clock` also ensures that the time between clicks doesn't vary, making it better for measuring intervals than using a system clock, which provides wall-clock time. The problem with using wall-clock time to measure elapsed time is that the wall-clock time may get modified while measuring an interval. It could be modified by synchronizing with another clock over the network, adjusting the time for daylight savings time, and so on. A `steady_clock` isn't subject to these adjustments, making it the preferred way to keep track of elapsed time.

The value that is returned by a first call to `now` is always less than or equal to the value that is returned by the next call to `now`.

`high_resolution_clock` is a typedef for `steady_clock`.

### Public typedefs

|Name|Description|
|----------|-----------------|
|`steady_clock::duration`|A synonym for `nanoseconds`, defined in `<chrono>`. The duration specified for this clock. It represents the time in billionths of a second between each integral value stored in the duration.|
|`steady_clock::period`|A synonym for `nano`, defined in `<ratio>` . It represents the time in billionths of a second between two integral values in the duration.|
|`steady_clock::rep`|A synonym for **`long long`**, which is the type that is used to represent the number of clock ticks in the `steady_clock::duration`|
|`steady_clock::time_point`|A synonym for `chrono::time_point<steady_clock>`.|

## Public functions

|Function|Description|
|--------------|-----------------|
|`now`|Returns the current time as a `time_point` value.|

## Public constants

|Name|Description|
|----------|-----------------|
|`steady_clock::is_steady`|Holds **`true`**. A `steady_clock` is *steady*.|

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

## See also

- [`<chrono>`](chrono.md)
- [system_clock Structure](system-clock-structure.md)
- [Header Files Reference](cpp-standard-library-header-files.md)
