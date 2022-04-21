---
description: "Learn more about: weekday Class"
title: "weekday class"
ms.date: "6/25/2021"
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

|Name|Description|
|----------|-----------------|
| [Constructors](#weekday) | Construct a `weekday`. |
| [`c_encoding`](#c_encoding) | Get the `weekday` value. |
| [`iso_encoding`](#iso_encoding) | Get the ISO 8601 `weekday` value. |
| [`ok`](#ok) | Check if the `weekday` value is valid. |
| [`operator++`](#op_++) | Increment the `weekday`. |
| [`operator+=`](#op_+=) | Add the specified number of weekdays to this `weekday`. |
| [`operator--`](#op_--) | Decrement the `weekday`. |
| [`operator-=`](#op_-=) | Subtract the specified number of weekdays from this `weekday`. |
| [`operator[]`](#op_[]) | Create a [weekday_indexed](weekdayindexed-class.md) or [weekday_last](weekdaylast-class.md) from this `weekday`. |

### Non-members

|Name|Description|
|----------|-----------------|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `weekday` from the given stream using the specified format. |
| [`operator+`](chrono-operators.md#op_add) | Add specified number of weekdays to this `weekday`. |
| [`operator-`](chrono-operators.md#op_minus) | Subtract the specified number of weekdays from this `weekday`, or find the difference between two `weekday` objects. |
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `weekday` objects are equal. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a  `weekday` to a stream. |

## Requirements

**Header:** `<chrono>` Since C++ 20

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="weekday"></a> Constructors

Constructs a `weekday`.

```cpp
1) weekday() = default; // C++20
2) explicit constexpr weekday(unsigned wd) noexcept; // C++20
3) constexpr weekday(const sys_days& dp) noexcept; // C++20
4) explicit constexpr weekday(const local_days& dp) noexcept; // C++20
```

### Parameters

*`dp`*\
Construct a `weekday` using the day of the week *`dp`*.

*`wd`*\
Construct a `weekday` with value *`wd`*.

### Remarks

1\) The default constructor doesn't initialize the weekday value.\
2\) Construct a `weekday` with the specified value.<br>If `wd` is 7, the `weekday` is constructed with a value of 0.<br>Don't initialize with values over 255 or the resulting `weekday` will have an unspecified value.\
3\) Computes what day of the week corresponds to the `std::chrono::sys_days` value `dp`, and constructs a `weekday` using that day.\
4\) Computes the day of the week that corresponds to the `std::chrono::local_days` value `dp`, and constructs a `weekday` using that day. It behaves as if you created the `weekday` using `weekday(std::chrono::sys_days(dp.time_since_epoch()))`.

### Example: Create a `weekday`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    weekday wd{ Wednesday };
    weekday wd2{ 3 };
    std::cout << wd << '\n' << wd2;
    
    return 0;
}
```

```output
Wednesday
Wednesday
```

## <a name="c_encoding"></a> `c_encoding`

```cpp
constexpr unsigned c_encoding() const noexcept;
```

### Return value

The weekday value.

## <a name="iso_encoding"></a> `iso_encoding`

 The weekday value, but with Sunday (0) is interpreted as 7 per ISO 8601.

```cpp
constexpr unsigned iso_encoding() const noexcept;
```

### Return value

The weekday value.

## <a name="ok"></a> `ok`

Check if the value stored in this `weekday` is in the valid range.

```cpp
constexpr bool is_leap() const noexcept;
```

### Return value

`true` if the weekday value is in the range [0, 6]. Otherwise, `false`.

## <a name="op_++"></a> `operator++`

Add 1 to the weekday value.

```cpp
1) constexpr std::chrono::weekday& operator++() noexcept;
2) constexpr std::chrono::weekday operator++(int) noexcept;
```

### Return value

1\) A reference to `*this` weekday *after* it has been incremented (a postfix increment).\
2\) A copy of the `weekday`, *before* it has been incremented (a prefix increment).

### Example: `operator++`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    std::chrono::weekday wd{Thursday};

    std::cout << wd << " " << ++wd << "\n"; // constexpr weekday& operator++() noexcept
    std::cout << wd << " " << wd++ << "\n"; // constexpr weekday operator++(int) noexcept
    std::cout << wd << "\n";

    return 0;
}
```

```output
Thu Fri
Fri Fri
Sat
```

### Remarks

The incremented value is modulo 7. It will always be in the range [0, 6].

## <a name="op_--"></a> `operator--`

Subtract 1 from the `weekday` value.

```cpp
1) constexpr std::chrono::weekday& operator--() noexcept;
2) constexpr std::chrono::weekday operator--(int) noexcept;
```

### Return value

1\) A reference to `*this` `weekday` *after* it has been decremented (a postfix decrement).\
2\) A copy of the `weekday` *before* it has been decremented (a prefix decrement).

### Example: `operator--`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    weekday y = weekday{Thursday};

    cout << y << " " << --y << "\n"; // constexpr weekday& operator--() noexcept
    cout << y << " " << y-- << "\n"; // constexpr weekday operator--(int) noexcept
    cout << y << "\n";

    return 0;
}
```

```output
Thu Wed
Wed Wed
Tue
```

### Remarks

If the decremented result is less than 0, it's set to 6.

## <a name="op_+="></a> `operator+=`

Add days to a `weekday`.

```cpp
constexpr weekday& operator+=(const days& d) noexcept;
```

### Parameters

`*d*`\
The number of days to add.

### Return value

The value of `*this + d`. The result will be modulo 7, in the range \[0, 6].

## <a name="op_-="></a> `operator-=`

Subtract days from the `weekday`.

```cpp
constexpr weekday& operator-=(const days& d) noexcept;
```

### Parameters

`*d*`\
The number of days to subtract.

### Return value

The value of `*this - d`. The result will be modulo 7, in the range \[0, 6].

## <a name="op_[]"></a> `operator[]`

Create a [weekday_indexed](weekdayindexed-class.md) or [weekday_last](weekdaylast-class.md) from this `weekday`.

```cpp
1) std::chrono::weekday_indexed(*this, index) // C++ 20
2) std::chrono::weekday_last(*this) // C++ 20
```

### Return value

1\) `std::chrono::weekday_indexed(*this, index)`\
2\) `std::chrono::weekday_last(*this)`

### Example: `operator[]`

```cpp
// compile using: /std:c++latest
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

```output
2021-01-11
2021-01-26
```

### Weekday constants

(C++20) The `<chrono>` header defines the following constants that you can use with `weekday` for greater convenience, type-safety, and maintainability of your code. These constants are in scope when `std::chrono` is in scope.

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

[`weekday_last` class](weekdaylast-class.md)\
[`weekday_indexed` class](weekdayindexed-class.md)\
[`<chrono>`](chrono.md)\
[Header Files Reference](cpp-standard-library-header-files.md)