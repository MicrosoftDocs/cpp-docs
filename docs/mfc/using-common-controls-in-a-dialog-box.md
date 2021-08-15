---
description: "Learn more about: Using Common Controls in a Dialog Box"
title: "Using Common Controls in a Dialog Box"
ms.date: "11/04/2016"
helpviewer_keywords: ["common controls [MFC], in dialog boxes", "dialog box controls [MFC], common controls", "Windows common controls [MFC], in dialog boxes"]
ms.assetid: 17713caf-09f8-484a-bf54-5f48bf09cce9
---
# Using Common Controls in a Dialog Box

The Windows common controls can be used in [dialog boxes](../mfc/dialog-boxes.md), form views, record views, and any other window based on a dialog template. The following procedure, with minor changes, will work for forms as well.

## Procedures

#### To use a common control in a dialog box

1. Place the control on the dialog template [using the dialog editor](../mfc/using-the-dialog-editor-to-add-controls.md).

1. Add to the dialog class a member variable that represents the control. In the **Add Member Variable** dialog box, check **Control variable** and ensure that **Control** is selected for the **Category**.

1. If this common control is providing input to the program, declare additional member variable(s) in the dialog class to handle those input values.

    > [!NOTE]
    >  You can add these member variables using the context menu in Class View (see [Adding a Member Variable](../ide/adding-a-member-variable-visual-cpp.md)).

1. In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) for your dialog class, set the initial conditions for the common control. Using the member variable created in the previous step, use the member functions to set initial value and other settings. See the following descriptions of the controls for details on settings.

   You can also use [dialog data exchange](../mfc/dialog-data-exchange-and-validation.md) (DDX) to initialize controls in a dialog box.

1. In handlers for controls on the dialog box, use the member variable to manipulate the control. See the following descriptions of the controls for details on methods.

    > [!NOTE]
    >  The member variable will exist only as long as the dialog box itself exists. You will not be able to query the control for input values after the dialog box has been closed. To work with input values from a common control, override `OnOK` in your dialog class. In your override, query the control for input values and store those values in member variables of the dialog class.

    > [!NOTE]
    >  You can also use dialog data exchange to set or retrieve values from the controls in a dialog box.

## Remarks

The addition of some common controls to a dialog box will cause the dialog box to no longer function. Refer to [Adding Controls to a Dialog Causes the Dialog to No Longer Function](../windows/adding-editing-or-deleting-controls.md) for more information on handling this situation.

## What do you want to do

- [Add controls to a dialog box by hand instead of with the dialog editor](../mfc/adding-controls-by-hand.md)

- [Derive my control from one of the standard Windows common controls](../mfc/deriving-controls-from-a-standard-control.md)

- [Use a common control as a child window](../mfc/using-a-common-control-as-a-child-window.md)

- [Receive notification messages from a control](../mfc/receiving-notification-from-common-controls.md)

- [Use dialog data exchange (DDX)](../mfc/dialog-data-exchange-and-validation.md)

## See also

[Making and Using Controls](../mfc/making-and-using-controls.md)<br/>
[Controls](../mfc/controls-mfc.md)
