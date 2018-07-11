---
title: "Processing Notification Messages in Month Calendar Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["CMonthCalCtrl class [MFC], notifications", "CMonthCalCtrl class [MFC], day states", "month calendar controls [MFC], notification messages", "notifications [MFC], for CMonthCalCtrl", "notifications [MFC], month calendar control"]
ms.assetid: 607c3e90-0756-493b-9503-ce835a50c7ab
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Processing Notification Messages in Month Calendar Controls
As users interact with the month calendar control (selecting dates and/or viewing a different month), the control (`CMonthCalCtrl`) sends notification messages to its parent window, usually a view or dialog object. Handle these messages if you want to do something in response. For example, when the user selects a new month to view, you could provide a set of dates that should be emphasized.  
  
 Use the Properties window to add notification handlers to the parent class for those messages you want to implement.  
  
 The following list describes the various notifications sent by the month calendar control.  
  
-   MCN_GETDAYSTATE Requests information about which days should be displayed in bold. For information on handling this notification, see [Setting the Day State of a Month Calendar Control](../mfc/setting-the-day-state-of-a-month-calendar-control.md).  
  
-   MCN_SELCHANGE Notifies the parent that the selected date or range of the date has changed.  
  
-   MCN_SELECT Notifies the parent that an explicit date selection has been made.  
  
## See Also  
 [Using CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)   
 [Controls](../mfc/controls-mfc.md)

