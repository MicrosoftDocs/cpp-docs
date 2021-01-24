---
description: "Learn more about: Declaring a Variable Based on Your New Control Class"
title: "Declaring a Variable Based on Your New Control Class"
ms.date: "11/04/2016"
f1_keywords: ["vc.codewiz.classes.control.variable"]
helpviewer_keywords: ["variables [MFC], control classes", "control classes [MFC], variables", "classes [MFC], declaring variables based on"]
ms.assetid: 5722dc38-c0eb-40bd-93da-67a808140d03
---
# Declaring a Variable Based on Your New Control Class

Once you have created an MFC control class, you can declare a variable based on it. To provide a context for the new variable, you must open the dialog editor and edit the dialog box in which you want to use your reusable control. Also, the dialog box must already have a class associated with it. For information on using the dialog editor, see [Dialog Editor](../../windows/dialog-editor.md).

### To declare a variable based on your reusable class

1. While editing the dialog box, drag a control of the same type as the base class of your new control from the Controls toolbar onto the dialog box.

1. Place the mouse pointer over the dropped control.

1. While pressing the CTRL key, double-click the control.

   The [Add Member Variable](../../ide/adding-a-member-variable-visual-cpp.md#add-member-variable-wizard) dialog box appears.

1. In the **Access** box, select the correct access for your control.

1. Click the **Control variable** check box.

1. In the **Variable name** box, type a name.

1. Under **Category**, click **Control**.

1. In the **Control ID** list, pick the control that you added. The **Variable type** list should display the correct variable type, and the **Control type** box should display the correct control type.

1. In the **Comment** box, add any comment you want to appear in your code.

1. Click **OK**.

## See also

[Mapping Messages to Functions](../../mfc/reference/mapping-messages-to-functions.md)<br/>
[Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Adding a Class](../../ide/adding-a-class-visual-cpp.md)<br/>
[Adding a Member Function](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Adding a Member Variable](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Overriding a Virtual Function](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[MFC Message Handler](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Navigating the Class Structure](../../ide/navigate-code-cpp.md)
