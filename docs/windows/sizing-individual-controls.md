---
title: "Sizing Controls"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.dialog.combo"]
helpviewer_keywords: ["Size to Content command", "size, controls", "text, autosizing controls to fit text", "controls [C++], sizing", "Make Same Size command", "combo boxes, sizing", "list controls [C++], scroll bar width", "CListBox::SetHorizontalExtent", "controls [C++], scroll bar", "scroll bars [C++], displaying in controls", "horizontal scroll bar width", "CListBox class, scroll bar width", "scroll bars [C++], width"]
ms.assetid: 14ccba02-7171-463a-a121-7018cf1e2e5a
---
# Sizing Controls

Use the sizing handles to resize a control. When the pointer is positioned on a sizing handle, it changes shape to indicate the directions in which the control can be resized. Active sizing handles are solid; if a sizing handle is hollow, the control can't be resized along that axis.

You can also change the size of a control by snapping the control to guides or margins, or by moving one snapped control and guide away from another.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## To size an individual control

1. Select the control.

1. Drag the sizing handles to change the size of the control:

   - Sizing handles at the top and sides change the horizontal or vertical size.

   - Sizing handles at the corners change both horizontal and vertical size.

   > [!TIP]
   > You can resize the control one dialog unit (DLU) at a time by holding down the **Shift** key and using the **Right Arrow** and **Down Arrow** keys.

## To automatically size a control to fit the text within it

Choose **Size to Content** from the **Format** menu.

\- or -

Right-click the control and choose **Size to Content** from the shortcut menu.

## To make controls the same width, height, or size

You can resize a group of controls based on the size of the dominant control.

1. [Select the controls](../windows/selecting-multiple-controls.md) you want to resize.

   The control selected first in the series is the dominant control. The final size of the controls in the group depends on the size of the dominant control. For more information on selecting the dominant control, see [Specifying a Dominant Control](../windows/specifying-the-dominant-control.md).

1. From the **Format** menu, choose **Make Same Size**, then choose one of the following commands:

   - **Both**

   - **Height**

   - **Width**

## To set the size of the combo box and its drop-down list

You can size a combo box when you add it to the dialog box. You can also specify the size of the drop-down list box. For more information, see [Adding Values to a Combo Box Control](../windows/adding-values-to-a-combo-box-control.md).

### To size a combo box

1. Select the combo-box control in your dialog box.

   Initially, only the right and left sizing handles are active.

1. Use the sizing handles to set the width of the combo box.

You can also set the vertical size of the drop-down portion of the combo box.

### To set the size of the combo box drop-down list

1. Select the drop-down arrow button at the right of the combo box.

   ![Arrow on a combo box in an MFC project](../mfc/media/vccomboboxarrow.gif "vcComboBoxArrow")

   The outline of the control changes to show the size of the combo box with the drop-down list area extended.

1. Use the lower sizing handle to change the initial size of the drop-down list area.

   ![Combo&#45;box sizing in an MFC project](../mfc/media/vccomboboxsizing.gif "vcComboBoxSizing")

1. Select the drop-down arrow again to close the drop-down list portion of the combo box.

## To set the width of a horizontal scroll bar and make it appear

When you add a list box with a horizontal scroll bar to a dialog box using MFC classes, the scroll bar won't automatically appear in your application.

Set a maximum width for the widest element by calling [CListBox::SetHorizontalExtent](../mfc/reference/clistbox-class.md#sethorizontalextent) in your code.

   Without this value set, the scroll bar won't appear, even when the items in the list box are wider than the box.
> [!NOTE]
> The horizontal scroll bar requires MFC.

## Requirements

Win32

## See also

[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)<br/>
[Controls](../mfc/controls-mfc.md)
