---
description: "Learn more about: ambiguous_local_time class"
title: "ambiguous_local_time class"
ms.date: 09/29/2021
f1_keywords: ["chrono/std::chrono::ambiguous_local_time", "chrono/std::chrono::ambiguous_local_time::what"]
helpviewer_keywords: ["std::chrono [C++],  ambiguous_local_time"]
---

# `ambiguous_local_time` class  

Represents the error thrown when a `local_time` is converted to a `sys_time` but the result is ambiguous and neither `choose::earliest` or `choose::latest` are specified to settle the ambiguity.

## Syntax

```cpp
class ambiguous_local_time : public runtime_error; // c++ 20
```

## Remarks

Given a `local_time` in a specific time zone, converting it to a `sys_time` could result in two potential times that it could correspond to if the time crosses a boundary between standard time and daylight saving time.

For example, if the `local_time` is on a daylight saving transition that is "falling back", there’s an extra hour that's being inserted. If the `local_time` is during that hour, should the corresponding time in the time zone be the "first" time that hour happens (which was 60 minutes before daylight saving time took effect), or the "second" time that hour comes around again 60 minutes later? In this case, you'd expect an `ambiguous_local_time` error unless you indicated whether you wanted to get back the "first" or "second" time by using the [`choose`](choose-enum.md) enum.

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
        // 5:30:00 UTC, or 6:30:00 UTC. Because it's not specified in this conversion, an  ambiguous_local_time exception is thrown.
        auto zt = zoned_time{"America/New_York", local_days{Sunday[1]/November/2016} + 1h + 30min}; // a time that lands during the transition from daylight savings time to standard time.
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
| [Constructors](#ctor) | Construct a `ambiguous_local_time`. |
| [`what`](#what) | Gets a string describing the ambiguity. |

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
The local_time that failed conversion.

*`i`*\
Information about the attempted conversion. See [`local_info`](local-info-structure.md) for details.

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
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)