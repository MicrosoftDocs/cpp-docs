---
title: "CD2DPointF Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxrendertarget/CD2DPointF"
  - "CD2DPointF"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DPointF class"
ms.assetid: 30f72083-1c8a-4f50-adb2-72dbbe3522d4
caps.latest.revision: 18
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
# CD2DPointF Class
A wrapper for `D2D1_POINT_2F`.  
  
## Syntax  
  
```  
class CD2DPointF : public D2D1_POINT_2F;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DPointF::CD2DPointF](#cd2dpointf__cd2dpointf)|Overloaded. Constructs a `CD2DPointF` object from `D2D1_POINT_2F` object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DPointF::operator CPoint](#cd2dpointf__operator_cpoint)|Converts `CD2DPointF` to `CPoint` object.|  
  
## Inheritance Hierarchy  
 `D2D1_POINT_2F`  
  
 [CD2DPointF](../../mfc/reference/cd2dpointf-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dpointf__cd2dpointf"></a>  CD2DPointF::CD2DPointF  
 Constructs a CD2DPointF object from CPoint object.  
  
```  
CD2DPointF(
    const CPoint& pt);

 
CD2DPointF(
    const D2D1_POINT_2F& pt);

 
CD2DPointF(
    const D2D1_POINT_2F* pt);

 
CD2DPointF(
    FLOAT fX = 0.,  
    FLOAT fY = 0.);
```  
  
### Parameters  
 `pt`  
 source point  
  
 `fX`  
 source X  
  
 `fY`  
 source Y  
  
##  <a name="cd2dpointf__operator_cpoint"></a>  CD2DPointF::operator CPoint  
 Converts CD2DPointF to CPoint object.  
  
```  
operator CPoint();
```   
  
### Return Value  
 Current value of D2D point.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
