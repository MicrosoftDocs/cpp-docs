---
description: "Learn more about: local_t struct"
title: "local_t struct"
ms.date: 09/02/2021
f1_keywords: ["chrono/std::chrono::local_t", chrono/std::chrono::local_t:local_time", "chrono/std::chrono::local_days", "chrono/std::chrono::local_seconds"]
helpviewer_keywords: ["std::chrono [C++], local_t"]
dev_langs: ["C++"]
---

# `local_t` struct

A pseudo-clock.

## Syntax

```cpp
struct local_t {}; // C++20
```

## Remarks

Use this struct as an argument to the `time_point` template to indicate that a `time_point` represents local time. Specifying `local_t` doesn't specify the time zone of the local time.

As an example of how `local_t` is used, consider the declaration `local_days ld{Sunday[1] / January / 2021};` This ultimately resolves to `time_point<local_t, duration<long long>;` where `local_t` indicates that the time_point represents local time.

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `local_time` from the given stream using the specified format. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `local_time` to the given stream. |

## Related typedefs

|Name|Description|
|----------|-----------------|
|`local_days`|A synonym for l`local_time<days>`. Defined in `std::chrono`.|
|`local_seconds`|A synonym for `local_time<seconds>`. Defined in `std::chrono`.|
|`local_time`|A synonym for `template <class Duration> using local_time = time_point<local_t, Duration>`. Useful for representing a `time_point` for a local time. You specify the `Duration`. Defined in `std::chrono`.|

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## See also

[`<chrono>`](chrono.md)\
[`file_clock class`](file-clock-class.md)\
[`gps_clock class`](gps-clock-class.md)\
[`high_resolution_clock`](high-resolution-clock-struct.md)\
[`steady_clock` struct](steady-clock-struct.md)\
[`system_clock` struct](system-clock-structure.md)\
[`tai_clock` class](tai-clock-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)
