---
title: "Document Template Creation | Microsoft Docs"
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
  - "document templates"
  - "constructors [C++], document template"
  - "document templates, creating"
  - "MFC, document templates"
  - "templates, document templates"
ms.assetid: c87f1821-7cbf-442e-9690-f126ae7fb783
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Document Template Creation
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Document Template Creation](https://docs.microsoft.com/cpp/mfc/document-template-creation).  
  
  
When creating a new document in response to a `New` or **Open** command from the **File** menu, the document template also creates a new frame window through which to view the document.  
  
 The document-template constructor specifies what types of documents, windows, and views the template will be able to create. This is determined by the arguments you pass to the document-template constructor. The following code illustrates creation of a [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md) for a sample application:  
  
 [!code-cpp[NVC_MFCDocView#7](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCDocView/Cpp/NVC_MFCDocView.cpp#7)]  
  
 The pointer to a new `CMultiDocTemplate` object is used as an argument to [AddDocTemplate](../mfc/reference/cwinapp-class.md#adddoctemplate). Arguments to the `CMultiDocTemplate` constructor include the resource ID associated with the document type's menus and accelerators, and three uses of the [RUNTIME_CLASS](../mfc/reference/run-time-object-model-services.md#runtime_class) macro. `RUNTIME_CLASS` returns the [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) object for the C++ class named as its argument. The three `CRuntimeClass` objects passed to the document-template constructor supply the information needed to create new objects of the specified classes during the document creation process. The example shows creation of a document template that creates `CScribDoc` objects with `CScribView` objects attached. The views are framed by standard MDI child frame windows.  
  
## See Also  
 [Document Templates and the Document/View Creation Process](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Document/View Creation](../mfc/document-view-creation.md)   
 [Relationships Among MFC Objects](../mfc/relationships-among-mfc-objects.md)   
 [Creating New Documents, Windows, and Views](../mfc/creating-new-documents-windows-and-views.md)





