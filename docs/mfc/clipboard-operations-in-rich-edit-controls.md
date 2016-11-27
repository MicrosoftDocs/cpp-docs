---
title: "Clipboard Operations in Rich Edit Controls | Microsoft Docs"
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
  - "pasting Clipboard data"
  - "CRichEditCtrl class, paste operation"
  - "cut operation in CRichEditCtrl class"
  - "CRichEditCtrl class, Clipboard operations"
  - "copy operations in rich edit controls"
  - "Clipboard, operations in CRichEditCtrl"
  - "rich edit controls, Clipboard operations"
ms.assetid: 15ce66bc-2636-4a35-a2ae-d52285dc1af6
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
# Clipboard Operations in Rich Edit Controls
Your application can paste the contents of the Clipboard into a rich edit control ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) using either the best available Clipboard format or a specific Clipboard format. You can also determine whether a rich edit control is capable of pasting a Clipboard format.  
  
 You can copy or cut the contents of the current selection by using the [Copy](../mfc/reference/cricheditctrl-class.md#cricheditctrl__copy) or [Cut](../mfc/reference/cricheditctrl-class.md#cricheditctrl__cut) member function. Similarly, you can paste the contents of the Clipboard into a rich edit control by using the [Paste](../mfc/reference/cricheditctrl-class.md#cricheditctrl__paste) member function. The control pastes the first available format that it recognizes, which presumably is the most descriptive format.  
  
 To paste a specific Clipboard format, you can use the [PasteSpecial](../mfc/reference/cricheditctrl-class.md#cricheditctrl__pastespecial) member function. This function is useful for applications with a Paste Special command that enables the user to select the Clipboard format. You can use the [CanPaste](../mfc/reference/cricheditctrl-class.md#cricheditctrl__canpaste) member function to determine whether a given format is recognized by the control.  
  
 You can also use `CanPaste` to determine whether any available Clipboard format is recognized by a rich edit control. This function is useful in the `OnInitMenuPopup` handler. An application might enable or gray its Paste command depending on whether the control can paste any available format.  
  
 Rich edit controls register two Clipboard formats: rich-text format and a format called RichEdit Text and Objects. An application can register these formats by using the [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) function, specifying the **CF_RTF** and **CF_RETEXTOBJ** values.  
  
## See Also  
 [Using CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controls](../mfc/controls-mfc.md)

