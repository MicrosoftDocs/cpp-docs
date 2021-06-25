---
description: "Learn more about: &lt;chrono&gt;"
title: "&lt;chrono&gt;"
ms.date: 06/16/2021
f1_keywords: ["<chrono>", "chrono/std::chrono::nanoseconds", "chrono/std::chrono::minutes", "chrono/std::chrono::seconds", "chrono/std::chrono::hours", "chrono/std::chrono::milliseconds", "chrono/std::chrono::microseconds"]
---
# `<chrono>`

Include the standard header `<chrono>` to define classes and functions that represent and manipulate time durations and time instants.

Beginning in Visual Studio 2015, the implementation of `steady_clock` has changed to meet the C++ Standard requirements for steadiness and monotonicity. `steady_clock` is now based on `QueryPerformanceCounter()`, and `high_resolution_clock` is now a typedef for `steady_clock`. As a result, in the Microsoft C++ compiler `steady_clock::time_point` is now a `typedef` for `chrono::time_point<steady_clock>`; however, this rule isn't necessarily the case for other implementations.

## Requirements

**Header:** `<chrono>`

**Namespace:** `std`

## Members

### Classes

| Name | Description |
|--|--|
| [`day` class](../standard-library/day-class.md) | A day of the month. For example, the 25th day of the month. |
| [`duration` class](../standard-library/duration-class.md) | A time interval. |
| [`hh_mm_ss` class](../standard-library/hhmmss-class.md) | Splits a [`duration`](duration-class.md) into hours:minutes:seconds. |
| [`leap_second` class](../standard-library/leap-second-class.md) | A date and a value for an inserted leap second. |
| [`month` class](../standard-library/month-class.md) | A month of a year. For example, July. |
| [`month_day` class](../standard-library/month-day-class.md) | A specific day of a specific month. For example, July 30th. |
| [`month_day_last` class](../standard-library/month-day-last-class.md) | The last day of a month. |
| [`month_weekday` class](../standard-library/month-day-last-class.md) | The nth weekday of a specific month. |
| [`month_weekday_last` class](../standard-library/month-weekday-last-class.md) | The nth weekday of a specific month. |
| [`time_point` class](../standard-library/time-point-class.md) | A point in time. |
| [`time_zone` class](../standard-library/time-point-class.md) | All time zone transitions for a specific geographic area. |
| [`weekday` class](../standard-library/weekday-class.md) | A day of the week. |
| [`weekday_last` class](../standard-library/weekdaylast-class.md) | The last weekday of a month. |
| [`weekday_indexed` class](../standard-library/weekdayindexed-class.md) | Combines a day of the week with an index that represents the weekday of the month. |
| [`year` class](../standard-library/year-class.md) | A year in the [Gregorian calendar](https://en.wikipedia.org/wiki/Proleptic_Gregorian_calendar).|
| [`year_month` class](../standard-library/year-month-class.md) | A year and month. The day isn't specified.|
| [`year_month_day` class](../standard-library/year-month-day-class.md) | A year, month, and day.|
| [`year_month_day_last` class](../standard-library/year-month-day-last-class.md) | The last day of a specific month and year. |
| [`year_month_weekday` class](../standard-library/year-month-weekday-class.md) | A specific year, month, and nth weekday of the month. |
| [`year_month_weekday_last` class](../standard-library/year-month-weekday-last-class.md) |  A specific year, month, and last weekday of the month. |

### Structs

|Name|Description|
|-|-|
|[`common_type` struct](../standard-library/common-type-structure.md)|Describes specializations of class template [`common_type`](../standard-library/common-type-class.md) for instantiations of `duration` and `time_point`.|
|[`duration_values` struct](../standard-library/duration-values-structure.md)|Provides specific values for the `duration` template parameter `Rep`.|
|[`high_resolution_clock` struct](../standard-library/high-resolution-clock-struct.md)| A clock with a nanosecond tick period. |
|[`leap_second_info` struct](../standard-library/leap-second-info-struct.md) | The data returned by [`get_leap_second_info`](chrono-functions.md#std-chrono-get-leap-second-info). |
|[`steady_clock` struct](../standard-library/steady-clock-struct.md)|A `steady` clock. Preferred for measuring time intervals. |
|[`system_clock` struct](../standard-library/system-clock-structure.md)|A *`clock type`* that is based on the real-time clock of the system.|
|[`treat_as_floating_point` struct](../standard-library/treat-as-floating-point-structure.md)|Specifies whether a type can be treated as a floating-point type.|

### Functions

| Name | Description |
|--|--|
| [`ceil(duration)`](./chrono-functions.md#std-chrono-ceil-duration) | Returns the `ceil` of a `duration` object as a specified type. |
| [`ceil(time_point)`](./chrono-functions.md#std-chrono-ceil-time-point) | Returns the `ceil` of a `time_point` object as a specified type. |
| [`current_zone`](./chrono-functions.md#std-chrono-current-zone) | Gets the current time zone. |
| [`duration_cast`](./chrono-functions.md#std-chrono-duration-cast) | Casts a `duration` object to a specified type. |
| [`floor(duration)`](./chrono-functions.md#std-chrono-floor-duration) | Returns the `floor` of a `duration` object as a specified type. |
| [`floor(time_point)`](./chrono-functions.md#std-chrono-floor-time-point) | Returns the `floor` of a `time_point` object as a specified type. |
| [`from_stream()`](./chrono-functions.md#std-chrono-from-stream) | Parse the input stream into one of the `std::chrono` time or interval types such as `day`, `month`, `weekday`, `year`, and so on, using the specified format. |
| [`get_leap_second_info`](./chrono-functions.md#std-chrono-get-leap-second-info) | Gets a [`leap_second_info` struct](../standard-library/leap-second-info-struct.md). |
| [`get_tzdb_list`](./chrono-functions.md#std-chrono-get-tzdb-list) | Gets the list of time zone database entries. |
| [`get_tzdb`](./chrono-functions.md#std-chrono-get-tzdb) | Gets the first time zone database entry. |
| [`is_am`](./chrono-functions.md#std-chrono-is-am) | Whether an `hours` object is AM. |
| [`is_pm`](./chrono-functions.md#std-chrono-is-pm) | Whether an `hours` object is PM. |
| [`locate_zone`](./chrono-functions.md#std-chrono-locate-zone) | Gets a specified time zone. |
| [`make12`](./chrono-functions.md#std-chrono-make12) | Returns an `hours` in 12-hour form. |
| [`make24`](./chrono-functions.md#std-chrono-make24) | Returns an `hours` in 24-hour form. |
| [`reload_tzdb`](./chrono-functions.md#std-chrono-reload-tzdb) | Gets an updated time zone database entry. |
| [`remote_version`](./chrono-functions.md#std-chrono-remote-version) | Checks for an updated time zone database entry. |
| [`round(duration)`](./chrono-functions.md#std-chrono-round-duration) | Returns a `duration` object rounded as a specified type. |
| [`round(time_point)`](./chrono-functions.md#std-chrono-round-time-point) | Returns a `time_point` object rounded as a specified type. |
| [`time_point_cast`](./chrono-functions.md#std-chrono-time-point-cast) | Casts a `time_point` object to a specified type. |

### Operators

|Name|Description|
|-|-|
|[`operator-`](../standard-library/chrono-operators.md#op_minus)|Subtract or negate various <chrono> objects.|
|[`operator!=`](../standard-library/chrono-operators.md#op_neq)|Inequality operator that is used with various <chrono> objects.|
|[`operator modulo`](../standard-library/chrono-operators.md#op_modulo)|Operator for modulo operations on `duration` objects.|
|[`operator*`](../standard-library/chrono-operators.md#op_star)|Multiplication operator for `duration` objects.|
|[`operator/`](../standard-library/chrono-operators.md#op_div)|Division operator for `duration` objects.|
|[`operator/`](../standard-library/chrono-operators.md#op_/)|Provides syntax to create calendar dates.|
|[`operator+`](../standard-library/chrono-operators.md#op_add)|Add to various <chrono> objects.|
|[`operator<`](../standard-library/chrono-operators.md#op_lt)|Determines whether various <chrono> objects are less than another.|
|[`operator<=`](../standard-library/chrono-operators.md#op_lt_eq)|Determines whether various <chrono> objects are less than or equal to another.|
|[`operator==`](../standard-library/chrono-operators.md#op_eq_eq)|Determines whether various <chrono> objects are equal to each other.|
|[`operator>`](../standard-library/chrono-operators.md#op_gt)|Determines whether various <chrono> objects are greater than another.|
|[`operator>=`](../standard-library/chrono-operators.md#op_gt_eq)|Determines whether various <chrono> objects are greater than or equal to another.|

### Typedefs (Predefined Duration Types)

For more information about ratio types that are used in the following typedefs, see [`<ratio>`](../standard-library/ratio.md).

|Name|Description|
|-|-|
|`typedef duration<long long, nano> nanoseconds;`|Synonym for a `duration` type that has a tick period of 1 nanosecond.|
|`typedef duration<long long, micro> microseconds;`|Synonym for a `duration` type that has a tick period of 1 microsecond.|
|`typedef duration<long long, milli> milliseconds;`|Synonym for a `duration` type that has a tick period of 1 millisecond.|
|`typedef duration<long long> seconds;`|Synonym for a `duration` type that has a tick period of 1 second.|
|`typedef duration<int, ratio<60>> minutes;`|Synonym for a `duration` type that has a tick period of 1 minute.|
|`typedef duration<int, ratio<3600>> hours;`|Synonym for a `duration` type that has a tick period of 1 hour.|

### Alias declarations

|Name|Description|
|-|-|
|`using local_days = local_time<days>;` | A count of days, represented by a [`time_point`](time-point-class.md) that is not associated with any time zone. |
|`using sys_days = sys_time<days>;` | A count of days, represented by a `time_point` that is associated with a [`system_clock`](system-clock-structure.md), which has a 1/1/1970 epoch. |

### Literals

**(C++11)** The `<chrono>` header defines the following [user-defined literals](../cpp/user-defined-literals-cpp.md) that you can use for greater convenience, type-safety, and maintainability of your code. These literals are defined in the `literals::chrono_literals` inline namespace and are in scope when `std::chrono` is in scope.

|Declaration|Description|
|-|-|
|`hours operator "" h(unsigned long long Val)`|Specifies hours as an integral value.|
|`duration<double, ratio<3600>> operator "" h(long double Val)`|Specifies hours as a floating-point value.|
|`minutes (operator "" min)(unsigned long long Val)`|Specifies minutes as an integral value.|
|`duration<double, ratio<60>> (operator "" min)( long double Val)`|Specifies minutes as a floating-point value.|
|`seconds operator "" s(unsigned long long Val)`|Specifies minutes as an integral value.|
|`duration<double> operator "" s(long double Val)`|Specifies seconds as a floating-point value.|
|`milliseconds operator "" ms(unsigned long long Val)`|Specifies milliseconds as an integral value.|
|`duration<double, milli> operator "" ms(long double Val)`|Specifies milliseconds as a floating-point value.|
|`microseconds operator "" us(unsigned long long Val)`|Specifies microseconds as an integral value.|
|`duration<double, micro> operator "" us(long double Val)`|Specifies microseconds as a floating-point value.|
|`nanoseconds operator "" ns(unsigned long long Val)`|Specifies nanoseconds as an integral value.|
|`duration<double, nano> operator "" ns(long double Val)`|Specifies nanoseconds as a floating-point value.|

The following examples show how to use `<chrono>` literals.

```cpp
constexpr auto day = 24h;
constexpr auto week = 24h* 7;
constexpr auto my_duration_unit = 108ms;
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
