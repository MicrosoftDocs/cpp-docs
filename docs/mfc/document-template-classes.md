---
title: "Document-Template Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["vc.classes.document"]
dev_langs: ["C++"]
helpviewer_keywords: ["document templates [MFC], classes"]
ms.assetid: 901749e9-8048-44a0-b5e2-361554650a73
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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

