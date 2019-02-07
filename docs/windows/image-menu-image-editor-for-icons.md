---
title: "Image Menu (C++ Image Editor for Icons)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.bitmap", "vc.editors.dialog.GridSettings", "vc.editors.gridsettings"]
helpviewer_keywords: ["Image menu", "Grid Settings dialog box [C++]"]
ms.assetid: ac2b4d53-1919-4fd1-a0af-d3c085c45af2
---
# Image Menu (C++ Image Editor for Icons)

The **Image** menu, which appears only when the **Image** editor is active, has commands for editing images, managing color palettes, and setting **Image Editor** window options. Also, commands for using device images are available when working with icons and cursors.

|Command|Description|
|---|---|
|**Invert Colors**|Inverts your colors. For more information, see [Inverting the Colors in a Selection](../windows/inverting-the-colors-in-a-selection-image-editor-for-icons.md).|
|**Flip Horizontal**|Flips the image or selection horizontally. For more information, see [Flipping an Image](../windows/flipping-an-image-image-editor-for-icons.md).|
|**Flip Vertical**|Flips the image or selection vertically. For more information, see [Flipping an Image](../windows/flipping-an-image-image-editor-for-icons.md).|
|**Rotate 90 Degrees**|Rotates the image or selection 90 degrees. For more information, see [Flipping an Image](../windows/flipping-an-image-image-editor-for-icons.md).|
|**Show Colors Window**|Opens the [Colors window](../windows/colors-window-image-editor-for-icons.md), in which you can choose the colors to use for your image. For more information, see [Working with Color](../windows/working-with-color-image-editor-for-icons.md).|
|**Use Selection as Brush**|Enables you to create a custom brush from a portion of an image. Your selection becomes a custom brush that distributes the colors in the selection across the image. Copies of the selection are left along the dragging path. The more slowly you drag, the more copies are made. For more information, see [Creating a Custom Brush](../windows/creating-a-custom-brush-image-editor-for-icons.md).|
|**Copy and Outline Selection**|Creates a copy of the current selection and outlines it. If the background color is contained in the current selection, it will be excluded if you've [transparent](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md) selected.
|**Adjust Colors**|Opens the [Custom Color Selector](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md), which allows you to customize the colors you use for your image. For more information, see [Customizing or Changing Colors](../windows/customizing-or-changing-colors-image-editor-for-icons.md).|
|**Load Palette**|Opens the [Load Color Palette dialog box](../windows/load-palette-colors-dialog-box-image-editor-for-icons.md), which enables you to load palette colors previously saved to a .pal file.|
|**Save Palette**|Saves the palette colors to a .pal file.|
|**Draw Opaque**|When selected, makes the current selection opaque. When cleared, makes the current selection transparent. For more information, see [Choosing an Opaque or Transparent Background](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).|
|**Toolbar Editor**|Opens the [New Toolbar Resource dialog box](../windows/new-toolbar-resource-dialog-box.md).|
|**Grid Settings**|Opens the **Grid Settings** dialog box in which you can specify grids for your image.|
|**New Image Type**|Opens the [New \<Device> Image Type dialog box](../windows/new-device-image-type-dialog-box-image-editor-for-icons.md). A single icon resource can contain several images of different sizes and windows can use the appropriate icon size depending on how it's going to be displayed. A new device type doesn't modify the size of the icon, but rather creates a new image within the icon. Only applies to icons and cursors.|
|**Current Icon/Cursor Image Type**|Opens a submenu that lists the first available cursor or icon images (the first nine). The last command on the submenu, **More...**, opens the [Open \<Device> Image dialog box](../windows/open-device-image-dialog-box-image-editor-for-icons.md).|
|**Delete Image Type**|Deletes the selected device image.|
|**Tools**|Launches a submenu that contains all the tools available from the [Image Editor toolbar](../windows/toolbar-image-editor-for-icons.md).|

The **Grid Settings** dialog box allows you to specify the grid settings for your image and displays grid lines over the edited image. The lines are useful for editing the image, but aren't saved as part of the image itself.

|Property|Description|
|---|---|
|**Pixel grid**|When checked, displays a grid around each pixel in the Image editor. The grid appears only at 4× and higher resolutions.|
|**Tile grid**|When selected, displays a grid around blocks of pixels in the Image editor, specified by the grid spacing values.|
|**Width**|Specifies the width of each tile block. This property is useful when drawing bitmaps containing multiple images that are arranged at regular intervals.|
|**Height**|Specifies the height of each tile block. This property is useful when drawing bitmaps containing multiple images that are arranged at regular intervals.|

## Requirements

None

## See also

[Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Resizing an Image](../windows/resizing-an-image-image-editor-for-icons.md)<br/>
[Image Editor for Icons](../windows/image-editor-for-icons.md)