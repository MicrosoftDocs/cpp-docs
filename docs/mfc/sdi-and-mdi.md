---
title: "SDI and MDI | Microsoft Docs"
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
  - "frame windows, SDI applications"
  - "frame windows, MDI applications"
  - "MFC, windows"
  - "single document interface (SDI), applications"
  - "MDI, vs. SDI"
ms.assetid: bb7239d9-4759-4f63-bfff-44a04b48c067
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
# SDI and MDI
MFC makes it easy to work with both single-document interface (SDI) and multiple-document interface (MDI) applications.  
  
 SDI applications allow only one open document frame window at a time. MDI applications allow multiple document frame windows to be open in the same instance of an application. An MDI application has a window within which multiple MDI child windows, which are frame windows themselves, can be opened, each containing a separate document. In some applications, the child windows can be of different types, such as chart windows and spreadsheet windows. In that case, the menu bar can change as MDI child windows of different types are activated.  
  
> [!NOTE]
>  Under Windows 95 and later, applications are commonly SDI because the operating system has adopted a "document-centered" view.  
  
 For more information, see [Documents, Views, and the Framework](../mfc/documents-views-and-the-framework.md).  
  
## See Also  
 [Using the Classes to Write Applications for Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
