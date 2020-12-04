---
description: "Learn more about: Creating the List Control"
title: "Creating the List Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["CListCtrl class [MFC], creating control", "list controls [MFC]"]
ms.assetid: a4cb1729-31b6-4d2b-a44b-367474848a39
---
# Creating the List Control

How the list control ([CListCtrl](reference/clistctrl-class.md)) is created depends on whether you're using the control directly or using class [CListView](reference/clistview-class.md) instead. If you use `CListView`, the framework constructs the view as part of its document/view creation sequence. Creating the list view creates the list control as well (the two are the same thing). The control is created in the view's [OnCreate](reference/cwnd-class.md#oncreate) handler function. In this case, the control is ready for you to add items, via a call to [GetListCtrl](reference/clistview-class.md#getlistctrl).

### To use CListCtrl directly in a dialog box

1. In the dialog editor, add a List Control to your dialog template resource. Specify its control ID.

1. Use the [Add Member Variable Wizard](../ide/adding-a-member-variable-visual-cpp.md) to add a member variable of type `CListCtrl` with the Control property. You can use this member to call `CListCtrl` member functions.

1. Use the [Class Wizard](reference/mfc-class-wizard.md) to map handler functions in the dialog class for any list control notification messages you need to handle (see [Mapping Messages to Functions](reference/mapping-messages-to-functions.md)).

1. In [OnInitDialog](reference/cdialog-class.md#oninitdialog), set the styles for the `CListCtrl`. See [Changing List Control Styles](changing-list-control-styles.md). This determines the kind of "view" you get in the control, although you can change the view later.

### To use CListCtrl in a nondialog window

1. Define the control in the view or window class.

1. Call the control's [Create](reference/clistctrl-class.md#create) member function, possibly in [OnInitialUpdate](reference/cview-class.md#oninitialupdate), possibly as early as the parent window's [OnCreate](reference/cwnd-class.md#oncreate) handler function (if you're subclassing the control). Set the styles for the control.

## See also

[Using CListCtrl](using-clistctrl.md)<br/>
[Controls](controls-mfc.md)
