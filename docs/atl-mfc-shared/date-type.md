---
description: "Learn more about: DATE Type"
title: "DATE Type"
ms.date: "11/04/2016"
f1_keywords: ["DATE"]
helpviewer_keywords: ["Date data type, implementing", "Date data type", "DATE type", "Date data type, about Date data type", "MFC, date and time", "hour values representation"]
ms.assetid: 695853ed-b614-4575-b793-b8c287372038
---
# DATE Type

The DATE type is implemented using an 8-byte floating-point number. Days are represented by whole number increments starting with 30 December 1899, midnight as time zero. Hour values are expressed as the absolute value of the fractional part of the number. The following table illustrates several dates along with their DATE type numeric equivalent:

|Date and time|Representation|
|-------------------|--------------------|
|30 December 1899, midnight|0.00|
|1 January 1900, midnight|2.00|
|4 January 1900, midnight|5.00|
|4 January 1900, 6 A.M.|5.25|
|4 January 1900, noon|5.50|
|4 January 1900, 9 P.M.|5.875|

The DATE date type, as well as the `COleDateTime` class, represents dates and times as a classic number line. The `COleDateTime` class contains several methods for manipulating DATE values, including conversion to and from other common date formats.

The following points should be noted when working with these date and time formats in Automation:

- Dates are specified in local time; synchronization must be performed manually when working with dates in different time zones.

- The date types do not account for Daylight Savings Time.

- The date timeline becomes discontinuous for date values less than 0 (before 30 December 1899). This is because the whole-number portion of the date value is treated as signed, while the fractional part is treated as unsigned. In other words, the whole-number part of the date value may be positive or negative, while the fractional part of the date value is always added to the overall logical date. The following table illustrates a few examples:

|Date and time|Representation|
|-------------------|--------------------|
|27 December 1899, midnight|-3.00|
|28 December 1899, noon|-2.50|
|28 December 1899, midnight|-2.00|
|29 December 1899, midnight|-1.00|
|30 December 1899, 6 P.M.|-0.75|
|30 December 1899, noon|-0.50|
|30 December 1899, 6 A.M.|-0.25|
|30 December 1899, midnight|0.00|
|30 December 1899, 6 A.M.|0.25|
|30 December 1899, noon|0.50|
|30 December 1899, 6 P.M.|0.75|
|31 December 1899, midnight|1.00|
|1 January 1900, midnight|2.00|
|1 January 1900, noon|2.50|
|2 January 1900, midnight|3.00|

> [!CAUTION]
> Note that because 6:00 AM is always represented by a fractional value 0.25 regardless of whether the integer representing the day is positive (after December 30, 1899) or negative (before December 30, 1899), a simple floating point comparison would erroneously sort any DATE representing 6:00 AM on a day earlier than 12/30/1899 as *later* than a DATE representing 7:00 AM on that same day.

More information on issues related to the DATE and `COleDateTime` types can be found under [COleDateTime Class](../atl-mfc-shared/reference/coledatetime-class.md) and [Date and Time: Automation Support](./date-and-time.md).

## See also

[Date and Time](../atl-mfc-shared/date-and-time.md)<br/>
[COleDateTime Class](../atl-mfc-shared/reference/coledatetime-class.md)
