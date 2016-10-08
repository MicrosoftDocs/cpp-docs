---
title: "Editing Parts of an Image (Image Editor for Icons)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ff4f5fef-71a4-4fd8-825e-049399fed391
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Editing Parts of an Image (Image Editor for Icons)
You can perform standard editing operations — cutting, copying, clearing, and moving — on a [selection](../VS_visualcpp/Selecting-an-Area-of-an-Image--Image-Editor-for-Icons-.md), whether the selection is the entire image or just a part of it. Because the Image editor uses the Windows Clipboard, you can transfer images between the Image editor and other applications for Windows.  
  
 In addition, you can resize the selection, whether it includes the entire image or just a part.  
  
### To cut the current selection and move it to the clipboard  
  
1.  Click **Cut** on the **Edit** menu.  
  
### To copy the selection  
  
1.  Position the pointer inside the selection border or anywhere on it except the sizing handles.  
  
2.  Hold down the **CTRL** key as you drag the selection to a new location. The area of the original selection is unchanged.  
  
3.  To copy the selection into the image at its current location, click outside the selection cursor.  
  
### To paste the clipboard contents into an image  
  
1.  From the **Edit** menu, choose **Paste**.  
  
     The Clipboard contents, surrounded by the selection border, appear in the upper-left corner of the pane.  
  
2.  Position the pointer within the selection border and drag the image to the desired location on the image.  
  
3.  To anchor the image at its new location, click outside of the selection border.  
  
### To delete the current selection without moving it to the clipboard  
  
1.  From the **Edit** menu, choose **Delete**.  
  
     The original area of the selection is filled with the current background color.  
  
    > [!NOTE]
    >  You can access the Cut, Copy, Paste, and Delete commands by right clicking in the Resource View window.  
  
### To move the selection  
  
1.  Position the pointer inside the selection border or anywhere on it except the sizing handles.  
  
2.  Drag the selection to its new location.  
  
3.  To anchor the selection in the image at its new location, click outside the selection border.  
  
 For more information on drawing with a selection, see [Creating a Custom Brush](../VS_visualcpp/Creating-a-Custom-Brush--Image-Editor-for-Icons-.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requirements  
  
 None  
  
## See Also  
 [Accelerator Keys](../VS_visualcpp/Accelerator-Keys--Image-Editor-for-Icons-.md)   
 [Editing Graphical Resources](../VS_visualcpp/Editing-Graphical-Resources--Image-Editor-for-Icons-.md)   
 [Image Editor for Icons](../VS_visualcpp/Image-Editor-for-Icons.md)