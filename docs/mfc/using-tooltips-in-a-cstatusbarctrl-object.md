---
description: "Learn more about: Using Tooltips in a CStatusBarCtrl Object"
title: "Using Tooltips in a CStatusBarCtrl Object"
ms.date: "11/04/2016"
helpviewer_keywords: ["tool tips [MFC], using in status bars", "status bars [MFC], tool tips", "CStatusBarCtrl class [MFC], tool tips"]
ms.assetid: a77597a7-43ef-4b8f-87bc-a8ea1dc63dc3
---
# Using Tooltips in a CStatusBarCtrl Object

To enable tooltips for a status bar control, create the `CStatusBarCtrl` object with the SBT_TOOLTIPS style.

> [!NOTE]
> If you are using a `CStatusBar` object to implement your status bar, use the `CStatusBar::CreateEx` function. It allows you to specify additional styles for the embedded `CStatusBarCtrl` object.

Once the `CStatusBarCtrl` object has been successfully created, use [CStatusBarCtrl::SetTipText](../mfc/reference/cstatusbarctrl-class.md#settiptext) and [CStatusBarCtrl::GetTipText](../mfc/reference/cstatusbarctrl-class.md#gettiptext) to set and retrieve the tip text for a specific pane.

Once the tool tip has been set, it is displayed only if the part has an icon and no text, or if all of the text cannot be displayed inside the part. Tool tips are not supported in simple mode.

## See also

[Using CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
