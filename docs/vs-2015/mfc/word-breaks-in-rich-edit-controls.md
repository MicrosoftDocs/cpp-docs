---
title: "Word Breaks in Rich Edit Controls | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRichEditCtrl class, word breaks in"
  - "word breaks"
  - "breaking words in CRichEditCtrl"
  - "rich edit controls, word breaks in"
ms.assetid: 641dcf9e-7b40-4dc0-85f7-575a8c142f73
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Word Breaks in Rich Edit Controls
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Word Breaks in Rich Edit Controls](https://docs.microsoft.com/cpp/mfc/word-breaks-in-rich-edit-controls).  
  
  
A rich edit control ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) calls a function called a "word break procedure" to find breaks between words and to determine where it can break lines. The control uses this information when performing word-wrap operations and when processing the CTRL+LEFT and CTRL+RIGHT key combinations. An application can send messages to a rich edit control to replace the default word-break procedure, to retrieve word-break information, and to determine what line a given character falls on.  
  
## See Also  
 [Using CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controls](../mfc/controls-mfc.md)





