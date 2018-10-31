---
title: "SYSTEMTIME Structure"
ms.date: "11/04/2016"
f1_keywords: ["SYSTEMTIME"]
helpviewer_keywords: ["SYSTEMTIME structure [MFC]"]
ms.assetid: 9aaef4d6-de79-4fa1-8158-86b245ef5bff
---
# SYSTEMTIME Structure

The `SYSTEMTIME` structure represents a date and time using individual members for the month, day, year, weekday, hour, minute, second, and millisecond.

## Syntax

```
typedef struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
} SYSTEMTIME;
```

#### Parameters

*wYear*<br/>
The current year.

*wMonth*<br/>
The current month; January is 1.

*wDayOfWeek*<br/>
The current day of the week; Sunday is 0, Monday is 1, and so on.

*wDay*<br/>
The current day of the month.

*wHour*<br/>
The current hour.

*wMinute*<br/>
The current minute.

*wSecond*<br/>
The current second.

*wMilliseconds*<br/>
The current millisecond.

## Example

[!code-cpp[NVC_MFC_Utilities#39](../../mfc/codesnippet/cpp/systemtime-structure1_1.cpp)]

## Requirements

**Header:** winbase.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CTime::CTime](../../atl-mfc-shared/reference/ctime-class.md#ctime)

