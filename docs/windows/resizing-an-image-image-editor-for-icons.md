---
title: "Resizing an Image (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["vc.editors.image.editing"]
dev_langs: ["C++"]
helpviewer_keywords: ["Image editor [C++], resizing images", "graphics [C++], resizing", "images [C++], resizing", "resizing images"]
ms.assetid: d83a02c4-4dfe-4586-a0df-51a50c2ba71d
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Resizing an Image (Image Editor for Icons)
The behavior of the Image editor while resizing an image depends on whether you've [selected](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md) the entire image or just part of it.  
  
 When the selection includes only part of the image, the Image editor shrinks the selection by deleting rows or columns of pixels and filling the vacated regions with the current background color, or it stretches the selection by duplicating rows or columns of pixels.  
  
 When the selection includes the entire image, the Image editor either shrinks and stretches the image, or crops and extends it.  
  
 There are two mechanisms for resizing an image: the sizing handles and the [Properties window](/visualstudio/ide/reference/properties-window). You can drag the sizing handles to change the size of all or part of an image. Sizing handles that you can drag are solid. You cannot drag handles that are hollow. You can use the Properties window to resize the entire image only, not a selected part.  
  
 ![Sizing handles on a bitmap](../mfc/media/vcimageeditorsizinghandles.gif "vcImageEditorSizingHandles")  
Sizing Handles  
  
> [!NOTE]
>  If you have the Tile Grid option selected in the [Grid Settings dialog box](../windows/grid-settings-dialog-box-image-editor-for-icons.md), then resizing snaps to the next tile grid line. If only the Pixel Grid option is selected (the default setting), resizing snaps to the next available pixel.  
  
-   [Resizing an Entire Image](../windows/resizing-an-entire-image-image-editor-for-icons.md)  
  
-   [Cropping or Extending an Entire Image](cropping-or-extending-an-entire-image-image-editor-for-icons.md)  
  
-   [Shrinking or Stretching an Entire Image](../windows/shrinking-or-stretching-an-entire-image-image-editor-for-icons.md)  
  
-   [Shrinking or Stretching Part of an Image](../windows/shrinking-or-stretching-part-of-an-image-image-editor-for-icons.md)  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](https://msdn.microsoft.com/library/f45fce5x.aspx) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](https://msdn.microsoft.com/library/xbx3z216.aspx). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
## Requirements  
 None  
  
## See Also  
 [Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../windows/image-editor-for-icons.md)

