---
title: "Methods of Creating Tool Tips"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CToolTipCtrl class, creating tool tips"
  - "tool tips [C++], tool tip controls"
  - "tool tips [C++], creating"
ms.assetid: b015e9f4-ddfb-49a4-a5a6-fa2d45e4d328
caps.latest.revision: 10
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
# Methods of Creating Tool Tips
MFC provides three classes to create and manage the tool tip control: [CWnd](../mfcref/cwnd-class.md), [CToolBarCtrl](../mfcref/ctoolbarctrl-class.md), [CToolTipCtrl](../mfcref/ctooltipctrl-class.md) and [CMFCToolTipCtrl](../mfcref/cmfctooltipctrl-class.md). The tool tip member functions in these classes wrap the Windows common control API. Class `CToolBarCtrl` and class `CToolTipCtrl` are derived from class `CWnd`.  
  
 `CWnd` provides four member functions to create and manage tool tips: [EnableToolTips](../Topic/CWnd::EnableToolTips.md), [CancelToolTips](../Topic/CWnd::CancelToolTips.md), [FilterToolTipMessage](../Topic/CWnd::FilterToolTipMessage.md), and [OnToolHitTest](../Topic/CWnd::OnToolHitTest.md). See these individual member functions for more information about how they implement tool tips.  
  
 If you create a toolbar using `CToolBarCtrl`, you can implement tool tips for that toolbar directly using the following member functions: [GetToolTips](../Topic/CToolBarCtrl::GetToolTips.md) and [SetToolTips](../Topic/CToolBarCtrl::SetToolTips.md). See these individual member functions and [Handling Tool Tip Notifications](../mfc/handling-tool-tip-notifications.md) for more information about how they implement tool tips.  
  
 The `CToolTipCtrl` class provides the functionality of the Windows common tool tip control. A single tool tip control can provide information for more than one tool. A tool is either a window, such as a child window or control, or an application-defined rectangular area within a window's client area. The [CMFCToolTipCtrl](../mfcref/cmfctooltipctrl-class.md) class derives from `CToolTipCtrl` and provides additional visual styles and functionality.  
  
## See Also  
 [Using CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controls](../mfc/controls--mfc-.md)