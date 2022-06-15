---
description: "Learn more about: tzdb struct"
title: "tzdb struct"
ms.date: 10/15/2021
f1_keywords: ["chrono/std::chrono::tzdb", "chrono/std::chrono::tzdb::leap_seconds", "chrono/std::chrono::tzdb::links", "chrono/std::chrono::tzdb::version", "chrono/std::chrono::tzdb::zones"]
helpviewer_keywords: ["std::chrono [C++], tzdb"]
dev_langs: ["C++"]
---
# `tzdb` struct

Represents a copy of the time zone database.

## Syntax

```cpp
struct tzdb; // C++ 20
```

## Remarks

Represents a copy of the IANA (Internet Assigned Numbers Authority) time zone database. The database contains information about each time zone and its history of local time adjustments. For more information about the database, see [Time Zone Database](https://data.iana.org/time-zones/tz-link.html).

## Members

|Member|Description|
|---------|-------------|
|`leap_seconds`| A sorted `vector<leap_second>`. A [`leap_second`](leap-second-class.md) provides a history of when leap seconds were added in the past. |
|`links`| A sorted `vector<time_zone_link>`. A [time_zone_link](time-zone-link-class.md) provides the alternate name for a given time zone. |
|`version`| A `std::string` containing the database version. |
|`zones`| A sorted `vector<time_zone>`. A [`time_zone`](time-zone-class.md) has the full history of time zone rules for a particular area. |

For an example of how to use these members, see [Example: `leap_seconds`, `links`, `zones`](#example-leap_seconds-links-zones) near the end of this topic.

## Member functions

|Name|Description|
|------|------|
| [`current_zone`](#currentzone) | Gets the local time zone. |
| [`locate_zone`](#locatezone) | Gets the specified time zone. |

## <a name="currentzone"></a> `current_zone`

Gets the computer's local time zone.

```cpp
time_zone* current_zone() const; // C++20
```

### Return value

A pointer to the [`time_zone`](time-zone-class.md) that represents the local time zone of the computer.

### Example: `current_zone`

This example demonstrates getting the current time zone.

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    auto& db = get_tzdb();
    std::cout << "Current zone: " << db.current_zone()->name();
    
    return 0;
}
```

```output
Current zone: America/Los_Angeles
```

## <a name="locatezone"></a> `locate_zone`

Gets the specified time zone.

```cpp
const time_zone* locate_zone(string_view name) const;
```

### Example: `locate_zone`

This example demonstrates getting a time zone by name.

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    auto& db = get_tzdb();
    std::cout << "Locate zone : " << db.locate_zone("America/New_York")->name() << "\n";
    
    return 0;
}
```

```output
Locate zone : America/New_York
```

## Example: `leap_seconds, links, zones`

This example demonstrates using various `tzdb` data members.

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    std::cout << "Leap seconds:\n";
    std::for_each(db.leap_seconds.begin(), db.leap_seconds.end(),
        [](const leap_second& ls)
        {
            std::cout << ls.date() << "\n";
        });

    std::cout << "Links:\n";
    std::for_each(db.links.begin(), db.links.end(),
        [](const time_zone_link& l)
        {
            std::cout << "Name: " << l.name() << "\t\tTarget:" << l.target() << '\n';
        });

    std::cout << "\nTime Zone descriptions:\n";
    std::for_each(db.zones.begin(), db.zones.end(),
        [](const time_zone& z)
        {
            std::cout << "Zone: " << z.name() << "\n";
        });
    
    return 0;
}
```

```output
Leap seconds:
1972-07-01 00:00:00
1973-01-01 00:00:00
1974-01-01 00:00:00
...
Links:
Name: ACT               Target:Australia/Darwin
Name: AET               Target:Australia/Sydney
Name: AGT               Target:America/Buenos_Aires
Name: ART               Target:Africa/Cairo
...
Time Zone descriptions:
Zone: Africa/Abidjan
Zone: Africa/Accra
Zone: Africa/Addis_Ababa
...
```

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## See also

[`<chrono>`](chrono.md)\
[`tzdb_list`](tzdb-list-class.md)\
[`time_zone_link`](time-zone-link-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)