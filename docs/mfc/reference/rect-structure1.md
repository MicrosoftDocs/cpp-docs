---
title: "RECT Structure1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["LPRECT", "RECT"]
dev_langs: ["C++"]
helpviewer_keywords: ["RECT structure [MFC]", "LPRECT structure [MFC]"]
ms.assetid: 1b3160de-64e9-40d1-89eb-af3e0fd6acf0
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# RECT Structure1
The `RECT` structure defines the coordinates of the upper-left and lower-right corners of a rectangle.  
  
## Syntax  
  
```  
typedef struct tagRECT {  
    LONG left;  
    LONG top;  
    LONG right;  
    LONG bottom;  
} RECT;  
```  
  
## Members  
 `left`  
 Specifies the x-coordinate of the upper-left corner of a rectangle.  
  
 `top`  
 Specifies the y-coordinate of the upper-left corner of a rectangle.  
  
 `right`  
 Specifies the x-coordinate of the lower-right corner of a rectangle.  
  
 `bottom`  
 Specifies the y-coordinate of the lower-right corner of a rectangle.  
  
## Example  
 [!code-cpp[NVC_MFC_Utilities#38](../../mfc/codesnippet/cpp/rect-structure1_1.cpp)]  
  
## Requirements  
 **Header:** windef.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRect Class](../../atl-mfc-shared/reference/crect-class.md)
