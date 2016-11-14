---
title: "Frame-Window Classes | Microsoft Docs"
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
  - "frame window classes, about frame window classes"
  - "frame window classes"
  - "windows [C++], MDI"
  - "document frame windows, classes"
  - "single document interface (SDI), frame windows"
  - "window classes, frame"
  - "MFC [C++], frame windows"
  - "MDI [C++], frame windows"
  - "classes [C++], window"
ms.assetid: c27e43a7-8ad0-4759-b1b7-43f4725f4132
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
# Frame-Window Classes
Each application has one "main frame window," a desktop window that usually has the application name in its caption. Each document usually has one "document frame window." A document frame window contains at least one view, which presents the document's data.  
  
## Frame Windows in SDI and MDI Applications  
 For an SDI application, there is one frame window derived from class [CFrameWnd](../mfc/reference/cframewnd-class.md). This window is both the main frame window and the document frame window. For an MDI application, the main frame window is derived from class [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md), and the document frame windows, which are MDI child windows, are derived from class [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md).  
  
## Use the Frame-Window Class, or Derive from It  
 These classes provide most of the frame-window functionality you need for your applications. Under normal circumstances, the default behavior and appearance they provide will suit your needs. If you need additional functionality, derive from these classes.  
  
### What do you want to know more about  
  
-   [Frame-window classes created by the Application Wizard](../mfc/frame-window-classes-created-by-the-application-wizard.md)  
  
-   [Frame-window styles](../mfc/frame-window-styles-cpp.md)  
  
-   [Changing the styles of a window created by MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md)  
  
## See Also  
 [Frame Windows](../mfc/frame-windows.md)

