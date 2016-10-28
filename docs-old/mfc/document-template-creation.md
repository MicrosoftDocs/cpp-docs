---
title: "Document Template Creation"
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
  - "document templates"
  - "constructors [C++], document template"
  - "document templates, creating"
  - "MFC, document templates"
  - "templates, document templates"
ms.assetid: c87f1821-7cbf-442e-9690-f126ae7fb783
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
# Document Template Creation
When creating a new document in response to a `New` or **Open** command from the **File** menu, the document template also creates a new frame window through which to view the document.  
  
 The document-template constructor specifies what types of documents, windows, and views the template will be able to create. This is determined by the arguments you pass to the document-template constructor. The following code illustrates creation of a [CMultiDocTemplate](../mfcref/cmultidoctemplate-class.md) for a sample application:  
  
 [!code[NVC_MFCDocView#7](../mfc/codesnippet/CPP/document-template-creation_1.cpp)]  
  
 The pointer to a new `CMultiDocTemplate` object is used as an argument to [AddDocTemplate](../Topic/CWinApp::AddDocTemplate.md). Arguments to the `CMultiDocTemplate` constructor include the resource ID associated with the document type's menus and accelerators, and three uses of the [RUNTIME_CLASS](../Topic/RUNTIME_CLASS.md) macro. `RUNTIME_CLASS` returns the [CRuntimeClass](../mfcref/cruntimeclass-structure.md) object for the C++ class named as its argument. The three `CRuntimeClass` objects passed to the document-template constructor supply the information needed to create new objects of the specified classes during the document creation process. The example shows creation of a document template that creates `CScribDoc` objects with `CScribView` objects attached. The views are framed by standard MDI child frame windows.  
  
## See Also  
 [Document Templates and the Document/View Creation Process](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Document/View Creation](../mfc/document-view-creation.md)   
 [Relationships Among MFC Objects](../mfc/relationships-among-mfc-objects.md)   
 [Creating New Documents, Windows, and Views](../mfc/creating-new-documents--windows--and-views.md)