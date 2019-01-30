---
title: "Selecting Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["Dialog Editor [C++], selecting controls", "dominant controls", "dialog box controls [C++], selecting in editor", "controls [C++], selecting", "size, controls", "controls [C++], dominant", "controls [C++], removing from groups", "Dialog Editor [C++], dominant control"]
ms.assetid: 27f05450-4550-4229-9f4c-2c9e06365596
ms.author: Michael.Blome
ms.topic: tutorial
ms.service: cpp
author: mikeblome
---
# Selecting Controls

Select controls to size, align, move, copy, or delete them, and then complete the operation you want. In most cases, you need to select more than one control to use the sizing and alignment tools on the [Dialog Editor toolbar](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

When a control is selected, it has a shaded border around it with solid (active) or hollow (inactive) "sizing handles," small squares that appear in the selection border. When multiple controls are selected, the dominant control has solid sizing handles and all the other selected controls have hollow sizing handles.

When you're sizing or aligning multiple controls, the **Dialog** editor uses the "dominant control" to determine how the other controls are sized or aligned. By default, the dominant control is the first control selected.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## To select multiple controls

1. In the [Toolbox Window](/visualstudio/ide/reference/toolbox), select the **Pointer** tool.

1. Drag the pointer to draw a selection box around the controls you want to select in your dialog box.

   When you release the mouse button, all controls inside and intersecting the selection box are selected.

   \- or -

   Hold down the **Shift** key and select the controls you'd like to include in the selection.

   \- or -

   Hold down the **Ctrl** key and select the controls you'd like to include in the selection.

## To remove a control from a group of selected controls or to add a control to a group of selected controls

1. With a group of controls selected, hold down the **Shift** key and select the control you want to remove from or add to the existing selection.

   > [!NOTE]
   > Holding down the **Ctrl** key and selecting a control within a selection will make that control the dominant control in that selection.

## To specify the dominant control

1. Hold down the **Ctrl** key and click the control you want to use to influence the size or location of other controls *first*.

> [!NOTE]
> The sizing handles of the dominant control are solid while the handles of subordinate controls are hollow. All further resizing or alignment is based on the dominant control.

## To change the dominant control

1. Clear the current selection by clicking outside all the currently selected controls.

1. Repeat the previous procedure, selecting a different control first.

## Requirements

Win32

## See Also

[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)<br/>
[Controls](../mfc/controls-mfc.md)