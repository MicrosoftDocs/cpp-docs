---
title: "Using the 256-Color Palette (Image Editor for Icons)"
ms.date: "11/04/2016"
helpviewer_keywords: ["256-color palette", "cursors [C++], color", "colors [C++], icons", "colors [C++], cursors", "icons, color", "colors [C++], icons and cursors", "color palettes, 256-color", "palettes, 256-color"]
ms.assetid: 2738089b-4fd3-4c45-96ae-6a15e4c6b780
---
# Using the 256-Color Palette (Image Editor for Icons)

Using the **Image** editor, icons and cursors can be sized large (64 × 64) with a 256-color palette to choose from. After creating the resource, a device image style is selected.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## To create a 256-color icon or cursor

1. In [Resource View](../windows/resource-view-window.md), right-click your .rc file, then choose **Insert Resource** from the shortcut menu. (If you already have an existing image resource in your .rc file, such as a cursor, you can right-click the **Cursor** folder and select **Insert Cursor** from the shortcut menu.)

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. In the [Insert Resource dialog box](../windows/add-resource-dialog-box.md), select **Icon** or **Cursor** and choose **New**.

1. On the **Image** menu, select **New Device Image**.

1. Select the 256-color image style you want.

## To choose a color from the 256-color palette for large icons

To draw with a selection from the 256-color palette, you need to select the colors from the **Colors** palette in the [Colors window](../windows/colors-window-image-editor-for-icons.md).

1. Select the large icon or cursor, or create a new large icon or cursor.

1. Choose a color from the 256 colors displayed in the **Colors** palette in the **Colors** window.

   The color selected will become the current color in the **Colors** palette in the **Colors** window.

   > [!NOTE]
   > The initial palette used for 256-color images matches the palette returned by the `CreateHalftonePalette` Windows API. All icons intended for the Windows shell should use this palette to prevent flicker during palette realization.

## Requirements

None

## See also

- [Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)
- [Icons and Cursors: Image Resources for Display Devices](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)
