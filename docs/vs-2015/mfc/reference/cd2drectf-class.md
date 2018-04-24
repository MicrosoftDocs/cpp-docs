---
title: "CD2DRectF Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxrendertarget/CD2DRectF"
  - "CD2DRectF"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DRectF class"
ms.assetid: 87c12d87-9d18-4a19-ba14-0f51d6b6835a
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CD2DRectF Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CD2DRectF Class](https://docs.microsoft.com/cpp/mfc/reference/cd2drectf-class).  
  
  
A wrapper for `D2D1_RECT_F`.  
  
## Syntax  
  
```  
class CD2DRectF : public D2D1_RECT_F;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRectF::CD2DRectF](#cd2drectf__cd2drectf)|Overloaded. Constructs a `CD2DRectF` object from `D2D1_RECT_F` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRectF::IsNull](#cd2drectf__isnull)|Returns a `boolean` value that indicates whether an expression contains no valid data ( `null`).|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRectF::operator CRect](#cd2drectf__operator_crect)|Converts `CD2DRectF` to `CRect` object.|  
  
## Inheritance Hierarchy  
 `D2D1_RECT_F`  
  
 [CD2DRectF](../../mfc/reference/cd2drectf-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2drectf__cd2drectf"></a>  CD2DRectF::CD2DRectF  
 Constructs a CD2DRectF object from CRect object.  
  
```  
CD2DRectF(const CRect& rect);  
CD2DRectF(const D2D1_RECT_F& rect);  
  CD2DRectF(const D2D1_RECT_F* rect);

 
CD2DRectF(
    FLOAT fLeft = 0.,  
    FLOAT fTop = 0.,  
    FLOAT fRight = 0.,  
    FLOAT fBottom = 0.);
```  
  
### Parameters  
 `rect`  
 source rectangle  
  
 `fLeft`  
 source left coordinate  
  
 `fTop`  
 source top coordinate  
  
 `fRight`  
 source right coordinate  
  
 `fBottom`  
 source bottom coordinate  
  
##  <a name="cd2drectf__isnull"></a>  CD2DRectF::IsNull  
 Returns a Boolean value that indicates whether an expression contains no valid data (Null).  
  
```  
BOOL IsNull() const;  
```  
  
### Return Value  
 TRUE if rectangle's top, left, bottom, and right values are all equal to 0; otherwise FALSE.  
  
##  <a name="cd2drectf__operator_crect"></a>  CD2DRectF::operator CRect  
 Converts CD2DRectF to CRect object.  
  
```  
operator CRect();
```   
  
### Return Value  
 Current value of D2D rectangle.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)






