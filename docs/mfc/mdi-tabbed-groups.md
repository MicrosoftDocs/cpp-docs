---
title: "MDI Tabbed Groups | Microsoft Docs"
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
  - "mdi, tabbed groups"
  - "tabbed groups"
ms.assetid: 0a464f36-39b7-4e68-8b67-ec175de28377
caps.latest.revision: 18
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
# MDI Tabbed Groups
The multiple document interface (MDI) tabbed groups feature enables multiple document interface (MDI) applications to display one or more tabbed windows (or groups of tabbed windows, known as *tabbed groups*) in the MDI client area. The tabbed windows can be aligned vertically or horizontally. If an application hosts more than one MDI tabbed group, the groups are separated by splitters.  
  
## Features  
 The following are the features of MDI tabbed groups:  
  
-   An application can create tabbed windows dynamically.  
  
-   An application can align tabbed windows horizontally or vertically.  
  
-   Groups of tabbed windows are separated by splitters. The user can resize tabbed groups by using the splitter.  
  
-   The user can drag individual tabs between groups.  
  
-   The user can drag individual tabs to create new groups.  
  
-   The user can move tabs or create new groups by using a shortcut menu.  
  
-   An application can save and load the layout of tabbed windows.  
  
-   An application can save and load the list of MDI documents.  
  
-   An application can access individual tabbed groups and modify their parameters.  
  
### Using MDI Tabbed Groups  
 The following are tasks commonly performed with MDI tabbed groups:  
  
-   To enable MDI tabbed groups for a main frame window, call [CMDIFrameWndEx::EnableMDITabbedGroups](../mfc/reference/cmdiframewndex-class.md#cmdiframewndex__enablemditabbedgroups). The second parameter of this method is an instance of the `CMDITabInfo` class. You can use the default parameters or modify them before you call `CMDIFrameWndEx::EnableMDITabbedGroups`.  
  
-   To modify the properties of an MDI tabbed group at run time, create or modify a `CMDITabInfo` object and call `CMDIFrameWndEx::EnableMDITabbedGroups` again  
  
-   To obtain a list of MDI tabbed windows, call `CMDIFrameWndEx::GetMDITabGroups`.  
  
-   To create a new MDI tabbed group next to an active tabbed group, call `CMDIFrameWndEx::MDITabNewGroup`.  
  
-   To shift the input focus to the previous or next window of a tabbed group, call `CMDIFrameWndEx::MDITabMoveToNextGroup`.  
  
-   To determine whether a window is a member of an MDI tabbed group call `CMDIFrameWndEx::IsMemberOfMDITabGroup`.  
  
-   To determine whether MDI tabs or MDI tabbed groups are enabled for a main frame window, call `CMDIFrameWndEx::AreMDITabs`. To determine only whether MDI tabbed groups are enabled, call `CMDIFrameWndEx::IsMDITabbedGroup`.  
  
-   To display a shortcut menu when the user clicks a tab or drags it to another MDI tabbed group, override `CMDIFrameWndEx::OnShowMDITabContextMenu` in the `CMDIFrameWndEx`-derived class. If you do not implement this method, the application will not display the shortcut menu.  
  
-   To save the layout of MDI tabbed groups in an application, call `CMDIFrameWndEx::SaveMDIState`. To load a previously saved MDI tabbed group profile, call `CMDIFrameWndEx::LoadMDIState`. You can also call these methods to load or save the list of opened documents in an MDI application. For more information about saving and loading MDI state, see [CMDIFrameWndEx::LoadMDIState](../mfc/reference/cmdiframewndex-class.md#cmdiframewndex__loadmdistate).  
  
## See Also  
 [User Interface Elements](../mfc/user-interface-elements-mfc.md)   
 [CMDIFrameWndEx Class](../mfc/reference/cmdiframewndex-class.md)   
 [CMDIChildWndEx Class](../mfc/reference/cmdichildwndex-class.md)   
 [CMDITabInfo Class](../mfc/reference/cmditabinfo-class.md)
