---
title: "XFORM Structure"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 4fb4ef5b-05d2-4884-82d1-1cb8f7be6302
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# XFORM Structure
The `XFORM` structure has the following form:  
  
## Syntax  
  
```  
  
      typedef struct  tagXFORM {  /* xfrm */  
    FLOAT eM11;  
    FLOAT eM12;  
    FLOAT eM21;  
    FLOAT eM22;  
    FLOAT eDx;  
    FLOAT eDy;  
} XFORM;  
```  
  
## Remarks  
 The `XFORM` structure specifies a world-space to page-space transformation. The **eDx** and **eDy** members specify the horizontal and vertical translation components, respectively. The following table shows how the other members are used, depending on the operation:  
  
|Operation|eM11|eM12|eM21|eM22|  
|---------------|----------|----------|----------|----------|  
|`Rotation`|Cosine of rotation angle|Sine of rotation angle|Negative sine of rotation angle|Cosine of rotation angle|  
|**Scaling**|Horizontal scaling component|Nothing|Nothing|Vertical scaling component|  
|**Shear**|Nothing|Horizontal proportionality constant|Vertical proportionality constant|Nothing|  
|**Reflection**|Horizontal reflection component|Nothing|Nothing|Vertical reflection component|  
  
## Requirements  
 **Header:** wingdi.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../VS_visualcpp/Structures--Styles--Callbacks--and-Message-Maps.md)   
 [CRgn::CreateFromData](../Topic/CRgn::CreateFromData.md)