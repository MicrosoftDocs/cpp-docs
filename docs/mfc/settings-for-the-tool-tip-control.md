---
description: "Learn more about: Settings for the Tool Tip Control"
title: "Settings for the Tool Tip Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["tool tips [MFC], activating", "CToolTipCtrl class [MFC], settings"]
ms.assetid: ff8c5c46-2047-403a-bd98-ffec3d21ee3a
---
# Settings for the Tool Tip Control

You can set the tool tip control ([CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)) to be either active or inactive. When you set it to be active, the tool tip control appears when the cursor is on a tool. When you set it to be inactive, the tool tip control does not appear, even if the cursor is on a tool. Call [Activate](../mfc/reference/ctooltipctrl-class.md#activate) to activate or deactivate a tool tip control.

You can set an active tool tip to display the tool tip when the cursor is on a tool, whether or not the tool tip control's owner window is active or inactive, by using the TTS_ALWAYSTIP style. If you do not use this style, the tool tip control appears when the tool's owner window is active, but not when it is inactive.

Most applications contain toolbars with tools that correspond to menu commands. For such tools, it is convenient for the tool tip control to display the same text as the corresponding menu item. The system automatically strips the ampersand (&) accelerator characters from all strings passed to a tool tip control, unless the control has the TTS_NOPREFIX style.

## See also

[Using CToolTipCtrl](../mfc/using-ctooltipctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
