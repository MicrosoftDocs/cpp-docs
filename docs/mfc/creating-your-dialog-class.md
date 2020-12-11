---
description: "Learn more about: Creating Your Dialog Class"
title: "Creating Your Dialog Class"
ms.date: "09/06/2019"
helpviewer_keywords: ["dialog boxes [MFC], creating", "MFC dialog boxes [MFC], creating", "files [MFC], creating", "dialog classes [MFC], Add Class Wizard", "dialog classes [MFC], creating"]
ms.assetid: d5321741-da41-47a8-bb1c-6a0e8b28c4c1
---
# Creating Your Dialog Class

For each dialog box in your program, create a new dialog class to work with the dialog resource.

[Adding a Class](../ide/adding-a-class-visual-cpp.md) explains how to create a new dialog class. When you create a dialog class with the [Class Wizard](reference/mfc-class-wizard.md), it writes the following items in the .h and .cpp files you specify:

In the .h file:

- A class declaration for the dialog class. The class is derived from [CDialog](reference/cdialog-class.md).

In the .cpp file:

- A message map for the class.

- A standard constructor for the dialog box.

- An override of the [DoDataExchange](reference/cwnd-class.md#dodataexchange) member function. Edit this function. It is used for dialog data exchange and validation capabilities as described later in [Dialog data exchange and validation](dialog-data-exchange-and-validation.md).

## See also

[Creating a Dialog Class with Code Wizards](creating-a-dialog-class-with-code-wizards.md)<br/>
[Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md)
