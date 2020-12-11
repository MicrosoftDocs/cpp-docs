---
description: "Learn more about: Creating the Month Calendar Control"
title: "Creating the Month Calendar Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["CMonthCalCtrl class [MFC], creating", "month calendar controls [MFC], creating", "month calendar controls [MFC]"]
ms.assetid: 185cc642-85e9-4365-8a4c-d90b75b010f7
---
# Creating the Month Calendar Control

How the month calendar control is created depends on whether you are using the control in a dialog box or creating it in a nondialog window.

### To use CMonthCalCtrl directly in a dialog box

1. In the dialog editor, add a Month Calendar Control to your dialog template resource. Specify its control ID.

1. Specify any styles required, using the Properties dialog box of the month calendar control.

1. Use the [Add Member Variable Wizard](../ide/adding-a-member-variable-visual-cpp.md) to add a member variable of type [CMonthCalCtrl](reference/cmonthcalctrl-class.md) with the Control property. You can use this member to call `CMonthCalCtrl` member functions.

1. Use the [Class Wizard](reference/mfc-class-wizard.md) to map handler functions in the dialog class for any month calendar control notification messages you need to handle (see [Mapping Messages to Functions](reference/mapping-messages-to-functions.md)).

1. In [OnInitDialog](reference/cdialog-class.md#oninitdialog), set any additional styles for the `CMonthCalCtrl` object.

### To use CMonthCalCtrl in a nondialog window

1. Define the control in the view or window class.

1. Call the control's [Create](reference/cmonthcalctrl-class.md#create) member function, possibly in [OnInitialUpdate](reference/cview-class.md#oninitialupdate), possibly as early as the parent window's [OnCreate](reference/cwnd-class.md#oncreate) handler function (if you're subclassing the control). Set the styles for the control.

## See also

[Using CMonthCalCtrl](using-cmonthcalctrl.md)<br/>
[Controls](controls-mfc.md)
