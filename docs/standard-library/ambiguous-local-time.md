---
description: "Learn more about: ambiguous_local_time class"
title: "ambiguous_local_time class"
ms.date: 09/29/2021
f1_keywords: ["chrono/std::chrono::ambiguous_local_time", "chrono/std::chrono::ambiguous_local_time::what"]
helpviewer_keywords: ["std::chrono [C++],  ambiguous_local_time"]
---

# `ambiguous_local_time` class

The error thrown when attempting to convert a `local_time` to a `sys_time`, but the result is ambiguous and neither `choose::earliest` or `choose::latest` were specified to settle the ambiguity.

## Syntax

```cpp
class ambiguous_local_time : public runtime_error; // c++ 20
```

## Remarks

If a `local_time` lands during the gap between standard and daylight saving time, converting it to a `sys_time` results in two potential times that the `local_time` could be converted to, or it may be that the converted time corresponds to a time that doesn't exist.

For example, if the `local_time` is on the transition to daylight saving time, then the clock is "springing forward" an hour, so there’s an hour that doesn’t exist. If the `local_time` is on a transition to standard time, that is, the clock is "falling back", then there’s an extra hour that's being inserted.

In either case, if the `local_time` is during that hour, should it take on the value of the hour it is in or the adjusted time? If the [`choose`](choose-enum.md) is not specified to indicate which it should be, you'll get either an `ambiguous_local_time` or [`nonexistent_local_time`](nonexistent-local-time.md) exception.

The following example demonstrates an ambiguous conversion.

## Example: `ambiguous_local_time`

```cpp
#include <chrono>
#include <iostream>

using namespace std::chrono;
    
int main()
{
    try
    {
        // The following will throw an exception because the converted time could be interpreted as either 
        // 1:30 EDT or 1:30 EST. Because which one to choose isn't specified for the conversion, an ambiguous_local_time
        // exception is thrown.
        auto zt = zoned_time{"America/New_York", local_days{Sunday[1]/November/2016} + 1h + 30min}; // a time that lands during the transition from daylight saving time to standard time.
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
The `local_time` that failed conversion.

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