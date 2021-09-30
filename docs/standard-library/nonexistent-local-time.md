---
description: "Learn more about: nonexistent_local_time class"
title: "nonexistent_local_time class"
ms.date: 09/30/2021
f1_keywords: ["chrono/std::chrono::nonexistent_local_time", "chrono/std::chrono::nonexistent_local_time::what"]
helpviewer_keywords: ["std::chrono [C++],  nonexistent_local_time"]
---

# `nonexistent_local_time` class

Represents the error thrown when a `local_time` is converted to a `sys_time` but the result would be a time that doesn't exist.

## Syntax

```cpp
class nonexistent_local_time : public runtime_error; // c++ 20
```

## Remarks

Given a `local_time` in a specific time zone, converting it to a `sys_time` could result in a time that doesn't exist.

For example, if the `local_time` is during the transition to daylight saving time, in which the clock is "springing forward", there’s an hour that doesn't exist because it is "removed" as the clocks "springs forward" an hour. If the `local_time` is during that hour, the conversion would result in a non-existent time.

The following example demonstrates an ambiguous conversion.

## Example: `nonexistent_local_time`

```cpp
#include <chrono>
#include <iostream>

using namespace std::chrono;
    
int main()
{
    try
    {
        // The following will throw an exception because the local time lands during the hour that is removed
        // as clocks move forward another for daylight saving time.
        auto zt = zoned_time{"America/New_York", local_days{Sunday[2]/March/2016} + 2h + 30min};
    } catch (const nonexistent_local_time& e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}
```

```output
2016-03-13 02:30:00 is in a gap between
2016-03-13 02:00:00 EST and
2016-03-13 03:00:00 EDT which are both equivalent to
2016-03-13 07:00:00 UTC
```

## Members

|Name|Description|
|----------|-----------------|
| [Constructors](#ctor) | Construct a `nonexistent_local_time`. |
| [`what`](#ok) | Gets a string describing the non-existent time. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="ctor"></a> Constructors

Constructs a `nonexistent_local_time`.

```cpp
template<class Duration>
nonexistent_local_time(const local_time<Duration>& tp, const local_info& i);
```

### Parameters

*`tp`*\
The local_time that failed conversion.

*`i`*\
Information about the attempted conversion. See [`local_info`](local-info-structure.md) for details.

### Remarks

You typically won't create this exception. It's thrown by functions that convert a `local_time` to a `sys_time`.

## <a name="what"></a> `what`

Gets a string describing why the time is non-existent.

```cpp
[[nodiscard]]virtual const char* what() const noexcept;
```

### Return value

A string describing why the time is non-existent. For example:

```output
2016-03-13 02:30:00 is in a gap between
2016-03-13 02:00:00 EST and
2016-03-13 03:00:00 EDT which are both equivalent to
2016-03-13 07:00:00 UTC
```

## See also

[`<chrono>`](../standard-library/chrono.md)\
[`to_sys` ](month-day-class.md)\
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)