---
title: "Testing a C++ Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["Test Dialog command", "testing, dialog boxes", "dialog boxes [C++], testing"]
ms.assetid: 45034ee9-c554-4f4b-8c46-6ddefdee8951
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Testing a C++ Dialog Box

When you're designing a dialog box, you can simulate and test its run-time behavior without compiling your program. In this mode, you can:

- Type text, select from combo-box lists, turn options on or off, and choose commands.

- Test the tab order.

- Test the grouping of controls such as radio buttons and check boxes.

- Test the keyboard shortcuts for controls in the dialog box.

   > [!NOTE]
   > Connections to dialog box code made by using wizards are not included in the simulation.

When you test a dialog box, it typically displays at a location that's relative to the main program window. If you've set the dialog box's **Absolute Align** property to **True**, the dialog box displays at a position that's relative to the upper-left corner of the screen.

### To test a dialog box

1. When the **Dialog** editor is the active window, on the menu bar, choose **Format** > **Test Dialog**.

2. To end the simulation, press **Esc**, or just choose the **Close** button in the dialog box you are testing.

For information about how to add resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index).

## Requirements

Win32

## See Also

[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)  
[Dialog Editor](../windows/dialog-editor.md)  
[Showing or Hiding the Dialog Editor Toolbar](../windows/showing-or-hiding-the-dialog-editor-toolbar.md)