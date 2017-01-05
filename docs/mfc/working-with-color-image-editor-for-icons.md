---
title: "Working with Color (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.image.color"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "images [C++], background colors"
  - "Image editor [C++], Colors Palette"
  - "colors [C++], image"
  - "Colors Palette, Image editor"
  - "palettes, Image editor colors"
  - "foreground colors, Image editor"
  - "colors [C++]"
ms.assetid: d34ff96f-241d-494f-abdd-13811ada8cd3
caps.latest.revision: 11
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
# Working with Color (Image Editor for Icons)
The Image editor contains many features that specifically handle and customize colors. You can set a foreground or background color, fill bounded areas with color, or select a color on an image to use as the current foreground or background color. You can use tools on the [Image Editor toolbar](../mfc/toolbar-image-editor-for-icons.md) along with the colors palette in the [Colors window](../windows/colors-window-image-editor-for-icons.md) to create images.  
  
 All colors for monochrome and 16-color images are shown in the Colors palette in the Colors window. In addition to the 16 standard colors, you can create your own custom colors. Changing any of the colors in the palette will immediately change the corresponding color in the image.  
  
 When working with 256-color icon and cursor images, the Colors property in the [Properties window](/visualstudio/ide/reference/properties-window) is used. For more information, see [Creating a 256-color icon or cursor](../mfc/creating-a-256-color-icon-or-cursor-image-editor-for-icons.md).  
  
> [!NOTE]
>  Using the Image Editor, you can view 32-bit images, but you cannot edit them.  
  
 True-color images can also be created. However, true color samples do not appear in the full palette in the Colors window; they appear only in the foreground or background color indicator area. True colors are created using the [Custom Color Selector dialog box](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md). For more information, see [Customizing or changing colors](../windows/customizing-or-changing-colors-image-editor-for-icons.md).  
  
 You can save customized color palettes on disk and reload them as needed. The color palette you used most recently is saved in the Registry and automatically loaded the next time you start Visual Studio.  
  
-   [Selecting Foreground or Background Colors](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md)  
  
-   [Filling a Bounded Area of an Image with a Color](../windows/filling-a-bounded-area-of-an-image-with-a-color-image-editor-for-icons.md)  
  
-   [Picking up a Color from an Image to Use Elsewhere](../windows/picking-up-a-color-from-an-image-to-use-elsewhere-image-editor-for-icons.md)  
  
-   [Choosing a Transparent or Opaque Background](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md)  
  
-   [Inverting the Colors in a Selection](../windows/inverting-the-colors-in-a-selection-image-editor-for-icons.md)  
  
-   [Customizing or Changing Colors](../windows/customizing-or-changing-colors-image-editor-for-icons.md)  
  
-   [Saving and Loading Different Color Palettes](../windows/saving-and-loading-different-color-palettes-image-editor-for-icons.md)  
  
-   [Colors Window](../windows/colors-window-image-editor-for-icons.md)  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 None  
  
## See Also  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   

