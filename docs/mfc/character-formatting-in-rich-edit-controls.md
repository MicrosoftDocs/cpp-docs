---
title: "Character Formatting in Rich Edit Controls | Microsoft Docs"
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
  - "formatting [C++], characters"
  - "rich edit controls, character formatting in"
  - "CRichEditCtrl class, character formatting in"
ms.assetid: c80f4305-75ad-45f9-8d17-d83d0fe79be5
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
# Character Formatting in Rich Edit Controls
You can use member functions of the rich edit control ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) to format characters and to retrieve formatting information. For characters, you can specify typeface, size, color, and effects such as bold, italic, and protected.  
  
 You can apply character formatting by using the [SetSelectionCharFormat](../mfc/reference/cricheditctrl-class.md#cricheditctrl__setselectioncharformat) and [SetWordCharFormat](../mfc/reference/cricheditctrl-class.md#cricheditctrl__setwordcharformat) member functions. To determine the current character formatting for the selected text, use the [GetSelectionCharFormat](../mfc/reference/cricheditctrl-class.md#cricheditctrl__getselectioncharformat) member function. The [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) structure is used with these member functions to specify character attributes. One of the important members of **CHARFORMAT** is **dwMask**. In `SetSelectionCharFormat` and `SetWordCharFormat`, **dwMask** specifies which character attributes will be set by this function call. `GetSelectionCharFormat` reports the attributes of the first character in the selection; **dwMask** specifies the attributes that are consistent throughout the selection.  
  
 You can also get and set the "default character formatting," which is the formatting applied to any subsequently inserted characters. For example, if an application sets the default character formatting to bold and the user then types a character, that character is bold. To get and set default character formatting, use the [GetDefaultCharFormat](../mfc/reference/cricheditctrl-class.md#cricheditctrl__getdefaultcharformat) and [SetDefaultCharFormat](../mfc/reference/cricheditctrl-class.md#cricheditctrl__setdefaultcharformat) member functions.  
  
 The "protected" character attribute does not change the appearance of text. If the user attempts to modify protected text, a rich edit control sends its parent window an **EN_PROTECTED** notification message, allowing the parent window to allow or prevent the change. To receive this notification message, you must enable it by using the [SetEventMask](../mfc/reference/cricheditctrl-class.md#cricheditctrl__seteventmask) member function. For more information about the event mask, see [Notifications from a Rich Edit Control](../mfc/notifications-from-a-rich-edit-control.md), later in this topic.  
  
 Foreground color is a character attribute, but background color is a property of the rich edit control. To set the background color, use the [SetBackgroundColor](../mfc/reference/cricheditctrl-class.md#cricheditctrl__setbackgroundcolor) member function.  
  
## See Also  
 [Using CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controls](../mfc/controls-mfc.md)

