---
title: "Processing Notification Messages in Date and Time Picker Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DTN_CLOSEUP"
  - "DTN_DATETIMECHANGE"
  - "DTN_DROPDOWN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DTN_DROPDOWN notification"
  - "DTN_DATETIMECHANGE notification"
  - "DTN_CLOSEUP notification"
  - "DateTimePicker control [MFC], handling notifications"
  - "CDateTimeCtrl class, handling notifications"
  - "DTN_FORMAT notification"
  - "DateTimePicker control [MFC]"
ms.assetid: ffbe29ab-ff80-4609-89f7-260b404439c4
caps.latest.revision: 11
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
# Processing Notification Messages in Date and Time Picker Controls
As users interact with the date and time picker control, the control (`CDateTimeCtrl`) sends notification messages to its parent window, usually a view or dialog object. Handle these messages if you want to do something in response. For example, when the user opens the date and time picker to display the embedded month calendar control, the **DTN_DROPDOWN** notification is sent.  
  
 Use the Properties window to add notification handlers to the parent class for those messages you want to implement.  
  
 The following list describes the various notifications sent by the date and time picker control.  
  
-   **DTN_DROPDOWN** Notifies the parent that the embedded month calendar control is about to be displayed. This notification is only sent when the **DTS_UPDOWN** style has not been set. For more information on this notification, see [Accessing the Embedded Month Calendar Control](../mfc/accessing-the-embedded-month-calendar-control.md).  
  
-   **DTN_CLOSEUP** Notifies the parent that the embedded month calendar control is about to be closed. This notification is only sent when the **DTS_UPDOWN** style has not been set.  
  
-   **DTN_DATETIMECHANGE** Notifies the parent that a change has occurred in the control.  
  
-   **DTN_FORMAT** Notifies the parent that text is needed to be displayed in a callback field. For more information on this notification and callback fields, see [Using Callback Fields in a Date and Time Picker Control](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).  
  
-   **DTN_FORMATQUERY** Requests the parent to supply the maximum allowable size of the string that will be displayed in a callback field. Handling this notification allows the control to properly display output at all times, reducing flicker within the control's display. For more information on this notification, see [Using Callback Fields in a Date and Time Picker Control](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).  
  
-   **DTN_USERSTRING** Notifies the parent that the user has finished editing the contents of the date and time picker control. This notification is only sent when the **DTS_APPCANPARSE** style has been set.  
  
-   **DTN_WMKEYDOWN** Notifies the parent when the user types in a callback field. Handle this notification to emulate the same keyboard response supported for non-callback fields in a date and time picker control. For more information on this notification, see [Supporting Callback Fields in a DTP Control](http://msdn.microsoft.com/library/windows/desktop/bb761726) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## See Also  
 [Using CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controls](../mfc/controls-mfc.md)

