---
description: "Learn more about: Date and Time"
title: "Date and Time"
ms.date: "08/13/2019"
helpviewer_keywords: ["time, MFC programming", "time", "MFC, date and time", "dates, MFC"]
ms.assetid: ecf56dc5-d418-4603-ad3e-af7e205a6403
---
# Date and Time

MFC supports several different ways of working with dates and times:

- Support for the Automation [DATE data type](../atl-mfc-shared/date-type.md). DATE supports date, time, and date/time values. The [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) and [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) classes encapsulate this functionality. They work with the [COleVariant](../mfc/reference/colevariant-class.md) class using Automation support.

- General-purpose time classes. The [CTime](../atl-mfc-shared/reference/ctime-class.md) and [CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md) classes encapsulate most of the functionality associated with the ANSI-standard time library, which is declared in TIME.H.

- Support for system clock. With MFC version 3.0, support was added to `CTime` for the Win32 `SYSTEMTIME` and `FILETIME` data types.

## Date and Time: Automation Support

The [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) class provides a way to represent date and time information. It provides finer granularity and a greater range than the [CTime](../atl-mfc-shared/reference/ctime-class.md) class. The [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) class represents elapsed time, such as the difference between two `COleDateTime` objects.

The `COleDateTime` and `COleDateTimeSpan` classes are designed for use with the `COleVariant` class. `COleDateTime` and `COleDateTimeSpan` are also useful in MFC database programming, but they can be used whenever you want to manipulate date and time values. Although the `COleDateTime` class has a greater range of values and finer granularity than the `CTime` class, it requires more storage per object than `CTime`. There are also some special considerations when working with the underlying DATE type. For more information on the implementation of DATE, see [The DATE Type](../atl-mfc-shared/date-type.md).

`COleDateTime` objects can be used to represent dates between January 1, 100, and December 31, 9999. `COleDateTime` objects are floating point values, with an approximate resolution of 1 millisecond. `COleDateTime` is based on the DATE data type, defined in the MFC documentation under [COleDateTime::operator DATE](../atl-mfc-shared/reference/coledatetime-class.md#operator_date). The actual implementation of DATE extends beyond these bounds. The `COleDateTime` implementation imposes these bounds to make it easier to work with the class.

`COleDateTime` doesn't support Julian dates. The Gregorian calendar is assumed to extend back in time to January 1, 100.

`COleDateTime` ignores Daylight Saving Time (DST). The following code example compares two methods of calculating a time span that crosses the DST switchover date: one using the CRT, and the other using `COleDateTime`.

The first method sets two `CTime` objects, *time1* and *time2*, to April 5 and April 6 respectively, using the standard C type structures `tm` and `time_t`. The code displays *time1* and *time2* and the time span between them.

The second method creates two `COleDateTime` objects, `oletime1` and `oletime2`, and sets them to the same dates as *time1* and *time2*. It displays `oletime1` and `oletime2` and the time span between them.

The CRT correctly calculates a difference of 23 hours. `COleDateTimeSpan` calculates a difference of 24 hours.

[!code-cpp[NVC_ATLMFC_Utilities#176](../atl-mfc-shared/codesnippet/cpp/date-and-time-automation-support_1.cpp)]

### Get the current time

The following procedure shows how to create a `COleDateTime` object and initialize it with the current time.

#### To get the current time

1. Create a `COleDateTime` object.

1. Call `GetCurrentTime`.

   [!code-cpp[NVC_ATLMFC_Utilities#177](../atl-mfc-shared/codesnippet/cpp/current-time-automation-classes_1.cpp)]

### Calculate elapsed time

This procedure shows how to calculate the difference between two `COleDateTime` objects and get a `COleDateTimeSpan` result.

#### To calculate elapsed time

1. Create two `COleDateTime` objects.

1. Set one of the `COleDateTime` objects to the current time.

1. Perform some time-consuming task.

1. Set the other `COleDateTime` object to the current time.

1. Take the difference between the two times.

   [!code-cpp[NVC_ATLMFC_Utilities#178](../atl-mfc-shared/codesnippet/cpp/elapsed-time-automation-classes_1.cpp)]

### Format a time

#### To format a time

Use the `Format` member function of either [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) or [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) to create a character string representing the time or elapsed time.

   [!code-cpp[NVC_ATLMFC_Utilities#179](../atl-mfc-shared/codesnippet/cpp/formatting-time-automation-classes_1.cpp)]

For more information, see class [COleVariant](../mfc/reference/colevariant-class.md).

## Date and Time: Database Support

Starting in version 4.0, MFC database programming uses the [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) and [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) classes to represent date and time data. These classes, also used in Automation, are derived from class [COleVariant](../mfc/reference/colevariant-class.md). They supply better support for managing date and time data than do [CTime](../atl-mfc-shared/reference/ctime-class.md) and [CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md).

## Date and Time: SYSTEMTIME Support

The [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) class has constructors that accept system and file times from Win32.

The Win32 `FILETIME` structure represents time as a 64-bit value. It's a more convenient format for internal storage than a `SYSTEMTIME` structure, and the format used by Win32 to represent the time of file creation. For information about the SYSTEMTIME structure, see [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime). For information about the FILETIME structure, see [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime).

## See also

[Concepts](../mfc/mfc-concepts.md)\
[General MFC Topics](../mfc/general-mfc-topics.md)
