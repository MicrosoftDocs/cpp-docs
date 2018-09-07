---
title: "Frame-Window Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["frame window classes [MFC], about frame window classes", "frame window classes [MFC]", "windows [MFC], MDI", "document frame windows [MFC], classes", "single document interface (SDI), frame windows", "window classes [MFC], frame", "MFC, frame windows", "MDI [MFC], frame windows", "classes [MFC], window"]
ms.assetid: c27e43a7-8ad0-4759-b1b7-43f4725f4132
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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

