---
description: "Learn more about: &lt;chrono&gt;"
title: "&lt;chrono&gt;"
ms.date: 04/29/2021
f1_keywords: ["<chrono>", "chrono/std::chrono::nanoseconds", "chrono/std::chrono::minutes", "chrono/std::chrono::seconds", "chrono/std::chrono::hours", "chrono/std::chrono::milliseconds", "chrono/std::chrono::microseconds"]
---
# `<chrono>`

Include the standard header `<chrono>` to define classes and functions that represent and manipulate time durations and time instants.

Beginning in Visual Studio 2015, the implementation of `steady_clock` has changed to meet the C++ Standard requirements for steadiness and monotonicity. `steady_clock` is now based on `QueryPerformanceCounter()` and `high_resolution_clock` is now a typedef for `steady_clock`. As a result, in the Microsoft C++ compiler `steady_clock::time_point` is now a `typedef` for `chrono::time_point<steady_clock>`; however, this rule isn't necessarily the case for other implementations.

## Requirements

**Header:** `<chrono>`

**Namespace:** std

## Members

### Classes

| Name | Description |
|--|--|
| [`duration` class](../standard-library/duration-class.md) | Describes a type that holds a time interval. |
| [`time_point` class](../standard-library/time-point-class.md) | Describes a type that represents a point in time. |
| [`time_zone` class](../standard-library/time-point-class.md) | Represents all time zone transitions for a specific geographic area.  |

### Structs

| Name | Description |
|--|--|
| [`common_type` struct](../standard-library/common-type-structure.md) | Describes specializations of class template [`common_type`](../standard-library/common-type-class.md) for instantiations of `duration` and `time_point`. |
| [`duration_values` struct](../standard-library/duration-values-structure.md) | Provides specific values for the `duration` template parameter `Rep`. |
| [`high_resolution_clock` struct](../standard-library/high-resolution-clock-struct.md) |  |
| [`steady_clock` struct](../standard-library/steady-clock-struct.md) | Represents a `steady` clock. |
| [`system_clock` struct](../standard-library/system-clock-structure.md) | Represents a *`clock type`* that is based on the real-time clock of the system. |
| [`treat_as_floating_point` struct](../standard-library/treat-as-floating-point-structure.md) | Specifies whether a type can be treated as a floating-point type. |

### Functions

| Name | Description |
|--|--|
| [`duration_cast`](./chrono-functions.md#std-chrono-duration-cast) | Casts a `duration` object to a specified type. |
| [`floor(duration)`](./chrono-functions.md#std-chrono-floor-duration) | Returns the `floor` of a `duration` object as a specified type. |
| [`ceil(duration)`](./chrono-functions.md#std-chrono-ceil-duration) | Returns the `ceil` of a `duration` object as a specified type. |
| [`round(duration)`](./chrono-functions.md#std-chrono-round-duration) | Returns a `duration` object rounded as a specified type. |
| [`time_point_cast`](./chrono-functions.md#std-chrono-time-point-cast) | Casts a `time_point` object to a specified type. |
| [`floor(time_point)`](./chrono-functions.md#std-chrono-floor-time-point) | Returns the `floor` of a `time_point` object as a specified type. |
| [`ceil(time_point)`](./chrono-functions.md#std-chrono-ceil-time-point) | Returns the `ceil` of a `time_point` object as a specified type. |
| [`round(time_point)`](./chrono-functions.md#std-chrono-round-time-point) | Returns a `time_point` object rounded as a specified type. |
| [`is_am`](./chrono-functions.md#std-chrono-is-am) | Whether an `hours` object is AM. |
| [`is_pm`](./chrono-functions.md#std-chrono-is-pm) | Whether an `hours` object is PM. |
| [`make12`](./chrono-functions.md#std-chrono-make12) | Returns an `hours` in 12-hour form. |
| [`make24`](./chrono-functions.md#std-chrono-make24) | Returns an `hours` in 24-hour form. |
| [`get_leap_second_info`](./chrono-functions.md#std-chrono-get-leap-second-info) | Gets a `leap_second_info`. |
| [`get_tzdb`](./chrono-functions.md#std-chrono-get-tzdb) | Gets the first time zone database entry. |
| [`get_tzdb_list`](./chrono-functions.md#std-chrono-get-tzdb-list) | Gets the list of time zone database entries. |
| [`locate_zone`](./chrono-functions.md#std-chrono-locate-zone) | Gets a specified time zone. |
| [`current_zone`](./chrono-functions.md#std-chrono-current-zone) | Gets the current time zone. |
| [`reload_tzdb`](./chrono-functions.md#std-chrono-reload-tzdb) | Gets an updated time zone database entry. |
| [`remote_version`](./chrono-functions.md#std-chrono-remote-version) | Checks for an updated time zone database entry. |

### Operators

|Name|Description|
|-|-|
|[`operator-`](../standard-library/chrono-operators.md#operator-)|Operator for subtraction or negation of `duration` and `time_point` objects.|
|[`operator!=`](../standard-library/chrono-operators.md#op_neq)|Inequality operator that is used with `duration` or `time_point` objects.|
|[`operator modulo`](../standard-library/chrono-operators.md#op_modulo)|Operator for modulo operations on `duration` objects.|
|[`operator*`](../standard-library/chrono-operators.md#op_star)|Multiplication operator for `duration` objects.|
|[`operator/`](../standard-library/chrono-operators.md#op_div)|Division operator for `duration` objects.|
|[`operator+`](../standard-library/chrono-operators.md#op_add)|Adds `duration` and `time_point` objects.|
|[`operator<`](../standard-library/chrono-operators.md#op_lt)|Determines whether one `duration` or `time_point` object is less than another `duration` or `time_point` object.|
|[`operator<=`](../standard-library/chrono-operators.md#op_lt_eq)|Determines whether one `duration` or `time_point` object is less than or equal to another `duration` or `time_point` object.|
|[operator==](../standard-library/chrono-operators.md#op_eq_eq)|Determines whether two `duration` objects represent time intervals that have the same length, or whether two `time_point` objects represent the same point in time.|
|[`operator>`](../standard-library/chrono-operators.md#op_gt)|Determines whether one `duration` or `time_point` object is greater than another `duration` or `time_point` object.|
|[`operator>=`](../standard-library/chrono-operators.md#op_gt_eq)|Determines whether one `duration` or `time_point` object is greater than or equal to another `duration` or `time_point` object.|

### Typedefs (Predefined Duration Types)

For more information about ratio types that are used in the following typedefs, see [`<ratio>`](../standard-library/ratio.md).

|Name|Description|
|-|-|
|`typedef duration<long long, nano> nanoseconds;`|Synonym for a `duration` type that has a tick period of 1 nanosecond.|
|`typedef duration<long long, micro> microseconds;`|Synonym for a `duration` type that has a tick period of 1 microsecond.|
|`typedef duration<long long, milli> milliseconds;`|Synonym for a `duration` type that has a tick period of 1 millisecond.|
|`typedef duration<long long> seconds;`|Synonym for a `duration` type that has a tick period of 1 second.|
|`typedef duration<int, ratio<60> > minutes;`|Synonym for a `duration` type that has a tick period of 1 minute.|
|`typedef duration<int, ratio<3600> > hours;`|Synonym for a `duration` type that has a tick period of 1 hour.|

### Literals

**(C++11)** The `<chrono>` header defines the following [user-defined literals](../cpp/user-defined-literals-cpp.md) that you can use for greater convenience, type-safety, and maintainability of your code. These literals are defined in the `literals::chrono_literals` inline namespace and are in scope when `std::chrono` is in scope.

|Declaration|Description|
|-|-|
|`hours operator "" h(unsigned long long Val)`|Specifies hours as an integral value.|
|`duration<double, ratio<3600> > operator "" h(long double Val)`|Specifies hours as a floating-point value.|
|`minutes (operator "" min)(unsigned long long Val)`|Specifies minutes as an integral value.|
|`duration<double, ratio<60> > (operator "" min)( long double Val)`|Specifies minutes as a floating-point value.|
|`seconds operator "" s(unsigned long long Val)`|Specifies minutes as an integral value.|
|`duration<double> operator "" s(long double Val)`|Specifies seconds as a floating-point value.|
|`milliseconds operator "" ms(unsigned long long Val)`|Specifies milliseconds as an integral value.|
|`duration<double, milli> operator "" ms(long double Val)`|Specifies milliseconds as a floating-point value.|
|`microseconds operator "" us(unsigned long long Val)`|Specifies microseconds as an integral value.|
|`duration<double, micro> operator "" us(long double Val)`|Specifies microseconds as a floating-point value.|
|`nanoseconds operator "" ns(unsigned long long Val)`|Specifies nanoseconds as an integral value.|
|`duration<double, nano> operator "" ns(long double Val)`|Specifies nanoseconds as a floating-point value.|

The following examples show how to use the chrono literals.

```cpp
constexpr auto day = 24h;
constexpr auto week = 24h* 7;
constexpr auto my_duration_unit = 108ms;
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
