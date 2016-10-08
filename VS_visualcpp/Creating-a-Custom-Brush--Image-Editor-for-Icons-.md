---
title: "Creating a Custom Brush (Image Editor for Icons)"
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
ms.assetid: 750881aa-6f47-4de9-8ca6-a7a12afc6383
caps.latest.revision: 7
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
# Creating a Custom Brush (Image Editor for Icons)
A custom brush is a rectangular portion of an image that you pick up and use like one of the Image editor's ready-made brushes. All operations you can perform on a selection, you can perform on a custom brush as well.  
  
### To create a custom brush from a portion of an image  
  
1.  [Select the part of the image](../VS_visualcpp/Selecting-an-Area-of-an-Image--Image-Editor-for-Icons-.md) that you want to use for a brush.  
  
2.  Holding the **SHIFT** key down, click in the selection and drag it across the image.  
  
     \- or -  
  
3.  From the **Image** menu, choose **Use Selection as Brush**.  
  
     Your selection becomes a custom brush that distributes the colors in the selection across the image. Copies of the selection are left along the dragging path. The more slowly you drag, the more copies are made.  
  
     **Note** Clicking the **Use a Selection as Brush** without first selecting a portion of the image will use the whole image as a brush. The result of using a custom brush will also depend on whether you've selected an [Opaque or Transparent background](../VS_visualcpp/Choosing-a-Transparent-or-Opaque-Background--Image-Editor-for-Icons-.md).  
  
 Pixels in a custom brush that match the current background color are normally transparent: they do not paint over the existing image. You can change this behavior so that background-color pixels paint over the existing image.  
  
 You can use the custom brush like a stamp or a stencil to create a variety of special effects.  
  
#### To draw custom brush shapes in the background color  
  
1.  [Select an opaque or transparent background](../VS_visualcpp/Choosing-a-Transparent-or-Opaque-Background--Image-Editor-for-Icons-.md).  
  
2.  [Set the background color](../VS_visualcpp/Selecting-Foreground-or-Background-Colors--Image-Editor-for-Icons-.md) to the color in which you want to draw.  
  
3.  Position the custom brush where you want to draw.  
  
4.  Click the right mouse button. Any opaque regions of the custom brush are drawn in the background color.  
  
#### To double or halve the custom brush size  
  
1.  Press the **PLUS SIGN** (**+**) key to double the brush size, or the **MINUS SIGN** (**–**) key to halve it.  
  
#### To cancel the custom brush  
  
1.  Press **ESC** or choose another drawing tool.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
### Requirements  
 None  
  
## See Also  
 [Accelerator Keys](../VS_visualcpp/Accelerator-Keys--Image-Editor-for-Icons-.md)   
 [Editing Graphical Resources](../VS_visualcpp/Editing-Graphical-Resources--Image-Editor-for-Icons-.md)   
 [Image Editor for Icons](../VS_visualcpp/Image-Editor-for-Icons.md)