---
title: "Document and View Classes Created by the MFC Application Wizard | Microsoft Docs"
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
  - "document classes"
  - "document classes, created by application wizards"
  - "application wizards [C++], document/view classes created"
  - "view classes, created by application wizards"
ms.assetid: 70c34a60-2701-4981-acea-c08a5787d8e6
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
# Document and View Classes Created by the MFC Application Wizard
The MFC Application Wizard gives you a head start on your program development by creating skeletal document and view classes for you. You can then [map commands and messages to these classes](../mfc/reference/mapping-messages-to-functions.md) and use the Visual C++ source code editor to write their member functions.  
  
 The document class created by the MFC Application Wizard is derived from class [CDocument](../mfc/reference/cdocument-class.md). The view class is derived from [CView](../mfc/reference/cview-class.md). The names that the Application Wizard gives these classes and the files that contain them are based on the project name you supply in the Application Wizard dialog box. In the Application Wizard, you can use the Generated Classes page to alter the default names.  
  
 Some applications might need more than one document class, view class, or frame-window class. For more information, see [Multiple Document Types, Views, and Frame Windows](../mfc/multiple-document-types-views-and-frame-windows.md).  
  
## See Also  
 [Document/View Architecture](../mfc/document-view-architecture.md)

