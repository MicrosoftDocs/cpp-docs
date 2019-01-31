---
title: "Align Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["controls [C++], aligning", "controls [C++], positioning", "Space Evenly command", "dialog box controls [C++], placement", "Center in Dialog command", "Arrange Buttons command", "buttons, arranging push buttons in dialog boxes", "push buttons"]
ms.assetid: a4f49a73-4a17-44b3-8568-aa35f646b5cf
---
# Align Controls

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

The following procedures show you how to align controls:

## To align groups of controls

1. [Select the controls](../windows/selecting-multiple-controls.md) you want to align. Be sure to select the control that you want to be the dominant control first or set it to be the dominant control before executing the alignment or sizing command.

   The final position of the group of controls depends on the position of the dominant control. For more information on selecting the dominant control, see [Specifying the Dominant Control](../windows/specifying-the-dominant-control.md).

1. From the **Format** menu, choose **Align**, and then choose one of the following alignments:

   - `Lefts`: aligns the selected controls along their left sides.

   - `Centers`: aligns the selected controls horizontally along their center points.

   - `Rights`: aligns the selected controls along their right sides.

   - `Tops`: aligns the selected controls along their top edges.

   - `Middles`: aligns the selected controls vertically along their middle points.

   - `Bottoms`: aligns the selected controls along their bottom edges.

## To even the spacing between controls

The **Dialog** editor enables you to space controls evenly between the outermost controls selected.

1. Select the controls you want to rearrange.

1. From the **Format** menu, choose **Space Evenly**, and then choose one of the following spacing alignments:

   - `Across`: space controls evenly between the leftmost and the rightmost control selected.

   - `Down`: space controls evenly between the topmost and the bottommost control selected.

## To center controls in a dialog box

1. Select the control or controls you want to rearrange.

1. From the **Format** menu, choose **Center In Dialog**, and then choose one of the following arrangements:

   - `Vertical`: center controls vertically in the dialog box.

   - `Horizontal`: center controls horizontally in the dialog box.

## To arrange push buttons along the right or bottom of a dialog box

1. Select one or more push buttons.

1. From the **Format** menu, choose **Arrange Buttons**, and then choose one of the following arrangements:

   - `Right`: aligns push buttons along the right edge of the dialog box.

   - `Bottom`: aligns push buttons along the bottom edge of the dialog box.

       If you select a control other than a push button, its position isn't affected.

## Requirements

Win32

## See Also

[Arrangement of Controls on Dialog Boxes](../windows/arrangement-of-controls-on-dialog-boxes.md)<br/>
[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)<br/>
[Controls](../mfc/controls-mfc.md)