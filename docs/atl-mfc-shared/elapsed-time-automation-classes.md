---
title: "Elapsed Time: Automation Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["adding dates", "calculating dates and times", "dates, calculating intervals", "elapsed time, calculating in Automation", "Automation classes, elapsed time", "time, elapsed", "intervals, date and time", "calculations, date and time"]
ms.assetid: 26b34b37-c10e-4b91-82c3-1dc5ffb5361f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Elapsed Time: Automation Classes

This procedure shows how to calculate the difference between two `CTime` objects and get a `CTimeSpan` result.

#### To calculate elapsed time

1. Create two `COleDateTime` objects.

2. Set one of the `COleDateTime` objects to the current time.

3. Perform some time-consuming task.

4. Set the other `COleDateTime` object to the current time.

5. Take the difference between the two times.

   [!code-cpp[NVC_ATLMFC_Utilities#178](../atl-mfc-shared/codesnippet/cpp/elapsed-time-automation-classes_1.cpp)]

## See Also

[Date and Time: Automation Support](../atl-mfc-shared/date-and-time-automation-support.md)

