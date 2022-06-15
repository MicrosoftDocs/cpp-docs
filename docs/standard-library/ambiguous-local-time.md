---
description: "Learn more about: ambiguous_local_time class"
title: "ambiguous_local_time class"
ms.date: 10/08/2021
f1_keywords: ["chrono/std::chrono::ambiguous_local_time", "chrono/std::chrono::ambiguous_local_time::what"]
helpviewer_keywords: ["std::chrono [C++],  ambiguous_local_time"]
dev_langs: ["C++"]
---

# `ambiguous_local_time` class

This exception is thrown when attempting to convert a `local_time` to a `sys_time` and the result can be one of two times and neither `choose::earliest` or `choose::latest` was specified to settle the ambiguity.

## Syntax

```cpp
class ambiguous_local_time : public runtime_error; // C++ 20
```

## Remarks

During the transition from daylight saving time to standard time in the fall, clocks essentially gain an extra hour. This can be confusing because doesn't the transition to standard time mean losing an hour? By falling back an hour, the hour before the transition will be repeated after the clock adjusts for standard time. Consider the change to standard time in New York, which happens on the first Sunday in November at 2:00am. First, 1:00am goes by. At 2am, the clock transitions to standard time, so now it's 1:00am again. That means the time between 1am and 2am will be "repeated", effectively adding an hour.

If a `local_time` specifies a time during this "extra" hour, it isn't clear how to convert it. Should the converted time be treated as the "first" time that hour happens, or the "second"? If the enum [`choose`](choose-enum.md) isn't specified to indicate which it should be, you'll get an [`ambiguous_local_time`](ambiguous-local-time.md) exception.

This problem doesn't exist when converting from standard time to daylight saving time. In that case, a different problem can arise. See [`nonexistent_local_time`](nonexistent-local-time.md) for details.

The following example shows an ambiguous conversion.

## Example: `ambiguous_local_time`

```cpp
#include <chrono>
#include <iostream>

using namespace std::chrono;
    
int main()
{
    try
    {
        // The following will throw an exception because converting 1:30am local time to system time could be interpreted as either 
        // 1:30 AM EDT or 1:30 AM EST. Which to choose isn't specified for the conversion, so an ambiguous_local_time
        // exception is thrown.
        auto zt = zoned_time{"America/New_York", local_days{Sunday[1]/November/2016} + 1h + 30min};
    } catch (const ambiguous_local_time& e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}
```

```output
2016-11-06 01:30:00 is ambiguous. It could be
2016-11-06 01:30:00 EDT == 2016-11-06 05:30:00 UTC or
2016-11-06 01:30:00 EST == 2016-11-06 06:30:00 UTC
```

## Members

|Name|Description|
|----------|-----------------|
| [Constructor](#ctor) | Construct an `ambiguous_local_time`. |
| [`what`](#what) | Gets a string that describes the nature of the ambiguity. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="ctor"></a> Constructors

Constructs a `ambiguous_local_time`.

```cpp
template<class Duration>
ambiguous_local_time(const local_time<Duration>& tp, const local_info& i);
```

### Parameters

*`tp`*\
The `local_time` that couldn't be converted.

*`i`*\
Information about the attempted conversion. See [`local_info`](local-info-struct.md) for details.

### Remarks

You typically won't create this exception. It's thrown by functions that convert a `local_time` to a `sys_time`.

## <a name="what"></a> `what`

Gets a string describing the details of the ambiguity.

```cpp
[nodiscard] virtual const char* what() const noexcept;
```

### Return value

A string describing the ambiguity. For example:

```output
2016-11-06 01:30:00 is ambiguous. It could be
2016-11-06 01:30:00 EDT == 2016-11-06 05:30:00 UTC or
2016-11-06 01:30:00 EST == 2016-11-06 06:30:00 UTC
```

## See also

[`<chrono>`](../standard-library/chrono.md)\
[`to_sys` ](month-day-class.md)\
[`nonexistent_local_time`](nonexistent-local-time.md)\
[Header Files Reference](cpp-standard-library-header-files.md)