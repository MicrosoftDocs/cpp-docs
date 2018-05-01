---
title: "Document-View Creation | Microsoft Docs"
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
  - "documents, creating"
  - "views, and frame windows"
  - "views, creating"
  - "tables [C++]"
  - "MFC, views"
  - "document/view architecture, creating document/view"
  - "object creators"
  - "MFC, documents"
  - "tables [C++], objects each MFC object creates"
ms.assetid: bda14f41-ed50-439d-af9e-591174e7dd64
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Document/View Creation
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Document-View Creation](https://docs.microsoft.com/cpp/mfc/document-view-creation).  
  
  
The framework supplies implementations of the `New` and **Open** commands (among others) on the **File** menu. Creation of a new document and its associated view and frame window is a cooperative effort among the application object, a document template, the newly created document, and the newly created frame window. The following table summarizes which objects create what.  
  
### Object Creators  
  
|Creator|Creates|  
|-------------|-------------|  
|Application object|Document template|  
|Document template|Document|  
|Document template|Frame window|  
|Frame window|View|  
  
## See Also  
 [Document Templates and the Document/View Creation Process](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Document Template Creation](../mfc/document-template-creation.md)   
 [Relationships Among MFC Objects](../mfc/relationships-among-mfc-objects.md)   
 [Creating New Documents, Windows, and Views](../mfc/creating-new-documents-windows-and-views.md)





