---
title: "Choosing a Transparent or Opaque Background (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["opaque backgrounds", "background colors, images", "colors [C++], image", "Image editor [C++], transparent or opague backgrounds", "background images", "images [C++], transparency", "images [C++], opaque background", "transparent backgrounds", "transparency, background", "transparent backgrounds, images"]
ms.assetid: 61b743d9-c86b-405d-9a81-0806431b4363
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# Choosing a Transparent or Opaque Background (Image Editor for Icons)
When you move or copy a selection from an image, any pixels in the selection that match the current background color are, by default, transparent; they do not obscure pixels in the target location.  
  
 You can switch from a transparent background (the default) to an opaque background, and back again. When you use a selection tool, the **Transparent Background** and **Opaque Background** options appear in the Option selector on the **Image Editor** toolbar (as seen below).  
  
 ![Background options &#45; opaque or transparent](../windows/media/vcimageeditoropaqtranspback.gif "vcImageEditorOpaqTranspBack")  
Transparent and Opaque Options on the Image Editor Toolbar  
  
### To switch between a transparent and opaque background  
  
1.  In the **Image Editor** toolbar, click the **Option** selector, and then click the appropriate background:  
  
    -   **Opaque Background (O)**: Existing image is obscured by all parts of the selection.  
  
    -   **Transparent Background (T)**: Existing image shows through parts of the selection that match the current background color.  
  
 \- or -  
  
-   On the **Image** menu, select or clear **Draw Opaque**.  
  
 You can change the background color while a selection is already in effect to change which parts of the image are transparent.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](https://msdn.microsoft.com/library/f45fce5x.aspx) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](https://msdn.microsoft.com/library/xbx3z216.aspx). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
 Requirements  
  
 None  
  
## See Also  
 [Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Working with Color](../windows/working-with-color-image-editor-for-icons.md)