---
title: "POINT Structure1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["POINT", "LPPOINT"]
dev_langs: ["C++"]
helpviewer_keywords: ["LPPOINT structure [MFC]", "POINT structure [MFC]"]
ms.assetid: 965736d8-4e53-41b6-9b8b-6961992dd21f
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# POINT Structure1
The **POINT** structure defines the x*-* and y-coordinates of a point.  
  
## Syntax  
  
```  
typedef struct tagPOINT {  
    LONG x;  
    LONG y;  
} POINT;  
```  
  
#### Parameters  
 *x*  
 Specifies the x-coordinate of a point.  
  
 *y*  
 Specifies the y-coordinate of a point.  
  
## Example  
 [!code-cpp[NVC_MFC_Utilities#37](../../mfc/codesnippet/cpp/point-structure1_1.cpp)]  
  
## Requirements  
 **Header:** windef.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPoint Class](../../atl-mfc-shared/reference/cpoint-class.md)
