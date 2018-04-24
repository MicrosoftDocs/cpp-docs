---
title: "Resizing an Entire Image (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
  - "Image editor [C++], resizing images"
  - "size [C++], images"
  - "images [C++], resizing"
  - "resizing images"
ms.assetid: 10782937-7eb4-4340-bdec-618ee7d7904b
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Resizing an Entire Image (Image Editor for Icons)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Resizing an Entire Image (Image Editor for Icons)](https://docs.microsoft.com/cpp/windows/resizing-an-entire-image-image-editor-for-icons).  
  
  
To resize an entire image using the properties window  
  
1.  Open the image whose properties you want to change.  
  
2.  In the **Width** and **Height** boxes in the [Properties window](http://msdn.microsoft.com/library/e6e0fa4f-75c4-4a52-af15-281cd61876ca), type the dimensions that you want.  
  
     If you are increasing the size of the image, the Image editor extends the image to the right, downward, or both, and fills the new region with the current background color. The image is not stretched.  
  
     If you are decreasing the size of the image, the Image editor crops the image on the right or bottom edge, or both.  
  
    > [!NOTE]
    >  You can use the Width and Height properties to resize only the entire image, not to resize a partial selection.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 Requirements  
  
 None  
  
## See Also  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Resizing an Image](../mfc/resizing-an-image-image-editor-for-icons.md)









