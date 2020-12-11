---
description: "Learn more about: Creating the Tab Control"
title: "Creating the Tab Control"
ms.date: "11/04/2016"
f1_keywords: ["TCS_EX_REGISTERDROP", "TCS_EX_FLATSEPARATORS"]
helpviewer_keywords: ["TCS_EX_REGISTERDROP extended style [MFC]", "tab controls [MFC], creating", "CTabCtrl class [MFC], creating", "TCS_EX_FLATSEPARATORS extended style"]
ms.assetid: 3a9c2d64-f5f4-41ea-84ab-fceb73c3dbdc
---
# Creating the Tab Control

How the tab control is created depends on whether you are using the control in a dialog box or creating it in a nondialog window.

### To use CTabCtrl directly in a dialog box

1. In the dialog editor, add a Tab Control to your dialog template resource. Specify its control ID.

1. Use the [Add Member Variable Wizard](../ide/adding-a-member-variable-visual-cpp.md) to add a member variable of type [CTabCtrl](reference/ctabctrl-class.md) with the Control property. You can use this member to call `CTabCtrl` member functions.

1. Map handler functions in the dialog class for any tab control notification messages you need to handle. For more information, see [Mapping Messages to Functions](reference/mapping-messages-to-functions.md).

1. In [OnInitDialog](reference/cdialog-class.md#oninitdialog), set the styles for the `CTabCtrl`.

### To use CTabCtrl in a nondialog window

1. Define the control in the view or window class.

1. Call the control's [Create](reference/ctabctrl-class.md#create) member function, possibly in [OnInitialUpdate](reference/cview-class.md#oninitialupdate), possibly as early as the parent window's [OnCreate](reference/cwnd-class.md#oncreate) handler function (if you're subclassing the control). Set the styles for the control.

After the `CTabCtrl` object has been created, you can set or clear the following extended styles:

- **TCS_EX_FLATSEPARATORS** The tab control will draw separators between the tab items. This extended style only affects tab controls that have the **TCS_BUTTONS** and **TCS_FLATBUTTONS** styles. By default, creating the tab control with the **TCS_FLATBUTTONS** style sets this extended style.

- **TCS_EX_REGISTERDROP** The tab control generates **TCN_GETOBJECT** notification messages to request a drop target object when an object is dragged over the tab items in the control.

    > [!NOTE]
    >  To receive the **TCN_GETOBJECT** notification, you must initialize the OLE libraries with a call to [AfxOleInit](reference/ole-initialization.md#afxoleinit).

These styles can be retrieved and set, after the control has been created, with respective calls to the [GetExtendedStyle](reference/ctabctrl-class.md#getextendedstyle) and [SetExtendedStyle](reference/ctabctrl-class.md#setextendedstyle) member functions.

For instance, set the **TCS_EX_FLATSEPARATORS** style with the following lines of code:

[!code-cpp[NVC_MFCControlLadenDialog#33](codesnippet/cpp/creating-the-tab-control_1.cpp)]

Clear the **TCS_EX_FLATSEPARATORS** style from a `CTabCtrl` object with the following lines of code:

[!code-cpp[NVC_MFCControlLadenDialog#34](codesnippet/cpp/creating-the-tab-control_2.cpp)]

This will remove the separators that appear between the buttons of your `CTabCtrl` object.

## See also

[Using CTabCtrl](using-ctabctrl.md)<br/>
[Controls](controls-mfc.md)
