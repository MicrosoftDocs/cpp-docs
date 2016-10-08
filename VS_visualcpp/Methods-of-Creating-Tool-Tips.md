---
title: "Methods of Creating Tool Tips"
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
ms.assetid: b015e9f4-ddfb-49a4-a5a6-fa2d45e4d328
caps.latest.revision: 10
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
# Methods of Creating Tool Tips
MFC provides three classes to create and manage the tool tip control: [CWnd](../VS_visualcpp/CWnd-Class.md), [CToolBarCtrl](../VS_visualcpp/CToolBarCtrl-Class.md), [CToolTipCtrl](../VS_visualcpp/CToolTipCtrl-Class.md) and [CMFCToolTipCtrl](../VS_visualcpp/CMFCToolTipCtrl-Class.md). The tool tip member functions in these classes wrap the Windows common control API. Class `CToolBarCtrl` and class `CToolTipCtrl` are derived from class `CWnd`.  
  
 `CWnd` provides four member functions to create and manage tool tips: [EnableToolTips](../Topic/CWnd::EnableToolTips.md), [CancelToolTips](../Topic/CWnd::CancelToolTips.md), [FilterToolTipMessage](../Topic/CWnd::FilterToolTipMessage.md), and [OnToolHitTest](../Topic/CWnd::OnToolHitTest.md). See these individual member functions for more information about how they implement tool tips.  
  
 If you create a toolbar using `CToolBarCtrl`, you can implement tool tips for that toolbar directly using the following member functions: [GetToolTips](../Topic/CToolBarCtrl::GetToolTips.md) and [SetToolTips](../Topic/CToolBarCtrl::SetToolTips.md). See these individual member functions and [Handling Tool Tip Notifications](../VS_visualcpp/Handling-Tool-Tip-Notifications.md) for more information about how they implement tool tips.  
  
 The `CToolTipCtrl` class provides the functionality of the Windows common tool tip control. A single tool tip control can provide information for more than one tool. A tool is either a window, such as a child window or control, or an application-defined rectangular area within a window's client area. The [CMFCToolTipCtrl](../VS_visualcpp/CMFCToolTipCtrl-Class.md) class derives from `CToolTipCtrl` and provides additional visual styles and functionality.  
  
## See Also  
 [Using CToolTipCtrl](../VS_visualcpp/Using-CToolTipCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)