---
title: "New Toolbar Resource Dialog Box"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.editors.newtoolbarresource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "New Toolbar Resource dialog box"
ms.assetid: 52dd01ad-e748-4ab2-b3eb-59f5df990ca6
caps.latest.revision: 7
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
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requirements  
 MFC or ATL  
  
## See Also  
 [Toolbar Button Properties](../mfc/toolbar-button-properties.md)   
 [Converting Bitmaps to Toolbars](../mfc/converting-bitmaps-to-toolbars.md)   
 [Toolbar Editor](../mfc/toolbar-editor.md)