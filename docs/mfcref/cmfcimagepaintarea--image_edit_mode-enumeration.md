---
title: "CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration"
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
  - "IMAGE_EDIT_MODE Enumeration"
  - "CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration"
  - "CMFCImagePaintArea.IMAGE_EDIT_MODE Enumeration"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IMAGE_EDIT_MODE Enumeration method"
ms.assetid: e51db66a-fa1c-4766-9dac-a25b595f871a
caps.latest.revision: 12
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
# CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration
Specifies a drawing mode that you use to modify an image in an image editor dialog box.  
  
## Syntax  
  
```  
enum IMAGE_EDIT_MODE  
{  
   IMAGE_EDIT_MODE_PEN = 0,  
   IMAGE_EDIT_MODE_FILL,  
   IMAGE_EDIT_MODE_LINE,  
   IMAGE_EDIT_MODE_RECT,  
   IMAGE_EDIT_MODE_ELLIPSE,  
   IMAGE_EDIT_MODE_COLOR  
};  
```  
  
## Members  
  
|||  
|-|-|  
|Name|Description|  
|`IMAGE_EDIT_MODE_PEN`|Used to draw individual pixels.|  
|`IMAGE_EDIT_MODE_FILL`|Used to fill all adjacent areas that contain the color at the current cursor location.|  
|`IMAGE_EDIT_MODE_LINE`|Used to draw a line.|  
|`IMAGE_EDIT_MODE_RECT`|Used to draw a rectangle.|  
|`IMAGE_EDIT_MODE_ELLIPSE`|Used to draw an ellipse.|  
|`IMAGE_EDIT_MODE_COLOR`|Used to set the current color to the color at the current cursor location.|  
  
### Remarks  
 The                         `CMFCImagePaintArea` and                         `CMFCImageEditorDialog` classes use this enumeration to set the current drawing mode. The drawing mode and current color are used to modify the picture area in an image editor dialog box. For more information about                         `CMFCImagePaintArea` and                         `CMFCImageEditorDialog`, see                         [CMFCImagePaintArea Class](../mfcref/cmfcimagepaintarea-class.md) and                         [CMFCImageEditorDialog Class](../mfcref/cmfcimageeditordialog-class.md).  
  
 When you select a color from an image by using the                         `IMAGE_EDIT_MODE_COLOR` drawing mode, the framework sets the current drawing mode to                         `IMAGE_EDIT_MODE_PEN`.  
  
## Requirements  
 **Header:** afximagepaintarea.h  
  
## See Also  
 [Macros and Globals](../mfcref/mfc-macros-and-globals.md)   
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfcref/mfc-classes.md)   
 [CMFCImagePaintArea Class](../mfcref/cmfcimagepaintarea-class.md)   
 [CMFCImageEditorDialog Class](../mfcref/cmfcimageeditordialog-class.md)