---
title: "SYSTEMTIME Structure"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 9aaef4d6-de79-4fa1-8158-86b245ef5bff
caps.latest.revision: 12
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
# SYSTEMTIME Structure
The `SYSTEMTIME` structure represents a date and time using individual members for the month, day, year, weekday, hour, minute, second, and millisecond.  
  
## Syntax  
  
```  
  
      typedef struct _SYSTEMTIME {  
   WORD wYear;  
   WORD wMonth;  
   WORD wDayOfWeek;  
   WORD wDay;  
   WORD wHour;  
   WORD wMinute;  
   WORD wSecond;  
   WORD wMilliseconds;  
} SYSTEMTIME;  
```  
  
#### Parameters  
 *wYear*  
 The current year.  
  
 *wMonth*  
 The current month; January is 1.  
  
 *wDayOfWeek*  
 The current day of the week; Sunday is 0, Monday is 1, and so on.  
  
 *wDay*  
 The current day of the month.  
  
 *wHour*  
 The current hour.  
  
 *wMinute*  
 The current minute.  
  
 *wSecond*  
 The current second.  
  
 *wMilliseconds*  
 The current millisecond.  
  
## Example  
 [!CODE [NVC_MFC_Utilities#39](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#39)]  
  
## Requirements  
 **Header:** winbase.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../VS_visualcpp/Structures--Styles--Callbacks--and-Message-Maps.md)   
 [CTime::CTime](../Topic/CTime::CTime.md)