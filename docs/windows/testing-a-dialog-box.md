---
title: "Designing a Dialog Box (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["Test Dialog command", "testing, dialog boxes", "dialog boxes [C++], testing", "dialog boxes [C++], size", "dialog boxes [C++], positioning"]
ms.assetid: 45034ee9-c554-4f4b-8c46-6ddefdee8951
---
# Designing a Dialog Box (C++)

The location and size of a C++ dialog box, and the location and size of controls within it, are measured in dialog units. The values for individual controls and the dialog box appear in the lower right of the Visual Studio status bar when you select them.

When you're designing a dialog box, you can also simulate and test its run-time behavior without compiling your program. In this mode, you can:

- Type text, select from combo-box lists, turn options on or off, and choose commands.

- Test the tab order.

- Test the grouping of controls such as radio buttons and check boxes.

- Test the keyboard shortcuts for controls in the dialog box.

   > [!NOTE]
   > Connections to dialog box code made by using wizards are not included in the simulation.

When you test a dialog box, it typically displays at a location that's relative to the main program window. If you've set the dialog box's **Absolute Align** property to **True**, the dialog box displays at a position that's relative to the upper-left corner of the screen.

For information about how to add resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index).

## To specify the location and size of a dialog box

There are three properties that you can set in the [Properties Window](/visualstudio/ide/reference/properties-window) to specify where a dialog box will appear onscreen. The **Center** property is Boolean; if you set the value to **True**, the dialog box will always appear in the center of the screen. If you set it to **False**, you can then set the **XPos** and **YPos** properties to explicitly define where onscreen the dialog box will appear. The position properties are offset values from the upper left-hand corner of the viewing area, which is defined as `{X=0, Y=0}`. The position is also based on the **Absolute Align** property: if **True**, the coordinates are relative to the screen; if **False**, the coordinates are relative to the dialog owner's window.

## To test a dialog box

1. When the **Dialog** editor is the active window, on the menu bar, choose **Format** > **Test Dialog**.

1. To end the simulation, press **Esc**, or just choose the **Close** button in the dialog box you're testing.

## Requirements

Win32

## See Also

[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)<br/>
[Dialog Editor](../windows/dialog-editor.md)<br/>
[Showing or Hiding the Dialog Editor Toolbar](../windows/showing-or-hiding-the-dialog-editor-toolbar.md)