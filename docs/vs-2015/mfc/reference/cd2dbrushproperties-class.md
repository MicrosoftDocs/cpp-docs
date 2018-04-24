---
title: "CD2DBrushProperties Class | Microsoft Docs"
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
  - "CD2DBrushProperties"
  - "afxrendertarget/CD2DBrushProperties"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DBrushProperties class"
ms.assetid: c77d717f-0a16-4d74-b2ce-0ae1766ed6f9
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CD2DBrushProperties Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CD2DBrushProperties Class](https://docs.microsoft.com/cpp/mfc/reference/cd2dbrushproperties-class).  
  
  
A wrapper for `D2D1_BRUSH_PROPERTIES`.  
  
## Syntax  
  
```  
class CD2DBrushProperties : public D2D1_BRUSH_PROPERTIES;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBrushProperties::CD2DBrushProperties](#cd2dbrushproperties__cd2dbrushproperties)|Overloaded. Creates a `CD2D_BRUSH_PROPERTIES` structure|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBrushProperties::CommonInit](#cd2dbrushproperties__commoninit)|Initializes the object|  
  
## Inheritance Hierarchy  
 `D2D1_BRUSH_PROPERTIES`  
  
 [CD2DBrushProperties](../../mfc/reference/cd2dbrushproperties-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dbrushproperties__cd2dbrushproperties"></a>  CD2DBrushProperties::CD2DBrushProperties  
 Creates a CD2D_BRUSH_PROPERTIES structure  
  
```  
CD2DBrushProperties();  
CD2DBrushProperties(FLOAT _opacity);

 CD2DBrushProperties(
    D2D1_MATRIX_3X2_F _transform,  
    FLOAT _opacity = 1.);
```  
  
### Parameters  
 `_opacity`  
 The base opacity of the brush. The default value is 1.0.  
  
 `_transform`  
 The transformation to apply to the brush  
  
##  <a name="cd2dbrushproperties__commoninit"></a>  CD2DBrushProperties::CommonInit  
 Initializes the object  
  
```  
void CommonInit();
```  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)






