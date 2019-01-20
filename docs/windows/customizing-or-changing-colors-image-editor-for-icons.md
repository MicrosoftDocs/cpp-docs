---
title: "Customizing or Changing Colors (Image Editor for Icons)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.customcolorselector"]
helpviewer_keywords: ["dithered color, Image editor", "Custom Color Selector dialog box [C++]", "Image editor [C++], Colors Palette", "colors [C++], image", "bitmaps [C++], colors", "images [C++], colors", "HSL values", "Colors Palette, Image editor", "RGB color values", "Adjust Colors command [C++]", "Image editor [C++], dithered color"]
ms.assetid: e58f6b32-f435-4d9a-a570-7569433661ae
---
# Customizing or Changing Colors (Image Editor for Icons)

The **Image** editor's [Colors palette](../windows/colors-window-image-editor-for-icons.md) initially displays 16 standard colors. With displayed colors, you can also create your own custom colors. You can then [save and load a customized Color palette](../windows/saving-and-loading-different-color-palettes-image-editor-for-icons.md).

The **Custom Color Selector** dialog box allows you to customize the colors you use for your image. The following properties included are:

|Property|Description|
|---|---|
|**Gradient Color Display**|Changes the values of a selected color. Position the crosshair on the color you want to change. Then move the slider up or down to change the luminosity or RGB values of the color.|
|**Luminosity Bar**|Sets the luminosity for the color you select in the **Gradient Color Display** box. Select and drag the white arrow up the bar for greater brightness or down for less. The **Color** box displays the color you've selected and the effect of the luminosity you set.|
|**Color**|Lists the hue (color wheel value) of the color you're defining. Values range from 0 to 240, where 0 is red, 60 is yellow, 120 is green, 180 is cyan, 200 is magenta, and 240 is blue.|
|**Hue**|Lists the hue (color wheel value) of the color you're defining. Values range from 0 to 240, where 0 is red, 60 is yellow, 120 is green, 180 is cyan, 200 is magenta, and 240 is blue.|
|**Sat**|Specifies the saturation value of the color you're defining. Saturation is the amount of color in a specified hue. Values range from 0 to 240.|
|**Lum**|Lists the luminosity (brightness) of the color you're defining. Values range from 0 to 240.|
|**Red**|Specifies the red value of the color you're defining. Values range from 0 to 255.|
|**Green**|Specifies the green value of the color you're defining. Values range from 0 to 255.|
|**Blue**|Specifies the blue value of the color you're defining. Values range from 0 to 255.|

## To change colors on the colors palette

1. From the **Image** menu, choose **Adjust Colors**.

1. In the **Custom Color Selector** dialog box, define the color by typing RGB or HSL values in the appropriate text boxes or choose a color in the **Gradient Color Display** box.

1. Set the luminosity by moving the slider on the **Luminosity** bar.

1. Many custom colors are dithered. If you want the solid color closest to the dithered color, double-click the **Color** box.

   If you later decide you want the dithered color, move the slider on the **Luminosity** bar or move the cross hairs in the **Gradient Color Display** box again to restore the dithering.

1. Select **OK** to add the new color.

## Requirements

None

## See also

- [Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)
- [Working with Color](../windows/working-with-color-image-editor-for-icons.md)
- [Image Menu](../windows/image-menu-image-editor-for-icons.md)
- [Colors Window](../windows/colors-window-image-editor-for-icons.md)
