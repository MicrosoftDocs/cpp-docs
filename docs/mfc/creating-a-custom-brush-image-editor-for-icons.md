---
title: "Creating a Custom Brush (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "colors [C++], brush"
  - "brushes, colors"
  - "brushes, creating custom"
  - "images [C++], creating custom brushes"
  - "graphics [C++], custom brushes"
  - "custom brushes"
ms.assetid: 750881aa-6f47-4de9-8ca6-a7a12afc6383
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
# Creating a Custom Brush (Image Editor for Icons)
A custom brush is a rectangular portion of an image that you pick up and use like one of the Image editor's ready-made brushes. All operations you can perform on a selection, you can perform on a custom brush as well.  
  
### To create a custom brush from a portion of an image  
  
1.  [Select the part of the image](../mfc/selecting-an-area-of-an-image-image-editor-for-icons.md) that you want to use for a brush.  
  
2.  Holding the **SHIFT** key down, click in the selection and drag it across the image.  
  
     \- or -  
  
3.  From the **Image** menu, choose **Use Selection as Brush**.  
  
     Your selection becomes a custom brush that distributes the colors in the selection across the image. Copies of the selection are left along the dragging path. The more slowly you drag, the more copies are made.  
  
     **Note** Clicking the **Use a Selection as Brush** without first selecting a portion of the image will use the whole image as a brush. The result of using a custom brush will also depend on whether you've selected an [Opaque or Transparent background](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).  
  
 Pixels in a custom brush that match the current background color are normally transparent: they do not paint over the existing image. You can change this behavior so that background-color pixels paint over the existing image.  
  
 You can use the custom brush like a stamp or a stencil to create a variety of special effects.  
  
#### To draw custom brush shapes in the background color  
  
1.  [Select an opaque or transparent background](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).  
  
2.  [Set the background color](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md) to the color in which you want to draw.  
  
3.  Position the custom brush where you want to draw.  
  
4.  Click the right mouse button. Any opaque regions of the custom brush are drawn in the background color.  
  
#### To double or halve the custom brush size  
  
1.  Press the **PLUS SIGN** (**+**) key to double the brush size, or the **MINUS SIGN** (**–**) key to halve it.  
  
#### To cancel the custom brush  
  
1.  Press **ESC** or choose another drawing tool.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
### Requirements  
 None  
  
## See Also  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)

