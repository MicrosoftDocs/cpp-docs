---
description: "Learn more about: Creating the Header Control"
title: "Creating the Header Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["CHeaderCtrl class [MFC], creating", "header controls [MFC], creating"]
ms.assetid: 7864d9d2-4a2c-4622-b58b-7b110a1e28d2
---
# Creating the Header Control

The header control is not directly available in the dialog editor (although you can add a list control, which includes a header control).

### To put a header control in a dialog box

1. Manually embed a member variable of type [CHeaderCtrl](reference/cheaderctrl-class.md) in your dialog class.

1. In [OnInitDialog](reference/cdialog-class.md#oninitdialog), create and set the styles for the `CHeaderCtrl`, position it, and display it.

1. Add items to the header control.

1. Use the [Class Wizard](reference/mfc-class-wizard.md) to map handler functions in the dialog class for any header-control notification messages you need to handle (see [Mapping Messages to Functions](reference/mapping-messages-to-functions.md)).

### To put a header control in a view (not a CListView)

1. Embed a [CHeaderCtrl](reference/cheaderctrl-class.md) object in your view class.

1. Style, position, and display the header control window in the view's [OnInitialUpdate](reference/cview-class.md#oninitialupdate) member function.

1. Add items to the header control.

1. Use the [Class Wizard](reference/mfc-class-wizard.md) to map handler functions in the view class for any header-control notification messages you need to handle (see [Mapping Messages to Functions](reference/mapping-messages-to-functions.md)).

In either case, the embedded control object is created when the view or dialog object is created. Then you must call [CHeaderCtrl::Create](reference/cheaderctrl-class.md#create) to create the control window. To position the control, call [CHeaderCtrl::Layout](reference/cheaderctrl-class.md#layout) to determine the control's initial size and position and [SetWindowPos](reference/cwnd-class.md#setwindowpos) to set the position you want. Then add items as described in [Adding Items to the Header Control](adding-items-to-the-header-control.md).

For more information, see [Creating a Header Control](/windows/win32/Controls/header-controls) in the Windows SDK.

## See also

[Using CHeaderCtrl](using-cheaderctrl.md)<br/>
[Controls](controls-mfc.md)
