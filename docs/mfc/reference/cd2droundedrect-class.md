---
title: "CD2DRoundedRect Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxrendertarget/CD2DRoundedRect"
  - "CD2DRoundedRect"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DRoundedRect class"
ms.assetid: 06207fb5-e92b-41c0-bceb-b45d8f466531
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
# CD2DRoundedRect Class
A wrapper for `D2D1_ROUNDED_RECT`.  
  
## Syntax  
  
```  
class CD2DRoundedRect : public D2D1_ROUNDED_RECT;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRoundedRect::CD2DRoundedRect](#cd2droundedrect__cd2droundedrect)|Overloaded. Constructs a `CD2DRoundedRect` object from `D2D1_ROUNDED_RECT` object.|  
  
## Inheritance Hierarchy  
 `D2D1_ROUNDED_RECT`  
  
 [CD2DRoundedRect](../../mfc/reference/cd2droundedrect-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2droundedrect__cd2droundedrect"></a>  CD2DRoundedRect::CD2DRoundedRect  
 Constructs a CD2DRoundedRect object from CD2DRectF object.  
  
```  
CD2DRoundedRect(
    const CD2DRectF& rectIn,  
    const CD2DSizeF& sizeRadius);

 
CD2DRoundedRect(
    const D2D1_ROUNDED_RECT& rectIn);

 
CD2DRoundedRect(
    const D2D1_ROUNDED_RECT* rectIn);
```  
  
### Parameters  
 `rectIn`  
 source rectangle  
  
 `sizeRadius`  
 radius size  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
