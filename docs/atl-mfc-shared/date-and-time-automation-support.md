---
title: "Date and Time: Automation Support | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "adding dates"
  - "calculating dates and times"
  - "formatting [Visual Studio], dates"
  - "dates, Automation support"
  - "elapsed time, calculating in Automation"
  - "COleDateTime class, Automation date/time support"
  - "COleDateTimeSpan class, Automation date/time support"
  - "Automation, date and time support"
  - "formatting [Visual Studio], time"
  - "calculations, date and time"
  - "time [Visual Studio], Automation support"
ms.assetid: 6eee94c4-943d-4ffc-bf7c-bdda89337ab0
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Date and Time: Automation Support
This article describes how to take advantage of the class library services related to date and time management. Procedures described include:  
  
-   [Getting the current time](../atl-mfc-shared/current-time-automation-classes.md)  
  
-   [Calculating elapsed time](../atl-mfc-shared/elapsed-time-automation-classes.md)  
  
-   [Formatting a string representation of a date/time](../atl-mfc-shared/formatting-time-automation-classes.md)  
  
 The [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) class provides a way to represent date and time information. It provides finer granularity and a greater range than the [CTime](../atl-mfc-shared/reference/ctime-class.md) class. The [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) class represents elapsed time, such as the difference between two `COleDateTime` objects.  
  
 The `COleDateTime` and `COleDateTimeSpan` classes are designed to be used with the `COleVariant` class used in Automation. `COleDateTime` and `COleDateTimeSpan` are also useful in MFC database programming, but they can be used whenever you want to manipulate date and time values. Although the `COleDateTime` class has a greater range of values and finer granularity than the `CTime` class, it requires more storage per object than `CTime`. There are also some special considerations when working with the underlying **DATE** type. See [The DATE Type](../atl-mfc-shared/date-type.md) for more details on the implementation of **DATE**.  
  
 `COleDateTime` objects can be used to represent dates between January 1, 100, and December 31, 9999. `COleDateTime` objects are floating point values, with an approximate resolution of 1 millisecond. `COleDateTime` is based on the **DATE** data type, defined in the MFC documentation under [COleDateTime::operator DATE](../atl-mfc-shared/reference/coledatetime-class.md#coledatetime__operator_date). The actual implementation of **DATE** extends beyond these bounds. The `COleDateTime` implementation imposes these bounds to facilitate working with the class.  
  
 `COleDateTime` does not support Julian dates. The Gregorian calendar is assumed to extend back in time to January 1, 100.  
  
 `COleDateTime` ignores Daylight Saving Time (DST). The following code example compares two methods of calculating a time span that crosses the DST switchover date: one using the CRT, and the other using `COleDateTime`. DST switches over, in most locales, in the second week in April and the third in October.  
  
 The first method sets two `CTime` objects, *time1* and *time2*, to April 5 and April 6 respectively, using the standard C type structures **tm** and `time_t`. The code displays *time1* and *time2* and the time span between them.  
  
 The second method creates two `COleDateTime` objects, `oletime1` and `oletime2`, and sets them to the same dates as *time1* and *time2*. It displays `oletime1` and `oletime2` and the time span between them.  
  
 The CRT correctly calculates a difference of 23 hours. `COleDateTimeSpan` calculates a difference of 24 hours.  
  
 Note that a workaround is used near the end of the example to display the date properly using `COleDateTime::Format`. See the Knowledge Base article "BUG: Format("%D") Fails for `COleDateTime` and `COleDateTimeSpan`" (Q167338).  
  
 [!code-cpp[NVC_ATLMFC_Utilities#176](../atl-mfc-shared/codesnippet/cpp/date-and-time-automation-support_1.cpp)]  
  
## See Also  
 [Date and Time](../atl-mfc-shared/date-and-time.md)

