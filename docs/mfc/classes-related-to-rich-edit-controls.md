---
title: "Classes Related to Rich Edit Controls | Microsoft Docs"
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
  - "rich edit controls, and CRichEditItem"
  - "CRichEditCtrl class, related classes"
  - "CRichEditDoc class, Rich Edit controls"
  - "rich edit controls, classes related to"
  - "classes [C++], related to rich edit controls"
  - "rich edit controls, and CRichEditView"
  - "CRichEditCtrlItem class and CRichEditCtrl"
  - "rich edit controls, and CRichEditDoc"
  - "CRichEditView class, and CRichEditCtrl"
ms.assetid: 4b31c2cc-6ea1-4146-b7c5-b0b5b419f14d
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
# Classes Related to Rich Edit Controls
The [CRichEditView](../mfc/reference/cricheditview-class.md), [CRichEditDoc](../mfc/reference/cricheditdoc-class.md), and [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md) classes provide the functionality of the rich edit control ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) within the context of MFC's document/view architecture. `CRichEditView` maintains the text and formatting characteristic of text. `CRichEditDoc` maintains the list of OLE client items that are in the view. `CRichEditCntrItem` provides container-side access to the OLE client item. To modify the contents of a `CRichEditView`, use [CRichEditView::GetRichEditCtrl](../mfc/reference/cricheditview-class.md#cricheditview__getricheditctrl) to access the underlying rich edit control.  
  
## See Also  
 [Using CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controls](../mfc/controls-mfc.md)

