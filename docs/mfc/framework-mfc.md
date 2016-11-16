---
title: "Framework (MFC) | Microsoft Docs"
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
  - "encapsulation [C++], Win32 API"
  - "MFC [C++], application framework"
  - "wrapper classes, explained"
  - "Win32 [C++], API encapsulation by MFC"
  - "application framework [C++], about MFC application framework"
  - "APIs [C++], encapsulation by MFC Win32"
  - "encapsulation [C++]"
  - "Windows API [C++], encapsulation by MFC"
  - "encapsulated Win32 API"
ms.assetid: 3be0fec8-9843-4119-ae42-ece993ef500b
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
# Framework (MFC)
Your work with the Microsoft Foundation Class (MFC) Library framework is based largely on a few major classes and several Visual C++ tools. Some classes encapsulate a large portion of the Win32 application programming interface (API). Other classes encapsulate application concepts such as documents, views, and the application itself. Still others encapsulate OLE features and ODBC and DAO data-access functionality.  
  
 For example, Win32's concept of window is encapsulated by MFC class `CWnd`. That is, a C++ class called `CWnd` encapsulates or "wraps" the `HWND` handle that represents a Windows window. Likewise, class `CDialog` encapsulates Win32 dialog boxes.  
  
 Encapsulation means that the C++ class `CWnd`, for example, contains a member variable of type `HWND`, and the class's member functions encapsulate calls to Win32 functions that take an `HWND` as a parameter. The class member functions typically have the same name as the Win32 function they encapsulate.  
  
## In This Section  
 [SDI and MDI](../mfc/sdi-and-mdi.md)  
  
 [Documents, Views, and the Framework](../mfc/documents-views-and-the-framework.md)  
  
 [Wizards and Resource Editors](../mfc/wizards-and-the-resource-editors.md)  
  
## In Related Sections  
 [Building on the Framework](../mfc/building-on-the-framework.md)  
  
 [How the Framework Calls Your Code](../mfc/how-the-framework-calls-your-code.md)  
  
 [CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md)  
  
 [Document Templates and the Document/View Creation Process](../mfc/document-templates-and-the-document-view-creation-process.md)  
  
 [Message Handling and Mapping](../mfc/message-handling-and-mapping.md)  
  
 [Window Objects](../mfc/window-objects.md)  
  
## See Also  
 [Using the Classes to Write Applications for Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
