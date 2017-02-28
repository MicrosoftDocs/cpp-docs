---
title: "Drawing Lines or Closed Figures (Image Editor for Icons) | Microsoft Docs"
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
helpviewer_keywords: 
  - "closed figures, drawing"
  - "lines [C++], painting"
  - "lines [C++], drawing"
  - "Image editor [C++], drawing lines"
  - "shapes, drawing"
ms.assetid: 7edd86db-77b1-451f-8001-bbfed9c6304f
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
# Drawing Lines or Closed Figures (Image Editor for Icons)
The Image editor tools for drawing lines and closed figures all work in the same way: you place the insertion point at one point and drag to another. For lines, these points are the endpoints. For closed figures, these points are opposite corners of a rectangle bounding the figure.  
  
 Lines are drawn in a width determined by the current brush selection, and framed figures are drawn in a width determined by the current width selection. Lines and all figures, both framed and filled, are drawn in the current foreground color if you press the left mouse button, or in the current background color if you press the right mouse button.  
  
### To draw a line  
  
1.  On the [Image Editor toolbar](../windows/toolbar-image-editor-for-icons.md) (or from the **Image** menu, **Tools** command), click the **Line** tool.  
  
2.  If necessary, select colors and a brush:  
  
    -   In the [Colors palette](../windows/colors-window-image-editor-for-icons.md), click the left mouse button to select a foreground color or the right mouse button to select a background color.  
  
    -   In the [Options selector](../windows/toolbar-image-editor-for-icons.md), click a shape representing the brush you want to use.  
  
3.  Place the pointer at the line's starting point.  
  
4.  Drag to the line's endpoint.  
  
### To draw a closed figure  
  
1.  On the **Image Editor** toolbar (or from the **Image** menu, **Tools** command), click a **Closed-Figure Drawing** tool.  
  
     The **Closed-Figure Drawing** tools create figures as indicated on their respective buttons.  
  
2.  If necessary, select colors and a line width.  
  
3.  Move the pointer to one corner of the rectangular area in which you want to draw the figure.  
  
4.  Drag the pointer to the diagonally opposite corner.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](https://msdn.microsoft.com/library/f45fce5x.aspx) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](https://msdn.microsoft.com/library/xbx3z216.aspx). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
 Requirements  
  
 None  
  
## See Also  
 [Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../windows/image-editor-for-icons.md)   
 [Working with Color](../windows/working-with-color-image-editor-for-icons.md)

