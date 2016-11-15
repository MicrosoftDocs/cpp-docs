---
title: "Saving and Loading Different Color Palettes (Image Editor for Icons) | Microsoft Docs"
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
  - "color palettes [C++]"
  - "palettes"
  - "palettes, Image editor"
  - "colors [C++], Image editor"
  - "Image editor [C++], palettes"
ms.assetid: 694b6346-e606-4f19-aa01-9b4ceb47f423
caps.latest.revision: 7
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
# Saving and Loading Different Color Palettes (Image Editor for Icons)
You can save and load a Colors palette that contains [customized colors](../windows/customizing-or-changing-colors-image-editor-for-icons.md). (By default, the Colors palette most recently used is automatically loaded when you start Visual Studio.)  
  
> [!TIP]
>  Since the Image editor has no means to restore the default Colors palette, you should save the default Colors palette under a name such as standard.pal or default.pal so that you can easily restore the default settings.  
  
### To save a custom colors palette  
  
1.  From the **Image** menu, choose **Save Palette**.  
  
2.  Navigate to the directory where you want to save the palette, and type a name for the palette.  
  
3.  Click **Save**.  
  
### To load a custom colors palette  
  
1.  From the **Image** menu, choose **Load Palette**.  
  
2.  In the [Load Color Palette dialog box](../windows/load-palette-colors-dialog-box-image-editor-for-icons.md), navigate to the correct directory and select the palette you want to load. Color palettes are saved with a .pal file extension.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 Requirements  
  
 None  
  
## See Also  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Working with Color](../mfc/working-with-color-image-editor-for-icons.md)