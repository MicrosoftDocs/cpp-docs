---
title: "Using the 256-Color Palette (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["256-color palette", "colors, icons and cursors", "cursors, color", "color palettes, 256-color", "palettes, 256-color", "icons, color"]
ms.assetid: 1506ed00-669b-4a21-b1a4-39b6a84a78bb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Using the 256-Color Palette (Image Editor for Icons)

To draw with a selection from the 256-color palette, you need to select the colors from the **Colors** palette in the [Colors window](../windows/colors-window-image-editor-for-icons.md).

### To choose a color from the 256-color palette for large icons

1. Select the large icon or cursor, or create a new large icon or cursor.

2. Choose a color from the 256 colors displayed in the **Colors** palette in the **Colors** window.

     The color selected will become the current color in the **Colors** palette in the **Colors** window.

   > [!NOTE]
   > The initial palette used for 256-color images matches the palette returned by the `CreateHalftonePalette` Windows API. All icons intended for the Windows shell should use this palette to prevent flicker during palette realization.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

None

## See Also

[Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)  
[Creating a 256-Color Icon or Cursor](creating-a-256-color-icon-or-cursor-image-editor-for-icons.md)  
[Icons and Cursors: Image Resources for Display Devices](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)