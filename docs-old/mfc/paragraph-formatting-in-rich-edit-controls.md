---
title: "Paragraph Formatting in Rich Edit Controls"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rich edit controls, paragraph formatting in"
  - "paragraph formatting in CRichEditCtrl"
  - "CRichEditCtrl class, paragraph formatting in"
  - "formatting [C++], paragraphs"
ms.assetid: 0df2e4c9-2074-4e41-b913-87cb8c1b4d43
caps.latest.revision: 8
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
# Paragraph Formatting in Rich Edit Controls
You can use member functions of the rich edit control ([CRichEditCtrl](../mfcref/cricheditctrl-class.md)) to format paragraphs and to retrieve formatting information. Paragraph formatting attributes include alignment, tabs, indents, and numbering.  
  
 You can apply paragraph formatting by using the [SetParaFormat](../Topic/CRichEditCtrl::SetParaFormat.md) member function. To determine the current paragraph formatting for the selected text, use the [GetParaFormat](../Topic/CRichEditCtrl::GetParaFormat.md) member function. The [PARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787940) structure is used with these member functions to specify paragraph attributes. One of the important members of **PARAFORMAT** is **dwMask**. In `SetParaFormat`, **dwMask** specifies which paragraph attributes will be set by this function call. `GetParaFormat` reports the attributes of the first paragraph in the selection; **dwMask** specifies the attributes that are consistent throughout the selection.  
  
## See Also  
 [Using CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controls](../mfc/controls--mfc-.md)