---
description: "Learn more about: last_spec struct"
title: "last_spec struct"
ms.date: 09/02/2021
f1_keywords: ["chrono/std::chrono::last_spec"]
---

# last_spec struct

Indicates the last item in a sequence, such as the last Monday of December, the last day of the month, and so on.

## Syntax

```cpp
struct last_spec; // C++20
inline constexpr last_spec last{} // C++20
```

## Remarks

Use this struct when creating calendrical types to indicate the last item in a sequence. When you specify `last` while creating a calendrical type like `month_day_last`, you're passing a `last_spec` to indicate that you want the last day in the month. For example:

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    constexpr auto monthDayLast{December/last}; // 'last' resolves to last_spec
    std::cout << monthDayLast << '\n';

    constexpr auto yearMonthWeekDayLast{year(2021)/July/Friday[last]}; // 'last' resolves to last_spec
    std::cout << yearMonthWeekDayLast << '\n';

    return 0;
}
```

```output
Dec/last
2021/Jul/Fri[last]
```

## Members

|Name|Description|
|----------|-----------------|
| [Constructor](#lastSpec) | Construct a `last_spec`. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="lastSpec"></a> Constructor

Construct a `last_spec`.

```cpp
explicit last_spec() = default;
```

### Remarks

You typically won't create a `last_spec` instance directly. You'll use `last` as shown in the first example.  

## See also

[`<chrono>`](chrono.md)\
[`month_day_last` Class](month-day-last-class.md)\
[`month_weekday_last` class](month-weekday-last-class.md)
[Header Files Reference](cpp-standard-library-header-files.md)
