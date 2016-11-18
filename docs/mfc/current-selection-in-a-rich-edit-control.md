---
title: "Current Selection in a Rich Edit Control | Microsoft Docs"
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
  - "current selection in CRichEditCtrls"
  - "CRichEditCtrl class, current selection in"
  - "rich edit controls, current selection in"
  - "selection, current in CRichEditCtrl"
ms.assetid: f6b2a2b6-5481-4ad3-9720-6dd772ea6fc8
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
# Current Selection in a Rich Edit Control
The user can select text in a rich edit control ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) by using the mouse or the keyboard. The current selection is the range of selected characters, or the position of the insertion point if no characters are selected. An application can get information about the current selection, set the current selection, determine when the current selection changes, and show or hide the selection highlight.  
  
 To determine the current selection in a rich edit control, use the [GetSel](../mfc/reference/cricheditctrl-class.md#cricheditctrl__getsel) member function. To set the current selection, use the [SetSel](../mfc/reference/cricheditctrl-class.md#cricheditctrl__setsel) member function. The [CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) structure is used with these functions to specify a range of characters. To retrieve information about the contents of the current selection, you can use the [GetSelectionType](../mfc/reference/cricheditctrl-class.md#cricheditctrl__getselectiontype) member function.  
  
 By default, a rich edit control shows and hides the selection highlight when it gains and loses the focus. You can show or hide the selection highlight at any time by using the [HideSelection](../mfc/reference/cricheditctrl-class.md#cricheditctrl__hideselection) member function. For example, an application might provide a Search dialog box to find text in a rich edit control. The application might select matching text without closing the dialog box, in which case it must use `HideSelection` to highlight the selection.  
  
 To get the selected text in a rich edit control, use the [GetSelText](../mfc/reference/cricheditctrl-class.md#cricheditctrl__getseltext) member function. The text is copied to the specified character array. You must ensure that the array is large enough to hold the selected text plus a terminating null character.  
  
 You can search for a string in a rich edit control by using the [FindText](../mfc/reference/cricheditctrl-class.md#cricheditctrl__findtext) member function The [FINDTEXTEX](http://msdn.microsoft.com/library/windows/desktop/bb787909) structure used with this function specifies the text range to search and the string to search for. You can also specify such options as whether the search is case-sensitive.  
  
## See Also  
 [Using CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controls](../mfc/controls-mfc.md)

