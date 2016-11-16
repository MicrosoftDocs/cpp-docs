---
title: "Word Breaks in Rich Edit Controls | Microsoft Docs"
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
  - "CRichEditCtrl class, word breaks in"
  - "word breaks"
  - "breaking words in CRichEditCtrl"
  - "rich edit controls, word breaks in"
ms.assetid: 641dcf9e-7b40-4dc0-85f7-575a8c142f73
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
# Word Breaks in Rich Edit Controls
A rich edit control ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) calls a function called a "word break procedure" to find breaks between words and to determine where it can break lines. The control uses this information when performing word-wrap operations and when processing the CTRL+LEFT and CTRL+RIGHT key combinations. An application can send messages to a rich edit control to replace the default word-break procedure, to retrieve word-break information, and to determine what line a given character falls on.  
  
## See Also  
 [Using CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controls](../mfc/controls-mfc.md)

