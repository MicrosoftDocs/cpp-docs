---
title: "MFC Application Architecture Classes"
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
ms.assetid: 71b2de54-b44d-407e-9c71-9baf954e18d9
caps.latest.revision: 7
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
# MFC Application Architecture Classes
Classes in this category contribute to the architecture of a framework application. They supply functionality common to most applications. You fill in the framework to add application-specific functionality. Typically, you do so by deriving new classes from the architecture classes, and then adding new members or overriding existing member functions.  
  
 [Application wizards](../VS_visualcpp/MFC-Application-Wizard.md) generate several types of applications, all of which use the application framework in differing ways. SDI (single document interface) and MDI (multiple document interface) applications make full use of a part of the framework called document/view architecture. Other types of applications, such as dialog-based applications, form-based applications, and DLLs, use only some of document/view architecture features.  
  
 Document/view applications contain one or more sets of documents, views, and frame windows. A document-template object associates the classes for each document/view/frame set.  
  
 Although you do not have to use document/view architecture in your MFC application, there are a number of advantages to doing so. The MFC OLE container and server support is based on document/view architecture, as is support for printing and print preview.  
  
 All MFC applications have at least two objects: an application object derived from [CWinApp](../VS_visualcpp/CWinApp-Class.md), and some sort of main window object, derived (often indirectly) from [CWnd](../VS_visualcpp/CWnd-Class.md). (Most often, the main window is derived from [CFrameWnd](../VS_visualcpp/CFrameWnd-Class.md), [CMDIFrameWnd](../VS_visualcpp/CMDIFrameWnd-Class.md), or [CDialog](../VS_visualcpp/CDialog-Class.md), all of which are derived from `CWnd`.)  
  
 Applications that use document/view architecture contain additional objects. The principal objects are:  
  
-   An application object derived from class [CWinApp](../VS_visualcpp/CWinApp-Class.md), as mentioned before.  
  
-   One or more document class objects derived from class [CDocument](../VS_visualcpp/CDocument-Class.md). Document class objects are responsible for the internal representation of the data manipulated in the view. They may be associated with a data file.  
  
-   One or more view objects derived from class [CView](../VS_visualcpp/CView-Class.md). Each view is a window that is attached to a document and associated with a frame window. Views display and manipulate the data contained in a document class object.  
  
 Document/view applications also contain frame windows (derived from [CFrameWnd](../VS_visualcpp/CFrameWnd-Class.md)) and document templates (derived from [CDocTemplate](../VS_visualcpp/CDocTemplate-Class.md)).  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)