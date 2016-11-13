---
title: "CD2DBrushProperties Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# CD2DBrushProperties Class
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

 
CD2DBrushProperties(
    FLOAT _opacity);

 
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
