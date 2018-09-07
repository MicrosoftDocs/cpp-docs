---
title: "CD2DEllipse Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CD2DEllipse", "AFXRENDERTARGET/CD2DEllipse", "AFXRENDERTARGET/CD2DEllipse::CD2DEllipse"]
dev_langs: ["C++"]
helpviewer_keywords: ["CD2DEllipse [MFC], CD2DEllipse"]
ms.assetid: e9f02f54-acf2-427e-b349-db50cd9a77df
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CD2DEllipse Class
A wrapper for `D2D1_ELLIPSE`.  
  
## Syntax  
  
```  
class CD2DEllipse : public D2D1_ELLIPSE;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DEllipse::CD2DEllipse](#cd2dellipse)|Overloaded. Constructs a `CD2DEllipse` object from `D2D1_ELLIPSE` object.|  
  
## Inheritance Hierarchy  
 `D2D1_ELLIPSE`  
  
 `CD2DEllipse`  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dellipse"></a>  CD2DEllipse::CD2DEllipse  
 Constructs a CD2DEllipse object from CD2DRectF object.  
  
```  
CD2DEllipse(const CD2DRectF& rect);  
CD2DEllipse(const D2D1_ELLIPSE& ellipse);  
  CD2DEllipse(const D2D1_ELLIPSE* ellipse);

 
CD2DEllipse(
    const CD2DPointF& ptCenter,  
    const CD2DSizeF& sizeRadius);
```  
  
### Parameters  
 *rect*  
 source rectangle  
  
 *ellipse*  
 source ellipse  
  
 *ptCenter*  
 The center point of the ellipse.  
  
 *sizeRadius*  
 The X-radius and Y-radius of the ellipse.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
