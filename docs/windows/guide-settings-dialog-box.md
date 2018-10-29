---
title: "Guide Settings Dialog Box (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["DLUs (dialog units)", "Dialog Editor [C++], snap to guides", "grid spacing", "guides, settings", "dialog units (DLUs)", "layout grid in Dialog Editor", "snap to guides (Dialog editor)", "controls [C++], snap to guides/grid", "Guide Settings dialog box (Dialog editor)"]
ms.assetid: 55381e1c-146a-4fa7-b1b3-b1492817615f
---
# Guide Settings Dialog Box (C++)

## Layout guides

Displays the settings for the layout guides.

### None

Hides layout tools.

### Rulers and guides

When enabled, adds rulers to the layout tools; guides can be placed in the rulers. The default guides are the margins, which can be moved by dragging. Click in the rulers to place a guide. Controls "snap" to guides when the controls are moved over or next to them. Controls also move with a guide once they are attached to it. When a control is attached to a guide on each side, and a guide is moved, the control is resized.

### Grid

Creates a layout grid. New controls will automatically align to the grid.

## Grid spacing

Displays the settings for the grid spacing in dialog box units (DLUs).

### Width: DLUs

Sets the width of the layout grid in DLUs. A horizontal DLU is the average width of the dialog box font divided by four.

### Height: DLUs

Sets the height of the layout grid in DLUs. A vertical DLU is the average height of the dialog box font divided by eight.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Modifying the Layout Grid](../windows/modifying-the-layout-grid.md)<br/>
[Dialog Editor States (Guides and Grids)](../windows/dialog-editor-states-guides-and-grids.md)