---
title: "CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["IMAGE_EDIT_MODE Enumeration"]
dev_langs: ["C++"]
helpviewer_keywords: ["IMAGE_EDIT_MODE Enumeration method [MFC]"]
ms.assetid: e51db66a-fa1c-4766-9dac-a25b595f871a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|IMAGE_EDIT_MODE_PEN|Used to draw individual pixels.|  
|IMAGE_EDIT_MODE_FILL|Used to fill all adjacent areas that contain the color at the current cursor location.|  
|IMAGE_EDIT_MODE_LINE|Used to draw a line.|  
|IMAGE_EDIT_MODE_RECT|Used to draw a rectangle.|  
|IMAGE_EDIT_MODE_ELLIPSE|Used to draw an ellipse.|  
|IMAGE_EDIT_MODE_COLOR|Used to set the current color to the color at the current cursor location.|  
  
### Remarks  
 The `CMFCImagePaintArea` and `CMFCImageEditorDialog` classes use this enumeration to set the current drawing mode. The drawing mode and current color are used to modify the picture area in an image editor dialog box. For more information about `CMFCImagePaintArea` and `CMFCImageEditorDialog`, see [CMFCImagePaintArea Class](../../mfc/reference/cmfcimagepaintarea-class.md) and [CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md).  
  
 When you select a color from an image by using the IMAGE_EDIT_MODE_COLOR drawing mode, the framework sets the current drawing mode to IMAGE_EDIT_MODE_PEN.  
  
## Requirements  
 **Header:** afximagepaintarea.h  
  
## See Also  
 [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCImagePaintArea Class](../../mfc/reference/cmfcimagepaintarea-class.md)   
 [CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md)
