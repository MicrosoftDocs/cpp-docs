---
title: "New Toolbar Resource Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.newtoolbarresource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "New Toolbar Resource dialog box"
ms.assetid: 52dd01ad-e748-4ab2-b3eb-59f5df990ca6
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
# New Toolbar Resource Dialog Box
The New Toolbar Resource dialog box allows you to specify the width and height of the buttons you are adding to a toolbar resource. The default is 16 × 15 pixels.  
  
 A bitmap that is used to create a toolbar has a maximum width of 2048. So if you set the **Button Width** to 512, you can only have four buttons. If you set the width to 513, you can only have three buttons.  
  
 **Button Width**  
 Provides a space for you to enter the width for the toolbar buttons you are converting from a bitmap resource to a toolbar resource. The images are cropped to the width and height specified, and the colors are adjusted to use standard toolbar colors (16 colors).  
  
 **Button Height**  
 Provides a space for you to enter the height for the toolbar buttons you are converting from a bitmap resource to a toolbar resource. The images are cropped to the width and height specified, and the colors are adjusted to use standard toolbar colors (16 colors).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## Requirements  
 MFC or ATL  
  
## See Also  
 [Toolbar Button Properties](../mfc/toolbar-button-properties.md)   
 [Converting Bitmaps to Toolbars](../mfc/converting-bitmaps-to-toolbars.md)   
 [Toolbar Editor](../mfc/toolbar-editor.md)

