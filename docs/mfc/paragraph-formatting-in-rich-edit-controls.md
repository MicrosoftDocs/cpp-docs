---
title: "Paragraph Formatting in Rich Edit Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["rich edit controls [MFC], paragraph formatting in", "paragraph formatting in CRichEditCtrl [MFC]", "CRichEditCtrl class [MFC], paragraph formatting in", "formatting [MFC], paragraphs"]
ms.assetid: 0df2e4c9-2074-4e41-b913-87cb8c1b4d43
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Paragraph Formatting in Rich Edit Controls
You can use member functions of the rich edit control ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) to format paragraphs and to retrieve formatting information. Paragraph formatting attributes include alignment, tabs, indents, and numbering.  
  
 You can apply paragraph formatting by using the [SetParaFormat](../mfc/reference/cricheditctrl-class.md#setparaformat) member function. To determine the current paragraph formatting for the selected text, use the [GetParaFormat](../mfc/reference/cricheditctrl-class.md#getparaformat) member function. The [PARAFORMAT](/windows/desktop/api/richedit/ns-richedit-_paraformat) structure is used with these member functions to specify paragraph attributes. One of the important members of **PARAFORMAT** is *dwMask*. In `SetParaFormat`, *dwMask* specifies which paragraph attributes will be set by this function call. `GetParaFormat` reports the attributes of the first paragraph in the selection; *dwMask* specifies the attributes that are consistent throughout the selection.  
  
## See Also  
 [Using CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controls](../mfc/controls-mfc.md)

