---
title: "Frame-Window Classes Created by the Application Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["CMainFrame"]
dev_langs: ["C++"]
helpviewer_keywords: ["application wizards [MFC], frame window classes created by", "window classes [MFC]", "classes [MFC], frame-window", "CMDIFrameWnd class [MFC], frame windows", "window classes [MFC], frame", "CFrameWnd class [MFC], frame windows", "CMDIChildWnd class [MFC], frame windows", "frame window classes [MFC], created by application wizards", "CMainFrame class [MFC]"]
ms.assetid: 9947df73-4470-49a0-ac61-7b6ee401a74e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Frame-Window Classes Created by the Application Wizard
When you use the [Application Wizard](../ide/creating-desktop-projects-by-using-application-wizards.md) to create a skeleton application, in addition to application, document, and view classes, the Application Wizard creates a derived frame-window class for your application's main frame window. The class is called `CMainFrame` by default, and the files that contain it are named MAINFRM.H and MAINFRM.CPP.  
  
 If your application is SDI, your `CMainFrame` class is derived from class [CFrameWnd](../mfc/reference/cframewnd-class.md).  
  
 If your application is MDI, `CMainFrame` is derived from class [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md). In this case `CMainFrame` implements the main frame, which holds the menu, toolbar, and status bars. The Application Wizard does not derive a new document frame-window class for you. Instead, it uses the default implementation in [CMDIChildWnd Class](../mfc/reference/cmdichildwnd-class.md). The MFC framework creates a child window to contain each view (which can be of type `CScrollView`, `CEditView`, `CTreeView`, `CListView`, and so on) that the application requires. If you need to customize your document frame window, you can create a new document frame-window class (see [Adding a Class](../ide/adding-a-class-visual-cpp.md)).  
  
 If you choose to support a toolbar, the class also has member variables of type [CToolBar](../mfc/reference/ctoolbar-class.md) and [CStatusBar](../mfc/reference/cstatusbar-class.md) and an `OnCreate` message-handler function to initialize the two [control bars](../mfc/control-bars.md).  
  
 These frame-window classes work as created, but to enhance their functionality, you must add member variables and member functions. You may also want to have your window classes handle other Windows messages. For more information, see [Changing the Styles of a Window Created by MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md).  
  
## See Also  
 [Frame-Window Classes](../mfc/frame-window-classes.md)   
 [MFC Program or Control Source and Header Files](../ide/mfc-program-or-control-source-and-header-files.md)

