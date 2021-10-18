---
description: "Learn more about: file_clock class"
title: "file_clock class"
ms.date: 08/19/2021
f1_keywords: ["chrono/std::chrono::file_clock", "chrono/std::chrono::file_clock::now", "chrono/std::chrono::file_clock::to_utc", "chrono/std::chrono::file_clock::from_utc", "chrono/std::chrono::file_clock::is_steady Constant"]
---

# `file_clock` class

This clock can represent the range and resolution of file time values used in the file system.

## Syntax

```cpp
using file_clock = std::filesystem::_File_time_clock. // C++20
```

## Remarks

In the Microsoft implementation, the epoch, or the time from which the `file_clock` starts measuring time,  is 1/1/1601 00:00:00.

The ISO C++ Standard provides a choice between providing `to_sys()` and `from_sys()`, or `to_utc()` and `from_utc()`. The Microsoft implementation chose [to_utc](#to_utc) and [from_utc](#from_utc).

## Members

|Name|Description|
|----------|-----------------|
|[`from_utc`](#from_utc)| Static. Converts a `utc_time` to a `file_time`.|
|[`now`](#now)| Static. Returns the current International Atomic Time. |
|[`to_utc`](#to_utc)| Static. Converts a `file_time` to `utc_time`.|

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `file_clock` from the given stream using the specified format. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output  `file_time` to the given stream. |

## Convenience type aliases

|Name|Description|
|----------|-----------------|
|`file_clock::duration`|In Microsoft's implementation, it's a synonym for `duration<long long, ratio<1, 10'000'000>`. It represents a duration of time measured in units of 100 nanoseconds.|
|`file_clock::time_point`| A synonym for `time_point<File_time_clock>`. Used to represent a `time_point` for this clock.|
|`file_clock::period`|In Microsoft's implementation, it's a synonym for `ratio<1, 10'000'000>`. It represents the time in seconds (100 nanoseconds) between each tick in the duration.|
|`file_clock::rep`|A synonym for the type (`long long`)  used to represent the integral units in this clock's `file_clock::duration`.|

**Related**

|Name|Description|
|----------|-----------------|
|`file_time`|A synonym for `time_point<file_clock, Duration>`. Represents a `time_point` for a [`file_clock`](file-clock-class.md). You specify the `Duration`. Defined in `std::chrono`|

## Public constants

|Name|Description|
|----------|-----------------|
|[`file_clock::is_steady constant`](#is_steady_constant)|Indicates whether the clock type is steady. Its value is `false`.|

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="from_utc"></a> `from_utc`

Static method that converts a `utc_time` to a `file_time`.

```cpp
template <class Duration>
static file_time<common_type_t<_Duration, chrono::seconds>>
from_utc(const utc_time<Duration>& t);
```

### Parameters

*`t`*\
The `utc_time` to convert.

### Return value

A `file_time` that represents the equivalent `utc_time` as *`t`*. It's calculated as `utc_clock::to_sys(utc_time).time_since_epoch()` minus the number of leap seconds before January 1, 2017 (27). Windows 10 version 1809 and Windows Server 2019 introduced support for leap seconds. That support is enabled by default, though it can be disabled. When enabled, only leap seconds after July 2018 (not the ones between January 1, 2017 and July 2018) are included in the time.

We recommend you use `std::chrono::clock_cast` to convert time points between clocks rather than call this function directly. This is particularly relevant for `file_clock` because the ISO C++ Standard allows this type to define either `to_utc` and `from_utc`, or `to_sys` and `from_sys`. Since which is implemented may vary by vendor, you can use `clock_cast` instead, which is provided by all library vendors.

### Example: `from_utc`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    std::cout << clock_cast<file_clock>(utc_clock::now());

    return 0;
}
```

```output
2021-08-17 00:20:41.2594557
```

## <a name="to_utc"></a> `to_utc`

Static method that converts a `file_time` to a `utc_time`.

```cpp
template <class Duration>
static utc_time<common_type_t<Duration, seconds>>
to_utc(const file_time<Duration>& t);
```

### Parameters

*`t`*\
The `file_time` to convert.

### Return Value

A `utc_time` that represents the equivalent `file_time` as *`t`*. We recommend you use `std::chrono::clock_cast` to convert time points between clocks, rather than call this function directly. This is particularly relevant for `file_clock` because the ISO C++ Standard allows this type to define either `to_utc` and `from_utc`, or `to_sys` and `from_sys`. Since which is implemented may vary by vendor, you can use `clock_cast` instead, which is provided by all library vendors.

### Example: `to_utc`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    std::cout << clock_cast<std::chrono::utc_clock>(file_clock::now());

    return 0;
}
```

```output
2021-08-17 00:20:41.2594557
```

## <a name="is_steady_constant"></a> `is_steady`

Static value that specifies whether the clock type is *steady*. In the Microsoft implementation, `is_steady` is **`false`**. This makes this clock unsuitable for measuring how long an operation takes because an unsteady clock can be adjusted while you're timing something so the measured time may be off or even negative. Use a [`high_resolution_clock`](high-resolution-clock-struct.md) to time events, instead.

```cpp
static const bool is_steady = false;
```

## <a name="now"></a> now

Static method that returns the current system time, with nanosecond resolution, adjusted by the epoch of the `file_clock`.

```cpp
static time_point now() noexcept;
```

### Return Value

A [time_point](time-point-class.md) object that represents the current time.

## See also

[`<chrono>`](chrono.md)\
[`gps_clock class`](gps-clock-class.md)\
[`high_resolution_clock`](high-resolution-clock-struct.md)\
[`local_t` struct](local_t.md)\
[`steady_clock` struct](steady-clock-struct.md)\
[`system_clock` struct](system-clock-structure.md)\
[`tai_clock` class](tai-clock-class.md)\
[`utc_clock` class](utc-clock-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)
