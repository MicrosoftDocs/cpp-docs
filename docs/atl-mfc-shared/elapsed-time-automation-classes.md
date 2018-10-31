---
title: "Elapsed Time: Automation Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["adding dates", "calculating dates and times", "dates, calculating intervals", "elapsed time, calculating in Automation", "Automation classes, elapsed time", "time, elapsed", "intervals, date and time", "calculations, date and time"]
ms.assetid: 26b34b37-c10e-4b91-82c3-1dc5ffb5361f
---
# Elapsed Time: Automation Classes

This procedure shows how to calculate the difference between two `CTime` objects and get a `CTimeSpan` result.

## To calculate elapsed time

1. Create two `COleDateTime` objects.

1. Set one of the `COleDateTime` objects to the current time.

1. Perform some time-consuming task.

1. Set the other `COleDateTime` object to the current time.

1. Take the difference between the two times.

   [!code-cpp[NVC_ATLMFC_Utilities#178](../atl-mfc-shared/codesnippet/cpp/elapsed-time-automation-classes_1.cpp)]

## See Also

[Date and Time: Automation Support](../atl-mfc-shared/date-and-time-automation-support.md)
