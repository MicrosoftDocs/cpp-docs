---
description: "Learn more about: Add an event handler"
title: "Add an event handler"
ms.date: "11/12/2018"
f1_keywords: ["vc.codewiz.eventhandler.overview"]
helpviewer_keywords: ["event handlers, adding", "properties [Visual Studio], MSBuild", "MSBuild, properties", "event handler wizard [C++]"]
ms.assetid: 050bebf0-a9e0-474b-905c-796fe5ac8fc3
---
# Add an event handler

From the resource editor, you can add a new event handler, or edit an existing event handler, for a dialog box control using the [event handler wizard](#event-handler-wizard).

You can add an event to the class implementing the dialog box using the [Properties window](/visualstudio/ide/reference/properties-window). To add the event to a class other than the dialog box class, use the event handler wizard.

**To add an event handler to a dialog box control:**

1. Double-click the dialog box resource in [Resource View](../windows/how-to-create-a-resource-script-file.md#create-resources) to open the dialog box resource that contains the control in the [dialog editor](../windows/dialog-editor.md).

1. Right-click the control for which you want to handle the notification event.

1. On the shortcut menu, choose **Add Event Handler** to display the Event Handler Wizard.

1. Select the event in the **Message type** box to add to the class selected in the **Class list** box.

1. Accept the default name in the **Function handler name** box, or provide the name of your choice.

1. Select **Add and edit** to add the event handler to the project and open the text editor at the new function to add the appropriate event handler code.

   If the selected message type already has an event handler for the selected class, **Add and edit** is unavailable, and **Edit code** is available. Select **Edit code** to open the text editor at the existing function.

Alternately, you can add event handlers from the [Properties window](/visualstudio/ide/reference/properties-window). For more information, see [Adding event handlers for dialog box controls](../windows/adding-editing-or-deleting-controls.md).

## In this section

- [Event handler wizard](#event-handler-wizard)

## Event handler wizard

This wizard adds an event handler for a dialog box control to the class of your choice. If you add an event handler from the [Properties window](/visualstudio/ide/reference/properties-window), you can add it only to the class that implements the dialog box. For more information, see [Adding event handlers for dialog box controls](../windows/adding-editing-or-deleting-controls.md).

- **Command name**

  Identifies the selected control, for which the event handler is added. This box is unavailable.

- **Message type**

  Displays the list of current possible message handlers for the selected control.

- **Function handler name**

  Displays the name of the function that's added to handle the event. The name by default is based on the message type and the command, prepended by `On`. For example, for the button called `IDC_BUTTON1`, the message type `BN_CLICKED` displays the function handler name `OnBnClickedButton1`.

- **Class list**

  Displays available classes to which you can add an event handler. The class for the selected dialog box is displayed in red.

- **Handler description**

  Provides a description for the item selected in the **Message type** box. This box is unavailable.

- **Add and edit**

  Adds the message handler to the selected class or object. It also opens the text editor to the new function so you can add the handler code for the control notification.

- **Edit code**

  Opens the text editor to the selected existing function so you can add or edit the control notification handler code.
