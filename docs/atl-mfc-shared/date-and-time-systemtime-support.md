---
title: "Date and Time: SYSTEMTIME Support"
ms.date: "11/04/2016"
f1_keywords: ["SYSTEMTIME"]
helpviewer_keywords: ["system time", "FILETIME structure, with CTime class", "time [C++], formatting", "SYSTEMTIME structure", "dates [C++], MFC", "formatting [C++], time"]
ms.assetid: 201528e4-2ffa-48fc-af8f-203aa86d942a
---
# Date and Time: SYSTEMTIME Support

The [CTime](../atl-mfc-shared/reference/ctime-class.md) class has constructors that accept system and file times from Win32. If you use `CTime` objects for these purposes, you must modify their initialization accordingly, as described in this article.

For information about the SYSTEMTIME structure, see [SYSTEMTIME](../mfc/reference/systemtime-structure.md). For information about the FILETIME structure, see [FILETIME](../mfc/reference/filetime-structure.md).

MFC still provides `CTime` constructors that take time arguments in the MS-DOS style, but, starting in MFC version 3.0, the `CTime` class also supports a constructor that takes a Win32 `SYSTEMTIME` structure and another that takes a Win32 `FILETIME` structure.

The new `CTime` constructors are:

- CTime(const SYSTEMTIME& `sysTime`);

- CTime(const FILETIME& `fileTime`);

The *fileTime* parameter is a reference to a Win32 `FILETIME` structure, which represents time as a 64-bit value, a more convenient format for internal storage than a `SYSTEMTIME` structure and the format used by Win32 to represent the time of file creation.

If your code contains a `CTime` object initialized with the system time, you should use the `SYSTEMTIME` constructor in Win32.

You most likely will not use `CTime` `FILETIME` initialization directly. If you use a `CFile` object to manipulate a file, [CFile::GetStatus](../mfc/reference/cfile-class.md#getstatus) retrieves the file timestamp for you via a `CTime` object initialized with a `FILETIME` structure.

## What do you want to know more about

- [General date and time programming in MFC](../atl-mfc-shared/date-and-time.md)

- [Automation support of date and time programming](../atl-mfc-shared/date-and-time-automation-support.md)

## See Also

[Date and Time](../atl-mfc-shared/date-and-time.md)
