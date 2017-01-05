---
title: "Accelerator Keys (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.bitmap"
  - "vc.editors.icon"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "accelerator keys"
  - "Image editor [C++], accelerator keys"
ms.assetid: add37861-3e17-4a6f-89e8-46df12e74a90
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Accelerator Keys (Image Editor for Icons)
Below are the accelerator keys for the Image editor commands that are bound to keys by default. To change accelerator keys, click **Options** on the **Tools** menu, and then choose **Keyboard** under the **Environment** folder. For more information, see [Identifying and Customizing Keyboard Shortcuts](/visualstudio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio).  
  
> [!NOTE]
>  The options available in dialog boxes, and the names and locations of menu commands you see, might differ from what is described in Help depending on your active settings or edition. To change your settings, choose **Import and Export Settings** on the **Tools** menu. For more information, see [Customizing Development Settings in Visual Studio](http://msdn.microsoft.com/en-us/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
|Command|Keys|Description|  
|-------------|----------|-----------------|  
|Image.AirBrushTool|CTRL + A|Draws using an airbrush with the selected size and color.|  
|Image.BrushTool|CTRL + B|Draws using a brush with the selected shape, size, and color.|  
|Image.CopyAndOutlineSelection|CTRL + SHIFT + U|Creates a copy of the current selection and outlines it. If the background color is contained in the current selection, it will be excluded if you have [transparent](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md) selected.|  
|Image.DrawOpaque|CTRL + J|Makes the current selection either [opaque or transparent](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).|  
|Image.EllipseTool|CTRL + P|Draws an ellipse with the selected line width and color.|  
|Image.EraserTool|CTRL + SHIFT + I|Erases a portion of the image (with the current background color).|  
|Image.FilledEllipseTool|CTRL + SHIFT + ALT + P|Draws a filled ellipse.|  
|Image.FilledRectangleTool|CTRL + SHIFT + ALT + R|Draws a filled rectangle.|  
|Image.FilledRoundRectangleTool|CTRL + SHIFT + ALT + W|Draws a filled round rectangle.|  
|Image.FillTool|CTRL + F|Fills an area.|  
|Image.FlipHorizontal|CTRL + H|Flips the image or selection horizontally.|  
|Image.FlipVertical|SHIFT+ ALT + H|Flips the image or selection vertically.|  
|Image.LargerBrush|CTRL + =|Increases the brush size by one pixel in each direction. To decrease the brush size, see Image.SmallerBrush in this table.|  
|Image.LineTool|CTRL + L|Draws a straight line with the selected shape, size, and color.|  
|Image.MagnificationTool|CTRL + M|Activates the **Magnify** tool, which allows you to magnify specific sections of your image.|  
|Image.Magnify|CTRL + SHIFT + M|Toggles between the current magnification and 1:1 magnification.|  
|Image.NewImageType|INSERT|Launches the [New \<Device> Image Type dialog box](../mfc/new-device-image-type-dialog-box-image-editor-for-icons.md) with which you can create an image for a different image type.|  
|Image.NextColor|CTRL + ]<br /><br /> - or -<br /><br /> CTRL + RIGHT ARROW|Changes the drawing foreground color to the next palette color.|  
|Image.NextRightColor|CTRL + SHIFT + ]<br /><br /> - or -<br /><br /> SHIFT + CTRL + RIGHT ARROW|Changes the drawing background color to the next palette color.|  
|Image.OutlinedEllipseTool|SHIFT + ALT + P|Draws a filled ellipse with an outline.|  
|Image.OutlinedRectangleTool|SHIFT + ATL + R|Draws a filled rectangle with an outline|  
|Image.OutlinedRoundRectangleTool|SHIFT + ALT + W|Draws a filled round rectangle with an outline.|  
|Image.PencilTool|CTRL + I|Draws using a single-pixel pencil.|  
|Image.PreviousColor|CTRL + [<br /><br /> - or -<br /><br /> CTRL + LEFT ARROW|Changes the drawing foreground color to the previous palette color.|  
|Image.PreviousRightColor|CTRL + SHIFT + [<br /><br /> - or -<br /><br /> SHIFT + CTRL + LEFT ARROW|Changes the drawing background color to the previous palette color.|  
|Image.RectangleSelectionTool|SHIFT + ALT + S|Selects a rectangular portion of the image to move, copy, or edit.|  
|Image.RectangleTool|ATL + R|Draws a rectangle with the selected line width and color.|  
|Image.Rotate90Degrees|CTRL + SHIFT + H|Rotates the image or selection 90 degrees.|  
|Image.RoundedRectangleTool|ALT + W|Draws a round rectangle with the selected line width and color.|  
|Image.ShowGrid|CTRL + ALT + S|Toggles the pixel grid (selects or clears the **Pixel grid** option in the [Grid Settings dialog box](../mfc/grid-settings-dialog-box-image-editor-for-icons.md)).|  
|Image.ShowTileGrid|CTRL + SHIFT + ALT + S|Toggles the tile grid (selects or clears the **Tile grid** option in the [Grid Settings dialog box](../mfc/grid-settings-dialog-box-image-editor-for-icons.md)).|  
|Image.SmallBrush|CTRL + . (period)|Reduces the **Brush** size to one pixel. (See also Image.LargerBrush and Image.SmallerBrush in this table.)|  
|Image.SmallerBrush|CTRL + - (minus)|Reduces the brush size by one pixel in each direction. To expand the brush size again, see Image.LargerBrush in this table.|  
|Image.TextTool|CTRL + T|Opens the [Text Tool dialog box](../mfc/text-tool-dialog-box-image-editor-for-icons.md).|  
|Image.UseSelectionAsBrush|CTRL + U|Draws using the current selection as a brush.|  
|Image.ZoomIn|CTRL + SHIFT + . (period)<br /><br /> - or -<br /><br /> CTRL + UP ARROW|Increases the magnification for the current view.|  
|Image.ZoomOut|CTRL + , (comma)<br /><br /> - or -<br /><br /> CTRL + DOWN ARROW|Reduces the magnification of the current view.|  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 None  
  
## See Also  
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)

