---
title: "Date and Time | Microsoft Docs"
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
  - "time, MFC programming"
  - "time"
  - "MFC, date and time"
  - "dates, MFC"
ms.assetid: ecf56dc5-d418-4603-ad3e-af7e205a6403
caps.latest.revision: 9
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
# Date and Time
MFC supports several different ways of working with dates and times. These include:  
  
-   General-purpose time classes. The [CTime](../atl-mfc-shared/reference/ctime-class.md) and [CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md) classes encapsulate most of the functionality associated with the ANSI-standard time library, which is declared in TIME.H.  
  
-   Support for system clock. With MFC version 3.0, support was added to `CTime` for the Win32 `SYSTEMTIME` and `FILETIME` data types.  
  
-   Support for the Automation [DATE data type](../atl-mfc-shared/date-type.md). **DATE** supports date, time, and date/time values. The [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) and [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) classes encapsulate this functionality. They work with the [COleVariant](../mfc/reference/colevariant-class.md) class using Automation support.  
  
## What do you want to know more about  
  
-   [Date and Time: General-Purpose Classes](../atl-mfc-shared/date-and-time-general-purpose-classes.md)  
  
-   [Date and Time: SYSTEMTIME Support](../atl-mfc-shared/date-and-time-systemtime-support.md)  
  
-   [Date and Time: Automation Support](../atl-mfc-shared/date-and-time-automation-support.md)  
  
-   [Date and Time: Database Support](../atl-mfc-shared/date-and-time-database-support.md)  
  
## See Also  
 [Concepts](../mfc/mfc-concepts.md)   
 [General MFC Topics](../mfc/general-mfc-topics.md)

