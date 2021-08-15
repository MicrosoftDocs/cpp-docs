---
description: "Learn more about: Processing Header-Control Notifications"
title: "Processing Header-Control Notifications"
ms.date: "11/04/2016"
helpviewer_keywords: ["CHeaderCtrl class [MFC], processing notifications", "controls [MFC], header", "notifications [MFC], processing for CHeaderCtrl", "header controls [MFC], processing notifications", "header control notifications"]
ms.assetid: e6c6af7c-d458-4d33-85aa-48014ccde5f6
---
# Processing Header-Control Notifications

In your view or dialog class, use the [Class Wizard](reference/mfc-class-wizard.md) to create an [OnChildNotify](reference/cwnd-class.md#onchildnotify) handler function with a switch statement for any header-control ([CHeaderCtrl](reference/cheaderctrl-class.md)) notification messages you want to handle (see [Mapping Messages to Functions](reference/mapping-messages-to-functions.md)). Notifications are sent to the parent window when the user clicks or double-clicks a header item, drags a divider between items, and so on.

The notification messages associated with a header control are listed in [Header Control Reference](/windows/win32/controls/header-control-reference) in the Windows SDK.

## See also

[Using CHeaderCtrl](using-cheaderctrl.md)<br/>
[Controls](controls-mfc.md)
