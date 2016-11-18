---
title: "Notifications from a Rich Edit Control | Microsoft Docs"
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
  - "messages, notification"
  - "CRichEditCtrl class, notifications"
  - "rich edit controls, notifications"
  - "notifications, from CRichEditCtrl"
ms.assetid: eb5304fe-f4f3-4557-9ebf-3095dea383c4
caps.latest.revision: 10
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
# Notifications from a Rich Edit Control
Notification messages report events affecting a rich edit control ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). They can be processed by the parent window or, using message reflection, by the rich edit control itself. Rich edit controls support all of the notification messages used with edit controls as well as several additional ones. You can determine which notification messages a rich edit control sends its parent window by setting its "event mask."  
  
 To set the event mask for a rich edit control, use the [SetEventMask](../mfc/reference/cricheditctrl-class.md#cricheditctrl__seteventmask) member function. You can retrieve the current event mask for a rich edit control by using the [GetEventMask](../mfc/reference/cricheditctrl-class.md#cricheditctrl__geteventmask) member function.  
  
 The following paragraphs list several specific notifications and their uses:  
  
-   **EN_MSGFILTER** Handling the **EN_MSGFILTER** notification lets a class, either the rich edit control or its parent window, filter all keyboard and mouse input to the control. The handler can prevent the keyboard or mouse message from being processed or can change the message by modifying the specified [MSGFILTER](http://msdn.microsoft.com/library/windows/desktop/bb787936) structure.  
  
-   **EN_PROTECTED** Handle the **EN_PROTECTED** notification message to detect when the user attempts to modify protected text. To mark a range of text as protected, you can set the protected character effect. For more information, see [Character Formatting in Rich Edit Controls](../mfc/character-formatting-in-rich-edit-controls.md).  
  
-   **EN_DROPFILES** You can enable the user to drop files in a rich edit control by processing the **EN_DROPFILES** notification message. The specified [ENDROPFILES](http://msdn.microsoft.com/library/windows/desktop/bb787895) structure contains information about the files being dropped.  
  
-   **EN_SELCHANGE** An application can detect when the current selection changes by processing the **EN_SELCHANGE** notification message. The notification message specifies a [SELCHANGE](http://msdn.microsoft.com/library/windows/desktop/bb787952) structure containing information about the new selection.  
  
## See Also  
 [Using CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controls](../mfc/controls-mfc.md)

