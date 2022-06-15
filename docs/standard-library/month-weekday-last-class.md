---
description: "Learn more about: month_weekday_last Class"
title: "month_weekday_last class"
ms.date: "6/28/2021"
f1_keywords: ["chrono/std::chrono::month_weekday_last", "chrono/std::chrono::month_weekday_last::ok", "std::chrono::month_weekday_last::month_weekday_last", "chrono/std::chrono::month_weekday_last::ok", "chrono/std::chrono::month_weekday_last::month"]
helpviewer_keywords: ["std::chrono [C++], month_weekday_last"]
dev_langs: ["C++"]
---
# `month_weekday_last` class  

Represents the last weekday of a month.

## Syntax

```cpp
class month_weekday_last; // C++20
```

## Remarks

The year is unspecified.\
`month_weekday_last` is a trivially copyable and standard-layout class type.

## Members

|Name|Description|
|----------|-----------------|
| [Constructors](#month_weekday_last) | Constructs a `month_weekday_last`|
| [`month`](#month) | Get the month value. |
| [`ok`](#ok) | Check if the `month_weekday_last` is valid. |
| [`weekday_last`](#weekday_last) | Get the weekday value.|

## Non-members

|Name|Description|
|----------|-----------------|
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `month_weekday_last` instances are equal. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a  `month_weekday_last` to the specified stream. |

## Requirements

**Header:** `<chrono>` Since C++ 20

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="month_weekday_last"></a> Constructor

Construct a `month_weekday_last` initialized with a `month` and `weekday_last` value.

```cpp
constexpr month_weekday_last(const month& m, const weekday_last& wdl) noexcept;
```

### Parameters

*`m`*
The `month` value for the created `month_weekday_last` class.

*`wdl`*\
The` weekday_last` value for the created `month_weekday_last` class.

## Remarks: Constructor

For information about C++ 20 syntax to specify dates, see [`operator/`](chrono-operators.md#op_/)

### Example: Create a `month_weekday_last`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    constexpr auto mwdl{ January / Monday[last] }; // wdl is the last Monday of January of an unspecified year
    std::cout << mwdl << "\n";

    const auto theMonth = August;
    const auto wdl = Friday[last];
    month_weekday_last mwdl2(theMonth, wdl); 
    std::cout << mwdl2;

    return 0;
}
```

```output
Jan/Mon[last]
Aug/Fri[last]
```

## <a name="month"></a> `month()`

 Return the month value.

```cpp
constexpr month month() const noexcept;
```

### Return value

The month value.

## <a name="ok"></a> `ok`

Check if the value stored in this `month_weekday_last` is in the valid range.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the `month` and `weekday_last` value is in the valid range. Otherwise, `false`.

## <a name="weekday_last"></a> `weekday_last`

 Get the `weekday_last` value.

```cpp
constexpr weekday_last weekday_last() const noexcept;
```

### Return value

The `weekday_last` value.

## See also

[`<chrono>`](chrono.md)\
[`month` class](month-class.md)\
[`month_day` class](month-day-class.md)\
[`month_day_last` class](month-day-last-class.md)\
[`month_weekday` class](month-weekday-class.md)\
[`operator/`](chrono-operators.md#op_/)
