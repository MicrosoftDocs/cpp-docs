---
title: "Selecting an Area of an Image (Image Editor for Icons) | Microsoft Docs"
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
  - "Image editor [C++], image selection"
  - "Image editor [C++], selecting images"
  - "images [C++], selecting"
  - "cursors [C++], selecting areas of"
ms.assetid: 8b6ce4ad-eba1-4ece-86ba-cea92c3edff2
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
# Selecting an Area of an Image (Image Editor for Icons)
You can use selection tools to define an area of an image that you want to cut, copy, clear, resize, invert, or move. With the **Rectangle Selection** tool you can define and select a rectangular region of the image. With the **Irregular Selection** tool you can draw a freehand outline of the area you want to select for the cut, copy, or other operation.  
  
> [!NOTE]
>  See the **Rectangle Selection** and **Irregular Selection** tools pictured in [Image Editor toolbar](../mfc/toolbar-image-editor-for-icons.md) or view the Tool tips associated with each button on the **Image Editor** toolbar.  
  
 You can also create a custom brush from a selection. For more information, see [Creating a Custom Brush](../mfc/creating-a-custom-brush-image-editor-for-icons.md).  
  
### To select an area of an image  
  
1.  On the **Image Editor** toolbar (or from the **Image** menu, **Tools** command), click the selection tool you want.  
  
2.  Move the insertion point to one corner of the image area that you want to select. Cross hairs appear when the insertion point is over the image.  
  
3.  Drag the insertion point to the opposite corner of the area you want to select. A rectangle shows which pixels will be selected. All pixels within the rectangle, including those under the rectangle, are included in the selection.  
  
4.  Release the mouse button. The selection border encloses the selected area.  
  
### To select an entire image  
  
1.  Click the image outside of the current selection. The selection border changes focus and encompasses the whole image once again.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 Requirements  
  
 None  
  
## See Also  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)

