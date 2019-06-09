---
title: "Current Time: General Purpose Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["time, setting current", "current time, CTime object", "procedures, getting current time", "initializing objects, with the current time", "time, getting current"]
ms.assetid: c39e6775-6a92-4b27-95a7-5c86ed371d8a
---
# Current Time: General Purpose Classes

The following procedure shows how to create a `CTime` object and initialize it with the current time.

### To get the current time

1. Allocate a `CTime` object, as follows:

   [!code-cpp[NVC_ATLMFC_Utilities#171](../atl-mfc-shared/codesnippet/cpp/current-time-general-purpose-classes_1.cpp)]

   > [!NOTE]
   > Uninitialized `CTime` objects are not initialized to a valid time.

1. Call the `CTime::GetCurrentTime` function to get the current time from the operating system. This function returns a `CTime` object that can be used to set the value of `CTime`, as follows:

   [!code-cpp[NVC_ATLMFC_Utilities#172](../atl-mfc-shared/codesnippet/cpp/current-time-general-purpose-classes_2.cpp)]

   Since `GetCurrentTime` is a static member function from the `CTime` class, you must qualify its name with the name of the class and the scope resolution operator (`::`), `CTime::GetCurrentTime()`.

Of course, the two steps outlined previously could be combined into a single program statement as follows:

[!code-cpp[NVC_ATLMFC_Utilities#173](../atl-mfc-shared/codesnippet/cpp/current-time-general-purpose-classes_3.cpp)]
