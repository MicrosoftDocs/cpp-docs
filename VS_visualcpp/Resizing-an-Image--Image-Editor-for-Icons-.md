---
title: "Resizing an Image (Image Editor for Icons)"
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
ms.assetid: d83a02c4-4dfe-4586-a0df-51a50c2ba71d
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
# Resizing an Image (Image Editor for Icons)
The behavior of the Image editor while resizing an image depends on whether you've [selected](../VS_visualcpp/Selecting-an-Area-of-an-Image--Image-Editor-for-Icons-.md) the entire image or just part of it.  
  
 When the selection includes only part of the image, the Image editor shrinks the selection by deleting rows or columns of pixels and filling the vacated regions with the current background color, or it stretches the selection by duplicating rows or columns of pixels.  
  
 When the selection includes the entire image, the Image editor either shrinks and stretches the image, or crops and extends it.  
  
 There are two mechanisms for resizing an image: the sizing handles and the [Properties window](../Topic/Properties%20Window.md). You can drag the sizing handles to change the size of all or part of an image. Sizing handles that you can drag are solid. You cannot drag handles that are hollow. You can use the Properties window to resize the entire image only, not a selected part.  
  
 ![Sizing handles on a bitmap](../VS_visualcpp/media/vcImageEditorSizingHandles.gif "vcImageEditorSizingHandles")  
Sizing Handles  
  
> [!NOTE]
>  If you have the Tile Grid option selected in the [Grid Settings dialog box](../VS_visualcpp/Grid-Settings-Dialog-Box--Image-Editor-for-Icons-.md), then resizing snaps to the next tile grid line. If only the Pixel Grid option is selected (the default setting), resizing snaps to the next available pixel.  
  
-   [Resizing an Entire Image](../VS_visualcpp/Resizing-an-Entire-Image--Image-Editor-for-Icons-.md)  
  
-   [Cropping or Extending an Entire Image](../VS_visualcpp/Cropping-or-Extending-an-Entire-Image--Image-Editor-for-Icons-.md)  
  
-   [Shrinking or Stretching an Entire Image](../VS_visualcpp/Shrinking-or-Stretching-an-Entire-Image--Image-Editor-for-Icons-.md)  
  
-   [Shrinking or Stretching Part of an Image](../VS_visualcpp/Shrinking-or-Stretching-Part-of-an-Image--Image-Editor-for-Icons-.md)  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requirements  
 None  
  
## See Also  
 [Accelerator Keys](../VS_visualcpp/Accelerator-Keys--Image-Editor-for-Icons-.md)   
 [Editing Graphical Resources](../VS_visualcpp/Editing-Graphical-Resources--Image-Editor-for-Icons-.md)   
 [Image Editor for Icons](../VS_visualcpp/Image-Editor-for-Icons.md)