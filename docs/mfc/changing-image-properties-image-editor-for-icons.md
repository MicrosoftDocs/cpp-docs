---
title: "Changing Image Properties (Image Editor for Icons) | Microsoft Docs"
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
  - "images [C++], properties"
  - "Image editor [C++], Properties window"
  - "Image editor [C++], image properties"
  - "Properties window, image editor"
ms.assetid: f6172bf1-08c4-4dfd-b542-dd8749e83fe6
caps.latest.revision: 10
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
# Changing Image Properties (Image Editor for Icons)
You can set or modify properties of an image using the [Properties window](/visualstudio/ide/reference/properties-window).  
  
### To change an image's properties  
  
1.  Open the image in the **Image** editor.  
  
2.  In the **Properties** window, change any or all properties for your image.  
  
    |Property|Description|  
    |--------------|-----------------|  
    |**Colors**|Specifies the color scheme for the image. Select Monochrome, 16, or 256, or True Color. If you have already drawn the image with a 16-color palette, selecting Monochrome causes substitutions of black and white for the colors in the image. Contrast is not always maintained: for example, adjacent areas of red and green are both converted to black.|  
    |**Filename**|Specifies the name of the image file. By default, Visual Studio assigns a base filename created by removing the first four characters ("IDB_") from the default resource identifier (IDB_BITMAP1) and adding the appropriate extension. The file name for the image in this example would be BITMAP1.bmp. You could rename it MYBITMAP1.bmp.|  
    |**Height**|Sets the height of the image (in pixels). The default value is 48. The image is cropped or blank space is added below the existing image.|  
    |**ID**|Sets the resource's identifier. For an image, Microsoft Visual Studio, by default, assigns the next available identifier in a series: IDB_BITMAP1, IDB_BITMAP2, and so forth. Similar names are used for icons and cursors.|  
    |**Palette**|Changes color properties. Double-click to select a color and display the [Custom Color Selector dialog box](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md). Define the color by typing RGB or HSL values in the appropriate text boxes.|  
    |**SaveCompressed**|Indicates whether the image is in a compressed format. This property is read-only. Visual Studio does not allow you to save images in a compressed format, so for any images created in Visual Studio, this property will be **False**. If you open a compressed image (created in another program) in Visual Studio, this property will be **True**. If you save a compressed image using Visual Studio, it will be uncompressed and this property will revert back to **False**.|  
    |**Width**|Sets the width of the image (in pixels). The default value for bitmaps is 48. The image is cropped or blank space is added to the right of the existing image.|  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 Requirements  
  
 None  
  
## See Also  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)

