---
title: "SYSTEMTIME Structure1 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SYSTEMTIME"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SYSTEMTIME structure"
ms.assetid: 9aaef4d6-de79-4fa1-8158-86b245ef5bff
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SYSTEMTIME Structure1
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [SYSTEMTIME Structure1](https://docs.microsoft.com/cpp/mfc/reference/systemtime-structure1).  
  
  
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
 [!code-cpp[NVC_MFC_Utilities#39](../../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_Utilities/Cpp/NVC_MFC_Utilities.cpp#39)]  
  
## Requirements  
 **Header:** winbase.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CTime::CTime](../../atl-mfc-shared/reference/ctime-class.md#CTime)







