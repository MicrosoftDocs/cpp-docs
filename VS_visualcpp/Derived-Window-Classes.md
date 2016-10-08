---
title: "Derived Window Classes"
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
ms.assetid: 6f7e437e-fbde-4a06-bfab-72d9dbf05292
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
# Derived Window Classes
You can create windows directly from [CWnd](../VS_visualcpp/CWnd-Class.md), or derive new window classes from `CWnd`. This is how you typically create your own custom windows. However, most windows used in a framework program are instead created from one of the `CWnd`-derived frame-window classes supplied by MFC.  
  
## Frame Window Classes  
 [CFrameWnd](../VS_visualcpp/CFrameWnd-Class.md)  
 Used for SDI frame windows that frame a single document and its view. The frame window is both the main frame window for the application and the frame window for the current document.  
  
 [CMDIFrameWnd](../VS_visualcpp/CMDIFrameWnd-Class.md)  
 Used as the main frame window for MDI applications. The main frame window is a container for all MDI document windows and shares its menu bar with them. An MDI frame window is a top-level window that appears on the desktop.  
  
 [CMDIChildWnd](../VS_visualcpp/CMDIChildWnd-Class.md)  
 Used for individual documents opened in an MDI main frame window. Each document and its view are framed by an MDI child frame window contained by the MDI main frame window. An MDI child window looks much like a typical frame window but is contained inside an MDI frame window instead of sitting on the desktop. However, the MDI child window lacks a menu bar of its own and must share the menu bar of the MDI frame window that contains it.  
  
 For more information, see [Frame Windows](../VS_visualcpp/Frame-Windows.md).  
  
## Other Window Classes Derived from CWnd  
 In addition to frame windows, several other major categories of windows are derived from `CWnd`:  
  
 *Views*  
 Views are created using the `CWnd`-derived class [CView](../VS_visualcpp/CView-Class.md) (or one of its derived classes). A view is attached to a document and acts as an intermediary between the document and the user. A view is a child window (not an MDI child) that typically fills the client area of an SDI frame window or an MDI child frame window (or that portion of the client area not covered by a toolbar and/or a status bar).  
  
 *Dialog Boxes*  
 Dialog boxes are created using the `CWnd`-derived class [CDialog](../VS_visualcpp/CDialog-Class.md).  
  
 *Forms*  
 Form views based on dialog-template resources, such as dialog boxes, are created using classes [CFormView](../VS_visualcpp/CFormView-Class.md), [CRecordView](../VS_visualcpp/CRecordView-Class.md), or [CDaoRecordView](../VS_visualcpp/CDaoRecordView-Class.md).  
  
 *Controls*  
 Controls such as buttons, list boxes, and combo boxes are created using other classes derived from `CWnd`. See [Control Topics](../VS_visualcpp/Controls--MFC-.md).  
  
 *Control Bars*  
 Child windows that contain controls. Examples include toolbars and status bars. See [Control Bars](../VS_visualcpp/Control-Bars.md).  
  
## Window Class Hierarchy  
 Refer to the [MFC hierarchy chart](../VS_visualcpp/Hierarchy-Chart.md) in the *MFC Reference*. Views are explained in [Document/View Architecture](../VS_visualcpp/Document-View-Architecture.md). Dialog boxes are explained in [Dialog Boxes](../VS_visualcpp/Dialog-Boxes.md).  
  
## Creating Your Own Special-Purpose Window Classes  
 In addition to the window classes provided by the class library, you may need special-purpose child windows. To create such a window, create your own [CWnd](../VS_visualcpp/CWnd-Class.md)-derived class and make it a child window of a frame or view. Bear in mind that the framework manages the extent of the client area of a document frame window. Most of the client area is managed by a view, but other windows, such as control bars or your own custom windows, may share the space with the view. You may need to interact with the mechanisms in classes [CView](../VS_visualcpp/CView-Class.md) and [CControlBar](../VS_visualcpp/CControlBar-Class.md) for positioning child windows in a frame window's client area.  
  
 [Creating Windows](../VS_visualcpp/Creating-Windows.md) discusses creation of window objects and the windows they manage.  
  
## See Also  
 [Window Objects](../VS_visualcpp/Window-Objects.md)