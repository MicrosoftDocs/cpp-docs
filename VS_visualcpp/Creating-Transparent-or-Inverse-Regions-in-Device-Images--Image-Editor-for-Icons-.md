---
title: "Creating Transparent or Inverse Regions in Device Images (Image Editor for Icons)"
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
ms.assetid: a994954b-b039-4391-a535-58d1fa10fc3b
caps.latest.revision: 9
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
# Creating Transparent or Inverse Regions in Device Images (Image Editor for Icons)
In the [Image editor](../VS_visualcpp/Image-Editor-for-Icons.md), the initial icon or cursor image has a transparent attribute. Although icon and cursor images are rectangular, many do not appear so because parts of the image are transparent; the underlying image on the screen shows through the icon or cursor. When you drag an icon, parts of the image may appear in an inverted color. You create this effect by setting the screen color and inverse color in the [Colors window](../VS_visualcpp/Colors-Window--Image-Editor-for-Icons-.md).  
  
 The screen and inverse colors you apply to icons and cursors either shape and color the derived image or designate inverse regions. The colors indicate parts of the image possessing those attributes. You can change the colors that represent the screen-color and inverse-color attributes in editing. These changes do not affect the appearance of the icon or cursor in your application.  
  
> [!NOTE]
>  The dialog boxes and menu commands you see might differ from those described in Help depending on your active settings or edition. To change your settings, choose **Import and Export Settings** on the **Tools** menu. For more information, see [Customizing Development Settings in Visual Studio](assetId:///22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
### To create transparent or inverse regions  
  
1.  In the **Colors** window, click the **Screen-Color** selector or the **Inverse-Color** selector.  
  
2.  Apply the screen or inverse color onto your image using a drawing tool. For more information on drawing tools, see [Using a Drawing Tool](../VS_visualcpp/Using-a-Drawing-Tool--Image-Editor-for-Icons-.md).  
  
### To change the screen or inverse color  
  
1.  Select either the **Screen-Color** selector or the **Inverse-Color** selector.  
  
2.  Choose a color from the **Colors** palette in the **Colors** window.  
  
     The complementary color is automatically designated for the other selector.  
  
    > [!TIP]
    >  If you double-click the Screen-Color or Inverse-Color selector, the [Custom Color Selector dialog box](../VS_visualcpp/Custom-Color-Selector-Dialog-Box--Image-Editor-for-Icons-.md) appears.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requirements  
  
 None  
  
## See Also  
 [Accelerator Keys](../VS_visualcpp/Accelerator-Keys--Image-Editor-for-Icons-.md)   
 [Icons and Cursors: Image Resources for Display Devices](../VS_visualcpp/Icons-and-Cursors--Image-Resources-for-Display-Devices--Image-Editor-for-Icons-.md)