---
title: "Image Menu (Image Editor for Icons)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ac2b4d53-1919-4fd1-a0af-d3c085c45af2
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Image Menu (Image Editor for Icons)
The Image menu, which appears only when the Image editor is active, has commands for editing images, managing color palettes, and setting Image Editor window options. In addition, commands for using device images are available when working with icons and cursors.  
  
 **Invert Colors**  
 Inverts your colors. For more information, see [Inverting the Colors in a Selection](../VS_visualcpp/Inverting-the-Colors-in-a-Selection--Image-Editor-for-Icons-.md).  
  
 **Flip Horizontal**  
 Flips the image or selection horizontally. For more information, see [Flipping an Image](../VS_visualcpp/Flipping-an-Image--Image-Editor-for-Icons-.md).  
  
 **Flip Vertical**  
 Flips the image or selection vertically. For more information, see [Flipping an Image](../VS_visualcpp/Flipping-an-Image--Image-Editor-for-Icons-.md).  
  
 **Rotate 90 Degrees**  
 Rotates the image or selection 90 degrees. For more information, see [Flipping an Image](../VS_visualcpp/Flipping-an-Image--Image-Editor-for-Icons-.md).  
  
 **Show Colors Window**  
 Opens the [Colors window](../VS_visualcpp/Colors-Window--Image-Editor-for-Icons-.md), in which you can choose the colors to use for your image. For more information, see [Working with Color](../VS_visualcpp/Working-with-Color--Image-Editor-for-Icons-.md).  
  
 **Use Selection as Brush**  
 Enables you to create a custom brush from a portion of an image. Your selection becomes a custom brush that distributes the colors in the selection across the image. Copies of the selection are left along the dragging path. The more slowly you drag, the more copies are made. For more information, see [Creating a Custom Brush](../VS_visualcpp/Creating-a-Custom-Brush--Image-Editor-for-Icons-.md).  
  
 **Copy and Outline Selection**  
 Creates a copy of the current selection and outlines it. If the background color is contained in the current selection, it will be excluded if you have [transparent](../VS_visualcpp/Choosing-a-Transparent-or-Opaque-Background--Image-Editor-for-Icons-.md) selected.  
  
 **Adjust Colors**  
 Opens the [Custom Color Selector](../VS_visualcpp/Custom-Color-Selector-Dialog-Box--Image-Editor-for-Icons-.md), which allows you to customize the colors you use for your image. For more information, see [Customizing or Changing Colors](../VS_visualcpp/Customizing-or-Changing-Colors--Image-Editor-for-Icons-.md).  
  
 **Load Palette**  
 Opens the [Load Color Palette dialog box](../VS_visualcpp/Load-Palette-Colors-Dialog-Box--Image-Editor-for-Icons-.md), which enables you to load palette colors previously saved to a .pal file.  
  
 **Save Palette**  
 Saves the palette colors to a .pal file.  
  
 **Draw Opaque**  
 When selected, makes the current selection opaque. When cleared, makes the current selection transparent. For more information, see [Choosing an Opaque or Transparent Background](../VS_visualcpp/Choosing-a-Transparent-or-Opaque-Background--Image-Editor-for-Icons-.md).  
  
 **Toolbar Editor**  
 Opens the [New Toolbar Resource dialog box](../VS_visualcpp/New-Toolbar-Resource-Dialog-Box.md).  
  
 **Grid Settings**  
 Opens the [Grid Settings dialog box](../VS_visualcpp/Grid-Settings-Dialog-Box--Image-Editor-for-Icons-.md) in which you can specify grids for your image.  
  
 **New Image Type**  
 Opens the [New <Device\> Image Type dialog box](../VS_visualcpp/New--Device--Image-Type-Dialog-Box--Image-Editor-for-Icons-.md). A single icon resource can contain several images of different sizes; windows can use the appropriate icon size depending on how it is going to be displayed. A new device type does not modify the size of the icon, but rather creates a new image within the icon. Only applies to icons and cursors.  
  
 **Current Icon/Cursor Image Type**  
 Opens a submenu that lists the first available cursor or icon images (the first nine). The last command on the submenu, **More...**, opens the [Open <Device\> Image dialog box](../VS_visualcpp/Open--Device--Image-Dialog-Box--Image-Editor-for-Icons-.md).  
  
 **Delete Image Type**  
 Deletes the selected device image.  
  
 **Tools**  
 Launches a submenu which contains all the tools available from the [Image Editor toolbar](../VS_visualcpp/Toolbar--Image-Editor-for-Icons-.md).  
  
## Requirements  
 None  
  
## See Also  
 [Accelerator Keys](../VS_visualcpp/Accelerator-Keys--Image-Editor-for-Icons-.md)   
 [Image Editor for Icons](../VS_visualcpp/Image-Editor-for-Icons.md)