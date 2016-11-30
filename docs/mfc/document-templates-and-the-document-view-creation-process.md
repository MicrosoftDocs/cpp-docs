---
title: "Document Templates and the Document-View Creation Process | Microsoft Docs"
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
  - "icons, for multiple document templates"
  - "document templates, and views"
  - "document/view architecture, creating document/view"
  - "single document template"
  - "MFC, document templates"
  - "multiple document template"
  - "CDocTemplate class"
  - "templates, document templates"
ms.assetid: 311ce4cd-fbdf-4ea1-a51b-5bb043abbcee
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
# Document Templates and the Document/View Creation Process
To manage the complex process of creating documents with their associated views and frame windows, the framework uses two document template classes: [CSingleDocTemplate](../mfc/reference/csingledoctemplate-class.md) for SDI applications and [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md) for MDI applications. A `CSingleDocTemplate` can create and store one document of one type at a time. A `CMultiDocTemplate` keeps a list of many open documents of one type.  
  
 Some applications support multiple document types. For example, an application might support text documents and graphics documents. In such an application, when the user chooses the New command on the File menu, a dialog box shows a list of possible new document types to open. For each supported document type, the application uses a distinct document template object. The following figure illustrates the configuration of an MDI application that supports two document types and shows several open documents.  
  
 ![MDI application that has two document types](../mfc/media/vc387h1.gif "vc387h1")  
An MDI Application with Two Document Types  
  
 Document templates are created and maintained by the application object. One of the key tasks performed during your application's `InitInstance` function is to construct one or more document templates of the appropriate kind. This feature is described in [Document Template Creation](../mfc/document-template-creation.md). The application object stores a pointer to each document template in its template list and provides an interface for adding document templates.  
  
 If you need to support two or more document types, you must add an extra call to [AddDocTemplate](../mfc/reference/cwinapp-class.md#cwinapp__adddoctemplate) for each document type.  
  
 An icon is registered for each document template based on its position in the application's list of document templates. The order of the document templates is determined by the order they are added with calls to `AddDocTemplate`. MFC assumes that the first Icon resource in the application is the application icon, the next Icon resource is the first document icon, and so on.  
  
 For example, a document template is the third of three for the application. If there is an Icon resource in the application at index 3, that icon is used for the document template. If not, the icon at index 0 is used as a default.  
  
## See Also  
 [General MFC Topics](../mfc/general-mfc-topics.md)   
 [Document Template Creation](../mfc/document-template-creation.md)   
 [Document/View Creation](../mfc/document-view-creation.md)   
 [Relationships Among MFC Objects](../mfc/relationships-among-mfc-objects.md)   
 [Creating New Documents, Windows, and Views](../mfc/creating-new-documents-windows-and-views.md)

