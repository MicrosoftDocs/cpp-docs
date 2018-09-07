---
title: "Methods of Creating Tool Tips | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["CToolTipCtrl class [MFC], creating tool tips", "tool tips [MFC], tool tip controls", "tool tips [MFC], creating"]
ms.assetid: b015e9f4-ddfb-49a4-a5a6-fa2d45e4d328
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Methods of Creating Tool Tips
MFC provides three classes to create and manage the tool tip control: [CWnd](../mfc/reference/cwnd-class.md), [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md), [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) and [CMFCToolTipCtrl](../mfc/reference/cmfctooltipctrl-class.md). The tool tip member functions in these classes wrap the Windows common control API. Class `CToolBarCtrl` and class `CToolTipCtrl` are derived from class `CWnd`.  
  
 `CWnd` provides four member functions to create and manage tool tips: [EnableToolTips](../mfc/reference/cwnd-class.md#enabletooltips), [CancelToolTips](../mfc/reference/cwnd-class.md#canceltooltips), [FilterToolTipMessage](../mfc/reference/cwnd-class.md#filtertooltipmessage), and [OnToolHitTest](../mfc/reference/cwnd-class.md#ontoolhittest). See these individual member functions for more information about how they implement tool tips.  
  
 If you create a toolbar using `CToolBarCtrl`, you can implement tool tips for that toolbar directly using the following member functions: [GetToolTips](../mfc/reference/ctoolbarctrl-class.md#gettooltips) and [SetToolTips](../mfc/reference/ctoolbarctrl-class.md#settooltips). See these individual member functions and [Handling Tool Tip Notifications](../mfc/handling-tool-tip-notifications.md) for more information about how they implement tool tips.  
  
 The `CToolTipCtrl` class provides the functionality of the Windows common tool tip control. A single tool tip control can provide information for more than one tool. A tool is either a window, such as a child window or control, or an application-defined rectangular area within a window's client area. The [CMFCToolTipCtrl](../mfc/reference/cmfctooltipctrl-class.md) class derives from `CToolTipCtrl` and provides additional visual styles and functionality.  
  
## See Also  
 [Using CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controls](../mfc/controls-mfc.md)

