---
description: "Learn more about: high_resolution_clock struct"
title: high_resolution_clock struct
ms.custom: ""
ms.date: 08/19/2021
ms.technology: "cpp-standard-libraries"
ms.topic: "reference"
f1_keywords: ["chrono/std::chrono::high_resolution_clock", chrono/std::chrono::high_resolution_clock::now", "chrono/std::chrono::high_resolution_clock::is_steady constant"]
helpviewer_keywords: ["std::chrono [C++], high_resolution_clock"]
dev_langs: ["C++"]
author: "tylermsft"
ms.workload: ["cplusplus"]
---
# `high_resolution_clock` struct

Represents a *high_resolution* clock with the smallest possible tick period. Specifically, the period is a nanosecond, or `ratio<1, 1000000000>`

In Microsoft's implementation, `high_resolution_clock` is a synonym for [`steady_clock`](steady-clock-struct.md).

## Syntax

```cpp
using high_resolution_clock = steady_clock;
```

## Members

### Convenience type aliases

|Name|Description|
|----------|-----------------|
|`high_resolution_clock::duration`|In Microsoft's implementation, it's a synonym for `nanoseconds`, which is defined as `duration<long long, nano>`. It represents a duration of time measured in billionths of a second.|
|`high_resolution_clock::period`|In Microsoft's implementation, it's a synonym for `nano`, which is defined as `std::ratio<1i64, 1000000000i64>` . It represents the time in seconds (one billionth of a second) between each tick in the duration.|
|`high_resolution_clock::rep`|A synonym for **`long long`**, which is the type used in the Microsoft implementation to represent the number of clock ticks in a `high_resolution_clock::duration`.|
|`high_resolution_clock::time_point`|A synonym for `time_point<steady_clock>`. Used to represent a `time_point` for this clock.|

## Functions

|Name|Description|
|-|-|
|`now`|Returns the current `high_resolution_clock` time.|

## Constants

|Name|Description|
|----------|-----------------|
|`is_steady`|Holds **`true`**. A `high_resolution_clock` is *steady*. That means you can use this clock to take the time before an event, the time after an event, and reliably subtract them to get the duration of the event because the clock won't be adjusted during that time. |

## See also

[`<chrono>`](chrono.md)\
[`file_clock class`](file-clock-class.md)\
[`gps_clock class`](gps-clock-class.md)\
[`local_t` struct](local_t.md)\
[`steady_clock` struct](steady-clock-struct.md)\
[`system_clock` struct](system-clock-structure.md)\
[`tai_clock` class](tai-clock-class.md)\
[`utc_clock` class](utc-clock-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)
