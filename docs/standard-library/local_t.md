---
description: "Learn more about: local_t struct"
title: "local_t struct"
ms.date: 08/18/2021
f1_keywords: ["chrono/std::chrono::local_t"]
---

# local_t struct

A pseudo-clock.

## Syntax

```cpp
struct local_t {}; // C++20
```

## Remarks

This struct is a pseudo-clock. Use it as an argument to the `time_point` template argument to indicate that the time_point represents local time. `local_t` doesn't specify the time zone of the local time.

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `gps_time` from the given stream using the specified format. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output `local_t::now()` to the given stream. |

## Public typedefs

|Name|Description|
|----------|-----------------|
|`local_time`|A synonym for `time_point<std::chrono::local_t, Duration>`, which represents the local time.|
|`local_seconds`|A synonym for `local_time<std::chrono::seconds>`|
|`local_days`|A synonym for l`local_time<std::chrono::days>`|

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

[`<chrono>`](chrono.md)\
[`file_clock class`](file-clock-class.md)\
[`gps_clock class`](gps-clock-class.md)\
[`high_resolution_clock`](high-resolution-clock-struct.md)\
[`steady_clock` struct](steady-clock-struct.md)\
[`system_clock` struct](system-clock-structure.md)\
[`tai_clock` class](tai-clock-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)
