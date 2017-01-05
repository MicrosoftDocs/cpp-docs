---
title: "Icons and Cursors: Image Resources for Display Devices (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.icon"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cursors [C++], creating"
  - "image resources, display devices"
  - "icons [C++], creating"
  - "cursors [C++], types"
  - "icons [C++]"
  - "Image editor [C++], icons and cursors"
  - "cursors [C++]"
  - "display devices, creating icons for"
  - "cursors [C++], hot spots"
  - "icons [C++], types"
ms.assetid: 8f0809a8-0cf0-4da9-b23d-51f28bf15f5b
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Icons and Cursors: Image Resources for Display Devices (Image Editor for Icons)
Icons and cursors are graphical resources that can contain multiple images in different sizes and color schemes for different types of display devices. In addition, a cursor has a "hot spot," the location Windows uses to track its position. Both icons and cursors are created and edited using the Image editor, as are bitmaps and other images.  
  
 When you create a new icon or cursor, the Image editor first creates an image of a standard type. The image is initially filled with the screen (transparent) color. If the image is a cursor, the hot spot is initially the upper-left corner (coordinates 0,0).  
  
 By default, the Image editor supports the creation of additional images for the devices shown in the following table. You can create images for other devices by typing width, height, and color-count parameters into the [Custom Image dialog box](../mfc/custom-image-dialog-box-image-editor-for-icons.md).  
  
> [!NOTE]
>  Using the Image Editor, you can view 32-bit images, but you cannot edit them.  
  
|Color|Width (pixels)|Height (pixels)|  
|-----------|----------------------|-----------------------|  
|Monochrome|16|16|  
|Monochrome|32|32|  
|Monochrome|48|48|  
|Monochrome|64|64|  
|Monochrome|96|96|  
|16|16|16|  
|16|32|32|  
|16|64|64|  
|16|48|48|  
|16|96|96|  
|256|16|16|  
|256|32|32|  
|256|48|48|  
|256|64|64|  
|256|96|96|  
  
-   [Creating a New Device Image (Icon or Cursor)](../mfc/creating-a-device-image-image-editor-for-icons.md)  
  
-   [Adding an Image for a Different Display Device](../mfc/adding-an-image-for-a-different-display-device-image-editor-for-icons.md)  
  
-   [Copying a Device Image](../mfc/copying-a-device-image-image-editor-for-icons.md)  
  
-   [Deleting a Device Image](../mfc/deleting-a-device-image-image-editor-for-icons.md)  
  
-   [Creating Transparent or Inverse Regions in Device Images](../mfc/creating-transparent-or-inverse-regions-in-device-images.md)  
  
-   [Creating a 256-Color Icon or Cursor](../mfc/creating-a-256-color-icon-or-cursor-image-editor-for-icons.md)  
  
-   [Setting a Cursor's Hot Spot](../mfc/setting-a-cursor-s-hot-spot-image-editor-for-icons.md)  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 None  
  
## See Also  
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)   
 [Icons](http://msdn.microsoft.com/library/windows/desktop/ms646973)   
 [Cursors](http://msdn.microsoft.com/library/windows/desktop/ms646970)

