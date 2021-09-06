---
description: "Learn more about: <chrono>"
title: "<chrono>"
ms.date: 09/02/2021
f1_keywords: ["<chrono>", "chrono/std::chrono::nanoseconds", "chrono/std::chrono::minutes", "chrono/std::chrono::seconds", "chrono/std::chrono::hours", "chrono/std::chrono::milliseconds", "chrono/std::chrono::microseconds"]
---

# `<chrono>`

Include the standard header `<chrono>` to define classes and functions that represent and manipulate time durations and time instants.

Beginning in Visual Studio 2015, the implementation of `steady_clock` has changed to meet the C++ Standard requirements for steadiness and monotonicity. `steady_clock` is now based on `QueryPerformanceCounter()`, and `high_resolution_clock` is now a typedef for `steady_clock`. As a result, in the Microsoft C++ compiler `steady_clock::time_point` is now a `typedef` for `chrono::time_point<steady_clock>`; however, this rule isn't necessarily the case for other implementations.

## Requirements

**Header:** `<chrono>`

**Namespace:** `std`

## Calendrical types

| Name | Description |
|--|--|
|[`common_type` struct](common-type-structure.md)|Describes specializations of class template [`common_type`](common-type-class.md) for instantiations of `duration` and `time_point`.|
| [`day` class](day-class.md) | A day of the month. For example, the 25th day of the month. |
| [`duration` class](duration-class.md) | A time interval. |
|[`duration_values` struct](duration-values-structure.md)|Provides specific values for the `duration` template parameter `Rep`.|
| [`hh_mm_ss` class](hhmmss-class.md) | Splits a [`duration`](duration-class.md) into hours:minutes:seconds. |
| [`last_spec`](last-spec-struct.md) | Used to indicate the last item in a sequence, such as the last day of the week, when creating a calendrical type. |
| [`leap_second` class](leap-second-class.md) | A date and a value for an inserted leap second. |
|[`leap_second_info` struct](leap-second-info-struct.md) | The data returned by [`get_leap_second_info`](chrono-functions.md#std-chrono-get-leap-second-info). |
| [`month` class](month-class.md) | A month of a year. For example, July. |
| [`month_day` class](month-day-class.md) | A specific day of a specific month. For example, July 30. |
| [`month_day_last` class](month-day-last-class.md) | The last day of a month. |
| [`month_weekday` class](month-day-last-class.md) | The nth weekday of a specific month. |
| [`month_weekday_last` class](month-weekday-last-class.md) | The nth weekday of a specific month. |
| [`time_point` class](time-point-class.md) | A point in time. |
| [`weekday` class](weekday-class.md) | A day of the week. |
| [`weekday_last` class](weekdaylast-class.md) | The last weekday of a month. |
| [`weekday_indexed` class](weekdayindexed-class.md) | Combines a day of the week with an index that represents the weekday of the month. |
| [`year` class](year-class.md) | A year in the [Gregorian calendar](https://en.wikipedia.org/wiki/Proleptic_Gregorian_calendar).|
| [`year_month` class](year-month-class.md) | A year and month. The day isn't specified.|
| [`year_month_day` class](year-month-day-class.md) | A year, month, and day.|
| [`year_month_day_last` class](year-month-day-last-class.md) | The last day of a specific month and year. |
| [`year_month_weekday` class](year-month-weekday-class.md) | A specific year, month, and nth weekday of the month. |
| [`year_month_weekday_last` class](year-month-weekday-last-class.md) |  A specific year, month, and last weekday of the month. |

**Clocks**

| Name | Description |
|--|--|
|[`file_clock` class](file-clock-class.md)| A clock that is an alias for the clock used for  `std::filesystem::file_time_type` used to express file timestamps.|
|[`gps_clock` class](gps-clock-class.md)| A clock that keeps GPS time. Measures time starting from the first Sunday of January 1980 at 00:00:00 UTC.|
|[`high_resolution_clock` struct](high-resolution-clock-struct.md)| A clock with a nanosecond tick period. |
|[`local_t` struct](local_t.md)| A pseudo-clock used as an argument to the `time_point` template argument to indicate that the time_point represents local time. |
|[`steady_clock` struct](steady-clock-struct.md)|A `steady` clock. Preferred for measuring time intervals. |
|[`system_clock` struct](system-clock-structure.md)|A *`clock type`* that is based on the real-time clock of the system.|
|[`tai_clock` class](tai-clock-class.md)| Measures International Atomic Time (TAI) starting from Thursday, January 1, 1958 at 00:00:00. Doesn't account for leap seconds.|
|[`utc_clock` class](utc-clock-class.md)| Measures time since 00:00:00 UTC on Thursday, January 1, 1970. This clock accounts for leap seconds and is the time standard used around the world.|

**Time Zones**

| Name | Description |
|--|--|
| [`time_zone` class](time-zone-class.md) | All time zone transitions for a specific geographic area. |
| [`time_zone_link` class](time-zone-link-class.md) | Specifies an alternative name for a `time_zone`. |

## Functions

| Name | Description |
|--|--|
| [`ceil(duration)`](chrono-functions.md#std-chrono-ceil-duration) | Returns the `ceil` of a `duration` object as a specified type. |
| [`ceil(time_point)`](chrono-functions.md#std-chrono-ceil-time-point) | Returns the `ceil` of a `time_point` object as a specified type. |
| [`duration_cast`](chrono-functions.md#std-chrono-duration-cast) | Casts a `duration` object to a specified type. |
| [`floor(duration)`](chrono-functions.md#std-chrono-floor-duration) | Returns the `floor` of a `duration` object as a specified type. |
| [`floor(time_point)`](chrono-functions.md#std-chrono-floor-time-point) | Returns the `floor` of a `time_point` object as a specified type. |
| [`from_stream()`](chrono-functions.md#std-chrono-from-stream) | Parse the input stream into one of the `std::chrono` time or interval types such as `day`, `month`, `weekday`, `year`, and so on, using the specified format. |
| [`get_leap_second_info`](chrono-functions.md#std-chrono-get-leap-second-info) | Gets a [`leap_second_info` struct](leap-second-info-struct.md). |
| [`is_am`](chrono-functions.md#std-chrono-is-am) | Whether an `hours` object is AM. |
| [`is_pm`](chrono-functions.md#std-chrono-is-pm) | Whether an `hours` object is PM. |
| [`locate_zone`](chrono-functions.md#std-chrono-locate-zone) | Gets a specified time zone. |
| [`make12`](chrono-functions.md#std-chrono-make12) | Returns an `hours` in 12-hour form. |
| [`make24`](chrono-functions.md#std-chrono-make24) | Returns an `hours` in 24-hour form. |
| [`round(duration)`](chrono-functions.md#std-chrono-round-duration) | Returns a `duration` object rounded as a specified type. |
| [`round(time_point)`](chrono-functions.md#std-chrono-round-time-point) | Returns a `time_point` object rounded as a specified type. |
| [`time_point_cast`](chrono-functions.md#std-chrono-time-point-cast) | Casts a `time_point` object to a specified type. |

**Time zone related**

| Name | Description |
|--|--|
| [`current_zone`](chrono-functions.md#std-chrono-current-zone) | Gets the current time zone. |
| [`get_tzdb_list`](chrono-functions.md#std-chrono-get-tzdb-list) | Gets the list of time zone database entries. |
| [`get_tzdb`](chrono-functions.md#std-chrono-get-tzdb) | Gets the first time zone database entry. |
| [`reload_tzdb`](chrono-functions.md#std-chrono-reload-tzdb) | Gets an updated time zone database entry. |
| [`remote_version`](chrono-functions.md#std-chrono-remote-version) | Checks for an updated time zone database entry. |

## Operators

|Name|Description|
|-|-|
|[`operator-`](chrono-operators.md#op_minus)|Subtract or negate various `<chrono>` objects.|
|[`operator!=`](chrono-operators.md#op_neq)|Inequality operator that is used with various `<chrono>` objects.|
|[`operator modulo`](chrono-operators.md#op_modulo)|Operator for modulo operations on `duration` objects.|
|[`operator*`](chrono-operators.md#op_star)|Multiplication operator for `duration` objects.|
|[`operator/`](chrono-operators.md#op_div)|Division operator for `duration` objects.|
|[`operator/`](chrono-operators.md#op_/)|Provides syntax to create calendar dates.|
|[`operator+`](chrono-operators.md#op_add)|Add to various `<chrono>` objects.|
|[`operator<`](chrono-operators.md#op_lt)|Determines whether various `<chrono>` objects are less than another.|
|[`operator<=`](chrono-operators.md#op_lt_eq)|Determines whether various `<chrono>` objects are less than or equal to another.|
|[`operator==`](chrono-operators.md#op_eq_eq)|Determines whether various `<chrono>` objects are equal to each other.|
|[`operator>`](chrono-operators.md#op_gt)|Determines whether various `<chrono>` objects are greater than another.|
|[`operator>=`](chrono-operators.md#op_gt_eq)|Determines whether various `<chrono>` objects are greater than or equal to another.|

## Typedefs

For more information about ratio types that are used in the following typedefs, see [`<ratio>`](ratio.md).

**Convenience `duration`  types**

| Name | Description |
|--|--|
| `typedef duration<long long, nano> nanoseconds;` | Synonym for a `duration` type that has a tick period of one billionth (1/1,000,000,000) of a second. |
| `typedef duration<long long, micro> microseconds;` | Synonym for a `duration` type that has a tick period of one millionth (1/1,000,000) of a second. |
| `typedef duration<long long, milli> milliseconds;` | Synonym for a `duration` type that has a tick period of one thousandth (1/1,000) of a second. |
| `typedef duration<long long> seconds;` | Synonym for a `duration` type that has a tick period of 1 second. |
| `typedef duration<int, ratio<60>> minutes;` | Synonym for a `duration` type that has a tick period of 1 minute. |
| `typedef duration<int, ratio<3600>> hours;` | Synonym for a `duration` type that has a tick period of 1 hour. |

**Convenience `time_point` types**

| Name | Description |
|--|--|
| `file_time` | A synonym for `template <class Duration> using file_time = time_point<file_clock, Duration>`. Represents a [`time_point`](time-point-class.md) for a [`file_clock`](file-clock-class.md). You specify the `Duration`. |
| `gps_seconds` | A synonym for `using gps_seconds = gps_time<seconds>;` A count of seconds, represented by a `time_point` that is associated with a [`gps_clock`](tai-clock-class.md). |
| `gps_time` | A synonym for `template <class Duration> using gps_time = time_point<gps_clock, Duration>`. Represents a `time_point` for a [`gps_clock`](gps-clock-class.md). You specify the `Duration`. |
| `local_days` | A synonym for `using local_days = local_time<days>`. A count of days, represented by a [`time_point`](time-point-class.md) that isn't associated with any time zone. |
| `local_seconds` | A synonym for `local_time<seconds>`. Defined in `std::chrono`. |
| `local_time` | A synonym for `template <class Duration> using local_time = time_point<local_t, Duration>`. Represents a `time_point` for a local time. You specify the `Duration`. A `local_time` isn't associated with a time zone yet. It isn't the current local time of your computer's clock Only when you pair a `local_time` with a `time_zone` do you get a point in time that can be converted to UTC or other time in a specific time zone. | 
| `sys_days` | A synonym for `using sys_days = sys_time<days>`. A count of days, represented by a `time_point` that is associated with a [`system_clock`](system-clock-structure.md). |
| `sys_seconds` | A synonym for `using sys_seconds = sys_time<seconds>`. A count of seconds, represented by a `time_point` that is associated with a [`system_clock`](system-clock-structure.md). |
| `sys_time` | A synonym for `template <class Duration> using sys_time = time_point<system_clock, Duration>`. Represents a `time_point` for a [`system_clock`](system-clock-structure.md). You specify the `Duration`. |
| `tai_seconds` | A synonym for `using tai_seconds = tai_time<seconds>` A count of seconds, represented by a `time_point` that is associated with a [`tai_clock`](tai-clock-class.md). |
| `tai_time` | A synonym for `template <class Duration> using tai_time = time_point<tai_clock, Duration>`. Represents a `time_point` for a [`tai_clock`](tai-clock-class.md). You specify the `Duration`. |
| `utc_seconds` | A synonym for `using utc_seconds = utc_time<seconds>;` |
| `utc_time` | A synonym for `template<class Duration> using utc_time = time_point<utc_clock, Duration>`. Represents a `time_point`for a [`utc_clock`](utc-clock-class.md). You specify the `Duration`. |

## Type traits

| Name | Description |
|--|--|
| [is_clock](is-clock-struct.md) | Check if a type is a clock. |
| [treat_as_floating_point](treat-as-floating-point-structure.md) | Check if a `duration` can be converted to another `duration` that has a different tick period. |

## Literals

**(C++11)** The `<chrono>` header defines the following [user-defined literals](../cpp/user-defined-literals-cpp.md) that you can use for greater convenience, type-safety, and maintainability of your code. These literals are defined in the `literals::chrono_literals` inline namespace and are in scope when `std::chrono` is in scope.

| Declaration | Description |
|--|--|
| `hours operator "" h(unsigned long long Val)` | Specifies hours as an integral value. |
| `duration<double, ratio<3600>> operator "" h(long double Val)` | Specifies hours as a floating-point value. |
| `minutes (operator "" min)(unsigned long long Val)` | Specifies minutes as an integral value. |
| `duration<double, ratio<60>> (operator "" min)( long double Val)` | Specifies minutes as a floating-point value. |
| `seconds operator "" s(unsigned long long Val)` | Specifies minutes as an integral value. |
| `duration<double> operator "" s(long double Val)` | Specifies seconds as a floating-point value. |
| `milliseconds operator "" ms(unsigned long long Val)` | Specifies milliseconds as an integral value. |
| `duration<double, milli> operator "" ms(long double Val)` | Specifies milliseconds as a floating-point value. |
| `microseconds operator "" us(unsigned long long Val)` | Specifies microseconds as an integral value. |
| `duration<double, micro> operator "" us(long double Val)` | Specifies microseconds as a floating-point value. |
| `nanoseconds operator "" ns(unsigned long long Val)` | Specifies nanoseconds as an integral value. |
| `duration<double, nano> operator "" ns(long double Val)` | Specifies nanoseconds as a floating-point value. |

The following examples show how to use `<chrono>` literals.

```cpp
constexpr auto day = 24h;
constexpr auto week = 24h* 7;
constexpr auto my_duration_unit = 108ms;
```

## See also

[Header Files Reference](cpp-standard-library-header-files.md)
