---
title: "Using Callback Fields in a Date and Time Picker Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DTN_FORMATQUERY"
  - "DTN_FORMAT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DateTimePicker control [MFC], callback fields"
  - "callback fields in CDateTimeCtrl class"
  - "CDateTimeCtrl class, callback fields"
  - "CDateTimeCtrl class, handling DTN_FORMAT and DTN_FORMATQ"
  - "DTN_FORMATQUERY notification"
  - "DTN_FORMAT notification"
  - "DateTimePicker control [MFC]"
ms.assetid: 404f4ba9-cba7-4718-9faa-bc6b274a723f
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
# Using Callback Fields in a Date and Time Picker Control
In addition to the standard format characters that define date and time picker fields, you can customize your output by specifying certain parts of a custom format string as callback fields. To declare a callback field, include one or more "X" characters (ASCII Code 88) anywhere in the body of the format string. For example, the following string "'Today is: 'yy'/'MM'/'dd' (Day 'X')'"causes the date and time picker control to display the current value as the year followed by the month, date, and finally the day of the year.  
  
> [!NOTE]
>  The number of X's in a callback field does not correspond to the number of characters that will be displayed.  
  
 You can distinguish between multiple callback fields in a custom string by repeating the "X" character. Thus, the format string "XXddddMMMdd', 'yyyXXX" contains two unique callback fields, "XX" and "XXX".  
  
> [!NOTE]
>  Callback fields are treated as valid fields, so your application must be prepared to handle **DTN_WMKEYDOWN** notification messages.  
  
 Implementing callback fields in your date and time picker control consists of three parts:  
  
-   Initializing the custom format string  
  
-   Handling the **DTN_FORMATQUERY** notification  
  
-   Handling the **DTN_FORMAT** notification  
  
## Initializing the Custom Format String  
 Initialize the custom string with a call to `CDateTimeCtrl::SetFormat`. For more information, see [Using Custom Format Strings in a Date and Time Picker Control](../mfc/using-custom-format-strings-in-a-date-and-time-picker-control.md). A common place to set the custom format string is in the `OnInitDialog` function of your containing dialog class or `OnInitialUpdate` function of your containing view class.  
  
## Handling the DTN_FORMATQUERY Notification  
 When the control parses the format string and encounters a callback field, the application sends **DTN_FORMAT** and **DTN_FORMATQUERY** notification messages. The callback field string is included with the notifications so you can determine which callback field is being queried.  
  
 The **DTN_FORMATQUERY** notification is sent to retrieve the maximum allowable size in pixels of the string that will be displayed in the current callback field.  
  
 To properly calculate this value, you must calculate the height and width of the string, to be substituted for the field, using the control's display font. The actual calculation of the string is easily achieved with a call to the [GetTextExtentPoint32](http://msdn.microsoft.com/library/windows/desktop/dd144938) Win32 function. Once the size is determined, pass the value back to the application and exit the handler function.  
  
 The following example is one method of supplying the size of the callback string:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#8](../mfc/codesnippet/cpp/using-callback-fields-in-a-date-and-time-picker-control_1.cpp)]  
  
 Once the size of the current callback field has been calculated, you must supply a value for the field. This is done in the handler for the **DTN_FORMAT** notification.  
  
## Handling the DTN_FORMAT Notification  
 The **DTN_FORMAT** notification is used by the application to request the character string that will be substituted. The following example demonstrates one possible method:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#9](../mfc/codesnippet/cpp/using-callback-fields-in-a-date-and-time-picker-control_2.cpp)]  
  
> [!NOTE]
>  The pointer to the **NMDATETIMEFORMAT** structure is found by casting the first parameter of the notification handler to the proper type.  
  
## See Also  
 [Using CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controls](../mfc/controls-mfc.md)

