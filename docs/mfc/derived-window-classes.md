---
title: "Derived Window Classes | Microsoft Docs"
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
  - "window class hierarchy"
  - "hierarchies, window classes"
  - "classes [C++], derived"
  - "CWnd class, classes derived from"
  - "derived classes, window classes"
  - "window classes, derived"
ms.assetid: 6f7e437e-fbde-4a06-bfab-72d9dbf05292
caps.latest.revision: 10
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
# Derived Window Classes
You can create windows directly from [CWnd](../mfc/reference/cwnd-class.md), or derive new window classes from `CWnd`. This is how you typically create your own custom windows. However, most windows used in a framework program are instead created from one of the `CWnd`-derived frame-window classes supplied by MFC.  
  
## Frame Window Classes  
 [CFrameWnd](../mfc/reference/cframewnd-class.md)  
 Used for SDI frame windows that frame a single document and its view. The frame window is both the main frame window for the application and the frame window for the current document.  
  
 [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)  
 Used as the main frame window for MDI applications. The main frame window is a container for all MDI document windows and shares its menu bar with them. An MDI frame window is a top-level window that appears on the desktop.  
  
 [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)  
 Used for individual documents opened in an MDI main frame window. Each document and its view are framed by an MDI child frame window contained by the MDI main frame window. An MDI child window looks much like a typical frame window but is contained inside an MDI frame window instead of sitting on the desktop. However, the MDI child window lacks a menu bar of its own and must share the menu bar of the MDI frame window that contains it.  
  
 For more information, see [Frame Windows](../mfc/frame-windows.md).  
  
## Other Window Classes Derived from CWnd  
 In addition to frame windows, several other major categories of windows are derived from `CWnd`:  
  
 *Views*  
 Views are created using the `CWnd`-derived class [CView](../mfc/reference/cview-class.md) (or one of its derived classes). A view is attached to a document and acts as an intermediary between the document and the user. A view is a child window (not an MDI child) that typically fills the client area of an SDI frame window or an MDI child frame window (or that portion of the client area not covered by a toolbar and/or a status bar).  
  
 *Dialog Boxes*  
 Dialog boxes are created using the `CWnd`-derived class [CDialog](../mfc/reference/cdialog-class.md).  
  
 *Forms*  
 Form views based on dialog-template resources, such as dialog boxes, are created using classes [CFormView](../mfc/reference/cformview-class.md), [CRecordView](../mfc/reference/crecordview-class.md), or [CDaoRecordView](../mfc/reference/cdaorecordview-class.md).  
  
 *Controls*  
 Controls such as buttons, list boxes, and combo boxes are created using other classes derived from `CWnd`. See [Control Topics](../mfc/controls-mfc.md).  
  
 *Control Bars*  
 Child windows that contain controls. Examples include toolbars and status bars. See [Control Bars](../mfc/control-bars.md).  
  
## Window Class Hierarchy  
 Refer to the [MFC hierarchy chart](../mfc/hierarchy-chart.md) in the *MFC Reference*. Views are explained in [Document/View Architecture](../mfc/document-view-architecture.md). Dialog boxes are explained in [Dialog Boxes](../mfc/dialog-boxes.md).  
  
## Creating Your Own Special-Purpose Window Classes  
 In addition to the window classes provided by the class library, you may need special-purpose child windows. To create such a window, create your own [CWnd](../mfc/reference/cwnd-class.md)-derived class and make it a child window of a frame or view. Bear in mind that the framework manages the extent of the client area of a document frame window. Most of the client area is managed by a view, but other windows, such as control bars or your own custom windows, may share the space with the view. You may need to interact with the mechanisms in classes [CView](../mfc/reference/cview-class.md) and [CControlBar](../mfc/reference/ccontrolbar-class.md) for positioning child windows in a frame window's client area.  
  
 [Creating Windows](../mfc/creating-windows.md) discusses creation of window objects and the windows they manage.  
  
## See Also  
 [Window Objects](../mfc/window-objects.md)

