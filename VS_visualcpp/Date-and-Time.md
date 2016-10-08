---
title: "Date and Time"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: ecf56dc5-d418-4603-ad3e-af7e205a6403
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Date and Time
MFC supports several different ways of working with dates and times. These include:  
  
-   General-purpose time classes. The [CTime](../VS_visualcpp/CTime-Class.md) and [CTimeSpan](../VS_visualcpp/CTimeSpan-Class.md) classes encapsulate most of the functionality associated with the ANSI-standard time library, which is declared in TIME.H.  
  
-   Support for system clock. With MFC version 3.0, support was added to `CTime` for the Win32 `SYSTEMTIME` and `FILETIME` data types.  
  
-   Support for the Automation [DATE data type](../VS_visualcpp/DATE-Type.md). **DATE** supports date, time, and date/time values. The [COleDateTime](../VS_visualcpp/COleDateTime-Class.md) and [COleDateTimeSpan](../VS_visualcpp/COleDateTimeSpan-Class.md) classes encapsulate this functionality. They work with the [COleVariant](../VS_visualcpp/COleVariant-Class.md) class using Automation support.  
  
## What do you want to know more about?  
  
-   [Date and Time: General-Purpose Classes](../VS_visualcpp/Date-and-Time--General-Purpose-Classes.md)  
  
-   [Date and Time: SYSTEMTIME Support](../VS_visualcpp/Date-and-Time--SYSTEMTIME-Support.md)  
  
-   [Date and Time: Automation Support](../VS_visualcpp/Date-and-Time--Automation-Support.md)  
  
-   [Date and Time: Database Support](../VS_visualcpp/Date-and-Time--Database-Support.md)  
  
## See Also  
 [Concepts](../VS_visualcpp/MFC-Concepts.md)   
 [General MFC Topics](../VS_visualcpp/General-MFC-Topics.md)