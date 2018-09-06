---
title: "Customizing or Changing Colors (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["[""dithered color, Image editor"", ""Custom Color Selector dialog box [C++]"", ""Image editor [C++], Colors Palette"", ""colors [C++], image"", ""bitmaps [C++], colors"", ""images [C++], colors"", ""HSL values"", ""luminosity"", ""Colors Palette, Image editor"", ""RGB color values"", ""Adjust Colors command"", ""Image editor [C++], dithered color""]"]
ms.assetid: e58f6b32-f435-4d9a-a570-7569433661ae
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Customizing or Changing Colors (Image Editor for Icons)

The **Image** editor's [Colors palette](../windows/colors-window-image-editor-for-icons.md) initially displays 16 standard colors. In addition to the displayed colors, you can create your own custom colors. You can then [save and load a customized Color palette](../windows/saving-and-loading-different-color-palettes-image-editor-for-icons.md).

### To change colors on the colors palette

1. From the **Image** menu, choose **Adjust Colors**.

2. In the [Custom Color Selector dialog box](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md), define the color by typing RGB or HSL values in the appropriate text boxes or choose a color in the **Gradient Color Display** box.

3. Set the luminosity by moving the slider on the **Luminosity** bar.

4. Many custom colors are dithered. If you want the solid color closest to the dithered color, double-click the **Color** box.

   If you later decide you want the dithered color, move the slider on the **Luminosity** bar or move the cross hairs in the **Gradient Color Display** box again to restore the dithering.

5. Click **OK** to add the new color.

## Requirements

None

## See Also

[Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)  
[Working with Color](../windows/working-with-color-image-editor-for-icons.md)