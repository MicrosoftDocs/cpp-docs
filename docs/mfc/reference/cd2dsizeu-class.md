---
title: "CD2DSizeU Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CD2DSizeU"
  - "afxrendertarget/CD2DSizeU"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DSizeU class"
ms.assetid: 6e679ba8-2112-43c3-8275-70b660856f02
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
# CD2DSizeU Class
A wrapper for D2D1_SIZE_U.  
  
## Syntax  
  
```  
class CD2DSizeU : public D2D1_SIZE_U;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSizeU::CD2DSizeU](#cd2dsizeu__cd2dsizeu)|Overloaded. Constructs a `CD2DSizeU` object from `D2D1_SIZE_U` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSizeU::IsNull](#cd2dsizeu__isnull)|Returns a `boolean` value that indicates whether an expression contains no valid data ( `null`).|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSizeU::operator CSize](#cd2dsizeu__operator_csize)|Converts `CD2DSizeU` to `CSize` object.|  
  
## Inheritance Hierarchy  
 `D2D1_SIZE_U`  
  
 [CD2DSizeU](../../mfc/reference/cd2dsizeu-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dsizeu__cd2dsizeu"></a>  CD2DSizeU::CD2DSizeU  
 Constructs a CD2DSizeU object from CSize object.  
  
```  
CD2DSizeU(
    const CSize& size);

 
CD2DSizeU(
    const D2D1_SIZE_U& size);

 
CD2DSizeU(
    const D2D1_SIZE_U* size);

 
CD2DSizeU(
    UINT32 cx = 0,  
    UINT32 cy = 0);
```  
  
### Parameters  
 `size`  
 source size  
  
 `cx`  
 source width  
  
 `cy`  
 source height  
  
##  <a name="cd2dsizeu__isnull"></a>  CD2DSizeU::IsNull  
 Returns a Boolean value that indicates whether an expression contains no valid data (Null).  
  
```  
BOOL IsNull() const;

 
```  
  
### Return Value  
 TRUE if width and height are empty; otherwise FALSE.  
  
##  <a name="cd2dsizeu__operator_csize"></a>  CD2DSizeU::operator CSize  
 Converts CD2DSizeU to CSize object.  
  
```  
operator CSize();
```   
  
### Return Value  
 Current value of D2D size.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
