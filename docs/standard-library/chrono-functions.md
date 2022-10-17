---
description: "Learn more about: <chrono> functions"
title: "<chrono> functions"
ms.date: 10/15/2021
f1_keywords: ["chrono/std::duration_cast", "chrono/std::time_point_cast", "chrono/std::chrono::clock_cast", "chrono/std::chrono::duration_cast", "chrono/std::chrono::time_point_cast", "chrono/std::chrono::from_stream", "chrono/std::chrono::abs", "chrono/std::chrono::floor", "chrono/std::chrono::ceil", "chrono/std::chrono::round", "chrono/std::chrono::is_am", "chrono/std::chrono::is_pm", "chrono/std::chrono::make12", "chrono/std::chrono::make24", "chrono/std::chrono::get_leap_second_info", "chrono/std::chrono::get_tzdb", "chrono/std::chrono::get_tzdb_list", "chrono/std::chrono::locate_zone", "chrono/std::chrono::current_zone", "chrono/std::chrono::reload_tzdb", "chrono/std::chrono::remote_version"]
helpviewer_keywords: ["std::duration_cast function", "std::time_point_cast function",  "std::chrono::clock_cast", "std::chrono::duration_cast function", "std::chrono::time_point_cast function", "std::chrono::from_stream function", "std::chrono::floor function", "std::chrono::ceil function", "std::chrono::round function", "std::chrono::is_am function", "std::chrono::is_pm function", "std::chrono::make12 function", "std::chrono::make24 function", "std::chrono::get_leap_second_info function", "std::chrono::get_tzdb function", "std::chrono::get_tzdb_list function", "std::chrono::locate_zone function", "std::chrono::current_zone function", "std::chrono::reload_tzdb function", "std::chrono::remote_version function"]
---

# `<chrono>` functions

## <a name="std-chrono-abs-duration"></a> `abs(duration)`

Returns `d` if `d >= d.zero()`; otherwise returns `-d`.

### Syntax

```cpp
template <class Rep, class Period>
constexpr duration<Rep, Period> abs(duration<Rep, Period> d ); // C++17
```

### Parameters

*`Rep`*\
The type of the internal representation of the source `duration` *`d`*.

*`Period`*\
A [`std::ratio`](./ratio.md) type representing the ratio of one second to the source `Rep` type (that is, seconds per `Rep`).

*`d`*\
The source `duration` object.

### Return value

The absolute value of `d`.

### Example: `abs(duration)`

```cpp
// compile using: /std:c++latest
#include <chrono>
#include <iostream>

int main()
{
    std::cout << abs(-24h);
    return 0;
}
```

```output
24h
```

## <a name="std-chrono-ceil-duration"></a> `ceil(duration)`

Returns the smallest representable `duration` in the target type that's greater than or equal to the specified `duration`.

### Syntax

```cpp
template<class ToDuration, class Rep, class Period>
constexpr ToDuration
ceil(const duration<Rep, Period>& d);  // C++17
```

### Parameters

*`ToDuration`*\
The target `duration` type. Constrained as a specialization of `duration`.

*`Rep`*\
The type of the internal representation of the source `duration` *`d`*.

*`Period`*\
A [`std::ratio`](./ratio.md) type representing the ratio of one second to the source `Rep` type (that is, seconds per `Rep`).

*`d`*\
The source `duration` object.

### Return value

Returns the smallest `duration` representable in `ToDuration` that's greater than or equal to the parameter *`d`*.

### Remarks

`ceil` doesn't participate in overload resolution unless the `ToDuration` type is an instance of a [`duration`](../standard-library/duration-class.md).

## <a name="std-chrono-ceil-time-point"></a> `ceil(time_point)`

Returns the smallest time point representable in the target `duration` that's greater than or equal to the specified time point.

### Syntax

```cpp
template<class ToDuration, class Clock, class Duration>
constexpr time_point<Clock, ToDuration>
ceil(const time_point<Clock, Duration>& t);  // C++17
```

### Parameters

*`ToDuration`*\
The target `duration` type. Constrained as a specialization of `duration`.

*`Clock`*\
The common clock type of the result and the source parameter *`tp`*.

*`Duration`*\
The `duration` type of *`tp`*.

*`tp`*\
The source `time_point` object.

### Return value

Returns the smallest time point representable using `ToDuration` that's greater than or equal to *`tp`*. Effectively, `time_point<Clock, ToDuration>(ceil<ToDuration>(tp.time_since_epoch()));`.

### Remarks

`ceil` doesn't participate in overload resolution unless the `ToDuration` type is an instance of a [`duration`](../standard-library/duration-class.md).

## <a name="std-chrono-clock-cast"></a> `clock_cast`

Converts a [`time_point`](time-point-class.md) for one clock to an equivalent `time_point` for another clock.

### Syntax

```cpp
template <class DestClock, class SourceClock, class Duration> 
auto clock_cast(const time_point<SourceClock, Duration>& t); // C++ 20
```

### Parameters

*`DestClock`*\
The clock type to convert the `time_point` to.

*`Duration`*\
The [`duration`](duration-class.md) of the `SourceClock`, or one that you specify.

*`SourceClock`*\
The clock type that the `time_point` to convert is based on.

*`t`*\
The `time_point` to convert.

### Return value

A [`time_point`](time-point-class.md) equivalent to **`t`**, but specific to `DestClock`.

### Remarks

The parameters `SourceClock` and `Duration` can be inferred via class template argument deduction when not explicitly passed. For example, given `clock_cast<utc_clock>(file_clock::now())`, `SourceClock` is deduced to be `file_clock`, and `Duration` is deduced to be `file_clock::duration`.

From the following list of well-formed clock conversions, the one that requires the fewest conversion steps to get from the `SourceClock` to the `DestClock` is selected.

```cpp
clock_time_conversion<DestClock, SourceClock>{}(t)

clock_time_conversion<DestClock, system_clock>{}(
	clock_time_conversion<system_clock, SourceClock>{}(t))

clock_time_conversion<DestClock, utc_clock>{}(
	clock_time_conversion<utc_clock, SourceClock>{}(t))

clock_time_conversion<DestClock, utc_clock>{}(
	clock_time_conversion<utc_clock, system_clock>{}(
		clock_time_conversion<system_clock, SourceClock>{}(t)))

clock_time_conversion<DestClock, system_clock>{}(
	clock_time_conversion<system_clock, utc_clock>{}(
		clock_time_conversion<utc_clock, SourceClock>{}(t)))
```

For more information about what `clock_time_conversion` does, see [`clock_time_conversion` struct](clock-time-conversion-struct.md).

### Example `clock_cast`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    utc_clock::time_point t = clock_cast<utc_clock>(file_clock::now());
    std::cout << t;

    return 0;
}
```

```output
2021-10-11 22:58:17.8540720
```

## <a name="std-chrono-current-zone"></a> `current_zone`

Gets the current time zone object.

### Syntax

```cpp
const time_zone* current_zone();  // C++20
```

### Return value

Returns a pointer to a [`time_zone`](./time-zone-class.md) as if by a call to `get_tzdb().current_zone()`. It throws a `runtime_error` exception if it's the first reference to the time zone database and the time zone database can't be initialized.

## <a name="std-chrono-duration-cast"></a> `duration_cast`

Casts a [`duration`](../standard-library/duration-class.md) to the specified target `duration` type.

### Syntax

```cpp
template <class ToDuration, class Rep, class Period>
constexpr ToDuration
duration_cast(const duration<Rep, Period>& d);  // C++11
```

### Parameters

*`ToDuration`*\
The target `duration` type. Constrained as a specialization of `duration`.

*`Rep`*\
The type of the internal representation of the source `duration` *`d`*.

*`Period`*\
A [`std::ratio`](./ratio.md) type representing the ratio of one second to the source `Rep` type (that is, seconds per `Rep`).

*`d`*\
The source `duration` object to cast to the target `duration` type.

### Return value

An object of type `ToDuration` that represents the `duration` *`d`*. It's truncated if necessary to fit into the target type. The result of casting a floating-point `duration` to an integral `duration` is undefined if the source contains a *`NaN`*, an infinity, or is too large for representation in the target `duration`.

### Remarks

You don't need to use `duration_cast` to convert between `duration` types when the source period is exactly divisible by the target period, such as when you convert minutes to seconds. Also, you don't need it to convert between floating-point `duration` types. You can do both conversions by using ordinary casts or the  [`duration`](../standard-library/duration-class.md) constructors.

`duration_cast` doesn't participate in overload resolution unless `ToDuration` is an instance of [`duration`](../standard-library/duration-class.md). It does all conversions by using **`static_cast`** instead of implicit conversions. Multiplications and divisions are avoided if possible. For example, when the compiler knows that the common ratio of the target and source periods has a numerator or denominator of 1. Computations are done in the widest type available, then converted as if by **`static_cast`** to the result type when finished.

### Example `duration_cast`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    seconds s(1);
    std::cout << duration_cast<microseconds>(s) << '\n';
    std::cout << duration_cast<nanoseconds>(s) << '\n';

    return 0;
}
```

```output
1000000us
1000000000ns
```

## <a name="std-chrono-floor-duration"></a> `floor(duration)`

Returns the greatest representable `duration` in the target type that's less than or equal to the specified `duration`.

### Syntax

```cpp
template<class ToDuration, class Rep, class Period>
constexpr ToDuration
floor(const duration<Rep, Period>& d);  // C++17
```

### Parameters

*`ToDuration`*\
The target `duration` type. Constrained as a specialization of `duration`.

*`Rep`*\
The type of the internal representation of the source `duration` *`d`*.

*`Period`*\
A [`std::ratio`](./ratio.md) type representing the ratio of one second to the source `Rep` type (that is, seconds per `Rep`).

*`d`*\
The source `duration` object.

### Return value

Returns the greatest `duration` representable in `ToDuration` that's less than or equal to the parameter *`d`*.

### Remarks

`floor` doesn't participate in overload resolution unless the `ToDuration` type is an instance of a [`duration`](../standard-library/duration-class.md).

## <a name="std-chrono-floor-time-point"></a> `floor(time_point)`

Returns the largest time point representable in the target `duration` that's less than or equal to the specified time point.

### Syntax

```cpp
template<class ToDuration, class Clock, class Duration>
constexpr time_point<Clock, ToDuration>
floor(const time_point<Clock, Duration>& tp);  // C++17
```

### Parameters

*`ToDuration`*\
The target `duration` type. Constrained as a specialization of `duration`.

*`Clock`*\
The common clock type of the result and the source parameter *`tp`*.

*`Duration`*\
The `duration` type of *`tp`*.

*`tp`*\
The source `time_point` object.

### Return value

Returns the largest time point representable using `ToDuration` that's less than or equal to *`tp`*. Effectively, `time_point<Clock, ToDuration>(floor<ToDuration>(tp.time_since_epoch()));`.

### Remarks

`floor` doesn't participate in overload resolution unless the `ToDuration` type is an instance of a [`duration`](../standard-library/duration-class.md).

## <a name="std-chrono-from-stream"></a> `from_stream`

Parse the input stream into one of the `std::chrono` time or interval types such as `day`, `month`, `month_day`, `weekday`, `year`, `year_month`, `year_month_day`, and so on, using the specified format.

If the parse fails, `is.setstate`(`ios_base::failbit`) is called and the output parameter isn't modified.

```cpp
// 1) day - C++20
template<class charT class traits, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    day& d, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 2) duration - C++20
template<class charT, class traits, class Rep, class Period, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    duration<Rep, Period>& dur, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 3) file_time - C++20
template<class charT, class traits, class Duration, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    file_time<Duration>& ft, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 4) gps_time - C++20
template<class charT, class traits, class Duration, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    gps_time<Duration>& gt, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 5) local_time - C++20
template<class charT, class traits, class Duration, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    local_time<Duration>& lt, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 6) month - C++20
template<class charT, class traits, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    month& m, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 7) month_day - C++20
template<class charT, class traits, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    month_day& md, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 8) utc_time  - C++20
template<class charT, class traits, class Duration, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    utc_time<Duration>& ut, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 9) sys_time - C++20
template<class charT, class traits, class Duration, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    sys_time<Duration>& st, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 10) tai_time - C++20
template<class charT, class traits, class Duration, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    tai_time<Duration>& tt, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 11) weekday - C++20
template<class charT, class traits, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    weekday& wd, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 12) year - C++20
template<class charT, class traits, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    year& y, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 13) year_month - C++20
template<class charT, class traits, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    year_month& ym, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);

// 14) year_month_day - C++20
template<class charT, class traits, class Alloc = allocator<charT>>
basic_istream<charT, traits>&
from_stream(
    basic_istream<charT, traits>& is, const charT* fmt,
    year_month_day& ymd, basic_string<charT, traits, Alloc>* abbrev = nullptr,
    minutes* offset = nullptr);
```

### Template parameters

*`Alloc`*\
The type that represents the allocator object that handles the string's allocation and deallocation of memory.

*`charT`*\
The data type of a single character to be read from the stream and stored in the string. The C++ Standard Library provides specializations of this class template, with the type definitions [`string`](../standard-library/string-typedefs.md#string) for elements of type `char`, [`wstring`](../standard-library/string-typedefs.md#wstring), for `wchar_t`, [`u16string`](../standard-library/string-typedefs.md#u16string) for `char16_t`, and [`u32string`](../standard-library/string-typedefs.md#u32string) for `char32_t`.

*`traits`*\
Describes `charT` attributes for the `basic_string` and `basic_istream` specialization.

*`Rep`*\
The internal representation type of a `duration` type.

*`Period`*\
A [`std::ratio`](./ratio.md) type representing the ratio of one second to the source `Rep` type (that is, seconds per `Rep`).

*`Duration`*\
The `duration` type used for time specialization.

### Parameters

*`abbrev`*\
If *`abbrev`* isn't `nullptr`, and the format specifier `%Z` is specified, and the parse is successful, then *`abbrev`* contains the parsed value.

*`d`*\
If the parse is successful, contains the parsed day when the function returns.

*`dur`*\
The `duration` parsed from the stream.

*`fmt`*\
The format string used to match the input. See [Parse format strings](#parse-format-strings) for the list of parse formatting options.

*`ft`*\
The `file_time` parsed from the stream.

*`gt`*\
The [`gps_time`](chrono.md#typedefs)  parsed from the stream.

*`is`*\
The input stream to parse.

*`lt`*\
The [`local_time`](chrono.md#typedefs) parsed from the stream.

*`m`*\
The `month` parsed from the stream.

*`md`*\
The `month_day` parsed from the stream.

*`offset`*\
If *`offset`* isn't `nullptr`, and the format specifier `%z` or modified variant such as `%Ez` or `%0z` is specified, and the parse is successful, then *`offset`* points to the parsed value.

*`st`*\
The [`sys_time`](chrono.md#typedefs) parsed from the stream.

*`tt`*\
The [`tai_time`](chrono.md#typedefs) parsed from the stream.

*`ut`*\
The [`utc_time`](chrono.md#typedefs) parsed from the stream.

*`wd`*\
The `weekday` parsed from the stream.

*`y`*\
The [`year`](year-class.md) parsed from the stream.

*`ym`*\
The `year_month` parsed from the stream.

*`ymd`*\
The `year_month_day` parsed from the stream.

### Return value

The input stream, *`is`*

### Example: `from_stream`

```cpp
// compile using: /std:c++latest
#include <chrono>
#include <iostream>

int main()
{
    std::istringstream str{ "22" };
    std::basic_istream<char> stream{ str.rdbuf() };
    std::chrono::day d;
    std::chrono::from_stream(stream, "%d", d);
    std::cout << d << "\n";
    return 0;
}
```

```output
22
```

### Remarks

**7)** If `%Z` is used and successfully parsed, that value will be assigned to `*abbrev `if `abbrev` is non-null. If `%z` (or a modified variant) is used and successfully parsed, that value will be assigned to `*offset` if `offset` is non-null.

**12)** If `%Z` is used and successfully parsed, that value will be assigned to `*abbrev` if `abbrev` is non-null. If `%z` (or a modified variant) is used and successfully parsed, that value will be assigned to `*offset` if `offset` is non-null.

### <a name="parse-format-strings"></a> `from_stream` format strings

The format may be one of these strings:

#### Date

| Specifier | Description |
|--|--|
| `%D` | Equivalent to `%m/%d/%y` |
| `%F`<br>`%`*N*`F`  | Equivalent to `%Y-%m-%d`. If modified with a width `N`, the width is applied to only `%Y`. |
| `%x`<bR>`%Ex` | The locale's date representation.<br>`%Ex` parses the locale's alternate date representation.<sup>[1](#notice)</sup>  |

#### Day

| Specifier | Description |
|--|--|
| `%d`<br>`%Od`<br>`%`*N*`d`<br>`%e`<br>`%Oe`<br>`%`*N*`e` | The day of the month as a decimal number.<br> `%`*N*`d` specifies the maximum number of characters to read, for example `%1d`. If *N* isn't specified, the default is 2.<br>Leading zeroes are permitted but not required.<br>`%Od` (letter `O`, not zero) interprets the locale's alternative representation of the day of the month.<sup>[1](#notice)</sup> <br>`%e` is equivalent to `%d` and can be modified like `%d`.<sup>[1](#notice)</sup> |

#### Day of the week

| Specifier | Description |
|--|--|
| `%a`<br>`%A` | The locale's full or abbreviated case-insensitive weekday name.<br>`%A` is equivalent to `%a` |
| `%u`<br>`%`*N*`u` | The ISO weekday as a decimal number (1-7), where Monday is 1. <br>`%`*N*`u` specifies the maximum number of characters to read, for example `%2u`. If *N* isn't specified, the default is 1. Leading zeros are permitted but not required. |
| `%w`<br>`%`*N*`w`<br>`%Ow` | The weekday as a decimal number (0-6), where Sunday is 0.<br>`%`*N*`w` specifies the maximum number of characters to read, for example `%2w`. If *N* isn't specified, the default is 1.<br>Leading zeroes are permitted but not required.<br>`%Ow` (letter `O`, not zero) interprets the locale's alternative representation.<sup>[1](#notice)</sup>  |

#### Week/day of the year

| Specifier | Description |
|--|--|
| `%j`<br>`%`*N*`j` |  If the type being formatted is a specialization of duration, the decimal number of days without padding. Otherwise, the day of the year as a decimal number. `Jan 1` is `001`. If the result is fewer than three digits, it's left-padded with `0` (zero) to three digits.<br>`%`*N*`j`specifies the maximum number of characters to read, for example `%2j`. If *N* isn't specified, the default is 3. Leading digits are allowed but aren't required.  |
| `%U`<br>`%`*N*`U`<br>`%OU` | The week number of the year as a decimal number. The first Sunday of the year is the first day of week `01`. Days of the same year before that week are in week `00`. If the result is a single digit, it's prefixed with `0` (zero).<br>`%`*N*`U` specifies the maximum number of characters to read, for example `%2U`. If *N* isn't specified, the default is 2.<br>Leading zeros are permitted but no required.<br>`%OU` (letter `O`, not zero) parses the locale's alternative representation.<sup>[1](#notice)</sup>  |
| `%W`<br>`%`*N*`W`<br>`%OW` |The week number of the year as a decimal number. The first Monday of the year is the first day of week `01`. Days of the same year before that week are in week `00`.<br>If the result is a single digit, it's prefixed with `0` (zero).<br>`%`*N*`W` specifies the maximum number of characters to read, for example `%2W`. If *N* isn't specified, the default is 1<br>Leading zeros are permitted but no required.`%OW` (letter `O`, not zero) parses the locale's alternative representation.<sup>[1](#notice)</sup>  |

#### Time of day

| Specifier | Description |
|--|--|
| `%H`<br>`%`*N*`H`<br>`%OH` | The hour (24-hour clock) as a decimal number. If the result is a single digit, it's prefixed with a `0` (zero).<br>`%`*N*`H` specifies the maximum number of characters to read, for example, `%1H`.  If *N* isn't specified, the default is 2.<br>Leading zeroes are permitted but not required.<br>`%OH` (letter `O`, not zero) parses the locale's alternative representation.<sup>[1](#notice)</sup>  |
| `%I`<br>`%`*N*`I`<br>`%OI` | The hour (12-hour clock) as a decimal number. If the result is a single digit, it's prefixed with `0` (zero).<br>`%`*N*`I` specifies the maximum number of characters to read, for example, `%1I`.  If *N* isn't specified, the default is 2.<br>Leading zeroes are permitted but not required.<br>`%OI` (letter `O`, not zero) parses the locale's alternative representation.<sup>[1](#notice)</sup>  |
| `%M`<br>`%`*N*`M`<br>`%OM` | The minutes as a decimal number. If the result is a single digit, it's prefixed with `0` (zero).<br>`%`*N*`M` specifies the maximum number of characters to read, for example `%3M`. If *N* isn't specified, the default is 2.<br>Leading zeroes are permitted but not required.<br>`%OM` (letter `O`, not zero) parses the locale's alternative representation.<sup>[1](#notice)</sup> |
|`%S`<br>`%`*N*`S`<br>`%OS` | Seconds as a decimal number. If the number of seconds is less than 10, the result is prefixed with `0` (zero). If the precision of the input can't be exactly represented with seconds, then the format is a decimal floating-point number with a fixed format. It has a microseconds precision if the function can't convert the floating-point decimal seconds within 18 fractional digits. Otherwise, its precision matches the precision of the input. The character for the decimal point is localized according to the locale.<br>`%`*N*`S` specifies the maximum number of characters to read, for example `%3S`. If *N* isn't specified, the default is 2.<br>Leading zeroes are permitted but not required.<br>`%OS` (letter `O`, not zero) parses the locale's alternative representation.<sup>[1](#notice)</sup>  |
| `%p` | The locale's equivalent of the AM/PM designations associated with a 12-hour clock. |
| `%r` | The locale's 12-hour clock time. |
| `%R` | Equivalent to `%H:%M`. |
| `%T`| Equivalent to `"%H:%M:%S"`. |
| `%X`, `%EX` | The locale's time representation.<br>`%EX` parses the alternate locale's time representation.<sup>[1](#notice)</sup>  |

#### Month

| Specifier | Description |
|--|--|
|`%b`, `%B`, `%h`| The locale's full or abbreviated month name. If the value doesn't contain a valid month, a `format_error` exception is thrown.<br>`%h` is equivalent to `%b`. |
| `%m`, `%`*N*`m`, `%Om` | The month as a decimal number. Jan is 1.<br>`%`*N*`m` specifies the maximum number of characters to read, for example, `%3m`. If *N* isn't specified, the default is 2.<br>Leading zeroes are permitted but not required.<br>`%Om` (letter `O`, not zero) interprets the locale's alternative representation.<sup>[1](#notice)</sup> |

#### Year

| Specifier | Description |
|--|--|
|`%C`, `%`*N*`C`, `%EC`| The century as a decimal number.<br>`%`*N*`C` specifies the maximum number of characters to read, for example, `%1N`. If *N* isn't specified, the default is 2. Leading zeroes are permitted but not required.<br>`%EC` interprets the locale's alternative representation of the century. |
|`%y`, `%`*N*`y`, `%Ey`, `%Oy` | The last two decimal digits of the year. If the century isn't otherwise specified (for example, by using `%C`), values in the range `[69, 99]` are presumed to refer to the years 1969 to 1999, and values in the range `[00, 68]` are presumed to refer to the years 2000 to 2068.<br>`%`*N*`y` specifies the maximum number of characters to read. If *N* isn't specified, the default is 2.<br>Leading zeroes are permitted but not required.<br>`%Ey` and `%Oy` (letter `O`, not zero) interpret the locale's alternative representation.<sup>[1](#notice)</sup> |
| `%Y`, `%`*N*`Y`, `%EY`,  | The year as a decimal number. If the result is fewer than four digits, it's left-padded with `0` (zero) to four digits.<br>`%`*N*`Y` specifies the maximum number of characters to read. If *N* isn't specified, the default is 4.<br>`%EY` parses the locale's alternative full year representation.<sup>[1](#notice)</sup>  |

#### ISO 8601 week-based year

In ISO 8601, weeks begin with Monday. The first week of the year must include January 4 and include the first Thursday of the year.

| Specifier | Replacement                               |
|:---------:|:------------------------------------------|
| `%g`<br>`%`*N*`g`| The last two decimal digits of the ISO week-based year. If the result is a single digit, is prefixed by `0` (zero). `%`*N*`g` specifies the maximum number of characters to read, for example, `%1g`. If *N* isn't specified, the default is 2 |
| `%G`<br>`%`*N*`G`| The ISO week-based year as a decimal number. If the result is fewer than four digits, it's left-padded with `0` (zero) to four digits. `%`*N*`G` specifies the maximum number of characters to read, for example, `%1G`. If *N* isn't specified, the default is 4|
| `%V`<br>`%OV`<br>`%`*N*`V`| The ISO week-based week number as a decimal number. If the result is a single digit, it's prefixed with `0` (zero). `%`*N*`V` specifies the maximum number of characters to read, for example, `%1V`. If *N* isn't specified, the default is 2<br>`%OV` (letter `O`, not zero) parses the locale's alternative representation.<sup>[1](#notice)</sup>  |

#### General

| Specifier | Replacement |
|:-:|:-|
| `%%` | Matches the % character |
| `%c`<br>`%Ec`| The locale's date and time representation.<br>`%Ec` interprets the locale's alternate date and time representation.<sup>[1](#notice)</sup> |
| `%n` | Matches a new-line character |
| `%t` | Matches zero or one whitespace character |
| `%z`<br>`%Ez`<br>`%Oz` | The offset from UTC in the format `[+|-]hh[mm]`. For example, `-0430` refers to 4 hours 30 minutes behind UTC, and `04` refers to 4 hours ahead of UTC.<br>`%Ez` and `%Oz` (letter `O`, not zero) parse a `:` between the hours and minutes and render leading zeroes on the hour field optional<sup>[1](#notice)</sup>: `[+|-]h[h][:mm]`. For example, `-04:30` refers to 4 hours 30 minutes behind UTC, and 4 refers to 4 hours ahead of UTC. |
| `%Z` | The time zone abbreviation or name. A single word is parsed. This word can only contain alphanumeric characters from the basic source character set, or one of `_`, `/`, `-`, or `+`.

#### Flags by type

| Class | Specifier/Flag |
|--|--|
| [`day`](day-class.md) | d, e |
| [`duration`](duration-class.md) | j, H, I, M, S, r, R, T, p, (q, Q are only for format, not parsing) |
| `file_time` | Z, z, c, x, X, D, F, g, G, j, U, V, W, Y, y, C, b, h, B, m, d, e, a, A, u, w, H, I, M, S, r, R, T, p |
| `gps_time` | Z, z, c, x, X, D, F, g, G, j, U, V, W, Y, y, C, b, h, B, m, d, e, a, A, u, w, H, I, M, S, r, R, T, p |
| [`hh_mm_ss`](hhmmss-class.md) | H, I, M, S, r, R, T, p |
| `local_time` | c, x, X, D, F, g, G, j, U, V, W, Y, y, C, b, h, B, m, d, e, a, A, u, w, H, I, M, S, r, R, T, p |
| `local_time_format_t` | z, Z, c, x, X, D, F, Y, C, y, b, B, h, m, d, e, a, A, u, w, H, I, M, S, r, R, T, p, g, G, U, V, W |
| `local_info` | z, Z |
| [`month`](month-class.md) | b, h, B, m |
| [`month_day`](month-day-class.md) | B, d, j, e, b, h, m |
| [`month_day_last`](month-day-last-class.md) | B, d, j, e, b, h, m |
| [`month_weekday`](month-weekday-class.md) | b, B, h, m, a, A, u, w |
| [`month_weekday_last`](month-weekday-last-class.md) | b, B, h, m, a, A, u, w |
| `sys_info` | z, Z |
| `sys_time` | Z, z, c, x, X, D, F, g, G, j, U, V, W, Y, y, C, b, h, B, m, d, e, a, A, u, w, H, I, M, S, r, R, T, p |
| `tai` | Z, z, c, x, X, D, F, g, G, j, U, V, W, Y, y, C, b, h, B, m, d, e, a, A, u, w, H, I, M, S, r, R, T, p |
| `utc_time` | Z, z, c, x, X, D, F, g, G, j, U, V, W, Y, y, C, b, h, B, m, d, e, a, A, u, w, H, I, M, S, r, R, T, p |
| [`weekday`](weekday-class.md) | a, A, u, w |
| [`weekday_indexed`](weekdayindexed-class.md) | a, A, u, w |
| [`weekday_last`]() | a, A, u, w |
| [`year`](year-class.md) | Y, y, C |
| `year_month` | Y, y, B, g, G, h, C, b, m |
| `year_month_day` | D, F, g, G, j, U, V, W, Y, y, C, b, h, B, m, d, e, a, A, u, w |
| `year_month_day_last` | D, F, g, G, j, U, V, W, Y, y, C, b, h, B, m, d, e, a, A, u, w |
| `year_month_weekday` | D, F, g, G, j, U, V, W, Y, y, C, b, h, B, m, d, e, a, A, u, w |
| `year_month_weekday_last` | D, F, g, G, j, U, V, W, Y, y, C, b, h, B, m, d, e, a, A, u, w |
| `zoned_time` | z, Z, c, x, X, D, F, Y, C, y, b, B, h, m, d, e, a, A, u, w, H, I, M, S, r, R, T, p, g, G, U, V, W |

<a name="notice"></a><sup>1</sup>The implementation is currently consistent with [strftime](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) in that although `O` (letter O) and `e` are accepted, they're ignored. That is, `"%Od"` is interpreted as `"%d"`.

## <a name="std-chrono-get-leap-second-info"></a> `get_leap_second_info`

Returns a [`leap_second_info`](./leap-second-info-struct.md) for the specified time. This provides info about whether the supplied time occurs during a leap second insertion. It also provides the number of leap seconds that have been added between January 1, 1970 and the specified time. A leap second insertion occurs when the International Earth Rotation and Reference Systems Service (IERS) declares that a leap second will be added (resulting in a 61 second minute) to account for the difference between atomic time and time tracked by measuring the rotation of the earth, which is irregular, and is gradually slowing.

### Syntax

```cpp
template<class Duration>
leap_second_info
get_leap_second_info(const utc_time<Duration>& ut);  // C++20
```

### Parameters

*`ut`*\
The source `utc_time` to get the `leap_second_info` for.

### Return value

Returns a `leap_second_info` whose member `is_leap_second` is **`true`** if *`ut`* is during a positive leap second insertion; otherwise, **`false`**. The `elapsed` member holds the sum of leap seconds between the epoch date `1970-01-01`and *`ut`*. If `is_leap_second` is **`true`**, the leap second referred to by *`ut`* is included in the `elapsed` sum.

## <a name="std-chrono-get-tzdb"></a> `get_tzdb`

Gets the first entry in the program-wide time zone database list.

### Syntax

```cpp
const tzdb& get_tzdb();  // C++20
```

### Return value

Returns a reference to the first `tzdb` object as if by a call to `get_tzdb_list().front()`. It throws a `runtime_error` exception if it's the first reference to the time zone database and the time zone database can't be initialized.

### Remarks

If it hasn't been initialized yet, `get_tzdb` initializes the program-wide time zone database on first access. Upon initialization, the database is a `tzdb_list` that holds a single initialized `tzdb` object.

## <a name="std-chrono-get-tzdb-list"></a> `get_tzdb_list`

Gets the program-wide singleton time zone database.

### Syntax

```cpp
tzdb_list& get_tzdb_list();  // C++20
```

### Return value

Returns a reference to the program-wide `tzdb_list` object. It throws a `runtime_error` exception if it can't return a reference to a valid `tzdb_list` object.

### Remarks

If it hasn't been initialized yet, `get_tzdb_list` initializes the program-wide time zone database on first access. Upon initialization, the database is a `tzdb_list` that holds a single initialized `tzdb` object. The `get_tzdb_list` function is thread-safe.

## <a name="std-chrono-is-am"></a> `is_am`

Predicate for whether the specified hour is in the *ante-meridiem* (AM) part of the day.

### Syntax

```cpp
constexpr bool is_am(const hours& h) noexcept;  // C++20
```

### Parameters

*`h`*\
The source `hours` representation in 24-hour time notation.

### Return value

Returns **`true`** if `0h <= h && h <= 11h`, otherwise **`false`**.

## <a name="std-chrono-is-pm"></a> `is_pm`

Predicate for whether the specified hour is in the *post-meridiem* (PM) part of the day.

### Syntax

```cpp
constexpr bool is_pm(const hours& h) noexcept;  // C++20
```

### Parameters

*`h`*\
The source `hours` representation in 24-hour time notation.

### Return value

Returns **`true`** if  `12h <= h && h <= 23h`, otherwise **`false`**.

## <a name="std-chrono-locate-zone"></a> `locate_zone`

Gets a time zone object specified by time zone name.

### Syntax

```cpp
const time_zone* locate_zone(string_view tz_name);  // C++20
```

### Parameters

*`tz_name`*\
The name of the time zone to return.

### Return value

Returns a pointer to a [`time_zone`](./time-zone-class.md) as if by a call to `get_tzdb().locate_zone(tz_name)`. It throws a `runtime_error` exception if it can't find the specified time zone, or if it's the first reference to the time zone database and the time zone database can't be initialized.

### Remarks

If it hasn't been initialized yet, `locate_zone` initializes the program-wide time zone database on first access. Upon initialization, the database is a `tzdb_list` that holds a single initialized `tzdb` object.

## <a name="std-chrono-make12"></a> `make12`

Returns the specified hour in 12-hour time notation.

### Syntax

```cpp
constexpr hours make12(const hours& h) noexcept;  // C++20
```

### Parameters

*`h`*\
The source `hours` representation in 24-hour time notation.

### Return value

Returns the 12-hour equivalent of *`h`* in the range `[1h, 12h]`. The return value is unspecified if *`h`* isn't in the range `[0h, 23h]`.

## <a name="std-chrono-make24"></a> `make24`

Returns the specified hour in 24-hour time notation.

### Syntax

```cpp
constexpr hours make24(const hours& h, bool is_pm) noexcept;  // C++20
```

### Parameters

*`h`*\
The source `hours` representation in 12-hour time notation.

*`is_pm`*\
The source `hours` representation is PM (if **`true`**) or AM (if **`false`**).

### Return value

If `is_pm` is **`false`**, `make24` returns the 24-hour equivalent of *`h`* in the range `[0h, 11h]`, assuming *`h`* represents an AM hour. Otherwise, it returns the 24-hour equivalent of *`h`* in the range `[12h, 23h]`, assuming *`h`* represents a PM hour. The return value is unspecified if *`h`* isn't in the range `[1h, 12h]`.

## <a name="std-chrono-reload-tzdb"></a> `reload_tzdb`

Reloads the time zone database if updated information is available.

### Syntax

```cpp
const tzdb& reload_tzdb();
```

### Return value

After it makes a time zone database update, if any, `reload_tzdb` returns a reference to the first `tzdb` object as if by a call to `get_tzdb_list().front()`. It throws a `runtime_error` exception if it can't return a reference to a valid `tzdb` object.

### Remarks

The *local* time zone database is the one supplied when the program first accesses the database, such as by a call to `current_zone`. While the program is running, the implementation may update the time zone database. The update doesn't affect the program in any way unless the program calls the `reload_tzdb` function. The potentially updated time zone database is called the *remote* time zone database.

The `reload_tzdb` function checks the version of both the local time zone database and the remote time zone database. If the versions of the local and remote databases are the same, it makes no changes. Otherwise, the remote database is pushed to the front of the `tzdb_list` accessed by `get_tzdb_list`. An update doesn't invalidate any pointers, references, or iterators. The `reload_tzdb` function is thread-safe for calls to `get_tzdb_list().front()` and `get_tzdb_list().erase_after()`.

## <a name="std-chrono-remote-version"></a> `remote_version`

Gets a string that contains the latest remote database version.

### Syntax

```cpp
string remote_version();
```

### Return value

Returns a `string` that contains the latest remote database version.

## <a name="std-chrono-round-duration"></a> `round(duration)`

Rounds the specified `duration` to the nearest representable `duration` in the target type.

### Syntax

```cpp
template<class ToDuration, class Rep, class Period>
constexpr ToDuration
round(const duration<Rep, Period>& d);  // C++17
```

### Parameters

*`ToDuration`*\
The target `duration` type. Constrained as a specialization of `duration` where `treat_as_floating_point_v<typename ToDuration::rep>` is **`false`**.

*`Rep`*\
The type of the internal representation of the source `duration` *`d`*.

*`Period`*\
A [`std::ratio`](./ratio.md) type representing the ratio of one second to the source `Rep` type (that is, seconds per `Rep`).

*`d`*\
The source `duration` object.

### Return value

Returns the nearest `duration` representable in `ToDuration` to the parameter *`d`*. Ties go to the even value, that is, the value `t` where `t % 2 == 0`.

### Remarks

`round` doesn't participate in overload resolution unless the `ToDuration` type is an instance of a [`duration`](../standard-library/duration-class.md), and `ToDuration` has an integral representation.



## <a name="std-chrono-round-time-point"></a> `round(time_point)`

Returns the nearest time point representable in the target `duration` to the specified time point.

```cpp
template<class ToDuration, class Clock, class Duration>
constexpr time_point<Clock, ToDuration>
round(const time_point<Clock, Duration>& tp);
```

### Parameters

*`ToDuration`*\
The target `duration` type. Constrained as a specialization of `duration` where `treat_as_floating_point_v<typename ToDuration::rep>` is **`false`**.

*`Clock`*\
The common clock type of the result and the source parameter *`tp`*.

*`Duration`*\
The `duration` type of *`tp`*.

*`tp`*\
The source `time_point` object.

### Return value

Returns the nearest time point representable using `ToDuration` to *`tp`*. Ties go to the even value, that is, the value `t` where `t % 2 == 0`. Effectively, `time_point<Clock, ToDuration>(round<ToDuration>(tp.time_since_epoch()));`.

### Remarks

`round` doesn't participate in overload resolution unless the `ToDuration` type is an instance of a [`duration`](../standard-library/duration-class.md).

## <a name="std-chrono-time-point-cast"></a> `time_point_cast`

Casts a [`time_point`](../standard-library/time-point-class.md) object to a `time_point` that has a different `duration` type.

### Syntax

```cpp
template <class ToDuration, class Clock, class Duration>
time_point<Clock, ToDuration>
time_point_cast(const time_point<Clock, Duration>& tp);  // C++11
```

### Parameters

*`ToDuration`*\
The target `duration` type. Constrained as a specialization of `duration`.

*`Clock`*\
The common clock type of the result and the source parameter *`tp`*.

*`Duration`*\
The `duration` type of *`tp`*.

*`tp`*\
The `time_point` object to cast to one that has the `ToDuration` type.

### Return value

Returns a `time_point` object that has a `ToDuration` type. Effectively, `time_point<Clock, ToDuration>(duration_cast<ToDuration>(t.time_since_epoch()));`.

### Remarks

Unless `ToDuration` is a specialization of [`duration`](../standard-library/duration-class.md), this function doesn't participate in overload resolution.

## See also

[`<chrono>`](./chrono.md)\
[`chrono` literals](./chrono-literals.md)\
[`chrono` operators](./chrono-operators.md)\
[`duration` class](./duration-class.md)\
[`time_point` class](./time-point-class.md)\
[`time_zone` class](./time-zone-class.md)