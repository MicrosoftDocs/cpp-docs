---
description: "Learn more about: Closing the Dialog Box"
title: "Closing the Dialog Box"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC dialog boxes [MFC], closing", "dialog boxes [MFC], closing"]
ms.topic: concept-article
---
# Closing the Dialog Box

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

A modal dialog box closes when the user chooses one of its buttons, typically the OK button or the Cancel button. Choosing the OK or Cancel button causes Windows to send the dialog object a **BN_CLICKED** control-notification message with the button's ID, either **IDOK** or **IDCANCEL**. `CDialog` provides default handler functions for these messages: `OnOK` and `OnCancel`. The default handlers call the `EndDialog` member function to close the dialog window. You can also call `EndDialog` from your own code. For more information, see the [EndDialog](reference/cdialog-class.md#enddialog) member function of class `CDialog` in the *MFC Reference*.

To arrange for closing and deleting a modeless dialog box, override `PostNcDestroy` and invoke the **`delete`** operator on the **`this`** pointer. [Destroying the Dialog Box](destroying-the-dialog-box.md) explains what happens next.

## See also

[Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md)
