---
title: "Defining Member Variables for Dialog Controls (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["member variables, defining for controls", "variables, dialog box control member variables", "controls [C++], member variables", "Dialog Editor [C++], defining member variables for controls"]
ms.assetid: 84347c63-c33c-4b04-91f5-6d008c45ba58
---
# Defining Member Variables for Dialog Controls (C++)

To define a member variable for any dialog box control except buttons, you can use the following method.

> [!NOTE]
> This article applies only to dialog controls within an MFC project. ATL projects should use the **New Windows Messages and Event Handlers** dialog box.

### To define a member variable for a (non-button) dialog box control

1. In the [Dialog editor](../windows/dialog-editor.md), select a control.

2. While pressing the **Ctrl** key, double-click the dialog box control.

   The [Add Member Variable wizard](../ide/add-member-variable-wizard.md) appears.

3. Type the appropriate information in the **Add Member Variable** wizard. For more information, see [Dialog Data Exchange](../mfc/dialog-data-exchange.md).

4. Click **OK** to return to the **Dialog** editor.

   > [!TIP]
   > To jump from any dialog box control to its existing handler, double-click the control.

You can also use the **Member Variables** tab in **MFC Class Wizard** to add new member variables for a specified class, and view those that have already been defined.

## Requirements

MFC

## See Also

[Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)<br/>
[Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[MFC Class Wizard](../mfc/reference/mfc-class-wizard.md)<br/>
[Adding a Class](../ide/adding-a-class-visual-cpp.md)<br/>
[Adding a Member Function](../ide/adding-a-member-function-visual-cpp.md)<br/>
[Adding a Member Variable](../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Overriding a Virtual Function](../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[MFC Message Handler](../mfc/reference/adding-an-mfc-message-handler.md)