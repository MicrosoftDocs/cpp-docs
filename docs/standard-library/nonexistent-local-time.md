---
description: "Learn more about: nonexistent_local_time class"
title: "nonexistent_local_time class"
ms.date: 10/08/2021
f1_keywords: ["chrono/std::chrono::nonexistent_local_time", "chrono/std::chrono::nonexistent_local_time::what"]
helpviewer_keywords: ["std::chrono [C++],  nonexistent_local_time"]
dev_langs: ["C++"]
---

# `nonexistent_local_time` class

This exception is thrown when attempting to convert a `local_time` to a non-existent `sys_time`.

## Syntax

```cpp
class nonexistent_local_time : public runtime_error; // c++ 20
```

## Remarks

During the transition from standard time to daylight saving time in the spring, clocks essentially lose an hour. This can be confusing because doesn't the transition to daylight saving time mean adding an hour? By "springing forward" an hour, the hour following the transition is effectively removed. Consider the change to daylight saving time in New York, which happens on the second Sunday in March at 2am. At 2am, the clock transitions to daylight savings time and now reads 3:00am. If the `local_time` being converted is 2:30am, for example, that time is during the period that was "removed" and so is "nonexistent".

The following example demonstrates a nonexistent time conversion error. In this example, daylight saving time in New York starts at 2:00am. The time being converted is 2:30am. That's during the hour that is removed because of the transition from standard time to daylight saving time. So, a `nonexistent_local_time` exception is thrown.

## Example: `nonexistent_local_time`

```cpp
#include <chrono>
#include <iostream>

using namespace std::chrono;
    
int main()
{
    try
    {
        // The following will throw an exception because the local time being converted is during
        // the hour that is "removed" when the clock advances an hour for daylight saving time.
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