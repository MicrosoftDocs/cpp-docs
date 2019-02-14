---
title: "Defining Control Access and Values"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.dialog.combo"]
helpviewer_keywords: ["access keys [C++], adding", "keyboard shortcuts [C++], controls", "dialog box controls [C++], mnemonics", "access keys [C++], checking", "mnemonics [C++], checking for duplicate", "mnemonics", "mnemonics [C++], dialog box controls", "keyboard shortcuts [C++], uniqueness checking", "Check Mnemonics command", "controls [C++], access keys", "access keys [C++]", "combo boxes [C++], Data property", "controls [C++], testing values in combo boxes", "combo boxes [C++], adding values", "combo boxes [C++], previewing values", "Data property", "combo boxes [C++], testing values"]
ms.assetid: 60a85435-aa30-4c5c-98b6-42fb045b9eb2
---
# Defining Control Access and Values

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Change the tab order of controls

The tab order is the order in which the **Tab** key moves the input focus from one control to the next within a dialog box. Usually the tab order proceeds from left to right and from top to bottom in a dialog box. Each control has a **Tabstop** property that determines whether a control receives input focus.

### To set input focus for a control

In the [Properties Window](/visualstudio/ide/reference/properties-window), select **True** or **False** in the **Tabstop** property.

Even controls that don't have the **Tabstop** property set to **True** need to be part of the tab order. Tab order is important, for example, when you [define access keys (mnemonics)](../windows/defining-mnemonics-access-keys.md) for controls that don't have captions. Static text that contains an access key for a related control must immediately precede the related control in the tab order.

> [!NOTE]
> If your dialog box contains overlapping controls, changing the tab order may change the way the controls are displayed. Controls that come later in the tab order are always displayed on top of any overlapping controls that precede them in the tab order.

### To view the current tab order for all controls in a dialog box

On the **Format** menu, select **Tab Order**.

\- or -

- Press **Ctrl** + **D**.

### To change the tab order for all controls in a dialog box

1. On the **Format** menu, select **Tab Order**.

   A number in the upper-left corner of each control shows its place in the current tab order.

1. Set the tab order by clicking each control in the order you want the **Tab** key to follow.

1. Press **Enter** to exit **Tab Order** mode.

   > [!TIP]
   > Once you enter **Tab Order** mode, you can press **Esc** or **Enter** to disable the ability to change the tab order.

### To change the tab order for two or more controls

1. From the **Format** menu, choose **Tab Order**.

1. Specify where the change in order will begin. First hold down the **Ctrl** key and select the control, then select the one where you want the changed order to begin.

   For example, if you want to change the order of controls `7` through `9`, hold down **Ctrl**, then select control `6` first.

   > [!NOTE]
   > To set a specific control to number `1` (first in the tab order), double-click the control.

1. Release the **Ctrl** key, then select the controls in the order you want the **Tab** key to follow from that point.

1. Press **Enter** to exit **Tab Order** mode.

## Define Mnemonics (Access Keys)

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

## Add values to a combo box control

You can add values to a combo box control as long as you have the **Dialog** editor open.

> [!TIP]
> It's a good idea to add all values to the combo box *before* you size the box in the **Dialog** editor, or you may truncate text that should appear in the combo control.

### To enter values into a combo box control

1. Select the combo box control by clicking on it.

1. In the [Properties Window](/visualstudio/ide/reference/properties-window), scroll down to the **Data** property.

   > [!NOTE]
   > If you're displaying properties grouped by type, **Data** appears in the **Misc** properties.

1. Select the value area for the **Data** property and type in your data values, separated by semicolons.

   > [!NOTE]
   > Do not put spaces between values because spaces interfere with alphabetizing in the drop-down list.

1. Press **Enter** when you are finished adding values.

For information on enlarging the drop-down portion of a combo box, see [Setting the Size of the Combo Box and Its Drop-Down List](setting-the-size-of-the-combo-box-and-its-drop-down-list.md).

> [!NOTE]
> You cannot add values to Win32 projects using this procedure (the **Data** property is grayed out for Win32 projects). Because Win32 projects do not have libraries that add this capability, you must add values to a combo box with a Win32 project programmatically.

### To test the appearance of values in a combo box

After entering values in the **Data** property, select the **Test** button on the [Dialog Editor Toolbar](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

   Try scrolling down the entire value list. Values appear exactly as they are typed in the **Data** property in the **Properties** window. There is no spelling or capitalization checking.

   Press **Esc** to return to the **Dialog box** editor.

## Requirements

Win32

## See also

[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)<br/>
[Controls](../mfc/controls-mfc.md)