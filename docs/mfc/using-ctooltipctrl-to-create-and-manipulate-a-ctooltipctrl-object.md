---
description: "Learn more about: Using CToolTipCtrl to Create and Manipulate a CToolTipCtrl Object"
title: "Using CToolTipCtrl to Create and Manipulate a CToolTipCtrl Object"
ms.date: "11/04/2016"
helpviewer_keywords: ["tool tips [MFC], creating", "CToolTipCtrl class [MFC], using"]
ms.assetid: 0a34583f-f66d-46a1-a239-31b80ea395ad
---
# Using CToolTipCtrl to Create and Manipulate a CToolTipCtrl Object

Here is an example of [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) usage:

### To create and manipulate a CToolTipCtrl

1. Construct the `CToolTipCtrl` object.

1. Call [Create](../mfc/reference/ctooltipctrl-class.md#create) to create the Windows tool tip common control and attach it to the `CToolTipCtrl` object.

1. Call [AddTool](../mfc/reference/ctooltipctrl-class.md#addtool) to register a tool with the tool tip control, so that the information stored in the tool tip is displayed when the cursor is on the tool.

1. Call [SetToolInfo](../mfc/reference/ctooltipctrl-class.md#settoolinfo) to set the information that a tool tip maintains for a tool.

1. Call [SetToolRect](../mfc/reference/ctooltipctrl-class.md#settoolrect) to set a new bounding rectangle for a tool.

1. Call [HitTest](../mfc/reference/ctooltipctrl-class.md#hittest) to test a point to determine whether it is within the bounding rectangle of the given tool and, if so, retrieve information about the tool.

1. Call [GetToolCount](../mfc/reference/ctooltipctrl-class.md#gettoolcount) to retrieve a count of the tools registered with the tool tip control.

## See also

[Using CToolTipCtrl](../mfc/using-ctooltipctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
