---
title: "Window Panes (Image Editor for Icons) | Microsoft Docs"
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
  - "vc.editors.icon"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "graphics editor [C++]"
  - "Image editor [C++], panes"
ms.assetid: d66ea5b3-e2e2-4fc4-aa99-f50022cc690e
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
# Window Panes (Image Editor for Icons)
The Image Editor window typically displays an image in two panes separated by a splitter bar. One view is actual size and the other is enlarged (the default enlargement factor is 6). The views in these two panes are updated automatically: changes you make in one pane are immediately shown in the other. The two panes make it easy for you to work on an enlarged view of your image, in which you can distinguish individual pixels and, at the same time, observe the effect of your work on the actual-size view of the image.  
  
 The left pane uses as much space as is needed (up to half of the Image window) to display the 1:1 magnification view (the default) of your image. The right pane displays the zoomed image (6:1 magnification by default). You can [change the magnification](../mfc/changing-the-magnification-factor-image-editor-for-icons.md) in each pane using the **Magnify** tool on the [Image Editor toolbar](../mfc/toolbar-image-editor-for-icons.md) or by using the accelerator keys.  
  
 You can enlarge the smaller pane of the Image Editor window and use the two panes to show different regions of a large image. Click in the pane to select it.  
  
 You can change the relative sizes of the panes by positioning the pointer on the split bar and moving the split bar to the right or left. The split bar can move all the way to either side if you want to work on only one pane.  
  
 If the Image editor pane is enlarged by a factor of 4 or greater, you can [display a pixel grid](../mfc/displaying-or-hiding-the-pixel-grid-image-editor-for-icons.md) that delimits the individual pixels in the image.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 None  
  
## See Also  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)

