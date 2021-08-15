---
description: "Learn more about: Modal and Modeless Dialog Boxes"
title: "Modal and Modeless Dialog Boxes"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC dialog boxes [MFC], modeless", "modeless dialog boxes [MFC]", "MFC dialog boxes [MFC], modal", "modal dialog boxes [MFC]"]
ms.assetid: e83df336-5994-4b8f-8233-7942f997315b
---
# Modal and Modeless Dialog Boxes

You can use class [CDialog](reference/cdialog-class.md) to manage two kinds of dialog boxes:

- *Modal dialog boxes*, which require the user to respond before continuing the program

- *Modeless dialog boxes*, which stay on the screen and are available for use at any time but permit other user activities

The resource editing and procedures for creating a dialog template are the same for modal and modeless dialog boxes.

Creating a dialog box for your program requires the following steps:

1. Use the [dialog editor](../windows/dialog-editor.md) to design the dialog box and create its dialog-template resource.

1. Create a dialog class.

1. Connect the [dialog resource's controls to message handlers](../windows/adding-editing-or-deleting-controls.md) in the dialog class.

1. Add data members associated with the dialog box's controls and to specify [dialog data exchange](dialog-data-exchange.md) and [dialog data validations](dialog-data-validation.md) for the controls.

## See also

[Dialog Boxes](dialog-boxes.md)<br/>
[Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md)
