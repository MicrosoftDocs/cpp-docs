---
title: "Document-Template Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.classes.document"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "document templates, classes"
ms.assetid: 901749e9-8048-44a0-b5e2-361554650a73
caps.latest.revision: 7
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
  
 [CDocTemplate](../mfcref/cdoctemplate-class.md)  
 The base class for document templates. You will never use this class directly; instead, you use one of the other document-template classes derived from this class.  
  
 [CMultiDocTemplate](../mfcref/cmultidoctemplate-class.md)  
 A template for documents in the multiple document interface (MDI). MDI applications can have multiple documents open at a time.  
  
 [CSingleDocTemplate](../mfcref/csingledoctemplate-class.md)  
 A template for documents in the single document interface (SDI). SDI applications have only one document open at a time.  
  
## Related Class  
 [CCreateContext](../mfcref/ccreatecontext-structure.md)  
 A structure passed by a document template to window-creation functions to coordinate the creation of document, view, and frame-window objects.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)