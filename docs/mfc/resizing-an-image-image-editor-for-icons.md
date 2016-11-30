---
title: "Resizing an Image (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.image.editing"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "Image editor [C++], resizing images"
  - "graphics [C++], resizing"
  - "images [C++], resizing"
  - "resizing images"
ms.assetid: d83a02c4-4dfe-4586-a0df-51a50c2ba71d
caps.latest.revision: 9
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
# Resizing an Image (Image Editor for Icons)
The behavior of the Image editor while resizing an image depends on whether you've [selected](../mfc/selecting-an-area-of-an-image-image-editor-for-icons.md) the entire image or just part of it.  
  
 When the selection includes only part of the image, the Image editor shrinks the selection by deleting rows or columns of pixels and filling the vacated regions with the current background color, or it stretches the selection by duplicating rows or columns of pixels.  
  
 When the selection includes the entire image, the Image editor either shrinks and stretches the image, or crops and extends it.  
  
 There are two mechanisms for resizing an image: the sizing handles and the [Properties window](/visualstudio/ide/reference/properties-window). You can drag the sizing handles to change the size of all or part of an image. Sizing handles that you can drag are solid. You cannot drag handles that are hollow. You can use the Properties window to resize the entire image only, not a selected part.  
  
 ![Sizing handles on a bitmap](../mfc/media/vcimageeditorsizinghandles.gif "vcimageeditorsizinghandles")  
Sizing Handles  
  
> [!NOTE]
>  If you have the Tile Grid option selected in the [Grid Settings dialog box](../mfc/grid-settings-dialog-box-image-editor-for-icons.md), then resizing snaps to the next tile grid line. If only the Pixel Grid option is selected (the default setting), resizing snaps to the next available pixel.  
  
-   [Resizing an Entire Image](../mfc/resizing-an-entire-image-image-editor-for-icons.md)  
  
-   [Cropping or Extending an Entire Image](../mfc/cropping-or-extending-an-entire-image-image-editor-for-icons.md)  
  
-   [Shrinking or Stretching an Entire Image](../mfc/shrinking-or-stretching-an-entire-image-image-editor-for-icons.md)  
  
-   [Shrinking or Stretching Part of an Image](../mfc/shrinking-or-stretching-part-of-an-image-image-editor-for-icons.md)  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 None  
  
## See Also  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)

