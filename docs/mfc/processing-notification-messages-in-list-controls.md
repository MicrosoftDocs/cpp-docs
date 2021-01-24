---
description: "Learn more about: Processing Notification Messages in List Controls"
title: "Processing Notification Messages in List Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["processing notifications [MFC]", "CListCtrl class [MFC], processing notifications"]
ms.assetid: 1f0e296e-d2a3-48fc-ae38-51d7fb096f51
---
# Processing Notification Messages in List Controls

As users click column headers, drag icons, edit labels, and so on, the list control ([CListCtrl](../mfc/reference/clistctrl-class.md)) sends notification messages to its parent window. Handle these messages if you want to do something in response. For example, when the user clicks a column header, you might want to sort the items based on the contents of the clicked column, as in Microsoft Outlook.

Process WM_NOTIFY messages from the list control in your view or dialog class. Use the [Class Wizard](reference/mfc-class-wizard.md) to create an [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) handler function with a switch statement based on which notification message is being handled.

For a list of the notifications a list control can send to its parent window, see [List View Control Reference](/windows/win32/Controls/list-view-control-reference) in the Windows SDK.

## See also

[Using CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
