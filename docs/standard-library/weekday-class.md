---
description: "Learn more about: weekday Class"
title: "weekday class"
ms.date: "04/28/2021"
f1_keywords: ["chrono/std::chrono::weekday", "chrono/std::chrono::weekday::January", "chrono/std::chrono::weekday::February", "chrono/std::chrono::weekday::March","chrono/std::chrono::weekday::April","chrono/std::chrono::weekday::May","chrono/std::chrono::weekday::June","chrono/std::chrono::weekday::July","chrono/std::chrono::weekday::August","chrono/std::chrono::weekday::September","chrono/std::chrono::weekday::October","chrono/std::chrono::weekday::November","chrono/std::chrono::weekday::December","chrono/std::chrono::weekday::operator++", "chrono/std::chrono::weekday::operator--", "chrono/std::chrono::weekday::operator unsigned", "chrono/std::chrono::weekday::ok", "chrono/std::chrono::weekday::iso_encoding", "chrono/std::chrono::weekday::c_encoding"]
helpviewer_keywords: ["std::chrono [C++], weekday"]
---
# `weekday` class  

Represents a day of the week in the [Gregorian calendar](https://en.wikipedia.org/wiki/Proleptic_Gregorian_calendar). For example, Tuesday.

## Syntax

```cpp
class weekday; // C++20
```

## Remarks

 A `weekday` can hold a value of [0, 255], but typically holds a value [0, 6] to represent a day of the week.
See [Weekday constants](#weekday-constants), below, for constants that you can use with the `weekday` class.

## Members

### Constructors

|Name|Description|
|----------|-----------------|
| [weekday](#weekday) | Constructs a `weekday` object with an uninitialized value. |
| [weekday(unsigned wd)](#weekday) | Constructs a `weekday` object with the specified value. |
| [weekday(const sys_days& dp)](#weekday) | Constructs a `weekday` object with the specified value. |
| [const local_days& dp)](#weekday) | Constructs a `weekday` object with the specified value. |

### Functions

|Name|Description|
|----------|-----------------|
| [`c_encoding`](#c_encoding) | Get the `weekday` value. |
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `weekday` from the given stream using the specified format. |
| [`iso_encoding`](#iso_encoding) | Get the ISO 8601 `weekday` value. |
| [`ok`](#ok) | Check if the `weekday` value is valid. |

### Operators

|Name|Description|
|----------|-----------------|
| [`weekday::operator+`](chrono-operators.md#op_add) | Add specified number of weekdays to this weekday. |
| [`weekday::operator++`](#op_++) | Increment the weekday. |
| [`weekday::operator+=`](#op_+=) | Add the specified number of weekdays to this `weekday`. |
| [`weekday::operator-`](chrono-operators.md#op_minus) | Subtract the specified number of weekdays from this weekday, or find the difference between two weekdays. |
| [`weekday::operator--`](#op_--) | Decrement the weekday. |
| [`weekday::operator-=`](#op_-=) | Subtract the specified number of weekdays from this `weekday`. |
| [`weekday::operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `weekday`s are equal. |
| [`weekday::operator<<`](chrono-operators.md#op_left_shift) | Output a  `weekday` to a stream. |
| [`weekday::operator[]`](#op_[]) | Create a [weekday_indexed](weekdayindexed-class.md) or [weekday_last](weekdaylast-class.md) from this `weekday`. |

## Requirements

**Header:** \<chrono> Since C++ 20

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="weekday"></a> `weekday::weekday` constructors

Constructs a `weekday`.

```cpp
weekday() = default; // C++20

explicit constexpr weekday(unsigned wd) noexcept; // C++20

constexpr weekday(const sys_days& dp) noexcept; // C++20

explicit constexpr weekday(const local_days& dp) noexcept; // C++20
```

### Parameters

*`dp`*\
Construct a `weekday` using the day of the week *`dp`*.

*`wd`*\
Construct a `weekday` with value *`wd`*.

### Remarks

|**Constructor**  | **Description**  |
|---------|---------|
| `weekday() = default` | The default constructor doesn't initialize the weekday value. |
| `weekday(unsigned wd) noexcept` | Construct a `weekday` with the specified value.<br>If `wd` is 7, the `weekday` is constructed with a value of 0.<br>Don't initialize with values over 255 or the resulting `weekday` will have an unspecified value.  |
| `constexpr weekday(const sys_days& dp) noexcept;` | Computes what day of the week corresponds to the `std::chrono::sys_days` value `dp`, and constructs a `weekday` using that day.|
| `explicit constexpr weekday(const local_days& dp) noexcept;` | Computes what day of the week corresponds to the `std::chrono::local_days` value `dp`, and constructs a `weekday` using that day. It behaves as if you created the `weekday` using `weekday(std::chrono::sys_days(dp.time_since_epoch()))`|

## <a name="c_encoding"></a> `weekday::c_encoding`

```cpp
constexpr unsigned c_encoding() const noexcept;
```

### Return value

The weekday value.

## <a name="iso_encoding"></a> `weekday::iso_encoding`

 The weekday value, but with Sunday (0) is interpreted as 7 per ISO 8601.

```cpp
constexpr unsigned iso_encoding() const noexcept;
```

### Return value

The weekday value.

## <a name="ok"></a> `weekday::ok`

Check if the value stored in this `weekday` is in the valid range.

```cpp
constexpr bool is_leap() const noexcept;
```

### Return value

`true` if the weekday value in the range [0, 6]. Otherwise, `false`.

## <a name="op_++"></a> `weekday::operator++`

Add 1 to the weekday value.

```cpp
constexpr std::chrono::weekday& operator++() noexcept;
constexpr std::chrono::weekday operator++(int) noexcept;
```

### Return value

|Operator| Return value |
|----------|----------------|
|`constexpr std::chrono::weekday& operator++() noexcept;`| A reference to `*this` weekday *after* it has been incremented (a postfix increment).|
|`constexpr std::chrono::weekday operator++(int) noexcept;` | A copy of the `weekday`, *before* it has been incremented (a prefix increment).|

### Example: `operator++`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    std::chrono::weekday y{4};

    std::cout << y << " " << ++y << "\n"; // constexpr weekday& operator++() noexcept
    std::cout << y << " " << y++ << "\n"; // constexpr weekday operator++(int) noexcept
    std::cout << y << "\n";

    return 0;
}
```

Output:
```output
Thu Fri
Fri Fri
Sat
```

### Remarks

The incremented value is modulo 7. It will always be in the range [0, 6].

## <a name="op_--"></a> `weekday::operator--`

Subtract 1 from the `weekday` value.

```cpp
constexpr std::chrono::weekday& operator--() noexcept;
constexpr std::chrono::weekday operator--(int) noexcept;
```

### Return value

|Operator| Return value |
|----------|----------------|
| `constexpr std::chrono::weekday& operator--() noexcept;`| A reference to `*this` `weekday` *after* it has been decremented (a postfix decrement).|
| `constexpr std::chrono::weekday operator--(int) noexcept;` | A copy of the `weekday` *before* it has been decremented (a prefix decrement).|

### Example: `operator--`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    weekday y = weekday{4};

    cout << y << " " << --y << "\n"; // constexpr weekday& operator--() noexcept
    cout << y << " " << y-- << "\n"; // constexpr weekday operator--(int) noexcept
    cout << y << "\n";

    return 0;
}
```

Output:

```output
Thu Wed
Wed Wed
Tue
```

### Remarks

If the decremented result is less than 0, it's set to 6.

## <a name="op_+="></a> `weekday::operator+=`

Add days to a `weekday`.

```cpp
constexpr weekday& operator+=(const days& d) noexcept;
```

### Parameters

`*d*`\
The number of days to add.

### Return value

The value of `*this + d`. The result will be modulo 7, in the range \[0, 6].

## <a name="op_-="></a> `weekday::operator-=`

Subtract days from the `weekday`.

```cpp
constexpr weekday& operator-=(const days& d) noexcept;
```

### Parameters

`*d*`\
The number of days to subtract.

### Return value

The value of `*this - d`. The result will be modulo 7, in the range \[0, 6].

## <a name="op_[]"></a> `weekday::operator[]`

Create a [weekday_indexed](weekdayindexed-class.md) or [weekday_last](weekdaylast-class.md) from this `weekday`.

```cpp
1) std::chrono::weekday_indexed(*this, index) // C++ 20
2) std::chrono::weekday_last(*this) // C++ 20
```

### Return value

1) `std::chrono::weekday_indexed(*this, index)`
2) `std::chrono::weekday_last(*this)`

### Example: `weekday::operator[]`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
     constexpr auto firstMondayInJanuary =
        year_month_day{ Monday[2] / January / 2021y };

    std::cout << firstMondayInJanuary << "\n";

    constexpr auto lastMondayInJanuary = 
        year_month_day{ Tuesday[last] / January / 2021y };
    std::cout << lastMondayInJanuary << "\n";
}
```

Output:

```output
2021-01-11
2021-01-26
```

### Weekday constants

(C++20) The <chrono> header defines the following constants that you can use with `weekday` for greater convenience, type-safety, and maintainability of your code. These constants are in scope when `std::chrono` is in scope.

```cpp
// Calendrical constants
inline constexpr std::chrono::weekday Sunday{0};
inline constexpr std::chrono::weekday Monday{1};
inline constexpr std::chrono::weekday Tuesday{2};
inline constexpr std::chrono::weekday Wednesday{3};
inline constexpr std::chrono::weekday Thursday{4};
inline constexpr std::chrono::weekday Friday{5};
inline constexpr std::chrono::weekday Saturday{6};
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[`<chrono>`](../standard-library/chrono.md)