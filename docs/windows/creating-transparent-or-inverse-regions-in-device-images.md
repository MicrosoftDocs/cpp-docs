---
title: "Creating Transparent or Inverse Regions in Device Images (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["cursors [C++], screen regions", "inverse colors, device images", "transparent regions, device images", "transparency, device images", "Image editor [C++], device images", "inverse regions, device images", "cursors [C++], transparent regions", "screen colors", "regions, transparent", "icons [C++], transparent regions", "display devices, transparent and screen regions", "transparent regions in devices", "regions, inverse", "colors [C++], Image editor", "device projects, transparent images", "icons [C++], screen regions"]
ms.assetid: a994954b-b039-4391-a535-58d1fa10fc3b
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating Transparent or Inverse Regions in Device Images (Image Editor for Icons)
In the [Image editor](../windows/image-editor-for-icons.md), the initial icon or cursor image has a transparent attribute. Although icon and cursor images are rectangular, many do not appear so because parts of the image are transparent; the underlying image on the screen shows through the icon or cursor. When you drag an icon, parts of the image may appear in an inverted color. You create this effect by setting the screen color and inverse color in the [Colors window](../windows/colors-window-image-editor-for-icons.md).  
  
 The screen and inverse colors you apply to icons and cursors either shape and color the derived image or designate inverse regions. The colors indicate parts of the image possessing those attributes. You can change the colors that represent the screen-color and inverse-color attributes in editing. These changes do not affect the appearance of the icon or cursor in your application.  
  
> [!NOTE]
>  The dialog boxes and menu commands you see might differ from those described in Help depending on your active settings or edition. To change your settings, choose **Import and Export Settings** on the **Tools** menu. For more information, see [Customizing Development Settings in Visual Studio](http://msdn.microsoft.com/en-us/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
### To create transparent or inverse regions  
  
1.  In the **Colors** window, click the **Screen-Color** selector or the **Inverse-Color** selector.  
  
2.  Apply the screen or inverse color onto your image using a drawing tool. For more information on drawing tools, see [Using a Drawing Tool](using-a-drawing-tool-image-editor-for-icons.md).  
  
### To change the screen or inverse color  
  
1.  Select either the **Screen-Color** selector or the **Inverse-Color** selector.  
  
2.  Choose a color from the **Colors** palette in the **Colors** window.  
  
     The complementary color is automatically designated for the other selector.  
  
    > [!TIP]
    >  If you double-click the Screen-Color or Inverse-Color selector, the [Custom Color Selector dialog box](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md) appears.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](https://msdn.microsoft.com/library/f45fce5x.aspx) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](https://msdn.microsoft.com/library/xbx3z216.aspx). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
 Requirements  
  
 None  
  
## See Also  
 [Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Icons and Cursors: Image Resources for Display Devices](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)

