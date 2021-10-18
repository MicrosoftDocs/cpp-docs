---
description: "Learn more about: local_info struct"
title: "local_info struct"
ms.date: 10/05/2021
f1_keywords: ["chrono/std::chrono::local_info"]
---
# `local_info` struct

Provides a low-level interface to time zone information about the result of converting a `local_time` to a `sys_time`.

## Syntax

```cpp
struct local_info;
```

## Members

|Function|Description|
|---------|-------------|
|[`result`](#result)| A code describing the result of the conversion.|
|[`first`, `second`](#firstsecond)| The result of the conversion. |

## Member constants

|Name|Value|Description|
|------|------|-------------|
|`unique` | 0 | The result of the conversion is unique. |
|`nonexistent` | 1 | There isn't a corresponding `sys_time` to convert the `local_time` to. |
|`ambiguous` | 2 | The result of the conversion is ambiguous. |

## Non-members

|Function|Description|
|---------|-------------|
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `local_info` to a stream. |

## <a name="result"></a> `result`

The result of converting a `local_time` to a `sys_time`.

```cpp
int result;
```

### Return value

The result can be one of the following values: 
- `unique`: The `local_time` was successfully converted to a `sys_time`.
- `nonexistent`: There isn't a mapping from the `local_time` to the `sys_time`.
- `ambiguous`: The `local_time` lands during a transition between daylight saving time and standard time and so could be converted to two `sys_time` values.

### Remarks

For information about how `first` and `second` are set based on `result`, see the following section about [`first`, `second`](#firstsecond).

## <a name="firstsecond"></a> `first`, `second`

Provides the result of converting a `local_time` to a `sys_time`.

```cpp
sys_seconds begin;
sys_seconds end;
```

### Return value

`first` and `second` are set based on `result` as follows:

|`result`|`first`|`second`|
|---------|-------|-------|
|`unique`| Contains the value of `local_time` converted to `sys_time`| zero-initialized |
|`nonexistent`| A `sys_info` that ends just before the `local_time`|A `sys_info` that begins just after the `local_time`.|
| `ambiguous` | A `sys_info` that ends just after the `local_time` | A `sys_info` that starts just before the `local_time`.|

**`ambiguous` result code**

During the transition from daylight saving time to standard time in the fall, clocks essentially gain an extra hour. This can be confusing because doesn't the transition to standard time mean losing an hour? By falling back an hour, the hour before the transition will be repeated after the clock adjusts for standard time. Consider the change to standard time in New York, which happens on the first Sunday in November at 2:00am. First, 1:00am goes by. At 2am, the clock transitions to standard time, so now it's 1:00am again. That means the time between 1am and 2am will be "repeated", effectively adding an hour. See [`ambiguous_local_time`](ambiguous-local-time.md#example-ambiguous_local_time) for an example.

If a `local_time` specifies a time during this "extra" hour, it isn't clear how to convert it. Should the converted time be treated as the "first" time that hour happens, or the "second"? If the enum [`choose`](choose-enum.md) isn't specified to indicate which it should be, expect `result` to be set to `ambiguous`, and `first` and `second` will reflect the two choices for what the time the `local_time` could be converted to.

**`nonexistent` result code**

During the transition from standard time to daylight saving time in the spring, clocks essentially lose an hour. This can be confusing because doesn't the transition to daylight saving time mean adding an hour? By "springing forward" an hour, the hour following the transition is effectively removed. Consider the change to daylight saving time in New York, which happens on the second Sunday in March at 2am. At 2am, the clock transitions to daylight savings time and now reads 3:00am. If the `local_time` being converted is 2:30am, for example, that time is during the period that was "removed" and so you can expect `result` to have the `nonexistent` code. See [`nonexistent_local_time`](nonexistent-local-time.md#example-nonexistent_local_time) for an example.

## Example: get a `local_info`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    const auto& timeZoneDatabase = get_tzdb();
    const auto& currentZone = timeZoneDatabase.current_zone();

    local_time<system_clock::duration> lt = currentZone->to_local(system_clock::now());

    auto localInfo = currentZone->get_info(lt);

    std::cout << "local_time: " << lt << "\n";
    std::cout << localInfo << "\n";

    return 0;
}
```

```output
local_time: 2021-09-08 15:37:57.6853963
result: unique, first: (begin: 2021-03-14 10:00:00, end: 2021-11-07 09:00:00, offset: -25200s, save: 60min, abbrev: PDT)
```

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

[`<chrono>`](chrono.md)\
[`ambiguous_local_time` exception](ambiguous-local-time.md#example-ambiguous_local_time)\
[`choose` enum](choose-enum.md)\
[`file_clock` class](file-clock-class.md)\
[`high_resolution_clock`](high-resolution-clock-struct.md)\
[`local_t` struct](local_t.md)\
[`non_existent` exception](nonexistent-local-time.md)\
[`system_clock` struct](system-clock-structure.md)\
[`tai_clock` class](tai-clock-class.md)\
[`utc_clock` class](utc-clock-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)