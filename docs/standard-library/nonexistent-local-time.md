---
description: "Learn more about: nonexistent_local_time class"
title: "nonexistent_local_time class"
ms.date: 09/30/2021
f1_keywords: ["chrono/std::chrono::nonexistent_local_time", "chrono/std::chrono::nonexistent_local_time::what"]
helpviewer_keywords: ["std::chrono [C++],  nonexistent_local_time"]
---

# `nonexistent_local_time` class

The exception thrown when attempting to convert a `local_time` to a non-existent `sys_time`.

## Syntax

```cpp
class nonexistent_local_time : public runtime_error; // c++ 20
```

## Remarks

If a `local_time` specifies a time in a time zone during the hour standard time transitioned to daylight saving time, it can't be converted to a `sys_time`. That's because that hour doesn't exist as it is "removed" when the clock "springs forward" an hour for daylight saving time.

The following example demonstrates a nonexistent time conversion. In this example, in 2016 daylight saving time started in New York at 2am. The time being converted is 2:30am. That falls during the hour standard time transitioned to daylight saving time, which hour was removed as the clock advanced an hour for daylight saving time.

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
        // when the clock advances an hour for daylight saving time.
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
| [`what`](#what) | Gets a string describing the non-existent time. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="ctor"></a> Constructor

Constructs a `nonexistent_local_time`.

```cpp
template<class Duration>
nonexistent_local_time(const local_time<Duration>& tp, const local_info& i);
```

### Parameters

*`tp`*\
The local_time that failed conversion.

*`i`*\
Information about the attempted conversion. See [`local_info`](local-info-struct.md) for details.

### Remarks

You typically won't create this exception. It's thrown by functions that convert a `local_time` to a `sys_time`.

## <a name="what"></a> `what`

Gets a string describing why the time is non-existent.

```cpp
[nodiscard] virtual const char* what() const noexcept;
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
[`to_sys`](month-day-class.md)\
[`ambiguous_local_time`](ambiguous-local-time.md)\
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)