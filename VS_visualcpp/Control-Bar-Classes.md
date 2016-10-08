---
title: "Control Bar Classes"
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
ms.assetid: 11009103-cad8-4309-85ce-3d2e858e1818
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
# Control Bar Classes
Control bars are attached to a frame window. They contain buttons, status panes, or a dialog template. Free-floating control bars, also called tool palettes, are implemented by attaching them to a [CMiniFrameWnd](../VS_visualcpp/CMiniFrameWnd-Class.md) object.  
  
## Framework Control Bars  
 These control bars are an integral part of the MFC framework. They are easier to use and more powerful than the Windows control bars because they are integrated with the framework. Most MFC applications use these control bars rather than the Windows control bars.  
  
 [CControlBar](../VS_visualcpp/CControlBar-Class.md)  
 The base class for MFC control bars listed in this section. A control bar is a window aligned to the edge of a frame window. The control bar contains either `HWND`-based child controls or controls not based on an `HWND`, such as toolbar buttons.  
  
 [CDialogBar](../VS_visualcpp/CDialogBar-Class.md)  
 A control bar that is based on a dialog box template.  
  
 [CReBar](../VS_visualcpp/CReBar-Class.md)  
 Supports a toolbar that can contain additional child windows in the form of controls.  
  
 [CToolBar](../VS_visualcpp/CToolBar-Class.md)  
 Toolbar control windows that contain bitmap command buttons not based on an `HWND`. Most MFC applications use this class rather than `CToolBarCtrl`.  
  
 [CStatusBar](../VS_visualcpp/CStatusBar-Class.md)  
 The base class for status-bar control windows. Most MFC applications use this class rather than `CStatusBarCtrl`.  
  
## Windows Control Bars  
 These control bars are thin wrappers for the corresponding Windows controls. Because they are not integrated with the framework, they are harder to use than the control bars previously listed. Most MFC applications use the control bars previously listed.  
  
 [CRebarCtrl](../VS_visualcpp/CReBarCtrl-Class.md)  
 Implements the internal control of the `CRebar` object.  
  
 [CStatusBarCtrl](../VS_visualcpp/CStatusBarCtrl-Class.md)  
 A horizontal window, usually divided into panes, in which an application can display status information.  
  
 [CToolBarCtrl](../VS_visualcpp/CToolBarCtrl-Class.md)  
 Provides the functionality of the Windows toolbar common control.  
  
## Related Classes  
 [CToolTipCtrl](../VS_visualcpp/CToolTipCtrl-Class.md)  
 A small pop-up window that displays a single line of text describing the purpose of a tool in an application.  
  
 [CDockState](../VS_visualcpp/CDockState-Class.md)  
 Handles persistent storage of docking state data for control bars.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)