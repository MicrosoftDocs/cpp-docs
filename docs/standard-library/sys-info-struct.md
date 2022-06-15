---
description: "Learn more about: sys_info struct"
title: "sys_info struct"
ms.date: 09/08/2021
f1_keywords: ["chrono/std::chrono::sys_info"]
helpviewer_keywords: ["std::chrono [C++], sys_info"]
dev_langs: ["C++"]
---
# `sys_info` struct

Provides a low-level interface to time zone information.

## Syntax

```cpp
struct sys_info;
```

## Remarks

Provides a low-level interface to time zone information about the result of converting a `sys_time` to a `local_time`.

## Members

|Function|Description|
|---------|-------------|
|[`abbrev`](#abbrev)|The abbreviation used for the associated `time_zone` and `time_point.`|
|[`begin`, `end`](#beginend)|The range that the `offset` and `abbrev` apply to for the associated time zone.|
|[`offset`](#offset)|The Universal Time Coordinated (UTC) offset in effect for the associated `time_zone` and `time_point.`|
|[`save`](#save)|Daylight savings time adjustment offset.|

## Non-members

|Function|Description|
|---------|-------------|
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `sys_info` to a stream. |

## <a name="abbrev"></a> `abbrev`

The abbreviation used for the associated `time_zone` and `time_point`.

```cpp
string abbrev;
```

### Return value

The abbreviation.

### Remarks

Abbreviations aren't unique among the `time_zone`s. This means you can't reliably map abbreviations back to a `time_zone` and UTC offset.

## <a name="beginend"></a> `begin`, `end`

Provides the range over the associated time zone, `[begin, end)`, that the `offset` and `abbrev` apply to.

```cpp
sys_seconds begin;
sys_seconds end;
```

### Return value

The returned `sys_seconds` are offsets relative to the associated `time_point`.

## <a name="offset"></a> `offset`

The UTC offset in effect for the associated time zone and `time_point`.

```cpp
seconds offset;
```

### Return value

The relationship between `local_time` and `sys_time` is: `offset = local_time - sys_time`.

## <a name="save"></a> `save`

Indicates whether the `sys_info` is on daylight savings time, and if so, suggests the offset this time zone might use if it weren't on daylight savings time.

```cpp
minutes save;
```

### Return value

If `save != 0min`, the time zone is on daylight saving time at the associated `time_point`. In that case, `offset-save` suggests what offset this `time_zone` might use if it not on daylight saving time.

This offset isn't authoritative. To get an authoritative offset, compare with a query against time zone using a `time_point` that doesn't fall during daylight savings time. That is, compare against a `time_point` that results in a `save` value of zero.

## Example: get a `sys_info`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    sys_time<system_clock::duration> st = system_clock::now();
    
    const auto& timeZoneDatabase = get_tzdb();
    const auto& currentZone = timeZoneDatabase.current_zone();
    auto sysInfo = currentZone->get_info(st);

    std::cout << sysInfo << "\n";

    return 0;
}
```

```output
begin: 2021-03-14 10:00:00, end: 2021-11-07 09:00:00, offset: -25200s, save: 60min, abbrev: PDT
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