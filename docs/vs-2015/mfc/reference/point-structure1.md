---
title: "POINT Structure1 | Microsoft Docs"
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
  - "POINT"
  - "LPPOINT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LPPOINT structure"
  - "POINT structure"
ms.assetid: 965736d8-4e53-41b6-9b8b-6961992dd21f
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# POINT Structure1
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [POINT Structure1](https://docs.microsoft.com/cpp/mfc/reference/point-structure1).  
  
  
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
 [!code-cpp[NVC_MFC_Utilities#37](../../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_Utilities/Cpp/NVC_MFC_Utilities.cpp#37)]  
  
## Requirements  
 **Header:** windef.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPoint Class](../../atl-mfc-shared/reference/cpoint-class.md)






