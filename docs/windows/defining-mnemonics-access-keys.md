---
title: "Defining Mnemonics (Access Keys)"
ms.date: "11/04/2016"
helpviewer_keywords: ["access keys [C++], adding", "keyboard shortcuts [C++], controls", "dialog box controls [C++], mnemonics", "access keys [C++], checking", "mnemonics [C++], checking for duplicate", "mnemonics", "mnemonics [C++], dialog box controls", "keyboard shortcuts [C++], uniqueness checking", "Check Mnemonics command", "controls [C++], access keys", "access keys [C++]"]
ms.assetid: 60a85435-aa30-4c5c-98b6-42fb045b9eb2
---
# Defining Mnemonics (Access Keys)

Normally, keyboard users move the input focus from one control to another in a dialog box with the **Tab** and **Arrow** keys. However, you can define an access key (a mnemonic or easy-to-remember name) that allows users to choose a control by pressing a single key.

### To define an access key for a control with a visible caption (push buttons, check boxes, and radio buttons)

1. Select the control on the dialog box.

2. In the [Properties Window](/visualstudio/ide/reference/properties-window), in the **Caption** property, type a new name for the control, typing an ampersand (`&`) in front of the letter you want as the access key for that control. For example, `&Radio1`.

3. Press **Enter**.

   An underline appears in the displayed caption to indicate the access key, for example, **R**adio1.

### To define an access key for a control without a visible caption

1. Make a caption for the control by using a **Static Text** control in the [Toolbox](/visualstudio/ide/reference/toolbox).

2. In the static text caption, type an ampersand (`&`) in front of the letter you want as the access key.

3. Make sure the static text control immediately precedes the control it labels in the tab order.

All the access keys within a dialog box should be unique.

### To check for duplicate access keys

1. On the **Format** menu, click **Check Mnemonics**.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See also

- [Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)
- [Controls](../mfc/controls-mfc.md)
