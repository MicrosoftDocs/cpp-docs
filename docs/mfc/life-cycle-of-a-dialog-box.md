---
description: "Learn more about: Working with Dialog Boxes in MFC"
title: "Working with Dialog Boxes in MFC"
ms.date: "09/27/2019"
helpviewer_keywords: ["dialog boxes [MFC], life cycle", "modal dialog boxes [MFC], life cycle", "modeless dialog boxes [MFC], life cycle", "MFC dialog boxes [MFC], life cycle", "life cycle of dialog boxes [MFC]"]
ms.assetid: e16fd78e-238d-4f31-8c9d-8564f3953bd9
---
# Working with Dialog Boxes in MFC

During the life cycle of a dialog box, the user invokes the dialog box, typically inside a command handler that creates and initializes the dialog object, the user interacts with the dialog box, then dialog box closes.

For modal dialog boxes, your handler gathers any data the user entered once the dialog box closes. Since the dialog object exists after its dialog window has closed, you can simply use the member variables of your dialog class to extract the data.

For modeless dialog boxes, you may often extract data from the dialog object while the dialog box is still visible. At some point, the dialog object is destroyed; when this happens depends on your code.

## What do you want to know more about

- [Creating and displaying dialog boxes](creating-and-displaying-dialog-boxes.md)

- [Creating modal dialog boxes](creating-modal-dialog-boxes.md)

- [Creating modeless dialog boxes](creating-modeless-dialog-boxes.md)

- [Using a dialog template in memory](using-a-dialog-template-in-memory.md)

- [Setting the dialog box's background color](setting-the-dialog-boxs-background-color.md)

- [Initializing the dialog box](initializing-the-dialog-box.md)

- [Handling Windows messages in your dialog box](handling-windows-messages-in-your-dialog-box.md)

- [Retrieving data from the dialog object](retrieving-data-from-the-dialog-object.md)

- [Closing the dialog box](closing-the-dialog-box.md)

- [Destroying the dialog box](destroying-the-dialog-box.md)

- [Dialog data exchange (DDX) and validation (DDV)](dialog-data-exchange-and-validation.md)

- [Property sheet dialog boxes](property-sheets-and-property-pages-mfc.md)

## See also

[Dialog Boxes](dialog-boxes.md)
