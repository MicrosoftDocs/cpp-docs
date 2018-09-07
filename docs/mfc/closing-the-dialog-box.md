---
title: "Closing the Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["MFC dialog boxes [MFC], closing", "dialog boxes [MFC], closing"]
ms.assetid: 946f5675-c482-46a4-a5dd-34fe138ffae5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Closing the Dialog Box
A modal dialog box closes when the user chooses one of its buttons, typically the OK button or the Cancel button. Choosing the OK or Cancel button causes Windows to send the dialog object a **BN_CLICKED** control-notification message with the button's ID, either **IDOK** or **IDCANCEL**. `CDialog` provides default handler functions for these messages: `OnOK` and `OnCancel`. The default handlers call the `EndDialog` member function to close the dialog window. You can also call `EndDialog` from your own code. For more information, see the [EndDialog](../mfc/reference/cdialog-class.md#enddialog) member function of class `CDialog` in the *MFC Reference*.  
  
 To arrange for closing and deleting a modeless dialog box, override `PostNcDestroy` and invoke the **delete** operator on the **this** pointer. [Destroying the Dialog Box](../mfc/destroying-the-dialog-box.md) explains what happens next.  
  
## See Also  
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)

