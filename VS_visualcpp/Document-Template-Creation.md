---
title: "Document Template Creation"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c87f1821-7cbf-442e-9690-f126ae7fb783
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Document Template Creation
When creating a new document in response to a `New` or **Open** command from the **File** menu, the document template also creates a new frame window through which to view the document.  
  
 The document-template constructor specifies what types of documents, windows, and views the template will be able to create. This is determined by the arguments you pass to the document-template constructor. The following code illustrates creation of a [CMultiDocTemplate](../VS_visualcpp/CMultiDocTemplate-Class.md) for a sample application:  
  
 [!CODE [NVC_MFCDocView#7](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCDocView#7)]  
  
 The pointer to a new `CMultiDocTemplate` object is used as an argument to [AddDocTemplate](../Topic/CWinApp::AddDocTemplate.md). Arguments to the `CMultiDocTemplate` constructor include the resource ID associated with the document type's menus and accelerators, and three uses of the [RUNTIME_CLASS](../Topic/RUNTIME_CLASS.md) macro. `RUNTIME_CLASS` returns the [CRuntimeClass](../VS_visualcpp/CRuntimeClass-Structure.md) object for the C++ class named as its argument. The three `CRuntimeClass` objects passed to the document-template constructor supply the information needed to create new objects of the specified classes during the document creation process. The example shows creation of a document template that creates `CScribDoc` objects with `CScribView` objects attached. The views are framed by standard MDI child frame windows.  
  
## See Also  
 [Document Templates and the Document/View Creation Process](../VS_visualcpp/Document-Templates-and-the-Document-View-Creation-Process.md)   
 [Document/View Creation](../VS_visualcpp/Document-View-Creation.md)   
 [Relationships Among MFC Objects](../VS_visualcpp/Relationships-Among-MFC-Objects.md)   
 [Creating New Documents, Windows, and Views](../VS_visualcpp/Creating-New-Documents--Windows--and-Views.md)