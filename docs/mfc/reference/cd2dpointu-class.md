---
title: "CD2DPointU Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CD2DPointU"
  - "afxrendertarget/CD2DPointU"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DPointU class"
ms.assetid: 04733f96-b6de-4a89-82e3-caad1e8087a9
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
# CD2DPointU Class
A wrapper for `D2D1_POINT_2U`.  
  
## Syntax  
  
```  
class CD2DPointU : public D2D1_POINT_2U;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DPointU::CD2DPointU](#cd2dpointu__cd2dpointu)|Overloaded. Constructs a `CD2DPointU` from object `D2D1_POINT_2U` object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DPointU::operator CPoint](#cd2dpointu__operator_cpoint)|Converts `CD2DPointU` to `CPoint` object.|  
  
## Inheritance Hierarchy  
 `D2D1_POINT_2U`  
  
 [CD2DPointU](../../mfc/reference/cd2dpointu-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dpointu__cd2dpointu"></a>  CD2DPointU::CD2DPointU  
 Constructs a CD2DPointU object from CPoint object.  
  
```  
CD2DPointU(
    const CPoint& pt);

 
CD2DPointU(
    const D2D1_POINT_2U& pt);

 
CD2DPointU(
    const D2D1_POINT_2U* pt);

 
CD2DPointU(
    UINT32 uX = 0,  
    UINT32 uY = 0);
```  
  
### Parameters  
 `pt`  
 source point  
  
 `uX`  
 source X  
  
 `uY`  
 source Y  
  
##  <a name="cd2dpointu__operator_cpoint"></a>  CD2DPointU::operator CPoint  
 Converts CD2DPointU to CPoint object.  
  
```  
operator CPoint();
```   
  
### Return Value  
 Current value of D2D point.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
