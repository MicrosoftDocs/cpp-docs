---
title: "SYSTEMTIME Structure1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["SYSTEMTIME"]
dev_langs: ["C++"]
helpviewer_keywords: ["SYSTEMTIME structure [MFC]"]
ms.assetid: 9aaef4d6-de79-4fa1-8158-86b245ef5bff
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# SYSTEMTIME Structure1
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
 [!code-cpp[NVC_MFC_Utilities#39](../../mfc/codesnippet/cpp/systemtime-structure1_1.cpp)]  
  
## Requirements  
 **Header:** winbase.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CTime::CTime](../../atl-mfc-shared/reference/ctime-class.md#ctime)

