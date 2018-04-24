---
title: "XFORM Structure | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "XFORM"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "XFORM structure"
ms.assetid: 4fb4ef5b-05d2-4884-82d1-1cb8f7be6302
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# XFORM Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [XFORM Structure](https://docs.microsoft.com/cpp/mfc/reference/xform-structure).  
  
  
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
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRgn::CreateFromData](../../mfc/reference/crgn-class.md#CreateFromData)







