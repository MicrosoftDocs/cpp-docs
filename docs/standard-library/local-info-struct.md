---
description: "Learn more about: local_info struct"
title: "local_info struct"
ms.date: 09/08/2021
f1_keywords: ["chrono/std::chrono::local_info"]
---
# `local_info` struct

Provides a low-level interface to time zone information about the result of converting a `local_time` to a `sys_time`.

## Syntax

```cpp
struct local_info;
```

## Remarks

Provides a low-level interface to time zone information about the result of converting a `local_time` to a `sys_time`.

## Members

|Function|Description|
|---------|-------------|
|[`result`](#result)| A code describing the result of the conversion.|
|[`first`, `second`](#firstsecond)| The result of the conversion. |

## Member constants

|Name|Value|Description|
|------|------|-------------|
|`unique` | 0 | The result of the conversion is unique. |
|`nonexistent` | 1 | There isn't a corresponding `sys_time` for the `local_time`. |
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
- `ambiguous`: The `local_time` lands during a transition between daylight saving time and standard time and so could resolve to two `sys_time` values.

### Remarks

For information about how `first` and `second` are set based on `result`, see [`first`, `second`](#firstsecond).

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

If the `local_time` is on a daylight saving transition that is "springing forward", there’s an hour that doesn’t exist. If the `local_time` that is being paired with a time zone is within that hour, expect a `nonexistent` `result` code.

If the `local_time` is on a daylight saving transition that is "falling back", there’s an extra hour that's being inserted. If the `local_time` is during that hour, should the corresponding time in the time zone be the "first" time that hour happens (which was 60 minutes before daylight savings took effect), or the "second" time that hour comes around again 60 minutes later? In this case, you'd expect an `ambiguous` `result` code and `first` and `second` will reflect the two options the `local_time` could be converted to.

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
[`file_clock class`](file-clock-class.md)\
[`high_resolution_clock`](high-resolution-clock-struct.md)\
[`local_t` struct](local_t.md)\
[`system_clock` struct](system-clock-structure.md)\
[`tai_clock` class](tai-clock-class.md)\
[`utc_clock` class](utc-clock-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)