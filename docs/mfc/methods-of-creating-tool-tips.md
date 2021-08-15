---
description: "Learn more about: Methods of Creating Tool Tips"
title: "Methods of Creating Tool Tips"
ms.date: "11/04/2016"
helpviewer_keywords: ["CToolTipCtrl class [MFC], creating tool tips", "tool tips [MFC], tool tip controls", "tool tips [MFC], creating"]
ms.assetid: b015e9f4-ddfb-49a4-a5a6-fa2d45e4d328
---
# Methods of Creating Tool Tips

MFC provides three classes to create and manage the tool tip control: [CWnd](reference/cwnd-class.md), [CToolBarCtrl](reference/ctoolbarctrl-class.md), [CToolTipCtrl](reference/ctooltipctrl-class.md) and [CMFCToolTipCtrl](reference/cmfctooltipctrl-class.md). The tool tip member functions in these classes wrap the Windows common control API. Class `CToolBarCtrl` and class `CToolTipCtrl` are derived from class `CWnd`.

`CWnd` provides four member functions to create and manage tool tips: [EnableToolTips](reference/cwnd-class.md#enabletooltips), [CancelToolTips](reference/cwnd-class.md#canceltooltips), [FilterToolTipMessage](reference/cwnd-class.md#filtertooltipmessage), and [OnToolHitTest](reference/cwnd-class.md#ontoolhittest). See these individual member functions for more information about how they implement tool tips.

If you create a toolbar using `CToolBarCtrl`, you can implement tool tips for that toolbar directly using the following member functions: [GetToolTips](reference/ctoolbarctrl-class.md#gettooltips) and [SetToolTips](reference/ctoolbarctrl-class.md#settooltips). See these individual member functions and [Handling Tool Tip Notifications](handling-tool-tip-notifications.md) for more information about how they implement tool tips.

The `CToolTipCtrl` class provides the functionality of the Windows common tool tip control. A single tool tip control can provide information for more than one tool. A tool is either a window, such as a child window or control, or an application-defined rectangular area within a window's client area. The [CMFCToolTipCtrl](reference/cmfctooltipctrl-class.md) class derives from `CToolTipCtrl` and provides additional visual styles and functionality.

## See also

[Using CToolTipCtrl](using-ctooltipctrl.md)<br/>
[Controls](controls-mfc.md)
