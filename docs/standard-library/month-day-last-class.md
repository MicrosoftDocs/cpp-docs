---
description: "Learn more about: month_day_last Class"
title: "month_day_last class"
ms.date: "06/28/2021"
f1_keywords: ["chrono/std::chrono::month_day_last", "chrono/std::chrono::month_day_last::month", "chrono/std::chrono::month_day_last::ok"]
helpviewer_keywords: ["std::chrono [C++], month_day_last"]
dev_langs: ["C++"]
---

# `month_day_last` class  

 Represents the last day of a month.

## Syntax

```cpp
class month_day_last; // C++ 20
```

## Members

| Name | Description |
|--|--|
| [Constructor](#month_day_last) | Construct a `month_day_last` |
| [`month`](#month) | Return the month value. |
| [`ok`](#ok) | Check if this `month_day` is valid. |

## Non-members

| Name | Description |
|--|--|
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `month_days` are equal. |
| [`operator<=>`](chrono-operators.md#op_spaceship) | Compare this `month_day` against another `month_day`. The `>, >=, <=, <, !=` operators are synthesized by the compiler. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `month_day` to the given stream. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="month_day_last"></a> Constructor

Construct a `month_day_last` instance.

```cpp
constexpr explicit month_day_last(const month& m) noexcept;
```

### Parameters

*`m`*\
Construct a `month_day_last` for the month specified by *`m`*.

## Remarks

For information about C++ 20 syntax used to specify dates, see [`operator/`](chrono-operators.md#op_/)

### Example: Create a `month_day_last`

```cpp
// compile using: /std:c++latest
#include <chrono>

using namespace std::chrono;

int main()
{
    month_day_last mdl{ October / last };
    std::cout << mdl;

    return 0;
}
```

```output
Oct/last
```

## <a name="month"></a> `month`

 Return the month value.

```cpp
constexpr month month() const noexcept;
```

### Return value

The month value.

## <a name="ok"></a> `ok`

Check if the month stored in this `month_day_last` is valid.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the month value in this `month_day_last` is valid. Otherwise, `false`.

## See also

[`<chrono>`](chrono.md)\
[`month` class](month-class.md)\
[`month_day` class](month-day-class.md)\
[`month_day_last` class](month-day-last-class.md)\
[`month_weekday` class](month-weekday-class.md)\
[`month_weekday_last` class](month-weekday-last-class.md)\
[`operator/`](chrono-operators.md#op_/)
[Header Files Reference](cpp-standard-library-header-files.md)