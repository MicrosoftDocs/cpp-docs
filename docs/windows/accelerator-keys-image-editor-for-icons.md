---
title: "Accelerator Keys (C++ Image Editor for Icons)"
ms.date: "02/15/2019"
f1_keywords: ["vc.editors.bitmap", "vc.editors.icon"]
helpviewer_keywords: ["accelerator keys", "Image editor [C++], accelerator keys"]
ms.assetid: add37861-3e17-4a6f-89e8-46df12e74a90
---
# Accelerator Keys (C++ Image Editor for Icons)

Below are the accelerator keys for the Image editor commands that are bound to keys by default. To change accelerator keys, go to menu **Tools** > **Options** and choose **Keyboard** under the **Environment** folder. For more information, see [Identifying and Customizing Keyboard Shortcuts](/visualstudio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio).

> [!NOTE]
> The options available in dialog boxes, and the names and locations of menu commands you see, might differ from what is described in Help depending on your active settings or edition. To change your settings, choose **Import and Export Settings** on the **Tools** menu. For more information, see [Personalize the Visual Studio IDE](/visualstudio/ide/personalizing-the-visual-studio-ide).

|Command|Keys|Description|
|-------------|----------|-----------------|
|Image.AirBrushTool|**Ctrl** + **A**|Draws using an airbrush with the selected size and color.|
|Image.BrushTool|**Ctrl** + **B**|Draws using a brush with the selected shape, size, and color.|
|Image.CopyAndOutlineSelection|**Ctrl** + **Shift** + **U**|Creates a copy of the current selection and outlines it. If the background color is contained in the current selection, it will be excluded if you have [transparent](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md) selected.|
|Image.DrawOpaque|**Ctrl** + **J**|Makes the current selection either [opaque or transparent](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).|
|Image.EllipseTool|**Ctrl** + **P**|Draws an ellipse with the selected line width and color.|
|Image.EraserTool|**Ctrl** + **Shift** + **I**|Erases a portion of the image (with the current background color).|
|Image.FilledEllipseTool|**Ctrl** + **Shift** + **Alt** + **P**|Draws a filled ellipse.|
|Image.FilledRectangleTool|**Ctrl** + **Shift** + **Alt** + **R**|Draws a filled rectangle.|
|Image.FilledRoundRectangleTool|**Ctrl** + **Shift** + **Alt** + **W**|Draws a filled round rectangle.|
|Image.FillTool|**Ctrl** + **F**|Fills an area.|
|Image.FlipHorizontal|**Ctrl** + **H**|Flips the image or selection horizontally.|
|Image.FlipVertical|**Shift**+ **Alt** + **H**|Flips the image or selection vertically.|
|Image.LargerBrush|**Ctrl** + **=**|Increases the brush size by one pixel in each direction. To decrease the brush size, see Image.SmallerBrush in this table.|
|Image.LineTool|**Ctrl** + **L**|Draws a straight line with the selected shape, size, and color.|
|Image.MagnificationTool|**Ctrl** + **M**|Activates the **Magnify** tool, which allows you to magnify specific sections of your image.|
|Image.Magnify|**Ctrl** + **Shift** + **M**|Toggles between the current magnification and 1:1 magnification.|
|Image.NewImageType|**Insert**|Launches the [New \<Device> Image Type dialog box](../windows/new-device-image-type-dialog-box-image-editor-for-icons.md) with which you can create an image for a different image type.|
|Image.NextColor|**Ctrl** + **]**<br /><br /> - or -<br /><br /> **Ctrl** + **Right Arrow**|Changes the drawing foreground color to the next palette color.|
|Image.NextRightColor|**Ctrl** + **Shift** + **]**<br /><br /> - or -<br /><br /> **Shift** + **Ctrl** + **Right Arrow**|Changes the drawing background color to the next palette color.|
|Image.OutlinedEllipseTool|**Shift** + **Alt** + **P**|Draws a filled ellipse with an outline.|
|Image.OutlinedRectangleTool|**Shift** + **Alt** + **R**|Draws a filled rectangle with an outline|
|Image.OutlinedRoundRectangleTool|**Shift** + **Alt** + **W**|Draws a filled round rectangle with an outline.|
|Image.PencilTool|**Ctrl** + **I**|Draws using a single-pixel pencil.|
|Image.PreviousColor|**Ctrl** + **[**<br /><br /> - or -<br /><br /> **Ctrl** + **Left Arrow**|Changes the drawing foreground color to the previous palette color.|
|Image.PreviousRightColor|**Ctrl** + **Shift** + **[**<br /><br /> - or -<br /><br /> **Shift** + **Ctrl** + **Left Arrow**|Changes the drawing background color to the previous palette color.|
|Image.RectangleSelectionTool|**Shift** + **Alt** + **S**|Selects a rectangular portion of the image to move, copy, or edit.|
|Image.RectangleTool|ATL + R|Draws a rectangle with the selected line width and color.|
|Image.Rotate90Degrees|**Ctrl** + **Shift** + **H**|Rotates the image or selection 90 degrees.|
|Image.RoundedRectangleTool|**Alt** + **W**|Draws a round rectangle with the selected line width and color.|
|Image.ShowGrid|**Ctrl** + **Alt** + **S**|Toggles the pixel grid (selects or clears the **Pixel grid** option in the [Grid Settings dialog box](../windows/grid-settings-dialog-box-image-editor-for-icons.md)).|
|Image.ShowTileGrid|**Ctrl** + **Shift** + **Alt** + **S**|Toggles the tile grid (selects or clears the **Tile grid** option in the [Grid Settings dialog box](../windows/grid-settings-dialog-box-image-editor-for-icons.md)).|
|Image.SmallBrush|**Ctrl** + **.** (period)|Reduces the **Brush** size to one pixel. (See also Image.LargerBrush and Image.SmallerBrush in this table.)|
|Image.SmallerBrush|**Ctrl** + **-** (minus)|Reduces the brush size by one pixel in each direction. To expand the brush size again, see Image.LargerBrush in this table.|
|Image.TextTool|**Ctrl** + **T**|Opens the [Text Tool dialog box](../windows/text-tool-dialog-box-image-editor-for-icons.md).|
|Image.UseSelectionAsBrush|**Ctrl** + **U**|Draws using the current selection as a brush.|
|Image.ZoomIn|**Ctrl** + **Shift** + **.** (period)<br /><br /> - or -<br /><br /> **Ctrl** + **Up Arrow**|Increases the magnification for the current view.|
|Image.ZoomOut|**Ctrl** + **,** (comma)<br /><br /> - or -<br /><br /> **Ctrl** + **Down Arrow**|Reduces the magnification of the current view.|

## Requirements

None

## See Also

[Image Editor for Icons](../windows/image-editor-for-icons.md)<br/>
[How to: Create an Icon or Other Image](../windows/creating-an-icon-or-other-image-editor-for-icons.md)<br/>
[How to: Edit an Image](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md)<br/>
[How to: Use a Drawing Tool](../windows/using-a-drawing-tool-image-editor-for-icons.md)<br/>
[How to: Work with Color](../windows/working-with-color-image-editor-for-icons.md)<br/>