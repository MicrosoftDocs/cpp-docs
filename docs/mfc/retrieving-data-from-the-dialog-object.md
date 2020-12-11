---
description: "Learn more about: Retrieving Data from the Dialog Object"
title: "Retrieving Data from the Dialog Object"
ms.date: "11/04/2016"
helpviewer_keywords: ["dialog boxes [MFC], retrieving user data", "dialog box data [MFC]", "data [MFC], retrieving", "GetDlgItemText method [MFC]", "SetDlgItemText method [MFC]", "SetWindowText method [MFC]", "dialog box data [MFC], retrieving", "retrieving data [MFC]", "user input [MFC], retrieving from MFC dialog boxes", "capturing user input [MFC]", "dialog box controls [MFC], initializing values", "DDX (dialog data exchange) [MFC]", "MFC dialog boxes [MFC], retrieving user input", "data retrieval [MFC], dialog boxes", "data [MFC], dialog boxes", "DDX (dialog data exchange) [MFC], about DDX", "DDX (dialog data exchange) [MFC], retrieving data from Dialog object", "GetWindowText method [MFC]"]
ms.assetid: bdca2b61-6b53-4c2e-b426-8712c7a38ec0
---
# Retrieving Data from the Dialog Object

The framework provides an easy way to initialize the values of controls in a dialog box and to retrieve values from the controls. The more laborious manual approach is to call functions such as the `SetDlgItemText` and `GetDlgItemText` member functions of class `CWnd`, which apply to control windows. With these functions, you access each control individually to set or get its value, calling functions such as `SetWindowText` and `GetWindowText`. The framework's approach automates both initialization and retrieval.

Dialog data exchange (DDX) lets you exchange data between the controls in the dialog box and member variables in the dialog object more easily. This exchange works both ways. To initialize the controls in the dialog box, you can set the values of data members in the dialog object, and the framework will transfer the values to the controls before the dialog box is displayed. Then you can at any time update the dialog data members with data entered by the user. At that point, you can use the data by referring to the data member variables.

You can also arrange for the values of dialog controls to be validated automatically with dialog data validation (DDV).

DDX and DDV are explained in more detail in [Dialog Data Exchange and Validation](../mfc/dialog-data-exchange-and-validation.md).

For a modal dialog box, you can retrieve any data the user entered when `DoModal` returns IDOK but before the dialog object is destroyed. For a modeless dialog box, you can retrieve data from the dialog object at any time by calling `UpdateData` with the argument **TRUE** and then accessing dialog class member variables. This subject is discussed in more detail in [Dialog Data Exchange and Validation](../mfc/dialog-data-exchange-and-validation.md).

## See also

[Working with Dialog Boxes in MFC](../mfc/life-cycle-of-a-dialog-box.md)
