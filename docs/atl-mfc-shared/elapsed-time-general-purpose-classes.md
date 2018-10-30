---
title: "Elapsed Time: General-Purpose Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["adding dates", "calculating dates and times", "dates, calculating intervals", "elapsed time, calculating", "elapsed time", "time, elapsed", "intervals, date and time", "calculations, date and time"]
ms.assetid: e5c5d3d2-ce1d-409e-875c-98848434e716
---
# Elapsed Time: General-Purpose Classes

The following procedure shows how to calculate the difference between two `CTime` objects and get a `CTimeSpan` result. Use the `CTime` and `CTimeSpan` objects to calculate the elapsed time, as follows:

   [!code-cpp[NVC_ATLMFC_Utilities#174](../atl-mfc-shared/codesnippet/cpp/elapsed-time-general-purpose-classes_1.cpp)]

Once you have calculated `elapsedTime`, you can use the member functions of `CTimeSpan` to extract the components of the elapsed-time value.

