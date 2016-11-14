---
title: "Document-Template Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.document"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "document templates, classes"
ms.assetid: 901749e9-8048-44a0-b5e2-361554650a73
caps.latest.revision: 9
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
# Document-Template Classes
Document-template objects coordinate the creation of document, view, and frame window objects when a new document or view is created.  
  
 [CDocTemplate](../mfc/reference/cdoctemplate-class.md)  
 The base class for document templates. You will never use this class directly; instead, you use one of the other document-template classes derived from this class.  
  
 [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md)  
 A template for documents in the multiple document interface (MDI). MDI applications can have multiple documents open at a time.  
  
 [CSingleDocTemplate](../mfc/reference/csingledoctemplate-class.md)  
 A template for documents in the single document interface (SDI). SDI applications have only one document open at a time.  
  
## Related Class  
 [CCreateContext](../mfc/reference/ccreatecontext-structure.md)  
 A structure passed by a document template to window-creation functions to coordinate the creation of document, view, and frame-window objects.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)

