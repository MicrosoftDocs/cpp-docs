---
title: "Using a Drawing Tool (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.image.drawing"]
dev_langs: ["C++"]
helpviewer_keywords: ["Image editor [C++], selecting drawing tools", "Image editor [C++], toolbar", "drawing tools"]
ms.assetid: 1f8c6eef-7760-45a9-a5cb-9e15c6f91245
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Using a Drawing Tool (Image Editor for Icons)

The **Image** editor's freehand drawing and erasing tools all work in the same way: you select the tool and, if necessary, [select foreground and background colors](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md) and size and shape options. You then move the pointer to the image and click or drag to draw and erase.

When you select the **Eraser** tool, **Brush** tool, or **Airbrush** tool, the option selector displays that tool's options.

> [!TIP]
> Instead of using the **Eraser** tool, you may find it more convenient to draw in the background color with one of the drawing tools.

You can select drawing tools from either the **Image Editor** toolbar or the **Image** menu.

### To select and use a drawing tool from the Image Editor toolbar

1. Click a button on the **Image Editor** toolbar.

   - The **Eraser** tool paints over the image with the current background color when you press the left mouse button.

   - The **Pencil** tool draws freehand in a constant width of one pixel.

   - The **option selector determines the Brush tool's shape and size**.

   - The **Airbrush** tool randomly distributes color pixels around the center of the brush.

        > [!TIP]
        >  Tool tips appear when you hover your cursor over the buttons on the [Image Editor toolbar](../windows/toolbar-image-editor-for-icons.md). These tips will help you identify the specific buttons mentioned here.

2. If necessary, select colors and a brush:

   - In the [Colors palette](../windows/colors-window-image-editor-for-icons.md), click the left mouse button to select a foreground color or the right mouse button to select a background color.

   - In the [Options Selector](../windows/toolbar-image-editor-for-icons.md), click a shape representing the brush you want to use.

3. Point to the place on the image where you want to start drawing or painting. The pointer changes shape according to the tool you selected.

4. Press the left mouse button (for the foreground color) or the right mouse button (for the background color), and hold it down as you draw.

### To select and use a drawing tool from the Image menu

1. Click the **Image** menu and select the **Tools** command.

2. On the cascading submenu, choose the tool you wish to use.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

None

## See Also

[Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)  
[Editing Graphical Resources](../windows/editing-graphical-resources-image-editor-for-icons.md)  
[Image Editor for Icons](../windows/image-editor-for-icons.md)  
[Working with Color](../windows/working-with-color-image-editor-for-icons.md)