---
description: "Learn more about: fiile_clock class"
title: "fiie_clock class"
ms.date: 08/16/2021
f1_keywords: ["chrono/std::chrono::file_clock", "chrono/std::chrono::file_clock::from_stream", "chrono/std::chrono::file_clock::now", "chrono/std::chrono::file_clock::to_utc", "chrono/std::chrono::file_clock::from_utc", "chrono/std::chrono::file_clock::is_steady Constant"]
---

# file_clock class

This clock is for working with file timestamps. It can represent the range and resolution of file times values in the file system.

## Syntax

```cpp
using std::chrono::file_clock = std::filesystem::_File_time_clock. // C++20
```

## Remarks

In the Microsoft implementation, the epoch, or the time from which the `file_clock` starts measuring time,  is `1/1/1601 00:00:00`.

The standard allows a choice between providing `to_sys()`, `from_sys()` or `to_utc()`, `from_utc()`. The Microsoft implementation of `file_clock` provides [to_utc](#to_utc) and [from_utc](#from_utc).

## Members

|Name|Description|
|----------|-----------------|
|[from_utc](#from_utc)| Static. Converts a `utc_time` to a `file_time`.|
|[now](#now)| Static. Returns the current International Atomic Time. |
|[to_utc](#to_utc)| Static. Converts a `file_time` to `utc_time`.|

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `file_clock` from the given stream using the specified format. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output  `file_clock::now()` to the given stream. |

## Public typedefs

|Name|Description|
|----------|-----------------|
|`file_time`| A synonym for `template <class _Duration> using file_time = time_point<filesystem::_File_time_clock, _Duration>;`|

## Public constants

|Name|Description|
|----------|-----------------|
|[file_clock::is_steady constant](#is_steady_constant)|Indicates whether the clock type is steady. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="from_utc"></a> from_utc

Static method that converts a `utc_time` to a `file_time`.

```cpp
template <class Duration>
static file_time<common_type_t<_Duration, chrono::seconds>>
from_utc( const utc_time<Duration>& t);
```

### Parameters

*`t`*\
The `utc_time` to convert.

### Return value

A `file_time` that represents the equivalent `utc_time` as *`t`*. It's calculated as `utc_clock::to_sys(_Utc_time).time_since_epoch()` minus the number of leap seconds since Jan 1, 2017 (27). 

Use `std::chrono::clock_cast`, to convert time points between clocks, rather than call this function directly.

### Example: `from_utc`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    std::cout << clock_cast<std::chrono::file_clock>(utc_clock::now()) << "\n";

    return 0;
}
```

```output
2021-08-17 00:20:41.2594557
```

## <a name="to_utc"></a> to_utc

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

A `utc_time` that represents the equivalent `file_time` as *`t`*. Use `std::chrono::clock_cast`, to convert time points between clocks, rather than call this function directly.

### Example: `to_utc`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    std::cout << "\n" << clock_cast<std::chrono::utc_clock>(file_clock::now()) << "\n";

    return 0;
}
```

```output
2021-08-17 00:20:41.2594557
```

## <a name="is_steady_constant"></a> is_steady

Static value that specifies whether the clock type is *steady*. In the Microsoft implementation, `is_steady_constant` is **`false`**. This makes this clock unsuitable for measuring how long an operation takes because an unsteady clock can be adjusted while you are timing something so the measured time may be off or even negative. Use a [`high_resolution_clock`](high-resolution-clock-struct.md), instead.

```cpp
static const bool is_steady = false;
```

## <a name="now"></a> now

Static method that returns the current system time, with nanosecond resolution, adjusted by the epoch of the `file_clock`.

```cpp
static time_point now() noexcept;
```

### Return Value

A [time_point](time-point-class.md) object that represents the current time. The returned time point is effectively `time_point(duration(_Xtime_get_ticks() + __std_fs_file_time_epoch_adjustment))`.

## See also

[`<chrono>`](chrono.md)\
[`high_resolution_clock`](high-resolution-clock-struct.md)\
[`steady_clock` struct](steady-clock-struct.md)\
[`system_clock` struct](system-clock-structure.md)\
[`tai_clock` class](tai-clock-class.md)\
[`utc_clock` class](utc-clock-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)