---
title: "Saving and Loading Different Color Palettes (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.image.color"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""color palettes [C++]"", ""palettes"", ""palettes, Image editor"", ""colors [C++], Image editor"", ""Image editor [C++], palettes""]"]
ms.assetid: 694b6346-e606-4f19-aa01-9b4ceb47f423
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Saving and Loading Different Color Palettes (Image Editor for Icons)

You can save and load a **Colors** palette that contains [customized colors](../windows/customizing-or-changing-colors-image-editor-for-icons.md). (By default, the **Colors** palette most recently used is automatically loaded when you start Visual Studio.)

> [!TIP]
> Since the **Image** editor has no means to restore the default **Colors** palette, you should save the default **Colors** palette under a name such as *standard.pal* or *default.pal* so that you can easily restore the default settings.

### To save a custom colors palette

1. From the **Image** menu, choose **Save Palette**.

2. Navigate to the directory where you want to save the palette, and type a name for the palette.

3. Click **Save**.

### To load a custom colors palette

1. From the **Image** menu, choose **Load Palette**.

2. In the [Load Color Palette dialog box](../windows/load-palette-colors-dialog-box-image-editor-for-icons.md), navigate to the correct directory and select the palette you want to load. **Color** palettes are saved with a .pal file extension.

## Requirements

None

## See Also

[Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)  
[Working with Color](../windows/working-with-color-image-editor-for-icons.md)