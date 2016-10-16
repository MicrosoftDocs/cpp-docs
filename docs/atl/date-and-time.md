---
title: "Date and Time"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "time, MFC programming"
  - "time"
  - "MFC, date and time"
  - "dates, MFC"
ms.assetid: ecf56dc5-d418-4603-ad3e-af7e205a6403
caps.latest.revision: 7
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
# Date and Time
MFC supports several different ways of working with dates and times. These include:  
  
-   General-purpose time classes. The [CTime](../atl/ctime-class.md) and [CTimeSpan](../atl/ctimespan-class.md) classes encapsulate most of the functionality associated with the ANSI-standard time library, which is declared in TIME.H.  
  
-   Support for system clock. With MFC version 3.0, support was added to `CTime` for the Win32 `SYSTEMTIME` and `FILETIME` data types.  
  
-   Support for the Automation [DATE data type](../atl/date-type.md). **DATE** supports date, time, and date/time values. The [COleDateTime](../atl/coledatetime-class.md) and [COleDateTimeSpan](../atl/coledatetimespan-class.md) classes encapsulate this functionality. They work with the [COleVariant](../mfcref/colevariant-class.md) class using Automation support.  
  
## What do you want to know more about?  
  
-   [Date and Time: General-Purpose Classes](../atl/date-and-time--general-purpose-classes.md)  
  
-   [Date and Time: SYSTEMTIME Support](../atl/date-and-time--systemtime-support.md)  
  
-   [Date and Time: Automation Support](../atl/date-and-time--automation-support.md)  
  
-   [Date and Time: Database Support](../atl/date-and-time--database-support.md)  
  
## See Also  
 [Concepts](../mfc/mfc-concepts.md)   
 [General MFC Topics](../mfc/general-mfc-topics.md)