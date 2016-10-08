---
title: "Frame-Window Classes Created by the Application Wizard"
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
ms.assetid: 9947df73-4470-49a0-ac61-7b6ee401a74e
caps.latest.revision: 6
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
# Frame-Window Classes Created by the Application Wizard
When you use the [Application Wizard](../VS_visualcpp/Creating-Desktop-Projects-By-Using-Application-Wizards.md) to create a skeleton application, in addition to application, document, and view classes, the Application Wizard creates a derived frame-window class for your application's main frame window. The class is called `CMainFrame` by default, and the files that contain it are named MAINFRM.H and MAINFRM.CPP.  
  
 If your application is SDI, your `CMainFrame` class is derived from class [CFrameWnd](../VS_visualcpp/CFrameWnd-Class.md).  
  
 If your application is MDI, `CMainFrame` is derived from class [CMDIFrameWnd](../VS_visualcpp/CMDIFrameWnd-Class.md). In this case `CMainFrame` implements the main frame, which holds the menu, toolbar, and status bars. The Application Wizard does not derive a new document frame-window class for you. Instead, it uses the default implementation in [CMDIChildWnd Class](../VS_visualcpp/CMDIChildWnd-Class.md). The MFC framework creates a child window to contain each view (which can be of type `CScrollView`, `CEditView`, `CTreeView`, `CListView`, and so on) that the application requires. If you need to customize your document frame window, you can create a new document frame-window class (see [Adding a Class](../VS_visualcpp/Adding-a-Class--Visual-C---.md)).  
  
 If you choose to support a toolbar, the class also has member variables of type [CToolBar](../VS_visualcpp/CToolBar-Class.md) and [CStatusBar](../VS_visualcpp/CStatusBar-Class.md) and an `OnCreate` message-handler function to initialize the two [control bars](../VS_visualcpp/Control-Bars.md).  
  
 These frame-window classes work as created, but to enhance their functionality, you must add member variables and member functions. You may also want to have your window classes handle other Windows messages. For more information, see [Changing the Styles of a Window Created by MFC](../VS_visualcpp/Changing-the-Styles-of-a-Window-Created-by-MFC.md).  
  
## See Also  
 [Frame-Window Classes](../VS_visualcpp/Frame-Window-Classes.md)   
 [MFC Program or Control Source and Header Files](../VS_visualcpp/MFC-Program-or-Control-Source-and-Header-Files.md)