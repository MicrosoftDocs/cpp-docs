---
title: "Accessing the Embedded Month Calendar Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DateTimePicker control [MFC], accessing month calendar"
  - "CDateTimeCtrl class, accessing embedded control"
  - "month calendar controls, embedded in date/time picker"
  - "CMonthCalCtrl class, changing the font"
  - "month calendar controls, changing the font"
  - "DateTimePicker control [MFC]"
ms.assetid: 355e97ed-cf81-4df3-a2f8-9ddbbde93227
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
# Accessing the Embedded Month Calendar Control
The embedded month calendar control object can be accessed from the `CDateTimeCtrl` object with a call to the [GetMonthCalCtrl](../mfc/reference/cdatetimectrl-class.md#cdatetimectrl__getmonthcalctrl) member function.  
  
> [!NOTE]
>  The embedded month calendar control is used only when the date and time picker control does not have the **DTS_UPDOWN** style set.  
  
 This is useful if you want to modify certain attributes before the embedded control is displayed. To accomplish this, handle the **DTN_DROPDOWN** notification, retrieve the month calendar control (using [CDateTimeCtrl::GetMonthCalCtrl](../mfc/reference/cdatetimectrl-class.md#cdatetimectrl__getmonthcalctrl)), and make your modifications. Unfortunately, the month calendar control is not persistent.  
  
 In other words, when the user requests the display of the month calendar control, a new month calendar control is created (before the **DTN_DROPDOWN** notification). The control is destroyed (after the **DTN_CLOSEUP** notification) when dismissed by the user. This means that any attributes you modify, before the embedded control is displayed, are lost when the embedded control is dismissed.  
  
 The following example demonstrates this procedure, using a handler for the **DTN_DROPDOWN** notification. The code changes the background color of the month calendar control, with a call to [SetMonthCalColor](../mfc/reference/cdatetimectrl-class.md#cdatetimectrl__setmonthcalcolor), to gray. The code is as follows:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#5](../mfc/codesnippet/cpp/accessing-the-embedded-month-calendar-control_1.cpp)]  
  
 As stated previously, all modifications to properties of the month calendar control are lost, with two exceptions, when the embedded control is dismissed. The first exception, the colors of the month calendar control, has already been discussed. The second exception is the font used by the month calendar control. You can modify the default font by making a call to [CDateTimeCtrl::SetMonthCalFont](../mfc/reference/cdatetimectrl-class.md#cdatetimectrl__setmonthcalfont), passing the handle of an existing font. The following example (where `m_dtPicker` is the date and time control object) demonstrates one possible method:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#6](../mfc/codesnippet/cpp/accessing-the-embedded-month-calendar-control_2.cpp)]  
  
 Once the font has been changed, with a call to `CDateTimeCtrl::SetMonthCalFont`, the new font is stored and used the next time a month calendar is to be displayed.  
  
## See Also  
 [Using CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controls](../mfc/controls-mfc.md)

