---
description: "Learn more about clock_conversion trait"
title: "clock_conversion struct"
ms.date: 10/12/2021
f1_keywords: ["chrono/std::chrono::clock_time_conversion"]
helpviewer_keywords: ["std::chrono [C++], clock_time_conversion"]
dev_langs: ["C++"]
---

# `clock_time_conversion` struct

A trait that specifies how to convert a [`time_point`](time-point-class.md) from one type of clock to another, while maintaining the equivalent point in time.

## Syntax

```cpp
// C++20
1) template<class Dest, class Source> struct clock_time_conversion {};
2) template<class Clock> struct clock_time_conversion<Clock, Clock>;
3) template<> struct clock_time_conversion<system_clock, system_clock>;
4) template<> struct clock_time_conversion<utc_clock, utc_clock>;
5) template<> struct clock_time_conversion<system_clock, utc_clock>;
6) template<> struct clock_time_conversion<utc_clock, system_clock>;
7) template<class Clock> struct clock_time_conversion<Clock, system_clock>;
8) template<class Clock> struct clock_time_conversion<system_clock, Clock>;
9) template<class Clock> struct clock_time_conversion<Clock, utc_clock>;
10) template<class Clock> struct clock_time_conversion<utc_clock, Clock>;
```

### Template parameters

*`Clock`*\
A clock type to convert from/to.

*`Dest`*\
The clock type to convert to.

*`Source`*\
The clock type to convert from.

The traits provide the following conversions:

1\) An empty struct that is defined only so that it can be specialized.\
2-4\) Identity conversions. Returns the same clock you pass in.\
5-6\) Converting between `sys_time` and `utc_time` calls `utc_clock::to_sys` or `utc_clock::from_sys` depending on the direction of the conversion.\
7-8\) Converting between `sys_time` and the specified clock, when the specified clock supports `to_sys` and `from_sys`, results in a call to `Clock::to_sys` or `Clock::from_sys`, depending on the direction of the conversion.\
9-10\) Converting between `utc_time`and the specified clock, when the specified clock supports `from_utc` and `to_sys`, results in a call to `Clock::to_utc` or `Clock::from_utc`, depending on the direction of the conversion.

## Members

|Name|Description|
|----------|-----------------|
| [`operator ()`](#op_parens) | Converts a `time_point` from one clock to another. |

## Remarks

You usually won't use this trait directly in your code. It's used by the [`clock_cast`](chrono-functions.md#std-chrono-clock-cast) conversion function.

## Requirements

**Header:** \<`chrono`>

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="op_parens"></a> `operator()`

Converts a `time_point` from one clock type to another while maintaining the equivalent point in time.

### Syntax

```cpp
1)
template <class Duration>
time_point<Clock, Duration> operator()(const time_point<Clock, Duration>& t) const;

2)
template <class Duration>
sys_time<Duration> operator()(const sys_time<Duration> & t) const;

3)
template <class Duration>
utc_time<Duration> operator()(const utc_time<Duration>& t) const;

4)
template <class Duration>
sys_time<Duration> operator()(const utc_time<Duration>& t) const;

5)
template <class Duration>
utc_time<Duration> operator()(const sys_time<Duration>& t) const;
```

### Parameters

**`t`**
The `time_point` to convert.

### Return value

1-3\) Identity conversions. No conversion. Returns `t` without any changes.\
4\) Returns `utc_clock::to_sys(t)`.\
5\) Returns` utc_clock::from_sys(t)`.

### Deduction guides

The following deduction guides are provided for `template <class Duration> operator()`:

```cpp
1)
template <class Duration> auto operator()(const sys_time<Duration>& t) const
    -> decltype(Clock::from_sys(t));

2)
template <class Duration> auto operator()(const time_point<SourceClock, Duration>& t) const
    -> decltype(Clock::to_sys(t));

3)
template <class Duration> auto operator()(const utc_time<Duration>& t) const
    -> decltype(Clock::from_utc(t));

4)
template <class Duration> auto operator()(const time_point<Clock, Duration>& t) const
    -> decltype(Clock::to_utc(t));
```

1\) Participates in overload resolution only when `Clock` supports `from_sys()` and returns `time_point<Clock, Duration>`.\
2\) Participates in overload resolution only when `Clock` supports `to_sys()` and returns `sys_time<Duration>`.\
3\) Participates in overload resolution only when `Clock` supports `from_utc()` and returns `time_point<Clock, Duration>`.\
4\) Participates in overload resolution only when `Clock` supports `to_utc()` and returns `utc_time<Duration>`.

## Example: `clock_time_conversion`

```cpp
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    auto sd = sys_days{ 2021y / July / 26 };
    auto time = clock_time_conversion<utc_clock, system_clock>{}(sd);
    std::cout << time << "\n";
    return 0;
}
```

```output
2021-07-26 00:00:00
```

## See also

[`<chrono>`](chrono.md)\
[`clock_cast`](chrono-functions.md#std-chrono-clock-cast)\
[Header Files Reference](cpp-standard-library-header-files.md)
