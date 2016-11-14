---
title: "Image Menu (Image Editor for Icons) | Microsoft Docs"
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
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "Image menu"
ms.assetid: ac2b4d53-1919-4fd1-a0af-d3c085c45af2
caps.latest.revision: 8
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
# Image Menu (Image Editor for Icons)
The Image menu, which appears only when the Image editor is active, has commands for editing images, managing color palettes, and setting Image Editor window options. In addition, commands for using device images are available when working with icons and cursors.  
  
 **Invert Colors**  
 Inverts your colors. For more information, see [Inverting the Colors in a Selection](../windows/inverting-the-colors-in-a-selection-image-editor-for-icons.md).  
  
 **Flip Horizontal**  
 Flips the image or selection horizontally. For more information, see [Flipping an Image](../mfc/flipping-an-image-image-editor-for-icons.md).  
  
 **Flip Vertical**  
 Flips the image or selection vertically. For more information, see [Flipping an Image](../mfc/flipping-an-image-image-editor-for-icons.md).  
  
 **Rotate 90 Degrees**  
 Rotates the image or selection 90 degrees. For more information, see [Flipping an Image](../mfc/flipping-an-image-image-editor-for-icons.md).  
  
 **Show Colors Window**  
 Opens the [Colors window](../windows/colors-window-image-editor-for-icons.md), in which you can choose the colors to use for your image. For more information, see [Working with Color](../mfc/working-with-color-image-editor-for-icons.md).  
  
 **Use Selection as Brush**  
 Enables you to create a custom brush from a portion of an image. Your selection becomes a custom brush that distributes the colors in the selection across the image. Copies of the selection are left along the dragging path. The more slowly you drag, the more copies are made. For more information, see [Creating a Custom Brush](../mfc/creating-a-custom-brush-image-editor-for-icons.md).  
  
 **Copy and Outline Selection**  
 Creates a copy of the current selection and outlines it. If the background color is contained in the current selection, it will be excluded if you have [transparent](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md) selected.  
  
 **Adjust Colors**  
 Opens the [Custom Color Selector](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md), which allows you to customize the colors you use for your image. For more information, see [Customizing or Changing Colors](../windows/customizing-or-changing-colors-image-editor-for-icons.md).  
  
 **Load Palette**  
 Opens the [Load Color Palette dialog box](../windows/load-palette-colors-dialog-box-image-editor-for-icons.md), which enables you to load palette colors previously saved to a .pal file.  
  
 **Save Palette**  
 Saves the palette colors to a .pal file.  
  
 **Draw Opaque**  
 When selected, makes the current selection opaque. When cleared, makes the current selection transparent. For more information, see [Choosing an Opaque or Transparent Background](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).  
  
 **Toolbar Editor**  
 Opens the [New Toolbar Resource dialog box](../mfc/new-toolbar-resource-dialog-box.md).  
  
 **Grid Settings**  
 Opens the [Grid Settings dialog box](../mfc/grid-settings-dialog-box-image-editor-for-icons.md) in which you can specify grids for your image.  
  
 **New Image Type**  
 Opens the [New \<Device> Image Type dialog box](../mfc/new-device-image-type-dialog-box-image-editor-for-icons.md). A single icon resource can contain several images of different sizes; windows can use the appropriate icon size depending on how it is going to be displayed. A new device type does not modify the size of the icon, but rather creates a new image within the icon. Only applies to icons and cursors.  
  
 **Current Icon/Cursor Image Type**  
 Opens a submenu that lists the first available cursor or icon images (the first nine). The last command on the submenu, **More...**, opens the [Open \<Device> Image dialog box](../mfc/open-device-image-dialog-box-image-editor-for-icons.md).  
  
 **Delete Image Type**  
 Deletes the selected device image.  
  
 **Tools**  
 Launches a submenu which contains all the tools available from the [Image Editor toolbar](../mfc/toolbar-image-editor-for-icons.md).  
  
## Requirements  
 None  
  
## See Also  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)

