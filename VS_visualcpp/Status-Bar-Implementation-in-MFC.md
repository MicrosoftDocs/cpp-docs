---
title: "Status Bar Implementation in MFC"
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
ms.assetid: be5cd876-38e3-4d5c-b8cb-16d57a16a142
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
# Status Bar Implementation in MFC
A [CStatusBar](../VS_visualcpp/CStatusBar-Class.md) object is a control bar with a row of text output panes. The output panes are commonly used as message lines and as status indicators. Examples include the menu help-message lines that briefly explain the selected menu command and the indicators that show the status of the SCROLL LOCK, NUM LOCK, and other keys.  
  
 As of MFC version 4.0, status bars are implemented using class [CStatusBarCtrl](../VS_visualcpp/CStatusBarCtrl-Class.md), which encapsulates a status bar common control. For backward compatibility, MFC retains the older status bar implementation in class **COldStatusBar**. The documentation for earlier versions of MFC describes **COldStatusBar** under `CStatusBar`.  
  
 [CStatusBar::GetStatusBarCtrl](../Topic/CStatusBar::GetStatusBarCtrl.md), a member function new to MFC 4.0, allows you to take advantage of the Windows common control's support for status bar customization and additional functionality. `CStatusBar` member functions give you most of the functionality of the Windows common controls; however, when you call `GetStatusBarCtrl`, you can give your status bars even more of the characteristics of a status bar. When you call `GetStatusBarCtrl`, it will return a reference to a `CStatusBarCtrl` object. You can use that reference to manipulate the status bar control.  
  
 The following figure shows a status bar that displays several indicators.  
  
 ![Status bar](../VS_visualcpp/media/vc37DY1.gif "vc37DY1")  
A Status Bar  
  
 Like the toolbar, the status-bar object is embedded in its parent frame window and is constructed automatically when the frame window is constructed. The status bar, like all control bars, is destroyed automatically as well when the parent frame is destroyed.  
  
## What do you want to know more about?  
  
-   [Updating the text of a status bar pane](../VS_visualcpp/Updating-the-Text-of-a-Status-Bar-Pane.md)  
  
-   MFC classes [CStatusBar](../VS_visualcpp/CStatusBar-Class.md) and [CStatusBarCtrl](../VS_visualcpp/CStatusBarCtrl-Class.md)  
  
-   [Control bars](../VS_visualcpp/Control-Bars.md)  
  
-   [Dialog bars](../VS_visualcpp/Dialog-Bars.md)  
  
-   [Toolbars (MFC Toolbar Implementation)](../VS_visualcpp/MFC-Toolbar-Implementation.md)  
  
## See Also  
 [Status Bars](../VS_visualcpp/Status-Bars.md)