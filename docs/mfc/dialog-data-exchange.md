---
description: "Learn more about: Dialog Data Exchange"
title: "Dialog Data Exchange"
ms.date: "11/19/2018"
helpviewer_keywords: ["initializing dialog boxes", "canceling data exchange", "dialog box data, retrieving", "DDX (dialog data exchange), data exchange mechanism", "dialog boxes [MFC], initializing", "dialog boxes [MFC], retrieving user input using DDX", "dialog box data", "dialog boxes [MFC], data exchange", "CDataExchange class [MFC], using DDX", "DoDataExchange method [MFC]", "user input [MFC], retrieving from MFC dialog boxes", "capturing user input [MFC]", "transferring dialog box data", "DDX (dialog data exchange), canceling", "UpdateData method [MFC]", "retrieving dialog box data [MFC]"]
ms.assetid: 4675f63b-41d2-45ed-b6c3-235ad8ab924b
---
# Dialog Data Exchange

If you use the DDX mechanism, you set the initial values of the dialog object's member variables, typically in your `OnInitDialog` handler or the dialog constructor. Immediately before the dialog is displayed, the framework's DDX mechanism transfers the values of the member variables to the controls in the dialog box, where they appear when the dialog box itself appears in response to `DoModal` or `Create`. The default implementation of `OnInitDialog` in `CDialog` calls the `UpdateData` member function of class `CWnd` to initialize the controls in the dialog box.

The same mechanism transfers values from the controls to the member variables when the user clicks the OK button (or whenever you call the `UpdateData` member function with the argument **TRUE**). The dialog data validation mechanism validates any data items for which you specified validation rules.

The following figure illustrates dialog data exchange.

![Dialog box data exchange](../mfc/media/vc379d1.gif "Dialog box data exchange") <br/>
Dialog Data Exchange

`UpdateData` works in both directions, as specified by the **BOOL** parameter passed to it. To carry out the exchange, `UpdateData` sets up a `CDataExchange` object and calls your dialog class's override of `CDialog`'s `DoDataExchange` member function. `DoDataExchange` takes an argument of type `CDataExchange`. The `CDataExchange` object passed to `UpdateData` represents the context of the exchange, defining such information as the direction of the exchange.

When you (or a Code wizard) override `DoDataExchange`, you specify a call to one DDX function per data member (control). Each DDX function knows how to exchange data in both directions based on the context supplied by the `CDataExchange` argument passed to your `DoDataExchange` by `UpdateData`.

MFC provides many DDX functions for different kinds of exchange. The following example shows a `DoDataExchange` override in which two DDX functions and one DDV function are called:

[!code-cpp[NVC_MFCControlLadenDialog#49](codesnippet/cpp/dialog-data-exchange_1.cpp)]

The `DDX_` and `DDV_` lines are a data map. The sample DDX and DDV functions shown are for a check-box control and an edit-box control, respectively.

If the user cancels a modal dialog box, the `OnCancel` member function terminates the dialog box and `DoModal` returns the value **IDCANCEL**. In that case, no data is exchanged between the dialog box and the dialog object.

## See also

[Dialog Data Exchange and Validation](dialog-data-exchange-and-validation.md)<br/>
[Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md)<br/>
[Dialog Data Validation](dialog-data-validation.md)
