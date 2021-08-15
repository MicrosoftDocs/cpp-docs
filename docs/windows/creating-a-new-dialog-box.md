---
description: "Learn more about: How to: Create a Dialog Box (C++)"
title: "How To: Create a Dialog Box (C++)"
ms.date: "02/15/2019"
helpviewer_keywords: ["dialog boxes [C++], creating", "Dialog Editor [C++], creating dialog boxes", "modal dialog boxes [C++], logon screens", "logon screens", "Test Dialog command", "testing, dialog boxes", "dialog boxes [C++], testing", "dialog boxes [C++], size", "dialog boxes [C++], positioning"]
ms.assetid: 303de801-c4f8-42e1-b622-353f6423f688
---
# How to: Create a Dialog Box (C++)

The location and size of a C++ dialog box, and the location and size of controls within it, are measured in dialog units. The values for individual controls and the dialog box appear in the lower right of the Visual Studio status bar when you select them.

> [!NOTE]
> If your project doesn't already contain an .rc file, see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

## How To

The **Dialog Editor** enables you:

### To create a new dialog box

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources), right-click your *.rc* file and select **Add Resource**.

1. In the **Add Resource** dialog box, select **Dialog** in the **Resource Type** list, then choose **New**.

   If a plus sign (**+**) appears next to the **Dialog** resource type, it means that dialog box templates are available. Select the plus sign to expand the list of templates, select a template, and choose **New**.

   The new dialog box opens in the **Dialog Editor**.

You can also open existing dialog boxes in the Dialog Box editor for editing.

### To create a dialog box that a user can't exit

You can create a runtime dialog box that a user can't exit. This kind of dialog box is useful for logons, and for application or document locks.

1. In the **Properties** pane for the dialog box, set the **System Menu** property to **`false`**.

   This setting disables the dialog box system menu and **Close** button.

1. In the dialog box form, delete the **Cancel** and **OK** buttons.

   At run time, a user can't exit a modal dialog box that has these characteristics.

To enable testing of this kind of dialog box, the test dialog box function detects when **Esc** is pressed. **Esc** is also known as the VK_ESCAPE virtual key. No matter how the dialog box is designed to behave at run time, you can end test mode by pressing **Esc**.

> [!NOTE]
> For MFC applications, to create a dialog box that users cannot exit, you must override the default behavior of `OnOK` and `OnCancel` because even if you delete the associated buttons, the dialog box can still be dismissed by pressing **Enter** or **Esc**.

### To specify the location and size of a dialog box

There are properties you can set in the [Properties Window](/visualstudio/ide/reference/properties-window) to specify where a dialog box will appear onscreen.

- The Boolean **Center** property.

   If you set the value to **True**, the dialog box will always appear in the center of the screen. If you set this property to **False**, you can then set the **XPos** and **YPos** properties.

- The **XPos** and **YPos** properties that are used to explicitly define where onscreen the dialog box will appear.

   These position properties are offset values from the upper left-hand corner of the viewing area, which is defined as `{X=0, Y=0}`.

- The **Absolute Align** property that affects position.

   If **True**, the coordinates are relative to the screen. If **False**, the coordinates are relative to the dialog owner's window.

### To test a dialog box

When you're designing a dialog box, you can simulate and test its run-time behavior without compiling your program. In this mode, you can:

- Type text, select from combo-box lists, turn options on or off, and choose commands.

- Test the tab order.

- Test the grouping of controls such as radio buttons and check boxes.

- Test the keyboard shortcuts for controls in the dialog box.

> [!NOTE]
> Connections to dialog box code made by using wizards aren't included in the simulation.

When you test a dialog box, it typically displays at a location that's relative to the main program window. If you've set the dialog box **Absolute Align** property to **True**, the dialog box displays at a position that's relative to the upper-left corner of the screen.

1. When the **Dialog Editor** is the active window, go to menu **Format** > **Test Dialog**.

1. To end the simulation, press **Esc** or select the **Close** button in the dialog box you're testing.

## Requirements

Win32

## See also

[Dialog Editor](../windows/dialog-editor.md)<br/>
[How to: Manage Dialog Box Controls](../windows/controls-in-dialog-boxes.md)<br/>
