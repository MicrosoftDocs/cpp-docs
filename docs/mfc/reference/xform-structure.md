---
title: "XFORM Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["XFORM"]
dev_langs: ["C++"]
helpviewer_keywords: ["XFORM structure [MFC]"]
ms.assetid: 4fb4ef5b-05d2-4884-82d1-1cb8f7be6302
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
 The `XFORM` structure specifies a world-space to page-space transformation. The `eDx` and `eDy` members specify the horizontal and vertical translation components, respectively. The following table shows how the other members are used, depending on the operation:  
  
|Operation|eM11|eM12|eM21|eM22|  
|---------------|----------|----------|----------|----------|  
|`Rotation`|Cosine of rotation angle|Sine of rotation angle|Negative sine of rotation angle|Cosine of rotation angle|  
|`Scaling`|Horizontal scaling component|Nothing|Nothing|Vertical scaling component|  
|`Shear`|Nothing|Horizontal proportionality constant|Vertical proportionality constant|Nothing|  
|`Reflection`|Horizontal reflection component|Nothing|Nothing|Vertical reflection component|  
  
## Requirements  
 **Header:** wingdi.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRgn::CreateFromData](../../mfc/reference/crgn-class.md#createfromdata)

